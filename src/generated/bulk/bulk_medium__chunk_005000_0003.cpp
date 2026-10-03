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
extern int FUN_1003d5d7(...);
extern int FUN_1006aac8(...);
extern int FUN_10bbd800(...);
extern int FUN_1110f110(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int createPropertyBag(...);
extern int getSingleton(...);
extern int int_allocRep(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern int thunk_FUN_101a9c10(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_1023a9f0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_102bcb30(...);
extern int thunk_FUN_102e6ae0(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10352990(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_1036b500(...);
extern int thunk_FUN_103768e0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104d98f0(...);
extern int thunk_FUN_104d9cc0(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105b5360(...);
extern int thunk_FUN_106ab850(...);
extern int thunk_FUN_10b87b00(...);
extern int thunk_FUN_10b87c50(...);
extern int thunk_FUN_10b87da0(...);
extern int thunk_FUN_10b87ef0(...);
extern int thunk_FUN_10b88380(...);
extern int thunk_FUN_10b8b660(...);
extern int thunk_FUN_10b8e250(...);
extern int thunk_FUN_10b8f140(...);
extern int thunk_FUN_10b91160(...);
extern int thunk_FUN_10b913e0(...);
extern int thunk_FUN_10b95cf0(...);
extern int thunk_FUN_10b95f10(...);
extern int thunk_FUN_10b961a0(...);
extern int thunk_FUN_10b98450(...);
extern int thunk_FUN_10b98a00(...);
extern int thunk_FUN_10b98d60(...);
extern int thunk_FUN_10b99010(...);
extern int thunk_FUN_10b990f0(...);
extern int thunk_FUN_10b9bfd0(...);
extern int thunk_FUN_10b9e930(...);
extern int thunk_FUN_10ba0bf0(...);
extern int thunk_FUN_10ba0e70(...);
extern int thunk_FUN_10ba31f0(...);
extern int thunk_FUN_10ba3240(...);
extern int thunk_FUN_10ba3340(...);
extern int thunk_FUN_10ba6fd0(...);
extern int thunk_FUN_10ba7200(...);
extern int thunk_FUN_10ba87e0(...);
extern int thunk_FUN_10bab1e0(...);
extern int thunk_FUN_10baeb40(...);
extern int thunk_FUN_10bb4c10(...);
extern int thunk_FUN_10bba8f0(...);
extern int thunk_FUN_10bbaa30(...);
extern int thunk_FUN_10bc8860(...);
extern int thunk_FUN_10bc8b30(...);
extern int thunk_FUN_10bc9d70(...);
extern int thunk_FUN_10bcad90(...);
extern int thunk_FUN_10bcda40(...);
extern int thunk_FUN_10bcdb00(...);
extern int thunk_FUN_10bce9a0(...);
extern int thunk_FUN_10bcee70(...);
extern int thunk_FUN_10bceec0(...);
extern int thunk_FUN_10bcef80(...);
extern int thunk_FUN_10bcf040(...);
extern int thunk_FUN_10bcf100(...);
extern int thunk_FUN_10bcf160(...);
extern int thunk_FUN_10bcf230(...);
extern int thunk_FUN_10bcf300(...);
extern int thunk_FUN_10bcf3d0(...);
extern int thunk_FUN_10bcf420(...);
extern int thunk_FUN_10bcf4e0(...);
extern int thunk_FUN_10bcf810(...);
extern int thunk_FUN_10bcf870(...);
extern int thunk_FUN_10bcf8e0(...);
extern int thunk_FUN_10bcf950(...);
extern int thunk_FUN_10bcf9b0(...);
extern int thunk_FUN_10bcfa10(...);
extern int thunk_FUN_10bcfa70(...);
extern int thunk_FUN_10bcfad0(...);
extern int thunk_FUN_10bd7130(...);
extern int thunk_FUN_10bd7200(...);
extern int thunk_FUN_10bd9e70(...);
extern int thunk_FUN_10bd9e90(...);
extern int thunk_FUN_10bda250(...);
extern int thunk_FUN_10bda290(...);
extern int thunk_FUN_10bde610(...);
extern int thunk_FUN_10bdeed0(...);
extern int thunk_FUN_10bdf8e0(...);
extern int thunk_FUN_10be1cc0(...);
extern int thunk_FUN_10be1d10(...);
extern int thunk_FUN_10cf3780(...);
extern int thunk_FUN_10d9e6c0(...);
extern int thunk_FUN_10da6830(...);
extern int thunk_FUN_10f56a40(...);
extern int thunk_FUN_10f7b950(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112a240(...);
extern int thunk_FUN_1112a990(...);
extern int thunk_FUN_1112ba50(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_111a74c0(...);
extern int thunk_FUN_111c0a80(...);
extern int thunk_FUN_111c0af0(...);
extern int thunk_FUN_11206ea0(...);
extern int thunk_FUN_11207070(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1124a3d0(...);
extern int thunk_FUN_1124a3e0(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112af500(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_00004494;
extern int DAT_00004498;
extern int DAT_0000449c;
extern int DAT_11882ff0;
extern int DAT_11910258;
extern int DAT_12126b84;
extern int DAT_121a5030;
extern int g_lSCObjCount;
extern int ghidra_vftable_EtagFileParser;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RDeviceDeleteAIOOp;
extern int ghidra_vftable_RDeviceGetAIOOp;
extern int ghidra_vftable_RDeviceGetRequest;
extern int ghidra_vftable_RDeviceOpRequest;
extern int ghidra_vftable_RDevicePostAIOOp;
extern int ghidra_vftable_RDevicePutAIOOp;
extern int ghidra_vftable_RHttpDeleteNoRedirectAIOOp;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPostNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPutNoRedirectAIOOp;
extern int ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
extern int ghidra_vftable_SCArtworkCache;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCLegacyJoinExistingWizardInitState;
extern int ghidra_vftable_SCLogoArtworkCache;
extern int ghidra_vftable_SCOpDeviceDelete;
extern int ghidra_vftable_SCOpDeviceGet;
extern int ghidra_vftable_SCOpDevicePost;
extern int ghidra_vftable_SCOpDevicePut;
extern int ghidra_vftable_SCSettingsReplicatorVoiceAllowDataCollection;
extern int ghidra_vftable_SCSettingsReplicatorVoiceLocale;
extern int ghidra_vftable_SCSwfObjACListener;
extern int ghidra_vftable_SCSwfObjDDListener;
extern int ghidra_vftable_SCWeaklyOwnedObjectManager;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SvgFileParserCB;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int unaff_EBP;
extern undefined1 LAB_116c00c0[];
extern undefined1 LAB_116c00f0[];
extern undefined1 LAB_116c0120[];
extern undefined1 LAB_116c1790[];
extern undefined1 LAB_116c30f0[];
extern int *stack0x00000008;
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_allocRep(A...); template<class... A> int op_ctor(A...); template<class... A> int op_eq(A...); template<class... A> int op_lt(A...); };
typedef void *BLE;
typedef void *CUSTOM_SUB_WIZARD_FIREWALL;
typedef void *NFC;
typedef void *SCDHS;
typedef void *WARNING;
struct AppInterop { char _pad; AppInterop(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Catch_All_10ba2e2d { char _pad; Catch_All_10ba2e2d(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Catch_All_10bcd60e { char _pad; Catch_All_10bcd60e(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Catch_All_10bcd749 { char _pad; Catch_All_10bcd749(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Catch_All_10bce596 { char _pad; Catch_All_10bce596(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Catch_All_10bce8cf { char _pad; Catch_All_10bce8cf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Catch_All_10bceba9 { char _pad; Catch_All_10bceba9(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCAlarmManager { char _pad; SCAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCArtworkData { char _pad; SCArtworkData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCBTClassicConnectionManager { char _pad; SCBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAlarmManager { char _pad; SCIAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIArtworkData { char _pad; SCIArtworkData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBTClassicConnectionManager { char _pad; SCIBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLegacyJoinExistingWizard { char _pad; SCLegacyJoinExistingWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLogoArtworkData { char _pad; SCLogoArtworkData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSettingsReplicator { char _pad; SCSettingsReplicator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sink { char _pad; Sink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct State { char _pad; State(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stopping { char _pad; Stopping(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_10b85300(int *param_2); undefined4 * __thiscall FUN_10b85340(int *param_2); undefined4 * __thiscall FUN_10b85380(int *param_2); undefined4 * __thiscall FUN_10b853c0(int *param_2); undefined4 * __thiscall FUN_10b88960(byte param_2); undefined4 * __thiscall FUN_10b88990(byte param_2); undefined4 * __thiscall FUN_10b889c0(byte param_2); undefined4 * __thiscall FUN_10b889f0(byte param_2); undefined4 * __thiscall FUN_10b88a20(byte param_2); undefined4 * __thiscall FUN_10b88a60(byte param_2); undefined4 * __thiscall FUN_10b88aa0(byte param_2); undefined4 * __thiscall FUN_10b88ae0(byte param_2); undefined4 * __thiscall FUN_10b88b20(byte param_2); undefined4 * __thiscall FUN_10b88b60(byte param_2); undefined4 * __thiscall FUN_10b88ba0(byte param_2); undefined4 * __thiscall FUN_10b88be0(byte param_2); undefined4 __thiscall FUN_10b88c20(byte param_2); undefined4 __thiscall FUN_10b88c50(byte param_2); undefined4 __thiscall FUN_10b88c80(byte param_2); undefined4 __thiscall FUN_10b88cb0(byte param_2); undefined4 * __thiscall FUN_10b88e90(byte param_2); undefined4 __thiscall FUN_10b88ee0(byte param_2); undefined4 __thiscall FUN_10b89190(byte param_2); undefined4 * __thiscall FUN_10b891c0(byte param_2); undefined4 * __thiscall FUN_10b89200(byte param_2); undefined4 * __thiscall FUN_10b89240(byte param_2); undefined4 * __thiscall FUN_10b89270(byte param_2); undefined4 * __thiscall FUN_10b892a0(byte param_2); undefined4 * __thiscall FUN_10b892d0(byte param_2); undefined4 * __thiscall FUN_10b89300(byte param_2); undefined4 * __thiscall FUN_10b89340(byte param_2); undefined4 * __thiscall FUN_10b89380(byte param_2); undefined4 * __thiscall FUN_10b893c0(byte param_2); SCStr * __thiscall FUN_10b8b4f0(SCStr *param_2); void __thiscall FUN_10b8e970(undefined4 param_2); undefined4 * __thiscall FUN_10b8f910(int *param_2); undefined4 * __thiscall FUN_10b8f950(int *param_2); undefined4 * __thiscall FUN_10b8f990(int *param_2); undefined4 * __thiscall FUN_10b8f9d0(int *param_2); undefined4 * __thiscall FUN_10b8fa10(int *param_2); undefined4 * __thiscall FUN_10b8fa50(int *param_2); undefined4 * __thiscall FUN_10b8fa90(int *param_2); undefined4 * __thiscall FUN_10b8fad0(int *param_2); undefined4 * __thiscall FUN_10b8fb10(int *param_2); undefined4 * __thiscall FUN_10b8fb50(int *param_2); undefined4 * __thiscall FUN_10b8fb90(int *param_2); undefined4 * __thiscall FUN_10b8fbd0(int *param_2); undefined4 * __thiscall FUN_10b8fc10(int *param_2); undefined4 * __thiscall FUN_10b90770(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10b907c0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10b92030(byte param_2); undefined4 * __thiscall FUN_10b92060(byte param_2); undefined4 __thiscall FUN_10b92280(byte param_2); undefined4 __thiscall FUN_10b924c0(byte param_2); undefined4 __thiscall FUN_10b924f0(byte param_2); undefined4 __thiscall FUN_10b92aa0(byte param_2); undefined4 __thiscall FUN_10b92ad0(byte param_2); void __thiscall FUN_10b937b0(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_10b94e40(int *param_2); undefined4 * __thiscall FUN_10b96c40(int *param_2); undefined4 * __thiscall FUN_10b96cd0(int *param_2); undefined4 * __thiscall FUN_10b96d50(int *param_2); undefined4 * __thiscall FUN_10b96dd0(int *param_2); undefined4 * __thiscall FUN_10b96e50(int *param_2); undefined4 * __thiscall FUN_10b96e70(int *param_2); undefined4 * __thiscall FUN_10b99c90(byte param_2); undefined4 * __thiscall FUN_10b99cd0(byte param_2); undefined4 * __thiscall FUN_10b99d10(byte param_2); undefined4 * __thiscall FUN_10b99d50(byte param_2); undefined4 __thiscall FUN_10b99d90(byte param_2); undefined4 __thiscall FUN_10b99e50(byte param_2); undefined4 * __thiscall FUN_10b9a030(byte param_2); undefined4 __thiscall FUN_10b9a080(byte param_2); undefined4 __thiscall FUN_10b9a0b0(byte param_2); undefined4 * __thiscall FUN_10b9a0e0(byte param_2); undefined4 * __thiscall FUN_10b9a120(byte param_2); undefined4 * __thiscall FUN_10b9a150(byte param_2); undefined4 * __thiscall FUN_10b9a180(byte param_2); undefined4 * __thiscall FUN_10b9a1b0(byte param_2); undefined4 * __thiscall FUN_10b9a370(byte param_2); undefined4 __thiscall FUN_10b9a3a0(byte param_2); undefined4 * __thiscall FUN_10b9a3d0(byte param_2); void __thiscall FUN_10b9bac0(int param_2); void __thiscall FUN_10b9d980(void *param_2,size_t param_3); void __thiscall FUN_10b9d9c0(void *param_2,size_t param_3); SCStr * __thiscall FUN_10b9ddf0(SCStr *param_2); SCStr * __thiscall FUN_10b9de20(SCStr *param_2); int * __thiscall FUN_10b9e0e0(int *param_2); SCStr * __thiscall FUN_10b9e170(SCStr *param_2); SCStr * __thiscall FUN_10b9e190(SCStr *param_2); void __thiscall FUN_10b9e1f0(undefined4 param_2); undefined4 __thiscall FUN_10ba0860(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10ba17b0(int param_2); void __thiscall FUN_10ba1800(int param_2); void __thiscall FUN_10ba1850(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10ba1a60(int param_2); void __thiscall FUN_10ba31c0(undefined4 param_2); int __thiscall FUN_10ba3300(int *param_2); undefined4 * __thiscall FUN_10ba4fe0(int *param_2); undefined4 * __thiscall FUN_10ba5020(int *param_2); undefined4 * __thiscall FUN_10ba5080(int *param_2); undefined4 * __thiscall FUN_10ba5140(int *param_2); undefined4 * __thiscall FUN_10ba8050(byte param_2); undefined4 * __thiscall FUN_10ba8130(byte param_2); int __thiscall FUN_10ba8180(byte param_2); undefined4 * __thiscall FUN_10ba82c0(byte param_2); undefined4 __thiscall FUN_10ba8300(byte param_2); undefined4 * __thiscall FUN_10ba8330(byte param_2); undefined4 __thiscall FUN_10ba8380(byte param_2); undefined4 * __thiscall FUN_10ba83b0(byte param_2); undefined4 * __thiscall FUN_10ba83e0(byte param_2); void __thiscall FUN_10ba86b0(undefined4 *param_2); void __thiscall FUN_10ba8770(char param_2); void __thiscall FUN_10ba8790(char param_2); void __thiscall FUN_10ba9fd0(undefined4 *param_2); void __thiscall FUN_10baa820(int param_2); void __thiscall FUN_10baa860(int param_2); void __thiscall FUN_10bab320(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_10bac480(int *param_2); undefined4 __thiscall FUN_10bb4330(undefined4 param_2); void __thiscall FUN_10bb4be0(undefined4 param_2); undefined4 * __thiscall FUN_10bb60e0(byte param_2); undefined4 * __thiscall FUN_10bb6400(byte param_2); undefined4 * __thiscall FUN_10bb6540(byte param_2); undefined4 * __thiscall FUN_10bb6570(byte param_2); undefined4 * __thiscall FUN_10bb65a0(byte param_2); undefined4 * __thiscall FUN_10bb65d0(byte param_2); undefined4 * __thiscall FUN_10bb6600(byte param_2); undefined4 * __thiscall FUN_10bb6630(byte param_2); undefined4 * __thiscall FUN_10bb6660(byte param_2); undefined4 * __thiscall FUN_10bb6690(byte param_2); void __thiscall FUN_10bb6b30(int param_2); undefined4 * __thiscall FUN_10bbb640(int *param_2); undefined4 * __thiscall FUN_10bbb800(byte param_2); undefined4 * __thiscall FUN_10bbb840(byte param_2); undefined4 * __thiscall FUN_10bbb890(byte param_2); undefined4 * __thiscall FUN_10bbb8e0(byte param_2); SCStr * __thiscall FUN_10bbbfe0(SCStr *param_2); void __thiscall FUN_10bbddd0(int param_2); undefined4 * __thiscall FUN_10bbdeb0(int *param_2); undefined4 * __thiscall FUN_10bbe3a0(byte param_2); undefined4 * __thiscall FUN_10bbe520(byte param_2); void __thiscall FUN_10bbe780(int param_2); bool __thiscall FUN_10bbefd0(undefined4 param_2); undefined4 * __thiscall FUN_10bbf090(int *param_2); undefined4 * __thiscall FUN_10bbf1a0(byte param_2); void __thiscall FUN_10bc0b50(char param_2); void __thiscall FUN_10bc0c00(char param_2); SCStr * __thiscall FUN_10bc1ca0(SCStr *param_2); void __thiscall FUN_10bc3b90(int param_2); undefined4 * __thiscall FUN_10bc3c90(int *param_2); undefined4 * __thiscall FUN_10bc4250(byte param_2); undefined4 * __thiscall FUN_10bc4310(byte param_2); void __thiscall FUN_10bc46a0(int param_2); void __thiscall FUN_10bc5bf0(int param_2); undefined4 * __thiscall FUN_10bc60c0(int *param_2); undefined4 * __thiscall FUN_10bc6100(int *param_2); undefined4 * __thiscall FUN_10bc6f60(byte param_2); undefined4 * __thiscall FUN_10bc6fa0(byte param_2); int __thiscall FUN_10bc6fe0(byte param_2); undefined4 * __thiscall FUN_10bc7030(byte param_2); undefined4 * __thiscall FUN_10bc7070(byte param_2); undefined4 * __thiscall FUN_10bc7250(byte param_2); void __thiscall FUN_10bc7290(undefined4 *param_2); void __thiscall FUN_10bc7350(char param_2); void __thiscall FUN_10bc7370(char param_2); void __thiscall FUN_10bc7390(char param_2); void __thiscall FUN_10bc7530(undefined4 *param_2); void __thiscall FUN_10bc76d0(int param_2); void __thiscall FUN_10bc79f0(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_10bc7c10(int *param_2); SCStr * __thiscall FUN_10bc81e0(SCStr *param_2); void __thiscall FUN_10bc9060(int param_2); undefined4 * __thiscall FUN_10bc9ac0(int *param_2); undefined4 __thiscall FUN_10bc9fe0(byte param_2); void __thiscall FUN_10bcecc0(undefined4 param_2); void __thiscall FUN_10bcecf0(undefined4 param_2); void __thiscall FUN_10bced20(undefined4 param_2); void __thiscall FUN_10bced50(undefined4 param_2); void __thiscall FUN_10bced80(undefined4 param_2); void __thiscall FUN_10bcedb0(undefined4 param_2); void __thiscall FUN_10bcede0(undefined4 param_2); int __thiscall FUN_10bcf5a0(uint *param_2); int __thiscall FUN_10bcf5e0(SCStr *param_2); int __thiscall FUN_10bcf630(SCStr *param_2); int __thiscall FUN_10bcf680(SCStr *param_2); int __thiscall FUN_10bcf6d0(int *param_2); int __thiscall FUN_10bcf710(int *param_2); int __thiscall FUN_10bcf750(int *param_2); int __thiscall FUN_10bcf790(int *param_2); int __thiscall FUN_10bcf7d0(int *param_2); void __thiscall FUN_10bd1bb0(int param_2); void __thiscall FUN_10bd27a0(undefined4 *param_2); undefined4 * __thiscall FUN_10bd31b0(int *param_2); undefined4 * __thiscall FUN_10bd3220(int *param_2); undefined4 * __thiscall FUN_10bd3280(int *param_2); undefined4 __thiscall FUN_10bd8ff0(byte param_2); undefined4 * __thiscall FUN_10bd91d0(byte param_2); undefined4 __thiscall FUN_10bd92c0(byte param_2); void __thiscall FUN_10bd9600(int param_2); void __thiscall FUN_10bd9e70(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10bd9e90(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10bddec0(int param_2); undefined4 __thiscall FUN_10be6cf0(int param_2); void __thiscall FUN_10be9e80(undefined4 *param_2); undefined4 * __thiscall FUN_10bedc30(undefined4 *param_2,SCStr *param_3); undefined4 __thiscall FUN_10bee4a0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10bee5b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10beeaf0(int *param_2); undefined4 * __thiscall FUN_10beeb30(int *param_2); };
using namespace std;
void __fastcall FUN_10b87a00(undefined4 *param_1);
extern void __fastcall FUN_10b87a00(...);
extern void __fastcall FUN_10b87a00(...);
void __fastcall FUN_10b87a20(undefined4 *param_1);
extern void __fastcall FUN_10b87a20(...);
extern void __fastcall FUN_10b87a20(...);
void __fastcall FUN_10b87a40(undefined4 *param_1);
extern void __fastcall FUN_10b87a40(...);
extern void __fastcall FUN_10b87a40(...);
void __fastcall FUN_10b87a60(undefined4 *param_1);
extern void __fastcall FUN_10b87a60(...);
extern void __fastcall FUN_10b87a60(...);
void __fastcall FUN_10b87a80(undefined4 *param_1);
extern void __fastcall FUN_10b87a80(...);
extern void __fastcall FUN_10b87a80(...);
void __fastcall FUN_10b87aa0(undefined4 *param_1);
extern void __fastcall FUN_10b87aa0(...);
extern void __fastcall FUN_10b87aa0(...);
void __fastcall FUN_10b87ac0(undefined4 *param_1);
extern void __fastcall FUN_10b87ac0(...);
extern void __fastcall FUN_10b87ac0(...);
void __fastcall FUN_10b87ae0(undefined4 *param_1);
extern void __fastcall FUN_10b87ae0(...);
extern void __fastcall FUN_10b87ae0(...);
void __fastcall FUN_10b88200(undefined4 *param_1);
extern void __fastcall FUN_10b88200(...);
extern void __fastcall FUN_10b88200(...);
void __fastcall FUN_10b88300(undefined4 *param_1);
extern void __fastcall FUN_10b88300(...);
extern void __fastcall FUN_10b88300(...);
void __fastcall FUN_10b88350(undefined4 *param_1);
extern void __fastcall FUN_10b88350(...);
extern void __fastcall FUN_10b88350(...);
void __fastcall FUN_10b88520(undefined4 *param_1);
extern void __fastcall FUN_10b88520(...);
extern void __fastcall FUN_10b88520(...);
void __fastcall FUN_10b88620(undefined4 *param_1);
extern void __fastcall FUN_10b88620(...);
extern void __fastcall FUN_10b88620(...);
void __fastcall FUN_10b887f0(undefined4 *param_1);
extern void __fastcall FUN_10b887f0(...);
extern void __fastcall FUN_10b887f0(...);
undefined4 __fastcall FUN_10b8b530(int param_1);
extern undefined4 __fastcall FUN_10b8b530(...);
extern undefined4 __fastcall FUN_10b8b530(...);
undefined4 __fastcall FUN_10b8b550(int param_1);
extern undefined4 __fastcall FUN_10b8b550(...);
extern undefined4 __fastcall FUN_10b8b550(...);
undefined4 __fastcall FUN_10b8b570(int param_1);
extern undefined4 __fastcall FUN_10b8b570(...);
extern undefined4 __fastcall FUN_10b8b570(...);
undefined4 __fastcall FUN_10b8b590(int param_1);
extern undefined4 __fastcall FUN_10b8b590(...);
extern undefined4 __fastcall FUN_10b8b590(...);
undefined4 __stdcall FUN_10b8b750(undefined4 param_1);
extern undefined4 __stdcall FUN_10b8b750(...);
extern undefined4 __stdcall FUN_10b8b750(...);
undefined4 __stdcall FUN_10b8b790(undefined4 param_1);
extern undefined4 __stdcall FUN_10b8b790(...);
extern undefined4 __stdcall FUN_10b8b790(...);
undefined4 __stdcall FUN_10b8b7d0(undefined4 param_1);
extern undefined4 __stdcall FUN_10b8b7d0(...);
extern undefined4 __stdcall FUN_10b8b7d0(...);
undefined4 __stdcall FUN_10b8b810(undefined4 param_1);
extern undefined4 __stdcall FUN_10b8b810(...);
extern undefined4 __stdcall FUN_10b8b810(...);
undefined4 __stdcall FUN_10b8b850(undefined4 param_1);
extern undefined4 __stdcall FUN_10b8b850(...);
extern undefined4 __stdcall FUN_10b8b850(...);
undefined4 __fastcall FUN_10b8b910(int param_1);
extern undefined4 __fastcall FUN_10b8b910(...);
extern undefined4 __fastcall FUN_10b8b910(...);
undefined4 __fastcall FUN_10b8b930(int param_1);
extern undefined4 __fastcall FUN_10b8b930(...);
extern undefined4 __fastcall FUN_10b8b930(...);
undefined4 __fastcall FUN_10b8b950(int param_1);
extern undefined4 __fastcall FUN_10b8b950(...);
extern undefined4 __fastcall FUN_10b8b950(...);
undefined4 __fastcall FUN_10b8b970(int param_1);
extern undefined4 __fastcall FUN_10b8b970(...);
extern undefined4 __fastcall FUN_10b8b970(...);
SCStr * __stdcall FUN_10b8b990(SCStr *param_1);
extern SCStr * __stdcall FUN_10b8b990(...);
extern SCStr * __stdcall FUN_10b8b990(...);
SCStr * __stdcall FUN_10b8b9b0(SCStr *param_1);
extern SCStr * __stdcall FUN_10b8b9b0(...);
extern SCStr * __stdcall FUN_10b8b9b0(...);
SCStr * __stdcall FUN_10b8b9d0(SCStr *param_1);
extern SCStr * __stdcall FUN_10b8b9d0(...);
extern SCStr * __stdcall FUN_10b8b9d0(...);
SCStr * __stdcall FUN_10b8b9f0(SCStr *param_1);
extern SCStr * __stdcall FUN_10b8b9f0(...);
extern SCStr * __stdcall FUN_10b8b9f0(...);
undefined4 * __fastcall FUN_10b8e520(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10b8e520(...);
extern undefined4 * __fastcall FUN_10b8e520(...);
void __fastcall FUN_10b8ea90(int param_1);
extern void __fastcall FUN_10b8ea90(...);
extern void __fastcall FUN_10b8ea90(...);
undefined4 * __fastcall FUN_10b8fe40(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10b8fe40(...);
extern undefined4 * __fastcall FUN_10b8fe40(...);
void __fastcall FUN_10b90ea0(int *param_1);
extern void __fastcall FUN_10b90ea0(...);
extern void __fastcall FUN_10b90ea0(...);
void __fastcall FUN_10b90f00(int *param_1);
extern void __fastcall FUN_10b90f00(...);
extern void __fastcall FUN_10b90f00(...);
void __fastcall FUN_10b90f60(int *param_1);
extern void __fastcall FUN_10b90f60(...);
extern void __fastcall FUN_10b90f60(...);
void __fastcall FUN_10b90fc0(int param_1);
extern void __fastcall FUN_10b90fc0(...);
extern void __fastcall FUN_10b90fc0(...);
void __fastcall FUN_10b910c0(int param_1);
extern void __fastcall FUN_10b910c0(...);
extern void __fastcall FUN_10b910c0(...);
int __stdcall FUN_10b91d50(undefined4 param_1);
extern int __stdcall FUN_10b91d50(...);
extern int __stdcall FUN_10b91d50(...);
void __fastcall FUN_10b92b20(int param_1);
extern void __fastcall FUN_10b92b20(...);
extern void __fastcall FUN_10b92b20(...);
void FUN_10b937e0(void);
extern void FUN_10b937e0(...);
extern void FUN_10b937e0(...);
void FUN_10b93810(void);
extern void FUN_10b93810(...);
extern void FUN_10b93810(...);
void FUN_10b93840(void);
extern void FUN_10b93840(...);
extern void FUN_10b93840(...);
undefined4 * __fastcall FUN_10b97330(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10b97330(...);
extern undefined4 * __fastcall FUN_10b97330(...);
undefined4 * __fastcall FUN_10b97360(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10b97360(...);
extern undefined4 * __fastcall FUN_10b97360(...);
void __fastcall FUN_10b983d0(undefined4 *param_1);
extern void __fastcall FUN_10b983d0(...);
extern void __fastcall FUN_10b983d0(...);
void __fastcall FUN_10b983f0(undefined4 *param_1);
extern void __fastcall FUN_10b983f0(...);
extern void __fastcall FUN_10b983f0(...);
void __fastcall FUN_10b98410(undefined4 *param_1);
extern void __fastcall FUN_10b98410(...);
extern void __fastcall FUN_10b98410(...);
void __fastcall FUN_10b98430(undefined4 *param_1);
extern void __fastcall FUN_10b98430(...);
extern void __fastcall FUN_10b98430(...);
void __fastcall FUN_10b988b0(int *param_1);
extern void __fastcall FUN_10b988b0(...);
extern void __fastcall FUN_10b988b0(...);
void __fastcall FUN_10b98910(int param_1);
extern void __fastcall FUN_10b98910(...);
extern void __fastcall FUN_10b98910(...);
void __fastcall FUN_10b98930(int param_1);
extern void __fastcall FUN_10b98930(...);
extern void __fastcall FUN_10b98930(...);
void __fastcall FUN_10b98bf0(int param_1);
extern void __fastcall FUN_10b98bf0(...);
extern void __fastcall FUN_10b98bf0(...);
void __fastcall FUN_10b98c70(undefined4 *param_1);
extern void __fastcall FUN_10b98c70(...);
extern void __fastcall FUN_10b98c70(...);
void __fastcall FUN_10b98fe0(undefined4 *param_1);
extern void __fastcall FUN_10b98fe0(...);
extern void __fastcall FUN_10b98fe0(...);
void __fastcall FUN_10b99270(undefined4 *param_1);
extern void __fastcall FUN_10b99270(...);
extern void __fastcall FUN_10b99270(...);
int __stdcall FUN_10b99850(undefined4 param_1);
extern int __stdcall FUN_10b99850(...);
extern int __stdcall FUN_10b99850(...);
int __stdcall FUN_10b99880(undefined4 param_1);
extern int __stdcall FUN_10b99880(...);
extern int __stdcall FUN_10b99880(...);
void __fastcall FUN_10b9a440(int param_1);
extern void __fastcall FUN_10b9a440(...);
extern void __fastcall FUN_10b9a440(...);
void __fastcall FUN_10b9a460(int param_1);
extern void __fastcall FUN_10b9a460(...);
extern void __fastcall FUN_10b9a460(...);
void __fastcall FUN_10b9b4b0(undefined4 *param_1);
extern void __fastcall FUN_10b9b4b0(...);
extern void __fastcall FUN_10b9b4b0(...);
void __fastcall FUN_10b9bf50(int param_1);
extern void __fastcall FUN_10b9bf50(...);
extern void __fastcall FUN_10b9bf50(...);
void __fastcall FUN_10b9c060(int *param_1);
extern void __fastcall FUN_10b9c060(...);
extern void __fastcall FUN_10b9c060(...);
SCStr * __stdcall FUN_10b9c370(SCStr *param_1);
extern SCStr * __stdcall FUN_10b9c370(...);
extern SCStr * __stdcall FUN_10b9c370(...);
SCStr * __stdcall FUN_10b9c390(SCStr *param_1);
extern SCStr * __stdcall FUN_10b9c390(...);
extern SCStr * __stdcall FUN_10b9c390(...);
void __fastcall FUN_10b9c480(int param_1);
extern void __fastcall FUN_10b9c480(...);
extern void __fastcall FUN_10b9c480(...);
int * FUN_10b9c740(int *param_1);
extern int * FUN_10b9c740(...);
extern int * FUN_10b9c740(...);
undefined1 __fastcall FUN_10b9e500(int param_1);
extern undefined1 __fastcall FUN_10b9e500(...);
extern undefined1 __fastcall FUN_10b9e500(...);
undefined4 __fastcall FUN_10ba0970(int *param_1);
extern undefined4 __fastcall FUN_10ba0970(...);
extern undefined4 __fastcall FUN_10ba0970(...);
undefined4 __stdcall FUN_10ba0b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern undefined4 __stdcall FUN_10ba0b30(...);
extern undefined4 __stdcall FUN_10ba0b30(...);
undefined4 __stdcall FUN_10ba0b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern undefined4 __stdcall FUN_10ba0b60(...);
extern undefined4 __stdcall FUN_10ba0b60(...);
void Catch_All_10ba2e2d_10ba2e2d(void);
void __stdcall FUN_10ba31f0(undefined4 param_1,int *param_2);
extern void __stdcall FUN_10ba31f0(...);
extern void __stdcall FUN_10ba31f0(...);
undefined4 * __fastcall FUN_10ba5250(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10ba5250(...);
extern undefined4 * __fastcall FUN_10ba5250(...);
undefined4 * __fastcall FUN_10ba5290(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10ba5290(...);
extern undefined4 * __fastcall FUN_10ba5290(...);
void __fastcall FUN_10ba6b30(int *param_1);
extern void __fastcall FUN_10ba6b30(...);
extern void __fastcall FUN_10ba6b30(...);
void __fastcall FUN_10ba6c10(undefined4 *param_1);
extern void __fastcall FUN_10ba6c10(...);
extern void __fastcall FUN_10ba6c10(...);
void __fastcall FUN_10ba6c30(int param_1);
extern void __fastcall FUN_10ba6c30(...);
extern void __fastcall FUN_10ba6c30(...);
void __fastcall FUN_10ba6c50(int param_1);
extern void __fastcall FUN_10ba6c50(...);
extern void __fastcall FUN_10ba6c50(...);
void __fastcall FUN_10ba6d30(int *param_1);
extern void __fastcall FUN_10ba6d30(...);
extern void __fastcall FUN_10ba6d30(...);
void __fastcall FUN_10ba6e50(int *param_1);
extern void __fastcall FUN_10ba6e50(...);
extern void __fastcall FUN_10ba6e50(...);
void __fastcall FUN_10ba6f00(int *param_1);
extern void __fastcall FUN_10ba6f00(...);
extern void __fastcall FUN_10ba6f00(...);
void __fastcall FUN_10ba7460(int *param_1);
extern void __fastcall FUN_10ba7460(...);
extern void __fastcall FUN_10ba7460(...);
void __fastcall FUN_10ba8480(int param_1);
extern void __fastcall FUN_10ba8480(...);
extern void __fastcall FUN_10ba8480(...);
void __fastcall FUN_10ba84a0(int param_1);
extern void __fastcall FUN_10ba84a0(...);
extern void __fastcall FUN_10ba84a0(...);
void __stdcall FUN_10ba87e0(int param_1,int param_2);
extern void __stdcall FUN_10ba87e0(...);
extern void __stdcall FUN_10ba87e0(...);
void __fastcall FUN_10ba8810(int param_1);
extern void __fastcall FUN_10ba8810(...);
extern void __fastcall FUN_10ba8810(...);
int * FUN_10ba9f70(int *param_1);
extern int * FUN_10ba9f70(...);
extern int * FUN_10ba9f70(...);
int * FUN_10ba9fa0(int *param_1);
extern int * FUN_10ba9fa0(...);
extern int * FUN_10ba9fa0(...);
undefined1 __fastcall FUN_10baa800(int param_1);
extern undefined1 __fastcall FUN_10baa800(...);
extern undefined1 __fastcall FUN_10baa800(...);
void __fastcall FUN_10baa950(int *param_1);
extern void __fastcall FUN_10baa950(...);
extern void __fastcall FUN_10baa950(...);
void __fastcall FUN_10baa980(int *param_1);
extern void __fastcall FUN_10baa980(...);
extern void __fastcall FUN_10baa980(...);
void __fastcall FUN_10baa9b0(int param_1);
extern void __fastcall FUN_10baa9b0(...);
extern void __fastcall FUN_10baa9b0(...);
void __stdcall FUN_10bab1e0(int param_1,int param_2);
extern void __stdcall FUN_10bab1e0(...);
extern void __stdcall FUN_10bab1e0(...);
void __fastcall FUN_10bab270(int param_1);
extern void __fastcall FUN_10bab270(...);
extern void __fastcall FUN_10bab270(...);
void __fastcall FUN_10bab2a0(int param_1);
extern void __fastcall FUN_10bab2a0(...);
extern void __fastcall FUN_10bab2a0(...);
undefined4 __stdcall FUN_10bb24a0(undefined4 param_1,undefined4 param_2);
extern undefined4 __stdcall FUN_10bb24a0(...);
extern undefined4 __stdcall FUN_10bb24a0(...);
void __fastcall FUN_10bb3040(int param_1);
extern void __fastcall FUN_10bb3040(...);
extern void __fastcall FUN_10bb3040(...);
void __fastcall FUN_10bb3070(int param_1);
extern void __fastcall FUN_10bb3070(...);
extern void __fastcall FUN_10bb3070(...);
void __stdcall FUN_10bb4690(int param_1);
extern void __stdcall FUN_10bb4690(...);
extern void __stdcall FUN_10bb4690(...);
undefined4 * __fastcall FUN_10bb5310(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bb5310(...);
extern undefined4 * __fastcall FUN_10bb5310(...);
void __fastcall FUN_10bb58d0(int param_1);
extern void __fastcall FUN_10bb58d0(...);
extern void __fastcall FUN_10bb58d0(...);
void __fastcall FUN_10bb58f0(int *param_1);
extern void __fastcall FUN_10bb58f0(...);
extern void __fastcall FUN_10bb58f0(...);
void __fastcall FUN_10bb59f0(int param_1);
extern void __fastcall FUN_10bb59f0(...);
extern void __fastcall FUN_10bb59f0(...);
void __fastcall FUN_10bb5a10(int *param_1);
extern void __fastcall FUN_10bb5a10(...);
extern void __fastcall FUN_10bb5a10(...);
void __fastcall FUN_10bb66f0(int param_1);
extern void __fastcall FUN_10bb66f0(...);
extern void __fastcall FUN_10bb66f0(...);
void __fastcall FUN_10bb6fe0(int param_1);
extern void __fastcall FUN_10bb6fe0(...);
extern void __fastcall FUN_10bb6fe0(...);
undefined4 * __fastcall FUN_10bb7170(undefined4 param_1);
extern undefined4 * __fastcall FUN_10bb7170(...);
extern undefined4 * __fastcall FUN_10bb7170(...);
void __stdcall FUN_10bb7a10(undefined4 param_1,SCStr *param_2);
extern void __stdcall FUN_10bb7a10(...);
extern void __stdcall FUN_10bb7a10(...);
SCStr * __stdcall FUN_10bb7a60(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7a60(...);
extern SCStr * __stdcall FUN_10bb7a60(...);
SCStr * __stdcall FUN_10bb7d30(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7d30(...);
extern SCStr * __stdcall FUN_10bb7d30(...);
SCStr * __stdcall FUN_10bb7d50(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7d50(...);
extern SCStr * __stdcall FUN_10bb7d50(...);
SCStr * __stdcall FUN_10bb7d70(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7d70(...);
extern SCStr * __stdcall FUN_10bb7d70(...);
SCStr * __stdcall FUN_10bb7d90(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7d90(...);
extern SCStr * __stdcall FUN_10bb7d90(...);
SCStr * __stdcall FUN_10bb7db0(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7db0(...);
extern SCStr * __stdcall FUN_10bb7db0(...);
SCStr * __stdcall FUN_10bb7dd0(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7dd0(...);
extern SCStr * __stdcall FUN_10bb7dd0(...);
SCStr * __stdcall FUN_10bb7df0(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7df0(...);
extern SCStr * __stdcall FUN_10bb7df0(...);
SCStr * __stdcall FUN_10bb7e10(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7e10(...);
extern SCStr * __stdcall FUN_10bb7e10(...);
SCStr * __stdcall FUN_10bb7e30(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7e30(...);
extern SCStr * __stdcall FUN_10bb7e30(...);
SCStr * __stdcall FUN_10bb7e60(SCStr *param_1);
extern SCStr * __stdcall FUN_10bb7e60(...);
extern SCStr * __stdcall FUN_10bb7e60(...);
undefined4 __stdcall FUN_10bb7e90(undefined4 param_1);
extern undefined4 __stdcall FUN_10bb7e90(...);
extern undefined4 __stdcall FUN_10bb7e90(...);
SCStr * __stdcall FUN_10bba430(SCStr *param_1);
extern SCStr * __stdcall FUN_10bba430(...);
extern SCStr * __stdcall FUN_10bba430(...);
void __fastcall FUN_10bbb130(int param_1);
extern void __fastcall FUN_10bbb130(...);
extern void __fastcall FUN_10bbb130(...);
void __fastcall FUN_10bbb340(int param_1);
extern void __fastcall FUN_10bbb340(...);
extern void __fastcall FUN_10bbb340(...);
undefined4 __fastcall FUN_10bbc000(int *param_1);
extern undefined4 __fastcall FUN_10bbc000(...);
extern undefined4 __fastcall FUN_10bbc000(...);
void __fastcall FUN_10bbcdf0(int *param_1);
extern void __fastcall FUN_10bbcdf0(...);
extern void __fastcall FUN_10bbcdf0(...);
void __fastcall FUN_10bbd010(int *param_1);
extern void __fastcall FUN_10bbd010(...);
extern void __fastcall FUN_10bbd010(...);
void FUN_10bbd7c0(int param_1);
extern void FUN_10bbd7c0(...);
extern void FUN_10bbd7c0(...);
void __fastcall FUN_10bbe8a0(int *param_1);
extern void __fastcall FUN_10bbe8a0(...);
extern void __fastcall FUN_10bbe8a0(...);
SCStr * __stdcall FUN_10bbe8d0(SCStr *param_1);
extern SCStr * __stdcall FUN_10bbe8d0(...);
extern SCStr * __stdcall FUN_10bbe8d0(...);
void __fastcall FUN_10bc0390(int param_1);
extern void __fastcall FUN_10bc0390(...);
extern void __fastcall FUN_10bc0390(...);
void __fastcall FUN_10bc04b0(int param_1);
extern void __fastcall FUN_10bc04b0(...);
extern void __fastcall FUN_10bc04b0(...);
void __fastcall FUN_10bc0600(int *param_1);
extern void __fastcall FUN_10bc0600(...);
extern void __fastcall FUN_10bc0600(...);
void __fastcall FUN_10bc0620(int *param_1);
extern void __fastcall FUN_10bc0620(...);
extern void __fastcall FUN_10bc0620(...);
void __fastcall FUN_10bc0a50(int param_1);
extern void __fastcall FUN_10bc0a50(...);
extern void __fastcall FUN_10bc0a50(...);
void FUN_10bc0c20(void);
extern void FUN_10bc0c20(...);
extern void FUN_10bc0c20(...);
void __fastcall FUN_10bc0c40(int param_1);
extern void __fastcall FUN_10bc0c40(...);
extern void __fastcall FUN_10bc0c40(...);
int * FUN_10bc1530(int *param_1);
extern int * FUN_10bc1530(...);
extern int * FUN_10bc1530(...);
void __fastcall FUN_10bc1990(int *param_1);
extern void __fastcall FUN_10bc1990(...);
extern void __fastcall FUN_10bc1990(...);
SCStr * __stdcall FUN_10bc1c60(SCStr *param_1);
extern SCStr * __stdcall FUN_10bc1c60(...);
extern SCStr * __stdcall FUN_10bc1c60(...);
SCStr * __stdcall FUN_10bc1c80(SCStr *param_1);
extern SCStr * __stdcall FUN_10bc1c80(...);
extern SCStr * __stdcall FUN_10bc1c80(...);
void __fastcall FUN_10bc47c0(int *param_1);
extern void __fastcall FUN_10bc47c0(...);
extern void __fastcall FUN_10bc47c0(...);
SCStr * __stdcall FUN_10bc4800(SCStr *param_1);
extern SCStr * __stdcall FUN_10bc4800(...);
extern SCStr * __stdcall FUN_10bc4800(...);
undefined4 __fastcall FUN_10bc5190(int param_1);
extern undefined4 __fastcall FUN_10bc5190(...);
extern undefined4 __fastcall FUN_10bc5190(...);
void __fastcall FUN_10bc6690(undefined4 *param_1);
extern void __fastcall FUN_10bc6690(...);
extern void __fastcall FUN_10bc6690(...);
void __fastcall FUN_10bc6b30(int *param_1);
extern void __fastcall FUN_10bc6b30(...);
extern void __fastcall FUN_10bc6b30(...);
void FUN_10bc78f0(void);
extern void FUN_10bc78f0(...);
extern void FUN_10bc78f0(...);
void __fastcall FUN_10bc7a20(int *param_1);
extern void __fastcall FUN_10bc7a20(...);
extern void __fastcall FUN_10bc7a20(...);
void __fastcall FUN_10bc8830(int param_1);
extern void __fastcall FUN_10bc8830(...);
extern void __fastcall FUN_10bc8830(...);
undefined4 __fastcall FUN_10bc8bb0(int param_1);
extern undefined4 __fastcall FUN_10bc8bb0(...);
extern undefined4 __fastcall FUN_10bc8bb0(...);
undefined4 __fastcall FUN_10bc8bd0(int param_1);
extern undefined4 __fastcall FUN_10bc8bd0(...);
extern undefined4 __fastcall FUN_10bc8bd0(...);
void __stdcall FUN_10bc8e80(int param_1);
extern void __stdcall FUN_10bc8e80(...);
extern void __stdcall FUN_10bc8e80(...);
void __stdcall FUN_10bc9780(int param_1);
extern void __stdcall FUN_10bc9780(...);
extern void __stdcall FUN_10bc9780(...);
void __stdcall FUN_10bc97a0(int param_1);
extern void __stdcall FUN_10bc97a0(...);
extern void __stdcall FUN_10bc97a0(...);
void __fastcall FUN_10bcb100(int param_1);
extern void __fastcall FUN_10bcb100(...);
extern void __fastcall FUN_10bcb100(...);
void __fastcall FUN_10bcb200(int param_1);
extern void __fastcall FUN_10bcb200(...);
extern void __fastcall FUN_10bcb200(...);
undefined1 FUN_10bcb4d0(void);
extern undefined1 FUN_10bcb4d0(...);
extern undefined1 FUN_10bcb4d0(...);
void FUN_10bcb570(void);
extern void FUN_10bcb570(...);
extern void FUN_10bcb570(...);
void __fastcall FUN_10bcb620(int param_1);
extern void __fastcall FUN_10bcb620(...);
extern void __fastcall FUN_10bcb620(...);
void Catch_All_10bcd60e_10bcd60e(void);
void Catch_All_10bcd749_10bcd749(void);
void Catch_All_10bce596_10bce596(void);
void Catch_All_10bce8cf_10bce8cf(void);
void Catch_All_10bceba9_10bceba9(void);
void __stdcall FUN_10bcee70(undefined4 param_1,int *param_2);
extern void __stdcall FUN_10bcee70(...);
extern void __stdcall FUN_10bcee70(...);
void __stdcall FUN_10bcf3d0(undefined4 param_1,int *param_2);
extern void __stdcall FUN_10bcf3d0(...);
extern void __stdcall FUN_10bcf3d0(...);
undefined4 * __fastcall FUN_10bd33c0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bd33c0(...);
extern undefined4 * __fastcall FUN_10bd33c0(...);
undefined4 * __fastcall FUN_10bd3400(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bd3400(...);
extern undefined4 * __fastcall FUN_10bd3400(...);
undefined4 * __fastcall FUN_10bd3440(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bd3440(...);
extern undefined4 * __fastcall FUN_10bd3440(...);
undefined4 * __fastcall FUN_10bd3480(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bd3480(...);
extern undefined4 * __fastcall FUN_10bd3480(...);
undefined4 * __fastcall FUN_10bd3520(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bd3520(...);
extern undefined4 * __fastcall FUN_10bd3520(...);
undefined4 * __fastcall FUN_10bd3560(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bd3560(...);
extern undefined4 * __fastcall FUN_10bd3560(...);
undefined4 * __fastcall FUN_10bd35a0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bd35a0(...);
extern undefined4 * __fastcall FUN_10bd35a0(...);
undefined4 * __fastcall FUN_10bd35e0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bd35e0(...);
extern undefined4 * __fastcall FUN_10bd35e0(...);
undefined4 * __fastcall FUN_10bd3620(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bd3620(...);
extern undefined4 * __fastcall FUN_10bd3620(...);
void __fastcall FUN_10bd6260(int param_1);
extern void __fastcall FUN_10bd6260(...);
extern void __fastcall FUN_10bd6260(...);
void __fastcall FUN_10bd6280(int param_1);
extern void __fastcall FUN_10bd6280(...);
extern void __fastcall FUN_10bd6280(...);
void __fastcall FUN_10bd62a0(int param_1);
extern void __fastcall FUN_10bd62a0(...);
extern void __fastcall FUN_10bd62a0(...);
void __fastcall FUN_10bd62c0(int param_1);
extern void __fastcall FUN_10bd62c0(...);
extern void __fastcall FUN_10bd62c0(...);
void __fastcall FUN_10bd62e0(int param_1);
extern void __fastcall FUN_10bd62e0(...);
extern void __fastcall FUN_10bd62e0(...);
void __fastcall FUN_10bd6300(int param_1);
extern void __fastcall FUN_10bd6300(...);
extern void __fastcall FUN_10bd6300(...);
void __fastcall FUN_10bd6320(int param_1);
extern void __fastcall FUN_10bd6320(...);
extern void __fastcall FUN_10bd6320(...);
void __fastcall FUN_10bd6340(int param_1);
extern void __fastcall FUN_10bd6340(...);
extern void __fastcall FUN_10bd6340(...);
void __fastcall FUN_10bd6360(int param_1);
extern void __fastcall FUN_10bd6360(...);
extern void __fastcall FUN_10bd6360(...);
void __fastcall FUN_10bd63e0(int *param_1);
extern void __fastcall FUN_10bd63e0(...);
extern void __fastcall FUN_10bd63e0(...);
void __fastcall FUN_10bd6410(int *param_1);
extern void __fastcall FUN_10bd6410(...);
extern void __fastcall FUN_10bd6410(...);
void __fastcall FUN_10bd6440(int *param_1);
extern void __fastcall FUN_10bd6440(...);
extern void __fastcall FUN_10bd6440(...);
void __fastcall FUN_10bd6470(int *param_1);
extern void __fastcall FUN_10bd6470(...);
extern void __fastcall FUN_10bd6470(...);
void __fastcall FUN_10bd64a0(int *param_1);
extern void __fastcall FUN_10bd64a0(...);
extern void __fastcall FUN_10bd64a0(...);
void __fastcall FUN_10bd64d0(int *param_1);
extern void __fastcall FUN_10bd64d0(...);
extern void __fastcall FUN_10bd64d0(...);
void __fastcall FUN_10bd6500(int *param_1);
extern void __fastcall FUN_10bd6500(...);
extern void __fastcall FUN_10bd6500(...);
void __fastcall FUN_10bd6750(int param_1);
extern void __fastcall FUN_10bd6750(...);
extern void __fastcall FUN_10bd6750(...);
void __fastcall FUN_10bd69a0(int param_1);
extern void __fastcall FUN_10bd69a0(...);
extern void __fastcall FUN_10bd69a0(...);
void __fastcall FUN_10bd69c0(int param_1);
extern void __fastcall FUN_10bd69c0(...);
extern void __fastcall FUN_10bd69c0(...);
void __fastcall FUN_10bd6a00(int param_1);
extern void __fastcall FUN_10bd6a00(...);
extern void __fastcall FUN_10bd6a00(...);
void __fastcall FUN_10bd6aa0(undefined4 *param_1);
extern void __fastcall FUN_10bd6aa0(...);
extern void __fastcall FUN_10bd6aa0(...);
void __fastcall FUN_10bd6ac0(undefined4 *param_1);
extern void __fastcall FUN_10bd6ac0(...);
extern void __fastcall FUN_10bd6ac0(...);
void __fastcall FUN_10bd6b00(int *param_1);
extern void __fastcall FUN_10bd6b00(...);
extern void __fastcall FUN_10bd6b00(...);
void __fastcall FUN_10bd6b30(int *param_1);
extern void __fastcall FUN_10bd6b30(...);
extern void __fastcall FUN_10bd6b30(...);
void __fastcall FUN_10bd6b60(int *param_1);
extern void __fastcall FUN_10bd6b60(...);
extern void __fastcall FUN_10bd6b60(...);
void __fastcall FUN_10bd6b90(int *param_1);
extern void __fastcall FUN_10bd6b90(...);
extern void __fastcall FUN_10bd6b90(...);
void __fastcall FUN_10bd6bc0(int *param_1);
extern void __fastcall FUN_10bd6bc0(...);
extern void __fastcall FUN_10bd6bc0(...);
void __fastcall FUN_10bd6bf0(int *param_1);
extern void __fastcall FUN_10bd6bf0(...);
extern void __fastcall FUN_10bd6bf0(...);
void __fastcall FUN_10bd6c20(int *param_1);
extern void __fastcall FUN_10bd6c20(...);
extern void __fastcall FUN_10bd6c20(...);
void __fastcall FUN_10bd7020(undefined4 *param_1);
extern void __fastcall FUN_10bd7020(...);
extern void __fastcall FUN_10bd7020(...);
void __fastcall FUN_10bd94a0(int param_1);
extern void __fastcall FUN_10bd94a0(...);
extern void __fastcall FUN_10bd94a0(...);
void __fastcall FUN_10bd94c0(int param_1);
extern void __fastcall FUN_10bd94c0(...);
extern void __fastcall FUN_10bd94c0(...);
void __fastcall FUN_10bd94e0(int param_1);
extern void __fastcall FUN_10bd94e0(...);
extern void __fastcall FUN_10bd94e0(...);
void __fastcall FUN_10bd9500(int param_1);
extern void __fastcall FUN_10bd9500(...);
extern void __fastcall FUN_10bd9500(...);
void __fastcall FUN_10bd9520(int param_1);
extern void __fastcall FUN_10bd9520(...);
extern void __fastcall FUN_10bd9520(...);
void __fastcall FUN_10bd9540(int param_1);
extern void __fastcall FUN_10bd9540(...);
extern void __fastcall FUN_10bd9540(...);
void __fastcall FUN_10bd9560(int param_1);
extern void __fastcall FUN_10bd9560(...);
extern void __fastcall FUN_10bd9560(...);
void __fastcall FUN_10bd9580(int param_1);
extern void __fastcall FUN_10bd9580(...);
extern void __fastcall FUN_10bd9580(...);
void __fastcall FUN_10bd95a0(int param_1);
extern void __fastcall FUN_10bd95a0(...);
extern void __fastcall FUN_10bd95a0(...);
void FUN_10bdee90(void);
extern void FUN_10bdee90(...);
extern void FUN_10bdee90(...);
void FUN_10bdf8a0(void);
extern void FUN_10bdf8a0(...);
extern void FUN_10bdf8a0(...);
void FUN_10be0220(void);
extern void FUN_10be0220(...);
extern void FUN_10be0220(...);
void __fastcall FUN_10be1150(int *param_1);
extern void __fastcall FUN_10be1150(...);
extern void __fastcall FUN_10be1150(...);
void __fastcall FUN_10be1180(int *param_1);
extern void __fastcall FUN_10be1180(...);
extern void __fastcall FUN_10be1180(...);
void __fastcall FUN_10be11d0(undefined4 *param_1);
extern void __fastcall FUN_10be11d0(...);
extern void __fastcall FUN_10be11d0(...);
void __fastcall FUN_10be11f0(undefined4 *param_1);
extern void __fastcall FUN_10be11f0(...);
extern void __fastcall FUN_10be11f0(...);
void __fastcall FUN_10be1210(undefined4 *param_1);
extern void __fastcall FUN_10be1210(...);
extern void __fastcall FUN_10be1210(...);
void __fastcall FUN_10be1230(undefined4 *param_1);
extern void __fastcall FUN_10be1230(...);
extern void __fastcall FUN_10be1230(...);
void __stdcall FUN_10be1cc0(int param_1,int param_2);
extern void __stdcall FUN_10be1cc0(...);
extern void __stdcall FUN_10be1cc0(...);
void __stdcall FUN_10be1d10(int param_1,int param_2);
extern void __stdcall FUN_10be1d10(...);
extern void __stdcall FUN_10be1d10(...);
void __fastcall FUN_10be2040(int *param_1);
extern void __fastcall FUN_10be2040(...);
extern void __fastcall FUN_10be2040(...);
SCStr * __stdcall FUN_10be5040(SCStr *param_1);
extern SCStr * __stdcall FUN_10be5040(...);
extern SCStr * __stdcall FUN_10be5040(...);
void FUN_10bed2a0(int *param_1);
extern void FUN_10bed2a0(...);
extern void FUN_10bed2a0(...);
void __fastcall FUN_10bee240(int param_1);
extern void __fastcall FUN_10bee240(...);
extern void __fastcall FUN_10bee240(...);
SCStr * __stdcall FUN_10bee5d0(SCStr *param_1);
extern SCStr * __stdcall FUN_10bee5d0(...);
extern SCStr * __stdcall FUN_10bee5d0(...);
void __fastcall FUN_10bee690(int param_1);
extern void __fastcall FUN_10bee690(...);
extern void __fastcall FUN_10bee690(...);
void __fastcall FUN_10bee6b0(int param_1);
extern void __fastcall FUN_10bee6b0(...);
extern void __fastcall FUN_10bee6b0(...);
void __fastcall FUN_10bee6e0(int param_1);
extern void __fastcall FUN_10bee6e0(...);
extern void __fastcall FUN_10bee6e0(...);
void __fastcall FUN_10bee710(int param_1);
extern void __fastcall FUN_10bee710(...);
extern void __fastcall FUN_10bee710(...);
void __fastcall FUN_10bee740(int param_1);
extern void __fastcall FUN_10bee740(...);
extern void __fastcall FUN_10bee740(...);
void __fastcall FUN_10bee770(int param_1);
extern void __fastcall FUN_10bee770(...);
extern void __fastcall FUN_10bee770(...);
void FUN_10bee8d0(void);
extern void FUN_10bee8d0(...);
extern void FUN_10bee8d0(...);
void FUN_10bee8f0(void);
extern void FUN_10bee8f0(...);
extern void FUN_10bee8f0(...);
// Reference entry 10b85300; body size 41 bytes.
#line 1 "ENTRY_10b85300"

undefined4 * __thiscall Recovered_Bulk::FUN_10b85300(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b85340; body size 41 bytes.
#line 1 "ENTRY_10b85340"

undefined4 * __thiscall Recovered_Bulk::FUN_10b85340(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b85380; body size 41 bytes.
#line 1 "ENTRY_10b85380"

undefined4 * __thiscall Recovered_Bulk::FUN_10b85380(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b853c0; body size 41 bytes.
#line 1 "ENTRY_10b853c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b853c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b87a00; body size 20 bytes.
#line 1 "ENTRY_10b87a00"

void __fastcall FUN_10b87a00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b87a20; body size 20 bytes.
#line 1 "ENTRY_10b87a20"

void __fastcall FUN_10b87a20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b87a40; body size 20 bytes.
#line 1 "ENTRY_10b87a40"

void __fastcall FUN_10b87a40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b87a60; body size 20 bytes.
#line 1 "ENTRY_10b87a60"

void __fastcall FUN_10b87a60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b87a80; body size 19 bytes.
#line 1 "ENTRY_10b87a80"

void __fastcall FUN_10b87a80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b87aa0; body size 19 bytes.
#line 1 "ENTRY_10b87aa0"

void __fastcall FUN_10b87aa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b87ac0; body size 19 bytes.
#line 1 "ENTRY_10b87ac0"

void __fastcall FUN_10b87ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b87ae0; body size 19 bytes.
#line 1 "ENTRY_10b87ae0"

void __fastcall FUN_10b87ae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b88200; body size 58 bytes.
#line 1 "ENTRY_10b88200"

void __fastcall FUN_10b88200(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceDeleteAIOOp);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_RDeviceDeleteAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b88300; body size 58 bytes.
#line 1 "ENTRY_10b88300"

void __fastcall FUN_10b88300(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceGetAIOOp);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_RDeviceGetAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b88350; body size 34 bytes.
#line 1 "ENTRY_10b88350"

void __fastcall FUN_10b88350(undefined4 *param_1)

{
  param_1[0x1843] = (undefined4)((uint)&ghidra_vftable_RDeviceGetRequest);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceGetRequest);
  thunk_FUN_10b88380();
  thunk_FUN_1124a3d0();
  return;
}


// Reference entry 10b88520; body size 58 bytes.
#line 1 "ENTRY_10b88520"

void __fastcall FUN_10b88520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDevicePostAIOOp);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_RDevicePostAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b88620; body size 58 bytes.
#line 1 "ENTRY_10b88620"

void __fastcall FUN_10b88620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDevicePutAIOOp);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_RDevicePutAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b887f0; body size 18 bytes.
#line 1 "ENTRY_10b887f0"

void __fastcall FUN_10b887f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePost);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePost);
  thunk_FUN_10b87da0();
  return;
}


// Reference entry 10b88960; body size 38 bytes.
#line 1 "ENTRY_10b88960"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88960(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88990; body size 38 bytes.
#line 1 "ENTRY_10b88990"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b889c0; body size 38 bytes.
#line 1 "ENTRY_10b889c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b889c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b889f0; body size 38 bytes.
#line 1 "ENTRY_10b889f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b889f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88a20; body size 46 bytes.
#line 1 "ENTRY_10b88a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88a20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88a60; body size 46 bytes.
#line 1 "ENTRY_10b88a60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88a60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88aa0; body size 46 bytes.
#line 1 "ENTRY_10b88aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88aa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88ae0; body size 46 bytes.
#line 1 "ENTRY_10b88ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88b20; body size 45 bytes.
#line 1 "ENTRY_10b88b20"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88b20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88b60; body size 45 bytes.
#line 1 "ENTRY_10b88b60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88b60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88ba0; body size 45 bytes.
#line 1 "ENTRY_10b88ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88ba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88be0; body size 45 bytes.
#line 1 "ENTRY_10b88be0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88be0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88c20; body size 32 bytes.
#line 1 "ENTRY_10b88c20"

undefined4 __thiscall Recovered_Bulk::FUN_10b88c20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b87b00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b88c50; body size 32 bytes.
#line 1 "ENTRY_10b88c50"

undefined4 __thiscall Recovered_Bulk::FUN_10b88c50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b87c50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b88c80; body size 32 bytes.
#line 1 "ENTRY_10b88c80"

undefined4 __thiscall Recovered_Bulk::FUN_10b88c80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b87da0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b88cb0; body size 32 bytes.
#line 1 "ENTRY_10b88cb0"

undefined4 __thiscall Recovered_Bulk::FUN_10b88cb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b87ef0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b88e90; body size 60 bytes.
#line 1 "ENTRY_10b88e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88e90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[0x1843] = (undefined4)((uint)&ghidra_vftable_RDeviceGetRequest);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceGetRequest);
  thunk_FUN_10b88380();
  thunk_FUN_1124a3d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6150);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b88ee0; body size 32 bytes.
#line 1 "ENTRY_10b88ee0"

undefined4 __thiscall Recovered_Bulk::FUN_10b88ee0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b88380();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b89190; body size 35 bytes.
#line 1 "ENTRY_10b89190"

undefined4 __thiscall Recovered_Bulk::FUN_10b89190(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124a3e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x620c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b891c0; body size 48 bytes.
#line 1 "ENTRY_10b891c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b891c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4490);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b89200; body size 48 bytes.
#line 1 "ENTRY_10b89200"

undefined4 * __thiscall Recovered_Bulk::FUN_10b89200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4490);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b89240; body size 33 bytes.
#line 1 "ENTRY_10b89240"

undefined4 * __thiscall Recovered_Bulk::FUN_10b89240(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b89270; body size 33 bytes.
#line 1 "ENTRY_10b89270"

undefined4 * __thiscall Recovered_Bulk::FUN_10b89270(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b892a0; body size 33 bytes.
#line 1 "ENTRY_10b892a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b892a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b892d0; body size 33 bytes.
#line 1 "ENTRY_10b892d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b892d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b89300; body size 45 bytes.
#line 1 "ENTRY_10b89300"

undefined4 * __thiscall Recovered_Bulk::FUN_10b89300(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceDelete);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDeviceDelete);
  thunk_FUN_10b87b00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b89340; body size 45 bytes.
#line 1 "ENTRY_10b89340"

undefined4 * __thiscall Recovered_Bulk::FUN_10b89340(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceGet);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDeviceGet);
  thunk_FUN_10b87c50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b89380; body size 45 bytes.
#line 1 "ENTRY_10b89380"

undefined4 * __thiscall Recovered_Bulk::FUN_10b89380(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePost);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePost);
  thunk_FUN_10b87da0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b893c0; body size 45 bytes.
#line 1 "ENTRY_10b893c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b893c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePut);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePut);
  thunk_FUN_10b87ef0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8b4f0; body size 25 bytes.
#line 1 "ENTRY_10b8b4f0"

SCStr * __thiscall Recovered_Bulk::FUN_10b8b4f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 4) + 0x6244));
  return (SCStr *)(param_2);
}


// Reference entry 10b8b530; body size 22 bytes.
#line 1 "ENTRY_10b8b530"

undefined4 __fastcall FUN_10b8b530(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(*(int *)(param_1 + 0x18) + 0x448c));
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined4 *)((undefined4 *)&DAT_00004494);
  }
  return (undefined4)(*puVar1);
}


// Reference entry 10b8b550; body size 22 bytes.
#line 1 "ENTRY_10b8b550"

undefined4 __fastcall FUN_10b8b550(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(*(int *)(param_1 + 0x18) + 0x448c));
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined4 *)((undefined4 *)&DAT_00004494);
  }
  return (undefined4)(*puVar1);
}


// Reference entry 10b8b570; body size 22 bytes.
#line 1 "ENTRY_10b8b570"

undefined4 __fastcall FUN_10b8b570(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(*(int *)(param_1 + 0x18) + 0x448c));
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined4 *)((undefined4 *)&DAT_00004494);
  }
  return (undefined4)(*puVar1);
}


// Reference entry 10b8b590; body size 22 bytes.
#line 1 "ENTRY_10b8b590"

undefined4 __fastcall FUN_10b8b590(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(*(int *)(param_1 + 0x18) + 0x448c));
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined4 *)((undefined4 *)&DAT_00004494);
  }
  return (undefined4)(*puVar1);
}


// Reference entry 10b8b750; body size 25 bytes.
#line 1 "ENTRY_10b8b750"

undefined4 __stdcall FUN_10b8b750(undefined4 param_1)

{
  thunk_FUN_10b8b660(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10b8b790; body size 40 bytes.
#line 1 "ENTRY_10b8b790"

undefined4 __stdcall FUN_10b8b790(undefined4 param_1)

{
  thunk_FUN_10b8b660(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10b8b7d0; body size 40 bytes.
#line 1 "ENTRY_10b8b7d0"

undefined4 __stdcall FUN_10b8b7d0(undefined4 param_1)

{
  thunk_FUN_10b8b660(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10b8b810; body size 40 bytes.
#line 1 "ENTRY_10b8b810"

undefined4 __stdcall FUN_10b8b810(undefined4 param_1)

{
  thunk_FUN_10b8b660(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10b8b850; body size 40 bytes.
#line 1 "ENTRY_10b8b850"

undefined4 __stdcall FUN_10b8b850(undefined4 param_1)

{
  thunk_FUN_10b8b660(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10b8b910; body size 22 bytes.
#line 1 "ENTRY_10b8b910"

undefined4 __fastcall FUN_10b8b910(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)((undefined1 *)(*(int *)(param_1 + 0x18) + 0x4490));
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined1 *)(&DAT_00004498);
  }
  return (undefined4)(((uint)((int3)((uint)puVar1 >> 8)) << 8 | (uint)(*puVar1)));
}


// Reference entry 10b8b930; body size 22 bytes.
#line 1 "ENTRY_10b8b930"

undefined4 __fastcall FUN_10b8b930(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_00004494 + *(int *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined1 *)(&DAT_0000449c);
  }
  return (undefined4)(((uint)((int3)((uint)puVar1 >> 8)) << 8 | (uint)(*puVar1)));
}


// Reference entry 10b8b950; body size 22 bytes.
#line 1 "ENTRY_10b8b950"

undefined4 __fastcall FUN_10b8b950(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)((undefined1 *)(*(int *)(param_1 + 0x18) + 0x4490));
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined1 *)(&DAT_00004498);
  }
  return (undefined4)(((uint)((int3)((uint)puVar1 >> 8)) << 8 | (uint)(*puVar1)));
}


// Reference entry 10b8b970; body size 22 bytes.
#line 1 "ENTRY_10b8b970"

undefined4 __fastcall FUN_10b8b970(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)((undefined1 *)(*(int *)(param_1 + 0x18) + 0x4490));
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined1 *)(&DAT_00004498);
  }
  return (undefined4)(((uint)((int3)((uint)puVar1 >> 8)) << 8 | (uint)(*puVar1)));
}


// Reference entry 10b8b990; body size 21 bytes.
#line 1 "ENTRY_10b8b990"

SCStr * __stdcall FUN_10b8b990(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10b8b9b0; body size 21 bytes.
#line 1 "ENTRY_10b8b9b0"

SCStr * __stdcall FUN_10b8b9b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10b8b9d0; body size 21 bytes.
#line 1 "ENTRY_10b8b9d0"

SCStr * __stdcall FUN_10b8b9d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10b8b9f0; body size 21 bytes.
#line 1 "ENTRY_10b8b9f0"

SCStr * __stdcall FUN_10b8b9f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10b8e520; body size 35 bytes.
#line 1 "ENTRY_10b8e520"

undefined4 * __fastcall FUN_10b8e520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWeaklyOwnedObjectManager);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8e970; body size 38 bytes.
#line 1 "ENTRY_10b8e970"

void __thiscall Recovered_Bulk::FUN_10b8e970(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 8));
  if (puVar1 != *(undefined4 **)(param_1 + 0xc)) {
    *puVar1 = (undefined4)(param_2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    return;
  }
  thunk_FUN_10b8e250(puVar1,&param_2);
  return;
}


// Reference entry 10b8ea90; body size 32 bytes.
#line 1 "ENTRY_10b8ea90"

void __fastcall FUN_10b8ea90(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 8));
  for (puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 4)); (undefined4 *)(puVar2) != puVar1; puVar2 = puVar2 + 1) {
    *(undefined4 *)*puVar2 = (undefined4)(0);
  }
  return;
}


// Reference entry 10b8f910; body size 41 bytes.
#line 1 "ENTRY_10b8f910"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8f910(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8f950; body size 41 bytes.
#line 1 "ENTRY_10b8f950"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8f950(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8f990; body size 41 bytes.
#line 1 "ENTRY_10b8f990"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8f990(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8f9d0; body size 41 bytes.
#line 1 "ENTRY_10b8f9d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8f9d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fa10; body size 41 bytes.
#line 1 "ENTRY_10b8fa10"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8fa10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fa50; body size 41 bytes.
#line 1 "ENTRY_10b8fa50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8fa50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fa90; body size 41 bytes.
#line 1 "ENTRY_10b8fa90"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8fa90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fad0; body size 41 bytes.
#line 1 "ENTRY_10b8fad0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8fad0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fb10; body size 41 bytes.
#line 1 "ENTRY_10b8fb10"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8fb10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fb50; body size 41 bytes.
#line 1 "ENTRY_10b8fb50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8fb50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fb90; body size 41 bytes.
#line 1 "ENTRY_10b8fb90"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8fb90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fbd0; body size 41 bytes.
#line 1 "ENTRY_10b8fbd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8fbd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fc10; body size 24 bytes.
#line 1 "ENTRY_10b8fc10"

undefined4 * __thiscall Recovered_Bulk::FUN_10b8fc10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fe40; body size 39 bytes.
#line 1 "ENTRY_10b8fe40"

undefined4 * __fastcall FUN_10b8fe40(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b90770; body size 57 bytes.
#line 1 "ENTRY_10b90770"

undefined4 * __thiscall Recovered_Bulk::FUN_10b90770(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f56a40(param_2);
  param_1[0x41] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorVoiceAllowDataCollection);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorVoiceAllowDataCollection);
  param_1[0x40] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b907c0; body size 57 bytes.
#line 1 "ENTRY_10b907c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b907c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f56a40(param_2);
  param_1[0x41] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorVoiceLocale);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorVoiceLocale);
  param_1[0x40] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b90ea0; body size 60 bytes.
#line 1 "ENTRY_10b90ea0"

void __fastcall FUN_10b90ea0(int *param_1)

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


// Reference entry 10b90f00; body size 60 bytes.
#line 1 "ENTRY_10b90f00"

void __fastcall FUN_10b90f00(int *param_1)

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


// Reference entry 10b90f60; body size 60 bytes.
#line 1 "ENTRY_10b90f60"

void __fastcall FUN_10b90f60(int *param_1)

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


// Reference entry 10b90fc0; body size 19 bytes.
#line 1 "ENTRY_10b90fc0"

void __fastcall FUN_10b90fc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10b910c0; body size 38 bytes.
#line 1 "ENTRY_10b910c0"

void __fastcall FUN_10b910c0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10b91160();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x14);
  }
  return;
}


// Reference entry 10b91d50; body size 27 bytes.
#line 1 "ENTRY_10b91d50"

int __stdcall FUN_10b91d50(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10b8f140(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10b92030; body size 32 bytes.
#line 1 "ENTRY_10b92030"

undefined4 __thiscall Recovered_Bulk::FUN_10b92030(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b91160();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b92060; body size 45 bytes.
#line 1 "ENTRY_10b92060"

undefined4 * __thiscall Recovered_Bulk::FUN_10b92060(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b92280; body size 35 bytes.
#line 1 "ENTRY_10b92280"

undefined4 __thiscall Recovered_Bulk::FUN_10b92280(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x100);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b924c0; body size 35 bytes.
#line 1 "ENTRY_10b924c0"

undefined4 __thiscall Recovered_Bulk::FUN_10b924c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b924f0; body size 35 bytes.
#line 1 "ENTRY_10b924f0"

undefined4 __thiscall Recovered_Bulk::FUN_10b924f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b92aa0; body size 35 bytes.
#line 1 "ENTRY_10b92aa0"

undefined4 __thiscall Recovered_Bulk::FUN_10b92aa0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b92ad0; body size 35 bytes.
#line 1 "ENTRY_10b92ad0"

undefined4 __thiscall Recovered_Bulk::FUN_10b92ad0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b913e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b92b20; body size 25 bytes.
#line 1 "ENTRY_10b92b20"

void __fastcall FUN_10b92b20(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10b937b0; body size 35 bytes.
#line 1 "ENTRY_10b937b0"

void __thiscall Recovered_Bulk::FUN_10b937b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10b937e0; body size 31 bytes.
#line 1 "ENTRY_10b937e0"

void FUN_10b937e0(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCSettingsReplicator:onError");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10b93810; body size 31 bytes.
#line 1 "ENTRY_10b93810"

void FUN_10b93810(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCSettingsReplicator:onRefreshed");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10b93840; body size 31 bytes.
#line 1 "ENTRY_10b93840"

void FUN_10b93840(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCSettingsReplicator:onSuccess");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10b94e40; body size 28 bytes.
#line 1 "ENTRY_10b94e40"

int * __thiscall Recovered_Bulk::FUN_10b94e40(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xe8));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10b96c40; body size 41 bytes.
#line 1 "ENTRY_10b96c40"

undefined4 * __thiscall Recovered_Bulk::FUN_10b96c40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b96cd0; body size 41 bytes.
#line 1 "ENTRY_10b96cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b96cd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b96d50; body size 41 bytes.
#line 1 "ENTRY_10b96d50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b96d50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b96dd0; body size 41 bytes.
#line 1 "ENTRY_10b96dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b96dd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b96e50; body size 24 bytes.
#line 1 "ENTRY_10b96e50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b96e50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b96e70; body size 24 bytes.
#line 1 "ENTRY_10b96e70"

undefined4 * __thiscall Recovered_Bulk::FUN_10b96e70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b97330; body size 39 bytes.
#line 1 "ENTRY_10b97330"

undefined4 * __fastcall FUN_10b97330(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97360; body size 39 bytes.
#line 1 "ENTRY_10b97360"

undefined4 * __fastcall FUN_10b97360(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b983d0; body size 19 bytes.
#line 1 "ENTRY_10b983d0"

void __fastcall FUN_10b983d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b983f0; body size 19 bytes.
#line 1 "ENTRY_10b983f0"

void __fastcall FUN_10b983f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b98410; body size 19 bytes.
#line 1 "ENTRY_10b98410"

void __fastcall FUN_10b98410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b98430; body size 19 bytes.
#line 1 "ENTRY_10b98430"

void __fastcall FUN_10b98430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b988b0; body size 60 bytes.
#line 1 "ENTRY_10b988b0"

void __fastcall FUN_10b988b0(int *param_1)

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


// Reference entry 10b98910; body size 19 bytes.
#line 1 "ENTRY_10b98910"

void __fastcall FUN_10b98910(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10b98930; body size 19 bytes.
#line 1 "ENTRY_10b98930"

void __fastcall FUN_10b98930(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10b98bf0; body size 38 bytes.
#line 1 "ENTRY_10b98bf0"

void __fastcall FUN_10b98bf0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10b98d60();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x14);
  }
  return;
}


// Reference entry 10b98c70; body size 25 bytes.
#line 1 "ENTRY_10b98c70"

void __fastcall FUN_10b98c70(undefined4 *param_1)

{
  thunk_FUN_10b95cf0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10b98fe0; body size 37 bytes.
#line 1 "ENTRY_10b98fe0"

void __fastcall FUN_10b98fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArtworkCache);
  thunk_FUN_10b98a00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b99270; body size 43 bytes.
#line 1 "ENTRY_10b99270"

void __fastcall FUN_10b99270(undefined4 *param_1)

{
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCLogoArtworkCache);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLogoArtworkCache);
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b99850; body size 27 bytes.
#line 1 "ENTRY_10b99850"

int __stdcall FUN_10b99850(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10b95f10(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10b99880; body size 27 bytes.
#line 1 "ENTRY_10b99880"

int __stdcall FUN_10b99880(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10b961a0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10b99c90; body size 45 bytes.
#line 1 "ENTRY_10b99c90"

undefined4 * __thiscall Recovered_Bulk::FUN_10b99c90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b99cd0; body size 45 bytes.
#line 1 "ENTRY_10b99cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b99cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b99d10; body size 45 bytes.
#line 1 "ENTRY_10b99d10"

undefined4 * __thiscall Recovered_Bulk::FUN_10b99d10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b99d50; body size 45 bytes.
#line 1 "ENTRY_10b99d50"

undefined4 * __thiscall Recovered_Bulk::FUN_10b99d50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b99d90; body size 32 bytes.
#line 1 "ENTRY_10b99d90"

undefined4 __thiscall Recovered_Bulk::FUN_10b99d90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b98450();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b99e50; body size 32 bytes.
#line 1 "ENTRY_10b99e50"

undefined4 __thiscall Recovered_Bulk::FUN_10b99e50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b98d60();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b9a030; body size 59 bytes.
#line 1 "ENTRY_10b9a030"

undefined4 * __thiscall Recovered_Bulk::FUN_10b9a030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArtworkCache);
  thunk_FUN_10b98a00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a080; body size 32 bytes.
#line 1 "ENTRY_10b9a080"

undefined4 __thiscall Recovered_Bulk::FUN_10b9a080(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b99010();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b9a0b0; body size 35 bytes.
#line 1 "ENTRY_10b9a0b0"

undefined4 __thiscall Recovered_Bulk::FUN_10b9a0b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10b990f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x88);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b9a0e0; body size 45 bytes.
#line 1 "ENTRY_10b9a0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b9a0e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a120; body size 33 bytes.
#line 1 "ENTRY_10b9a120"

undefined4 * __thiscall Recovered_Bulk::FUN_10b9a120(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a150; body size 33 bytes.
#line 1 "ENTRY_10b9a150"

undefined4 * __thiscall Recovered_Bulk::FUN_10b9a150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a180; body size 33 bytes.
#line 1 "ENTRY_10b9a180"

undefined4 * __thiscall Recovered_Bulk::FUN_10b9a180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a1b0; body size 33 bytes.
#line 1 "ENTRY_10b9a1b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b9a1b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a370; body size 33 bytes.
#line 1 "ENTRY_10b9a370"

undefined4 * __thiscall Recovered_Bulk::FUN_10b9a370(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SvgFileParserCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a3a0; body size 32 bytes.
#line 1 "ENTRY_10b9a3a0"

undefined4 __thiscall Recovered_Bulk::FUN_10b9a3a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  FUN_1003d5d7();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 10b9a3d0; body size 33 bytes.
#line 1 "ENTRY_10b9a3d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b9a3d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SvgFileParserCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b9a440; body size 25 bytes.
#line 1 "ENTRY_10b9a440"

void __fastcall FUN_10b9a440(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10b9a460; body size 25 bytes.
#line 1 "ENTRY_10b9a460"

void __fastcall FUN_10b9a460(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10b9b4b0; body size 25 bytes.
#line 1 "ENTRY_10b9b4b0"

void __fastcall FUN_10b9b4b0(undefined4 *param_1)

{
  thunk_FUN_10b95cf0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10b9bac0; body size 30 bytes.
#line 1 "ENTRY_10b9bac0"

void __thiscall Recovered_Bulk::FUN_10b9bac0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10b9bf50; body size 16 bytes.
#line 1 "ENTRY_10b9bf50"

void __fastcall FUN_10b9bf50(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
                    
                    
    (**(code **)(*(int *)(param_1 + 0x38) + 4))();
    return;
  }
  return;
}


// Reference entry 10b9c060; body size 32 bytes.
#line 1 "ENTRY_10b9c060"

void __fastcall FUN_10b9c060(int *param_1)

{
  thunk_FUN_10b95cf0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10b9c370; body size 21 bytes.
#line 1 "ENTRY_10b9c370"

SCStr * __stdcall FUN_10b9c370(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCArtworkData");
  return (SCStr *)(param_1);
}


// Reference entry 10b9c390; body size 21 bytes.
#line 1 "ENTRY_10b9c390"

SCStr * __stdcall FUN_10b9c390(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLogoArtworkData");
  return (SCStr *)(param_1);
}


// Reference entry 10b9c480; body size 27 bytes.
#line 1 "ENTRY_10b9c480"

void __fastcall FUN_10b9c480(int param_1)

{
  thunk_FUN_10b9bfd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


// Reference entry 10b9c740; body size 51 bytes.
#line 1 "ENTRY_10b9c740"

int * FUN_10b9c740(int *param_1)

{
 try {
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10b95f10(local_8,&stack0x00000008));
  piVar1 = (int *)(*(int **)(*piVar1 + 0xc));
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10b9d980; body size 45 bytes.
#line 1 "ENTRY_10b9d980"

void __thiscall Recovered_Bulk::FUN_10b9d980(void *param_2,size_t param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x30))());
  if (uVar1 < param_3) {
    param_3 = (size_t)((**(code **)(*param_1 + 0x30))());
  }
  memcpy(param_2,(void *)param_1[0x1d],param_3);
  return;
}


// Reference entry 10b9d9c0; body size 48 bytes.
#line 1 "ENTRY_10b9d9c0"

void __thiscall Recovered_Bulk::FUN_10b9d9c0(void *param_2,size_t param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x30))());
  if (uVar1 < param_3) {
    param_3 = (size_t)((**(code **)(*param_1 + 0x30))());
  }
  memcpy(param_2,(void *)param_1[0x32],param_3);
  return;
}


// Reference entry 10b9ddf0; body size 30 bytes.
#line 1 "ENTRY_10b9ddf0"

SCStr * __thiscall Recovered_Bulk::FUN_10b9ddf0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x2c));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x30);
  return (SCStr *)(param_2);
}


// Reference entry 10b9de20; body size 30 bytes.
#line 1 "ENTRY_10b9de20"

SCStr * __thiscall Recovered_Bulk::FUN_10b9de20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x34));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x38);
  return (SCStr *)(param_2);
}


// Reference entry 10b9e0e0; body size 25 bytes.
#line 1 "ENTRY_10b9e0e0"

int * __thiscall Recovered_Bulk::FUN_10b9e0e0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x38));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10b9e170; body size 20 bytes.
#line 1 "ENTRY_10b9e170"

SCStr * __thiscall Recovered_Bulk::FUN_10b9e170(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 10b9e190; body size 20 bytes.
#line 1 "ENTRY_10b9e190"

SCStr * __thiscall Recovered_Bulk::FUN_10b9e190(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x34));
  return (SCStr *)(param_2);
}


// Reference entry 10b9e1f0; body size 42 bytes.
#line 1 "ENTRY_10b9e1f0"

void __thiscall Recovered_Bulk::FUN_10b9e1f0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x54) = param_2;
  iStack_10 = (int)(param_1);
  iStack_c = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIArtworkData:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10b9e500; body size 18 bytes.
#line 1 "ENTRY_10b9e500"

undefined1 __fastcall FUN_10b9e500(int param_1)

{
  if ((*(int *)(param_1 + 0x50) == 0) && (*(char *)(param_1 + 0x58) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10ba0860; body size 22 bytes.
#line 1 "ENTRY_10ba0860"

undefined4 __thiscall Recovered_Bulk::FUN_10ba0860(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x18))(param_2,param_3,5);
  return (undefined4)(param_3);
}


// Reference entry 10ba0970; body size 38 bytes.
#line 1 "ENTRY_10ba0970"

undefined4 __fastcall FUN_10ba0970(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((**(code **)(*param_1 + 8))());
  cVar1 = (char)(thunk_FUN_11206ea0());
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(thunk_FUN_11207070(uVar2));
    return (undefined4)(uVar2);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10ba0b30; body size 30 bytes.
#line 1 "ENTRY_10ba0b30"

undefined4 __stdcall FUN_10ba0b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10b9e930(param_1,param_2,param_3,param_4,1);
  return (undefined4)(param_1);
}


// Reference entry 10ba0b60; body size 30 bytes.
#line 1 "ENTRY_10ba0b60"

undefined4 __stdcall FUN_10ba0b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_10b9e930(param_1,param_2,param_3,param_4,0);
  return (undefined4)(param_1);
}


// Reference entry 10ba17b0; body size 55 bytes.
#line 1 "ENTRY_10ba17b0"

void __thiscall Recovered_Bulk::FUN_10ba17b0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  char cVar2;
  
  iVar1 = (int)(param_1[4]);
  if (param_2 != 0) {
    thunk_FUN_103d61d0(param_2,0);
  }
  cVar2 = (char)((**(code **)(*param_1 + 0x1c))());
  if ((cVar2 == '\0') && (iVar1 == 0)) {
    thunk_FUN_10ba0bf0();
  }
  return;
}


// Reference entry 10ba1800; body size 55 bytes.
#line 1 "ENTRY_10ba1800"

void __thiscall Recovered_Bulk::FUN_10ba1800(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  char cVar2;
  
  iVar1 = (int)(param_1[4]);
  if (param_2 != 0) {
    thunk_FUN_103d61d0(param_2,0);
  }
  cVar2 = (char)((**(code **)(*param_1 + 0x1c))());
  if ((cVar2 == '\0') && (iVar1 == 0)) {
    thunk_FUN_10ba0e70();
  }
  return;
}


// Reference entry 10ba1850; body size 21 bytes.
#line 1 "ENTRY_10ba1850"

void __thiscall Recovered_Bulk::FUN_10ba1850(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}


// Reference entry 10ba1a60; body size 56 bytes.
#line 1 "ENTRY_10ba1a60"

void __thiscall Recovered_Bulk::FUN_10ba1a60(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    (**(code **)(*(int *)(param_1 + 0x60) + 4))();
    if (*(char *)(param_1 + 0x58) != '\0') {
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0x3ec;
    }
  }
  return;
}


// Reference entry 10ba2e2d; body size 37 bytes.
#line 1 "ENTRY_10ba2e2d"

void Catch_All_10ba2e2d_10ba2e2d(void)

{
  int unaff_EBP;
  
  thunk_FUN_10ba87e0(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x28));
  thunk_FUN_10bab1e0(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x1c));
                    
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// Reference entry 10ba31c0; body size 33 bytes.
#line 1 "ENTRY_10ba31c0"

void __thiscall Recovered_Bulk::FUN_10ba31c0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10ba3240(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10ba31f0; body size 57 bytes.
#line 1 "ENTRY_10ba31f0"

void __stdcall FUN_10ba31f0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10ba31f0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x2c);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10ba3300; body size 49 bytes.
#line 1 "ENTRY_10ba3300"

int __thiscall Recovered_Bulk::FUN_10ba3300(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10ba3340(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10ba4fe0; body size 41 bytes.
#line 1 "ENTRY_10ba4fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba4fe0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5020; body size 41 bytes.
#line 1 "ENTRY_10ba5020"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba5020(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5080; body size 41 bytes.
#line 1 "ENTRY_10ba5080"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba5080(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5140; body size 24 bytes.
#line 1 "ENTRY_10ba5140"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba5140(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5250; body size 48 bytes.
#line 1 "ENTRY_10ba5250"

undefined4 * __fastcall FUN_10ba5250(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5290; body size 48 bytes.
#line 1 "ENTRY_10ba5290"

undefined4 * __fastcall FUN_10ba5290(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba6b30; body size 60 bytes.
#line 1 "ENTRY_10ba6b30"

void __fastcall FUN_10ba6b30(int *param_1)

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


// Reference entry 10ba6c10; body size 26 bytes.
#line 1 "ENTRY_10ba6c10"

void __fastcall FUN_10ba6c10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ba6c30; body size 19 bytes.
#line 1 "ENTRY_10ba6c30"

void __fastcall FUN_10ba6c30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 10ba6c50; body size 19 bytes.
#line 1 "ENTRY_10ba6c50"

void __fastcall FUN_10ba6c50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10ba6d30; body size 28 bytes.
#line 1 "ENTRY_10ba6d30"

void __fastcall FUN_10ba6d30(int *param_1)

{
  thunk_FUN_10ba3240(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10ba6e50; body size 33 bytes.
#line 1 "ENTRY_10ba6e50"

void __fastcall FUN_10ba6e50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    thunk_FUN_10ba6fd0();
  }
  return;
}


// Reference entry 10ba6f00; body size 28 bytes.
#line 1 "ENTRY_10ba6f00"

void __fastcall FUN_10ba6f00(int *param_1)

{
  thunk_FUN_10ba3240(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10ba7460; body size 18 bytes.
#line 1 "ENTRY_10ba7460"

void __fastcall FUN_10ba7460(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10ba8050; body size 45 bytes.
#line 1 "ENTRY_10ba8050"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba8050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba8130; body size 52 bytes.
#line 1 "ENTRY_10ba8130"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba8130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba8180; body size 60 bytes.
#line 1 "ENTRY_10ba8180"

int __thiscall Recovered_Bulk::FUN_10ba8180(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 10ba82c0; body size 45 bytes.
#line 1 "ENTRY_10ba82c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba82c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba8300; body size 32 bytes.
#line 1 "ENTRY_10ba8300"

undefined4 __thiscall Recovered_Bulk::FUN_10ba8300(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ba6fd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ba8330; body size 58 bytes.
#line 1 "ENTRY_10ba8330"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba8330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba8380; body size 32 bytes.
#line 1 "ENTRY_10ba8380"

undefined4 __thiscall Recovered_Bulk::FUN_10ba8380(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ba7200();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ba83b0; body size 33 bytes.
#line 1 "ENTRY_10ba83b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba83b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba83e0; body size 33 bytes.
#line 1 "ENTRY_10ba83e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10ba83e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjACListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ba8480; body size 25 bytes.
#line 1 "ENTRY_10ba8480"

void __fastcall FUN_10ba8480(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x2c));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10ba84a0; body size 25 bytes.
#line 1 "ENTRY_10ba84a0"

void __fastcall FUN_10ba84a0(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10ba86b0; body size 19 bytes.
#line 1 "ENTRY_10ba86b0"

void __thiscall Recovered_Bulk::FUN_10ba86b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ba8770; body size 21 bytes.
#line 1 "ENTRY_10ba8770"

void __thiscall Recovered_Bulk::FUN_10ba8770(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10ba8790; body size 58 bytes.
#line 1 "ENTRY_10ba8790"

void __thiscall Recovered_Bulk::FUN_10ba8790(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 10ba87e0; body size 35 bytes.
#line 1 "ENTRY_10ba87e0"

void __stdcall FUN_10ba87e0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    thunk_FUN_10ba6fd0();
  }
  return;
}


// Reference entry 10ba8810; body size 38 bytes.
#line 1 "ENTRY_10ba8810"

void __fastcall FUN_10ba8810(int param_1)

{
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  uStack_10 = (undefined4)(*(undefined4 *)(param_1 + 4));
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIAlarmManager:onAlarmsChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10ba9f70; body size 31 bytes.
#line 1 "ENTRY_10ba9f70"

int * FUN_10ba9f70(int *param_1)

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
  return (int *)(param_1);
}


// Reference entry 10ba9fa0; body size 31 bytes.
#line 1 "ENTRY_10ba9fa0"

int * FUN_10ba9fa0(int *param_1)

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
  return (int *)(param_1);
}


// Reference entry 10ba9fd0; body size 19 bytes.
#line 1 "ENTRY_10ba9fd0"

void __thiscall Recovered_Bulk::FUN_10ba9fd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10baa800; body size 19 bytes.
#line 1 "ENTRY_10baa800"

undefined1 __fastcall FUN_10baa800(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return (undefined1)(0);
  }
  uVar1 = (undefined1)(FUN_1110f110());
  return (undefined1)(uVar1);
}


// Reference entry 10baa820; body size 45 bytes.
#line 1 "ENTRY_10baa820"

void __thiscall Recovered_Bulk::FUN_10baa820(int param_2)
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


// Reference entry 10baa860; body size 45 bytes.
#line 1 "ENTRY_10baa860"

void __thiscall Recovered_Bulk::FUN_10baa860(int param_2)
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


// Reference entry 10baa950; body size 33 bytes.
#line 1 "ENTRY_10baa950"

void __fastcall FUN_10baa950(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10ba3240(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = (int)(iVar1);
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10baa980; body size 33 bytes.
#line 1 "ENTRY_10baa980"

void __fastcall FUN_10baa980(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_102bcb30(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = (int)(iVar1);
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10baa9b0; body size 51 bytes.
#line 1 "ENTRY_10baa9b0"

void __fastcall FUN_10baa9b0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x38));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


// Reference entry 10bab1e0; body size 59 bytes.
#line 1 "ENTRY_10bab1e0"

void __stdcall FUN_10bab1e0(int param_1,int param_2)

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


// Reference entry 10bab270; body size 38 bytes.
#line 1 "ENTRY_10bab270"

void __fastcall FUN_10bab270(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_10da6830();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c) = 0;
  }
  return;
}


// Reference entry 10bab2a0; body size 60 bytes.
#line 1 "ENTRY_10bab2a0"

void __fastcall FUN_10bab2a0(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
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


// Reference entry 10bab320; body size 35 bytes.
#line 1 "ENTRY_10bab320"

void __thiscall Recovered_Bulk::FUN_10bab320(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10bac480; body size 25 bytes.
#line 1 "ENTRY_10bac480"

int * __thiscall Recovered_Bulk::FUN_10bac480(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x34));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10bb24a0; body size 22 bytes.
#line 1 "ENTRY_10bb24a0"

undefined4 __stdcall FUN_10bb24a0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10baeb40(param_1,param_2,0);
  return (undefined4)(param_1);
}


// Reference entry 10bb3040; body size 16 bytes.
#line 1 "ENTRY_10bb3040"

void __fastcall FUN_10bb3040(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 4) + 0xac))();
    return;
  }
  return;
}


// Reference entry 10bb3070; body size 20 bytes.
#line 1 "ENTRY_10bb3070"

void __fastcall FUN_10bb3070(int param_1)

{
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  return;
}


// Reference entry 10bb4330; body size 38 bytes.
#line 1 "ENTRY_10bb4330"

undefined4 __thiscall Recovered_Bulk::FUN_10bb4330(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0(&DAT_11910258,0);
  thunk_FUN_1124f350(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10bb4690; body size 43 bytes.
#line 1 "ENTRY_10bb4690"

void __stdcall FUN_10bb4690(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930(param_1);
    thunk_FUN_112af4e0("SCAlarmManager",3,"Remove Event Sink %p",param_1);
  }
  return;
}


// Reference entry 10bb4be0; body size 33 bytes.
#line 1 "ENTRY_10bb4be0"

void __thiscall Recovered_Bulk::FUN_10bb4be0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bb4c10(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bb5310; body size 48 bytes.
#line 1 "ENTRY_10bb5310"

undefined4 * __fastcall FUN_10bb5310(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb58d0; body size 19 bytes.
#line 1 "ENTRY_10bb58d0"

void __fastcall FUN_10bb58d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bb58f0; body size 28 bytes.
#line 1 "ENTRY_10bb58f0"

void __fastcall FUN_10bb58f0(int *param_1)

{
  thunk_FUN_10bb4c10(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bb59f0; body size 19 bytes.
#line 1 "ENTRY_10bb59f0"

void __fastcall FUN_10bb59f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bb5a10; body size 28 bytes.
#line 1 "ENTRY_10bb5a10"

void __fastcall FUN_10bb5a10(int *param_1)

{
  thunk_FUN_10bb4c10(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bb60e0; body size 33 bytes.
#line 1 "ENTRY_10bb60e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb60e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6400; body size 33 bytes.
#line 1 "ENTRY_10bb6400"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb6400(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6540; body size 33 bytes.
#line 1 "ENTRY_10bb6540"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb6540(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6570; body size 33 bytes.
#line 1 "ENTRY_10bb6570"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb6570(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb65a0; body size 33 bytes.
#line 1 "ENTRY_10bb65a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb65a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb65d0; body size 33 bytes.
#line 1 "ENTRY_10bb65d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb65d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6600; body size 33 bytes.
#line 1 "ENTRY_10bb6600"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb6600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6630; body size 33 bytes.
#line 1 "ENTRY_10bb6630"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb6630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6660; body size 33 bytes.
#line 1 "ENTRY_10bb6660"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb6660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6690; body size 33 bytes.
#line 1 "ENTRY_10bb6690"

undefined4 * __thiscall Recovered_Bulk::FUN_10bb6690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjDDListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bb66f0; body size 25 bytes.
#line 1 "ENTRY_10bb66f0"

void __fastcall FUN_10bb66f0(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bb6b30; body size 57 bytes.
#line 1 "ENTRY_10bb6b30"

void __thiscall Recovered_Bulk::FUN_10bb6b30(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x20) + 0x20))());
  }
  if (iVar1 == param_2) {
    thunk_FUN_112af4e0("legacy_join_household_wizard",1,
                       "State timed out, transitioning to error page");
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10bb6fe0; body size 33 bytes.
#line 1 "ENTRY_10bb6fe0"

void __fastcall FUN_10bb6fe0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x1c) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10bb7170; body size 42 bytes.
#line 1 "ENTRY_10bb7170"

undefined4 * __fastcall FUN_10bb7170(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyJoinExistingWizardInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10bb7a10; body size 53 bytes.
#line 1 "ENTRY_10bb7a10"

void __stdcall FUN_10bb7a10(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  SCLibrary *pSVar2;
  int iVar3;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onNetworkChanged"));
  if (bVar1) {
    pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    iVar3 = (int)((**(code **)(*(int *)pSVar2 + 0x110))());
    if (iVar3 == 2) {
      FUN_1006aac8();
    }
  }
  return;
}


// Reference entry 10bb7a60; body size 21 bytes.
#line 1 "ENTRY_10bb7a60"

SCStr * __stdcall FUN_10bb7a60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("CUSTOM_SUB_WIZARD_FIREWALL");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7d30; body size 21 bytes.
#line 1 "ENTRY_10bb7d30"

SCStr * __stdcall FUN_10bb7d30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.button_press");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7d50; body size 21 bytes.
#line 1 "ENTRY_10bb7d50"

SCStr * __stdcall FUN_10bb7d50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.complete");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7d70; body size 21 bytes.
#line 1 "ENTRY_10bb7d70"

SCStr * __stdcall FUN_10bb7d70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.connecting");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7d90; body size 21 bytes.
#line 1 "ENTRY_10bb7d90"

SCStr * __stdcall FUN_10bb7d90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.firewall_subwizard");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7db0; body size 21 bytes.
#line 1 "ENTRY_10bb7db0"

SCStr * __stdcall FUN_10bb7db0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.init");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7dd0; body size 21 bytes.
#line 1 "ENTRY_10bb7dd0"

SCStr * __stdcall FUN_10bb7dd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.intro");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7df0; body size 21 bytes.
#line 1 "ENTRY_10bb7df0"

SCStr * __stdcall FUN_10bb7df0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.setup_not_allowed");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7e10; body size 21 bytes.
#line 1 "ENTRY_10bb7e10"

SCStr * __stdcall FUN_10bb7e10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.success");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7e30; body size 21 bytes.
#line 1 "ENTRY_10bb7e30"

SCStr * __stdcall FUN_10bb7e30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("legacy_join_existing.timeout");
  return (SCStr *)(param_1);
}


// Reference entry 10bb7e60; body size 35 bytes.
#line 1 "ENTRY_10bb7e60"

SCStr * __stdcall FUN_10bb7e60(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20ea,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10bb7e90; body size 19 bytes.
#line 1 "ENTRY_10bb7e90"

undefined4 __stdcall FUN_10bb7e90(undefined4 param_1)

{
  createPropertyBag();
  return (undefined4)(param_1);
}


// Reference entry 10bba430; body size 21 bytes.
#line 1 "ENTRY_10bba430"

SCStr * __stdcall FUN_10bba430(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCLegacyJoinExistingWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10bbb130; body size 33 bytes.
#line 1 "ENTRY_10bbb130"

void __fastcall FUN_10bbb130(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
                    
                    
  (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  return;
}


// Reference entry 10bbb340; body size 63 bytes.
#line 1 "ENTRY_10bbb340"

void __fastcall FUN_10bbb340(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_1112be50();
  thunk_FUN_1112ba50(-(uint)(param_1 != 0) & param_1 + 0x1cU);
  uVar1 = (undefined4)(1);
  thunk_FUN_1023a9f0(1);
  thunk_FUN_105b5360(uVar1);
  thunk_FUN_10bbaa30(0x9c4);
  thunk_FUN_10bba8f0();
  return;
}


// Reference entry 10bbb640; body size 24 bytes.
#line 1 "ENTRY_10bbb640"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbb640(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbb800; body size 45 bytes.
#line 1 "ENTRY_10bbb800"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbb800(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbb840; body size 52 bytes.
#line 1 "ENTRY_10bbb840"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbb840(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbb890; body size 52 bytes.
#line 1 "ENTRY_10bbb890"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbb890(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbb8e0; body size 33 bytes.
#line 1 "ENTRY_10bbb8e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbb8e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbbfe0; body size 20 bytes.
#line 1 "ENTRY_10bbbfe0"

SCStr * __thiscall Recovered_Bulk::FUN_10bbbfe0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10bbc000; body size 25 bytes.
#line 1 "ENTRY_10bbc000"

undefined4 __fastcall FUN_10bbc000(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x44))());
  if (piVar1 != (int *)0x0) {
                    
                    
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x110))());
    return (undefined4)(uVar2);
  }
  return (undefined4)(1);
}


// Reference entry 10bbcdf0; body size 20 bytes.
#line 1 "ENTRY_10bbcdf0"

void __fastcall FUN_10bbcdf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x44))());
  if (piVar1 != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 0x118))();
    return;
  }
  return;
}


// Reference entry 10bbd010; body size 20 bytes.
#line 1 "ENTRY_10bbd010"

void __fastcall FUN_10bbd010(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x44))());
  if (piVar1 != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 0x114))();
    return;
  }
  return;
}


// Reference entry 10bbd7c0; body size 39 bytes.
#line 1 "ENTRY_10bbd7c0"

void FUN_10bbd7c0(int param_1)

{
  if (param_1 != 0) {
    DAT_121a5030 = (int)(param_1);
    thunk_FUN_112af500(FUN_10bbd800);
  }
  thunk_FUN_111a74c0();
  return;
}


// Reference entry 10bbddd0; body size 30 bytes.
#line 1 "ENTRY_10bbddd0"

void __thiscall Recovered_Bulk::FUN_10bbddd0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10bbdeb0; body size 41 bytes.
#line 1 "ENTRY_10bbdeb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbdeb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbe3a0; body size 45 bytes.
#line 1 "ENTRY_10bbe3a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbe3a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbe520; body size 33 bytes.
#line 1 "ENTRY_10bbe520"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbe520(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbe780; body size 30 bytes.
#line 1 "ENTRY_10bbe780"

void __thiscall Recovered_Bulk::FUN_10bbe780(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10bbe8a0; body size 28 bytes.
#line 1 "ENTRY_10bbe8a0"

void __fastcall FUN_10bbe8a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10bbe8d0; body size 21 bytes.
#line 1 "ENTRY_10bbe8d0"

SCStr * __stdcall FUN_10bbe8d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("chirp_manager");
  return (SCStr *)(param_1);
}


// Reference entry 10bbefd0; body size 20 bytes.
#line 1 "ENTRY_10bbefd0"

bool __thiscall Recovered_Bulk::FUN_10bbefd0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2));
  return (bool)(iVar1 == 0);
}


// Reference entry 10bbf090; body size 41 bytes.
#line 1 "ENTRY_10bbf090"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbf090(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bbf1a0; body size 45 bytes.
#line 1 "ENTRY_10bbf1a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bbf1a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc0390; body size 19 bytes.
#line 1 "ENTRY_10bc0390"

void __fastcall FUN_10bc0390(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bc04b0; body size 19 bytes.
#line 1 "ENTRY_10bc04b0"

void __fastcall FUN_10bc04b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bc0600; body size 18 bytes.
#line 1 "ENTRY_10bc0600"

void __fastcall FUN_10bc0600(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10bc0620; body size 18 bytes.
#line 1 "ENTRY_10bc0620"

void __fastcall FUN_10bc0620(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10bc0a50; body size 25 bytes.
#line 1 "ENTRY_10bc0a50"

void __fastcall FUN_10bc0a50(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bc0b50; body size 21 bytes.
#line 1 "ENTRY_10bc0b50"

void __thiscall Recovered_Bulk::FUN_10bc0b50(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10bc0c00; body size 21 bytes.
#line 1 "ENTRY_10bc0c00"

void __thiscall Recovered_Bulk::FUN_10bc0c00(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10bc0c20; body size 22 bytes.
#line 1 "ENTRY_10bc0c20"

void FUN_10bc0c20(void)

{
  thunk_FUN_10d9e6c0(3);
  return;
}


// Reference entry 10bc0c40; body size 38 bytes.
#line 1 "ENTRY_10bc0c40"

void __fastcall FUN_10bc0c40(int param_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  thunk_FUN_10d9e6c0(2);
  return;
}


// Reference entry 10bc1530; body size 31 bytes.
#line 1 "ENTRY_10bc1530"

int * FUN_10bc1530(int *param_1)

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
  return (int *)(param_1);
}


// Reference entry 10bc1990; body size 33 bytes.
#line 1 "ENTRY_10bc1990"

void __fastcall FUN_10bc1990(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_102e6ae0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = (int)(iVar1);
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10bc1c60; body size 21 bytes.
#line 1 "ENTRY_10bc1c60"

SCStr * __stdcall FUN_10bc1c60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AppInterop");
  return (SCStr *)(param_1);
}


// Reference entry 10bc1c80; body size 21 bytes.
#line 1 "ENTRY_10bc1c80"

SCStr * __stdcall FUN_10bc1c80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10bc1ca0; body size 20 bytes.
#line 1 "ENTRY_10bc1ca0"

SCStr * __thiscall Recovered_Bulk::FUN_10bc1ca0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10bc3b90; body size 30 bytes.
#line 1 "ENTRY_10bc3b90"

void __thiscall Recovered_Bulk::FUN_10bc3b90(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10bc3c90; body size 41 bytes.
#line 1 "ENTRY_10bc3c90"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc3c90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc4250; body size 45 bytes.
#line 1 "ENTRY_10bc4250"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc4250(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc4310; body size 33 bytes.
#line 1 "ENTRY_10bc4310"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc4310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc46a0; body size 30 bytes.
#line 1 "ENTRY_10bc46a0"

void __thiscall Recovered_Bulk::FUN_10bc46a0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10bc47c0; body size 28 bytes.
#line 1 "ENTRY_10bc47c0"

void __fastcall FUN_10bc47c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10bc4800; body size 21 bytes.
#line 1 "ENTRY_10bc4800"

SCStr * __stdcall FUN_10bc4800(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("nfc_manager");
  return (SCStr *)(param_1);
}


// Reference entry 10bc5190; body size 46 bytes.
#line 1 "ENTRY_10bc5190"

undefined4 __fastcall FUN_10bc5190(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
    return (undefined4)(0);
  }
  thunk_FUN_10302280(param_1 + 8,"Stopping NFC scan");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
  *(undefined1 *)(param_1 + 0x24) = 0;
  return (undefined4)(1);
}


// Reference entry 10bc5bf0; body size 30 bytes.
#line 1 "ENTRY_10bc5bf0"

void __thiscall Recovered_Bulk::FUN_10bc5bf0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10bc60c0; body size 41 bytes.
#line 1 "ENTRY_10bc60c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc60c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc6100; body size 41 bytes.
#line 1 "ENTRY_10bc6100"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc6100(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc6690; body size 19 bytes.
#line 1 "ENTRY_10bc6690"

void __fastcall FUN_10bc6690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc6b30; body size 18 bytes.
#line 1 "ENTRY_10bc6b30"

void __fastcall FUN_10bc6b30(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10bc6f60; body size 45 bytes.
#line 1 "ENTRY_10bc6f60"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc6f60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc6fa0; body size 45 bytes.
#line 1 "ENTRY_10bc6fa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc6fa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc6fe0; body size 60 bytes.
#line 1 "ENTRY_10bc6fe0"

int __thiscall Recovered_Bulk::FUN_10bc6fe0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 10bc7030; body size 45 bytes.
#line 1 "ENTRY_10bc7030"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc7030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc7070; body size 45 bytes.
#line 1 "ENTRY_10bc7070"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc7070(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc7250; body size 33 bytes.
#line 1 "ENTRY_10bc7250"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc7250(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc7290; body size 19 bytes.
#line 1 "ENTRY_10bc7290"

void __thiscall Recovered_Bulk::FUN_10bc7290(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10bc7350; body size 21 bytes.
#line 1 "ENTRY_10bc7350"

void __thiscall Recovered_Bulk::FUN_10bc7350(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10bc7370; body size 21 bytes.
#line 1 "ENTRY_10bc7370"

void __thiscall Recovered_Bulk::FUN_10bc7370(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10bc7390; body size 58 bytes.
#line 1 "ENTRY_10bc7390"

void __thiscall Recovered_Bulk::FUN_10bc7390(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 10bc7530; body size 19 bytes.
#line 1 "ENTRY_10bc7530"

void __thiscall Recovered_Bulk::FUN_10bc7530(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10bc76d0; body size 30 bytes.
#line 1 "ENTRY_10bc76d0"

void __thiscall Recovered_Bulk::FUN_10bc76d0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10bc78f0; body size 31 bytes.
#line 1 "ENTRY_10bc78f0"

void FUN_10bc78f0(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCIBTClassicConnectionManager:onSonosDeviceInfoChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10bc79f0; body size 35 bytes.
#line 1 "ENTRY_10bc79f0"

void __thiscall Recovered_Bulk::FUN_10bc79f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10bc7a20; body size 28 bytes.
#line 1 "ENTRY_10bc7a20"

void __fastcall FUN_10bc7a20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10bc7c10; body size 25 bytes.
#line 1 "ENTRY_10bc7c10"

int * __thiscall Recovered_Bulk::FUN_10bc7c10(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x50));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10bc81e0; body size 43 bytes.
#line 1 "ENTRY_10bc81e0"

SCStr * __thiscall Recovered_Bulk::FUN_10bc81e0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x24))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep((char *)0x0);
  return (SCStr *)(param_2);
}


// Reference entry 10bc8830; body size 28 bytes.
#line 1 "ENTRY_10bc8830"

void __fastcall FUN_10bc8830(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


// Reference entry 10bc8bb0; body size 24 bytes.
#line 1 "ENTRY_10bc8bb0"

undefined4 __fastcall FUN_10bc8bb0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x38) + 0x18))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10bc8bd0; body size 24 bytes.
#line 1 "ENTRY_10bc8bd0"

undefined4 __fastcall FUN_10bc8bd0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x38) + 0x14))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10bc8e80; body size 18 bytes.
#line 1 "ENTRY_10bc8e80"

void __stdcall FUN_10bc8e80(int param_1)

{
  if (param_1 == 0) {
    thunk_FUN_10bc8860();
  }
  return;
}


// Reference entry 10bc9060; body size 61 bytes.
#line 1 "ENTRY_10bc9060"

void __thiscall Recovered_Bulk::FUN_10bc9060(int param_2)
{
  int param_1 = (int )this;
  if (param_2 == *(int *)(param_1 + 0x24)) {
    thunk_FUN_10bc8860();
    return;
  }
  if (param_2 == *(int *)(param_1 + 0x20)) {
    thunk_FUN_112af4e0("SCBTClassicConnectionManager",1,
                       "1 minute BLE scan duration is up, stopping scan.");
    thunk_FUN_10bc8b30();
  }
  return;
}


// Reference entry 10bc9780; body size 22 bytes.
#line 1 "ENTRY_10bc9780"

void __stdcall FUN_10bc9780(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 10bc97a0; body size 23 bytes.
#line 1 "ENTRY_10bc97a0"

void __stdcall FUN_10bc97a0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10bc9ac0; body size 41 bytes.
#line 1 "ENTRY_10bc9ac0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bc9ac0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bc9fe0; body size 32 bytes.
#line 1 "ENTRY_10bc9fe0"

undefined4 __thiscall Recovered_Bulk::FUN_10bc9fe0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bc9d70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bcb100; body size 46 bytes.
#line 1 "ENTRY_10bcb100"

void __fastcall FUN_10bcb100(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2 != 0) {
    do {
      (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x20) + uVar1 * 4))();
      uVar1 = (uint)(uVar1 + 1);
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2));
  }
  return;
}


// Reference entry 10bcb200; body size 36 bytes.
#line 1 "ENTRY_10bcb200"

void __fastcall FUN_10bcb200(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
    *(undefined1 *)(param_1 + 0x24) = 1;
    thunk_FUN_10bcad90();
    thunk_FUN_112af4e0("SCDHS",2,"no cloud support");
  }
  return;
}


// Reference entry 10bcb4d0; body size 25 bytes.
#line 1 "ENTRY_10bcb4d0"

undefined1 FUN_10bcb4d0(void)

{
  thunk_FUN_112af4e0("SCDHS",2,"no cloud support");
  return (undefined1)(0);
}


// Reference entry 10bcb570; body size 46 bytes.
#line 1 "ENTRY_10bcb570"

void FUN_10bcb570(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10bcad90());
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(iVar1 + 0x3c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 0x3c))(1);
    }
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  return;
}


// Reference entry 10bcb620; body size 37 bytes.
#line 1 "ENTRY_10bcb620"

void __fastcall FUN_10bcb620(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x3c))(1);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


// Reference entry 10bcd60e; body size 29 bytes.
#line 1 "ENTRY_10bcd60e"

void Catch_All_10bcd60e_10bcd60e(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(*(undefined4 *)(unaff_EBP + 0xc));
  uVar1 = (undefined4)(thunk_FUN_10bda250(uVar2));
  thunk_FUN_10bcf420(uVar1,uVar2);
                    
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// Reference entry 10bcd749; body size 29 bytes.
#line 1 "ENTRY_10bcd749"

void Catch_All_10bcd749_10bcd749(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(*(undefined4 *)(unaff_EBP + 8));
  uVar1 = (undefined4)(thunk_FUN_10bda290(uVar2));
  thunk_FUN_10bcf4e0(uVar1,uVar2);
                    
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// Reference entry 10bce596; body size 37 bytes.
#line 1 "ENTRY_10bce596"

void Catch_All_10bce596_10bce596(void)

{
  int unaff_EBP;
  
  thunk_FUN_10bd9e70(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x28));
  thunk_FUN_10be1cc0(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x24));
                    
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// Reference entry 10bce8cf; body size 37 bytes.
#line 1 "ENTRY_10bce8cf"

void Catch_All_10bce8cf_10bce8cf(void)

{
  int unaff_EBP;
  
  thunk_FUN_1036b500(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x2c));
  thunk_FUN_103768e0(*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x24));
                    
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// Reference entry 10bceba9; body size 37 bytes.
#line 1 "ENTRY_10bceba9"

void Catch_All_10bceba9_10bceba9(void)

{
  int unaff_EBP;
  
  thunk_FUN_10bd9e90(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x2c));
  thunk_FUN_10be1d10(*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x20));
                    
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// Reference entry 10bcecc0; body size 33 bytes.
#line 1 "ENTRY_10bcecc0"

void __thiscall Recovered_Bulk::FUN_10bcecc0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bceec0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bcecf0; body size 33 bytes.
#line 1 "ENTRY_10bcecf0"

void __thiscall Recovered_Bulk::FUN_10bcecf0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcef80(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bced20; body size 33 bytes.
#line 1 "ENTRY_10bced20"

void __thiscall Recovered_Bulk::FUN_10bced20(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf040(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bced50; body size 33 bytes.
#line 1 "ENTRY_10bced50"

void __thiscall Recovered_Bulk::FUN_10bced50(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf100(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10bced80; body size 33 bytes.
#line 1 "ENTRY_10bced80"

void __thiscall Recovered_Bulk::FUN_10bced80(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf160(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bcedb0; body size 33 bytes.
#line 1 "ENTRY_10bcedb0"

void __thiscall Recovered_Bulk::FUN_10bcedb0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf230(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bcede0; body size 33 bytes.
#line 1 "ENTRY_10bcede0"

void __thiscall Recovered_Bulk::FUN_10bcede0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf300(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bcee70; body size 57 bytes.
#line 1 "ENTRY_10bcee70"

void __stdcall FUN_10bcee70(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10bcee70(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x1c);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10bcf3d0; body size 57 bytes.
#line 1 "ENTRY_10bcf3d0"

void __stdcall FUN_10bcf3d0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10bcf3d0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10bcf5a0; body size 49 bytes.
#line 1 "ENTRY_10bcf5a0"

int __thiscall Recovered_Bulk::FUN_10bcf5a0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcf810(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10bcf5e0; body size 60 bytes.
#line 1 "ENTRY_10bcf5e0"

int __thiscall Recovered_Bulk::FUN_10bcf5e0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcf870(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10bcf630; body size 60 bytes.
#line 1 "ENTRY_10bcf630"

int __thiscall Recovered_Bulk::FUN_10bcf630(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106ab850(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10bcf680; body size 60 bytes.
#line 1 "ENTRY_10bcf680"

int __thiscall Recovered_Bulk::FUN_10bcf680(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcf8e0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10bcf6d0; body size 49 bytes.
#line 1 "ENTRY_10bcf6d0"

int __thiscall Recovered_Bulk::FUN_10bcf6d0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcf950(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10bcf710; body size 49 bytes.
#line 1 "ENTRY_10bcf710"

int __thiscall Recovered_Bulk::FUN_10bcf710(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcf9b0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10bcf750; body size 49 bytes.
#line 1 "ENTRY_10bcf750"

int __thiscall Recovered_Bulk::FUN_10bcf750(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcfa10(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10bcf790; body size 49 bytes.
#line 1 "ENTRY_10bcf790"

int __thiscall Recovered_Bulk::FUN_10bcf790(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcfa70(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10bcf7d0; body size 49 bytes.
#line 1 "ENTRY_10bcf7d0"

int __thiscall Recovered_Bulk::FUN_10bcf7d0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcfad0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10bd1bb0; body size 30 bytes.
#line 1 "ENTRY_10bd1bb0"

void __thiscall Recovered_Bulk::FUN_10bd1bb0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10bd27a0; body size 59 bytes.
#line 1 "ENTRY_10bd27a0"

void __thiscall Recovered_Bulk::FUN_10bd27a0(undefined4 *param_2)
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
  thunk_FUN_10bce9a0(puVar1,param_2);
  return;
}


// Reference entry 10bd31b0; body size 41 bytes.
#line 1 "ENTRY_10bd31b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd31b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3220; body size 41 bytes.
#line 1 "ENTRY_10bd3220"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd3220(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3280; body size 24 bytes.
#line 1 "ENTRY_10bd3280"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd3280(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bd33c0; body size 48 bytes.
#line 1 "ENTRY_10bd33c0"

undefined4 * __fastcall FUN_10bd33c0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3400; body size 48 bytes.
#line 1 "ENTRY_10bd3400"

undefined4 * __fastcall FUN_10bd3400(undefined4 *param_1)

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
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3440; body size 48 bytes.
#line 1 "ENTRY_10bd3440"

undefined4 * __fastcall FUN_10bd3440(undefined4 *param_1)

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
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3480; body size 48 bytes.
#line 1 "ENTRY_10bd3480"

undefined4 * __fastcall FUN_10bd3480(undefined4 *param_1)

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
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3520; body size 48 bytes.
#line 1 "ENTRY_10bd3520"

undefined4 * __fastcall FUN_10bd3520(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3560; body size 48 bytes.
#line 1 "ENTRY_10bd3560"

undefined4 * __fastcall FUN_10bd3560(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd35a0; body size 48 bytes.
#line 1 "ENTRY_10bd35a0"

undefined4 * __fastcall FUN_10bd35a0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd35e0; body size 48 bytes.
#line 1 "ENTRY_10bd35e0"

undefined4 * __fastcall FUN_10bd35e0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3620; body size 48 bytes.
#line 1 "ENTRY_10bd3620"

undefined4 * __fastcall FUN_10bd3620(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd6260; body size 19 bytes.
#line 1 "ENTRY_10bd6260"

void __fastcall FUN_10bd6260(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6280; body size 19 bytes.
#line 1 "ENTRY_10bd6280"

void __fastcall FUN_10bd6280(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd62a0; body size 19 bytes.
#line 1 "ENTRY_10bd62a0"

void __fastcall FUN_10bd62a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd62c0; body size 19 bytes.
#line 1 "ENTRY_10bd62c0"

void __fastcall FUN_10bd62c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd62e0; body size 19 bytes.
#line 1 "ENTRY_10bd62e0"

void __fastcall FUN_10bd62e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10bd6300; body size 19 bytes.
#line 1 "ENTRY_10bd6300"

void __fastcall FUN_10bd6300(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6320; body size 19 bytes.
#line 1 "ENTRY_10bd6320"

void __fastcall FUN_10bd6320(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6340; body size 19 bytes.
#line 1 "ENTRY_10bd6340"

void __fastcall FUN_10bd6340(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10bd6360; body size 19 bytes.
#line 1 "ENTRY_10bd6360"

void __fastcall FUN_10bd6360(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10bd63e0; body size 28 bytes.
#line 1 "ENTRY_10bd63e0"

void __fastcall FUN_10bd63e0(int *param_1)

{
  thunk_FUN_10bceec0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6410; body size 28 bytes.
#line 1 "ENTRY_10bd6410"

void __fastcall FUN_10bd6410(int *param_1)

{
  thunk_FUN_10bcef80(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6440; body size 28 bytes.
#line 1 "ENTRY_10bd6440"

void __fastcall FUN_10bd6440(int *param_1)

{
  thunk_FUN_10bcf040(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6470; body size 28 bytes.
#line 1 "ENTRY_10bd6470"

void __fastcall FUN_10bd6470(int *param_1)

{
  thunk_FUN_10bcf100(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10bd64a0; body size 28 bytes.
#line 1 "ENTRY_10bd64a0"

void __fastcall FUN_10bd64a0(int *param_1)

{
  thunk_FUN_10bcf160(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd64d0; body size 28 bytes.
#line 1 "ENTRY_10bd64d0"

void __fastcall FUN_10bd64d0(int *param_1)

{
  thunk_FUN_10bcf230(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd6500; body size 28 bytes.
#line 1 "ENTRY_10bd6500"

void __fastcall FUN_10bd6500(int *param_1)

{
  thunk_FUN_10bcf300(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd6750; body size 38 bytes.
#line 1 "ENTRY_10bd6750"

void __fastcall FUN_10bd6750(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10bd7130();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x30);
  }
  return;
}


// Reference entry 10bd69a0; body size 19 bytes.
#line 1 "ENTRY_10bd69a0"

void __fastcall FUN_10bd69a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd69c0; body size 19 bytes.
#line 1 "ENTRY_10bd69c0"

void __fastcall FUN_10bd69c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10bd6a00; body size 19 bytes.
#line 1 "ENTRY_10bd6a00"

void __fastcall FUN_10bd6a00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 10bd6aa0; body size 17 bytes.
#line 1 "ENTRY_10bd6aa0"

void __fastcall FUN_10bd6aa0(undefined4 *param_1)

{
  thunk_FUN_10bcda40(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10bd6ac0; body size 17 bytes.
#line 1 "ENTRY_10bd6ac0"

void __fastcall FUN_10bd6ac0(undefined4 *param_1)

{
  thunk_FUN_10bcdb00(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10bd6b00; body size 28 bytes.
#line 1 "ENTRY_10bd6b00"

void __fastcall FUN_10bd6b00(int *param_1)

{
  thunk_FUN_10bceec0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6b30; body size 28 bytes.
#line 1 "ENTRY_10bd6b30"

void __fastcall FUN_10bd6b30(int *param_1)

{
  thunk_FUN_10bcef80(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6b60; body size 28 bytes.
#line 1 "ENTRY_10bd6b60"

void __fastcall FUN_10bd6b60(int *param_1)

{
  thunk_FUN_10bcf040(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10bd6b90; body size 28 bytes.
#line 1 "ENTRY_10bd6b90"

void __fastcall FUN_10bd6b90(int *param_1)

{
  thunk_FUN_10bcf100(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
  return;
}


// Reference entry 10bd6bc0; body size 28 bytes.
#line 1 "ENTRY_10bd6bc0"

void __fastcall FUN_10bd6bc0(int *param_1)

{
  thunk_FUN_10bcf160(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd6bf0; body size 28 bytes.
#line 1 "ENTRY_10bd6bf0"

void __fastcall FUN_10bd6bf0(int *param_1)

{
  thunk_FUN_10bcf230(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd6c20; body size 28 bytes.
#line 1 "ENTRY_10bd6c20"

void __fastcall FUN_10bd6c20(int *param_1)

{
  thunk_FUN_10bcf300(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 10bd7020; body size 37 bytes.
#line 1 "ENTRY_10bd7020"

void __fastcall FUN_10bd7020(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_EtagFileParser);
  thunk_FUN_10246290(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x18);
  return;
}


// Reference entry 10bd8ff0; body size 35 bytes.
#line 1 "ENTRY_10bd8ff0"

undefined4 __thiscall Recovered_Bulk::FUN_10bd8ff0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bd7130();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bd91d0; body size 63 bytes.
#line 1 "ENTRY_10bd91d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd91d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_EtagFileParser);
  thunk_FUN_10246290(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x18);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bd92c0; body size 35 bytes.
#line 1 "ENTRY_10bd92c0"

undefined4 __thiscall Recovered_Bulk::FUN_10bd92c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bd7200();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x94);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bd94a0; body size 25 bytes.
#line 1 "ENTRY_10bd94a0"

void __fastcall FUN_10bd94a0(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bd94c0; body size 25 bytes.
#line 1 "ENTRY_10bd94c0"

void __fastcall FUN_10bd94c0(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bd94e0; body size 25 bytes.
#line 1 "ENTRY_10bd94e0"

void __fastcall FUN_10bd94e0(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bd9500; body size 25 bytes.
#line 1 "ENTRY_10bd9500"

void __fastcall FUN_10bd9500(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bd9520; body size 25 bytes.
#line 1 "ENTRY_10bd9520"

void __fastcall FUN_10bd9520(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x30));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bd9540; body size 25 bytes.
#line 1 "ENTRY_10bd9540"

void __fastcall FUN_10bd9540(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bd9560; body size 25 bytes.
#line 1 "ENTRY_10bd9560"

void __fastcall FUN_10bd9560(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bd9580; body size 25 bytes.
#line 1 "ENTRY_10bd9580"

void __fastcall FUN_10bd9580(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bd95a0; body size 25 bytes.
#line 1 "ENTRY_10bd95a0"

void __fastcall FUN_10bd95a0(int param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


// Reference entry 10bd9600; body size 30 bytes.
#line 1 "ENTRY_10bd9600"

void __thiscall Recovered_Bulk::FUN_10bd9600(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_101a9c10(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 4);
  return;
}


// Reference entry 10bd9e70; body size 20 bytes.
#line 1 "ENTRY_10bd9e70"

void __thiscall Recovered_Bulk::FUN_10bd9e70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bcda40(param_2,param_3,param_1);
  return;
}


// Reference entry 10bd9e90; body size 20 bytes.
#line 1 "ENTRY_10bd9e90"

void __thiscall Recovered_Bulk::FUN_10bd9e90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bcdb00(param_2,param_3,param_1);
  return;
}


// Reference entry 10bddec0; body size 30 bytes.
#line 1 "ENTRY_10bddec0"

void __thiscall Recovered_Bulk::FUN_10bddec0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10bdee90; body size 40 bytes.
#line 1 "ENTRY_10bdee90"

void FUN_10bdee90(void)

{
  SCLibrary *pSVar1;
  int iVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (*(int *)(*(int *)(pSVar1 + 0x4c) + 0x6c) != 3) {
    iVar2 = (int)(1);
    do {
      thunk_FUN_10bde610(iVar2);
      iVar2 = (int)(iVar2 + 1);
    } while (iVar2 < 4);
  }
  return;
}


// Reference entry 10bdf8a0; body size 40 bytes.
#line 1 "ENTRY_10bdf8a0"

void FUN_10bdf8a0(void)

{
  SCLibrary *pSVar1;
  int iVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (*(int *)(*(int *)(pSVar1 + 0x4c) + 0x6c) != 3) {
    iVar2 = (int)(1);
    do {
      thunk_FUN_10bdeed0(iVar2);
      iVar2 = (int)(iVar2 + 1);
    } while (iVar2 < 4);
  }
  return;
}


// Reference entry 10be0220; body size 40 bytes.
#line 1 "ENTRY_10be0220"

void FUN_10be0220(void)

{
  SCLibrary *pSVar1;
  int iVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (*(int *)(*(int *)(pSVar1 + 0x4c) + 0x6c) != 3) {
    iVar2 = (int)(1);
    do {
      thunk_FUN_10bdf8e0(iVar2);
      iVar2 = (int)(iVar2 + 1);
    } while (iVar2 < 4);
  }
  return;
}


// Reference entry 10be1150; body size 33 bytes.
#line 1 "ENTRY_10be1150"

void __fastcall FUN_10be1150(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10bceec0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = (int)(iVar1);
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10be1180; body size 33 bytes.
#line 1 "ENTRY_10be1180"

void __fastcall FUN_10be1180(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10bcf040(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = (int)(iVar1);
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10be11d0; body size 24 bytes.
#line 1 "ENTRY_10be11d0"

void __fastcall FUN_10be11d0(undefined4 *param_1)

{
  thunk_FUN_10bcda40(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be11f0; body size 24 bytes.
#line 1 "ENTRY_10be11f0"

void __fastcall FUN_10be11f0(undefined4 *param_1)

{
  thunk_FUN_10352990(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be1210; body size 24 bytes.
#line 1 "ENTRY_10be1210"

void __fastcall FUN_10be1210(undefined4 *param_1)

{
  thunk_FUN_10bcdb00(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be1230; body size 24 bytes.
#line 1 "ENTRY_10be1230"

void __fastcall FUN_10be1230(undefined4 *param_1)

{
  thunk_FUN_10352a90(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10be1cc0; body size 59 bytes.
#line 1 "ENTRY_10be1cc0"

void __stdcall FUN_10be1cc0(int param_1,int param_2)

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


// Reference entry 10be1d10; body size 60 bytes.
#line 1 "ENTRY_10be1d10"

void __stdcall FUN_10be1d10(int param_1,int param_2)

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


// Reference entry 10be2040; body size 28 bytes.
#line 1 "ENTRY_10be2040"

void __fastcall FUN_10be2040(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10be5040; body size 27 bytes.
#line 1 "ENTRY_10be5040"

SCStr * __stdcall FUN_10be5040(SCStr *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1109f7f0());
  ((SCStr *)(param_1))->int_allocRep((char *)(iVar1 + 0xe1));
  return (SCStr *)(param_1);
}


// Reference entry 10be6cf0; body size 46 bytes.
#line 1 "ENTRY_10be6cf0"

undefined4 __thiscall Recovered_Bulk::FUN_10be6cf0(int param_2)
{
  char *param_1 = (char *)this;
  bool bVar1;
  
  if (param_2 == 3) {
    bVar1 = (bool)(param_1[1] == '\0');
  }
  else if (param_2 == 1) {
    bVar1 = (bool)(*param_1 == '\0');
  }
  else {
    if (param_2 != 2) {
      return (undefined4)(0);
    }
    bVar1 = (bool)(param_1[2] == '\0');
  }
  if (bVar1) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10be9e80; body size 59 bytes.
#line 1 "ENTRY_10be9e80"

void __thiscall Recovered_Bulk::FUN_10be9e80(undefined4 *param_2)
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
  thunk_FUN_10bce9a0(puVar1,param_2);
  return;
}


// Reference entry 10bed2a0; body size 60 bytes.
#line 1 "ENTRY_10bed2a0"

void FUN_10bed2a0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)((int *)*param_1);
  if (piVar2 == (int *)param_1[1]) {
    param_1[1] = (int)((int)piVar2);
    return;
  }
  do {
    puVar1 = (undefined4 *)((undefined4 *)*piVar2);
    if (puVar1 != (undefined4 *)0x0) {
      thunk_FUN_10f7b950();
      (**(code **)*puVar1)(1);
    }
    piVar2 = (int *)(piVar2 + 1);
  } while (piVar2 != (int *)param_1[1]);
  param_1[1] = (int)(*param_1);
  return;
}


// Reference entry 10bedc30; body size 60 bytes.
#line 1 "ENTRY_10bedc30"

undefined4 * __thiscall Recovered_Bulk::FUN_10bedc30(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10bee240; body size 16 bytes.
#line 1 "ENTRY_10bee240"

void __fastcall FUN_10bee240(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0x8c) + 0xfc))();
  return;
}


// Reference entry 10bee4a0; body size 29 bytes.
#line 1 "ENTRY_10bee4a0"

undefined4 __thiscall Recovered_Bulk::FUN_10bee4a0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x8c) + 0xa4))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10bee5b0; body size 26 bytes.
#line 1 "ENTRY_10bee5b0"

undefined4 __thiscall Recovered_Bulk::FUN_10bee5b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x24))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10bee5d0; body size 35 bytes.
#line 1 "ENTRY_10bee5d0"

SCStr * __stdcall FUN_10bee5d0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1af,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10bee690; body size 20 bytes.
#line 1 "ENTRY_10bee690"

void __fastcall FUN_10bee690(int param_1)

{
  undefined4 uStack00000004;
  
  uStack00000004 = (undefined4)(0);
                    
                    
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))();
  return;
}


// Reference entry 10bee6b0; body size 31 bytes.
#line 1 "ENTRY_10bee6b0"

void __fastcall FUN_10bee6b0(int param_1)

{
  thunk_FUN_104d98f0();
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x14))(*(undefined4 *)(param_1 + 0x84));
  }
  return;
}


// Reference entry 10bee6e0; body size 31 bytes.
#line 1 "ENTRY_10bee6e0"

void __fastcall FUN_10bee6e0(int param_1)

{
  thunk_FUN_104d9cc0();
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x18))(*(undefined4 *)(param_1 + 0x84));
  }
  return;
}


// Reference entry 10bee710; body size 36 bytes.
#line 1 "ENTRY_10bee710"

void __fastcall FUN_10bee710(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0x80);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onQueueCurrentItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10bee740; body size 36 bytes.
#line 1 "ENTRY_10bee740"

void __fastcall FUN_10bee740(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0x80);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onQueueInUseChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10bee770; body size 36 bytes.
#line 1 "ENTRY_10bee770"

void __fastcall FUN_10bee770(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0x80);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onPowerscrollInfo");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10bee8d0; body size 17 bytes.
#line 1 "ENTRY_10bee8d0"

void FUN_10bee8d0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11128910());
  if (iVar1 != 0) {
    thunk_FUN_1112a240();
    return;
  }
  return;
}


// Reference entry 10bee8f0; body size 17 bytes.
#line 1 "ENTRY_10bee8f0"

void FUN_10bee8f0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11128910());
  if (iVar1 != 0) {
    thunk_FUN_1112a990();
    return;
  }
  return;
}


// Reference entry 10beeaf0; body size 41 bytes.
#line 1 "ENTRY_10beeaf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10beeaf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10beeb30; body size 41 bytes.
#line 1 "ENTRY_10beeb30"

undefined4 * __thiscall Recovered_Bulk::FUN_10beeb30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


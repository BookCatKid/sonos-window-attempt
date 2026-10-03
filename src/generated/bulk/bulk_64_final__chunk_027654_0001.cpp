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
extern __declspec(dllimport) int _Cnd_do_broadcast_at_thread_exit(...);
extern int __alldiv(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int ceil(...);
extern int createActionContextForAction(...);
extern int createPropertyBag(...);
extern int error(...);
extern int failed(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int fopen(...);
extern int format(...);
extern __declspec(dllimport) int fseek(...);
extern __declspec(dllimport) int ftell(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int household(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int int_start(...);
extern __declspec(dllimport) int memmove(...);
extern int op_eq(...);
extern int operator_new(...);
extern int player(...);
extern int rampToVolume(...);
extern int setAbsVolume(...);
extern int setRelVolume(...);
extern int stringWithFormat(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011be40(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012cdb0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101a2e90(...);
extern int thunk_FUN_101a9000(...);
extern int thunk_FUN_101a9570(...);
extern int thunk_FUN_101b9270(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101badc0(...);
extern int thunk_FUN_101bf370(...);
extern int thunk_FUN_101d3630(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101d9790(...);
extern int thunk_FUN_101da240(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_102037c0(...);
extern int thunk_FUN_10211630(...);
extern int thunk_FUN_102116d0(...);
extern int thunk_FUN_1021df40(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102253f0(...);
extern int thunk_FUN_1023ab10(...);
extern int thunk_FUN_10242870(...);
extern int thunk_FUN_1025e250(...);
extern int thunk_FUN_1025e860(...);
extern int thunk_FUN_1029df20(...);
extern int thunk_FUN_102bcb30(...);
extern int thunk_FUN_102bcc90(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_102be180(...);
extern int thunk_FUN_102caa30(...);
extern int thunk_FUN_102cb990(...);
extern int thunk_FUN_102cc870(...);
extern int thunk_FUN_102cc960(...);
extern int thunk_FUN_102d5cf0(...);
extern int thunk_FUN_102d5d00(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_1031b860(...);
extern int thunk_FUN_1031be20(...);
extern int thunk_FUN_1031d470(...);
extern int thunk_FUN_1031d730(...);
extern int thunk_FUN_1034d9a0(...);
extern int thunk_FUN_1034e4a0(...);
extern int thunk_FUN_10351370(...);
extern int thunk_FUN_10360be0(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_1037a2b0(...);
extern int thunk_FUN_103ad320(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103be9e0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d6380(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_10405e20(...);
extern int thunk_FUN_10436cd0(...);
extern int thunk_FUN_104379a0(...);
extern int thunk_FUN_1047f1f0(...);
extern int thunk_FUN_104ddfd0(...);
extern int thunk_FUN_104deb40(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059df80(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_105c0bc0(...);
extern int thunk_FUN_105c9e00(...);
extern int thunk_FUN_105d0d50(...);
extern int thunk_FUN_10618bf0(...);
extern int thunk_FUN_106ab8c0(...);
extern int thunk_FUN_106c9eb0(...);
extern int thunk_FUN_106ca170(...);
extern int thunk_FUN_107558b0(...);
extern int thunk_FUN_10799310(...);
extern int thunk_FUN_107998f0(...);
extern int thunk_FUN_107af2b0(...);
extern int thunk_FUN_107bca20(...);
extern int thunk_FUN_107cccd0(...);
extern int thunk_FUN_108754f0(...);
extern int thunk_FUN_10a0bf70(...);
extern int thunk_FUN_10b6feb0(...);
extern int thunk_FUN_10b870f0(...);
extern int thunk_FUN_10b8ff80(...);
extern int thunk_FUN_10b937e0(...);
extern int thunk_FUN_10b93810(...);
extern int thunk_FUN_10b93840(...);
extern int thunk_FUN_10b98e50(...);
extern int thunk_FUN_10bebd60(...);
extern int thunk_FUN_10c68c80(...);
extern int thunk_FUN_10c69f50(...);
extern int thunk_FUN_10c6a3c0(...);
extern int thunk_FUN_10c6a420(...);
extern int thunk_FUN_10c6cda0(...);
extern int thunk_FUN_10c80a30(...);
extern int thunk_FUN_10c80ce0(...);
extern int thunk_FUN_10c83a10(...);
extern int thunk_FUN_10c83c30(...);
extern int thunk_FUN_10c83c80(...);
extern int thunk_FUN_10c95490(...);
extern int thunk_FUN_10c96760(...);
extern int thunk_FUN_10c97560(...);
extern int thunk_FUN_10c97610(...);
extern int thunk_FUN_10c97650(...);
extern int thunk_FUN_10c97670(...);
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10c98c80(...);
extern int thunk_FUN_10c99ba0(...);
extern int thunk_FUN_10c99bc0(...);
extern int thunk_FUN_10c9a420(...);
extern int thunk_FUN_10c9b1e0(...);
extern int thunk_FUN_10c9b560(...);
extern int thunk_FUN_10c9b9b0(...);
extern int thunk_FUN_10cdfe60(...);
extern int thunk_FUN_10ce0ad0(...);
extern int thunk_FUN_10ce0b10(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10da1370(...);
extern int thunk_FUN_10da1450(...);
extern int thunk_FUN_10da1530(...);
extern int thunk_FUN_10da15c0(...);
extern int thunk_FUN_10da1650(...);
extern int thunk_FUN_10da1740(...);
extern int thunk_FUN_10da1830(...);
extern int thunk_FUN_10da1c70(...);
extern int thunk_FUN_10da1cd0(...);
extern int thunk_FUN_10da1e80(...);
extern int thunk_FUN_10e0ac50(...);
extern int thunk_FUN_10e0f790(...);
extern int thunk_FUN_10eaad30(...);
extern int thunk_FUN_10ef4180(...);
extern int thunk_FUN_10ef5eb0(...);
extern int thunk_FUN_10ef5ec0(...);
extern int thunk_FUN_10ef6280(...);
extern int thunk_FUN_10ef64d0(...);
extern int thunk_FUN_10ef9890(...);
extern int thunk_FUN_10ef9f00(...);
extern int thunk_FUN_10efa320(...);
extern int thunk_FUN_10efa920(...);
extern int thunk_FUN_10efb220(...);
extern int thunk_FUN_10efdbb0(...);
extern int thunk_FUN_10eff900(...);
extern int thunk_FUN_10f00f20(...);
extern int thunk_FUN_10f01a30(...);
extern int thunk_FUN_10f01c90(...);
extern int thunk_FUN_10f01e70(...);
extern int thunk_FUN_10f024a0(...);
extern int thunk_FUN_10f03580(...);
extern int thunk_FUN_10f04850(...);
extern int thunk_FUN_10f0b5e0(...);
extern int thunk_FUN_10f0db80(...);
extern int thunk_FUN_10f0e660(...);
extern int thunk_FUN_10f120f0(...);
extern int thunk_FUN_10f141f0(...);
extern int thunk_FUN_10f14890(...);
extern int thunk_FUN_10f16ae0(...);
extern int thunk_FUN_10f18a10(...);
extern int thunk_FUN_10f19370(...);
extern int thunk_FUN_10f19650(...);
extern int thunk_FUN_10f19850(...);
extern int thunk_FUN_10f1b420(...);
extern int thunk_FUN_10f1b480(...);
extern int thunk_FUN_10f1d3b0(...);
extern int thunk_FUN_10f1d640(...);
extern int thunk_FUN_10f21fe0(...);
extern int thunk_FUN_10f220c0(...);
extern int thunk_FUN_10f22380(...);
extern int thunk_FUN_10f23350(...);
extern int thunk_FUN_10f234a0(...);
extern int thunk_FUN_10f23a20(...);
extern int thunk_FUN_10f23ba0(...);
extern int thunk_FUN_10f24730(...);
extern int thunk_FUN_10f25060(...);
extern int thunk_FUN_10f25cd0(...);
extern int thunk_FUN_10f27100(...);
extern int thunk_FUN_10f278a0(...);
extern int thunk_FUN_10f278b0(...);
extern int thunk_FUN_10f27b60(...);
extern int thunk_FUN_10f2f730(...);
extern int thunk_FUN_10f2f9b0(...);
extern int thunk_FUN_10f2ff30(...);
extern int thunk_FUN_10f30320(...);
extern int thunk_FUN_10f31e90(...);
extern int thunk_FUN_10f32100(...);
extern int thunk_FUN_10f32370(...);
extern int thunk_FUN_10f32630(...);
extern int thunk_FUN_10f33200(...);
extern int thunk_FUN_10f33270(...);
extern int thunk_FUN_10f332e0(...);
extern int thunk_FUN_10f33350(...);
extern int thunk_FUN_10f34260(...);
extern int thunk_FUN_10f344f0(...);
extern int thunk_FUN_10f34790(...);
extern int thunk_FUN_10f34c20(...);
extern int thunk_FUN_10f376d0(...);
extern int thunk_FUN_10f377b0(...);
extern int thunk_FUN_10f38b30(...);
extern int thunk_FUN_10f3b950(...);
extern int thunk_FUN_10f3bfd0(...);
extern int thunk_FUN_10f3c4a0(...);
extern int thunk_FUN_10f3da70(...);
extern int thunk_FUN_10f3e260(...);
extern int thunk_FUN_10f40590(...);
extern int thunk_FUN_10f40fe0(...);
extern int thunk_FUN_10f421e0(...);
extern int thunk_FUN_10f42ed0(...);
extern int thunk_FUN_10f437d0(...);
extern int thunk_FUN_10f46590(...);
extern int thunk_FUN_10f48050(...);
extern int thunk_FUN_10f49170(...);
extern int thunk_FUN_10f49380(...);
extern int thunk_FUN_10f4ca40(...);
extern int thunk_FUN_10f4dd60(...);
extern int thunk_FUN_10f4e730(...);
extern int thunk_FUN_10f4e790(...);
extern int thunk_FUN_10f4f0a0(...);
extern int thunk_FUN_10f52210(...);
extern int thunk_FUN_10f63140(...);
extern int thunk_FUN_10f632b0(...);
extern int thunk_FUN_10f64700(...);
extern int thunk_FUN_10f65c90(...);
extern int thunk_FUN_10f6aa00(...);
extern int thunk_FUN_10f6b380(...);
extern int thunk_FUN_10f6b490(...);
extern int thunk_FUN_10f6c490(...);
extern int thunk_FUN_10f6c870(...);
extern int thunk_FUN_10f6d380(...);
extern int thunk_FUN_10f6d500(...);
extern int thunk_FUN_10f6db80(...);
extern int thunk_FUN_10f70a00(...);
extern int thunk_FUN_10f70dc0(...);
extern int thunk_FUN_10f72bf0(...);
extern int thunk_FUN_10f72ff0(...);
extern int thunk_FUN_10f744c0(...);
extern int thunk_FUN_10f74a60(...);
extern int thunk_FUN_10f75720(...);
extern int thunk_FUN_10f760c0(...);
extern int thunk_FUN_10f77460(...);
extern int thunk_FUN_10f7bdc0(...);
extern int thunk_FUN_10f7da10(...);
extern int thunk_FUN_10f7dfd0(...);
extern int thunk_FUN_10f7e0c0(...);
extern int thunk_FUN_10f7e400(...);
extern int thunk_FUN_10f7ecc0(...);
extern int thunk_FUN_10f7f1b0(...);
extern int thunk_FUN_10f80070(...);
extern int thunk_FUN_10f82750(...);
extern int thunk_FUN_10f82b00(...);
extern int thunk_FUN_10f85b00(...);
extern int thunk_FUN_10f86240(...);
extern int thunk_FUN_10f86c10(...);
extern int thunk_FUN_10f890c0(...);
extern int thunk_FUN_10f89dd0(...);
extern int thunk_FUN_10f8a9b0(...);
extern int thunk_FUN_10f8aaf0(...);
extern int thunk_FUN_10f8b8c0(...);
extern int thunk_FUN_10f8ba50(...);
extern int thunk_FUN_10f8c450(...);
extern int thunk_FUN_10f8d0b0(...);
extern int thunk_FUN_10f8d720(...);
extern int thunk_FUN_10f8dce0(...);
extern int thunk_FUN_10f8dd50(...);
extern int thunk_FUN_1101ae90(...);
extern int thunk_FUN_1101aec0(...);
extern int thunk_FUN_1101b030(...);
extern int thunk_FUN_1101cac0(...);
extern int thunk_FUN_1101f9f0(...);
extern int thunk_FUN_11021d40(...);
extern int thunk_FUN_11026950(...);
extern int thunk_FUN_1102eeb0(...);
extern int thunk_FUN_11032190(...);
extern int thunk_FUN_11035c40(...);
extern int thunk_FUN_11035f60(...);
extern int thunk_FUN_110380c0(...);
extern int thunk_FUN_11038930(...);
extern int thunk_FUN_110389b0(...);
extern int thunk_FUN_110390a0(...);
extern int thunk_FUN_11039180(...);
extern int thunk_FUN_11039a00(...);
extern int thunk_FUN_11039b30(...);
extern int thunk_FUN_1103a220(...);
extern int thunk_FUN_11081120(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11096670(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109e280(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110b0300(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110cb840(...);
extern int thunk_FUN_110cbf80(...);
extern int thunk_FUN_110cdb30(...);
extern int thunk_FUN_110cead0(...);
extern int thunk_FUN_110d3140(...);
extern int thunk_FUN_11103f20(...);
extern int thunk_FUN_111046c0(...);
extern int thunk_FUN_111076e0(...);
extern int thunk_FUN_1110ef60(...);
extern int thunk_FUN_1110ef90(...);
extern int thunk_FUN_1110f4a0(...);
extern int thunk_FUN_11111570(...);
extern int thunk_FUN_11111e60(...);
extern int thunk_FUN_11111e70(...);
extern int thunk_FUN_11112300(...);
extern int thunk_FUN_11112310(...);
extern int thunk_FUN_111123b0(...);
extern int thunk_FUN_111123c0(...);
extern int thunk_FUN_111124d0(...);
extern int thunk_FUN_111130d0(...);
extern int thunk_FUN_111130e0(...);
extern int thunk_FUN_111131f0(...);
extern int thunk_FUN_11113300(...);
extern int thunk_FUN_111133f0(...);
extern int thunk_FUN_111134e0(...);
extern int thunk_FUN_111135b0(...);
extern int thunk_FUN_11113cb0(...);
extern int thunk_FUN_11115a00(...);
extern int thunk_FUN_1111a020(...);
extern int thunk_FUN_1111a090(...);
extern int thunk_FUN_1111bcf0(...);
extern int thunk_FUN_1111d190(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_1112c280(...);
extern int thunk_FUN_11138b60(...);
extern int thunk_FUN_1115b460(...);
extern int thunk_FUN_1115c810(...);
extern int thunk_FUN_1115caa0(...);
extern int thunk_FUN_1115f330(...);
extern int thunk_FUN_1115f360(...);
extern int thunk_FUN_1115ff80(...);
extern int thunk_FUN_1115ffd0(...);
extern int thunk_FUN_11160810(...);
extern int thunk_FUN_11161230(...);
extern int thunk_FUN_11161a20(...);
extern int thunk_FUN_11161c10(...);
extern int thunk_FUN_11162620(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3310(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111a5820(...);
extern int thunk_FUN_111a5a30(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111fc270(...);
extern int thunk_FUN_1122cf10(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_1124a160(...);
extern int thunk_FUN_1124a200(...);
extern int thunk_FUN_1124a3d0(...);
extern int thunk_FUN_1124a3e0(...);
extern int thunk_FUN_1124f2e0(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112504b0(...);
extern int thunk_FUN_112505b0(...);
extern int thunk_FUN_1125aed0(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_11261fc0(...);
extern int thunk_FUN_11265090(...);
extern int thunk_FUN_1127a080(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_11456cb0(...);
extern int thunk_FUN_11457240(...);
extern int thunk_FUN_114577f0(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c460(...);
extern int thunk_FUN_1145d260(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_1188d36c;
extern int DAT_11910258;
extern int DAT_1194cfd4;
extern int DAT_1194d14c;
extern int DAT_1194d418;
extern int DAT_11951408;
extern int DAT_11952fd4;
extern int DAT_11952ff8;
extern int DAT_1195301c;
extern int DAT_11953040;
extern int DAT_11953064;
extern int DAT_11953078;
extern int DAT_1211a2b0;
extern int DAT_1211a490;
extern int DAT_1211a4e8;
extern int DAT_12126b84;
extern int DAT_121a7100;
extern int DAT_121a7104;
extern int DAT_121a7108;
extern int DAT_121a7110;
extern int DAT_121a7114;
extern int DAT_121a7118;
extern int DAT_121a7140;
extern int DAT_121a7144;
extern int DAT_121a7148;
extern int DAT_121a714c;
extern int DAT_121a7154;
extern int DAT_121a7158;
extern int DAT_121a715c;
extern int DAT_121a7160;
extern int DAT_121a7164;
extern int DAT_121a7168;
extern int DAT_121a716c;
extern int DAT_121a7170;
extern int DAT_121a7174;
extern int DAT_121a7234;
extern int g_lSCObjCount;
extern int ghidra_vftable_ExtractArchiveOp;
extern int ghidra_vftable_RAlarmProgramDataBrowseCB;
extern int ghidra_vftable_RBondingOp;
extern int ghidra_vftable_RCPBrowseOperationCB;
extern int ghidra_vftable_RConnectedPartnersGetAIOOp;
extern int ghidra_vftable_RConnectedPartnersGetRequest;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDiagnosticsSubmitFileRequest;
extern int ghidra_vftable_RGetEthernetStatusAIOOp;
extern int ghidra_vftable_RGetEthernetStatusRequest;
extern int ghidra_vftable_RGetLocalSupportDocumentRequest;
extern int ghidra_vftable_RGetNetworkConnectivityTestResultAIOOp;
extern int ghidra_vftable_RGetNetworkConnectivityTestResultRequest;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPutNoRedirectAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RListOfLinkedServicesWithOAuthTokensRequest;
extern int ghidra_vftable_RMuseDeviceSetSettingsPostRequest;
extern int ghidra_vftable_RMuseGetPlayerInfoAIOOp;
extern int ghidra_vftable_RMuseGetUserSettingsAIOOp;
extern int ghidra_vftable_RMuseGetUserSettingsRequest;
extern int ghidra_vftable_RMusePlayerInfoGetRequest;
extern int ghidra_vftable_RMuseSetSettingsAIOOp;
extern int ghidra_vftable_RNetstartOpCallback;
extern int ghidra_vftable_RServiceAuthHeaderBuilderFactory;
extern int ghidra_vftable_RStartNetworkConnectivityTestAIOOp;
extern int ghidra_vftable_RStartNetworkConnectivityTestRequest;
extern int ghidra_vftable_RSubmitDiagnosticsAIOOp;
extern int ghidra_vftable_RTempDisableNetworkAIOOp;
extern int ghidra_vftable_RTempDisableNetworkRequest;
extern int ghidra_vftable_RUpnpACCreateAlarmAIOOp;
extern int ghidra_vftable_RUpnpACUpdateAlarmAIOOp;
extern int ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp;
extern int ghidra_vftable_SCAlarm;
extern int ghidra_vftable_SCAlarmSaveAction;
extern int ghidra_vftable_SCArea;
extern int ghidra_vftable_SCBitmapLoadAsyncIOOperation;
extern int ghidra_vftable_SCBitmapResizer;
extern int ghidra_vftable_SCCompoundAction;
extern int ghidra_vftable_SCCompressedImageLoadAsyncIOOperation;
extern int ghidra_vftable_SCControllerEventSink;
extern int ghidra_vftable_SCDeviceVolume;
extern int ghidra_vftable_SCDiscoveryHistorySlice;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCIActionDelegate;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCImprovedBitmapEnlarger;
extern int ghidra_vftable_SCLanScanner;
extern int ghidra_vftable_SCLegacyBitmapLoadAsyncIOOperation;
extern int ghidra_vftable_SCLegacyCompressedImageLoadAsyncIOOperation;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCNowPlaying;
extern int ghidra_vftable_SCNowPlayingEventSink;
extern int ghidra_vftable_SCOpAlarmSave;
extern int ghidra_vftable_SCOpBonding;
extern int ghidra_vftable_SCOpCB;
extern int ghidra_vftable_SCOpConnectedPartnersGet;
extern int ghidra_vftable_SCOpControllerOnlySubmitDirectDiagnostics;
extern int ghidra_vftable_SCOpDeviceVoiceSettingsCompoundSet;
extern int ghidra_vftable_SCOpDeviceVoiceSettingsSet;
extern int ghidra_vftable_SCOpGetEthernetStatus;
extern int ghidra_vftable_SCOpHTControlGetIRRepeaterState;
extern int ghidra_vftable_SCOpHTControlSetIRRepeaterState;
extern int ghidra_vftable_SCOpHTControlSetLEDFeedbackState;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpJoinHousehold;
extern int ghidra_vftable_SCOpLegacyApConnectJoinNetwork;
extern int ghidra_vftable_SCOpMuseSetSettings;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpSendSetupMessage;
extern int ghidra_vftable_SCOpSubmitDirectDiagnostics;
extern int ghidra_vftable_SCOpUnbonding;
extern int ghidra_vftable_SCPlayQueue;
extern int ghidra_vftable_SCPlayQueueDataSource;
extern int ghidra_vftable_SCRadioTimeSetRadioLocation;
extern int ghidra_vftable_SCSettingsReplicator;
extern int ghidra_vftable_SCSettingsReplicatorApp;
extern int ghidra_vftable_SCSettingsReplicatorBusiness;
extern int ghidra_vftable_SCSettingsReplicatorCustom;
extern int ghidra_vftable_SCSettingsReplicatorEqualizer;
extern int ghidra_vftable_SCSettingsReplicatorHousehold;
extern int ghidra_vftable_SCSettingsReplicatorMusicLibrary;
extern int ghidra_vftable_SCSwfObjACInternalListener;
extern int ghidra_vftable_SCSwfObjDDInternalListener;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCSwfObjJHHListener;
extern int ghidra_vftable_SCSwfObjQListener;
extern int ghidra_vftable_SCSwfObjSPInternalListener;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SwfThreadOp;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int in_stack_00000014;
extern int in_stack_00000018;
extern undefined1 LAB_10ef3778[];
extern undefined1 LAB_10ef45b6[];
extern undefined1 LAB_10ef45bc[];
extern undefined1 LAB_10f03b13[];
extern undefined1 LAB_10f03ccd[];
extern undefined1 LAB_10f050c6[];
extern undefined1 LAB_10f05428[];
extern undefined1 LAB_10f0557f[];
extern undefined1 LAB_10f056a0[];
extern undefined1 LAB_10f057af[];
extern undefined1 LAB_10f05a45[];
extern undefined1 LAB_10f0608b[];
extern undefined1 LAB_10f066f1[];
extern undefined1 LAB_10f12d52[];
extern undefined1 LAB_10f18b95[];
extern undefined1 LAB_10f18ba2[];
extern undefined1 LAB_10f227a6[];
extern undefined1 LAB_10f27085[];
extern undefined1 LAB_10f27092[];
extern undefined1 LAB_10f2805e[];
extern undefined1 LAB_10f3f6ab[];
extern undefined1 LAB_10f407a6[];
extern undefined1 LAB_10f4908c[];
extern undefined1 LAB_10f520b8[];
extern undefined1 LAB_10f53816[];
extern undefined1 LAB_10f539cb[];
extern undefined1 LAB_10f58db8[];
extern undefined1 LAB_10f58f23[];
extern undefined1 LAB_10f5b171[];
extern undefined1 LAB_10f5b591[];
extern undefined1 LAB_10f5d4c4[];
extern undefined1 LAB_10f5d8f4[];
extern undefined1 LAB_10f75fff[];
extern undefined1 LAB_10f801e2[];
extern undefined1 LAB_10f861e9[];
extern undefined1 LAB_10f89f16[];
extern undefined1 LAB_10f89f1c[];
extern undefined1 LAB_1176127d[];
extern undefined1 LAB_117612db[];
extern undefined1 LAB_1176152d[];
extern undefined1 LAB_1176169d[];
extern undefined1 LAB_117616dd[];
extern undefined1 LAB_117622e3[];
extern undefined1 LAB_1176231d[];
extern undefined1 LAB_117624dd[];
extern undefined1 LAB_1176251d[];
extern undefined1 LAB_11762590[];
extern undefined1 LAB_117625cd[];
extern undefined1 LAB_1176260d[];
extern undefined1 LAB_117635ad[];
extern undefined1 LAB_117635ed[];
extern undefined1 LAB_1176366d[];
extern undefined1 LAB_117636fd[];
extern undefined1 LAB_1176379d[];
extern undefined1 LAB_117637dd[];
extern undefined1 LAB_11763cdd[];
extern undefined1 LAB_11763d25[];
extern undefined1 LAB_11763ea5[];
extern undefined1 LAB_11764515[];
extern undefined1 LAB_117645ae[];
extern undefined1 LAB_117645fe[];
extern undefined1 LAB_11764645[];
extern undefined1 LAB_1176468e[];
extern undefined1 LAB_117646d5[];
extern undefined1 LAB_11764805[];
extern undefined1 LAB_11764845[];
extern undefined1 LAB_11764885[];
extern undefined1 LAB_117648bd[];
extern undefined1 LAB_11764944[];
extern undefined1 LAB_11764995[];
extern undefined1 LAB_11765a80[];
extern undefined1 LAB_11765abd[];
extern undefined1 LAB_1176678d[];
extern undefined1 LAB_117667cd[];
extern undefined1 LAB_1176680d[];
extern undefined1 LAB_1176686b[];
extern undefined1 LAB_117668cb[];
extern undefined1 LAB_1176692b[];
extern undefined1 LAB_11766c8d[];
extern undefined1 LAB_11766d6d[];
extern undefined1 LAB_11766e30[];
extern undefined1 LAB_11766fb0[];
extern undefined1 LAB_1176734d[];
extern undefined1 LAB_1176778d[];
extern undefined1 LAB_117677cd[];
extern undefined1 LAB_1176780d[];
extern undefined1 LAB_1176784d[];
extern undefined1 LAB_1176788d[];
extern undefined1 LAB_117678cd[];
extern undefined1 LAB_117679e7[];
extern undefined1 LAB_11767b37[];
extern undefined1 LAB_11767b87[];
extern undefined1 LAB_11767bd7[];
extern undefined1 LAB_11767c87[];
extern undefined1 LAB_11767cd7[];
extern undefined1 LAB_11767da7[];
extern undefined1 LAB_11767efd[];
extern undefined1 LAB_11767f90[];
extern undefined1 LAB_1176809d[];
extern undefined1 LAB_11768140[];
extern undefined1 LAB_11768210[];
extern undefined1 LAB_117684ed[];
extern undefined1 LAB_1176852d[];
extern undefined1 LAB_117686ed[];
extern undefined1 LAB_1176872d[];
extern undefined1 LAB_11768b0d[];
extern undefined1 LAB_11768b4d[];
extern undefined1 LAB_11769ea0[];
extern undefined1 LAB_11769ed0[];
extern undefined1 LAB_1176a14d[];
extern undefined1 LAB_1176a1dd[];
extern undefined1 LAB_1176a32d[];
extern undefined1 LAB_1176a3ad[];
extern undefined1 LAB_1176a3ed[];
extern undefined1 LAB_1176a56d[];
extern undefined1 LAB_1176a6c0[];
extern undefined1 LAB_1176a72d[];
extern undefined1 LAB_1176a80d[];
extern undefined1 LAB_1176a86b[];
extern undefined1 LAB_1176a8ed[];
extern undefined1 LAB_1176a92d[];
extern undefined1 LAB_1176abc7[];
extern undefined1 LAB_1176ac67[];
extern undefined1 LAB_1176adfd[];
extern undefined1 LAB_1176ae30[];
extern undefined1 LAB_1176ae60[];
extern undefined1 LAB_1176b175[];
extern undefined1 LAB_1176b71d[];
extern undefined1 LAB_1176b88d[];
extern undefined1 LAB_1176b8c0[];
extern undefined1 LAB_1176b904[];
extern undefined1 LAB_1176b93d[];
extern undefined1 LAB_1176c064[];
extern undefined1 LAB_1176c09d[];
extern undefined1 LAB_1176c0dd[];
extern undefined1 LAB_1176c11d[];
extern undefined1 LAB_1176c15d[];
extern undefined1 LAB_1176c1bb[];
extern undefined1 LAB_1176c21b[];
extern undefined1 LAB_1176c27b[];
extern undefined1 LAB_1176c2db[];
extern undefined1 LAB_1176c3c6[];
extern undefined1 LAB_1176c42e[];
extern undefined1 LAB_1176c4c1[];
extern undefined1 LAB_1176c582[];
extern undefined1 LAB_1176c631[];
extern undefined1 LAB_1176c70e[];
extern undefined1 LAB_1176c7dd[];
extern undefined1 LAB_1176c846[];
extern undefined1 LAB_1176c8b8[];
extern undefined1 LAB_1176c930[];
extern undefined1 LAB_1176cc50[];
extern undefined1 LAB_1176cc80[];
extern undefined1 LAB_1176ccb0[];
extern undefined1 LAB_1176cce0[];
extern undefined1 LAB_1176cd10[];
extern undefined1 LAB_1176cd40[];
extern undefined1 LAB_1176cd70[];
extern undefined1 LAB_1176cda0[];
extern undefined1 LAB_1176cdd0[];
extern undefined1 LAB_1176ce00[];
extern undefined1 LAB_1176ce30[];
extern undefined1 LAB_1176ce60[];
extern undefined1 LAB_1176ce90[];
extern undefined1 LAB_1176cec0[];
extern undefined1 LAB_1176cef0[];
extern undefined1 LAB_1176cf20[];
extern undefined1 LAB_1176cf50[];
extern undefined1 LAB_1176cf80[];
extern undefined1 LAB_1176d215[];
extern undefined1 LAB_1176d24d[];
extern undefined1 LAB_1176d28d[];
extern undefined1 LAB_1176d60d[];
extern undefined1 LAB_1176d64d[];
extern undefined1 LAB_1176d68d[];
extern undefined1 LAB_1176d6cd[];
extern undefined1 LAB_1176d70d[];
extern undefined1 LAB_1176d74d[];
extern undefined1 LAB_1176d78d[];
extern undefined1 LAB_1176d7cd[];
extern undefined1 LAB_1176dd10[];
extern undefined1 LAB_1176dd40[];
extern undefined1 LAB_1176dd7d[];
extern undefined1 LAB_1176ddf0[];
extern undefined1 LAB_1176df10[];
extern undefined1 LAB_1176df70[];
extern undefined1 LAB_1176dfd0[];
extern undefined1 LAB_1176e000[];
extern undefined1 LAB_1176e03d[];
extern undefined1 LAB_1176e0b0[];
extern undefined1 LAB_1176e0e0[];
extern undefined1 LAB_1176e745[];
extern undefined1 LAB_1176ee25[];
extern undefined1 LAB_1176ee5d[];
extern undefined1 LAB_1176ee9d[];
extern undefined1 LAB_1176f1d0[];
extern undefined1 LAB_1176f200[];
extern undefined1 LAB_1176f230[];
extern undefined1 LAB_1176f260[];
extern undefined1 LAB_1176f4dd[];
extern undefined1 LAB_1176f51d[];
extern undefined1 LAB_1176f55d[];
extern undefined1 LAB_1176f59d[];
extern undefined1 LAB_1176f6e5[];
extern undefined1 LAB_1176f72d[];
extern undefined1 LAB_1176f76d[];
extern undefined1 LAB_1176fae0[];
extern undefined1 LAB_1176fb1d[];
extern undefined1 LAB_1176fb50[];
extern undefined1 LAB_1176fb80[];
extern undefined1 LAB_1176fbfd[];
extern undefined1 LAB_1176ff1d[];
extern undefined1 LAB_1177001d[];
extern undefined1 LAB_11770075[];
extern undefined1 LAB_117700c5[];
extern undefined1 LAB_117701b0[];
extern undefined1 LAB_117701e0[];
extern undefined1 LAB_11770210[];
extern undefined1 LAB_11770240[];
extern undefined1 LAB_11770270[];
extern undefined1 LAB_11770360[];
extern undefined1 LAB_117705e7[];
extern undefined1 LAB_11770634[];
extern undefined1 LAB_11770674[];
extern undefined1 LAB_117706b4[];
extern undefined1 LAB_117706f4[];
extern undefined1 LAB_11770860[];
extern undefined1 LAB_117708ac[];
extern undefined1 LAB_117708fc[];
extern undefined1 LAB_1177094c[];
extern undefined1 LAB_1177099c[];
extern undefined1 LAB_117709dd[];
extern undefined1 LAB_11770a79[];
extern undefined1 LAB_11770b55[];
extern undefined1 LAB_11770b95[];
extern undefined1 LAB_11770bd5[];
extern undefined1 LAB_11770e10[];
extern undefined1 LAB_11770e40[];
extern undefined1 LAB_11770e70[];
extern undefined1 LAB_11770ea0[];
extern undefined1 LAB_11770ed0[];
extern undefined1 LAB_11770f00[];
extern undefined1 LAB_11770f60[];
extern undefined1 LAB_11770f90[];
extern undefined1 LAB_11771284[];
extern undefined1 LAB_117712dd[];
extern undefined1 LAB_11771325[];
extern undefined1 LAB_117713a2[];
extern undefined1 LAB_117713f7[];
extern undefined1 LAB_1177145d[];
extern undefined1 LAB_117714ac[];
extern undefined1 LAB_1177151c[];
extern undefined1 LAB_1177165d[];
extern undefined1 LAB_117716bd[];
extern undefined1 LAB_117717a0[];
extern undefined1 LAB_117717ed[];
extern undefined1 LAB_1177182d[];
extern undefined1 LAB_1177187c[];
extern undefined1 LAB_11771945[];
extern undefined1 LAB_11771a10[];
extern undefined1 LAB_11771a40[];
extern undefined1 LAB_11771cbd[];
extern undefined1 LAB_11771cfd[];
extern undefined1 LAB_11771e0d[];
extern undefined1 LAB_11771e4d[];
extern undefined1 LAB_11771ecd[];
extern undefined1 LAB_11771f15[];
extern undefined1 LAB_11771f85[];
extern undefined1 LAB_11771ffd[];
extern undefined1 LAB_11772030[];
extern undefined1 LAB_11772120[];
extern undefined1 LAB_11772310[];
extern undefined1 LAB_11772340[];
extern undefined1 LAB_117723a0[];
extern undefined1 LAB_117723d0[];
extern undefined1 LAB_11772400[];
extern undefined1 LAB_11772460[];
extern undefined1 LAB_117728ac[];
extern undefined1 LAB_117728fc[];
extern undefined1 LAB_11772a10[];
extern undefined1 LAB_11772a4d[];
extern undefined1 LAB_11772a8d[];
extern undefined1 LAB_11772e50[];
extern undefined1 LAB_11772eb0[];
extern undefined1 LAB_11772ee0[];
extern undefined1 LAB_1177332d[];
extern undefined1 LAB_11773625[];
extern undefined1 LAB_1177375d[];
extern undefined1 LAB_117737ce[];
extern undefined1 LAB_11773810[];
extern undefined1 LAB_11773840[];
extern undefined1 LAB_11773870[];
extern undefined1 LAB_117738e0[];
extern undefined1 LAB_11773b6e[];
extern undefined1 LAB_11773c5e[];
extern undefined1 LAB_1177411d[];
extern undefined1 LAB_1177416d[];
extern undefined1 LAB_117741ad[];
extern undefined1 LAB_117741ed[];
extern undefined1 LAB_1177422d[];
extern undefined1 LAB_1177426d[];
extern undefined1 LAB_117742cb[];
extern undefined1 LAB_1177432b[];
extern undefined1 LAB_1177438b[];
extern undefined1 LAB_1177444b[];
extern undefined1 LAB_117744ab[];
extern undefined1 LAB_1177450b[];
extern undefined1 LAB_117745ed[];
extern undefined1 LAB_11774740[];
extern undefined1 LAB_11774770[];
extern undefined1 LAB_117747a0[];
extern undefined1 LAB_11774800[];
extern undefined1 LAB_11774830[];
extern undefined1 LAB_11774860[];
extern undefined1 LAB_11774890[];
extern undefined1 LAB_11774bd5[];
extern undefined1 LAB_11774f03[];
extern undefined1 LAB_11774fa5[];
extern undefined1 LAB_11775015[];
extern undefined1 LAB_1177507d[];
extern undefined1 LAB_1177514d[];
extern undefined1 LAB_11775313[];
extern undefined1 LAB_11775363[];
extern undefined1 LAB_11775683[];
extern undefined1 LAB_117756ed[];
extern undefined1 LAB_117757b5[];
extern undefined1 LAB_117758b5[];
extern undefined1 LAB_117768bd[];
extern undefined1 LAB_117768fd[];
extern undefined1 LAB_1177693d[];
extern undefined1 LAB_1177697d[];
extern undefined1 LAB_117769bd[];
extern undefined1 LAB_117769fd[];
extern undefined1 LAB_11776a3d[];
extern undefined1 LAB_11776a7d[];
extern undefined1 LAB_11776b25[];
extern undefined1 LAB_11776dc5[];
extern undefined1 LAB_1177747d[];
extern undefined1 LAB_1177751d[];
extern undefined1 LAB_11777710[];
extern undefined1 LAB_11777740[];
extern undefined1 LAB_11777770[];
extern undefined1 LAB_117777a0[];
extern undefined1 LAB_117777d0[];
extern undefined1 LAB_11777840[];
extern undefined1 LAB_11777cdd[];
extern undefined1 LAB_11777d5d[];
extern undefined1 LAB_11777d9d[];
extern undefined1 LAB_117782b0[];
extern undefined1 LAB_117783f5[];
extern undefined1 LAB_1177862d[];
extern undefined1 LAB_11778805[];
extern undefined1 LAB_11778845[];
extern undefined1 LAB_11778900[];
extern undefined1 LAB_11778930[];
extern undefined1 LAB_1177896d[];
extern undefined1 LAB_117789a0[];
extern undefined1 LAB_11778ac0[];
extern undefined1 LAB_11778af0[];
extern undefined1 LAB_11778b5d[];
extern undefined1 LAB_11778b90[];
extern undefined1 LAB_11778e55[];
extern undefined1 LAB_11778eed[];
extern undefined1 LAB_1177904d[];
extern undefined1 LAB_117790ac[];
extern undefined1 LAB_117791e5[];
extern undefined1 LAB_11779225[];
extern undefined1 LAB_11779265[];
extern undefined1 LAB_117792a5[];
extern undefined1 LAB_117792dd[];
extern undefined1 LAB_11779535[];
extern undefined1 LAB_117796fd[];
extern undefined1 LAB_1177975b[];
extern undefined1 LAB_1177979d[];
extern undefined1 LAB_117797dd[];
extern undefined1 LAB_117798d7[];
extern undefined1 LAB_1177997e[];
extern undefined1 LAB_11779b50[];
extern undefined1 LAB_11779bb0[];
extern undefined1 LAB_11779be0[];
extern undefined1 LAB_11779c10[];
extern undefined1 LAB_11779c40[];
extern undefined1 LAB_11779c70[];
extern undefined1 LAB_11779cd0[];
extern undefined1 LAB_11779d40[];
extern undefined1 LAB_11779d70[];
extern undefined1 LAB_1177a0e5[];
extern undefined1 LAB_1177a110[];
extern undefined1 LAB_1177a295[];
extern undefined1 LAB_1177a5ad[];
extern undefined1 LAB_1177a5ed[];
extern undefined1 LAB_1177a637[];
extern undefined1 LAB_1177a6c0[];
extern undefined1 LAB_1177a6f0[];
extern undefined1 LAB_1177a9a0[];
extern undefined1 LAB_1177a9d0[];
extern undefined1 LAB_1177aa00[];
extern undefined1 LAB_1177aa30[];
extern undefined1 LAB_1177aa60[];
extern undefined1 LAB_1177aa90[];
extern undefined1 LAB_1177aac0[];
extern undefined1 LAB_1177aaf0[];
extern undefined1 LAB_1177ab20[];
extern undefined1 LAB_1177ab50[];
extern undefined1 LAB_1177ab80[];
extern undefined1 LAB_1177abb0[];
extern undefined1 LAB_1177abed[];
extern undefined1 LAB_1177ac2d[];
extern undefined1 LAB_1177ac83[];
extern undefined1 LAB_1177ad74[];
extern undefined1 LAB_1177adb0[];
extern undefined1 LAB_1177ade0[];
extern undefined1 LAB_1177ae1d[];
extern undefined1 LAB_1177ae5d[];
extern undefined1 LAB_1177ae9d[];
extern undefined1 LAB_1177aefb[];
extern undefined1 LAB_1177afd0[];
extern undefined1 LAB_1177b000[];
extern undefined1 LAB_1177b030[];
extern undefined1 LAB_1177b182[];
extern undefined1 LAB_1177b247[];
extern undefined1 LAB_1177b314[];
extern undefined1 LAB_1177b3b4[];
extern undefined1 LAB_1177b484[];
extern undefined1 LAB_1177b53d[];
extern undefined1 LAB_1177b57d[];
extern undefined1 LAB_1177b840[];
extern undefined1 LAB_1177b870[];
extern undefined1 LAB_1177b930[];
extern undefined1 LAB_1177b960[];
extern undefined1 LAB_1177b99d[];
extern undefined1 LAB_1177ba35[];
extern undefined1 LAB_1177ba70[];
extern undefined1 LAB_1177baad[];
extern undefined1 LAB_1177bae0[];
extern undefined1 LAB_1177bb1d[];
extern undefined1 LAB_1177bb50[];
extern undefined1 LAB_1177bb8d[];
extern undefined1 LAB_1177bbcd[];
extern undefined1 LAB_1177bc2b[];
extern undefined1 LAB_1177bc8b[];
extern undefined1 LAB_1177bfd3[];
extern undefined1 LAB_1177c220[];
extern undefined1 LAB_1177c2b0[];
extern undefined1 LAB_1177c2e0[];
extern undefined1 LAB_1177c370[];
extern undefined1 LAB_1177c470[];
extern undefined1 LAB_1177c4a0[];
extern undefined1 LAB_1177c4d0[];
extern undefined1 LAB_1177c54d[];
extern undefined1 LAB_1177c58d[];
extern undefined1 LAB_1177c79d[];
extern undefined1 LAB_1177c7dd[];
extern undefined1 LAB_1177c824[];
extern undefined1 LAB_1177c864[];
extern undefined1 LAB_1177c8dd[];
extern undefined1 LAB_1177c91d[];
extern undefined1 LAB_1177cb14[];
extern undefined1 LAB_1177ccb0[];
extern undefined1 LAB_1177cce0[];
extern undefined1 LAB_1177cd10[];
extern undefined1 LAB_1177ce8d[];
extern undefined1 LAB_1177cfc0[];
extern undefined1 LAB_1177cff0[];
extern undefined1 LAB_1177d020[];
extern undefined1 LAB_1177d080[];
extern undefined1 LAB_1177d120[];
extern undefined1 LAB_1177d390[];
extern undefined1 LAB_1177d3c0[];
extern undefined1 LAB_1177d46d[];
extern undefined1 LAB_1177d6ad[];
extern undefined1 LAB_1177d6e0[];
extern undefined1 LAB_1177d71d[];
extern undefined1 LAB_1177dadd[];
extern undefined1 LAB_1177db1d[];
extern undefined1 LAB_1177db5d[];
extern undefined1 LAB_1177dbbb[];
extern undefined1 LAB_1177dc1b[];
extern undefined1 LAB_1177dc7b[];
extern undefined1 LAB_1177dd05[];
extern undefined1 LAB_1177dd74[];
extern undefined1 LAB_1177ddd6[];
extern undefined1 LAB_1177de63[];
extern undefined1 LAB_1177deda[];
extern undefined1 LAB_1177e04d[];
extern undefined1 LAB_1177e080[];
extern undefined1 LAB_1177e0b0[];
extern undefined1 LAB_1177e0e0[];
extern undefined1 LAB_1177e110[];
extern undefined1 LAB_1177e140[];
extern undefined1 LAB_1177e170[];
extern undefined1 LAB_1177e1a0[];
extern undefined1 LAB_1177e1d0[];
extern undefined1 LAB_1177e200[];
extern undefined1 LAB_1177e45d[];
extern undefined1 LAB_1177e71d[];
extern undefined1 LAB_1177e75d[];
extern undefined1 LAB_1177e79d[];
extern undefined1 LAB_1177e7dd[];
extern undefined1 LAB_1177e81d[];
extern undefined1 LAB_1177e85d[];
extern int *stack0x00000000;
extern int *stack0x00000004;
extern int *stack0x00000008;
extern int *stack0xffffffc4;
extern int *stack0xffffffc7;
extern int *stack0xffffffcc;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createActionContextForAction(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int op_eq(A...); template<class... A> int stringWithFormat(A...); };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *BLAHBLAHBLAH;
typedef void *CHN;
typedef void *LOCK;
typedef void *P;
typedef void *Q;
typedef void *R_NS_STATE_IDLE;
typedef void *SONOSMULTIPARTBOUNDARY;
typedef void *UNLOCK;
typedef void *UTF;
typedef void *WARNING;
typedef void *ZP;
struct Adding { char _pad; Adding(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AlarmClock { char _pad; AlarmClock(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AssignedID { char _pad; AssignedID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Content { char _pad; Content(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CreateAlarm { char _pad; CreateAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Deleting { char _pad; Deleting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DiagnosticID { char _pad; DiagnosticID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Disposition { char _pad; Disposition(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Duration { char _pad; Duration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Enabled { char _pad; Enabled(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ExtractArchiveOp { char _pad; ExtractArchiveOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Firing { char _pad; Firing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Getting { char _pad; Getting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct IncludeControllers { char _pad; IncludeControllers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct IncludeLinkedZones { char _pad; IncludeLinkedZones(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct InstanceID { char _pad; InstanceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Item { char _pad; Item(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Message { char _pad; Message(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct MuseDevice { char _pad; MuseDevice(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Op { char _pad; Op(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ops { char _pad; Ops(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Pending { char _pad; Pending(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayMode { char _pad; PlayMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct PlayQueue { char _pad; PlayQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ProgramMetaData { char _pad; ProgramMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ProgramURI { char _pad; ProgramURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RBondingOp { char _pad; RBondingOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RGetEthernetStatusRequest { char _pad; RGetEthernetStatusRequest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RGetNetworkConnectivityTestResultRequest { char _pad; RGetNetworkConnectivityTestResultRequest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RStartNetworkConnectivityTestRequest { char _pad; RStartNetworkConnectivityTestRequest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct R_ShowNSSServers { char _pad; R_ShowNSSServers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct R_ShowRhapUPnP { char _pad; R_ShowRhapUPnP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Received { char _pad; Received(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recurrence { char _pad; Recurrence(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Requesting { char _pad; Requesting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Revert { char _pad; Revert(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RoomCalibrationAvailable { char _pad; RoomCalibrationAvailable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RoomCalibrationEnabled { char _pad; RoomCalibrationEnabled(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RoomUUID { char _pad; RoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCDeviceVolume { char _pad; SCDeviceVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCFirmwareDownloadManager { char _pad; SCFirmwareDownloadManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIArea { char _pad; SCIArea(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAudioInputResource { char _pad; SCIAudioInputResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIDeviceMusicEqualization { char _pad; SCIDeviceMusicEqualization(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIDeviceVolume { char _pad; SCIDeviceVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIGroupVolume { char _pad; SCIGroupVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingRatings { char _pad; SCINowPlayingRatings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingSleepTimer { char _pad; SCINowPlayingSleepTimer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingSource { char _pad; SCINowPlayingSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingTransport { char _pad; SCINowPlayingTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOp { char _pad; SCIOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIPlayQueue { char _pad; SCIPlayQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIPlayQueueMgr { char _pad; SCIPlayQueueMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSettingsReplicatorBusiness { char _pad; SCSettingsReplicatorBusiness(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSettingsReplicatorCustom { char _pad; SCSettingsReplicatorCustom(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSettingsReplicatorHousehold { char _pad; SCSettingsReplicatorHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSettingsReplicatorRest { char _pad; SCSettingsReplicatorRest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSettingsReplicatorSet { char _pad; SCSettingsReplicatorSet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSettingsReplicatorUPnPString { char _pad; SCSettingsReplicatorUPnPString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSwfObjACListener { char _pad; SCSwfObjACListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSwfObjSPListener { char _pad; SCSwfObjSPListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Setting { char _pad; Setting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct StartLocalTime { char _pad; StartLocalTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SubmitDiagnostics { char _pad; SubmitDiagnostics(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subscribe { char _pad; Subscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Succeeded { char _pad; Succeeded(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SwfObjAC { char _pad; SwfObjAC(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SwfObjSP { char _pad; SwfObjSP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Type { char _pad; Type(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unbonding { char _pad; Unbonding(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unsubscribe { char _pad; Unsubscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Update { char _pad; Update(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UpdateAlarm { char _pad; UpdateAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UpdateID { char _pad; UpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Volume { char _pad; Volume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ZoneGroupTopology { char _pad; ZoneGroupTopology(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_10ef1200(int param_2); undefined4 * __thiscall FUN_10ef1290(int param_2); void __thiscall FUN_10ef1f90(int *param_2,undefined4 param_3); void __thiscall FUN_10ef2080(int param_2,int *param_3); void __thiscall FUN_10ef2a30(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10ef2c50(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); undefined4 * __thiscall FUN_10ef4470(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10ef4620(void *param_2,undefined4 *param_3); void __thiscall FUN_10ef5800(int param_2,int param_3,int param_4); void __thiscall FUN_10ef5870(int param_2,int param_3,int param_4); void __thiscall FUN_10ef8e40(undefined4 param_2); int * __thiscall FUN_10ef9890(int *param_2,int *param_3); int * __thiscall FUN_10ef9930(int *param_2,int *param_3); int * __thiscall FUN_10ef9a50(int *param_2,int *param_3); int __thiscall FUN_10ef9f00(int *param_2); int __thiscall FUN_10ef9ff0(int *param_2); int * __thiscall FUN_10efa100(int *param_2); uint __thiscall FUN_10efa920(int param_2); void __thiscall FUN_10efabf0(int *param_2,int *param_3); void __thiscall FUN_10efac50(int *param_2,int *param_3); undefined4 __thiscall FUN_10efb0f0(int param_2); undefined1 * __thiscall FUN_10f016f0(undefined4 *param_2,undefined4 param_3); int * __thiscall FUN_10f01920(int *param_2,int *param_3); void __thiscall FUN_10f01fe0(int *param_2,int *param_3); undefined4 * __thiscall FUN_10f02190(undefined4 *param_2); undefined4 * __thiscall FUN_10f03110(byte param_2); void __thiscall FUN_10f03a30(undefined4 *param_2); void __thiscall FUN_10f03c10(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_10f04710(undefined4 param_2); undefined4 * __thiscall FUN_10f06560(undefined4 *param_2); undefined4 * __thiscall FUN_10f0d4e0(int param_2); undefined4 * __thiscall FUN_10f0d5a0(int param_2); undefined4 * __thiscall FUN_10f0d630(int param_2); undefined4 * __thiscall FUN_10f0d720(int param_2); undefined4 * __thiscall FUN_10f0d880(int param_2); undefined4 * __thiscall FUN_10f0d9e0(int param_2); undefined4 * __thiscall FUN_10f0ed10(undefined4 param_2); void __thiscall FUN_10f108f0(int *param_2,undefined4 param_3); void __thiscall FUN_10f109d0(int *param_2,undefined4 param_3); void __thiscall FUN_10f10ab0(int *param_2,undefined4 param_3); void __thiscall FUN_10f11430(int param_2,int *param_3); undefined4 __thiscall FUN_10f12d30(int param_2); void __thiscall FUN_10f13920(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f13a50(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f13b80(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10f14020(void *param_2,uint param_3,size_t *param_4); int __thiscall FUN_10f141f0(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10f14270(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); void __thiscall FUN_10f15720(int param_2); void __thiscall FUN_10f15e50(int param_2); undefined4 * __thiscall FUN_10f17c50(undefined4 *param_2); void __thiscall FUN_10f18a10(uint param_2); void __thiscall FUN_10f18ea0(int param_2); void __thiscall FUN_10f18f90(undefined4 *param_2); void __thiscall FUN_10f190f0(int *param_2); void __thiscall FUN_10f1a870(int param_2); void __thiscall FUN_10f1a950(int param_2); int * __thiscall FUN_10f1b420(int *param_2,int *param_3); int * __thiscall FUN_10f1b480(int *param_2,int *param_3); int * __thiscall FUN_10f1b7a0(int *param_2,int *param_3); int * __thiscall FUN_10f1b8e0(int *param_2,int *param_3); int __thiscall FUN_10f1cbe0(int *param_2); int __thiscall FUN_10f1ccf0(int *param_2); uint __thiscall FUN_10f208e0(int param_2); uint __thiscall FUN_10f20940(int param_2); undefined4 * __thiscall FUN_10f21b30(byte param_2); void __thiscall FUN_10f21fe0(int param_2); undefined4 __thiscall FUN_10f224b0(int param_2); int * __thiscall FUN_10f22bc0(int *param_2); int * __thiscall FUN_10f22d00(int *param_2); int * __thiscall FUN_10f234a0(undefined4 *param_2,int param_3,undefined4 param_4); undefined4 * __thiscall FUN_10f238a0(void *param_2,undefined4 *param_3); undefined4 __thiscall FUN_10f23ba0(undefined4 param_2,int *param_3); undefined4 * __thiscall FUN_10f23e90(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_10f246a0(int param_2); undefined4 * __thiscall FUN_10f24730(int param_2); int * __thiscall FUN_10f24c70(int *param_2); int * __thiscall FUN_10f24de0(int *param_2); undefined4 * __thiscall FUN_10f25750(undefined4 param_2); undefined4 * __thiscall FUN_10f258d0(undefined4 param_2); undefined4 * __thiscall FUN_10f263a0(int *param_2); int * __thiscall FUN_10f26680(int *param_2); int __thiscall FUN_10f26840(byte param_2); undefined4 * __thiscall FUN_10f268c0(byte param_2); void __thiscall FUN_10f26ce0(int param_2,int param_3,int param_4); void __thiscall FUN_10f26f00(uint param_2); void __thiscall FUN_10f27920(int *param_2,undefined4 param_3); int * __thiscall FUN_10f2a970(int *param_2); void __thiscall FUN_10f2bb40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10f2bf40(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f2f770(int param_2); undefined4 * __thiscall FUN_10f2f800(int param_2); undefined4 * __thiscall FUN_10f2f890(int param_2); undefined4 * __thiscall FUN_10f2f920(int param_2); undefined4 * __thiscall FUN_10f2f9b0(int param_2); undefined4 * __thiscall FUN_10f2fb10(int param_2); undefined4 * __thiscall FUN_10f2fc70(int param_2); undefined4 * __thiscall FUN_10f2fdd0(int param_2); undefined4 * __thiscall FUN_10f30180(undefined4 param_2); undefined4 * __thiscall FUN_10f30440(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10f30710(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10f30a60(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10f30c90(undefined4 param_2); undefined4 * __thiscall FUN_10f30d90(int *param_2); int __thiscall FUN_10f32a90(byte param_2); undefined4 * __thiscall FUN_10f32b40(byte param_2); undefined4 * __thiscall FUN_10f32c50(byte param_2); undefined4 * __thiscall FUN_10f32d60(byte param_2); undefined4 * __thiscall FUN_10f32e70(byte param_2); void __thiscall FUN_10f333c0(int *param_2,undefined4 param_3); void __thiscall FUN_10f334a0(int *param_2,undefined4 param_3); void __thiscall FUN_10f33580(int *param_2,undefined4 param_3); void __thiscall FUN_10f33660(int *param_2,undefined4 param_3); void __thiscall FUN_10f338e0(int *param_2,int *param_3); void __thiscall FUN_10f33a40(int param_2,int *param_3); void __thiscall FUN_10f33b50(int param_2,int *param_3); void __thiscall FUN_10f35c60(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f35d90(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f35ec0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f35ff0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10f36120(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f361a0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f36220(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f362a0(undefined4 *param_2,SCStr *param_3); undefined4 __thiscall FUN_10f364a0(void *param_2,uint param_3,size_t *param_4); undefined4 __thiscall FUN_10f36520(void *param_2,uint param_3,size_t *param_4); undefined4 __thiscall FUN_10f376d0(undefined4 param_2,int *param_3); int * __thiscall FUN_10f377b0(int *param_2,int *param_3); int * __thiscall FUN_10f379c0(int *param_2,int *param_3); int __thiscall FUN_10f38630(int *param_2); int __thiscall FUN_10f38830(byte param_2); undefined4 * __thiscall FUN_10f388d0(byte param_2); uint __thiscall FUN_10f3bd50(int param_2); undefined1 __thiscall FUN_10f3beb0(undefined4 param_2); void __thiscall FUN_10f3bf40(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10f3d1b0(byte param_2); undefined4 * __thiscall FUN_10f3d310(byte param_2); int __thiscall FUN_10f3d6c0(int param_2); int __thiscall FUN_10f3d7c0(int param_2); void __thiscall FUN_10f3e650(int param_2); void __thiscall FUN_10f3e730(int param_2); undefined4 * __thiscall FUN_10f3ee80(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f3ef00(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f3f110(undefined4 param_2,undefined1 param_3); undefined4 * __thiscall FUN_10f3f3c0(byte param_2); void __thiscall FUN_10f3f680(int param_2,short param_3); int __thiscall FUN_10f3fb70(int param_2); void __thiscall FUN_10f40760(char *param_2,uint param_3); int * __thiscall FUN_10f40b40(undefined4 *param_2); int * __thiscall FUN_10f428d0(int *param_2); int * __thiscall FUN_10f429e0(int *param_2); undefined4 * __thiscall FUN_10f42af0(undefined4 *param_2); int * __thiscall FUN_10f42c00(int *param_2); undefined4 * __thiscall FUN_10f42e50(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f42ed0(undefined4 *param_2,SCStr *param_3); int * __thiscall FUN_10f42ff0(int *param_2,SCStr *param_3); void __thiscall FUN_10f436b0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f43730(undefined4 param_2); int * __thiscall FUN_10f437d0(int *param_2); int * __thiscall FUN_10f43850(int *param_2); int * __thiscall FUN_10f43950(undefined4 *param_2); int * __thiscall FUN_10f43aa0(undefined4 *param_2); int * __thiscall FUN_10f44df0(int *param_2); void __thiscall FUN_10f45640(int param_2); undefined4 * __thiscall FUN_10f45b70(undefined4 *param_2); undefined4 * __thiscall FUN_10f45df0(undefined4 *param_2,int param_3); void __thiscall FUN_10f46010(undefined4 *param_2); int * __thiscall FUN_10f46260(int *param_2); undefined1 __thiscall FUN_10f46b70(undefined1 param_2); void __thiscall FUN_10f46e10(int param_2,uint param_3); void __thiscall FUN_10f46e70(uint param_2); void __thiscall FUN_10f47070(SCStr *param_2,SCStr *param_3,uint param_4); undefined4 * __thiscall FUN_10f478b0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f47930(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f47a50(undefined4 *param_2,SCStr *param_3); int * __thiscall FUN_10f47ad0(int *param_2,SCStr *param_3); void __thiscall FUN_10f47fd0(undefined4 param_2); int * __thiscall FUN_10f48050(int *param_2); undefined4 * __thiscall FUN_10f48500(byte param_2); undefined4 __thiscall FUN_10f48610(undefined4 param_2); undefined4 __thiscall FUN_10f486a0(undefined4 param_2); undefined4 __thiscall FUN_10f48bc0(undefined4 param_2); undefined4 * __thiscall FUN_10f48ce0(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_10f48e00(undefined4 param_2); int * __thiscall FUN_10f4aae0(int *param_2); undefined4 * __thiscall FUN_10f4acc0(byte param_2); undefined4 * __thiscall FUN_10f4ad50(byte param_2); undefined4 * __thiscall FUN_10f4afe0(byte param_2); void __thiscall FUN_10f4b0f0(int param_2,int param_3,int param_4); void __thiscall FUN_10f4bc40(undefined4 *param_2); void __thiscall FUN_10f4bd20(undefined4 *param_2); SCStr * __thiscall FUN_10f4bef0(SCStr *param_2,int param_3); undefined4 * __thiscall FUN_10f4c9c0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f4ca40(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f4cb60(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f4cbe0(undefined4 *param_2,SCStr *param_3); undefined4 __thiscall FUN_10f4cd10(undefined4 param_2); undefined4 __thiscall FUN_10f4d0d0(undefined4 param_2); bool __thiscall FUN_10f4d1a0(undefined4 param_2); undefined4 __thiscall FUN_10f4d200(undefined4 param_2); int * __thiscall FUN_10f4eb10(int *param_2); int * __thiscall FUN_10f4ebe0(int *param_2); float __thiscall FUN_10f4eff0(int param_2); void __thiscall FUN_10f4f460(int param_2); undefined4 * __thiscall FUN_10f51510(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f515b0(undefined4 *param_2,SCStr *param_3); int __thiscall FUN_10f51f70(int param_2); undefined4 * __thiscall FUN_10f51ff0(int *param_2); int * __thiscall FUN_10f52500(int *param_2); undefined4 * __thiscall FUN_10f52690(byte param_2); int * __thiscall FUN_10f55160(int *param_2); int * __thiscall FUN_10f55400(int *param_2); int * __thiscall FUN_10f55610(int *param_2); int * __thiscall FUN_10f55680(int *param_2); undefined4 * __thiscall FUN_10f55960(int param_2); undefined4 * __thiscall FUN_10f559f0(int param_2); undefined4 * __thiscall FUN_10f55a80(int param_2); undefined4 * __thiscall FUN_10f55b10(int param_2); undefined4 * __thiscall FUN_10f55c60(int param_2); undefined4 * __thiscall FUN_10f55dc0(int param_2); undefined4 * __thiscall FUN_10f55f20(int param_2); undefined4 * __thiscall FUN_10f56480(int param_2); undefined4 * __thiscall FUN_10f565f0(int param_2); undefined4 * __thiscall FUN_10f56760(int param_2); undefined4 * __thiscall FUN_10f56a40(int *param_2); int * __thiscall FUN_10f57b50(int *param_2); int * __thiscall FUN_10f57bc0(int *param_2); int * __thiscall FUN_10f57c30(int *param_2); int * __thiscall FUN_10f57ca0(int *param_2); int * __thiscall FUN_10f57d10(int *param_2); int * __thiscall FUN_10f57d80(int *param_2); int * __thiscall FUN_10f57df0(int *param_2); int * __thiscall FUN_10f57e60(int *param_2); int * __thiscall FUN_10f57ed0(int *param_2); int * __thiscall FUN_10f57f40(int *param_2); int * __thiscall FUN_10f57fb0(int *param_2); void __thiscall FUN_10f58c10(int param_2,int *param_3); void __thiscall FUN_10f58e70(int param_2,short param_3); void __thiscall FUN_10f59280(int *param_2,undefined4 param_3); void __thiscall FUN_10f59360(int *param_2,undefined4 param_3); void __thiscall FUN_10f59440(int *param_2,undefined4 param_3); void __thiscall FUN_10f59520(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_10f5a970(undefined4 *param_2); int * __thiscall FUN_10f5ab40(int *param_2); int * __thiscall FUN_10f5ada0(int *param_2); int * __thiscall FUN_10f5b000(int *param_2); int * __thiscall FUN_10f5b420(int *param_2); undefined4 * __thiscall FUN_10f5be80(undefined4 *param_2); undefined4 * __thiscall FUN_10f5bf60(undefined4 *param_2); undefined4 * __thiscall FUN_10f5ce40(undefined4 *param_2); undefined4 * __thiscall FUN_10f5cfd0(undefined4 *param_2); undefined4 * __thiscall FUN_10f5d3b0(undefined4 *param_2); undefined4 * __thiscall FUN_10f5d7e0(undefined4 *param_2); void __thiscall FUN_10f61b80(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f61cb0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f61de0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f61f10(undefined4 param_2,undefined4 param_3); int __thiscall FUN_10f63820(undefined4 param_2); undefined4 * __thiscall FUN_10f64d40(int param_2); int __thiscall FUN_10f65100(int param_2); int * __thiscall FUN_10f66150(int *param_2); undefined4 * __thiscall FUN_10f664f0(byte param_2); void __thiscall FUN_10f66c50(int *param_2,undefined4 param_3); void __thiscall FUN_10f677b0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f69920(int param_2,int *param_3); void __thiscall FUN_10f6a680(int *param_2); undefined4 __thiscall FUN_10f6b380(undefined4 param_2,int *param_3); int * __thiscall FUN_10f6b490(int *param_2,uint *param_3); int * __thiscall FUN_10f6b5d0(int *param_2,uint *param_3); int * __thiscall FUN_10f6bfd0(int *param_2); int __thiscall FUN_10f6c0e0(uint *param_2); int __thiscall FUN_10f6c2b0(byte param_2); void __thiscall FUN_10f6cb00(int param_2); void __thiscall FUN_10f6cbf0(int *param_2); void __thiscall FUN_10f6cc70(int *param_2,int *param_3); void __thiscall FUN_10f6d310(int *param_2,uint *param_3); int * __thiscall FUN_10f6d380(int *param_2); void __thiscall FUN_10f6d860(int *param_2); undefined4 * __thiscall FUN_10f6e580(int param_2); undefined4 * __thiscall FUN_10f6faa0(int param_2); undefined4 * __thiscall FUN_10f6fb30(int param_2); int __thiscall FUN_10f6fde0(int *param_2); int __thiscall FUN_10f6fe50(int param_2); int __thiscall FUN_10f6fee0(int param_2); undefined4 * __thiscall FUN_10f700d0(undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5); int __thiscall FUN_10f71320(byte param_2); undefined4 * __thiscall FUN_10f71400(byte param_2); void __thiscall FUN_10f71740(char param_2); void __thiscall FUN_10f71fb0(int *param_2,undefined4 param_3); void __thiscall FUN_10f72310(int *param_2,int *param_3); undefined4 __thiscall FUN_10f72ec0(undefined4 param_2,short *param_3); void __thiscall FUN_10f73500(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10f737e0(undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); void __thiscall FUN_10f73870(undefined4 param_2); undefined4 * __thiscall FUN_10f73cc0(byte param_2); undefined4 * __thiscall FUN_10f74f80(byte param_2); undefined4 * __thiscall FUN_10f75080(byte param_2); undefined4 * __thiscall FUN_10f75130(byte param_2); undefined4 * __thiscall FUN_10f75210(byte param_2); undefined4 * __thiscall FUN_10f752d0(byte param_2); undefined4 * __thiscall FUN_10f75340(byte param_2); void __thiscall FUN_10f75460(undefined4 param_2); void __thiscall FUN_10f754c0(undefined4 param_2); void __thiscall FUN_10f75570(undefined4 param_2); void __thiscall FUN_10f755d0(undefined4 param_2); undefined4 __thiscall FUN_10f75a00(int *param_2,int *param_3); void __thiscall FUN_10f75b00(int param_2,int param_3); void __thiscall FUN_10f75bb0(int param_2,int param_3); undefined1 * __thiscall FUN_10f75ef0(int param_2,int param_3); void __thiscall FUN_10f76320(int param_2,int param_3,byte param_4,byte param_5,byte param_6); void __thiscall FUN_10f76470(int param_2,int param_3,byte param_4,byte param_5,byte param_6); void __thiscall FUN_10f767e0(undefined1 *param_2); void __thiscall FUN_10f76840(undefined1 *param_2,int param_3); void __thiscall FUN_10f768f0(undefined1 *param_2,int param_3); void __thiscall FUN_10f76980(undefined1 *param_2); undefined4 __thiscall FUN_10f76c10(void *param_2,size_t param_3); undefined4 * __thiscall FUN_10f76e20(byte param_2); undefined4 __thiscall FUN_10f77140(undefined4 param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10f77370(int param_2); undefined4 * __thiscall FUN_10f77460(int param_2); undefined4 * __thiscall FUN_10f77fd0(byte param_2); void __thiscall FUN_10f781a0(int *param_2,undefined4 param_3); int * __thiscall FUN_10f784e0(int *param_2); undefined4 * __thiscall FUN_10f78770(undefined4 *param_2); undefined4 * __thiscall FUN_10f79160(undefined4 *param_2); undefined4 * __thiscall FUN_10f798a0(undefined4 *param_2); undefined4 * __thiscall FUN_10f79c70(undefined4 *param_2); void __thiscall FUN_10f79fd0(undefined4 param_2,undefined4 param_3); int __thiscall FUN_10f7a770(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_10f7a8f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); void __thiscall FUN_10f7af00(int *param_2); undefined4 * __thiscall FUN_10f7b1f0(byte param_2); undefined4 * __thiscall FUN_10f7b6e0(byte param_2); undefined4 * __thiscall FUN_10f7bb60(undefined4 *param_2,int *param_3); undefined4 __thiscall FUN_10f7bdc0(undefined4 param_2,int *param_3); int * __thiscall FUN_10f7be90(int *param_2,int param_3); undefined4 * __thiscall FUN_10f7c2c0(int param_2); undefined4 * __thiscall FUN_10f7c350(int param_2); undefined4 * __thiscall FUN_10f7c3e0(int param_2); undefined4 * __thiscall FUN_10f7c540(int param_2); undefined4 * __thiscall FUN_10f7d1a0(undefined4 *param_2); undefined4 * __thiscall FUN_10f7e900(byte param_2); undefined4 * __thiscall FUN_10f7e9b0(byte param_2); undefined4 * __thiscall FUN_10f7eb10(byte param_2); void __thiscall FUN_10f7f370(int *param_2,undefined4 param_3); void __thiscall FUN_10f7f450(int *param_2,undefined4 param_3); void __thiscall FUN_10f7f600(int param_2,int *param_3); undefined4 __thiscall FUN_10f801c0(int param_2,undefined4 param_3); void __thiscall FUN_10f80740(int *param_2); void __thiscall FUN_10f80870(int *param_2); void __thiscall FUN_10f80a70(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f80ba0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f81690(int param_2); int __thiscall FUN_10f82270(int param_2); int * __thiscall FUN_10f836c0(byte param_2); int __thiscall FUN_10f83b20(int *param_2); void __thiscall FUN_10f83d90(int param_2,short param_3); void __thiscall FUN_10f86470(undefined4 param_2); void __thiscall FUN_10f86b70(int *param_2,undefined4 param_3,uint param_4); float __thiscall FUN_10f89000(int param_2); void __thiscall FUN_10f893e0(int param_2); undefined4 * __thiscall FUN_10f89dd0(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10f8a080(int param_2); undefined4 * __thiscall FUN_10f8a110(int param_2); undefined4 * __thiscall FUN_10f8a1a0(int param_2); undefined4 * __thiscall FUN_10f8a230(int param_2); undefined4 * __thiscall FUN_10f8a390(int param_2); undefined4 * __thiscall FUN_10f8a4f0(int param_2); undefined4 * __thiscall FUN_10f8a760(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10f8a9b0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10f8aaf0(int param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10f8adb0(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10f8b280(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_10f8bf40(byte param_2); undefined4 * __thiscall FUN_10f8c020(byte param_2); undefined4 * __thiscall FUN_10f8c0d0(byte param_2); void __thiscall FUN_10f8c270(int param_2,int param_3,int param_4); void __thiscall FUN_10f8c580(int *param_2,undefined4 param_3); void __thiscall FUN_10f8c660(int *param_2,undefined4 param_3); void __thiscall FUN_10f8c740(int *param_2,undefined4 param_3); void __thiscall FUN_10f8c940(int *param_2,int *param_3); undefined4 __thiscall FUN_10f8db70(undefined4 param_2,short *param_3); undefined4 __thiscall FUN_10f8dbf0(undefined4 param_2,short *param_3); undefined4 __thiscall FUN_10f8dc70(int param_2); void __thiscall FUN_10f8e050(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f8e180(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10f8e2b0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10f8e410(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f8e490(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_10f8e510(undefined4 *param_2,SCStr *param_3); undefined4 __thiscall FUN_10f8e6b0(void *param_2,uint param_3,size_t *param_4); };
using namespace std;
void __fastcall FUN_10ef1ec0(int param_1);
void __fastcall FUN_10ef1f20(int param_1);
void __fastcall FUN_10ef2990(int param_1);
undefined4 FUN_10ef36c0(int param_1,char *param_2);
/* WARNING: Type propagation algorithm not settling */ void __stdcall FUN_10ef37f0(void *param_1);
void __stdcall FUN_10ef3920(int param_1,uint param_2);
void __stdcall FUN_10ef39c0(int param_1,undefined4 param_2);
void FUN_10ef40f0(void *param_1,size_t param_2,undefined4 param_3);
void * FUN_10ef6280(uint param_1);
void __fastcall FUN_10ef8ce0(int param_1);
void __fastcall FUN_10ef9e00(int param_1);
void FUN_10f010e0(void);
void FUN_10f013a0(void);
void __stdcall FUN_10f01c90(undefined4 param_1,int *param_2);
void FUN_10f01dc0(undefined4 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 param_4);
void __fastcall FUN_10f02f60(undefined4 *param_1);
void __stdcall FUN_10f03bb0(undefined4 *param_1);
undefined1 FUN_10f05020(void);
undefined1 FUN_10f05380(void);
undefined1 FUN_10f054f0(void);
undefined1 __fastcall FUN_10f055f0(int param_1);
undefined1 FUN_10f05720(void);
undefined1 FUN_10f05890(void);
undefined1 FUN_10f05940(void);
undefined1 FUN_10f05990(void);
undefined4 __stdcall FUN_10f05df0(undefined4 param_1);
undefined4 FUN_10f05ed0(void);
undefined4 FUN_10f06000(void);
undefined4 FUN_10f06140(void);
undefined4 FUN_10f06600(void);
bool FUN_10f0b390(void);
bool FUN_10f0b500(void);
undefined1 __fastcall FUN_10f0bc40(int param_1);
undefined4 * __fastcall FUN_10f0de40(undefined4 *param_1);
undefined4 * __fastcall FUN_10f0e410(undefined4 *param_1);
undefined4 * __fastcall FUN_10f0e9a0(undefined4 *param_1);
void __fastcall FUN_10f0f320(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x10f0fbfb) */ void __fastcall FUN_10f0fb30(undefined4 *param_1);
void __fastcall FUN_10f10770(int param_1);
void __fastcall FUN_10f107d0(int param_1);
void __fastcall FUN_10f10830(int param_1);
void __fastcall FUN_10f10890(int param_1);
void __stdcall FUN_10f10f60(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_10f11060(int param_1);
void __fastcall FUN_10f11250(int param_1);
void __fastcall FUN_10f112b0(int param_1);
int __fastcall FUN_10f115e0(int param_1);
int __fastcall FUN_10f11660(int param_1);
void __fastcall FUN_10f13680(int param_1);
void __fastcall FUN_10f13720(int param_1);
void __fastcall FUN_10f137c0(int param_1);
void __fastcall FUN_10f14470(int param_1);
void __fastcall FUN_10f14aa0(int param_1);
void __fastcall FUN_10f14c30(int param_1);
void __fastcall FUN_10f14e00(int param_1);
void __fastcall FUN_10f151b0(int param_1);
void __fastcall FUN_10f152d0(int param_1);
undefined4 __stdcall FUN_10f165a0(undefined4 param_1);
void FUN_10f16a40(undefined4 param_1,int param_2,int param_3);
undefined4 * __fastcall FUN_10f17170(undefined4 *param_1);
void __fastcall FUN_10f17530(undefined4 *param_1);
void __fastcall FUN_10f19370(int param_1);
void __fastcall FUN_10f1a750(int param_1);
void __fastcall FUN_10f1a7b0(int param_1);
void __fastcall FUN_10f1a810(int param_1);
void __fastcall FUN_10f219f0(undefined4 *param_1);
void __fastcall FUN_10f21c30(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10f25f60(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10f27750(int *param_1);
void __fastcall FUN_10f278c0(int param_1);
void * FUN_10f27b60(uint param_1);
void __fastcall FUN_10f27c10(int param_1);
undefined1 FUN_10f27e80(void);
void __fastcall FUN_10f2b770(int param_1);
void __stdcall FUN_10f2b8b0(int param_1);
void __fastcall FUN_10f2b960(undefined1 *param_1);
void __fastcall FUN_10f2f680(int param_1);
undefined4 * __fastcall FUN_10f30230(undefined4 *param_1);
undefined4 * __fastcall FUN_10f30320(undefined4 *param_1);
undefined4 * __fastcall FUN_10f305f0(undefined4 *param_1);
undefined4 * __fastcall FUN_10f308f0(undefined4 *param_1);
void __fastcall FUN_10f31800(undefined4 *param_1);
void __fastcall FUN_10f31950(undefined4 *param_1);
void __fastcall FUN_10f31aa0(undefined4 *param_1);
void __fastcall FUN_10f31bf0(undefined4 *param_1);
void __fastcall FUN_10f31d40(int param_1);
void __fastcall FUN_10f31dd0(undefined4 *param_1);
void __fastcall FUN_10f31e90(undefined4 *param_1);
void __fastcall FUN_10f32040(undefined4 *param_1);
void __fastcall FUN_10f32100(undefined4 *param_1);
void __fastcall FUN_10f322b0(undefined4 *param_1);
void __fastcall FUN_10f32370(undefined4 *param_1);
void __fastcall FUN_10f32570(undefined4 *param_1);
void __fastcall FUN_10f32630(undefined4 *param_1);
void __fastcall FUN_10f33080(int param_1);
void __fastcall FUN_10f330e0(int param_1);
void __fastcall FUN_10f33140(int param_1);
void __fastcall FUN_10f331a0(int param_1);
void __fastcall FUN_10f33200(int param_1);
void __fastcall FUN_10f33270(int param_1);
void __fastcall FUN_10f332e0(int param_1);
void __fastcall FUN_10f33350(int param_1);
void __fastcall FUN_10f359e0(int param_1);
void __fastcall FUN_10f35a80(int param_1);
void __fastcall FUN_10f35b20(int param_1);
void __fastcall FUN_10f35bc0(int param_1);
void FUN_10f378a0(undefined4 param_1,int param_2);
void FUN_10f37ce0(undefined4 param_1,int param_2);
void __fastcall FUN_10f381e0(int param_1);
void __fastcall FUN_10f38390(int param_1);
void __fastcall FUN_10f38490(undefined4 *param_1);
void __fastcall FUN_10f38500(undefined4 *param_1);
void FUN_10f39360(void);
undefined4 __stdcall FUN_10f3bc50(undefined4 param_1);
void __fastcall FUN_10f3ce50(undefined4 *param_1);
void __fastcall FUN_10f3cfa0(undefined4 *param_1);
void __fastcall FUN_10f3d4a0(int *param_1);
void __fastcall FUN_10f3d580(int *param_1);
void __fastcall FUN_10f3e260(int *param_1);
uint FUN_10f3f060(void);
void __fastcall FUN_10f3f210(undefined4 *param_1);
void __fastcall FUN_10f3f590(undefined4 *param_1);
void __fastcall FUN_10f3f970(undefined4 *param_1);
void __fastcall FUN_10f40180(undefined1 *param_1);
void __stdcall FUN_10f408f0(undefined1 *param_1);
void __fastcall FUN_10f411f0(int *param_1);
void __fastcall FUN_10f412d0(undefined4 *param_1);
void __fastcall FUN_10f41340(undefined4 *param_1);
void __fastcall FUN_10f413b0(undefined4 *param_1);
void __fastcall FUN_10f41420(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f41620 (ram,0x10f417f0) */ void __fastcall FUN_10f41620(undefined4 *param_1);
undefined4 * FUN_10f41d60(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_10f41e00(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_10f41e90(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_10f41f20(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_10f41fb0(undefined4 *param_1,undefined4 param_2);
undefined4 __fastcall FUN_10f42770(int *param_1);
void __fastcall FUN_10f446a0(undefined4 *param_1);
void __fastcall FUN_10f44710(undefined4 *param_1);
void __fastcall FUN_10f44780(undefined4 *param_1);
void __fastcall FUN_10f447f0(undefined4 *param_1);
void __fastcall FUN_10f44860(undefined4 *param_1);
void __fastcall FUN_10f448d0(int *param_1);
void __fastcall FUN_10f449a0(undefined4 *param_1);
void __fastcall FUN_10f44b00(undefined4 *param_1);
undefined4 * FUN_10f455a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10f456a0(int *param_1);
void __fastcall FUN_10f45a10(int *param_1);
undefined4 __stdcall FUN_10f460e0(undefined4 param_1,int *param_2,int *param_3,int *param_4);
void __fastcall FUN_10f463a0(int *param_1);
void __fastcall FUN_10f46530(int param_1);
undefined1 __fastcall FUN_10f46c70(int param_1);
void __stdcall FUN_10f47610(int param_1);
void __fastcall FUN_10f476f0(int param_1);
void __fastcall FUN_10f48400(undefined4 *param_1);
undefined1 __fastcall FUN_10f48c50(int param_1);
void __fastcall FUN_10f48ea0(int param_1);
bool FUN_10f48f50(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4);
void FUN_10f49170(void);
void FUN_10f49380(undefined4 *param_1,undefined4 *param_2);
void FUN_10f49960(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10f4a710(undefined4 *param_1);
void __fastcall FUN_10f4a7a0(int *param_1);
void __fastcall FUN_10f4a820(undefined4 *param_1);
void __fastcall FUN_10f4aa40(undefined4 *param_1);
void __fastcall FUN_10f4b200(int *param_1);
char __fastcall FUN_10f4c830(int param_1);
void __fastcall FUN_10f4c8b0(int param_1);
void FUN_10f4dd60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_10f4e520(undefined4 *param_1);
void __fastcall FUN_10f4e610(int param_1);
void __fastcall FUN_10f4e680(int *param_1);
void __fastcall FUN_10f4e730(int *param_1);
void __fastcall FUN_10f4e790(int *param_1);
void __fastcall FUN_10f4e870(int *param_1);
void __fastcall FUN_10f4ea80(int *param_1);
void __fastcall FUN_10f4f4e0(float *param_1);
void __fastcall FUN_10f4f5b0(int *param_1);
void __fastcall FUN_10f4f620(int *param_1);
void __fastcall FUN_10f4f8f0(int *param_1);
int * FUN_10f4fe00(int *param_1);
void __fastcall FUN_10f51410(int param_1);
void __fastcall FUN_10f52210(undefined4 *param_1);
void __fastcall FUN_10f52300(undefined4 *param_1);
void __fastcall FUN_10f523d0(undefined4 *param_1);
void __fastcall FUN_10f53270(int param_1);
void __fastcall FUN_10f53340(int param_1);
void __fastcall FUN_10f536b0(int param_1);
void __fastcall FUN_10f570c0(undefined4 *param_1);
void __fastcall FUN_10f57210(undefined4 *param_1);
void __fastcall FUN_10f57360(undefined4 *param_1);
void __fastcall FUN_10f57600(undefined4 *param_1);
void __fastcall FUN_10f57670(undefined4 *param_1);
void __fastcall FUN_10f576e0(undefined4 *param_1);
void __fastcall FUN_10f57750(undefined4 *param_1);
void __fastcall FUN_10f58a90(int param_1);
void __fastcall FUN_10f58af0(int param_1);
void __fastcall FUN_10f58b50(int param_1);
void __fastcall FUN_10f58bb0(int param_1);
void __fastcall FUN_10f59680(int param_1);
void __fastcall FUN_10f596e0(int param_1);
void __fastcall FUN_10f59740(int param_1);
void __fastcall FUN_10f597a0(int param_1);
void __fastcall FUN_10f59800(int param_1);
void __fastcall FUN_10f59880(int param_1);
void __fastcall FUN_10f598e0(int param_1);
void __fastcall FUN_10f59940(int param_1);
void __fastcall FUN_10f599a0(int param_1);
void __fastcall FUN_10f59a00(int param_1);
void __fastcall FUN_10f59a60(int param_1);
void __fastcall FUN_10f59ac0(int param_1);
void __fastcall FUN_10f59b20(int param_1);
void __fastcall FUN_10f61900(int param_1);
void __fastcall FUN_10f619a0(int param_1);
void __fastcall FUN_10f61a40(int param_1);
void __fastcall FUN_10f61ae0(int param_1);
void __fastcall FUN_10f62640(int *param_1);
void __fastcall FUN_10f63140(int *param_1);
void __fastcall FUN_10f65c90(undefined4 *param_1);
void __fastcall FUN_10f65d80(undefined4 *param_1);
void __fastcall FUN_10f65df0(undefined4 *param_1);
void __fastcall FUN_10f65e60(undefined4 *param_1);
int __fastcall FUN_10f65fb0(undefined4 *param_1);
void __fastcall FUN_10f66740(int param_1);
undefined4 * FUN_10f673a0(undefined4 *param_1);
void __fastcall FUN_10f67620(int param_1);
void __fastcall FUN_10f676f0(int param_1);
void __fastcall FUN_10f69580(undefined4 *param_1);
void FUN_10f6ae50(undefined4 param_1,undefined8 param_2);
void __stdcall FUN_10f6af40(undefined4 param_1,undefined4 param_2);
void FUN_10f6b510(undefined4 param_1,int param_2);
void FUN_10f6b780(undefined4 param_1,int param_2);
void __fastcall FUN_10f6bcd0(int param_1);
void __fastcall FUN_10f6bdc0(int param_1);
void __fastcall FUN_10f6d930(int param_1);
void __stdcall FUN_10f6e170(undefined4 param_1,undefined4 param_2);
void FUN_10f6e250(undefined4 param_1,undefined8 param_2);
void __stdcall FUN_10f6e340(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_10f6e420(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_10f6efc0(int param_1);
undefined4 * __fastcall FUN_10f70280(undefined4 *param_1);
void __fastcall FUN_10f70830(undefined4 *param_1);
void __fastcall FUN_10f70a00(undefined4 *param_1);
void __fastcall FUN_10f70af0(undefined4 *param_1);
void __fastcall FUN_10f70b60(undefined4 *param_1);
void __fastcall FUN_10f70c30(int param_1);
void __fastcall FUN_10f70d30(undefined4 *param_1);
int __fastcall FUN_10f70f70(undefined4 *param_1);
undefined4 * __fastcall FUN_10f716a0(int param_1);
void __fastcall FUN_10f71d80(int param_1);
void __fastcall FUN_10f72f40(int param_1);
void __fastcall FUN_10f72ff0(int param_1);
void __fastcall FUN_10f73430(int param_1);
void ** __fastcall FUN_10f73bf0(undefined4 *param_1);
void __fastcall FUN_10f749e0(undefined4 *param_1);
void __fastcall FUN_10f74a60(undefined4 *param_1);
void __fastcall FUN_10f74b20(undefined4 *param_1);
void __fastcall FUN_10f74be0(undefined4 *param_1);
void __fastcall FUN_10f74c70(undefined4 *param_1);
void __fastcall FUN_10f74d40(undefined4 *param_1);
void __fastcall FUN_10f74e30(undefined4 *param_1);
void __fastcall FUN_10f75720(int *param_1);
undefined1 __stdcall FUN_10f75930(int *param_1,int *param_2);
void __fastcall FUN_10f769f0(int param_1);
void __fastcall FUN_10f76d70(undefined4 *param_1);
void FUN_10f76ef0(int param_1,undefined1 *param_2);
undefined4 FUN_10f76fc0(void);
void __fastcall FUN_10f772a0(int param_1);
void __fastcall FUN_10f77300(int param_1);
void __fastcall FUN_10f77bd0(undefined4 *param_1);
void __fastcall FUN_10f77cd0(undefined4 *param_1);
void __fastcall FUN_10f78140(int param_1);
void __fastcall FUN_10f79f20(int param_1);
void __fastcall FUN_10f7b170(undefined4 *param_1);
void FUN_10f7b290(int param_1,undefined1 *param_2);
void __fastcall FUN_10f7b640(undefined4 *param_1);
void FUN_10f7b7a0(int param_1,undefined1 *param_2);
undefined4 __fastcall FUN_10f7b810(int param_1);
void FUN_10f7bfb0(undefined4 param_1,int param_2);
undefined4 FUN_10f7c030(int param_1,undefined4 *param_2);
void FUN_10f7c190(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10f7dbb0(int param_1);
void __fastcall FUN_10f7dea0(undefined4 *param_1);
void __fastcall FUN_10f7df30(undefined4 *param_1);
void __fastcall FUN_10f7e220(undefined4 *param_1);
void __fastcall FUN_10f7f080(int param_1);
void __fastcall FUN_10f7f0e0(int param_1);
void __fastcall FUN_10f7f140(int param_1);
void __fastcall FUN_10f7f1b0(int param_1);
void __fastcall FUN_10f7f220(int param_1);
void __fastcall FUN_10f805e0(int param_1);
void __fastcall FUN_10f80680(int param_1);
void FUN_10f81c90(undefined4 param_1,undefined4 *param_2);
void FUN_10f81d70(undefined4 param_1,int param_2);
void FUN_10f81ef0(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10f82750(undefined4 *param_1);
void __fastcall FUN_10f82a30(int param_1);
void __fastcall FUN_10f82b00(int *param_1);
void __fastcall FUN_10f82f10(int *param_1);
void __fastcall FUN_10f83a00(int *param_1);
void __fastcall FUN_10f83fd0(int param_1);
undefined4 __fastcall FUN_10f84170(int param_1);
void __fastcall FUN_10f859f0(int param_1);
undefined4 FUN_10f85aa0(undefined4 param_1);
void __stdcall FUN_10f86160(int *param_1);
void __fastcall FUN_10f86240(undefined4 *param_1);
undefined4 __stdcall FUN_10f862e0(int *param_1);
void FUN_10f86c10(undefined4 param_1,undefined4 *param_2);
void FUN_10f86cd0(undefined4 param_1,int param_2);
void FUN_10f87440(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_10f88700(int param_1);
void __fastcall FUN_10f88780(int *param_1);
void __fastcall FUN_10f89460(float *param_1);
void __fastcall FUN_10f89530(int *param_1);
undefined4 * __fastcall FUN_10f8a8c0(undefined4 *param_1);
void __fastcall FUN_10f8b460(undefined4 *param_1);
void __fastcall FUN_10f8b5b0(undefined4 *param_1);
void __fastcall FUN_10f8b700(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10f8b850(int *param_1);
void __fastcall FUN_10f8b8c0(undefined4 *param_1);
void __fastcall FUN_10f8b9c0(undefined4 *param_1);
void __fastcall FUN_10f8ba50(undefined4 *param_1);
void __fastcall FUN_10f8bb70(undefined4 *param_1);
void __fastcall FUN_10f8bc00(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10f8c350(int *param_1);
void __fastcall FUN_10f8c460(int param_1);
void __fastcall FUN_10f8c4c0(int param_1);
void __fastcall FUN_10f8c520(int param_1);
void __fastcall FUN_10f8dce0(int param_1);
void __fastcall FUN_10f8dd50(int param_1);
void __fastcall FUN_10f8de50(int param_1);
void __fastcall FUN_10f8def0(int param_1);
void __fastcall FUN_10f8df90(int param_1);
// Reference entry 10ef1200; body size 114 bytes.
#line 1 "ENTRY_10ef1200"

undefined4 * __thiscall Recovered_Bulk::FUN_10ef1200(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10ef1290; body size 278 bytes.
#line 1 "ENTRY_10ef1290"

undefined4 * __thiscall Recovered_Bulk::FUN_10ef1290(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10ef1ec0; body size 76 bytes.
#line 1 "ENTRY_10ef1ec0"

void __fastcall FUN_10ef1ec0(int param_1)

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


// Reference entry 10ef1f20; body size 85 bytes.
#line 1 "ENTRY_10ef1f20"

void __fastcall FUN_10ef1f20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x616c) != 0) && (*(int **)(param_1 + 0x6168) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6168) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6168));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6168) = 0;
    *(undefined4 *)(param_1 + 0x616c) = 0;
  }
  return;
}


// Reference entry 10ef1f90; body size 149 bytes.
#line 1 "ENTRY_10ef1f90"

void __thiscall Recovered_Bulk::FUN_10ef1f90(int *param_2,undefined4 param_3)
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


// Reference entry 10ef2080; body size 150 bytes.
#line 1 "ENTRY_10ef2080"

void __thiscall Recovered_Bulk::FUN_10ef2080(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (param_2 != *(int *)(param_1 + 0x2c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x30));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    *(int *)(param_1 + 0x2c) = param_2;
    *(int **)(param_1 + 0x30) = param_3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10ef2990; body size 128 bytes.
#line 1 "ENTRY_10ef2990"

void __fastcall FUN_10ef2990(int param_1)

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


// Reference entry 10ef2a30; body size 232 bytes.
#line 1 "ENTRY_10ef2a30"

void __thiscall Recovered_Bulk::FUN_10ef2a30(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10ef2c50; body size 96 bytes.
#line 1 "ENTRY_10ef2c50"

undefined4 __thiscall Recovered_Bulk::FUN_10ef2c50(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  *(bool *)param_2 = (undefined4)(*(char *)(param_1 + 0x38) == '\0');
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x24) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x24));
  }
  thunk_FUN_1145c250(param_3,puVar1,0x19);
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
  }
  thunk_FUN_1145c250(param_4,puVar1,0x21);
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
  }
  thunk_FUN_1145c250(param_5,puVar1,0x11);
  return (undefined4)(1);
}


// Reference entry 10ef36c0; body size 241 bytes.
#line 1 "ENTRY_10ef36c0"

undefined4 FUN_10ef36c0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  size_t _Size;
  
  pcVar3 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  iVar4 = (int)((int)pcVar3 - (int)(param_2 + 1));
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) || (0xff < iVar4)) {
    thunk_FUN_112af4e0("tarball",1,"invalid archive name \"%s\"",param_2);
    return (undefined4)(0);
  }
  pcVar3 = (char *)(param_2);
  if (100 < iVar4) {
    pcVar5 = (char *)(param_2 + iVar4);
    do {
      cVar1 = (char)(*pcVar5);
      pcVar2 = (char *)(pcVar5);
      while ((cVar1 != '/' && (param_2 <= pcVar2))) {
        pcVar2 = (char *)(pcVar2 + -1);
        cVar1 = (char)(*pcVar2);
      }
      pcVar3 = (char *)(pcVar2 + 1);
      if (*pcVar2 != '/') {
LAB_10ef3778:
        thunk_FUN_112af4e0("tarball",1,"invalid archive name \"%s\"",pcVar3);
        return (undefined4)(0);
      }
      pcVar5 = (char *)(pcVar3);
      do {
        cVar1 = (char)(*pcVar5);
        pcVar5 = (char *)(pcVar5 + 1);
      } while (cVar1 != '\0');
      if (100 < (uint)((int)pcVar5 - (int)(pcVar2 + 2))) goto LAB_10ef3778;
      pcVar5 = (char *)(pcVar2 + -1);
      _Size = (size_t)((int)pcVar2 - (int)param_2);
    } while (0x9b < (int)_Size);
    memcpy((void *)(param_1 + 0x159),param_2,_Size);
    if ((int)_Size < 0x9b) {
      *(undefined1 *)(_Size + 0x159 + param_1) = 0;
    }
  }
  thunk_FUN_1145c250(param_1,pcVar3,100);
  return (undefined4)(1);
}


// Reference entry 10ef37f0; body size 232 bytes.
#line 1 "ENTRY_10ef37f0"

/* WARNING: Type propagation algorithm not settling */

void __stdcall FUN_10ef37f0(void *param_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  __time64_t _Var5;
  char acStackY_54 [8];
  undefined4 uStackY_4c;
  char *pcStackY_48;
  undefined4 uStackY_44;
  char *pcStackY_40;
  undefined4 uStackY_3c;
  undefined4 uStackY_38;
  int iStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  char local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_14);

  memset(param_1,0,0x200);

  iStack_30 = (int)((int)param_1 + 0x101);
  pcStack_2c = (char *)("ustar");
  thunk_FUN_1145c250();
  uStackY_38 = (undefined4)(0x10ef382b);
  _Var5 = (__time64_t)(_time64((__time64_t *)0x0));
  uStackY_38 = (undefined4)((undefined4)_Var5);
  uStackY_3c = (undefined4)(0xc);
  pcStackY_40 = (char *)("%0*lo");
  pcStackY_48 = (char *)(local_14);
  uStackY_44 = (undefined4)(0xd);
  uStackY_4c = (undefined4)(0x10ef383f);
  thunk_FUN_10ef4180();
  pcVar3 = (char *)(local_14);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  pcVar3 = (char *)(pcVar3 + (-0x15 - (int)&pcStackY_48));
  cVar1 = (char)(pcVar3[(int)&pcStackY_40]);

  *(undefined8 *)((int)param_1 + 0x88) =
       *(undefined8 *)(&stack0xffffffcc + (int)pcVar3 + ((cVar1 == '0') - 0xc));
  *(undefined4 *)((int)param_1 + 0x90) =
       *(undefined4 *)(&stack0xffffffcc + (int)pcVar3 + ((cVar1 == '0') - 4));
  pcStack_2c = (char *)(local_14);
  iStack_30 = (int)(0x10ef3895);
  thunk_FUN_10ef4180();
  pcVar3 = (char *)(local_14);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  pcVar3 = (char *)(pcVar3 + (7 - (int)&pcStack_2c));
  uVar4 = (uint)((uint)(*(char *)((int)&uStackY_3c + (int)pcVar3) == '0'));
  uVar2 = (undefined4)(*(undefined4 *)(&stack0xffffffcc + (int)pcVar3 + (uVar4 - 4)));
  *(undefined4 *)((int)param_1 + 100) =
       *(undefined4 *)(&stack0xffffffcc + (int)pcVar3 + (uVar4 - 8));
  *(undefined4 *)((int)param_1 + 0x68) = uVar2;
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10ef3920; body size 120 bytes.
#line 1 "ENTRY_10ef3920"

void __stdcall FUN_10ef3920(int param_1,uint param_2)

{
 try {
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char acStack_34 [4];
  char acStack_30 [4];
  char *pcStack_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  char local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_14);
  uStack_1c = (uint)(param_2 & 0xfff);

  pcStack_24 = (char *)("%0*lo");
  pcStack_2c = (char *)(local_14);

  acStack_30[0] = 'P';
  acStack_30[1] = '9';
  acStack_30[2] = -0x11;
  acStack_30[3] = '\x10';
  thunk_FUN_10ef4180();
  pcVar3 = (char *)(local_14);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  pcVar3 = (char *)(pcVar3 + (-0x2d - (int)&pcStack_2c));
  uVar2 = (undefined4)(*(undefined4 *)
           (pcVar3 + (int)(&stack0x00000000 + (((local_14 + 0xc)[(int)pcVar3] == '0') - 4))));
  *(undefined4 *)(param_1 + 100) =
       *(undefined4 *)
        (pcVar3 + (int)(&stack0x00000000 + (((local_14 + 0xc)[(int)pcVar3] == '0') - 8)));
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10ef39c0; body size 115 bytes.
#line 1 "ENTRY_10ef39c0"

void __stdcall FUN_10ef39c0(int param_1,undefined4 param_2)

{
 try {
  char cVar1;
  char *pcVar2;
  char acStack_38 [8];
  char acStack_30 [4];
  char *pcStack_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  char local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_14);
  uStack_1c = (undefined4)(param_2);
  pcStack_2c = (char *)(local_14);

  pcStack_24 = (char *)("%0*lo");

  acStack_30[0] = -0x16;
  acStack_30[1] = '9';
  acStack_30[2] = -0x11;
  acStack_30[3] = '\x10';
  thunk_FUN_10ef4180();
  pcVar2 = (char *)(local_14);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  cVar1 = (char)(pcVar2[(int)(&stack0xffffffc7 + -(int)&pcStack_2c)]);
  *(undefined8 *)(param_1 + 0x7c) =
       *(undefined8 *)
        (pcVar2 + (int)(&stack0xffffffc7 + (uint)(cVar1 == '0') + (-0x2d - (int)&pcStack_2c) + 0x2d)
        );
  *(undefined4 *)(param_1 + 0x84) =
       *(undefined4 *)
        (pcVar2 + (int)(acStack_38 + (uint)(cVar1 == '0') + (-0x2d - (int)&pcStack_2c) + 0x34));
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10ef40f0; body size 113 bytes.
#line 1 "ENTRY_10ef40f0"

void FUN_10ef40f0(void *param_1,size_t param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_14);
  thunk_FUN_10ef4180(local_14,0xd,"%0*lo",param_2,param_3);
  pcVar2 = (char *)(local_14);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  pcVar3 = (char *)(local_14);
  if (local_14[(int)(pcVar2 + (-param_2 - (int)(local_14 + 1)))] == '0') {
    pcVar3 = (char *)(local_14 + 1);
  }
  memcpy(param_1,pcVar3 + (int)(pcVar2 + (-param_2 - (int)(local_14 + 1))),param_2);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10ef4470; body size 342 bytes.
#line 1 "ENTRY_10ef4470"

undefined4 * __thiscall Recovered_Bulk::FUN_10ef4470(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_10ef5eb0();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_10ef45bc:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_10ef45bc;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10ef45bc;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10ef45b6;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_10ef45b6:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 10ef4620; body size 267 bytes.
#line 1 "ENTRY_10ef4620"

undefined4 * __thiscall Recovered_Bulk::FUN_10ef4620(void *param_2,undefined4 *param_3)
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
                    
    thunk_FUN_10ef5ec0();
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
  _Dst = (void *)((void *)thunk_FUN_10ef6280(uVar5));
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
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)((int)_Dst + uVar5 * 4);
  return (undefined4 *)(puVar2);
}


// Reference entry 10ef5800; body size 89 bytes.
#line 1 "ENTRY_10ef5800"

void __thiscall Recovered_Bulk::FUN_10ef5800(int param_2,int param_3,int param_4)
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
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}


// Reference entry 10ef5870; body size 89 bytes.
#line 1 "ENTRY_10ef5870"

void __thiscall Recovered_Bulk::FUN_10ef5870(int param_2,int param_3,int param_4)
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
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}


// Reference entry 10ef6280; body size 87 bytes.
#line 1 "ENTRY_10ef6280"

void * FUN_10ef6280(uint param_1)

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


// Reference entry 10ef8ce0; body size 271 bytes.
#line 1 "ENTRY_10ef8ce0"

void __fastcall FUN_10ef8ce0(int param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);
  if (*(int *)(param_1 + 0x14) == 0) {
    piVar3 = (int *)(*(int **)(param_1 + 4));
    if (piVar3 != *(int **)(param_1 + 8)) {
      while ((iVar1 = *piVar3, *(int *)(iVar1 + 0xc) == 0 || (*(int *)(iVar1 + 0x10) != 0))) {
        piVar3 = (int *)(piVar3 + 1);
        if (piVar3 == *(int **)(param_1 + 8)) {
          return;
        }
      }

      *(int *)(param_1 + 0x14) = iVar1;
      if (*(int *)(param_1 + 0x20) == 0) {
        pvVar4 = (void *)(operator_new(0x5c));

        if (pvVar4 == (void *)0x0) {
          uVar5 = (undefined4)(0);
        }
        else {
          uVar5 = (undefined4)(thunk_FUN_1115c810(uVar2));
        }
        *(undefined4 *)(param_1 + 0x20) = uVar5;
      }

      puVar6 = (undefined4 *)(operator_new(0x20));

      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        thunk_FUN_111a4bc0(0,"ExtractArchiveOp");
        puVar6[5] = (uint)&ghidra_vftable_SwfThreadOp;
        *puVar6 = (undefined4)((uint)&ghidra_vftable_ExtractArchiveOp);
        puVar6[5] = (uint)&ghidra_vftable_ExtractArchiveOp;
        puVar6[6] = iVar1;
        *(undefined1 *)(puVar6 + 7) = 0;
      }

      thunk_FUN_1115caa0(-(uint)(puVar6 != (undefined4 *)0x0) & (uint)(puVar6 + 5));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10ef8e40; body size 245 bytes.
#line 1 "ENTRY_10ef8e40"

void __thiscall Recovered_Bulk::FUN_10ef8e40(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  void *_Src;
  uint uVar1;
  size_t _Size;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  _Src = (void *)(*(void **)(param_1 + 4));
  local_28 = (undefined4 *)((undefined4 *)0x0);
  local_20 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);
  if (_Src != *(void **)(param_1 + 8)) {
    _Size = (size_t)((int)*(void **)(param_1 + 8) - (int)_Src);
    iVar3 = (int)((int)_Size >> 2);
    local_28 = (undefined4 *)((undefined4 *)thunk_FUN_10ef6280(iVar3));
    local_20 = (undefined4 *)(local_28 + iVar3);
    memmove(local_28,_Src,_Size);
    local_14 = (undefined4 *)(local_28 + iVar3);
  }

  for (puVar2 = (undefined4 *)(local_28); puVar2 != (undefined4 *)(local_14); puVar2 = puVar2 + 1) {
    (*(code *)**(undefined4 **)*puVar2)(1,param_2,param_1,uVar1);
  }
  if (local_28 != (undefined4 *)0x0) {
    uVar1 = (uint)((int)local_20 - (int)local_28 & 0xfffffffc);
    puVar2 = (undefined4 *)(local_28);
    if (0xfff < uVar1) {
      puVar2 = (undefined4 *)((undefined4 *)local_28[-1]);
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (uint)((int)local_28 + (-4 - (int)puVar2))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar2,uVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 10ef9890; body size 73 bytes.
#line 1 "ENTRY_10ef9890"

int * __thiscall Recovered_Bulk::FUN_10ef9890(int *param_2,int *param_3)
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
  return (int *)(param_2);
}


// Reference entry 10ef9930; body size 221 bytes.
#line 1 "ENTRY_10ef9930"

int * __thiscall Recovered_Bulk::FUN_10ef9930(int *param_2,int *param_3)
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

  thunk_FUN_10ef9890(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10efa320(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10ef9a50; body size 221 bytes.
#line 1 "ENTRY_10ef9a50"

int * __thiscall Recovered_Bulk::FUN_10ef9a50(int *param_2,int *param_3)
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

  thunk_FUN_10ef9890(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10efa320(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10ef9e00; body size 111 bytes.
#line 1 "ENTRY_10ef9e00"

void __fastcall FUN_10ef9e00(int param_1)

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


// Reference entry 10ef9f00; body size 188 bytes.
#line 1 "ENTRY_10ef9f00"

int __thiscall Recovered_Bulk::FUN_10ef9f00(int *param_2)
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

  thunk_FUN_10ef9890(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10efa320(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10ef9ff0; body size 188 bytes.
#line 1 "ENTRY_10ef9ff0"

int __thiscall Recovered_Bulk::FUN_10ef9ff0(int *param_2)
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

  thunk_FUN_10ef9890(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10efa320(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10efa100; body size 88 bytes.
#line 1 "ENTRY_10efa100"

int * __thiscall Recovered_Bulk::FUN_10efa100(int *param_2)
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


// Reference entry 10efa920; body size 116 bytes.
#line 1 "ENTRY_10efa920"

uint __thiscall Recovered_Bulk::FUN_10efa920(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 != 3) ||
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 3),
     puVar4 == (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)((undefined4 *)**(undefined4 **)(param_1 + 0x2c));
    while( true ) {
      if (puVar4 == *(undefined4 **)(param_1 + 0x2c)) {
        return (uint)((uint)puVar4 & 0xffffff00);
      }
      if (puVar4[4] == param_2) break;
      puVar2 = (undefined4 *)((undefined4 *)puVar4[2]);
      if (*(char *)((int)puVar2 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)((int)*puVar2 + 0xd));
        puVar4 = (undefined4 *)(puVar2);
        puVar2 = (undefined4 *)((undefined4 *)*puVar2);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)((int)*puVar2 + 0xd));
          puVar4 = (undefined4 *)(puVar2);
          puVar2 = (undefined4 *)((undefined4 *)*puVar2);
        }
      }
      else {
        cVar1 = (char)(*(char *)((int)puVar4[1] + 0xd));
        puVar3 = (undefined4 *)((undefined4 *)puVar4[1]);
        puVar2 = (undefined4 *)(puVar4);
        while ((puVar4 = puVar3, cVar1 == '\0' && (puVar2 == (undefined4 *)puVar4[2]))) {
          cVar1 = (char)(*(char *)((int)puVar4[1] + 0xd));
          puVar3 = (undefined4 *)((undefined4 *)puVar4[1]);
          puVar2 = (undefined4 *)(puVar4);
        }
      }
    }
  }
  return (uint)(((uint)((int3)((uint)puVar4 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 10efabf0; body size 69 bytes.
#line 1 "ENTRY_10efabf0"

void __thiscall Recovered_Bulk::FUN_10efabf0(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10ef9890(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10efac50; body size 69 bytes.
#line 1 "ENTRY_10efac50"

void __thiscall Recovered_Bulk::FUN_10efac50(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10ef9890(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10efb0f0; body size 91 bytes.
#line 1 "ENTRY_10efb0f0"

undefined4 __thiscall Recovered_Bulk::FUN_10efb0f0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c [8];
  int local_4;
  
  iVar1 = (int)(param_2);
  if (param_2 == 3) {
    param_2 = (int)(1);
    uVar2 = (undefined4)(thunk_FUN_10eff900());
    return (undefined4)(uVar2);
  }
  thunk_FUN_10ef9890(local_c,&param_2);
  if (((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= iVar1)) &&
     (local_4 != *(int *)(param_1 + 0x2c))) {
    return (undefined4)(*(undefined4 *)(local_4 + 0x14));
  }
  return (undefined4)(0);
}


// Reference entry 10f010e0; body size 555 bytes.
#line 1 "ENTRY_10f010e0"

void FUN_10f010e0(void)

{
 try {
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  cVar2 = (char)(thunk_FUN_10efa920(0));
  if ((cVar2 != '\0') && (cVar2 = thunk_FUN_10efa920(1), cVar2 != '\0')) {
    local_1c = (int *)((int *)0x0);
    piVar4 = (int *)((int *)thunk_FUN_10ef9f00(&local_1c));
    piVar1 = (int *)((int *)piVar4[1]);
    local_14 = (int)(*piVar4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }



    local_18 = (int *)((int *)thunk_FUN_10ef9f00(&local_24));
    piVar4 = (int *)((int *)thunk_FUN_10ef9f00(&local_28));
    iVar6 = (int)(*local_18);
    if (iVar6 != *piVar4) {
      piVar7 = (int *)((int *)piVar4[1]);
      if (piVar7 != (int *)0x0) {
        *piVar4 = (int)(0);
        piVar4[1] = 0;
        (**(code **)(*piVar7 + 8))();
        iVar6 = (int)(*local_18);
      }
      *piVar4 = (int)(iVar6);
      piVar7 = (int *)((int *)local_18[1]);
      piVar4[1] = (int)piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
    }

    piVar4 = (int *)((int *)thunk_FUN_10ef9f00(&local_28));
    if (local_14 != *piVar4) {
      piVar7 = (int *)((int *)piVar4[1]);
      if (piVar7 != (int *)0x0) {
        *piVar4 = (int)(0);
        piVar4[1] = 0;
        (**(code **)(*piVar7 + 8))();
      }
      *piVar4 = (int)(local_14);
      piVar4[1] = (int)piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }

    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }

  }
  cVar2 = (char)(thunk_FUN_10efa920(2));
  if (cVar2 == '\0') {

    puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10ef9f00(&local_28));
    piVar1 = (int *)((int *)puVar5[1]);
    local_18 = (int *)((int *)*puVar5);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }


    puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10ef9f00(&local_24));
    piVar4 = (int *)((int *)puVar5[1]);
    local_20 = (undefined4)(*puVar5);
    local_1c = (int *)(piVar4);
    local_14 = (int)(local_20);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    cVar2 = (char)(thunk_FUN_10c9b560(2));
    piVar7 = (int *)(local_18);
    if ((cVar2 == '\0') &&
       ((cVar2 = thunk_FUN_10c9b560(2), cVar2 != '\0' ||
        ((cVar2 = thunk_FUN_10c99bc0(), piVar7 = local_18, cVar2 == '\0' &&
         (cVar2 = thunk_FUN_10c99bc0(), piVar7 = local_18, cVar2 != '\0')))))) {
      piVar7 = (int *)((int *)local_14);
    }
    thunk_FUN_10f00f20(piVar7);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }

    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f013a0; body size 326 bytes.
#line 1 "ENTRY_10f013a0"

void FUN_10f013a0(void)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);

  cVar4 = (char)(thunk_FUN_10efa920(4));
  if (cVar4 != '\0') {
    cVar4 = (char)(thunk_FUN_10efa920(5));
    if (cVar4 != '\0') {

      piVar6 = (int *)((int *)thunk_FUN_10ef9f00(&local_18));
      piVar1 = (int *)((int *)piVar6[1]);
      iVar2 = (int)(*piVar6);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar5);
      }



      local_14 = (int *)((int *)thunk_FUN_10ef9f00(&local_1c));
      piVar6 = (int *)((int *)thunk_FUN_10ef9f00(&local_20));
      iVar7 = (int)(*local_14);
      if (iVar7 != *piVar6) {
        piVar3 = (int *)((int *)piVar6[1]);
        if (piVar3 != (int *)0x0) {
          *piVar6 = (int)(0);
          piVar6[1] = 0;
          (**(code **)(*piVar3 + 8))();
          iVar7 = (int)(*local_14);
        }
        *piVar6 = (int)(iVar7);
        piVar3 = (int *)((int *)local_14[1]);
        piVar6[1] = (int)piVar3;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))();
        }
      }

      piVar6 = (int *)((int *)thunk_FUN_10ef9f00(&local_20));
      if (iVar2 != *piVar6) {
        piVar3 = (int *)((int *)piVar6[1]);
        if (piVar3 != (int *)0x0) {
          *piVar6 = (int)(0);
          piVar6[1] = 0;
          (**(code **)(*piVar3 + 8))();
        }
        *piVar6 = (int)(iVar2);
        piVar6[1] = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
      }

      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f016f0; body size 126 bytes.
#line 1 "ENTRY_10f016f0"

undefined1 * __thiscall Recovered_Bulk::FUN_10f016f0(undefined4 *param_2,undefined4 param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
 try {
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pcVar2 = (char *)((char *)*param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (undefined1)(0);
  pcVar3 = (char *)(pcVar2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));

  thunk_FUN_10eaad30(param_3);

  return (undefined1 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f01920; body size 216 bytes.
#line 1 "ENTRY_10f01920"

int * __thiscall Recovered_Bulk::FUN_10f01920(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_106ab8c0(local_1c,param_3));
  iVar6 = (int)(*(int *)(puVar4 + 1));
  uVar1 = (undefined8)(*puVar4);
  if ((*(char *)(iVar6 + 0xd) == '\0') && (*(int *)(iVar6 + 0x10) <= *param_3)) {
    *param_2 = (int)(iVar6);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0xccccccc) {
    uVar2 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar5 = (undefined4 *)(operator_new(0x14));
    puVar5[4] = *param_3;
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar5 = (undefined4)(uVar2);
    local_28 = (undefined4)((undefined4)uVar1);
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    *(undefined2 *)(puVar5 + 3) = 0;
    iVar6 = (int)(thunk_FUN_10f03580(local_28,uStack_24,puVar5));
    *param_2 = (int)(iVar6);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar3);

 } catch (...) { }
}


// Reference entry 10f01c90; body size 69 bytes.
#line 1 "ENTRY_10f01c90"

void __stdcall FUN_10f01c90(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10f01c90(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_10f01e70(param_1,param_2 + 4);
    thunk_FUN_1148a50e(param_2,0x74);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10f01dc0; body size 122 bytes.
#line 1 "ENTRY_10f01dc0"

void FUN_10f01dc0(undefined4 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 param_4)

{
 try {
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pcVar2 = (char *)((char *)*param_3);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (undefined1)(0);
  pcVar3 = (char *)(pcVar2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));

  thunk_FUN_10eaad30(param_4);

  return;

 } catch (...) { }
}


// Reference entry 10f01fe0; body size 192 bytes.
#line 1 "ENTRY_10f01fe0"

void __thiscall Recovered_Bulk::FUN_10f01fe0(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_106ab8c0(local_1c,param_3));
  iVar6 = (int)(*(int *)(puVar4 + 1));
  uVar1 = (undefined8)(*puVar4);
  if ((*(char *)(iVar6 + 0xd) == '\0') && (*(int *)(iVar6 + 0x10) <= *param_3)) {
    uVar7 = (undefined1)(0);
  }
  else {
    if (param_1[1] == 0xccccccc) {
                    
      thunk_FUN_101d7220(uVar3);
    }
    uVar2 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar5 = (undefined4 *)(operator_new(0x14));
    puVar5[4] = *param_3;
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar5 = (undefined4)(uVar2);
    local_28 = (undefined4)((undefined4)uVar1);
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    *(undefined2 *)(puVar5 + 3) = 0;
    iVar6 = (int)(thunk_FUN_10f03580(local_28,uStack_24,puVar5));
    uVar7 = (undefined1)(1);
  }
  *param_2 = (int)(iVar6);
  *(undefined1 *)(param_2 + 1) = uVar7;

  return;

 } catch (...) { }
}


// Reference entry 10f02190; body size 70 bytes.
#line 1 "ENTRY_10f02190"

undefined4 * __thiscall Recovered_Bulk::FUN_10f02190(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar2 = (void *)(operator_new(0x28));
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
  return (undefined4 *)(param_1);
}


// Reference entry 10f02f60; body size 88 bytes.
#line 1 "ENTRY_10f02f60"

void __fastcall FUN_10f02f60(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryHistorySlice);
  thunk_FUN_102bcb30(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x28);
  thunk_FUN_10f01c90(param_1 + 6,*(undefined4 *)(param_1[6] + 4));
  thunk_FUN_1148a50e(param_1[6],0x74);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f03110; body size 110 bytes.
#line 1 "ENTRY_10f03110"

undefined4 * __thiscall Recovered_Bulk::FUN_10f03110(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDiscoveryHistorySlice);
  thunk_FUN_102bcb30(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x28);
  thunk_FUN_10f01c90(param_1 + 6,*(undefined4 *)(param_1[6] + 4));
  thunk_FUN_1148a50e(param_1[6],0x74);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f03a30; body size 302 bytes.
#line 1 "ENTRY_10f03a30"

void __thiscall Recovered_Bulk::FUN_10f03a30(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_102bcc90(local_1c,&param_2));
  uVar9 = (uint)(in_stack_00000018);
  puVar7 = (undefined4 *)(param_2);
  iVar6 = (int)(*(int *)(puVar4 + 1));
  uVar1 = (undefined8)(*puVar4);
  if (*(char *)(iVar6 + 0xd) == '\0') {
    iVar8 = (int)(iVar6 + 0x10);
    if (0xf < *(uint *)(iVar6 + 0x24)) {
      iVar8 = (int)(*(int *)(iVar6 + 0x10));
    }
    puVar5 = (undefined4 *)(&param_2);
    if (0xf < in_stack_00000018) {
      puVar5 = (undefined4 *)(param_2);
    }
    iVar6 = (int)(thunk_FUN_102bce30(puVar5,in_stack_00000014,iVar8,*(undefined4 *)(iVar6 + 0x20),uVar3));
    if (-1 < iVar6) goto LAB_10f03b13;
  }
  if (*(int *)(param_1 + 0x24) == 0x6666666) {
                    
    thunk_FUN_101d7220();
  }
  uVar2 = (undefined4)(*(undefined4 *)(param_1 + 0x20));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  local_14 = (undefined4 *)((undefined4 *)0x0);
  local_18 = (undefined4 *)((undefined4 *)(param_1 + 0x20));
  puVar7 = (undefined4 *)(operator_new(0x28));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  local_14 = (undefined4 *)(puVar7);
  thunk_FUN_10118c40(&param_2);
  uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
  *puVar7 = (undefined4)(uVar2);
  local_28 = (undefined4)((undefined4)uVar1);
  puVar7[1] = uVar2;
  puVar7[2] = uVar2;
  *(undefined2 *)(puVar7 + 3) = 0;
  thunk_FUN_102be180(local_28,uStack_24,puVar7);
  puVar7 = (undefined4 *)(param_2);
  uVar9 = (uint)(in_stack_00000018);
LAB_10f03b13:
  if (0xf < uVar9) {
    uVar3 = (uint)(uVar9 + 1);
    puVar5 = (undefined4 *)(puVar7);
    if (0xfff < uVar3) {
      puVar5 = (undefined4 *)((undefined4 *)puVar7[-1]);
      uVar3 = (uint)(uVar9 + 0x24);
      if (0x1f < (uint)((int)puVar7 + (-4 - (int)puVar5))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar5,uVar3);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f03bb0; body size 70 bytes.
#line 1 "ENTRY_10f03bb0"

void __stdcall FUN_10f03bb0(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 local_8 [4];
  char local_4;
  
  puVar2 = (undefined4 *)(param_1);
  puVar1 = (undefined1 *)((undefined1 *)*param_1);
  param_1 = (undefined4 *)((undefined4 *)&DAT_1186d2ee);
  if (puVar1 != (undefined1 *)0x0) {
    param_1 = (undefined4 *)((undefined4 *)puVar1);
  }
  thunk_FUN_10f01a30(local_8,&param_1,puVar2);
  if (local_4 == '\0') {
    thunk_FUN_10f04850(puVar2);
  }
  return;
}


// Reference entry 10f03c10; body size 241 bytes.
#line 1 "ENTRY_10f03c10"

void __thiscall Recovered_Bulk::FUN_10f03c10(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 local_1c [4];
  char local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) {
    uVar4 = (undefined8)(thunk_FUN_1034d9a0(0x1f));
    uVar4 = (undefined8)(__alldiv(uVar4,1000,0));
    iVar3 = (int)((int)((ulonglong)uVar4 >> 0x20));
    if ((*(int *)(param_1 + 0x14) < iVar3) ||
       ((*(int *)(param_1 + 0x14) <= iVar3 && (*(uint *)(param_1 + 0x10) < (uint)uVar4))))
    goto LAB_10f03ccd;
  }
  piVar5 = (int *)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_2,param_3,uVar1);
  }
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10f024a0(param_2,piVar5));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  local_14 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    local_14 = (undefined1 *)((undefined1 *)*puVar2);
  }
  thunk_FUN_10f01a30(local_1c,&local_14,puVar2);
  if (local_18 == '\0') {
    thunk_FUN_10f04850(puVar2);
  }
  thunk_FUN_108754f0();
LAB_10f03ccd:

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f04710; body size 170 bytes.
#line 1 "ENTRY_10f04710"

undefined4 __thiscall Recovered_Bulk::FUN_10f04710(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_1037a2b0(&local_14,DAT_12126b84 ));
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
  (**(code **)(*piVar1 + 0x1b8))(param_2,param_1 + 4);

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10f05020; body size 204 bytes.
#line 1 "ENTRY_10f05020"

undefined1 FUN_10f05020(void)

{
 try {
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uStack_38;
  int **ppiStack_34;
  uint uStack_30;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_30 = (uint)(DAT_12126b84);

  ppiStack_34 = (int **)((int **)0x10f05052);
  thunk_FUN_105ad900();
  ppiStack_34 = (int **)(&local_14);

  thunk_FUN_10cf34e0();
  piVar2 = (int *)(local_14);

  local_14 = (int *)((int *)0x0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    ppiStack_34 = (int **)((int **)0x10f0507e);
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar3 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    ppiStack_34 = (int **)((int **)0x10f05097);
    (**(code **)(*local_14 + 8))();
    uVar3 = (undefined4)(extraout_ECX);
  }
  ppiStack_34 = (int **)((int **)0x1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  uStack_38 = (undefined4)(uVar3);
  thunk_FUN_10c98710(&uStack_38);
  cVar1 = (char)(thunk_FUN_106c9eb0());
  if (cVar1 != '\0') {
    ppiStack_34 = (int **)((int **)0x10f050bc);
    cVar1 = (char)(thunk_FUN_10da1650());
    if (cVar1 == '\0') {
      uVar4 = (undefined1)(1);
      goto LAB_10f050c6;
    }
  }
  uVar4 = (undefined1)(0);
LAB_10f050c6:

  if (piVar2 != (int *)0x0) {
    ppiStack_34 = (int **)((int **)0x10f050d8);
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined1)(uVar4);

 } catch (...) { }
}


// Reference entry 10f05380; body size 216 bytes.
#line 1 "ENTRY_10f05380"

undefined1 FUN_10f05380(void)

{
 try {
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  bVar1 = (bool)(false);
  cVar2 = (char)(thunk_FUN_10da1740(DAT_12126b84 ));
  if (((cVar2 == '\0') && (cVar2 = thunk_FUN_10da1830(), cVar2 != '\0')) &&
     (cVar2 = thunk_FUN_10da1e80(), cVar2 != '\0')) {
    thunk_FUN_105ad900();
    thunk_FUN_10cf34e0(&local_14);
    bVar1 = (bool)(true);

    if ((local_14 != (int *)0x0) ||
       (((cVar2 = thunk_FUN_10da15c0(), cVar2 != '\0' &&
         (cVar2 = thunk_FUN_10da1530(), cVar2 == '\0')) &&
        (cVar2 = thunk_FUN_10da1450(), cVar2 == '\0')))) {
      uVar3 = (undefined1)(1);
      goto LAB_10f05428;
    }
  }
  uVar3 = (undefined1)(0);
LAB_10f05428:
  if ((bVar1) && (local_8 = 1, local_14 != (int *)0x0)) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 10f054f0; body size 194 bytes.
#line 1 "ENTRY_10f054f0"

undefined1 FUN_10f054f0(void)

{
 try {
  char cVar1;
  undefined1 uVar2;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar1 = (char)(thunk_FUN_10da1740(DAT_12126b84 ));
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da15c0());
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_10da1370());
      if (cVar1 != '\0') {
        thunk_FUN_105ad900();
        thunk_FUN_107558b0(&local_18);


        cVar1 = (char)(thunk_FUN_10da1c70(local_18));
        if (cVar1 != '\0') {
          cVar1 = (char)(thunk_FUN_10da1e80());
          if (cVar1 != '\0') {
            uVar2 = (undefined1)(1);
            goto LAB_10f0557f;
          }
        }
      }
    }
  }
  uVar2 = (undefined1)(0);
LAB_10f0557f:
  if ((local_14 & 1) != 0) {

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10f055f0; body size 214 bytes.
#line 1 "ENTRY_10f055f0"

undefined1 __fastcall FUN_10f055f0(int param_1)

{
 try {
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_105ad900(DAT_12126b84 );
  thunk_FUN_10cf34e0(&local_14);
  piVar2 = (int *)(local_14);

  local_14 = (int *)((int *)0x0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10da1cd0());
  if (cVar1 != '\0') {
    cVar1 = (char)(thunk_FUN_10da15c0());
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_10da1370());
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10da1c70(*(undefined4 *)(param_1 + 0x18)));
        if (cVar1 != '\0') {
          uVar3 = (undefined1)(1);
          goto LAB_10f056a0;
        }
      }
    }
  }
  uVar3 = (undefined1)(0);
LAB_10f056a0:

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 10f05720; body size 194 bytes.
#line 1 "ENTRY_10f05720"

undefined1 FUN_10f05720(void)

{
 try {
  char cVar1;
  undefined1 uVar2;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar1 = (char)(thunk_FUN_10da1740(DAT_12126b84 ));
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da15c0());
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_10da1370());
      if (cVar1 != '\0') {
        thunk_FUN_105ad900();
        thunk_FUN_107af2b0(&local_18);


        cVar1 = (char)(thunk_FUN_10da1c70(local_18));
        if (cVar1 != '\0') {
          cVar1 = (char)(thunk_FUN_10da1e80());
          if (cVar1 != '\0') {
            uVar2 = (undefined1)(1);
            goto LAB_10f057af;
          }
        }
      }
    }
  }
  uVar2 = (undefined1)(0);
LAB_10f057af:
  if ((local_14 & 1) != 0) {

    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10f05890; body size 75 bytes.
#line 1 "ENTRY_10f05890"

undefined1 FUN_10f05890(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1740());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da1e80());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
    cVar1 = (char)(thunk_FUN_10da1370());
    if (((cVar1 != '\0') && (cVar1 = thunk_FUN_10da1830(), cVar1 != '\0')) &&
       (cVar1 = thunk_FUN_10da15c0(), cVar1 == '\0')) {
      return (undefined1)(1);
    }
    cVar1 = (char)(thunk_FUN_10f0b5e0());
    if (cVar1 != '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f05940; body size 64 bytes.
#line 1 "ENTRY_10f05940"

undefined1 FUN_10f05940(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1740());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da1e80());
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_10da1370());
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10da1830());
        if (cVar1 != '\0') {
          cVar1 = (char)(thunk_FUN_10da15c0());
          if (cVar1 == '\0') {
            return (undefined1)(1);
          }
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f05990; body size 219 bytes.
#line 1 "ENTRY_10f05990"

undefined1 FUN_10f05990(void)

{
 try {
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined1 uVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_105ad900(DAT_12126b84 );
  thunk_FUN_10a0bf70(&local_14);
  piVar1 = (int *)(local_14);

  local_14 = (int *)((int *)0x0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar2 = (char)(thunk_FUN_10da1740());
  if (cVar2 == '\0') {
    cVar2 = (char)(thunk_FUN_10da15c0());
    if (cVar2 == '\0') {
      cVar2 = (char)(thunk_FUN_10da1370());
      if (cVar2 != '\0') {
        cVar2 = (char)(thunk_FUN_10da1c70(piVar1));
        if (cVar2 != '\0') {
          cVar2 = (char)(thunk_FUN_10da1e80());
          if (cVar2 != '\0') {
            uVar4 = (undefined1)(1);
            goto LAB_10f05a45;
          }
        }
      }
    }
  }
  uVar4 = (undefined1)(0);
LAB_10f05a45:

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined1)(uVar4);

 } catch (...) { }
}


// Reference entry 10f05df0; body size 168 bytes.
#line 1 "ENTRY_10f05df0"

undefined4 __stdcall FUN_10f05df0(undefined4 param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_105ad900(DAT_12126b84 );
  piVar1 = (int *)((int *)thunk_FUN_107998f0(&local_14));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10efb220(param_1);

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10f05ed0; body size 230 bytes.
#line 1 "ENTRY_10f05ed0"

undefined4 FUN_10f05ed0(void)

{
 try {
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_105ad900(DAT_12126b84 );
  thunk_FUN_10cf34e0(&local_14);
  piVar1 = (int *)(local_14);

  local_14 = (int *)((int *)0x0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar4 = (undefined4)(5);
  }
  else {
    cVar2 = (char)(thunk_FUN_106ca170(piVar1));
    if (cVar2 == '\0') {
      cVar2 = (char)(thunk_FUN_10c9a420());
      if (cVar2 == '\0') {
        cVar2 = (char)(thunk_FUN_10c9b1e0());
        uVar4 = (undefined4)(5);
        if (cVar2 == '\0') {
          uVar4 = (undefined4)(4);
        }
      }
      else {
        uVar4 = (undefined4)(3);
      }
    }
    else {
      uVar4 = (undefined4)(2);
    }
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10f06000; body size 176 bytes.
#line 1 "ENTRY_10f06000"

undefined4 FUN_10f06000(void)

{
 try {
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)thunk_FUN_1037a2b0(&local_14,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 != (int *)0x0) {
    cVar2 = (char)((**(code **)(*piVar1 + 0x16c))());
    uVar4 = (undefined4)(7);
    if (cVar2 == '\0') goto LAB_10f0608b;
  }
  uVar4 = (undefined4)(6);
LAB_10f0608b:

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10f06140; body size 281 bytes.
#line 1 "ENTRY_10f06140"

undefined4 FUN_10f06140(void)

{
 try {
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_105ad900(DAT_12126b84 );
  thunk_FUN_107af2b0(&local_14);

  uVar2 = (undefined4)(thunk_FUN_10c96760());

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  cVar1 = (char)(thunk_FUN_114577f0(uVar2));
  if (cVar1 != '\0') {

    return (undefined4)(4);
  }
  thunk_FUN_105ad900();
  iVar3 = (int)(thunk_FUN_10799310());
  if (iVar3 != 2) {
    thunk_FUN_105ad900();
    iVar3 = (int)(thunk_FUN_10799310());
    if (iVar3 != 5) {
      thunk_FUN_105ad900();
      iVar3 = (int)(thunk_FUN_10799310());
      if (iVar3 == 1) {
        thunk_FUN_105ad900();
        cVar1 = (char)(thunk_FUN_107cccd0());
        if (cVar1 != '\0') {

          return (undefined4)(0xe);
        }
      }

      return (undefined4)(5);
    }
  }

  return (undefined4)(6);

 } catch (...) { }
}


// Reference entry 10f06560; body size 121 bytes.
#line 1 "ENTRY_10f06560"

undefined4 * __thiscall Recovered_Bulk::FUN_10f06560(undefined4 *param_2)
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

  pvVar2 = (void *)(operator_new(0x20));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_1059df80(*(undefined4 *)(param_1 + 0x10),10));
  }

  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f06600; body size 278 bytes.
#line 1 "ENTRY_10f06600"

undefined4 FUN_10f06600(void)

{
 try {
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *local_1c [2];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_105ad900(DAT_12126b84 );
  thunk_FUN_10cf34e0(&local_14);
  piVar1 = (int *)(local_14);

  local_14 = (int *)((int *)0x0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (undefined4)(thunk_FUN_10436cd0(local_1c));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_102253f0(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_1c[0] != (int *)0x0) {
      (**(code **)(*local_1c[0] + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    uVar4 = (undefined4)(thunk_FUN_10c97670());
    uVar5 = (undefined4)(thunk_FUN_10c97650(uVar4));
    cVar2 = (char)(thunk_FUN_104379a0(uVar5,uVar4));
    if (cVar2 != '\0') {
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      uVar4 = (undefined4)(1);
      goto LAB_10f066f1;
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  uVar4 = (undefined4)(5);
LAB_10f066f1:

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10f0b390; body size 101 bytes.
#line 1 "ENTRY_10f0b390"

bool FUN_10f0b390(void)

{
 try {
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_105ad900(DAT_12126b84 );
  thunk_FUN_10cf34e0(&local_14);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (bool)(local_14 != (int *)0x0);

 } catch (...) { }
}


// Reference entry 10f0b500; body size 175 bytes.
#line 1 "ENTRY_10f0b500"

bool FUN_10f0b500(void)

{
 try {
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_105ad900(DAT_12126b84 );
  iVar1 = (int)(thunk_FUN_10618bf0());
  if (iVar1 == 1) {

    return (bool)(false);
  }
  uVar2 = (undefined4)(thunk_FUN_10cf34e0(&local_14));

  thunk_FUN_10351370(uVar2);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  return (bool)(local_1c != 0);

 } catch (...) { }
}


// Reference entry 10f0bc40; body size 67 bytes.
#line 1 "ENTRY_10f0bc40"

undefined1 __fastcall FUN_10f0bc40(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1740());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da15c0());
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_10da1370());
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10da1c70(*(undefined4 *)(param_1 + 0x10)));
        if (cVar1 != '\0') {
          cVar1 = (char)(thunk_FUN_10da1e80());
          if (cVar1 != '\0') {
            return (undefined1)(1);
          }
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f0d4e0; body size 114 bytes.
#line 1 "ENTRY_10f0d4e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f0d4e0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f0d5a0; body size 114 bytes.
#line 1 "ENTRY_10f0d5a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f0d5a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f0d630; body size 114 bytes.
#line 1 "ENTRY_10f0d630"

undefined4 * __thiscall Recovered_Bulk::FUN_10f0d630(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f0d720; body size 278 bytes.
#line 1 "ENTRY_10f0d720"

undefined4 * __thiscall Recovered_Bulk::FUN_10f0d720(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f0d880; body size 278 bytes.
#line 1 "ENTRY_10f0d880"

undefined4 * __thiscall Recovered_Bulk::FUN_10f0d880(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f0d9e0; body size 278 bytes.
#line 1 "ENTRY_10f0d9e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f0d9e0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f0de40; body size 154 bytes.
#line 1 "ENTRY_10f0de40"

undefined4 * __fastcall FUN_10f0de40(undefined4 *param_1)

{
  thunk_FUN_1124a200("multipart/form-data; boundary=SONOSMULTIPARTBOUNDARY.BLAHBLAHBLAH",0);
  param_1[0x1883] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1884] = 0;
  param_1[0x1885] = 0;
  param_1[0x1886] = 0;
  *(undefined2 *)(param_1 + 0x1887) = 1;
  *(undefined1 *)((int)param_1 + 0x621e) = 0;
  param_1[0x1888] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDiagnosticsSubmitFileRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RDiagnosticsSubmitFileRequest;
  param_1[0x1889] = 0;
  param_1[0x188e] = 0;
  param_1[0x188f] = 0xf;
  *(undefined1 *)(param_1 + 0x188a) = 0;
  param_1[0x1890] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10f0e410; body size 112 bytes.
#line 1 "ENTRY_10f0e410"

undefined4 * __fastcall FUN_10f0e410(undefined4 *param_1)

{
  thunk_FUN_1124a160(0);
  param_1[0x1843] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1844] = 0;
  param_1[0x1845] = 0;
  param_1[0x1846] = 0;
  *(undefined2 *)(param_1 + 0x1847) = 1;
  *(undefined1 *)((int)param_1 + 0x611e) = 0;
  param_1[0x1848] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetLocalSupportDocumentRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RGetLocalSupportDocumentRequest;
  param_1[0x1849] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10f0e9a0; body size 330 bytes.
#line 1 "ENTRY_10f0e9a0"

undefined4 * __fastcall FUN_10f0e9a0(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x188f0));

  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_10f0db80(uVar2));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650();
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpControllerOnlySubmitDirectDiagnostics);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpControllerOnlySubmitDirectDiagnostics);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f0ed10; body size 335 bytes.
#line 1 "ENTRY_10f0ed10"

undefined4 * __thiscall Recovered_Bulk::FUN_10f0ed10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x187dc));

  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_10f0e660(param_2));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSubmitDirectDiagnostics);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpSubmitDirectDiagnostics);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f0f320; body size 76 bytes.
#line 1 "ENTRY_10f0f320"

void __fastcall FUN_10f0f320(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f0fb30; body size 255 bytes.
#line 1 "ENTRY_10f0fb30"

/* WARNING: Removing unreachable block (ram,0x10f0fbfb) */
/* WARNING: Removing unreachable block (ram,0x10f0fc0b) */
/* WARNING: Removing unreachable block (ram,0x10f0fc0f) */

void __fastcall FUN_10f0fb30(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubmitDiagnosticsAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RSubmitDiagnosticsAIOOp;
  if ((param_1[9] != 0) && ((int *)param_1[8] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[8] + 0x10))(uVar2);
    puVar1 = (undefined4 *)((undefined4 *)param_1[8]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[8] = 0;
    param_1[9] = 0;
  }

  param_1[7] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  if ((int *)param_1[8] != (int *)0x0) {
    if (param_1[9] != 0) {
      (**(code **)(*(int *)param_1[8] + 0x10))();
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[8]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[8] = 0;
    param_1[9] = 0;
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 10f10770; body size 76 bytes.
#line 1 "ENTRY_10f10770"

void __fastcall FUN_10f10770(int param_1)

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


// Reference entry 10f107d0; body size 76 bytes.
#line 1 "ENTRY_10f107d0"

void __fastcall FUN_10f107d0(int param_1)

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


// Reference entry 10f10830; body size 76 bytes.
#line 1 "ENTRY_10f10830"

void __fastcall FUN_10f10830(int param_1)

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


// Reference entry 10f10890; body size 70 bytes.
#line 1 "ENTRY_10f10890"

void __fastcall FUN_10f10890(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int **)(param_1 + 0x20) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


// Reference entry 10f108f0; body size 149 bytes.
#line 1 "ENTRY_10f108f0"

void __thiscall Recovered_Bulk::FUN_10f108f0(int *param_2,undefined4 param_3)
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


// Reference entry 10f109d0; body size 149 bytes.
#line 1 "ENTRY_10f109d0"

void __thiscall Recovered_Bulk::FUN_10f109d0(int *param_2,undefined4 param_3)
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


// Reference entry 10f10ab0; body size 149 bytes.
#line 1 "ENTRY_10f10ab0"

void __thiscall Recovered_Bulk::FUN_10f10ab0(int *param_2,undefined4 param_3)
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


// Reference entry 10f10f60; body size 182 bytes.
#line 1 "ENTRY_10f10f60"

void __stdcall FUN_10f10f60(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  thunk_FUN_1012cdb0("--SONOSMULTIPARTBOUNDARY.BLAHBLAHBLAH\r\n",0x27);
  thunk_FUN_1012cdb0("Content-Disposition: form-data; name=\"",0x26);
  pcVar3 = (char *)("");
  if ((char *)*param_1 != (char *)0x0) {
    pcVar3 = (char *)((char *)*param_1);
  }
  pcVar2 = (char *)(pcVar3);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012cdb0(pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  thunk_FUN_1012cdb0(&DAT_1194d418,3);
  thunk_FUN_1012cdb0("Content-Type: text/plain; charset=UTF-8\r\n",0x29);
  thunk_FUN_1012cdb0(&DAT_1188d36c,2);
  pcVar3 = (char *)("");
  if ((char *)*param_2 != (char *)0x0) {
    pcVar3 = (char *)((char *)*param_2);
  }
  pcVar2 = (char *)(pcVar3);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012cdb0(pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  thunk_FUN_1012cdb0(&DAT_1188d36c,2);
  return;
}


// Reference entry 10f11060; body size 397 bytes.
#line 1 "ENTRY_10f11060"

void __fastcall FUN_10f11060(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 200) != 0) && (*(int **)(param_1 + 0xc4) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xc4) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if ((*(int *)(param_1 + 0xd8) != 0) && (*(int **)(param_1 + 0xd4) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xd4) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xd4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if ((*(int *)(param_1 + 0x631c) != 0) && (*(int **)(param_1 + 0x6318) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6318) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6318));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6318) = 0;
    *(undefined4 *)(param_1 + 0x631c) = 0;
  }
  if ((*(int *)(param_1 + 0xc454) != 0) && (*(int **)(param_1 + 0xc450) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xc450) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc450));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0xc450) = 0;
    *(undefined4 *)(param_1 + 0xc454) = 0;
  }
  if ((*(int *)(param_1 + 0x126a8) != 0) && (*(int **)(param_1 + 0x126a4) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x126a4) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x126a4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x126a4) = 0;
    *(undefined4 *)(param_1 + 0x126a8) = 0;
  }
  return;
}


// Reference entry 10f11250; body size 70 bytes.
#line 1 "ENTRY_10f11250"

void __fastcall FUN_10f11250(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int **)(param_1 + 0x20) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


// Reference entry 10f112b0; body size 304 bytes.
#line 1 "ENTRY_10f112b0"

void __fastcall FUN_10f112b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int **)(param_1 + 0x20) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if ((*(int *)(param_1 + 0x621c) != 0) && (*(int **)(param_1 + 0x6218) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6218) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6218));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6218) = 0;
    *(undefined4 *)(param_1 + 0x621c) = 0;
  }
  if ((*(int *)(param_1 + 0xc354) != 0) && (*(int **)(param_1 + 50000) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 50000) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 50000));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 50000) = 0;
    *(undefined4 *)(param_1 + 0xc354) = 0;
  }
  if ((*(int *)(param_1 + 0x125a8) != 0) && (*(int **)(param_1 + 0x125a4) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x125a4) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x125a4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x125a4) = 0;
    *(undefined4 *)(param_1 + 0x125a8) = 0;
  }
  return;
}


// Reference entry 10f11430; body size 150 bytes.
#line 1 "ENTRY_10f11430"

void __thiscall Recovered_Bulk::FUN_10f11430(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (param_2 != *(int *)(param_1 + 0x30)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x34));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    *(int *)(param_1 + 0x30) = param_2;
    *(int **)(param_1 + 0x34) = param_3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f115e0; body size 74 bytes.
#line 1 "ENTRY_10f115e0"

int __fastcall FUN_10f115e0(int param_1)

{
  int iVar1;
  char cVar2;
  int local_4;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  local_4 = (int)(param_1);
  cVar2 = (char)(thunk_FUN_1145c460(iVar1 + 0x28,&local_4));
  if ((((cVar2 != '\0') && (*(int *)(iVar1 + 0x6310) == 200)) && (*(int *)(iVar1 + 0xc448) == 200))
     && (*(int *)(iVar1 + 0x1269c) == 200)) {
    return (int)(local_4);
  }
  return (int)(0);
}


// Reference entry 10f11660; body size 65 bytes.
#line 1 "ENTRY_10f11660"

int __fastcall FUN_10f11660(int param_1)

{
  int iVar1;
  char cVar2;
  int local_4;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  local_4 = (int)(param_1);
  cVar2 = (char)(thunk_FUN_1145c460(iVar1 + 0x617c,&local_4));
  if (((cVar2 != '\0') && (*(int *)(iVar1 + 0xc348) == 200)) && (*(int *)(iVar1 + 0x1259c) == 200))
  {
    return (int)(local_4);
  }
  return (int)(0);
}


// Reference entry 10f12d30; body size 70 bytes.
#line 1 "ENTRY_10f12d30"

undefined4 __thiscall Recovered_Bulk::FUN_10f12d30(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x20) + 8))());
      goto LAB_10f12d52;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0x24));
LAB_10f12d52:
  if (iVar2 == param_2) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return (undefined4)(1);
  }
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x24) >> 8)) << 8 | (uint)(*(int *)(param_1 + 0x24) == 0)));
}


// Reference entry 10f13680; body size 128 bytes.
#line 1 "ENTRY_10f13680"

void __fastcall FUN_10f13680(int param_1)

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


// Reference entry 10f13720; body size 128 bytes.
#line 1 "ENTRY_10f13720"

void __fastcall FUN_10f13720(int param_1)

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


// Reference entry 10f137c0; body size 128 bytes.
#line 1 "ENTRY_10f137c0"

void __fastcall FUN_10f137c0(int param_1)

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


// Reference entry 10f13920; body size 232 bytes.
#line 1 "ENTRY_10f13920"

void __thiscall Recovered_Bulk::FUN_10f13920(undefined4 param_2,undefined4 param_3)
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
    (**(code **)(*piVar1 + 0x48))();
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


// Reference entry 10f13a50; body size 232 bytes.
#line 1 "ENTRY_10f13a50"

void __thiscall Recovered_Bulk::FUN_10f13a50(undefined4 param_2,undefined4 param_3)
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
    (**(code **)(*piVar1 + 0x48))();
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


// Reference entry 10f13b80; body size 232 bytes.
#line 1 "ENTRY_10f13b80"

void __thiscall Recovered_Bulk::FUN_10f13b80(undefined4 param_2,undefined4 param_3)
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
    (**(code **)(*piVar1 + 0x48))();
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


// Reference entry 10f14020; body size 76 bytes.
#line 1 "ENTRY_10f14020"

undefined4 __thiscall Recovered_Bulk::FUN_10f14020(void *param_2,uint param_3,size_t *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 != (void *)0x0) {
    uVar1 = (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x34));
    if (uVar1 < param_3) {
      param_3 = (uint)(uVar1);
    }
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x1c));
    if (0xf < *(uint *)(param_1 + 0x30)) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    }
    memcpy(param_2,(void *)((int)puVar2 + *(int *)(param_1 + 0x34)),param_3);
    *param_4 = (size_t)(param_3);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_3;
  }
  return (undefined4)(((uint)((int3)(*(uint *)(param_1 + 0x34) >> 8)) << 8 | (uint)(*(uint *)(param_1 + 0x34) < *(uint *)(param_1 + 0x2c))));
}


// Reference entry 10f141f0; body size 99 bytes.
#line 1 "ENTRY_10f141f0"

int __thiscall Recovered_Bulk::FUN_10f141f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  thunk_FUN_1124ffa0("IncludeControllers",0);
  thunk_FUN_1124f3c0(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0(&DAT_1194cfd4,0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  iVar2 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("DiagnosticID");
  thunk_FUN_112504b0(iVar2);
  return (int)(param_1);
}


// Reference entry 10f14270; body size 96 bytes.
#line 1 "ENTRY_10f14270"

undefined4 __thiscall Recovered_Bulk::FUN_10f14270(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  *(bool *)param_2 = (undefined4)(*(char *)(param_1 + 0x18) == '\0');
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x28));
  }
  thunk_FUN_1145c250(param_3,puVar1,0x19);
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
  }
  thunk_FUN_1145c250(param_4,puVar1,0x21);
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x24) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x24));
  }
  thunk_FUN_1145c250(param_5,puVar1,0x11);
  return (undefined4)(1);
}


// Reference entry 10f14470; body size 296 bytes.
#line 1 "ENTRY_10f14470"

void __fastcall FUN_10f14470(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x4494));

  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x6160) != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6160));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 + 0x28 != 0) & param_1 + 0x6134U,param_1 + 0x28,puVar5,10000,
                       10000,0,0);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
    puVar2[0x18] = (uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp;
    *(undefined1 *)(puVar2 + 0x1124) = 0;
  }
  piVar6 = (int *)(*(int **)(param_1 + 0x20));

  if (piVar6 != (int *)0x0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      (**(code **)(*piVar6 + 0x10))(uVar1);
      piVar6 = (int *)(*(int **)(param_1 + 0x20));
    }
    if (piVar6 != (int *)0x0) {
      iVar3 = (int)(thunk_FUN_1123fcd0(piVar6 + 1));
      if (iVar3 == 0) {
        (**(code **)*piVar6)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 **)(param_1 + 0x20) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(puVar2 + 1);
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 4))(-(uint)(param_1 != 0) & param_1 + 8U,0));
      *(undefined4 *)(param_1 + 0x24) = uVar4;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f14aa0; body size 312 bytes.
#line 1 "ENTRY_10f14aa0"

void __fastcall FUN_10f14aa0(int param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(thunk_FUN_110828b0(DAT_12126b84 ));
  iVar1 = (int)((*(code *)**(undefined4 **)(iVar1 + 0x1c))());
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(operator_new(0xd7d8));

    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      uVar5 = (uint)(-(uint)(*(int *)(iVar1 + 0x1c) != 0) & *(int *)(iVar1 + 0x1c) + 0x1430U);
      uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(uVar5 + 4) + 4) + 4 + uVar5) + 0x48))());
      uVar9 = (undefined4)(0);
      uVar8 = (undefined4)(0);
      uVar7 = (undefined4)(2000);
      uVar6 = (undefined4)(60000);
      uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(uVar5 + 4) + 4) + 4 + uVar5) + 0x50))
                        (60000,2000,0,0));
      thunk_FUN_111c0760(uVar3,"urn:schemas-upnp-org:service:ZoneGroupTopology:1",
                         "SubmitDiagnostics",uVar4,uVar6,uVar7,uVar8,uVar9);
      *puVar2 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
      puVar2[0x18] = (uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp;
      puVar2[0x11b] = (uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp;
      puVar2[0x35f4] = 0;
    }

    thunk_FUN_10f141f0(1,&DAT_1194d14c);
    thunk_FUN_102207b0(puVar2,-(uint)(param_1 != 0) & param_1 + 8U,0);

    return;
  }
  thunk_FUN_10f14890();

  return;

 } catch (...) { }
}


// Reference entry 10f14c30; body size 366 bytes.
#line 1 "ENTRY_10f14c30"

void __fastcall FUN_10f14c30(int param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xd7d8));

  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    iVar3 = (int)(thunk_FUN_110828b0(uVar1));
    iVar3 = (int)((*(code *)**(undefined4 **)(iVar3 + 0x1c))());
    uVar1 = (uint)(-(uint)(*(int *)(iVar3 + 0x1c) != 0) & *(int *)(iVar3 + 0x1c) + 0x1430U);
    uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(uVar1 + 4) + 4) + 4 + uVar1) + 0x48))());
    uVar10 = (undefined4)(0);
    uVar9 = (undefined4)(0);
    uVar8 = (undefined4)(2000);
    uVar7 = (undefined4)(360000);
    uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(uVar1 + 4) + 4) + 4 + uVar1) + 0x50))
                      (360000,2000,0,0));
    thunk_FUN_111c0760(uVar4,"urn:schemas-upnp-org:service:ZoneGroupTopology:1","SubmitDiagnostics",
                       uVar5,uVar7,uVar8,uVar9,uVar10);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
    puVar2[0x18] = (uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp;
    puVar2[0x11b] = (uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp;
    puVar2[0x35f4] = 0;
  }

  thunk_FUN_10f141f0(1,&DAT_1194d14c);
  piVar6 = (int *)(*(int **)(param_1 + 0x20));
  if (piVar6 != (int *)0x0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      (**(code **)(*piVar6 + 0x10))();
      piVar6 = (int *)(*(int **)(param_1 + 0x20));
    }
    if (piVar6 != (int *)0x0) {
      iVar3 = (int)(thunk_FUN_1123fcd0(piVar6 + 1));
      if (iVar3 == 0) {
        (**(code **)*piVar6)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 **)(param_1 + 0x20) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(puVar2 + 1);
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 4))(-(uint)(param_1 != 0) & param_1 + 8U,0));
      *(undefined4 *)(param_1 + 0x24) = uVar4;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f14e00; body size 211 bytes.
#line 1 "ENTRY_10f14e00"

void __fastcall FUN_10f14e00(int param_1)

{
 try {
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0x4494));

  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x6160) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6160));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 + 0x28 != 0) & param_1 + 0x6134U,param_1 + 0x28,puVar2,10000,
                       10000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp;
    *(undefined1 *)(puVar1 + 0x1124) = 0;
  }

  thunk_FUN_102207b0(puVar1,-(uint)(param_1 != 0) & param_1 + 8U,0);

  return;

 } catch (...) { }
}


// Reference entry 10f151b0; body size 227 bytes.
#line 1 "ENTRY_10f151b0"

void __fastcall FUN_10f151b0(int param_1)

{
 try {
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10f120f0(param_1 + 0x20,param_1 + 0x1c,param_1 + 0xc440);
  puVar1 = (undefined4 *)(operator_new(0x4490));

  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x1267c) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1267c));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 != -0xc458) & param_1 + 0x12664U,param_1 + 0xc458,puVar2,
                       60000,10000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp;
  }

  thunk_FUN_102207b0(puVar1,-(uint)(param_1 != 0) & param_1 + 8U,0);

  return;

 } catch (...) { }
}


// Reference entry 10f152d0; body size 233 bytes.
#line 1 "ENTRY_10f152d0"

void __fastcall FUN_10f152d0(int param_1)

{
 try {
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10f120f0(param_1 + 0x6174,param_1 + 0x6170,param_1 + 0xc340);
  puVar1 = (undefined4 *)(operator_new(0x4490));

  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x1257c) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1257c));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 != -0xc358) & param_1 + 0x12564U,param_1 + 0xc358,puVar2,
                       60000,10000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp;
  }

  thunk_FUN_102207b0(puVar1,-(uint)(param_1 != 0) & param_1 + 8U,0);

  return;

 } catch (...) { }
}


// Reference entry 10f15720; body size 374 bytes.
#line 1 "ENTRY_10f15720"

void __thiscall Recovered_Bulk::FUN_10f15720(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xd7d8));

  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    uVar6 = (uint)(-(uint)(*(int *)(param_2 + 0x1c) != 0) & *(int *)(param_2 + 0x1c) + 0x1430U);
    uVar3 = (undefined4)((**(code **)(*(int *)(uVar6 + 4 + *(int *)(*(int *)(uVar6 + 4) + 4)) + 0x48))(uVar1));
    uVar11 = (undefined4)(0);
    uVar10 = (undefined4)(0);
    uVar9 = (undefined4)(2000);
    uVar8 = (undefined4)(60000);
    uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(uVar6 + 4) + 4) + 4 + uVar6) + 0x50))
                      (60000,2000,0,0));
    thunk_FUN_111c0760(uVar3,"urn:schemas-upnp-org:service:ZoneGroupTopology:1","SubmitDiagnostics",
                       uVar4,uVar8,uVar9,uVar10,uVar11);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
    puVar2[0x18] = (uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp;
    puVar2[0x11b] = (uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp;
    puVar2[0x35f4] = 0;
  }

  thunk_FUN_10f141f0(1,&DAT_1194d14c);
  piVar7 = (int *)(*(int **)(param_1 + 0xc4));
  if (piVar7 != (int *)0x0) {
    if (*(int *)(param_1 + 200) != 0) {
      (**(code **)(*piVar7 + 0x10))();
      piVar7 = (int *)(*(int **)(param_1 + 0xc4));
    }
    if (piVar7 != (int *)0x0) {
      iVar5 = (int)(thunk_FUN_1123fcd0(piVar7 + 1));
      if (iVar5 == 0) {
        (**(code **)*piVar7)(1);
      }
    }
    *(undefined4 *)(param_1 + 200) = 0;
  }
  *(undefined4 **)(param_1 + 0xc4) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(puVar2 + 1);
    if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc4) + 4))(-(uint)(param_1 != 0) & param_1 + 8U,0));
      *(undefined4 *)(param_1 + 200) = uVar3;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f15e50; body size 176 bytes.
#line 1 "ENTRY_10f15e50"

void __thiscall Recovered_Bulk::FUN_10f15e50(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar6 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(uint *)(param_1 + 8));
  if (uVar5 <= iVar6 + 1U) {
    thunk_FUN_10f18a10(1);
    uVar5 = (uint)(*(uint *)(param_1 + 8));
    iVar6 = (int)(*(int *)(param_1 + 0x10));
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & uVar5 - 1;
  uVar5 = (uint)(uVar5 - 1 & *(int *)(param_1 + 0xc) + iVar6);
  iVar3 = (int)(*(int *)(param_1 + 4));
  iVar6 = (int)(uVar5 * 4);
  if (*(int *)(iVar3 + uVar5 * 4) == 0) {
    pvVar2 = (void *)(operator_new(0x28));
    *(void **)(iVar6 + *(int *)(param_1 + 4)) = pvVar2;
    iVar3 = (int)(*(int *)(param_1 + 4));
  }
  iVar6 = (int)(*(int *)(iVar6 + iVar3));
  *(undefined4 *)(iVar6 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar4 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(iVar6,uVar1));
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;

  return;

 } catch (...) { }
}


// Reference entry 10f165a0; body size 81 bytes.
#line 1 "ENTRY_10f165a0"

undefined4 __stdcall FUN_10f165a0(undefined4 param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_10f19850(DAT_12126b84 );
  _Cnd_do_broadcast_at_thread_exit();
  thunk_FUN_1148a50e(param_1,4);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10f16a40; body size 89 bytes.
#line 1 "ENTRY_10f16a40"

void FUN_10f16a40(undefined4 param_1,int param_2,int param_3)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_2 + 0x24) = 0;

  if (*(undefined4 **)(param_3 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_3 + 0x24))(param_2,uVar1));
    *(undefined4 *)(param_2 + 0x24) = uVar2;
  }

  return;

 } catch (...) { }
}


// Reference entry 10f17170; body size 110 bytes.
#line 1 "ENTRY_10f17170"

undefined4 * __fastcall FUN_10f17170(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = (undefined4 *)(operator_new(8));
  puVar1[1] = 0;
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f17530; body size 92 bytes.
#line 1 "ENTRY_10f17530"

void __fastcall FUN_10f17530(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if (param_1[1] != 0) {
    thunk_FUN_10f16ae0(*param_1,param_1[1] + 0x10,DAT_12126b84 );
    if (param_1[1] != 0) {
      thunk_FUN_1148a50e(param_1[1],0x30);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f17c50; body size 100 bytes.
#line 1 "ENTRY_10f17c50"

undefined4 * __thiscall Recovered_Bulk::FUN_10f17c50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)(param_2)) {
    thunk_FUN_10f19370();
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
    *param_1 = (undefined4)(*param_2);
    *param_2 = (undefined4)(puVar1);
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      *(undefined4 *)*param_1 = (undefined4)(param_1);
      puVar1 = (undefined4 *)((undefined4 *)*param_2);
    }
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = (undefined4)(param_2);
    }
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f18a10; body size 407 bytes.
#line 1 "ENTRY_10f18a10"

void __thiscall Recovered_Bulk::FUN_10f18a10(uint param_2)
{
  int param_1 = (int )this;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  void *_Dst;
  uint uVar7;
  size_t sVar8;
  size_t _Size;
  
  uVar6 = (uint)(*(uint *)(param_1 + 8));
  uVar3 = (uint)(1);
  if (uVar6 != 0) {
    uVar3 = (uint)(uVar6);
  }
  for (; (uVar7 = (uint)(uVar3 - uVar6, uVar7 < param_2 || (uVar3 < 8))); uVar3 = uVar3 * 2) {
    if (0x6666666 - uVar3 < uVar3) {
      thunk_FUN_10f19650();
LAB_10f18ba2:
                    
      thunk_FUN_1012a2a0();
    }
  }
  uVar6 = (uint)(*(uint *)(param_1 + 0xc));
  if (0x3fffffff < uVar3) goto LAB_10f18ba2;
  uVar3 = (uint)(uVar3 * 4);
  if (uVar3 < 0x1000) {
    if (uVar3 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar3));
    }
  }
  else {
    if (uVar3 + 0x23 <= uVar3) goto LAB_10f18ba2;
    pvVar4 = (void *)(operator_new(uVar3 + 0x23));
    if (pvVar4 == (void *)0x0) goto LAB_10f18b95;
    _Dst = (void *)((void *)((int)pvVar4 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar4;
  }
  pvVar1 = (void *)((void *)((int)_Dst + uVar6 * 4));
  pvVar4 = (void *)((void *)(*(int *)(param_1 + 4) + uVar6 * 4));
  sVar8 = (size_t)((*(int *)(param_1 + 8) * 4 - (int)pvVar4) + *(int *)(param_1 + 4));
  memmove(pvVar1,pvVar4,sVar8);
  pvVar1 = (void *)((void *)(sVar8 + (int)pvVar1));
  if (uVar7 < uVar6) {
    sVar8 = (size_t)(uVar7 * 4);
    memmove(pvVar1,*(void **)(param_1 + 4),sVar8);
    pvVar4 = (void *)((void *)(sVar8 + *(int *)(param_1 + 4)));
    _Size = (size_t)((*(int *)(param_1 + 4) - (int)pvVar4) + uVar6 * 4);
    memmove(_Dst,pvVar4,_Size);
    memset((void *)((int)_Dst + _Size),0,sVar8);
  }
  else {
    sVar8 = (size_t)(uVar6 * 4);
    memmove(pvVar1,*(void **)(param_1 + 4),sVar8);
    memset((void *)((int)pvVar1 + sVar8),0,(uVar7 - uVar6) * 4);
    memset(_Dst,0,sVar8);
  }
  iVar2 = (int)(*(int *)(param_1 + 4));
  if (iVar2 != 0) {
    uVar6 = (uint)(*(int *)(param_1 + 8) * 4);
    iVar5 = (int)(iVar2);
    if (0xfff < uVar6) {
      iVar5 = (int)(*(int *)(iVar2 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iVar2 - iVar5) - 4U) {
LAB_10f18b95:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar6);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar7;
  *(void **)(param_1 + 4) = _Dst;
  return;
}


// Reference entry 10f18ea0; body size 79 bytes.
#line 1 "ENTRY_10f18ea0"

void __thiscall Recovered_Bulk::FUN_10f18ea0(int param_2)
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


// Reference entry 10f18f90; body size 92 bytes.
#line 1 "ENTRY_10f18f90"

void __thiscall Recovered_Bulk::FUN_10f18f90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  thunk_FUN_10f19370();
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(puVar1);
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    *(undefined4 *)*param_1 = (undefined4)(param_1);
    puVar1 = (undefined4 *)((undefined4 *)*param_2);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(param_2);
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}


// Reference entry 10f190f0; body size 83 bytes.
#line 1 "ENTRY_10f190f0"

void __thiscall Recovered_Bulk::FUN_10f190f0(int *param_2)
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


// Reference entry 10f19370; body size 194 bytes.
#line 1 "ENTRY_10f19370"

void __fastcall FUN_10f19370(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (int)(*(int *)(param_1 + 0x10));
  if (iVar4 != 0) {
    do {
      piVar1 = (int *)(*(int **)(*(int *)(param_1 + 4) +
                        (iVar4 + *(int *)(param_1 + 0xc) + -1 & *(int *)(param_1 + 8) - 1U) * 4));
      piVar2 = (int *)((int *)piVar1[9]);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))((int *)(piVar2) != piVar1);
        piVar1[9] = 0;
      }
      iVar4 = (int)(*(int *)(param_1 + 0x10) + -1);
      *(int *)(param_1 + 0x10) = iVar4;
    } while (iVar4 != 0);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar4 = (int)(*(int *)(param_1 + 8));
  while (iVar4 != 0) {
    iVar4 = (int)(iVar4 + -1);
    iVar3 = (int)(*(int *)(*(int *)(param_1 + 4) + iVar4 * 4));
    if (iVar3 != 0) {
      thunk_FUN_1148a50e(iVar3,0x28);
    }
  }
  iVar4 = (int)(*(int *)(param_1 + 4));
  if (iVar4 != 0) {
    uVar5 = (uint)(*(int *)(param_1 + 8) * 4);
    iVar3 = (int)(iVar4);
    if (0xfff < uVar5) {
      iVar3 = (int)(*(int *)(iVar4 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar4 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar5);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// Reference entry 10f1a750; body size 67 bytes.
#line 1 "ENTRY_10f1a750"

void __fastcall FUN_10f1a750(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 4) +
                    (*(int *)(param_1 + 8) - 1U & *(uint *)(param_1 + 0xc)) * 4));
  piVar2 = (int *)((int *)piVar1[9]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))((int *)(piVar2) != piVar1);
    piVar1[9] = 0;
  }
  piVar1 = (int *)((int *)(param_1 + 0x10));
  *piVar1 = (int)(*piVar1 + -1);
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


// Reference entry 10f1a7b0; body size 74 bytes.
#line 1 "ENTRY_10f1a7b0"

void __fastcall FUN_10f1a7b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = (int)(*(int *)(param_1 + 0x10));
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 4) +
                    (*(int *)(param_1 + 0xc) + -1 + iVar3 & *(int *)(param_1 + 8) - 1U) * 4));
  piVar2 = (int *)((int *)piVar1[9]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))((int *)(piVar2) != piVar1);
    piVar1[9] = 0;
    iVar3 = (int)(*(int *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x10) = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 10f1a810; body size 67 bytes.
#line 1 "ENTRY_10f1a810"

void __fastcall FUN_10f1a810(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 4) +
                    (*(int *)(param_1 + 8) - 1U & *(uint *)(param_1 + 0xc)) * 4));
  piVar2 = (int *)((int *)piVar1[9]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))((int *)(piVar2) != piVar1);
    piVar1[9] = 0;
  }
  piVar1 = (int *)((int *)(param_1 + 0x10));
  *piVar1 = (int)(*piVar1 + -1);
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


// Reference entry 10f1a870; body size 176 bytes.
#line 1 "ENTRY_10f1a870"

void __thiscall Recovered_Bulk::FUN_10f1a870(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar6 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(uint *)(param_1 + 8));
  if (uVar5 <= iVar6 + 1U) {
    thunk_FUN_10f18a10(1);
    uVar5 = (uint)(*(uint *)(param_1 + 8));
    iVar6 = (int)(*(int *)(param_1 + 0x10));
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & uVar5 - 1;
  uVar5 = (uint)(uVar5 - 1 & *(int *)(param_1 + 0xc) + iVar6);
  iVar3 = (int)(*(int *)(param_1 + 4));
  iVar6 = (int)(uVar5 * 4);
  if (*(int *)(iVar3 + uVar5 * 4) == 0) {
    pvVar2 = (void *)(operator_new(0x28));
    *(void **)(iVar6 + *(int *)(param_1 + 4)) = pvVar2;
    iVar3 = (int)(*(int *)(param_1 + 4));
  }
  iVar6 = (int)(*(int *)(iVar6 + iVar3));
  *(undefined4 *)(iVar6 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar4 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(iVar6,uVar1));
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;

  return;

 } catch (...) { }
}


// Reference entry 10f1a950; body size 176 bytes.
#line 1 "ENTRY_10f1a950"

void __thiscall Recovered_Bulk::FUN_10f1a950(int param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar6 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(uint *)(param_1 + 8));
  if (uVar5 <= iVar6 + 1U) {
    thunk_FUN_10f18a10(1);
    uVar5 = (uint)(*(uint *)(param_1 + 8));
    iVar6 = (int)(*(int *)(param_1 + 0x10));
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & uVar5 - 1;
  uVar5 = (uint)(uVar5 - 1 & *(int *)(param_1 + 0xc) + iVar6);
  iVar3 = (int)(*(int *)(param_1 + 4));
  iVar6 = (int)(uVar5 * 4);
  if (*(int *)(iVar3 + uVar5 * 4) == 0) {
    pvVar2 = (void *)(operator_new(0x28));
    *(void **)(iVar6 + *(int *)(param_1 + 4)) = pvVar2;
    iVar3 = (int)(*(int *)(param_1 + 4));
  }
  iVar6 = (int)(*(int *)(iVar6 + iVar3));
  *(undefined4 *)(iVar6 + 0x24) = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar4 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(iVar6,uVar1));
    *(undefined4 *)(iVar6 + 0x24) = uVar4;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;

  return;

 } catch (...) { }
}


// Reference entry 10f1b420; body size 73 bytes.
#line 1 "ENTRY_10f1b420"

int * __thiscall Recovered_Bulk::FUN_10f1b420(int *param_2,int *param_3)
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
  return (int *)(param_2);
}


// Reference entry 10f1b480; body size 73 bytes.
#line 1 "ENTRY_10f1b480"

int * __thiscall Recovered_Bulk::FUN_10f1b480(int *param_2,int *param_3)
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
  return (int *)(param_2);
}


// Reference entry 10f1b7a0; body size 246 bytes.
#line 1 "ENTRY_10f1b7a0"

int * __thiscall Recovered_Bulk::FUN_10f1b7a0(int *param_2,int *param_3)
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

  thunk_FUN_10f1b420(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x7ffffff) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x20));
    puVar3[4] = *param_3;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10f1d3b0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10f1b8e0; body size 222 bytes.
#line 1 "ENTRY_10f1b8e0"

int * __thiscall Recovered_Bulk::FUN_10f1b8e0(int *param_2,int *param_3)
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

  thunk_FUN_10f1b480(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_3;
    *(undefined8 *)(puVar3 + 5) = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10f1d640(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10f1cbe0; body size 209 bytes.
#line 1 "ENTRY_10f1cbe0"

int __thiscall Recovered_Bulk::FUN_10f1cbe0(int *param_2)
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

  thunk_FUN_10f1b420(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x7ffffff) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x20));
    puVar3[4] = *param_2;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10f1d3b0(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10f1ccf0; body size 189 bytes.
#line 1 "ENTRY_10f1ccf0"

int __thiscall Recovered_Bulk::FUN_10f1ccf0(int *param_2)
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

  thunk_FUN_10f1b480(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_2;
    *(undefined8 *)(puVar3 + 5) = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10f1d640(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10f208e0; body size 68 bytes.
#line 1 "ENTRY_10f208e0"

uint __thiscall Recovered_Bulk::FUN_10f208e0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint in_EAX;
  int iVar2;
  undefined1 local_c [12];
  
  iVar1 = (int)(param_2);
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = (int)(thunk_FUN_10f1b420(local_c,&param_2));
    in_EAX = (uint)(*(uint *)(iVar2 + 8));
    if ((*(char *)(in_EAX + 0xd) == '\0') && (*(int *)(in_EAX + 0x10) <= iVar1)) {
      return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f20940; body size 68 bytes.
#line 1 "ENTRY_10f20940"

uint __thiscall Recovered_Bulk::FUN_10f20940(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint in_EAX;
  int iVar2;
  undefined1 local_c [12];
  
  iVar1 = (int)(param_2);
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = (int)(thunk_FUN_10f1b480(local_c,&param_2));
    in_EAX = (uint)(*(uint *)(iVar2 + 8));
    if ((*(char *)(in_EAX + 0xd) == '\0') && (*(int *)(in_EAX + 0x10) <= iVar1)) {
      return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f219f0; body size 177 bytes.
#line 1 "ENTRY_10f219f0"

void __fastcall FUN_10f219f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSendSetupMessage);
  param_1[2] = (uint)&ghidra_vftable_SCOpSendSetupMessage;
  param_1[3] = (uint)&ghidra_vftable_SCOpSendSetupMessage;
  param_1[10] = (uint)&ghidra_vftable_SCOpSendSetupMessage;
  piVar1 = (int *)((int *)param_1[0x13]);

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  param_1[10] = (uint)&ghidra_vftable_RNetstartOpCallback;

  param_1[3] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f21b30; body size 198 bytes.
#line 1 "ENTRY_10f21b30"

undefined4 * __thiscall Recovered_Bulk::FUN_10f21b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSendSetupMessage);
  param_1[2] = (uint)&ghidra_vftable_SCOpSendSetupMessage;
  param_1[3] = (uint)&ghidra_vftable_SCOpSendSetupMessage;
  param_1[10] = (uint)&ghidra_vftable_SCOpSendSetupMessage;
  piVar1 = (int *)((int *)param_1[0x13]);

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  param_1[10] = (uint)&ghidra_vftable_RNetstartOpCallback;

  param_1[3] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,100);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f21c30; body size 182 bytes.
#line 1 "ENTRY_10f21c30"

void __fastcall FUN_10f21c30(int *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar1 + 4))();
  }

  thunk_FUN_1059d800();
  param_1[0xc] = 3;
  if (param_1[0xe] != 0) {
    param_1[0xe] = 0;
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1[0x15] + 4) = 0;
    param_1[0x15] = 0;
  }
  if (param_1[0x16] != 0) {
    *(undefined4 *)(param_1[0x16] + 4) = 0;
    param_1[0x16] = 0;
  }

  return;

 } catch (...) { }
}


// Reference entry 10f21fe0; body size 171 bytes.
#line 1 "ENTRY_10f21fe0"

void __thiscall Recovered_Bulk::FUN_10f21fe0(int param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar3 + 4))();
  }

  thunk_FUN_1059d800();
  param_1[0xc] = param_2;
  if ((int *)param_1[0xe] != (int *)0x0) {
    if (param_2 != 3) {
      iVar1 = (int)(*(int *)param_1[0xe]);
      uVar2 = (undefined2)((**(code **)(*param_1 + 0x24))());
      (**(code **)(iVar1 + 0x14))(param_1[0xd],uVar2);
    }
    param_1[0xe] = 0;
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f224b0; body size 799 bytes.
#line 1 "ENTRY_10f224b0"

undefined4 __thiscall Recovered_Bulk::FUN_10f224b0(int param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int *local_20;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(param_1 + -0x28));
  local_20 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    local_20 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*local_20 + 4))();
  }

  if (param_2 == *(int *)(param_1 + 0x2c)) {
    sVar2 = (short)(*(short *)(*(int *)(param_1 + 0x2c) + 0xc));
    *(short *)(param_1 + 4) = sVar2;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (sVar2 == 0) {
      thunk_FUN_10302280(param_1 + -0x20,"Op succeeded- setup message received by product");
      piVar6 = (int *)((int *)0x0);
      if (piVar1 != (int *)0x0) {
        piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
        (**(code **)(*piVar6 + 4))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      thunk_FUN_1059d800();
      *(undefined4 *)(param_1 + 8) = 5;
      if (*(int **)(param_1 + 0x10) != (int *)0x0) {
        iVar3 = (int)(**(int **)(param_1 + 0x10));
        uVar4 = (undefined2)((**(code **)(*piVar1 + 0x24))());
        (**(code **)(iVar3 + 0x14))(*(undefined4 *)(param_1 + 0xc),uVar4);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))();
      }
      goto LAB_10f227a6;
    }
    if (sVar2 == 0x416) {
      thunk_FUN_10302280(param_1 + -0x20,"Op failed- setup message sent to recycled product");
      piVar6 = (int *)((int *)0x0);
      if (piVar1 != (int *)0x0) {
        piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
        (**(code **)(*piVar6 + 4))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
      thunk_FUN_1059d800();
      *(undefined4 *)(param_1 + 8) = 4;
      if (*(int **)(param_1 + 0x10) != (int *)0x0) {
        iVar3 = (int)(**(int **)(param_1 + 0x10));
        uVar4 = (undefined2)((**(code **)(*piVar1 + 0x24))());
        (**(code **)(iVar3 + 0x14))(*(undefined4 *)(param_1 + 0xc),uVar4);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))();
      }
      goto LAB_10f227a6;
    }
    if (*(int *)(param_1 + 0x34) < 6) {
      piVar6 = (int *)((int *)thunk_FUN_10c97610(&local_14));
      piVar1 = (int *)((int *)*piVar6);
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      *piVar6 = (int)(0);
      if (piVar1 == (int *)0x0) {
        piVar6 = (int *)((int *)0x0);
      }
      else {
        piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
      if (piVar1 == (int *)0x0) {
        *(uint *)((char *)&param_2 + 3) = '\0';
      }
      else if (*(int *)(param_1 + 0x28) == 1) {
        *(uint *)((char *)&param_2 + 3) = thunk_FUN_1034e4a0(2);
      }
      else if (*(int *)(param_1 + 0x28) == 2) {
        *(uint *)((char *)&param_2 + 3) = thunk_FUN_1034e4a0(1);
      }
      else {
        *(uint *)((char *)&param_2 + 3) = '\x01';
      }
      if (((*(int *)(param_1 + 0x14) == 1) && (*(char *)(param_1 + 0x38) == '\0')) &&
         (*(uint *)((char *)&param_2 + 3) != '\0')) {
        thunk_FUN_10302280(param_1 + -0x20,"Message send failed (%i)- trying to send revert",
                           *(undefined2 *)(param_1 + 4));
        *(undefined1 *)(param_1 + 0x38) = 1;
        thunk_FUN_10f22380();
      }
      else {
        thunk_FUN_10302280(param_1 + -0x20,"Message send failed (%i)- retrying",
                           *(undefined2 *)(param_1 + 4));
        uVar5 = (undefined4)(thunk_FUN_1059d5a0(500));
        *(undefined4 *)(param_1 + 0x18) = uVar5;
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))();
      }
      goto LAB_10f227a6;
    }
    pcVar7 = (char *)("Op failed- setup message not received by product");
  }
  else {
    if (param_2 != *(int *)(param_1 + 0x30)) goto LAB_10f227a6;
    sVar2 = (short)(*(short *)(*(int *)(param_1 + 0x30) + 0xc));
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (sVar2 != 0x3ea) {
      thunk_FUN_10302280(param_1 + -0x20,"Revert succeeded- player now in R_NS_STATE_IDLE");
      *(undefined4 *)(param_1 + 0x34) = 0;
      thunk_FUN_10f220c0();
      goto LAB_10f227a6;
    }
    if (*(int *)(param_1 + 0x34) < 6) {
      thunk_FUN_10302280(param_1 + -0x20,"Revert timed out- retrying");
      uVar5 = (undefined4)(thunk_FUN_1059d5a0(500));
      *(undefined4 *)(param_1 + 0x1c) = uVar5;
      goto LAB_10f227a6;
    }
    pcVar7 = (char *)("Op failed- revert channel op not received by product");
  }
  thunk_FUN_10302280(param_1 + -0x20,pcVar7);
  thunk_FUN_10f21fe0(2);
LAB_10f227a6:

  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10f22bc0; body size 220 bytes.
#line 1 "ENTRY_10f22bc0"

int * __thiscall Recovered_Bulk::FUN_10f22bc0(int *param_2)
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
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x1c));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_10f23350(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
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


// Reference entry 10f22d00; body size 220 bytes.
#line 1 "ENTRY_10f22d00"

int * __thiscall Recovered_Bulk::FUN_10f22d00(int *param_2)
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
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x1c));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_10f234a0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
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


// Reference entry 10f234a0; body size 218 bytes.
#line 1 "ENTRY_10f234a0"

int * __thiscall Recovered_Bulk::FUN_10f234a0(undefined4 *param_2,int param_3,undefined4 param_4)
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

    piVar2 = (int *)(operator_new(0x1c));
    piVar2[4] = param_2[4];
    piVar2[5] = param_2[5];
    piVar1 = (int *)((int *)param_2[6]);
    piVar2[6] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *piVar2 = (int)((int)piVar4);
    piVar2[2] = (int)piVar4;
    *(undefined2 *)(piVar2 + 3) = 0;
    piVar2[1] = param_3;
    *(undefined1 *)(piVar2 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((int)piVar4 + 0xd) != '\0') {
      piVar4 = (int *)(piVar2);
    }

    iVar3 = (int)(thunk_FUN_10f234a0(*param_2,piVar2,param_4));
    *piVar2 = (int)(iVar3);
    iVar3 = (int)(thunk_FUN_10f234a0(param_2[2],piVar2,param_4));
    piVar2[2] = iVar3;
  }

  return (int *)(piVar4);

 } catch (...) { }
}


// Reference entry 10f238a0; body size 267 bytes.
#line 1 "ENTRY_10f238a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f238a0(void *param_2,undefined4 *param_3)
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
                    
    thunk_FUN_10f278b0();
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
  _Dst = (void *)((void *)thunk_FUN_10f27b60(uVar5));
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
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)((int)_Dst + uVar5 * 4);
  return (undefined4 *)(puVar2);
}


// Reference entry 10f23ba0; body size 150 bytes.
#line 1 "ENTRY_10f23ba0"

undefined4 __thiscall Recovered_Bulk::FUN_10f23ba0(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);

  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_10f23ba0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);

    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }

    thunk_FUN_1148a50e(param_3,0x1c);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10f23e90; body size 261 bytes.
#line 1 "ENTRY_10f23e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10f23e90(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar6 = (bool)(false);
  puVar7 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar5 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar7);
    do {
      puVar7 = (undefined4 *)(puVar2);
      bVar6 = (bool)(*param_3 <= (int)puVar7[4]);
      if (bVar6) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar7);
        puVar5 = (undefined4 *)(puVar7);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar7[2]);
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar5 + 0xd) == '\0') && ((int)puVar5[4] <= *param_3)) {
    *param_2 = (undefined4)(puVar5);
    *(undefined1 *)(param_2 + 1) = 0;
    return (undefined4 *)(param_2);
  }

  if (param_1[1] == 0x9249249) {
                    
    thunk_FUN_101d7220(DAT_12126b84 );
  }

  piVar3 = (int *)(operator_new(0x1c));
  piVar3[4] = *param_3;
  piVar3[5] = 0;
  piVar3[6] = 0;
  *piVar3 = (int)((int)puVar1);
  piVar3[1] = (int)puVar1;
  piVar3[2] = (int)puVar1;
  *(undefined2 *)(piVar3 + 3) = 0;
  uVar4 = (undefined4)(thunk_FUN_10f27100(puVar7,bVar6,piVar3));
  *param_2 = (undefined4)(uVar4);
  *(undefined1 *)(param_2 + 1) = 1;

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f246a0; body size 114 bytes.
#line 1 "ENTRY_10f246a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f246a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f24730; body size 278 bytes.
#line 1 "ENTRY_10f24730"

undefined4 * __thiscall Recovered_Bulk::FUN_10f24730(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f24c70; body size 220 bytes.
#line 1 "ENTRY_10f24c70"

int * __thiscall Recovered_Bulk::FUN_10f24c70(int *param_2)
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
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x1c));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_10f23350(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
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


// Reference entry 10f24de0; body size 220 bytes.
#line 1 "ENTRY_10f24de0"

int * __thiscall Recovered_Bulk::FUN_10f24de0(int *param_2)
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
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x1c));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_10f234a0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
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


// Reference entry 10f25750; body size 132 bytes.
#line 1 "ENTRY_10f25750"

undefined4 * __thiscall Recovered_Bulk::FUN_10f25750(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0x5a4));

  if (pvVar1 == (void *)0x0) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(thunk_FUN_10f25060(param_2,0));
  }

  thunk_FUN_10f24730(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpBonding);
  param_1[2] = (uint)&ghidra_vftable_SCOpBonding;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f258d0; body size 132 bytes.
#line 1 "ENTRY_10f258d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f258d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0x5a4));

  if (pvVar1 == (void *)0x0) {
    uVar2 = (undefined4)(0);
  }
  else {
    uVar2 = (undefined4)(thunk_FUN_10f25060(param_2,1));
  }

  thunk_FUN_10f24730(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpUnbonding);
  param_1[2] = (uint)&ghidra_vftable_SCOpUnbonding;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f25f60; body size 81 bytes.
#line 1 "ENTRY_10f25f60"

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

void __fastcall FID_conflict__Tidy_10f25f60(int *param_1)

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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10f263a0; body size 228 bytes.
#line 1 "ENTRY_10f263a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f263a0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar5 = (bool)(false);
  puVar6 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar4 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar6 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar6);
    do {
      puVar6 = (undefined4 *)(puVar2);
      bVar5 = (bool)(*param_2 <= (int)puVar6[4]);
      if (bVar5) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar6);
        puVar4 = (undefined4 *)(puVar6);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar6[2]);
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar4 + 0xd) != '\0') || (*param_2 < (int)puVar4[4])) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(DAT_12126b84 );
    }

    piVar3 = (int *)(operator_new(0x1c));
    piVar3[4] = *param_2;
    piVar3[5] = 0;
    piVar3[6] = 0;
    *piVar3 = (int)((int)puVar1);
    piVar3[1] = (int)puVar1;
    piVar3[2] = (int)puVar1;
    *(undefined2 *)(piVar3 + 3) = 0;
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10f27100(puVar6,bVar5,piVar3));
  }

  return (undefined4 *)(puVar4 + 5);

 } catch (...) { }
}


// Reference entry 10f26680; body size 88 bytes.
#line 1 "ENTRY_10f26680"

int * __thiscall Recovered_Bulk::FUN_10f26680(int *param_2)
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


// Reference entry 10f26840; body size 98 bytes.
#line 1 "ENTRY_10f26840"

int __thiscall Recovered_Bulk::FUN_10f26840(byte param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc,uVar1);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10f268c0; body size 355 bytes.
#line 1 "ENTRY_10f268c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f268c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RBondingOp);
  param_1[2] = (uint)&ghidra_vftable_RBondingOp;
  param_1[7] = (uint)&ghidra_vftable_RBondingOp;
  if (param_1[0x14e] != 0) {
    thunk_FUN_104dec20(uVar1);
    if ((undefined4 *)param_1[0x14e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x14e])(1);
    }
    param_1[0x14e] = 0;
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)(param_1 + 0x168)))->int_release();
  param_1[0x168] = 0;
  thunk_FUN_10f25cd0();
  param_1[0x15e] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x15b] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x158] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x155] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x152] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  param_1[0x14f] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_1127a080();
  thunk_FUN_10f23a20(param_1 + 9,*(undefined4 *)(param_1[9] + 4));
  thunk_FUN_1148a50e(param_1[9],0x1c);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;
  param_1[7] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5a4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f26ce0; body size 89 bytes.
#line 1 "ENTRY_10f26ce0"

void __thiscall Recovered_Bulk::FUN_10f26ce0(int param_2,int param_3,int param_4)
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
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}


// Reference entry 10f26f00; body size 407 bytes.
#line 1 "ENTRY_10f26f00"

void __thiscall Recovered_Bulk::FUN_10f26f00(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  size_t _Size;
  
  uVar5 = (uint)(*(uint *)(param_1 + 8));
  uVar1 = (uint)(1);
  if (uVar5 != 0) {
    uVar1 = (uint)(uVar5);
  }
  for (; (uVar4 = (uint)(uVar1 - uVar5, uVar4 < param_2 || (uVar1 < 8))); uVar1 = uVar1 * 2) {
    if (0xfffffff - uVar1 < uVar1) {
      thunk_FUN_10f278a0();
LAB_10f27092:
                    
      thunk_FUN_1012a2a0();
    }
  }
  uVar5 = (uint)(*(uint *)(param_1 + 0xc) >> 1);
  if (0x3fffffff < uVar1) goto LAB_10f27092;
  uVar1 = (uint)(uVar1 * 4);
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar1));
    }
  }
  else {
    if (uVar1 + 0x23 <= uVar1) goto LAB_10f27092;
    pvVar2 = (void *)(operator_new(uVar1 + 0x23));
    if (pvVar2 == (void *)0x0) goto LAB_10f27085;
    _Dst = (void *)((void *)((int)pvVar2 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar2;
  }
  iVar6 = (int)(uVar5 * 4);
  pvVar2 = (void *)((void *)(*(int *)(param_1 + 4) + iVar6));
  sVar7 = (size_t)((*(int *)(param_1 + 8) * 4 - (int)pvVar2) + *(int *)(param_1 + 4));
  memmove((void *)(iVar6 + (int)_Dst),pvVar2,sVar7);
  pvVar2 = (void *)((void *)(sVar7 + iVar6 + (int)_Dst));
  if (uVar4 < uVar5) {
    sVar7 = (size_t)(uVar4 * 4);
    memmove(pvVar2,*(void **)(param_1 + 4),sVar7);
    pvVar2 = (void *)((void *)(sVar7 + *(int *)(param_1 + 4)));
    _Size = (size_t)((*(int *)(param_1 + 4) - (int)pvVar2) + iVar6);
    memmove(_Dst,pvVar2,_Size);
    memset((void *)((int)_Dst + _Size),0,sVar7);
  }
  else {
    sVar7 = (size_t)(uVar5 * 4);
    memmove(pvVar2,*(void **)(param_1 + 4),sVar7);
    memset((void *)((int)pvVar2 + sVar7),0,(uVar4 - uVar5) * 4);
    memset(_Dst,0,sVar7);
  }
  iVar6 = (int)(*(int *)(param_1 + 4));
  if (iVar6 != 0) {
    uVar5 = (uint)(*(int *)(param_1 + 8) * 4);
    iVar3 = (int)(iVar6);
    if (0xfff < uVar5) {
      iVar3 = (int)(*(int *)(iVar6 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar6 - iVar3) - 4U) {
LAB_10f27085:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar5);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar4;
  *(void **)(param_1 + 4) = _Dst;
  return;
}


// Reference entry 10f27750; body size 81 bytes.
#line 1 "ENTRY_10f27750"

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

void __fastcall FID_conflict__Tidy_10f27750(int *param_1)

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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10f278c0; body size 76 bytes.
#line 1 "ENTRY_10f278c0"

void __fastcall FUN_10f278c0(int param_1)

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


// Reference entry 10f27920; body size 149 bytes.
#line 1 "ENTRY_10f27920"

void __thiscall Recovered_Bulk::FUN_10f27920(int *param_2,undefined4 param_3)
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


// Reference entry 10f27b60; body size 87 bytes.
#line 1 "ENTRY_10f27b60"

void * FUN_10f27b60(uint param_1)

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


// Reference entry 10f27c10; body size 475 bytes.
#line 1 "ENTRY_10f27c10"

void __fastcall FUN_10f27c10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x550) != 0) && (*(int **)(param_1 + 0x54c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x54c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x54c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x54c) = 0;
    *(undefined4 *)(param_1 + 0x550) = 0;
  }
  if ((*(int *)(param_1 + 0x544) != 0) && (*(int **)(param_1 + 0x540) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x540) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x540));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x540) = 0;
    *(undefined4 *)(param_1 + 0x544) = 0;
  }
  if ((*(int *)(param_1 + 0x55c) != 0) && (*(int **)(param_1 + 0x558) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x558) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x558));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x558) = 0;
    *(undefined4 *)(param_1 + 0x55c) = 0;
  }
  if ((*(int *)(param_1 + 0x568) != 0) && (*(int **)(param_1 + 0x564) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x564) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x564));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x564) = 0;
    *(undefined4 *)(param_1 + 0x568) = 0;
  }
  if ((*(int *)(param_1 + 0x574) != 0) && (*(int **)(param_1 + 0x570) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x570) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x570));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x570) = 0;
    *(undefined4 *)(param_1 + 0x574) = 0;
  }
  if ((*(int *)(param_1 + 0x580) != 0) && (*(int **)(param_1 + 0x57c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x57c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x57c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x57c) = 0;
    *(undefined4 *)(param_1 + 0x580) = 0;
  }
  return;
}


// Reference entry 10f27e80; body size 631 bytes.
#line 1 "ENTRY_10f27e80"

undefined1 FUN_10f27e80(void)

{
 try {
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  SCStr *pSVar5;
  SCStr *this_;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_4c;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)thunk_FUN_10efdbb0(&local_24));
  piVar9 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  local_44 = (int *)(piVar9);
  if (piVar9 == (int *)0x0) {
    local_40 = (int *)((int *)0x0);
  }
  else {
    local_40 = (int *)((int *)(**(code **)(*piVar9 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar9 == (int *)0x0) {
    uVar8 = (undefined1)(0);
  }
  else {
    cVar1 = (char)(thunk_FUN_10c99ba0());
    if (cVar1 == '\0') {
      uVar8 = (undefined1)(1);
    }
    else {
      thunk_FUN_107bca20(&local_5c);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      thunk_FUN_10c95490(&local_50,0,1,0);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
      local_1c = (undefined4 *)(local_5c);
      local_2c = (undefined4 *)(local_58);
      if (local_5c != (undefined4 *)(local_58)) {
        do {
          piVar9 = (int *)((int *)local_5c[1]);
          local_34 = (undefined4)(*local_5c);
          local_30 = (int *)(piVar9);
          local_20 = (undefined4)(local_34);
          local_1c = (undefined4 *)(local_5c);
          if (piVar9 != (int *)0x0) {
            (**(code **)(*piVar9 + 4))();
          }
          local_28 = (undefined4 *)(local_4c);
          puVar6 = (undefined4 *)(local_50);
          puVar10 = (undefined4 *)(local_5c);
          if (local_50 != (undefined4 *)(local_4c)) {
            do {
              *(unsigned char *)((char *)&local_8 + 0) = 8;
              local_38 = (int *)((int *)puVar6[1]);
              local_3c = (undefined4)(*puVar6);
              local_24 = (int *)(local_38);
              if (local_38 != (int *)0x0) {
                (**(code **)(*local_38 + 4))();
              }
              *(unsigned char *)((char *)&local_8 + 0) = 9;
              pSVar5 = (SCStr *)((SCStr *)thunk_FUN_10c98c80(&local_18));
              *(unsigned char *)((char *)&local_8 + 0) = 10;
              this_ = (SCStr *)((SCStr *)thunk_FUN_10c98c80(&local_14));
              *(unsigned char *)((char *)&local_8 + 0) = 0xb;
              bVar2 = (bool)(((SCStr *)(this_))->op_eq(pSVar5));
              *(unsigned char *)((char *)&local_8 + 0) = 0xc;
              ((SCStr *)((SCStr *)&local_14))->int_release();

              *(unsigned char *)((char *)&local_8 + 0) = 0xd;
              ((SCStr *)((SCStr *)&local_18))->int_release();

              *(unsigned char *)((char *)&local_8 + 0) = 9;
              if (bVar2) {
                puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_10c98c80(&local_2c));
                puVar7 = (undefined1 *)(&DAT_1186d2ee);
                if ((undefined1 *)*puVar6 != (undefined1 *)0x0) {
                  puVar7 = (undefined1 *)((undefined1 *)*puVar6);
                }
                thunk_FUN_112af4e0("RBondingOp",1,
                                   "Unbonding wasn\'t fully successful since %s is still bonded.",
                                   puVar7);
                *(unsigned char *)((char *)&local_8 + 0) = 0xe;
                ((SCStr *)((SCStr *)&local_2c))->int_release();
                *(unsigned char *)((char *)&local_8 + 0) = 0xf;
                if (local_24 != (int *)0x0) {
                  (**(code **)(*local_24 + 8))();
                }
                local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x10)));
                if (local_30 != (int *)0x0) {
                  (**(code **)(*local_30 + 8))();
                }
                uVar8 = (undefined1)(0);
                goto LAB_10f2805e;
              }
              *(unsigned char *)((char *)&local_8 + 0) = 0x12;
              if (local_24 != (int *)0x0) {

                local_38 = (int *)((int *)0x0);
                (**(code **)(*local_24 + 8))();
              }
              puVar6 = (undefined4 *)(puVar6 + 2);
              piVar9 = (int *)(local_30);
              puVar10 = (undefined4 *)(local_1c);
            } while (puVar6 != (undefined4 *)(local_28));
          }
          *(unsigned char *)((char *)&local_8 + 0) = 0x13;
          if (piVar9 != (int *)0x0) {

            local_30 = (int *)((int *)0x0);
            (**(code **)(*piVar9 + 8))();
          }
          local_5c = (undefined4 *)(puVar10 + 2);
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
          local_1c = (undefined4 *)(local_5c);
        } while (local_5c != (undefined4 *)(local_2c));
      }
      uVar8 = (undefined1)(1);
LAB_10f2805e:
      thunk_FUN_1036e480();
      thunk_FUN_1036e480();
    }
  }

  if (local_40 != (int *)0x0) {
    (**(code **)(*local_40 + 8))();
  }

  return (undefined1)(uVar8);

 } catch (...) { }
}


// Reference entry 10f2a970; body size 220 bytes.
#line 1 "ENTRY_10f2a970"

int * __thiscall Recovered_Bulk::FUN_10f2a970(int *param_2)
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
  param_2[1] = 0;
  pvVar7 = (void *)(operator_new(0x1c));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_2 = (int)((int)pvVar7);

  uVar8 = (undefined4)(thunk_FUN_10f234a0(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 4),pvVar7,param_2));
  *(undefined4 *)(*param_2 + 4) = uVar8;
  piVar2 = (int *)((int *)*param_2);
  param_2[1] = *(int *)(param_1 + 0x30);
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


// Reference entry 10f2b770; body size 128 bytes.
#line 1 "ENTRY_10f2b770"

void __fastcall FUN_10f2b770(int param_1)

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


// Reference entry 10f2b8b0; body size 118 bytes.
#line 1 "ENTRY_10f2b8b0"

void __stdcall FUN_10f2b8b0(int param_1)

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


// Reference entry 10f2b960; body size 382 bytes.
#line 1 "ENTRY_10f2b960"

void __fastcall FUN_10f2b960(undefined1 *param_1)

{
 try {
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (param_1[0x57c] != '\0') {
    local_14 = (undefined1 *)(param_1);
    iVar2 = (int)(thunk_FUN_110828b0(DAT_12126b84 ));
    if (iVar2 != 0) {
      puVar4 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 4) != (undefined1 *)0x0) {
        puVar4 = (undefined1 *)(*(undefined1 **)(param_1 + 4));
      }
      iVar2 = (int)((**(code **)(*(int *)(iVar2 + 0x1c) + 4))(puVar4,1));
      if (iVar2 == 0) {
        thunk_FUN_112af4e0("RBondingOp",1,"primary still missing");

        return;
      }
      cVar1 = (char)(thunk_FUN_110d3140());
      if (cVar1 != '\0') {
        thunk_FUN_112af4e0("RBondingOp",1,"primary still bonded");
        thunk_FUN_110cbf80(&local_14);
        puVar4 = (undefined1 *)(&DAT_1186d2ee);
        if (local_14 != (undefined1 *)0x0) {
          puVar4 = (undefined1 *)(local_14);
        }
        thunk_FUN_112af4e0("RBondingOp",1,"channel map %s",puVar4);
        thunk_FUN_101ba300();

        return;
      }
      thunk_FUN_101badc0();
      param_1[0x57c] = 0;
      thunk_FUN_10f2f730();
      thunk_FUN_112af4e0("RBondingOp",1,"primary unbonded");
      thunk_FUN_112af4e0("RBondingOp",1,"start wait op");
      puVar4 = (undefined1 *)(param_1 + -0x14);
      if (param_1 == (undefined1 *)0x1c) {
        puVar4 = (undefined1 *)((undefined1 *)0x0);
      }
      local_14 = (undefined1 *)(operator_new(0x6c));

      if (local_14 == (undefined1 *)0x0) {
        uVar3 = (undefined4)(0);
      }
      else {
        uVar3 = (undefined4)(thunk_FUN_111c06e0(0));
      }

      thunk_FUN_102207b0(uVar3,puVar4,*(undefined4 *)(param_1 + -0xc));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f2bb40; body size 232 bytes.
#line 1 "ENTRY_10f2bb40"

void __thiscall Recovered_Bulk::FUN_10f2bb40(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f2bf40; body size 103 bytes.
#line 1 "ENTRY_10f2bf40"

undefined4 * __thiscall Recovered_Bulk::FUN_10f2bf40(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f2f680; body size 139 bytes.
#line 1 "ENTRY_10f2f680"

void __fastcall FUN_10f2f680(int param_1)

{
 try {
  int iVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(thunk_FUN_110828b0(DAT_12126b84 ));
  if (iVar1 != 0) {
    pvVar2 = (void *)(operator_new(0x20));

    if (pvVar2 == (void *)0x0) {
      iVar1 = (int)(0);
    }
    else {
      iVar1 = (int)(thunk_FUN_104ddfd0(-(uint)(param_1 != 0) & param_1 + 0x1cU,iVar1));
    }

    *(int *)(param_1 + 0x538) = iVar1;
    if (iVar1 != 0) {
      thunk_FUN_104deb40();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f2f770; body size 114 bytes.
#line 1 "ENTRY_10f2f770"

undefined4 * __thiscall Recovered_Bulk::FUN_10f2f770(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f2f800; body size 114 bytes.
#line 1 "ENTRY_10f2f800"

undefined4 * __thiscall Recovered_Bulk::FUN_10f2f800(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f2f890; body size 114 bytes.
#line 1 "ENTRY_10f2f890"

undefined4 * __thiscall Recovered_Bulk::FUN_10f2f890(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f2f920; body size 114 bytes.
#line 1 "ENTRY_10f2f920"

undefined4 * __thiscall Recovered_Bulk::FUN_10f2f920(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f2f9b0; body size 278 bytes.
#line 1 "ENTRY_10f2f9b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f2f9b0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f2fb10; body size 278 bytes.
#line 1 "ENTRY_10f2fb10"

undefined4 * __thiscall Recovered_Bulk::FUN_10f2fb10(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f2fc70; body size 278 bytes.
#line 1 "ENTRY_10f2fc70"

undefined4 * __thiscall Recovered_Bulk::FUN_10f2fc70(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f2fdd0; body size 278 bytes.
#line 1 "ENTRY_10f2fdd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f2fdd0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f30180; body size 141 bytes.
#line 1 "ENTRY_10f30180"

undefined4 * __thiscall Recovered_Bulk::FUN_10f30180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10f2ff30(DAT_12126b84 );

  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetEthernetStatusAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RGetEthernetStatusAIOOp;
  thunk_FUN_10f30320();
  param_1[0x185b] = 0;
  param_1[0x185c] = 0;
  param_1[0x185a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10f34260(param_2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f30230; body size 184 bytes.
#line 1 "ENTRY_10f30230"

undefined4 * __fastcall FUN_10f30230(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10f2ff30(DAT_12126b84 );

  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetEthernetStatusAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RGetEthernetStatusAIOOp;
  thunk_FUN_10f30320();
  param_1[0x185b] = 0;
  param_1[0x185c] = 0;
  param_1[0x185a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_10c9b9b0(0);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10c97560(&local_14));
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_10f34260(*puVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f30320; body size 231 bytes.
#line 1 "ENTRY_10f30320"

undefined4 * __fastcall FUN_10f30320(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_1124a160("application/json");
  param_1[0x1843] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1844] = 0;
  param_1[0x1845] = 0;
  param_1[0x1846] = 0;
  *(undefined2 *)(param_1 + 0x1847) = 1;
  *(undefined1 *)((int)param_1 + 0x611e) = 0;
  param_1[0x1848] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetEthernetStatusRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RGetEthernetStatusRequest;
  param_1[0x1849] = 0;
  param_1[0x184a] = 0;
  param_1[0x184b] = 0;
  param_1[0x184c] = 0;
  param_1[0x184d] = 0;
  param_1[0x184e] = 0;
  param_1[0x184f] = 0;
  param_1[0x1850] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f30440; body size 343 bytes.
#line 1 "ENTRY_10f30440"

undefined4 * __thiscall Recovered_Bulk::FUN_10f30440(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10f2ff30(DAT_12126b84 );

  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetNetworkConnectivityTestResultAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RGetNetworkConnectivityTestResultAIOOp;
  thunk_FUN_1124a160("application/json");
  param_1[0x184c] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x184d] = 0;
  param_1[0x184e] = 0;
  param_1[0x184f] = 0;
  *(undefined2 *)(param_1 + 0x1850) = 1;
  *(undefined1 *)((int)param_1 + 0x6142) = 0;
  param_1[0x1851] = 0;
  param_1[9] = (uint)&ghidra_vftable_RGetNetworkConnectivityTestResultRequest;
  param_1[0x184c] = (uint)&ghidra_vftable_RGetNetworkConnectivityTestResultRequest;
  param_1[0x1852] = 0;
  param_1[0x1853] = 0;
  param_1[0x1854] = 0;
  param_1[0x1855] = 0;
  param_1[0x1856] = 0;
  param_1[0x1857] = 0;
  param_1[0x1858] = 0;
  param_1[0x1859] = 0;
  param_1[0x185b] = 0;
  param_1[0x185c] = 0;
  param_1[0x185a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  *(undefined1 *)(param_1 + 0x185d) = 0;
  param_1[0x185e] = 0xffffffff;
  param_1[0x185f] = param_4;
  thunk_FUN_10f344f0(param_2,param_3);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f305f0; body size 231 bytes.
#line 1 "ENTRY_10f305f0"

undefined4 * __fastcall FUN_10f305f0(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_1124a160("application/json");
  param_1[0x1843] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1844] = 0;
  param_1[0x1845] = 0;
  param_1[0x1846] = 0;
  *(undefined2 *)(param_1 + 0x1847) = 1;
  *(undefined1 *)((int)param_1 + 0x611e) = 0;
  param_1[0x1848] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetNetworkConnectivityTestResultRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RGetNetworkConnectivityTestResultRequest;
  param_1[0x1849] = 0;
  param_1[0x184a] = 0;
  param_1[0x184b] = 0;
  param_1[0x184c] = 0;
  param_1[0x184d] = 0;
  param_1[0x184e] = 0;
  param_1[0x184f] = 0;
  param_1[0x1850] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f30710; body size 379 bytes.
#line 1 "ENTRY_10f30710"

undefined4 * __thiscall Recovered_Bulk::FUN_10f30710(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10f2ff30(DAT_12126b84 );

  *param_1 = (undefined4)((uint)&ghidra_vftable_RStartNetworkConnectivityTestAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RStartNetworkConnectivityTestAIOOp;
  thunk_FUN_1124a200("application/json",0);
  param_1[0x188c] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x188d] = 0;
  param_1[0x188e] = 0;
  param_1[0x188f] = 0;
  *(undefined2 *)(param_1 + 0x1890) = 1;
  *(undefined1 *)((int)param_1 + 0x6242) = 0;
  param_1[0x1891] = 0;
  param_1[9] = (uint)&ghidra_vftable_RStartNetworkConnectivityTestRequest;
  param_1[0x188c] = (uint)&ghidra_vftable_RStartNetworkConnectivityTestRequest;
  param_1[0x1892] = 0;
  param_1[0x1893] = 0;
  param_1[0x1894] = 0;
  param_1[0x1895] = 0;
  param_1[0x1896] = 0;
  param_1[0x1897] = 0;
  param_1[0x1898] = 0;
  param_1[0x1899] = 0;
  param_1[0x189a] = 0;
  param_1[0x189b] = 0;
  param_1[0x189c] = 0;
  param_1[0x189d] = 0;
  param_1[0x189e] = 0;
  param_1[0x18a0] = 0;
  param_1[0x18a1] = 0;
  param_1[0x189f] = (uint)&ghidra_vftable_RControlAIOOpRef;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  *(undefined1 *)(param_1 + 0x18a2) = 0;
  thunk_FUN_10f34790(param_2,param_3,param_4);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f308f0; body size 283 bytes.
#line 1 "ENTRY_10f308f0"

undefined4 * __fastcall FUN_10f308f0(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1884] = 0;
  param_1[0x1885] = 0;
  param_1[0x1886] = 0;
  *(undefined2 *)(param_1 + 0x1887) = 1;
  *(undefined1 *)((int)param_1 + 0x621e) = 0;
  param_1[0x1888] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStartNetworkConnectivityTestRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RStartNetworkConnectivityTestRequest;
  param_1[0x1889] = 0;
  param_1[0x188a] = 0;
  param_1[0x188b] = 0;
  param_1[0x188c] = 0;
  param_1[0x188d] = 0;
  param_1[0x188e] = 0;
  param_1[0x188f] = 0;
  param_1[0x1890] = 0;
  param_1[0x1891] = 0;
  param_1[0x1892] = 0;
  param_1[0x1893] = 0;
  param_1[0x1894] = 0;
  param_1[0x1895] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f30a60; body size 293 bytes.
#line 1 "ENTRY_10f30a60"

undefined4 * __thiscall Recovered_Bulk::FUN_10f30a60(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10f2ff30(DAT_12126b84 );

  *param_1 = (undefined4)((uint)&ghidra_vftable_RTempDisableNetworkAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RTempDisableNetworkAIOOp;
  thunk_FUN_1124a200("application/json",0);
  param_1[0x188c] = (uint)&ghidra_vftable_RHTTPDataIO;
  param_1[9] = (uint)&ghidra_vftable_RTempDisableNetworkRequest;
  param_1[0x188c] = (uint)&ghidra_vftable_RTempDisableNetworkRequest;
  param_1[0x188d] = 0;
  param_1[0x188e] = 0;
  param_1[0x188f] = 0;
  param_1[0x1890] = 0;
  param_1[0x1891] = 0;
  param_1[0x1892] = 0;
  param_1[0x1893] = 0;
  param_1[0x1894] = 0;
  param_1[0x1895] = 0;
  param_1[0x1896] = 0;
  param_1[0x1898] = 0;
  param_1[0x1899] = 0;
  param_1[0x1897] = (uint)&ghidra_vftable_RControlAIOOpRef;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *(undefined1 *)(param_1 + 0x189a) = 0;
  thunk_FUN_10f34c20(param_2,param_3,param_4);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f30c90; body size 203 bytes.
#line 1 "ENTRY_10f30c90"

undefined4 * __thiscall Recovered_Bulk::FUN_10f30c90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x6178));

  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    thunk_FUN_10f2ff30(uVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_RGetEthernetStatusAIOOp);
    puVar2[2] = (uint)&ghidra_vftable_RGetEthernetStatusAIOOp;
    thunk_FUN_10f30320();
    puVar2[0x185b] = 0;
    puVar2[0x185c] = 0;
    puVar2[0x185a] = (uint)&ghidra_vftable_RControlAIOOpRef;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    thunk_FUN_10f34260(param_2);
  }

  thunk_FUN_10f2f9b0(puVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetEthernetStatus);
  param_1[2] = (uint)&ghidra_vftable_SCOpGetEthernetStatus;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f30d90; body size 249 bytes.
#line 1 "ENTRY_10f30d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10f30d90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0x6178));

  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    thunk_FUN_10f2ff30(uVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_RGetEthernetStatusAIOOp);
    puVar2[2] = (uint)&ghidra_vftable_RGetEthernetStatusAIOOp;
    thunk_FUN_10f30320();
    puVar2[0x185b] = 0;
    puVar2[0x185c] = 0;
    puVar2[0x185a] = (uint)&ghidra_vftable_RControlAIOOpRef;
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    thunk_FUN_10c9b9b0(0);
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10c97560(&param_2));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_10f34260(*puVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
  }

  thunk_FUN_10f2f9b0(puVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetEthernetStatus);
  param_1[2] = (uint)&ghidra_vftable_SCOpGetEthernetStatus;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f31800; body size 260 bytes.
#line 1 "ENTRY_10f31800"

void __fastcall FUN_10f31800(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


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


// Reference entry 10f31950; body size 260 bytes.
#line 1 "ENTRY_10f31950"

void __fastcall FUN_10f31950(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


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


// Reference entry 10f31aa0; body size 260 bytes.
#line 1 "ENTRY_10f31aa0"

void __fastcall FUN_10f31aa0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


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


// Reference entry 10f31bf0; body size 260 bytes.
#line 1 "ENTRY_10f31bf0"

void __fastcall FUN_10f31bf0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


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


// Reference entry 10f31d40; body size 106 bytes.
#line 1 "ENTRY_10f31d40"

void __fastcall FUN_10f31d40(int param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x20)))->int_release();
  *(undefined4 *)(param_1 + 0x20) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  thunk_FUN_11261f10(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10f31dd0; body size 149 bytes.
#line 1 "ENTRY_10f31dd0"

void __fastcall FUN_10f31dd0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetEthernetStatusAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RGetEthernetStatusAIOOp;
  thunk_FUN_10f33200(uVar1);
  param_1[0x185a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f31e90();

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 10f31e90; body size 330 bytes.
#line 1 "ENTRY_10f31e90"

void __fastcall FUN_10f31e90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetEthernetStatusRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RGetEthernetStatusRequest;
  piVar1 = (int *)((int *)param_1[0x1850]);

  if (piVar1 != (int *)0x0) {
    param_1[0x184f] = 0;
    param_1[0x1850] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x184e)))->int_release();
  param_1[0x184e] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x184d)))->int_release();
  param_1[0x184d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x184c)))->int_release();
  param_1[0x184c] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x184b)))->int_release();
  param_1[0x184b] = 0;
  piVar1 = (int *)((int *)param_1[0x184a]);

  if (piVar1 != (int *)0x0) {
    param_1[0x1849] = 0;
    param_1[0x184a] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 0x1848)))->int_release();
  param_1[0x1848] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1846)))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();

  return;

 } catch (...) { }
}


// Reference entry 10f32040; body size 149 bytes.
#line 1 "ENTRY_10f32040"

void __fastcall FUN_10f32040(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetNetworkConnectivityTestResultAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RGetNetworkConnectivityTestResultAIOOp;
  thunk_FUN_10f33270(uVar1);
  param_1[0x185a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f32100();

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 10f32100; body size 330 bytes.
#line 1 "ENTRY_10f32100"

void __fastcall FUN_10f32100(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetNetworkConnectivityTestResultRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RGetNetworkConnectivityTestResultRequest;
  piVar1 = (int *)((int *)param_1[0x1850]);

  if (piVar1 != (int *)0x0) {
    param_1[0x184f] = 0;
    param_1[0x1850] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x184e)))->int_release();
  param_1[0x184e] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x184d)))->int_release();
  param_1[0x184d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x184c)))->int_release();
  param_1[0x184c] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x184b)))->int_release();
  param_1[0x184b] = 0;
  piVar1 = (int *)((int *)param_1[0x184a]);

  if (piVar1 != (int *)0x0) {
    param_1[0x1849] = 0;
    param_1[0x184a] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 0x1848)))->int_release();
  param_1[0x1848] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1846)))->int_release();
  param_1[0x1846] = 0;
  thunk_FUN_1124a3d0();

  return;

 } catch (...) { }
}


// Reference entry 10f322b0; body size 149 bytes.
#line 1 "ENTRY_10f322b0"

void __fastcall FUN_10f322b0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RStartNetworkConnectivityTestAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RStartNetworkConnectivityTestAIOOp;
  thunk_FUN_10f332e0(uVar1);
  param_1[0x189f] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f32370();

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 10f32370; body size 400 bytes.
#line 1 "ENTRY_10f32370"

void __fastcall FUN_10f32370(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RStartNetworkConnectivityTestRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RStartNetworkConnectivityTestRequest;
  piVar1 = (int *)((int *)param_1[0x1895]);

  if (piVar1 != (int *)0x0) {
    param_1[0x1894] = 0;
    param_1[0x1895] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x1893]);

  if (piVar1 != (int *)0x0) {
    param_1[0x1892] = 0;
    param_1[0x1893] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 0x188f)))->int_release();
  param_1[0x188f] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x188e)))->int_release();
  param_1[0x188e] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x188d)))->int_release();
  param_1[0x188d] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x188c)))->int_release();
  param_1[0x188c] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x188b)))->int_release();
  param_1[0x188b] = 0;
  piVar1 = (int *)((int *)param_1[0x188a]);

  if (piVar1 != (int *)0x0) {
    param_1[0x1889] = 0;
    param_1[0x188a] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 0x1888)))->int_release();
  param_1[0x1888] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1886)))->int_release();
  param_1[0x1886] = 0;
  thunk_FUN_1124a3e0();

  return;

 } catch (...) { }
}


// Reference entry 10f32570; body size 149 bytes.
#line 1 "ENTRY_10f32570"

void __fastcall FUN_10f32570(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RTempDisableNetworkAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RTempDisableNetworkAIOOp;
  thunk_FUN_10f33350(uVar1);
  param_1[0x1897] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f32630();

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 10f32630; body size 288 bytes.
#line 1 "ENTRY_10f32630"

void __fastcall FUN_10f32630(undefined4 *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_RTempDisableNetworkRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RTempDisableNetworkRequest;

  ((SCStr *)((SCStr *)(param_1 + 0x188b)))->int_release();
  param_1[0x188b] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x188a)))->int_release();
  param_1[0x188a] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1889)))->int_release();
  param_1[0x1889] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1888)))->int_release();
  param_1[0x1888] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1887)))->int_release();
  param_1[0x1887] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1886)))->int_release();
  param_1[0x1886] = 0;
  piVar1 = (int *)((int *)param_1[0x1885]);

  if (piVar1 != (int *)0x0) {
    param_1[0x1884] = 0;
    param_1[0x1885] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_1124a3e0();

  return;

 } catch (...) { }
}


// Reference entry 10f32a90; body size 127 bytes.
#line 1 "ENTRY_10f32a90"

int __thiscall Recovered_Bulk::FUN_10f32a90(byte param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x20)))->int_release();
  *(undefined4 *)(param_1 + 0x20) = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  thunk_FUN_11261f10(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10f32b40; body size 174 bytes.
#line 1 "ENTRY_10f32b40"

undefined4 * __thiscall Recovered_Bulk::FUN_10f32b40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetEthernetStatusAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RGetEthernetStatusAIOOp;
  thunk_FUN_10f33200(uVar1);
  param_1[0x185a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f31e90();
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6178);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f32c50; body size 174 bytes.
#line 1 "ENTRY_10f32c50"

undefined4 * __thiscall Recovered_Bulk::FUN_10f32c50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetNetworkConnectivityTestResultAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RGetNetworkConnectivityTestResultAIOOp;
  thunk_FUN_10f33270(uVar1);
  param_1[0x185a] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f32100();
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6180);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f32d60; body size 174 bytes.
#line 1 "ENTRY_10f32d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10f32d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RStartNetworkConnectivityTestAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RStartNetworkConnectivityTestAIOOp;
  thunk_FUN_10f332e0(uVar1);
  param_1[0x189f] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f32370();
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x628c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f32e70; body size 174 bytes.
#line 1 "ENTRY_10f32e70"

undefined4 * __thiscall Recovered_Bulk::FUN_10f32e70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RTempDisableNetworkAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RTempDisableNetworkAIOOp;
  thunk_FUN_10f33350(uVar1);
  param_1[0x1897] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f32630();
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = 0;
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x626c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f33080; body size 76 bytes.
#line 1 "ENTRY_10f33080"

void __fastcall FUN_10f33080(int param_1)

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


// Reference entry 10f330e0; body size 76 bytes.
#line 1 "ENTRY_10f330e0"

void __fastcall FUN_10f330e0(int param_1)

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


// Reference entry 10f33140; body size 76 bytes.
#line 1 "ENTRY_10f33140"

void __fastcall FUN_10f33140(int param_1)

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


// Reference entry 10f331a0; body size 76 bytes.
#line 1 "ENTRY_10f331a0"

void __fastcall FUN_10f331a0(int param_1)

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


// Reference entry 10f33200; body size 85 bytes.
#line 1 "ENTRY_10f33200"

void __fastcall FUN_10f33200(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6170) != 0) && (*(int **)(param_1 + 0x616c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x616c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x616c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x616c) = 0;
    *(undefined4 *)(param_1 + 0x6170) = 0;
  }
  return;
}


// Reference entry 10f33270; body size 85 bytes.
#line 1 "ENTRY_10f33270"

void __fastcall FUN_10f33270(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6170) != 0) && (*(int **)(param_1 + 0x616c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x616c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x616c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x616c) = 0;
    *(undefined4 *)(param_1 + 0x6170) = 0;
  }
  return;
}


// Reference entry 10f332e0; body size 85 bytes.
#line 1 "ENTRY_10f332e0"

void __fastcall FUN_10f332e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6284) != 0) && (*(int **)(param_1 + 0x6280) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6280) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6280));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6280) = 0;
    *(undefined4 *)(param_1 + 0x6284) = 0;
  }
  return;
}


// Reference entry 10f33350; body size 85 bytes.
#line 1 "ENTRY_10f33350"

void __fastcall FUN_10f33350(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6264) != 0) && (*(int **)(param_1 + 0x6260) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6260) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6260));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6260) = 0;
    *(undefined4 *)(param_1 + 0x6264) = 0;
  }
  return;
}


// Reference entry 10f333c0; body size 149 bytes.
#line 1 "ENTRY_10f333c0"

void __thiscall Recovered_Bulk::FUN_10f333c0(int *param_2,undefined4 param_3)
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


// Reference entry 10f334a0; body size 149 bytes.
#line 1 "ENTRY_10f334a0"

void __thiscall Recovered_Bulk::FUN_10f334a0(int *param_2,undefined4 param_3)
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


// Reference entry 10f33580; body size 149 bytes.
#line 1 "ENTRY_10f33580"

void __thiscall Recovered_Bulk::FUN_10f33580(int *param_2,undefined4 param_3)
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


// Reference entry 10f33660; body size 149 bytes.
#line 1 "ENTRY_10f33660"

void __thiscall Recovered_Bulk::FUN_10f33660(int *param_2,undefined4 param_3)
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


// Reference entry 10f338e0; body size 270 bytes.
#line 1 "ENTRY_10f338e0"

void __thiscall Recovered_Bulk::FUN_10f338e0(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (param_2 == (int *)0x0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)param_1[5]);
    }
    pcVar7 = (char *)("Received unparsable player response:\n%s");
    uVar6 = (undefined4)(1);
  }
  else {
    piVar3 = (int *)((int *)createPropertyBag());
    piVar1 = (int *)((int *)*piVar3);
    *piVar3 = (int)(0);
    piVar3 = (int *)((int *)param_1[0xd]);
    local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    if (piVar3 != (int *)0x0) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      (**(code **)(*piVar3 + 8))();
    }
    param_1[0xc] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar4 = (int)(0);
    }
    else {
      iVar4 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_1[0xd] = iVar4;
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    (**(code **)(*param_2 + 0x88))(param_1[0xc]);
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)param_1[5]);
    }
    pcVar7 = (char *)("Received and parsed player response:\n%s");
    uVar6 = (undefined4)(3);
  }
  thunk_FUN_112af4e0("RGetEthernetStatusRequest",uVar6,pcVar7,puVar5,uVar2);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f33a40; body size 211 bytes.
#line 1 "ENTRY_10f33a40"

void __thiscall Recovered_Bulk::FUN_10f33a40(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (param_2 == 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
    }
    pcVar5 = (char *)("Received unparsable player response:\n%s");
    uVar4 = (undefined4)(1);
  }
  else {
    if (param_2 != *(int *)(param_1 + 0x30)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x34));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
        (**(code **)(*piVar1 + 8))(uVar2);
      }
      *(int *)(param_1 + 0x30) = param_2;
      *(int **)(param_1 + 0x34) = param_3;
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 4))();
      }
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
    }
    pcVar5 = (char *)("Received and parsed player response:\n%s");
    uVar4 = (undefined4)(3);
  }
  thunk_FUN_112af4e0("RGetNetworkConnectivityTestResultRequest",uVar4,pcVar5,puVar3);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f33b50; body size 211 bytes.
#line 1 "ENTRY_10f33b50"

void __thiscall Recovered_Bulk::FUN_10f33b50(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (param_2 == 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
    }
    pcVar5 = (char *)("Received unparsable player response:\n%s");
    uVar4 = (undefined4)(1);
  }
  else {
    if (param_2 != *(int *)(param_1 + 0x44)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x48));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
        (**(code **)(*piVar1 + 8))(uVar2);
      }
      *(int *)(param_1 + 0x44) = param_2;
      *(int **)(param_1 + 0x48) = param_3;
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 4))();
      }
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
    }
    pcVar5 = (char *)("Received and parsed player response:\n%s");
    uVar4 = (undefined4)(3);
  }
  thunk_FUN_112af4e0("RStartNetworkConnectivityTestRequest",uVar4,pcVar5,puVar3);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f33ce0; body size 69 bytes.
#line 1 "ENTRY_10f33ce0"

undefined1 * __fastcall FUN_10f33ce0(SCStr *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x612c));
  puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c));
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(puVar1);
  }
  return (undefined1 *)(puVar2);
}


// Reference entry 10f33d40; body size 69 bytes.
#line 1 "ENTRY_10f33d40"

undefined1 * __fastcall FUN_10f33d40(SCStr *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x612c));
  puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c));
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(puVar1);
  }
  return (undefined1 *)(puVar2);
}


// Reference entry 10f33da0; body size 69 bytes.
#line 1 "ENTRY_10f33da0"

undefined1 * __fastcall FUN_10f33da0(SCStr *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x622c));
  puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x622c));
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(puVar1);
  }
  return (undefined1 *)(puVar2);
}


// Reference entry 10f33e00; body size 69 bytes.
#line 1 "ENTRY_10f33e00"

undefined1 * __fastcall FUN_10f33e00(SCStr *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6218));
  puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6218));
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(puVar1);
  }
  return (undefined1 *)(puVar2);
}


// Reference entry 10f359e0; body size 128 bytes.
#line 1 "ENTRY_10f359e0"

void __fastcall FUN_10f359e0(int param_1)

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


// Reference entry 10f35a80; body size 128 bytes.
#line 1 "ENTRY_10f35a80"

void __fastcall FUN_10f35a80(int param_1)

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


// Reference entry 10f35b20; body size 128 bytes.
#line 1 "ENTRY_10f35b20"

void __fastcall FUN_10f35b20(int param_1)

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


// Reference entry 10f35bc0; body size 128 bytes.
#line 1 "ENTRY_10f35bc0"

void __fastcall FUN_10f35bc0(int param_1)

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


// Reference entry 10f35c60; body size 232 bytes.
#line 1 "ENTRY_10f35c60"

void __thiscall Recovered_Bulk::FUN_10f35c60(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f35d90; body size 232 bytes.
#line 1 "ENTRY_10f35d90"

void __thiscall Recovered_Bulk::FUN_10f35d90(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f35ec0; body size 232 bytes.
#line 1 "ENTRY_10f35ec0"

void __thiscall Recovered_Bulk::FUN_10f35ec0(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f35ff0; body size 232 bytes.
#line 1 "ENTRY_10f35ff0"

void __thiscall Recovered_Bulk::FUN_10f35ff0(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f36120; body size 103 bytes.
#line 1 "ENTRY_10f36120"

undefined4 * __thiscall Recovered_Bulk::FUN_10f36120(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f361a0; body size 103 bytes.
#line 1 "ENTRY_10f361a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f361a0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f36220; body size 103 bytes.
#line 1 "ENTRY_10f36220"

undefined4 * __thiscall Recovered_Bulk::FUN_10f36220(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f362a0; body size 103 bytes.
#line 1 "ENTRY_10f362a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f362a0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f364a0; body size 101 bytes.
#line 1 "ENTRY_10f364a0"

undefined4 __thiscall Recovered_Bulk::FUN_10f364a0(void *param_2,uint param_3,size_t *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint _Size;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x34));
  if (uVar1 != 0) {
    uVar2 = (uint)(*(uint *)(param_1 + 0x38));
    if (param_2 == (void *)0x0) {
      if (uVar2 == 0) {
        return (undefined4)(1);
      }
    }
    else if (uVar2 <= uVar1) {
      _Size = (uint)(uVar1 - uVar2);
      if (param_3 < uVar1 - uVar2) {
        _Size = (uint)(param_3);
      }
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0x30) != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x30));
      }
      memmove(param_2,puVar3 + uVar2,_Size);
      *param_4 = (size_t)(_Size);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + _Size;
      if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x34)) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f36520; body size 101 bytes.
#line 1 "ENTRY_10f36520"

undefined4 __thiscall Recovered_Bulk::FUN_10f36520(void *param_2,uint param_3,size_t *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint _Size;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x24));
  if (uVar1 != 0) {
    uVar2 = (uint)(*(uint *)(param_1 + 0x28));
    if (param_2 == (void *)0x0) {
      if (uVar2 == 0) {
        return (undefined4)(1);
      }
    }
    else if (uVar2 <= uVar1) {
      _Size = (uint)(uVar1 - uVar2);
      if (param_3 < uVar1 - uVar2) {
        _Size = (uint)(param_3);
      }
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
      }
      memmove(param_2,puVar3 + uVar2,_Size);
      *param_4 = (size_t)(_Size);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + _Size;
      if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x24)) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f376d0; body size 166 bytes.
#line 1 "ENTRY_10f376d0"

undefined4 __thiscall Recovered_Bulk::FUN_10f376d0(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar3 = (void **)(&local_10);

  while (ExceptionList = ppvVar3, cVar1 == '\0') {
    thunk_FUN_10f376d0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);

    ((SCStr *)((SCStr *)(param_3 + 6)))->int_release();
    param_3[6] = 0;

    ((SCStr *)((SCStr *)(param_3 + 5)))->int_release();
    *(undefined4 *)(param_3 + 5) = 0;

    thunk_FUN_1148a50e(param_3,0x1c,uVar4);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10f377b0; body size 73 bytes.
#line 1 "ENTRY_10f377b0"

int * __thiscall Recovered_Bulk::FUN_10f377b0(int *param_2,int *param_3)
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
  return (int *)(param_2);
}


// Reference entry 10f378a0; body size 113 bytes.
#line 1 "ENTRY_10f378a0"

void FUN_10f378a0(undefined4 param_1,int param_2)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_2 + 0x18)))->int_release();
  *(undefined4 *)(param_2 + 0x18) = 0;

  ((SCStr *)((SCStr *)(param_2 + 0x14)))->int_release();
  *(undefined4 *)(param_2 + 0x14) = 0;
  thunk_FUN_1148a50e(param_2,0x1c,uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10f379c0; body size 222 bytes.
#line 1 "ENTRY_10f379c0"

int * __thiscall Recovered_Bulk::FUN_10f379c0(int *param_2,int *param_3)
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

  thunk_FUN_10f377b0(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_3;
    *(undefined8 *)(puVar3 + 5) = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10f38b30(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10f37ce0; body size 100 bytes.
#line 1 "ENTRY_10f37ce0"

void FUN_10f37ce0(undefined4 param_1,int param_2)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_2 + 8)))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;

  ((SCStr *)((SCStr *)(param_2 + 4)))->int_release();
  *(undefined4 *)(param_2 + 4) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10f381e0; body size 127 bytes.
#line 1 "ENTRY_10f381e0"

void __fastcall FUN_10f381e0(int param_1)

{
 try {
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 != 0) {

    ((SCStr *)((SCStr *)(iVar1 + 0x18)))->int_release();
    *(undefined4 *)(iVar1 + 0x18) = 0;

    ((SCStr *)((SCStr *)(iVar1 + 0x14)))->int_release();
    *(undefined4 *)(iVar1 + 0x14) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c,uVar2);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f38390; body size 98 bytes.
#line 1 "ENTRY_10f38390"

void __fastcall FUN_10f38390(int param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10f38490; body size 83 bytes.
#line 1 "ENTRY_10f38490"

void __fastcall FUN_10f38490(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f38500; body size 153 bytes.
#line 1 "ENTRY_10f38500"

void __fastcall FUN_10f38500(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  piVar1 = (int *)(param_1 + 9);
  param_1[0xb] = 0;
  thunk_FUN_10f376d0(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x1c,uVar2);
  param_1[3] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[3] = (uint)&ghidra_vftable_SCIObj;

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);

  return;

 } catch (...) { }
}


// Reference entry 10f38630; body size 189 bytes.
#line 1 "ENTRY_10f38630"

int __thiscall Recovered_Bulk::FUN_10f38630(int *param_2)
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

  thunk_FUN_10f377b0(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_2;
    *(undefined8 *)(puVar3 + 5) = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10f38b30(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10f38830; body size 122 bytes.
#line 1 "ENTRY_10f38830"

int __thiscall Recovered_Bulk::FUN_10f38830(byte param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  *(undefined4 *)(param_1 + 8) = 0;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc,uVar1);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10f388d0; body size 174 bytes.
#line 1 "ENTRY_10f388d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f388d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  piVar1 = (int *)(param_1 + 9);
  param_1[0xb] = 0;
  thunk_FUN_10f376d0(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x1c,uVar2);
  param_1[3] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[3] = (uint)&ghidra_vftable_SCIObj;

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30,uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f39360; body size 1155 bytes.
#line 1 "ENTRY_10f39360"

void FUN_10f39360(void)

{
 try {
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(0,&DAT_121a7164,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(1,&DAT_121a715c,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(2,&DAT_121a7170,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(3,&DAT_121a7174,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(4,&DAT_121a7158,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(5,&DAT_121a7160,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(6,&DAT_121a7108,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(7,&DAT_121a7118,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(8,&DAT_121a7114,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(9,&DAT_121a7154,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(10,&DAT_121a714c,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(0xb,&DAT_121a7168,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(0xc,&DAT_121a7140,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(0xd,&DAT_121a7148,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(0xe,&DAT_121a7110,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(0xf,&DAT_121a7104,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)(local_18))->int_allocRep("");

  thunk_FUN_10f3bfd0(0x10,&DAT_121a716c,local_18);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("");

  thunk_FUN_10f3bfd0(0x11,&DAT_121a7144,&local_14);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  thunk_FUN_10f3c4a0(&DAT_121a7100);

  return;

 } catch (...) { }
}


// Reference entry 10f3bc50; body size 158 bytes.
#line 1 "ENTRY_10f3bc50"

undefined4 __stdcall FUN_10f3bc50(undefined4 param_1)

{
 try {
  char *pcVar1;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pcVar1 = (char *)((char *)thunk_FUN_11265090(0x1a,"https://setup.ws.sonos.com",
                                      DAT_12126b84 ));
  ((SCStr *)(local_18))->int_allocRep(pcVar1);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("/ob/v3/");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_101a2e90(param_1,local_18,&local_14);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_18))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10f3bd50; body size 68 bytes.
#line 1 "ENTRY_10f3bd50"

uint __thiscall Recovered_Bulk::FUN_10f3bd50(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint in_EAX;
  int iVar2;
  undefined1 local_c [12];
  
  iVar1 = (int)(param_2);
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = (int)(thunk_FUN_10f377b0(local_c,&param_2));
    in_EAX = (uint)(*(uint *)(iVar2 + 8));
    if ((*(char *)(in_EAX + 0xd) == '\0') && (*(int *)(in_EAX + 0x10) <= iVar1)) {
      return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f3beb0; body size 105 bytes.
#line 1 "ENTRY_10f3beb0"

undefined1 __thiscall Recovered_Bulk::FUN_10f3beb0(undefined4 param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  uVar3 = (undefined4)(thunk_FUN_10f3b950(&param_2,param_2));

  uVar1 = (undefined1)((**(code **)(*param_1 + 0x2c))(uVar3,uVar2));

  ((SCStr *)((SCStr *)&param_2))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10f3bf40; body size 109 bytes.
#line 1 "ENTRY_10f3bf40"

void __thiscall Recovered_Bulk::FUN_10f3bf40(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10f3b950(&param_2,param_2);
  puVar2 = (undefined4 *)(&param_2);

  uVar3 = (undefined4)(param_3);
  thunk_FUN_10e0f790(puVar2,param_1,param_3,uVar1);
  thunk_FUN_10ef64d0(puVar2,param_1,uVar3);

  ((SCStr *)((SCStr *)&param_2))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10f3ce50; body size 252 bytes.
#line 1 "ENTRY_10f3ce50"

void __fastcall FUN_10f3ce50(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpJoinHousehold);
  param_1[2] = (uint)&ghidra_vftable_SCOpJoinHousehold;
  param_1[3] = (uint)&ghidra_vftable_SCOpJoinHousehold;
  param_1[4] = (uint)&ghidra_vftable_SCOpJoinHousehold;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1,uVar2);
  }
  thunk_FUN_102cc870();

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0xf)))->int_release();
  param_1[0xf] = 0;
  piVar1 = (int *)((int *)param_1[0xc]);

  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[4] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjJHHListener;
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f3cfa0; body size 252 bytes.
#line 1 "ENTRY_10f3cfa0"

void __fastcall FUN_10f3cfa0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpLegacyApConnectJoinNetwork);
  param_1[2] = (uint)&ghidra_vftable_SCOpLegacyApConnectJoinNetwork;
  param_1[3] = (uint)&ghidra_vftable_SCOpLegacyApConnectJoinNetwork;
  param_1[4] = (uint)&ghidra_vftable_SCOpLegacyApConnectJoinNetwork;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1,uVar2);
  }
  thunk_FUN_102cc870();

  ((SCStr *)((SCStr *)(param_1 + 0xe)))->int_release();
  param_1[0xe] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0xd)))->int_release();
  param_1[0xd] = 0;
  piVar1 = (int *)((int *)param_1[0xc]);

  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[4] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjJHHListener;
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f3d1b0; body size 276 bytes.
#line 1 "ENTRY_10f3d1b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f3d1b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpJoinHousehold);
  param_1[2] = (uint)&ghidra_vftable_SCOpJoinHousehold;
  param_1[3] = (uint)&ghidra_vftable_SCOpJoinHousehold;
  param_1[4] = (uint)&ghidra_vftable_SCOpJoinHousehold;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1,uVar2);
  }
  thunk_FUN_102cc870();

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0xf)))->int_release();
  param_1[0xf] = 0;
  piVar1 = (int *)((int *)param_1[0xc]);

  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[4] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjJHHListener;
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb8);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f3d310; body size 276 bytes.
#line 1 "ENTRY_10f3d310"

undefined4 * __thiscall Recovered_Bulk::FUN_10f3d310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpLegacyApConnectJoinNetwork);
  param_1[2] = (uint)&ghidra_vftable_SCOpLegacyApConnectJoinNetwork;
  param_1[3] = (uint)&ghidra_vftable_SCOpLegacyApConnectJoinNetwork;
  param_1[4] = (uint)&ghidra_vftable_SCOpLegacyApConnectJoinNetwork;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1,uVar2);
  }
  thunk_FUN_102cc870();

  ((SCStr *)((SCStr *)(param_1 + 0xe)))->int_release();
  param_1[0xe] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0xd)))->int_release();
  param_1[0xd] = 0;
  piVar1 = (int *)((int *)param_1[0xc]);

  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[4] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[6]);

  if (piVar1 != (int *)0x0) {
    param_1[5] = 0;
    param_1[6] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjJHHListener;
  param_1[2] = (uint)&ghidra_vftable_SCLoggingHelper;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb0);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f3d4a0; body size 170 bytes.
#line 1 "ENTRY_10f3d4a0"

void __fastcall FUN_10f3d4a0(int *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_111046c0(DAT_12126b84 );
  thunk_FUN_11103f20();
  piVar1 = (int *)((int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_1 + 0xc))());
    (**(code **)(*piVar1 + 4))();
  }

  thunk_FUN_1101aec0();
  param_1[8] = 8;
  if (param_1[9] != 0) {
    param_1[9] = 0;
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  (**(code **)(param_1[4] + 8))();

  return;

 } catch (...) { }
}


// Reference entry 10f3d580; body size 170 bytes.
#line 1 "ENTRY_10f3d580"

void __fastcall FUN_10f3d580(int *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_111046c0(DAT_12126b84 );
  thunk_FUN_11103f20();
  piVar1 = (int *)((int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_1 + 0xc))());
    (**(code **)(*piVar1 + 4))();
  }

  thunk_FUN_1101aec0();
  param_1[8] = 8;
  if (param_1[9] != 0) {
    param_1[9] = 0;
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  (**(code **)(param_1[4] + 8))();

  return;

 } catch (...) { }
}


// Reference entry 10f3d6c0; body size 203 bytes.
#line 1 "ENTRY_10f3d6c0"

int __thiscall Recovered_Bulk::FUN_10f3d6c0(int param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar2 = (int)(thunk_FUN_10e0ac50(DAT_12126b84 ));
  param_1[7] = iVar2;
  if (param_1[0xb] == 0) {
    piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))());
    (**(code **)(*piVar3 + 4))();

    thunk_FUN_1101aec0();
    param_1[8] = 7;
    if ((int *)param_1[9] != (int *)0x0) {
      iVar2 = (int)(*(int *)param_1[9]);
      uVar1 = (undefined2)((**(code **)(*param_1 + 0x24))());
      (**(code **)(iVar2 + 0x14))(param_1[7],uVar1);
      param_1[9] = 0;
    }

    (**(code **)(*piVar3 + 8))();
  }
  else {
    param_1[8] = 1;
    param_1[9] = param_2;
    thunk_FUN_1101ae90();
    thunk_FUN_10f3da70();
  }

  return (int)(param_1[7]);

 } catch (...) { }
}


// Reference entry 10f3d7c0; body size 203 bytes.
#line 1 "ENTRY_10f3d7c0"

int __thiscall Recovered_Bulk::FUN_10f3d7c0(int param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar2 = (int)(thunk_FUN_10e0ac50(DAT_12126b84 ));
  param_1[7] = iVar2;
  if (param_1[0xb] == 0) {
    piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))());
    (**(code **)(*piVar3 + 4))();

    thunk_FUN_1101aec0();
    param_1[8] = 7;
    if ((int *)param_1[9] != (int *)0x0) {
      iVar2 = (int)(*(int *)param_1[9]);
      uVar1 = (undefined2)((**(code **)(*param_1 + 0x24))());
      (**(code **)(iVar2 + 0x14))(param_1[7],uVar1);
      param_1[9] = 0;
    }

    (**(code **)(*piVar3 + 8))();
  }
  else {
    param_1[8] = 1;
    param_1[9] = param_2;
    thunk_FUN_1101ae90();
    thunk_FUN_10f3e260();
  }

  return (int)(param_1[7]);

 } catch (...) { }
}


// Reference entry 10f3e260; body size 800 bytes.
#line 1 "ENTRY_10f3e260"

void __fastcall FUN_10f3e260(int *param_1)

{
 try {
  undefined4 *puVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  char *pcVar9;
  size_t sVar10;
  char *pcVar11;
  undefined4 **ppuVar12;
  undefined4 **ppuVar13;
  undefined4 **ppuVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 *local_28;
  char *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  thunk_FUN_10c98710(&local_28);

  thunk_FUN_10c98c80(&local_24);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if ((local_24 == (char *)0x0) || (*local_24 == '\0')) {
    local_20 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    pcVar9 = (char *)(local_24);
    do {
      cVar2 = (char)(*pcVar9);
      pcVar9 = (char *)(pcVar9 + 1);
    } while (cVar2 != '\0');
    sVar10 = (size_t)((int)pcVar9 - (int)(local_24 + 1));
    puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar10 + 0x11,uVar4));
    puVar1 = (undefined4 *)(puVar5 + 4);
    *puVar5 = (undefined4)(1);
    puVar5[3] = sVar10;
    puVar5[2] = 0;
    puVar5[1] = 0;
    memcpy(puVar1,local_24,sVar10);
    *(undefined1 *)((int)puVar1 + sVar10) = 0;
    local_20 = (undefined4 *)(puVar1);
  }
  pcVar9 = (char *)((char *)param_1[0xe]);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
    local_1c = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    pcVar11 = (char *)(pcVar9);
    do {
      cVar2 = (char)(*pcVar11);
      pcVar11 = (char *)(pcVar11 + 1);
    } while (cVar2 != '\0');
    sVar10 = (size_t)((int)pcVar11 - (int)(pcVar9 + 1));
    puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar10 + 0x11,uVar4));
    puVar1 = (undefined4 *)(puVar5 + 4);
    *puVar5 = (undefined4)(1);
    puVar5[3] = sVar10;
    puVar5[2] = 0;
    puVar5[1] = 0;
    memcpy(puVar1,pcVar9,sVar10);
    *(undefined1 *)((int)puVar1 + sVar10) = 0;
    local_1c = (undefined4 *)(puVar1);
  }
  pcVar9 = (char *)((char *)param_1[0xd]);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
    local_18 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    pcVar11 = (char *)(pcVar9);
    do {
      cVar2 = (char)(*pcVar11);
      pcVar11 = (char *)(pcVar11 + 1);
    } while (cVar2 != '\0');
    sVar10 = (size_t)((int)pcVar11 - (int)(pcVar9 + 1));
    puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar10 + 0x11,uVar4));
    puVar1 = (undefined4 *)(puVar5 + 4);
    *puVar5 = (undefined4)(1);
    puVar5[3] = sVar10;
    puVar5[2] = 0;
    puVar5[1] = 0;
    memcpy(puVar1,pcVar9,sVar10);
    *(undefined1 *)((int)puVar1 + sVar10) = 0;
    local_18 = (undefined4 *)(puVar1);
  }
  uVar16 = (undefined4)(0);
  uVar15 = (undefined4)(1);
  ppuVar14 = (undefined4 **)(&local_20);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ppuVar13 = (undefined4 **)(&local_1c);
  ppuVar12 = (undefined4 **)(&local_18);
  thunk_FUN_111046c0(ppuVar12,ppuVar13,ppuVar14,1,0);
  local_11 = (char)(thunk_FUN_111076e0(ppuVar12,ppuVar13,ppuVar14,uVar15,uVar16));
  puVar1 = (undefined4 *)(local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if ((local_18 != (undefined4 *)0x0) && (puVar5 = local_18 + -4, (int)local_18[-4] < 0xffff)) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
    if (iVar6 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar5);
    }
  }
  puVar1 = (undefined4 *)(local_1c);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if ((local_1c != (undefined4 *)0x0) && (puVar5 = local_1c + -4, (int)local_1c[-4] < 0xffff)) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
    if (iVar6 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar5);
    }
  }
  puVar1 = (undefined4 *)(local_20);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if ((local_20 != (undefined4 *)0x0) && (puVar5 = local_20 + -4, (int)local_20[-4] < 0xffff)) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar5));
    if (iVar6 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar5);
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (local_11 == '\0') {
    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if (local_28 != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)(local_28);
    }
    thunk_FUN_10302280(param_1 + 2,"Failed to add %s to the network- immediate error (%i retries)",
                       puVar8,param_1[0x2a]);
    piVar7 = (int *)((int *)(**(code **)(*param_1 + 0xc))());
    (**(code **)(*piVar7 + 4))();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    thunk_FUN_1101aec0();
    param_1[8] = 7;
    if ((int *)param_1[9] != (int *)0x0) {
      iVar6 = (int)(*(int *)param_1[9]);
      uVar3 = (undefined2)((**(code **)(*param_1 + 0x24))());
      (**(code **)(iVar6 + 0x14))(param_1[7],uVar3);
      param_1[9] = 0;
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    (**(code **)(*piVar7 + 8))();
  }
  else {
    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if (local_28 != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)(local_28);
    }
    thunk_FUN_10302280(param_1 + 2,"Adding %s to wireless network, but not household (%i retries)",
                       puVar8,param_1[0x2a]);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&local_24))->int_release();
  local_24 = (char *)((char *)0x0);

  ((SCStr *)((SCStr *)&local_28))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10f3e650; body size 171 bytes.
#line 1 "ENTRY_10f3e650"

void __thiscall Recovered_Bulk::FUN_10f3e650(int param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar3 + 4))();
  }

  thunk_FUN_1101aec0();
  param_1[8] = param_2;
  if ((int *)param_1[9] != (int *)0x0) {
    if (param_2 != 8) {
      iVar1 = (int)(*(int *)param_1[9]);
      uVar2 = (undefined2)((**(code **)(*param_1 + 0x24))());
      (**(code **)(iVar1 + 0x14))(param_1[7],uVar2);
    }
    param_1[9] = 0;
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f3e730; body size 171 bytes.
#line 1 "ENTRY_10f3e730"

void __thiscall Recovered_Bulk::FUN_10f3e730(int param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar3 + 4))();
  }

  thunk_FUN_1101aec0();
  param_1[8] = param_2;
  if ((int *)param_1[9] != (int *)0x0) {
    if (param_2 != 8) {
      iVar1 = (int)(*(int *)param_1[9]);
      uVar2 = (undefined2)((**(code **)(*param_1 + 0x24))());
      (**(code **)(iVar1 + 0x14))(param_1[7],uVar2);
    }
    param_1[9] = 0;
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f3ee80; body size 103 bytes.
#line 1 "ENTRY_10f3ee80"

undefined4 * __thiscall Recovered_Bulk::FUN_10f3ee80(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f3ef00; body size 103 bytes.
#line 1 "ENTRY_10f3ef00"

undefined4 * __thiscall Recovered_Bulk::FUN_10f3ef00(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f3f060; body size 96 bytes.
#line 1 "ENTRY_10f3f060"

uint FUN_10f3f060(void)

{
 try {
  int iVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_1037a2b0(&local_14,DAT_12126b84 ));
  iVar1 = (int)(*piVar2);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (uint)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);

 } catch (...) { }
}


// Reference entry 10f3f110; body size 189 bytes.
#line 1 "ENTRY_10f3f110"

undefined4 * __thiscall Recovered_Bulk::FUN_10f3f110(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);

  thunk_FUN_11240650(uVar1);
  param_1[1] = (uint)&ghidra_vftable_RControlAIOOpCB;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioTimeSetRadioLocation);
  param_1[1] = (uint)&ghidra_vftable_SCRadioTimeSetRadioLocation;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x49] = (uint)&ghidra_vftable_RControlAIOOpRef;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f3f210; body size 290 bytes.
#line 1 "ENTRY_10f3f210"

void __fastcall FUN_10f3f210(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioTimeSetRadioLocation);
  param_1[1] = (uint)&ghidra_vftable_SCRadioTimeSetRadioLocation;
  if ((int *)param_1[0x48] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x48] + 0x14))(uVar2);
    if ((undefined4 *)param_1[0x48] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x48])(1);
    }
    param_1[0x48] = 0;
  }
  if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x47])(1);
  }
  param_1[0x49] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  iVar1 = (int)(param_1[5]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[4]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[1] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);

  return;

 } catch (...) { }
}


// Reference entry 10f3f3c0; body size 315 bytes.
#line 1 "ENTRY_10f3f3c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f3f3c0(byte param_2)
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

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioTimeSetRadioLocation);
  param_1[1] = (uint)&ghidra_vftable_SCRadioTimeSetRadioLocation;
  if ((int *)param_1[0x48] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x48] + 0x14))(uVar2);
    if ((undefined4 *)param_1[0x48] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x48])(1);
    }
    param_1[0x48] = 0;
  }
  if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x47])(1);
  }
  param_1[0x49] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  iVar1 = (int)(param_1[5]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[4]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[1] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x130);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f3f590; body size 182 bytes.
#line 1 "ENTRY_10f3f590"

void __fastcall FUN_10f3f590(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  thunk_FUN_1109f7f0();
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)((undefined1 *)param_1[5]);
  }
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[4] != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((undefined1 *)param_1[4]);
  }
  iVar2 = (int)(thunk_FUN_1109e280(puVar6,puVar5));
  if ((iVar2 == 0) || (param_1[0x4b] != 0)) {
    if ((int *)param_1[2] != (int *)0x0) {
      (**(code **)(*(int *)param_1[2] + 8))(0);
    }
    if (*(char *)(param_1 + 3) != '\0') {
      (**(code **)*param_1)(1);
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)((undefined4 *)param_1[0x4a]);
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
      param_1[0x4b] = 0;
    }
    param_1[0x4a] = iVar2;
    thunk_FUN_1123fce0(iVar2 + 4);
    if ((int *)param_1[0x4a] != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(*(int *)param_1[0x4a] + 4))(param_1 + 1,0));
      param_1[0x4b] = uVar4;
    }
  }
  return;
}


// Reference entry 10f3f680; body size 104 bytes.
#line 1 "ENTRY_10f3f680"

void __thiscall Recovered_Bulk::FUN_10f3f680(int param_2,short param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x124) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x124) + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x124) + 8))());
      goto LAB_10f3f6ab;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0x128));
LAB_10f3f6ab:
  if (iVar2 == param_2) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 8))(param_3 == 0);
    }
    if (*(char *)(param_1 + 8) != '\0') {
      (*(code *)**(undefined4 **)(param_1 + -4))(1);
    }
  }
  return;
}


// Reference entry 10f3f970; body size 370 bytes.
#line 1 "ENTRY_10f3f970"

void __fastcall FUN_10f3f970(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(char *)(param_1 + 6) == '\0') {
    thunk_FUN_1109f7f0();
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)param_1[4] != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)param_1[4]);
    }
    iVar2 = (int)(thunk_FUN_1109e280(puVar6));
    if ((iVar2 == 0) || (param_1[0x4b] != 0)) {
      if ((int *)param_1[2] != (int *)0x0) {
        (**(code **)(*(int *)param_1[2] + 8))();
      }
      if (*(char *)(param_1 + 3) != '\0') {
        (**(code **)*param_1)();

        return;
      }
    }
    else {
      puVar1 = (undefined4 *)((undefined4 *)param_1[0x4a]);
      if (puVar1 != (undefined4 *)0x0) {
        iVar3 = (int)(thunk_FUN_1123fcd0());
        if (iVar3 == 0) {
          (**(code **)*puVar1)();
        }
        param_1[0x4b] = 0;
      }
      param_1[0x4a] = iVar2;
      thunk_FUN_1123fce0();
      if ((int *)param_1[0x4a] != (int *)0x0) {
        uVar4 = (undefined4)((**(code **)(*(int *)param_1[0x4a] + 4))(param_1 + 1));
        param_1[0x4b] = uVar4;
      }
    }
  }
  else if (param_1[2] != 0) {
    if ((param_1[4] != 0) && (piVar5 = (int *)(param_1[4] + -0x10), *piVar5 < 0xffff)) {
      thunk_FUN_1123fce0(piVar5);
    }
    iVar2 = (int)(param_1[5]);

    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar2 + -0x10),iVar2);
    }

    (**(code **)(*(int *)param_1[2] + 4))();

    return;
  }

  return;

 } catch (...) { }
}


// Reference entry 10f3fb70; body size 99 bytes.
#line 1 "ENTRY_10f3fb70"

int __thiscall Recovered_Bulk::FUN_10f3fb70(int param_2)
{
  int param_1 = (int )this;
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
  *(int *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return (int)(param_2);
}


// Reference entry 10f40180; body size 211 bytes.
#line 1 "ENTRY_10f40180"

void __fastcall FUN_10f40180(undefined1 *param_1)

{
 try {
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 0xc) != 0) {
    piVar4 = (int *)(*(int **)(param_1 + 8));
    local_14 = (undefined1 *)(param_1);
    uVar1 = (undefined4)((**(code **)(*piVar4 + 0x3c))(DAT_12126b84 ));
    uVar1 = (undefined4)((**(code **)(*piVar4 + 0x38))(uVar1));
    ((SCStr *)((char *)&local_14))->stringWithFormat("%s/%s",uVar1);
    piVar4 = (int *)(*(int **)(param_1 + 8));

    if (piVar4 != (int *)0x0) {
      if (*(int *)(param_1 + 0xc) != 0) {
        (**(code **)(*piVar4 + 0x10))();
        piVar4 = (int *)(*(int **)(param_1 + 8));
      }
      if (piVar4 != (int *)0x0) {
        iVar2 = (int)(thunk_FUN_1123fcd0(piVar4 + 1));
        if (iVar2 == 0) {
          (**(code **)*piVar4)(1);
        }
      }
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (local_14 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(local_14);
    }
    thunk_FUN_1145d260(puVar3);

    ((SCStr *)((SCStr *)&local_14))->int_release();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f40760; body size 308 bytes.
#line 1 "ENTRY_10f40760"

void __thiscall Recovered_Bulk::FUN_10f40760(char *param_2,uint param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  FILE *_File;
  long lVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int **)(param_1 + 8) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xc))(DAT_12126b84 ));
    if (cVar2 != '\0') {
      pcVar3 = (char *)((char *)(**(code **)(**(int **)(param_1 + 8) + 8))());
      goto LAB_10f407a6;
    }
  }
  pcVar3 = (char *)(*(char **)(param_1 + 0xc));
LAB_10f407a6:
  if (pcVar3 == (char *)(param_2)) {
    thunk_FUN_112af4e0("SCFirmwareDownloadManager",1,
                       "complete update file download result: %d, http: %d, status: %x",
                       param_3 & 0xffff,*(undefined4 *)(*(int *)(param_1 + 8) + 0x448c),
                       *(undefined4 *)(*(int *)(param_1 + 8) + 0x2478));
    piVar1 = (int *)(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0x3c))());
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0x38))(uVar4));
    ((SCStr *)((char *)&param_2))->stringWithFormat("%s/%s",uVar4);

    pcVar3 = (char *)("");
    if (param_2 != (char *)0x0) {
      pcVar3 = (char *)(param_2);
    }
    _File = (FILE *)(fopen(pcVar3,"rb"));
    if (_File != (FILE *)0x0) {
      fseek(_File,0,2);
      lVar5 = (long)(ftell(_File));
      pcVar3 = (char *)("");
      if (param_2 != (char *)0x0) {
        pcVar3 = (char *)(param_2);
      }
      thunk_FUN_112af4e0("SCFirmwareDownloadManager",1,"Update file path: %s, file size : %d",pcVar3
                         ,lVar5);
      fclose(_File);
    }
    if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x10))(param_3);
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f408f0; body size 317 bytes.
#line 1 "ENTRY_10f408f0"

void __stdcall FUN_10f408f0(undefined1 *param_1)

{
 try {
  char cVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  cVar1 = (char)(thunk_FUN_10f40590(&local_1c,&local_14,param_1));
  if (cVar1 != '\0') {
    puVar7 = (undefined *)(&DAT_121a7234);
    pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    thunk_FUN_101a2e90(&local_18,*(undefined4 *)(pSVar3 + 0x4c),puVar7,uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if (local_14 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(local_14);
    }
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (local_18 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(local_18);
    }
    ((SCStr *)((char *)&param_1))->stringWithFormat("%s/%s",puVar5,puVar6);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if (param_1 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(param_1);
    }
    iVar4 = (int)(thunk_FUN_105c0bc0(puVar6));
    if (iVar4 == 0) {
      puVar6 = (undefined1 *)(&DAT_1186d2ee);
      if (param_1 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)(param_1);
      }
      thunk_FUN_112af4e0("SCFirmwareDownloadManager",1,"Remove update file : %s",puVar6);
      puVar6 = (undefined1 *)(&DAT_1186d2ee);
      if (param_1 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)(param_1);
      }
      thunk_FUN_1145d260(puVar6);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ((SCStr *)((SCStr *)&param_1))->int_release();
    param_1 = (undefined1 *)((undefined1 *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined1 *)((undefined1 *)0x0);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10f40b40; body size 169 bytes.
#line 1 "ENTRY_10f40b40"

int * __thiscall Recovered_Bulk::FUN_10f40b40(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlayingTransport");

    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2,uVar3));
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10f411f0; body size 88 bytes.
#line 1 "ENTRY_10f411f0"

void __fastcall FUN_10f411f0(int *param_1)

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


// Reference entry 10f412d0; body size 76 bytes.
#line 1 "ENTRY_10f412d0"

void __fastcall FUN_10f412d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f41340; body size 76 bytes.
#line 1 "ENTRY_10f41340"

void __fastcall FUN_10f41340(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f413b0; body size 76 bytes.
#line 1 "ENTRY_10f413b0"

void __fastcall FUN_10f413b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f41420; body size 76 bytes.
#line 1 "ENTRY_10f41420"

void __fastcall FUN_10f41420(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f41620; body size 728 bytes.
#line 1 "ENTRY_10f41620"

/* WARNING: Removing unreachable block_10f41620 (ram,0x10f417f0) */
/* WARNING: Removing unreachable block (ram,0x10f41800) */
/* WARNING: Removing unreachable block (ram,0x10f41804) */

void __fastcall FUN_10f41620(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNowPlaying);
  param_1[3] = (uint)&ghidra_vftable_SCNowPlaying;
  param_1[4] = (uint)&ghidra_vftable_SCNowPlaying;
  if (param_1[0x15] != 0) {
    thunk_FUN_10cdfe60(uVar3);
    puVar1 = (undefined4 *)((undefined4 *)param_1[0x15]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar4 = thunk_FUN_1123fcd0(puVar1 + 1), iVar4 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[0x15] = 0;
  }
  if ((param_1[0x20] != 0) && ((int *)param_1[0x1f] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0x1f] + 0x10))();
    puVar1 = (undefined4 *)((undefined4 *)param_1[0x1f]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar4 = thunk_FUN_1123fcd0(puVar1 + 1), iVar4 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  if (param_1[0x12] != 0) {
    piVar2 = (int *)((int *)param_1[0x13]);
    if (piVar2 != (int *)0x0) {
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if (param_1[0x10] != 0) {
    piVar2 = (int *)((int *)param_1[0x11]);
    if (piVar2 != (int *)0x0) {
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  if (param_1[0xe] != 0) {
    piVar2 = (int *)((int *)param_1[0xf]);
    if (piVar2 != (int *)0x0) {
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if (param_1[0xc] != 0) {
    piVar2 = (int *)((int *)param_1[0xd]);
    if (piVar2 != (int *)0x0) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  param_1[0x1c] = 0;

  param_1[0x1e] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  if ((int *)param_1[0x1f] != (int *)0x0) {
    if (param_1[0x20] != 0) {
      (**(code **)(*(int *)param_1[0x1f] + 0x10))();
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[0x1f]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar4 = thunk_FUN_1123fcd0(puVar1 + 1), iVar4 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  puVar1 = (undefined4 *)((undefined4 *)param_1[0x15]);

  if ((puVar1 != (undefined4 *)0x0) && (iVar4 = thunk_FUN_1123fcd0(puVar1 + 1), iVar4 == 0)) {
    (**(code **)*puVar1)(1);
  }
  piVar2 = (int *)((int *)param_1[0x13]);

  if (piVar2 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[0x11]);

  if (piVar2 != (int *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[0xf]);

  if (piVar2 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[0xd]);

  if (piVar2 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_103d60a0();
  param_1[3] = (uint)&ghidra_vftable_RControlAIOOpCB;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f41d60; body size 118 bytes.
#line 1 "ENTRY_10f41d60"

undefined4 * FUN_10f41d60(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x88));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10f40fe0(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f41e00; body size 115 bytes.
#line 1 "ENTRY_10f41e00"

undefined4 * FUN_10f41e00(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x40));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_1101b030(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f41e90; body size 115 bytes.
#line 1 "ENTRY_10f41e90"

undefined4 * FUN_10f41e90(undefined4 *param_1,undefined4 param_2)

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
    piVar3 = (int *)((int *)thunk_FUN_11021d40(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f41f20; body size 115 bytes.
#line 1 "ENTRY_10f41f20"

undefined4 * FUN_10f41f20(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x34));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_1101cac0(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f41fb0; body size 115 bytes.
#line 1 "ENTRY_10f41fb0"

undefined4 * FUN_10f41fb0(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x24));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_1101f9f0(param_2));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f42770; body size 154 bytes.
#line 1 "ENTRY_10f42770"

undefined4 __fastcall FUN_10f42770(int *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)((int *)0x0);
  iVar2 = (int)((**(code **)(*param_1 + 0x28))(DAT_12126b84 ));
  if (iVar2 == 0) {
    uVar4 = (undefined4)(0);
  }
  else {
    puVar3 = (undefined4 *)(&local_18);
    (**(code **)(*param_1 + 0x28))(puVar3);
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10b6feb0(puVar3));
    piVar1 = (int *)(local_14);
    uVar4 = (undefined4)(*puVar3);
    *puVar3 = (undefined4)(0);
    puVar3[1] = 0;

    if (local_14 != (int *)0x0) {

      local_14 = (int *)((int *)0x0);
      (**(code **)(*piVar1 + 8))();
    }
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 10f428d0; body size 207 bytes.
#line 1 "ENTRY_10f428d0"

int * __thiscall Recovered_Bulk::FUN_10f428d0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x40) == 0) {
    pvVar3 = (void *)(operator_new(0x40));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_1101b030(param_1));
    }

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x44));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x40) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar5 = (undefined4)(0);
    }
    else {
      uVar5 = (undefined4)((**(code **)(*piVar4 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x44) = uVar5;
  }

  piVar4 = (int *)(*(int **)(param_1 + 0x40));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f429e0; body size 207 bytes.
#line 1 "ENTRY_10f429e0"

int * __thiscall Recovered_Bulk::FUN_10f429e0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x48) == 0) {
    pvVar3 = (void *)(operator_new(0x14));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_11021d40(param_1));
    }

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x4c));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x48) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar5 = (undefined4)(0);
    }
    else {
      uVar5 = (undefined4)((**(code **)(*piVar4 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar5;
  }

  piVar4 = (int *)(*(int **)(param_1 + 0x48));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f42af0; body size 209 bytes.
#line 1 "ENTRY_10f42af0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f42af0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  int *local_8;
  
  local_8 = (int *)((int *)0xffffffff);

  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)(*(int **)(param_1 + 0x30));
  if (piVar4 == (int *)0x0) {
    pvVar3 = (void *)(operator_new(0x34));
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      local_8 = (int *)(piVar4);
      piVar4 = (int *)((int *)thunk_FUN_1101cac0(param_1));
    }
    local_8 = (int *)((int *)0xffffffff);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x34));
    local_8 = (int *)((int *)0x1);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x30) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar5 = (undefined4)(0);
      piVar4 = (int *)((int *)0x0);
    }
    else {
      uVar5 = (undefined4)((**(code **)(*piVar4 + 0xc))());
      piVar4 = (int *)(*(int **)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x34) = uVar5;
    *(int **)(param_1 + 0x70) = piVar4;
  }
  local_8 = (int *)((int *)0xffffffff);
  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f42c00; body size 207 bytes.
#line 1 "ENTRY_10f42c00"

int * __thiscall Recovered_Bulk::FUN_10f42c00(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x38) == 0) {
    pvVar3 = (void *)(operator_new(0x24));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_1101f9f0(param_1));
    }

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x3c));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x38) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar5 = (undefined4)(0);
    }
    else {
      uVar5 = (undefined4)((**(code **)(*piVar4 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
  }

  piVar4 = (int *)(*(int **)(param_1 + 0x38));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f42e50; body size 103 bytes.
#line 1 "ENTRY_10f42e50"

undefined4 * __thiscall Recovered_Bulk::FUN_10f42e50(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCINowPlaying"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f42ed0; body size 226 bytes.
#line 1 "ENTRY_10f42ed0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f42ed0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCINowPlaying"));
  piVar4 = (int *)(param_1);
  if (bVar1) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (bVar1) {
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))(uVar2);
      }
    }
    else {
      piVar4 = (int *)((int *)0x0);
    }
  }

  if (piVar4 == (int *)0x0) {
    if (param_1[2] == 0) {
      *param_2 = (undefined4)(0);

      return (undefined4 *)(param_2);
    }
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x28))());
    (**(code **)*puVar3)(param_2,param_3);

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(piVar4);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f42ff0; body size 908 bytes.
#line 1 "ENTRY_10f42ff0"

int * __thiscall Recovered_Bulk::FUN_10f42ff0(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  SCStr *this_;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  this_ = (SCStr *)(param_3);


  uVar3 = (uint)(DAT_12126b84);

  bVar2 = (bool)(((SCStr *)(param_3))->op_eq("SCINowPlaying"));
  if (bVar2) {
    *param_2 = (int)((int)param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    thunk_FUN_10f42ed0(&param_3,this_);

    if (param_3 != (SCStr *)0x0) {
      *param_2 = (int)((int)param_3);

      return (int *)(param_2);
    }
    bVar2 = (bool)(((SCStr *)(this_))->op_eq("SCINowPlayingSource"));
    if (bVar2) {
      piVar5 = (int *)((int *)param_1[0xc]);
      if (piVar5 == (int *)0x0) {
        pvVar4 = (void *)(operator_new(0x34));
        *(unsigned char *)((char *)&local_8 + 0) = 2;
        if (pvVar4 == (void *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)thunk_FUN_1101cac0(param_1));
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
        }
        piVar1 = (int *)((int *)param_1[0xd]);
        local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
        if (piVar1 != (int *)0x0) {
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          (**(code **)(*piVar1 + 8))();
        }
        param_1[0xc] = (int)piVar5;
        if (piVar5 == (int *)0x0) {
          iVar6 = (int)(0);
          piVar5 = (int *)((int *)0x0);
        }
        else {
          iVar6 = (int)((**(code **)(*piVar5 + 0xc))());
          piVar5 = (int *)((int *)param_1[0xc]);
        }
        param_1[0xd] = iVar6;
        local_8 = (uint)(local_8 & 0xffffff00);
        param_1[0x1c] = (int)piVar5;
      }
      *param_2 = (int)((int)piVar5);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(uVar3);
      }

    }
    else {
      bVar2 = (bool)(((SCStr *)(this_))->op_eq("SCINowPlayingTransport"));
      if (bVar2) {
        if (param_1[0xe] == 0) {
          pvVar4 = (void *)(operator_new(0x24));
          *(unsigned char *)((char *)&local_8 + 0) = 6;
          if (pvVar4 == (void *)0x0) {
            piVar5 = (int *)((int *)0x0);
          }
          else {
            piVar5 = (int *)((int *)thunk_FUN_1101f9f0(param_1));
          }
          *(unsigned char *)((char *)&local_8 + 0) = 0;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))();
          }
          piVar1 = (int *)((int *)param_1[0xf]);
          local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
          if (piVar1 != (int *)0x0) {
            param_1[0xe] = 0;
            param_1[0xf] = 0;
            (**(code **)(*piVar1 + 8))();
          }
          param_1[0xe] = (int)piVar5;
          if (piVar5 == (int *)0x0) {
            iVar6 = (int)(0);
          }
          else {
            iVar6 = (int)((**(code **)(*piVar5 + 0xc))());
          }
          param_1[0xf] = iVar6;
          local_8 = (uint)(local_8 & 0xffffff00);
        }
        piVar5 = (int *)((int *)param_1[0xe]);
        *param_2 = (int)((int)piVar5);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
        }

      }
      else {
        bVar2 = (bool)(((SCStr *)(this_))->op_eq("SCINowPlayingRatings"));
        if (bVar2) {
          if (param_1[0x10] == 0) {
            pvVar4 = (void *)(operator_new(0x40));
            *(unsigned char *)((char *)&local_8 + 0) = 10;
            if (pvVar4 == (void *)0x0) {
              piVar5 = (int *)((int *)0x0);
            }
            else {
              piVar5 = (int *)((int *)thunk_FUN_1101b030(param_1));
            }
            *(unsigned char *)((char *)&local_8 + 0) = 0;
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 4))();
            }
            piVar1 = (int *)((int *)param_1[0x11]);
            local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
            if (piVar1 != (int *)0x0) {
              param_1[0x10] = 0;
              param_1[0x11] = 0;
              (**(code **)(*piVar1 + 8))();
            }
            param_1[0x10] = (int)piVar5;
            if (piVar5 == (int *)0x0) {
              iVar6 = (int)(0);
            }
            else {
              iVar6 = (int)((**(code **)(*piVar5 + 0xc))());
            }
            param_1[0x11] = iVar6;
            local_8 = (uint)(local_8 & 0xffffff00);
          }
          piVar5 = (int *)((int *)param_1[0x10]);
          *param_2 = (int)((int)piVar5);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))();
          }

        }
        else {
          bVar2 = (bool)(((SCStr *)(this_))->op_eq("SCINowPlayingSleepTimer"));
          if (bVar2) {
            if (param_1[0x12] == 0) {
              pvVar4 = (void *)(operator_new(0x14));
              *(unsigned char *)((char *)&local_8 + 0) = 0xe;
              if (pvVar4 == (void *)0x0) {
                piVar5 = (int *)((int *)0x0);
              }
              else {
                piVar5 = (int *)((int *)thunk_FUN_11021d40(param_1));
              }
              *(unsigned char *)((char *)&local_8 + 0) = 0;
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 4))();
              }
              piVar1 = (int *)((int *)param_1[0x13]);
              local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
              if (piVar1 != (int *)0x0) {
                param_1[0x12] = 0;
                param_1[0x13] = 0;
                (**(code **)(*piVar1 + 8))();
              }
              param_1[0x12] = (int)piVar5;
              if (piVar5 == (int *)0x0) {
                iVar6 = (int)(0);
              }
              else {
                iVar6 = (int)((**(code **)(*piVar5 + 0xc))());
              }
              param_1[0x13] = iVar6;
              local_8 = (uint)(local_8 & 0xffffff00);
            }
            piVar5 = (int *)((int *)param_1[0x12]);
            *param_2 = (int)((int)piVar5);
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 4))();
            }

          }
          else {
            bVar2 = (bool)(((SCStr *)(this_))->op_eq("SCIObj"));
            if (!bVar2) {
              *param_2 = (int)(0);

              if (param_3 == (SCStr *)0x0) {

                return (int *)(param_2);
              }
              (**(code **)(*(int *)param_3 + 8))();

              return (int *)(param_2);
            }
            *param_2 = (int)((int)param_1);
            if (param_1 != (int *)0x0) {
              (**(code **)(*param_1 + 4))();
            }

          }
        }
      }
    }
    if (param_3 != (SCStr *)0x0) {
      (**(code **)(*(int *)param_3 + 8))();
    }
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f436b0; body size 101 bytes.
#line 1 "ENTRY_10f436b0"

void __thiscall Recovered_Bulk::FUN_10f436b0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x18))());
  if ((cVar1 != '\0') && (param_1[0x15] != 0)) {
    iVar2 = (int)(thunk_FUN_103d6380());
    cVar1 = (char)(thunk_FUN_103d61d0(param_2,param_3));
    if ((cVar1 != '\0') &&
       (((thunk_FUN_10ce0ad0(param_2), iVar2 == 0 && (iVar2 = thunk_FUN_103d6380(), 0 < iVar2)) &&
        ((int *)param_1[0x1c] != (int *)0x0)))) {
      (**(code **)(*(int *)param_1[0x1c] + 0xec))();
    }
  }
  return;
}


// Reference entry 10f43730; body size 84 bytes.
#line 1 "ENTRY_10f43730"

void __thiscall Recovered_Bulk::FUN_10f43730(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_103d6380());
  cVar1 = (char)(thunk_FUN_103d6930(param_2));
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x54) != 0) {
      thunk_FUN_10ce0b10(param_2);
    }
    if (0 < iVar2) {
      iVar2 = (int)(thunk_FUN_103d6380());
      if ((iVar2 == 0) && (*(int **)(param_1 + 0x70) != (int *)0x0)) {
        (**(code **)(**(int **)(param_1 + 0x70) + 0xf0))();
      }
    }
  }
  return;
}


// Reference entry 10f437d0; body size 91 bytes.
#line 1 "ENTRY_10f437d0"

int * __thiscall Recovered_Bulk::FUN_10f437d0(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 10f43850; body size 171 bytes.
#line 1 "ENTRY_10f43850"

int * __thiscall Recovered_Bulk::FUN_10f43850(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlayingSource");

    piVar4 = (int *)((int *)(**(code **)*puVar1)(&local_14,&param_2,uVar3));
    iVar2 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10f43950; body size 169 bytes.
#line 1 "ENTRY_10f43950"

int * __thiscall Recovered_Bulk::FUN_10f43950(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIBrowseDataSource");

    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2,uVar3));
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10f43aa0; body size 188 bytes.
#line 1 "ENTRY_10f43aa0"

int * __thiscall Recovered_Bulk::FUN_10f43aa0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

  local_14 = (int *)(param_1);
  if (param_2 == (undefined4 *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))(uVar3);
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlayingSource");

    piVar4 = (int *)((int *)(**(code **)*puVar2)(&local_14,&param_2));
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10f446a0; body size 76 bytes.
#line 1 "ENTRY_10f446a0"

void __fastcall FUN_10f446a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f44710; body size 76 bytes.
#line 1 "ENTRY_10f44710"

void __fastcall FUN_10f44710(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f44780; body size 76 bytes.
#line 1 "ENTRY_10f44780"

void __fastcall FUN_10f44780(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f447f0; body size 76 bytes.
#line 1 "ENTRY_10f447f0"

void __fastcall FUN_10f447f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f44860; body size 76 bytes.
#line 1 "ENTRY_10f44860"

void __fastcall FUN_10f44860(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f448d0; body size 68 bytes.
#line 1 "ENTRY_10f448d0"

void __fastcall FUN_10f448d0(int *param_1)

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


// Reference entry 10f449a0; body size 266 bytes.
#line 1 "ENTRY_10f449a0"

void __fastcall FUN_10f449a0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayQueue);
  param_1[3] = (uint)&ghidra_vftable_SCPlayQueue;
  param_1[4] = (uint)&ghidra_vftable_SCPlayQueue;
  param_1[6] = (uint)&ghidra_vftable_SCPlayQueue;
  thunk_FUN_10f46590(uVar1);
  if (param_1[0x14] != 0) {
    thunk_FUN_104dec20();
    if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x14])(1);
    }
    param_1[0x14] = 0;
  }
  if (param_1[0x15] != 0) {
    thunk_FUN_10c83c80();
    if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x15])(1);
    }
    param_1[0x15] = 0;
  }

  ((SCStr *)((SCStr *)(param_1 + 0x13)))->int_release();
  param_1[0x13] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x11)))->int_release();
  param_1[0x11] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0xf)))->int_release();
  param_1[0xf] = 0;
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[4] = (uint)&ghidra_vftable_SCSwfObjQListener;
  param_1[3] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f44b00; body size 592 bytes.
#line 1 "ENTRY_10f44b00"

void __fastcall FUN_10f44b00(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayQueueDataSource);
  param_1[2] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[10] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x20] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x21] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x22] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x23] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x24] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x25] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x94] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x95] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0x96] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0xa0] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  param_1[0xa3] = (uint)&ghidra_vftable_SCPlayQueueDataSource;
  if ((int *)param_1[0xae] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xae] + 0x20))(param_1[0xa1],uVar2);
  }
  if (param_1[0xaa] != 0) {
    piVar1 = (int *)((int *)param_1[0xab]);
    if (piVar1 != (int *)0x0) {
      param_1[0xaa] = 0;
      param_1[0xab] = 0;
      (**(code **)(*piVar1 + 8))();
    }
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xba]);

  if (piVar1 != (int *)0x0) {
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 0xb5)))->int_release();
  param_1[0xb5] = 0;
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

  ((SCStr *)((SCStr *)(param_1 + 0xad)))->int_release();
  param_1[0xad] = 0;
  piVar1 = (int *)((int *)param_1[0xab]);

  if (piVar1 != (int *)0x0) {
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  param_1[0xa3] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[0xa0] = (uint)&ghidra_vftable_SCNowPlayingEventSink;
  piVar1 = (int *)((int *)param_1[0xa2]);

  if (piVar1 != (int *)0x0) {
    param_1[0xa1] = 0;
    param_1[0xa2] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_102037c0();

  return;

 } catch (...) { }
}


// Reference entry 10f44df0; body size 81 bytes.
#line 1 "ENTRY_10f44df0"

int * __thiscall Recovered_Bulk::FUN_10f44df0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f455a0; body size 118 bytes.
#line 1 "ENTRY_10f455a0"

undefined4 * FUN_10f455a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x68));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_11026950(param_2,param_3));
  }

  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f45640; body size 73 bytes.
#line 1 "ENTRY_10f45640"

void __thiscall Recovered_Bulk::FUN_10f45640(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(uint *)(param_2 + 0x148));
  thunk_FUN_112af4e0("PlayQueue",2,"Deleting Item! index: %d",uVar1);
  uVar2 = (uint)((**(code **)(*(int *)(*(int *)(param_1 + 0x2e4) + 8) + 0x1c))());
  if (uVar1 < uVar2) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2e4) + 8) + 4))(uVar1);
  }
  return;
}


// Reference entry 10f456a0; body size 339 bytes.
#line 1 "ENTRY_10f456a0"

void __fastcall FUN_10f456a0(int *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_2c;
  int *local_28;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x138))(&local_14,DAT_12126b84 ));
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
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0x24))());
    if (iVar3 != 0) {
      iVar3 = (int)((**(code **)(*(int *)(param_1[0xb9] + 8) + 0x1c))());
      if (iVar3 != 0) {
        uVar4 = (undefined4)((**(code **)(*piVar1 + 0x28))(&local_1c));
        *(unsigned char *)((char *)&local_8 + 0) = 5;
        thunk_FUN_1047f1f0(uVar4);
        uVar4 = (undefined4)(thunk_FUN_101a9570(&local_18));
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        thunk_FUN_10f437d0(uVar4);
        *(unsigned char *)((char *)&local_8 + 0) = 9;
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0xb;
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }
        iVar3 = (int)(param_1[0xb9]);
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        if (local_28 != (int *)0x0) {
          (**(code **)(*local_28 + 4))(local_2c,local_28);
        }
        (**(code **)(*(int *)(iVar3 + 8) + 8))();
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
        if (local_28 != (int *)0x0) {
          (**(code **)(*local_28 + 8))();
        }
      }
    }
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f45a10; body size 272 bytes.
#line 1 "ENTRY_10f45a10"

void __fastcall FUN_10f45a10(int *param_1)

{
 try {
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_40;
  int *piStack_3c;
  int **ppiStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  uint uStack_2c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_2c = (uint)(DAT_12126b84);

  pcStack_30 = (char *)("Firing immediate events!!!");

  ppiStack_38 = (int **)((int **)0x11886d14);
  piStack_3c = (int *)((int *)0x10f45a4a);
  thunk_FUN_112af4e0();
  pcStack_30 = (char *)((char *)param_1[0xb3]);

  iVar1 = (int)((**(code **)(*(int *)param_1[0xb9] + 0x14))());
  if (iVar1 == -1) {
    iVar1 = (int)(param_1[0xb3]);
  }
  param_1[0xb4] = iVar1;

  ppiStack_38 = (int **)((int **)0x10f45a7b);
  (**(code **)(*param_1 + 0x110))();
  ppiStack_38 = (int **)((int **)0x0);

  piStack_3c = (int *)(param_1);
  ((SCStr *)((SCStr *)&uStack_40))->int_allocRep("SCIBrowseDataSource:onQueueCurrentItemChanged");
  thunk_FUN_103d65f0();
  ppiStack_38 = (int **)((int **)0x10f45a9e);
  piVar2 = (int *)((int *)(**(code **)(*(int *)param_1[0xb0] + 0x3c))());
  ppiStack_38 = (int **)(&local_14);
  piStack_3c = (int *)((int *)0x10f45aa9);
  piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0x78))());
  piVar2 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piStack_3c = (int *)((int *)0x10f45ac6);
    piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar4 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    piStack_3c = (int *)((int *)0x10f45adf);
    (**(code **)(*local_14 + 8))();
    uVar4 = (undefined4)(extraout_ECX);
  }
  piStack_3c = (int *)((int *)0x0);

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  uStack_48 = (undefined4)(uVar4);
  ((SCStr *)((SCStr *)&uStack_48))->int_allocRep("SCINowPlaying:onMusicChanged");
  thunk_FUN_10f421e0();

  if (piVar2 != (int *)0x0) {
    piStack_3c = (int *)((int *)0x10f45b0f);
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f45b70; body size 494 bytes.
#line 1 "ENTRY_10f45b70"

undefined4 * __thiscall Recovered_Bulk::FUN_10f45b70(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int *)(operator_new(0x14));

  if (local_14 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)thunk_FUN_103be5e0(uVar1));
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  local_14 = (int *)((int *)0x0);
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  iVar4 = (int)((**(code **)(*param_1 + 0x1b4))());
  if (iVar4 == 0) {
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

  }
  else if (*(int *)(iVar4 + 8) == 0) {
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

  }
  else {
    iVar4 = (int)(thunk_FUN_11138b60(*(int *)(iVar4 + 8) + 0x44));
    if (iVar4 != 0) {
      iVar4 = (int)(thunk_FUN_110cb840());
      if (iVar4 != 0) {
        local_14 = (int *)(operator_new(0x14));
        *(unsigned char *)((char *)&local_8 + 0) = 7;
        if (local_14 == (int *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)thunk_FUN_11035c40(param_1));
        }
        *(unsigned char *)((char *)&local_8 + 0) = 3;
        if (piVar5 != (int *)0x0) {
          piVar6 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
          (**(code **)(*piVar6 + 4))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 8;
        local_14 = (int *)(piVar5);
        thunk_FUN_103beae0(&local_14,0xffffffff);
        local_14 = (int *)(operator_new(0x14));
        *(unsigned char *)((char *)&local_8 + 0) = 9;
        if (local_14 == (int *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)thunk_FUN_11035f60(param_1));
        }
        *(unsigned char *)((char *)&local_8 + 0) = 8;
        if (piVar5 != (int *)0x0) {
          piVar6 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
          (**(code **)(*piVar6 + 4))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        local_14 = (int *)(piVar5);
        thunk_FUN_103beae0(&local_14,0xffffffff);
        *(unsigned char *)((char *)&local_8 + 0) = 3;
      }
    }
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }

  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f45df0; body size 207 bytes.
#line 1 "ENTRY_10f45df0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f45df0(undefined4 *param_2,int param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  bool bVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (undefined4)((**(code **)(*(int *)(*(int *)(param_1 + 0x2e4) + 8) + 0x18))
                    (param_3,DAT_12126b84 ));
  uVar4 = (undefined4)(0);
  *(undefined4 *)(param_1 + 0x214) = uVar1;
  bVar5 = (bool)(param_3 == *(int *)(param_1 + 0x2d0));
  if (bVar5) {
    uVar4 = (undefined4)(thunk_FUN_11032190(*(undefined4 *)(param_1 + 0x2b8)));
  }
  pvVar2 = (void *)(operator_new(0x1e8));

  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_1102eeb0(param_1 + 0xb8,param_1 + 0xb4,
                                       *(undefined4 *)(param_1 + 0x214),param_1,param_3,bVar5,uVar4));
  }

  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f46010; body size 121 bytes.
#line 1 "ENTRY_10f46010"

void __thiscall Recovered_Bulk::FUN_10f46010(undefined4 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = (int)(thunk_FUN_110b0460(1));
  if (iVar2 == 0) {
    thunk_FUN_112af4e0("PlayQueue",2,"getUpdateId: No cache mgr!");
    *param_2 = (undefined4)(0);
    return;
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0xb8) != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0xb8));
  }
  cVar1 = (char)(thunk_FUN_110b0300(puVar3,&DAT_11951408,param_2));
  if (cVar1 == '\0') {
    thunk_FUN_112af4e0("PlayQueue",2,"getUpdateId: failed to get updateId!");
    *param_2 = (undefined4)(0);
  }
  return;
}


// Reference entry 10f460e0; body size 296 bytes.
#line 1 "ENTRY_10f460e0"

undefined4 __stdcall FUN_10f460e0(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
 try {
  char *pcVar1;
  SCStr local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)(local_24))->int_allocRep("");

  pcVar1 = (char *)("");
  if ((char *)*param_4 != (char *)0x0) {
    pcVar1 = (char *)((char *)*param_4);
  }
  ((SCStr *)((SCStr *)&local_20))->int_allocRep(pcVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  pcVar1 = (char *)("");
  if ((char *)*param_3 != (char *)0x0) {
    pcVar1 = (char *)((char *)*param_3);
  }
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep(pcVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  pcVar1 = (char *)("");
  if ((char *)*param_2 != (char *)0x0) {
    pcVar1 = (char *)((char *)*param_2);
  }
  ((SCStr *)((SCStr *)&local_18))->int_allocRep(pcVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("queue");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  thunk_FUN_103ad320(param_1,&local_14,&local_18,&local_1c,&local_20,local_24);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  ((SCStr *)((SCStr *)&local_20))->int_release();


  ((SCStr *)(local_24))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10f46260; body size 254 bytes.
#line 1 "ENTRY_10f46260"

int * __thiscall Recovered_Bulk::FUN_10f46260(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 0x2a8) == 0) {
    if (*(int **)(param_1 + 0x2c0) == (int *)0x0) {
      uVar2 = (undefined4)(0);
    }
    else {
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c0) + 0x18))
                        (DAT_12126b84 ));
    }
    pvVar3 = (void *)(operator_new(0x68));

    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_11026950(param_1,uVar2));
    }

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x2ac));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x2a8) = 0;
      *(undefined4 *)(param_1 + 0x2ac) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x2a8) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar2 = (undefined4)(0);
    }
    else {
      uVar2 = (undefined4)((**(code **)(*piVar4 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x2ac) = uVar2;
  }

  piVar4 = (int *)(*(int **)(param_1 + 0x2a8));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f463a0; body size 319 bytes.
#line 1 "ENTRY_10f463a0"

void __fastcall FUN_10f463a0(int *param_1)

{
 try {
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_24;
  int *local_20;
  void *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int)((**(code **)(*param_1 + 0x38))(DAT_12126b84 ));
  if (param_1[0x14] == 0) {
    local_1c = (void *)(operator_new(0x20));

    bVar4 = (bool)(local_1c == (void *)0x0);
    if (bVar4) {
      iVar3 = (int)(0);
    }
    else {
      piVar1 = (int *)((int *)thunk_FUN_10b6feb0(&local_24));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));

      uVar2 = (undefined4)((**(code **)(**(int **)(*piVar1 + 200) + 100))());
      iVar3 = (int)(thunk_FUN_104ddfd0(param_1 + 3,uVar2));
    }
    piVar1 = (int *)(local_20);
    param_1[0x14] = iVar3;
    if ((!bVar4) && (local_8 = 3, local_20 != (int *)0x0)) {

      local_20 = (int *)((int *)0x0);
      (**(code **)(*piVar1 + 8))();
    }

    thunk_FUN_104deb40();
  }
  if (((*(int *)(local_14 + 8) != 0) && (param_1[0x15] == 0)) &&
     (iVar3 = thunk_FUN_11138b60(*(int *)(local_14 + 8) + 0x44), iVar3 != 0)) {
    local_1c = (void *)(operator_new(0x20));

    if (local_1c == (void *)0x0) {
      iVar3 = (int)(0);
    }
    else {
      uVar2 = (undefined4)(thunk_FUN_110cdb30());
      iVar3 = (int)(thunk_FUN_10c83a10(param_1 + 4,uVar2));
    }

    param_1[0x15] = iVar3;
    thunk_FUN_10c83c30();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f46530; body size 74 bytes.
#line 1 "ENTRY_10f46530"

void __fastcall FUN_10f46530(int param_1)

{
  thunk_FUN_10f46590();
  if (*(int *)(param_1 + 0x50) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x50))(1);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    thunk_FUN_10c83c80();
    if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


// Reference entry 10f46b70; body size 88 bytes.
#line 1 "ENTRY_10f46b70"

undefined1 __thiscall Recovered_Bulk::FUN_10f46b70(undefined1 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar1 = (int)(thunk_FUN_110828b0());
    if (iVar1 != 0) {
      iVar1 = (int)(thunk_FUN_11081120());
      iVar1 = (int)(thunk_FUN_11138b60(iVar1 + 0x44));
      if (iVar1 != 0) {
        iVar1 = (int)(thunk_FUN_110cdb30());
        if (iVar1 != 0) {
          if (*(char *)(iVar1 + 0x30) == '\0') {
            return (undefined1)(param_2);
          }
          iVar1 = (int)(thunk_FUN_1115b460(0));
          if (iVar1 != 0) {
            return (undefined1)(*(undefined1 *)(iVar1 + 0x10c));
          }
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f46c70; body size 205 bytes.
#line 1 "ENTRY_10f46c70"

undefined1 __fastcall FUN_10f46c70(int param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 0x2b8));
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCINowPlayingSource");

    puVar3 = (undefined4 *)((undefined4 *)(**(code **)*puVar3)(&local_18,&local_14));
    piVar4 = (int *)((int *)*puVar3);
    *puVar3 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

    ((SCStr *)((SCStr *)&local_14))->int_release();

  }

  if (piVar4 == (int *)0x0) {
    uVar1 = (undefined1)(0);
  }
  else {
    uVar1 = (undefined1)((**(code **)(*piVar4 + 200))(uVar2));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10f46e10; body size 75 bytes.
#line 1 "ENTRY_10f46e10"

void __thiscall Recovered_Bulk::FUN_10f46e10(int param_2,uint param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(uint *)(param_2 + 0x148));
  uVar2 = (uint)((**(code **)(*(int *)(*(int *)(param_1 + 0x2e4) + 8) + 0x1c))());
  if (uVar1 < uVar2) {
    uVar2 = (uint)((**(code **)(*(int *)(*(int *)(param_1 + 0x2e4) + 8) + 0x1c))());
    if (param_3 <= uVar2) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x2e4) + 8) + 0xc))(uVar1,param_3);
    }
  }
  return;
}


// Reference entry 10f46e70; body size 391 bytes.
#line 1 "ENTRY_10f46e70"

void __thiscall Recovered_Bulk::FUN_10f46e70(uint param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  piVar3 = (int *)((int *)(**(code **)(*param_1 + 0x138))(&local_18,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    iVar4 = (int)((**(code **)(*piVar1 + 0x24))());
    if (iVar4 != 0) {
      iVar4 = (int)((**(code **)(*piVar1 + 0x24))());
      iVar5 = (int)((**(code **)(*local_14 + 0x58))());
      piVar2 = (int *)(local_14);
      if (iVar4 != iVar5) {
        iVar4 = (int)((**(code **)(*(int *)(local_14[0xb9] + 8) + 0x1c))());
        if (iVar4 != 0) {
          uVar6 = (uint)((**(code **)(*(int *)(piVar2[0xb9] + 8) + 0x1c))());
          if (param_2 <= uVar6) {
            uVar7 = (undefined4)((**(code **)(*piVar1 + 0x28))(&local_24));
            *(unsigned char *)((char *)&local_8 + 0) = 5;
            thunk_FUN_1047f1f0(uVar7);
            uVar7 = (undefined4)(thunk_FUN_101a9570(&local_20));
            *(unsigned char *)((char *)&local_8 + 0) = 6;
            thunk_FUN_10f437d0(uVar7);
            *(unsigned char *)((char *)&local_8 + 0) = 9;
            if (local_20 != (int *)0x0) {
              (**(code **)(*local_20 + 8))();
            }
            *(unsigned char *)((char *)&local_8 + 0) = 0xb;
            if (local_24 != (int *)0x0) {
              (**(code **)(*local_24 + 8))();
            }
            iVar4 = (int)(piVar2[0xb9]);
            local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
            if (local_18 != (int *)0x0) {
              (**(code **)(*local_18 + 4))(local_1c,local_18,param_2);
            }
            iVar4 = (int)((**(code **)(*(int *)(iVar4 + 8) + 0x10))());
            piVar2[0xb8] = iVar4;
            thunk_FUN_101a9000();
          }
        }
      }
    }
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f47070; body size 193 bytes.
#line 1 "ENTRY_10f47070"

void __thiscall Recovered_Bulk::FUN_10f47070(SCStr *param_2,SCStr *param_3,uint param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = (bool)(((SCStr *)(param_2))->op_eq((SCStr *)(param_1 + 0x80)));
  if ((bVar2) &&
     (((*(char **)param_3 == (char *)0x0 || (**(char **)param_3 == '\0')) ||
      (bVar2 = ((SCStr *)(param_3))->op_eq("Q:0"), bVar2)))) {
    piVar1 = (int *)((int *)(param_1 + -0x254));
    *(undefined1 *)(param_1 + -400) = 0;
    cVar3 = (char)((**(code **)(*(int *)(param_1 + -0x254) + 0xfc))());
    if ((cVar3 == '\0') || (param_4 < *(uint *)(param_1 + 0x88))) {
      thunk_FUN_112af4e0("PlayQueue",1,"UpdateID = %lu",param_4);
    }
    else {
      thunk_FUN_112af4e0("PlayQueue",1,"UpdateID = %lu --> re-enable events!",param_4);
      (**(code **)(*piVar1 + 0x100))(0);
    }
    cVar3 = (char)((**(code **)(*piVar1 + 0xfc))());
    if (cVar3 == '\0') {
      (**(code **)(*piVar1 + 0x94))();
    }
  }
  return;
}


// Reference entry 10f47610; body size 118 bytes.
#line 1 "ENTRY_10f47610"

void __stdcall FUN_10f47610(int param_1)

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


// Reference entry 10f476f0; body size 224 bytes.
#line 1 "ENTRY_10f476f0"

void __fastcall FUN_10f476f0(int param_1)

{
 try {
  undefined4 *puVar1;
  int extraout_ECX;
  int *piVar2;
  int **ppiStack_3c;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_18 = (int *)((int *)0x0);
  piVar2 = (int *)((int *)0x0);
  if ((undefined4 *)(param_1 + -0x90) != (undefined4 *)0x0) {
    ppiStack_3c = (int **)((int **)0x10f4773c);
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIBrowseDataSource");
    ppiStack_3c = (int **)(&local_1c);

    puVar1 = (undefined4 *)((undefined4 *)(*(code *)**(undefined4 **)(param_1 + -0x90))());
    piVar2 = (int *)((int *)*puVar1);
    *puVar1 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    local_18 = (int *)(piVar2);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }

    ((SCStr *)((SCStr *)&local_14))->int_release();

    param_1 = (int)(extraout_ECX);
  }

  ppiStack_3c = (int **)((int **)param_1);
  ((SCStr *)((SCStr *)&ppiStack_3c))->int_allocRep("SCIBrowseDataSource:onBrowseChanged");
  thunk_FUN_103d65f0();

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  thunk_FUN_1021df40();

  return;

 } catch (...) { }
}


// Reference entry 10f478b0; body size 103 bytes.
#line 1 "ENTRY_10f478b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f478b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIPlayQueue"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f47930; body size 226 bytes.
#line 1 "ENTRY_10f47930"

undefined4 * __thiscall Recovered_Bulk::FUN_10f47930(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIPlayQueue"));
  piVar4 = (int *)(param_1);
  if (bVar1) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (bVar1) {
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))(uVar2);
      }
    }
    else {
      piVar4 = (int *)((int *)0x0);
    }
  }

  if (piVar4 == (int *)0x0) {
    if (param_1[2] == 0) {
      *param_2 = (undefined4)(0);

      return (undefined4 *)(param_2);
    }
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x38))());
    (**(code **)*puVar3)(param_2,param_3);

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(piVar4);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f47a50; body size 103 bytes.
#line 1 "ENTRY_10f47a50"

undefined4 * __thiscall Recovered_Bulk::FUN_10f47a50(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIPlayQueue"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f47ad0; body size 414 bytes.
#line 1 "ENTRY_10f47ad0"

int * __thiscall Recovered_Bulk::FUN_10f47ad0(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  bVar2 = (bool)(((SCStr *)(param_3))->op_eq("SCIBrowseDataSource"));
  if (bVar2) {
    *param_2 = (int)((int)param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();

      return (int *)(param_2);
    }
  }
  else {
    bVar2 = (bool)(((SCStr *)(param_3))->op_eq("SCIPlayQueueMgr"));
    if (bVar2) {
      if (param_1[0xaa] == 0) {
        if ((int *)param_1[0xb0] == (int *)0x0) {
          uVar4 = (undefined4)(0);
        }
        else {
          uVar4 = (undefined4)((**(code **)(*(int *)param_1[0xb0] + 0x18))());
        }
        pvVar5 = (void *)(operator_new(0x68));

        if (pvVar5 == (void *)0x0) {
          piVar6 = (int *)((int *)0x0);
        }
        else {
          piVar6 = (int *)((int *)thunk_FUN_11026950(param_1,uVar4));
        }

        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))();
        }
        piVar1 = (int *)((int *)param_1[0xab]);

        if (piVar1 != (int *)0x0) {
          param_1[0xaa] = 0;
          param_1[0xab] = 0;
          (**(code **)(*piVar1 + 8))();
        }
        param_1[0xaa] = (int)piVar6;
        if (piVar6 == (int *)0x0) {
          iVar7 = (int)(0);
        }
        else {
          iVar7 = (int)((**(code **)(*piVar6 + 0xc))());
        }
        param_1[0xab] = iVar7;

      }
      piVar6 = (int *)((int *)param_1[0xaa]);
      *param_2 = (int)((int)piVar6);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();

        return (int *)(param_2);
      }
    }
    else {
      bVar2 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
      if (!bVar2) {
        *param_2 = (int)(0);

        return (int *)(param_2);
      }
      *param_2 = (int)((int)param_1);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))(uVar3);
      }
    }
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f47fd0; body size 96 bytes.
#line 1 "ENTRY_10f47fd0"

void __thiscall Recovered_Bulk::FUN_10f47fd0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_103d6930(param_2);
  if (*(int *)(param_1 + 0x20) == 0) {
    thunk_FUN_10f46590();
    if (*(int *)(param_1 + 0x50) != 0) {
      thunk_FUN_104dec20();
      if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x50))(1);
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      thunk_FUN_10c83c80();
      if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
      }
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  return;
}


// Reference entry 10f48050; body size 171 bytes.
#line 1 "ENTRY_10f48050"

int * __thiscall Recovered_Bulk::FUN_10f48050(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIArea");

    piVar4 = (int *)((int *)(**(code **)*puVar1)(&local_14,&param_2,uVar3));
    iVar2 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar2);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10f48400; body size 134 bytes.
#line 1 "ENTRY_10f48400"

void __fastcall FUN_10f48400(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArea);
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f48500; body size 155 bytes.
#line 1 "ENTRY_10f48500"

undefined4 * __thiscall Recovered_Bulk::FUN_10f48500(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArea);
  piVar1 = (int *)((int *)param_1[4]);

  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f48610; body size 109 bytes.
#line 1 "ENTRY_10f48610"

undefined4 __thiscall Recovered_Bulk::FUN_10f48610(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("deviceIds");

  (**(code **)(**(int **)(param_1 + 0xc) + 0x54))(param_2,&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10f486a0; body size 109 bytes.
#line 1 "ENTRY_10f486a0"

undefined4 __thiscall Recovered_Bulk::FUN_10f486a0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("id");

  (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2,&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10f48bc0; body size 109 bytes.
#line 1 "ENTRY_10f48bc0"

undefined4 __thiscall Recovered_Bulk::FUN_10f48bc0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("title");

  (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2,&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10f48c50; body size 109 bytes.
#line 1 "ENTRY_10f48c50"

undefined1 __fastcall FUN_10f48c50(int param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("isEditable");

  uVar1 = (undefined1)((**(code **)(**(int **)(param_1 + 0xc) + 0x3c))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10f48ce0; body size 103 bytes.
#line 1 "ENTRY_10f48ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f48ce0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIArea"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f48e00; body size 127 bytes.
#line 1 "ENTRY_10f48e00"

void __thiscall Recovered_Bulk::FUN_10f48e00(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("deviceIds");

  (**(code **)(**(int **)(param_1 + 0xc) + 0x58))(&local_14,param_2,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  thunk_FUN_10f49170();

  return;

 } catch (...) { }
}


// Reference entry 10f48ea0; body size 134 bytes.
#line 1 "ENTRY_10f48ea0"

void __fastcall FUN_10f48ea0(int param_1)

{
 try {
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("title");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(&local_14,&stack0x00000004,uVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  thunk_FUN_10f49170();

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10f48f50; body size 429 bytes.
#line 1 "ENTRY_10f48f50"

bool FUN_10f48f50(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4)

{
 try {
  int *piVar1;
  bool bVar2;
  uint uVar3;
  SCStr *pSVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  thunk_FUN_10f48050(&param_1);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_10f48050(&param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if ((local_1c != (int *)0x0) && (local_20 != (int *)0x0)) {
    pSVar4 = (SCStr *)((SCStr *)(**(code **)(*local_1c + 0x1c))(&local_18,uVar3));
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    bVar2 = (bool)(((SCStr *)(pSVar4))->op_eq("7055133f-81e7-45e6-ba70-8803966c7185"));
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((SCStr *)((SCStr *)&local_18))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (bVar2) {
      bVar2 = (bool)(true);
      goto LAB_10f4908c;
    }
    pSVar4 = (SCStr *)((SCStr *)(**(code **)(*local_20 + 0x1c))(&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    bVar2 = (bool)(((SCStr *)(pSVar4))->op_eq("7055133f-81e7-45e6-ba70-8803966c7185"));
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    ((SCStr *)((SCStr *)&local_18))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (!bVar2) {
      puVar5 = (undefined4 *)((undefined4 *)(**(code **)(*local_20 + 0x14))(&local_18));
      *(unsigned char *)((char *)&local_8 + 0) = 0xe;
      puVar6 = (undefined4 *)((undefined4 *)(**(code **)(*local_1c + 0x14))(&local_14));
      *(unsigned char *)((char *)&local_8 + 0) = 0xf;
      puVar8 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
        puVar8 = (undefined1 *)((undefined1 *)*puVar5);
      }
      puVar9 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar6 != (undefined1 *)0x0) {
        puVar9 = (undefined1 *)((undefined1 *)*puVar6);
      }
      iVar7 = (int)(thunk_FUN_1111d190(puVar9,puVar8));
      bVar2 = (bool)(iVar7 < 0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      ((SCStr *)((SCStr *)&local_14))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      ((SCStr *)((SCStr *)&local_18))->int_release();

      goto LAB_10f4908c;
    }
  }
  bVar2 = (bool)(false);
LAB_10f4908c:
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  piVar1 = (int *)(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x14)));
  if (param_2 != (int *)0x0) {
    param_1 = (undefined4)(0);
    param_2 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(param_4);

  if (param_4 != (int *)0x0) {
    param_3 = (undefined4)(0);
    param_4 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return (bool)(bVar2);

 } catch (...) { }
}


// Reference entry 10f49170; body size 371 bytes.
#line 1 "ENTRY_10f49170"

void FUN_10f49170(void)

{
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar3 = (int *)((int *)thunk_FUN_1037a2b0(&local_20,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*piVar1 + 0x154))(&local_24));
    piVar1 = (int *)((int *)*puVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    *puVar4 = (undefined4)(0);
    local_20 = (int *)(piVar1);
    if (piVar1 == (int *)0x0) {
      local_2c = (int *)((int *)0x0);
    }
    else {
      local_2c = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    piVar2 = (int *)(local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (piVar1 != (int *)0x0) {
      puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*local_14 + 0x28))(&local_28));
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      uVar5 = (undefined4)((**(code **)(*piVar2 + 0x14))(&local_1c));
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      uVar6 = (undefined4)((**(code **)(*local_14 + 0x1c))(&local_18));
      *(unsigned char *)((char *)&local_8 + 0) = 10;
      (**(code **)(*local_20 + 0x28))(uVar6,uVar5,*puVar4);
      *(unsigned char *)((char *)&local_8 + 0) = 0xb;
      ((SCStr *)((SCStr *)&local_18))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0xc;
      ((SCStr *)((SCStr *)&local_1c))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0xd;
      if (local_28 != (int *)0x0) {
        (**(code **)(*local_28 + 8))();
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe)));
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 8))();
    }
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f49380; body size 111 bytes.
#line 1 "ENTRY_10f49380"

void FUN_10f49380(undefined4 *param_1,undefined4 *param_2)

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
    piVar1 = (int *)((int *)param_1[1]);

    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }

  }

  return;

 } catch (...) { }
}


// Reference entry 10f49960; body size 84 bytes.
#line 1 "ENTRY_10f49960"

void FUN_10f49960(undefined4 param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f4a710; body size 76 bytes.
#line 1 "ENTRY_10f4a710"

void __fastcall FUN_10f4a710(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f4a7a0; body size 96 bytes.
#line 1 "ENTRY_10f4a7a0"

void __fastcall FUN_10f4a7a0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10f49380(*param_1,param_1[1],param_1);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10f4a820; body size 101 bytes.
#line 1 "ENTRY_10f4a820"

void __fastcall FUN_10f4a820(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceVolume);

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f4aa40; body size 101 bytes.
#line 1 "ENTRY_10f4aa40"

void __fastcall FUN_10f4aa40(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceVolume);

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f4aae0; body size 81 bytes.
#line 1 "ENTRY_10f4aae0"

int * __thiscall Recovered_Bulk::FUN_10f4aae0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f4acc0; body size 106 bytes.
#line 1 "ENTRY_10f4acc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f4acc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f4ad50; body size 122 bytes.
#line 1 "ENTRY_10f4ad50"

undefined4 * __thiscall Recovered_Bulk::FUN_10f4ad50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceVolume);

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10,uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f4afe0; body size 122 bytes.
#line 1 "ENTRY_10f4afe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f4afe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceVolume);

  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14,uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f4b0f0; body size 104 bytes.
#line 1 "ENTRY_10f4b0f0"

void __thiscall Recovered_Bulk::FUN_10f4b0f0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10f49380(*param_1,param_1[1],param_1);
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
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}


// Reference entry 10f4b200; body size 96 bytes.
#line 1 "ENTRY_10f4b200"

void __fastcall FUN_10f4b200(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10f49380(*param_1,param_1[1],param_1);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10f4bc40; body size 174 bytes.
#line 1 "ENTRY_10f4bc40"

void __thiscall Recovered_Bulk::FUN_10f4bc40(undefined4 *param_2)
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
  uVar1 = (uint)(0);

  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3 != 0) {
    do {
      thunk_FUN_103be9e0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + uVar1 * 8),0xffffffff);
      uVar1 = (uint)(uVar1 + 1);
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3));
  }
  *param_2 = (undefined4)(piVar3);

  return;

 } catch (...) { }
}


// Reference entry 10f4bd20; body size 198 bytes.
#line 1 "ENTRY_10f4bd20"

void __thiscall Recovered_Bulk::FUN_10f4bd20(undefined4 *param_2)
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

  if (*(int *)(param_1 + 0x44) != 0) {
    thunk_FUN_103be9e0(*(int *)(param_1 + 0x44),0xffffffff);
  }
  uVar1 = (uint)(0);
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3 != 0) {
    do {
      thunk_FUN_103be9e0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + uVar1 * 8),0xffffffff);
      uVar1 = (uint)(uVar1 + 1);
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3));
  }
  *param_2 = (undefined4)(piVar3);

  return;

 } catch (...) { }
}


// Reference entry 10f4bef0; body size 147 bytes.
#line 1 "ENTRY_10f4bef0"

SCStr * __thiscall Recovered_Bulk::FUN_10f4bef0(SCStr *param_2,int param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (param_3 == 0) {
    if (*(int *)(param_1[3] + 0x3c) != 0) {
      puVar4 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)param_1[2] != (undefined1 *)0x0) {
        puVar4 = (undefined1 *)((undefined1 *)param_1[2]);
      }
      iVar3 = (int)((**(code **)(*(int *)(*(int *)(param_1[3] + 0x3c) + 0x1c) + 4))(puVar4,1));
      if (iVar3 != 0) {
        pcVar2 = (char *)((char *)thunk_FUN_110cead0());
        ((SCStr *)(param_2))->int_allocRep(pcVar2);
        return (SCStr *)(param_2);
      }
    }
  }
  else if (param_3 == 1) {
    cVar1 = (char)((**(code **)(*param_1 + 0x1c))());
    if (cVar1 == '\0') {
      pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x210b,&DAT_11882ff0));
      ((SCStr *)(param_2))->int_allocRep(pcVar2);
      return (SCStr *)(param_2);
    }
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10f4c830; body size 95 bytes.
#line 1 "ENTRY_10f4c830"

char __fastcall FUN_10f4c830(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return (char)('\0');
  }
  cVar1 = (char)(thunk_FUN_1115ffd0(puVar2));
  if ((cVar1 == '\0') && (cVar1 = thunk_FUN_1115ff80(puVar2), cVar1 == '\0')) {
    return (char)('\0');
  }
  cVar1 = (char)(thunk_FUN_1115f360(puVar2));
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_1115f330(puVar2));
    return (char)((cVar1 != '\0') + '\x01');
  }
  return (char)('\x03');
}


// Reference entry 10f4c8b0; body size 115 bytes.
#line 1 "ENTRY_10f4c8b0"

void __fastcall FUN_10f4c8b0(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);
  iVar1 = (int)(*(int *)(param_1 + 4));
  piVar2 = (int *)(*(int **)(iVar1 + -4));

  if (piVar2 != (int *)0x0) {

    *(undefined4 *)(iVar1 + -8) = 0;
    *(undefined4 *)(iVar1 + -4) = 0;
    (**(code **)(*piVar2 + 8))(uVar3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -8;

    return;
  }
  *(int *)(param_1 + 4) = iVar1 + -8;
  return;

 } catch (...) { }
}


// Reference entry 10f4c9c0; body size 103 bytes.
#line 1 "ENTRY_10f4c9c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f4c9c0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIGroupVolume"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f4ca40; body size 226 bytes.
#line 1 "ENTRY_10f4ca40"

undefined4 * __thiscall Recovered_Bulk::FUN_10f4ca40(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIGroupVolume"));
  piVar4 = (int *)(param_1);
  if (bVar1) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (bVar1) {
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))(uVar2);
      }
    }
    else {
      piVar4 = (int *)((int *)0x0);
    }
  }

  if (piVar4 == (int *)0x0) {
    if (param_1[2] == 0) {
      *param_2 = (undefined4)(0);

      return (undefined4 *)(param_2);
    }
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x4c))());
    (**(code **)*puVar3)(param_2,param_3);

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(piVar4);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f4cb60; body size 103 bytes.
#line 1 "ENTRY_10f4cb60"

undefined4 * __thiscall Recovered_Bulk::FUN_10f4cb60(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIDeviceVolume"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f4cbe0; body size 233 bytes.
#line 1 "ENTRY_10f4cbe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f4cbe0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
 try {
  SCStr *this_;
  bool bVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_ = (SCStr *)(param_3);


  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIGroupVolume"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    thunk_FUN_10f4ca40(&param_3,this_);

    if (param_3 != (SCStr *)0x0) {
      *param_2 = (undefined4)(param_3);

      return (undefined4 *)(param_2);
    }
    bVar1 = (bool)(((SCStr *)(this_))->op_eq("SCIObj"));
    if (bVar1) {
      *param_2 = (undefined4)(param_1);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))();
      }

      if (param_3 != (SCStr *)0x0) {
        (**(code **)(*(int *)param_3 + 8))();
      }
    }
    else {
      *param_2 = (undefined4)(0);

      if (param_3 != (SCStr *)0x0) {
        (**(code **)(*(int *)param_3 + 8))(uVar2);
      }
    }
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f4cd10; body size 105 bytes.
#line 1 "ENTRY_10f4cd10"

undefined4 __thiscall Recovered_Bulk::FUN_10f4cd10(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
  }
  thunk_FUN_112af4e0("SCDeviceVolume",5,"rampToVolume() deviceID=\'%s\' volume=%d",puVar1,param_2);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x3c) != 0) {
      thunk_FUN_11096670(0);
    }
    puVar1 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    thunk_FUN_11160810(puVar1,param_2);
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10f4d0d0; body size 105 bytes.
#line 1 "ENTRY_10f4d0d0"

undefined4 __thiscall Recovered_Bulk::FUN_10f4d0d0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
  }
  thunk_FUN_112af4e0("SCDeviceVolume",5,"setAbsVolume() deviceID=\'%s\' volume=%d",puVar1,param_2);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x3c) != 0) {
      thunk_FUN_11096670(0);
    }
    puVar1 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    thunk_FUN_11161230(puVar1,param_2);
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10f4d1a0; body size 74 bytes.
#line 1 "ENTRY_10f4d1a0"

bool __thiscall Recovered_Bulk::FUN_10f4d1a0(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x3c) != 0) {
      thunk_FUN_11096670(0);
    }
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    cVar1 = (char)(thunk_FUN_11161a20(puVar2,param_2));
    return (bool)(cVar1 == '\0');
  }
  return (bool)(true);
}


// Reference entry 10f4d200; body size 103 bytes.
#line 1 "ENTRY_10f4d200"

undefined4 __thiscall Recovered_Bulk::FUN_10f4d200(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
  }
  thunk_FUN_112af4e0("SCDeviceVolume",5,"setRelVolume() deviceID=\'%s\' incr=%d",puVar1,param_2);
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar1 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    thunk_FUN_11161c10(puVar1,param_2);
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x3c) != 0) {
      thunk_FUN_11096670(0);
    }
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10f4dd60; body size 95 bytes.
#line 1 "ENTRY_10f4dd60"

void FUN_10f4dd60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10f4e520; body size 76 bytes.
#line 1 "ENTRY_10f4e520"

void __fastcall FUN_10f4e520(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f4e610; body size 86 bytes.
#line 1 "ENTRY_10f4e610"

void __fastcall FUN_10f4e610(int param_1)

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
  thunk_FUN_10f4e730();
  return;
}


// Reference entry 10f4e680; body size 77 bytes.
#line 1 "ENTRY_10f4e680"

void __fastcall FUN_10f4e680(int *param_1)

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
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// Reference entry 10f4e730; body size 65 bytes.
#line 1 "ENTRY_10f4e730"

void __fastcall FUN_10f4e730(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10f4e790();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10f4e790; body size 150 bytes.
#line 1 "ENTRY_10f4e790"

void __fastcall FUN_10f4e790(int *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[2]);

  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_1);

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


// Reference entry 10f4e870; body size 381 bytes.
#line 1 "ENTRY_10f4e870"

void __fastcall FUN_10f4e870(int *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  uint uVar3;
  SCLibrary *pSVar4;
  int *piVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCSettingsReplicatorEqualizer);
  param_1[4] = (int)(uint)&ghidra_vftable_SCSettingsReplicatorEqualizer;
  local_14 = (int *)(param_1);
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 0x18))(param_1[10],uVar3);
  }
  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)(**(code **)(*(int *)pSVar4 + 0x18))(&local_14));
  piVar1 = (int *)((int *)*piVar5);
  *piVar5 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xcc))(param_1 + 4);
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0xb]);

  if (piVar1 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[9]);

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[7]);

  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;
  param_1[4] = (int)(uint)&ghidra_vftable_SCIObj;
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCSettingsReplicator);
  piVar1 = (int *)((int *)param_1[3]);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = (int)(piVar1[1] + -1);
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)*piVar1)();
      LOCK();
      piVar5 = (int *)(piVar1 + 2);
      iVar2 = (int)(*piVar5);
      *piVar5 = (int)(*piVar5 + -1);
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*piVar1 + 4))();
      }
    }
  }
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f4ea80; body size 110 bytes.
#line 1 "ENTRY_10f4ea80"

void __fastcall FUN_10f4ea80(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *local_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
    *(undefined4 *)puVar2[1] = 0;
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    local_4 = (int *)(param_1);
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_10f4e790();
      thunk_FUN_1148a50e(puVar2,0x14);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    local_4 = (int *)(*(int **)(iVar1 + 4));
    thunk_FUN_10f4dd60(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10f4eb10; body size 81 bytes.
#line 1 "ENTRY_10f4eb10"

int * __thiscall Recovered_Bulk::FUN_10f4eb10(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f4ebe0; body size 81 bytes.
#line 1 "ENTRY_10f4ebe0"

int * __thiscall Recovered_Bulk::FUN_10f4ebe0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f4eff0; body size 136 bytes.
#line 1 "ENTRY_10f4eff0"

float __thiscall Recovered_Bulk::FUN_10f4eff0(int param_2)
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


// Reference entry 10f4f460; body size 87 bytes.
#line 1 "ENTRY_10f4f460"

void __thiscall Recovered_Bulk::FUN_10f4f460(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10f4f4e0; body size 133 bytes.
#line 1 "ENTRY_10f4f4e0"

void __fastcall FUN_10f4f4e0(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10f4f0a0();
  return;
}


// Reference entry 10f4f5b0; body size 77 bytes.
#line 1 "ENTRY_10f4f5b0"

void __fastcall FUN_10f4f5b0(int *param_1)

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
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// Reference entry 10f4f620; body size 65 bytes.
#line 1 "ENTRY_10f4f620"

void __fastcall FUN_10f4f620(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10f4e790();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10f4f8f0; body size 69 bytes.
#line 1 "ENTRY_10f4f8f0"

void __fastcall FUN_10f4f8f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10f4e790();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  return;
}


// Reference entry 10f4fe00; body size 502 bytes.
#line 1 "ENTRY_10f4fe00"

int * FUN_10f4fe00(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int **ppiVar7;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar6 = (int *)((int *)0x0);
  if (pSVar3 != (SCLibrary *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0xc))(uVar2));
    (**(code **)(*piVar6 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (pSVar3 != (SCLibrary *)0x0) {
    ppiVar7 = (int **)(&local_14);
    pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar4 = (undefined4)(((SCLibrary *)(pSVar3))->getSCHousehold());
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    thunk_FUN_101bf370(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))(ppiVar7);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (local_2c != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(*local_2c + 0x1b8))(&local_18,&stack0x00000008));
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      thunk_FUN_101b9270(uVar4);
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      if (local_24 != (undefined4 *)0x0) {
        ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIDeviceMusicEqualization");
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        piVar5 = (int *)((int *)(**(code **)*local_24)(&local_1c,&local_14));
        piVar1 = (int *)((int *)*piVar5);
        *piVar5 = (int)(0);
        *(unsigned char *)((char *)&local_8 + 0) = 0xc;
        local_18 = (int *)(piVar1);
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0xd;
        ((SCStr *)((SCStr *)&local_14))->int_release();
        local_14 = (int *)((int *)0x0);
        *(unsigned char *)((char *)&local_8 + 0) = 0xe;
        *param_1 = (int)((int)piVar1);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0xf;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0x10;
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0x11;
        if (local_28 != (int *)0x0) {
          (**(code **)(*local_28 + 8))();
        }
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))();
        }

        ((SCStr *)((SCStr *)&stack0x00000008))->int_release();

        return (int *)(param_1);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x14;
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 8))();
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  *param_1 = (int)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x16)));
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  ((SCStr *)((SCStr *)&stack0x00000008))->int_release();

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10f51410; body size 176 bytes.
#line 1 "ENTRY_10f51410"

void __fastcall FUN_10f51410(int param_1)

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
    (**(code **)(*piVar1 + 0xc4))(-(uint)(param_1 != 0) & param_1 + 0x10U);
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f51510; body size 117 bytes.
#line 1 "ENTRY_10f51510"

undefined4 * __thiscall Recovered_Bulk::FUN_10f51510(undefined4 *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  int *piVar2;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (bVar1) {
    piVar2 = (int *)((int *)(-(uint)(param_1 != 0) & param_1 + 0x10U));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    piVar2 = (int *)((int *)(-(uint)(param_1 != 0) & param_1 + 0x10U));
    *param_2 = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f515b0; body size 103 bytes.
#line 1 "ENTRY_10f515b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f515b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f51f70; body size 93 bytes.
#line 1 "ENTRY_10f51f70"

int __thiscall Recovered_Bulk::FUN_10f51f70(int param_2)
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


// Reference entry 10f51ff0; body size 428 bytes.
#line 1 "ENTRY_10f51ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f51ff0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10b8ff80(DAT_12126b84 );
  piVar1 = (int *)(param_2);
  param_1[4] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[5] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[4] = (uint)&ghidra_vftable_SCOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorHousehold);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorHousehold;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  (**(code **)(*param_2 + 0x14))(param_1 + 6);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar4 = (undefined4)(thunk_FUN_102d5cf0());
  param_1[7] = uVar4;
  param_1[9] = 0;
  param_1[10] = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar4 = (undefined4)((**(code **)(*piVar1 + 0x14))(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  cVar2 = (char)(thunk_FUN_101a2c70("R_ShowNSSServers",uVar4));
  if (cVar2 == '\0') {
    cVar2 = (char)(thunk_FUN_101a2c70("R_ShowRhapUPnP",uVar4));
    uVar3 = (undefined1)(0);
    if (cVar2 == '\0') goto LAB_10f520b8;
  }
  uVar3 = (undefined1)(1);
LAB_10f520b8:
  *(undefined1 *)(param_1 + 0xb) = uVar3;
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar4 = (undefined4)((**(code **)(*piVar1 + 0x14))(&param_2));
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  uVar3 = (undefined1)(thunk_FUN_101a2c70("museHHName",uVar4));
  *(undefined1 *)((int)param_1 + 0x2d) = uVar3;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0xf] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x1b] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x26] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x29] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x35] = 0;
  param_1[0x3f] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f52210; body size 177 bytes.
#line 1 "ENTRY_10f52210"

void __fastcall FUN_10f52210(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();

  return;

 } catch (...) { }
}


// Reference entry 10f52300; body size 76 bytes.
#line 1 "ENTRY_10f52300"

void __fastcall FUN_10f52300(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f523d0; body size 228 bytes.
#line 1 "ENTRY_10f523d0"

void __fastcall FUN_10f523d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorHousehold);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorHousehold;
  thunk_FUN_10f52210(uVar4);
  thunk_FUN_10360be0();
  piVar2 = (int *)((int *)param_1[10]);

  if (piVar2 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar2 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;
  param_1[4] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[4] = (uint)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar2 = (int *)((int *)param_1[3]);
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
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f52500; body size 81 bytes.
#line 1 "ENTRY_10f52500"

int * __thiscall Recovered_Bulk::FUN_10f52500(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f52690; body size 252 bytes.
#line 1 "ENTRY_10f52690"

undefined4 * __thiscall Recovered_Bulk::FUN_10f52690(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorHousehold);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorHousehold;
  thunk_FUN_10f52210(uVar4);
  thunk_FUN_10360be0();
  piVar2 = (int *)((int *)param_1[10]);

  if (piVar2 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar2 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = 0;
  param_1[4] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[4] = (uint)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar2 = (int *)((int *)param_1[3]);
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
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x100);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f53270; body size 135 bytes.
#line 1 "ENTRY_10f53270"

void __fastcall FUN_10f53270(int param_1)

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


// Reference entry 10f53340; body size 464 bytes.
#line 1 "ENTRY_10f53340"

void __fastcall FUN_10f53340(int param_1)

{
 try {
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar6 = (uint)(0);

  if (((*(int **)(param_1 + 0x34) == (int *)0x0) ||
      (cVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x1c))
                         (DAT_12126b84 ), cVar1 == '\0')) &&
     ((*(int **)(param_1 + 0x9c) == (int *)0x0 ||
      (cVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x1c))(), cVar1 == '\0')))) {
    thunk_FUN_112af4e0("SCSettingsReplicatorHousehold",2,"Requesting settings");
    pvVar2 = (void *)(operator_new(0x48));

    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      switch(*(undefined4 *)(param_1 + 0x1c)) {
      default:
        ((SCStr *)((SCStr *)&local_14))->int_allocRep("");
        break;
      case 3:
        thunk_FUN_101d9790(&local_14,4,0);
        break;
      case 4:
        thunk_FUN_101d9790(&local_14,5,0);
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));

      uVar3 = (undefined4)(thunk_FUN_102d5d00(&local_1c,*(undefined4 *)(param_1 + 0x1c)));

      uVar6 = (uint)(7);

      piVar4 = (int *)((int *)thunk_FUN_10c80a30(uVar3,&local_14,param_1 + 0x18));
    }

    if (piVar4 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      (**(code **)(*piVar5 + 4))();
    }

    if ((uVar6 & 2) != 0) {
      uVar6 = (uint)(uVar6 & 0xfffffffd);

      local_18 = (uint)(uVar6);
      ((SCStr *)((SCStr *)&local_1c))->int_release();

    }
    if ((uVar6 & 1) != 0) {
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      ((SCStr *)((SCStr *)&local_14))->int_release();

    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    (**(code **)(*(int *)(param_1 + 0x30) + 4))();
    piVar5 = (int *)(*(int **)(param_1 + 0x38));
    if (piVar5 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      (**(code **)(*piVar5 + 8))();
    }
    *(int **)(param_1 + 0x34) = piVar4;
    if (piVar4 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      uVar3 = (undefined4)((**(code **)(*piVar4 + 0xc))());
      *(undefined4 *)(param_1 + 0x38) = uVar3;
      if (*(int **)(param_1 + 0x34) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(param_1 + 0x10);

        return;
      }
    }
    thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  }

  return;

 } catch (...) { }
}


// Reference entry 10f536b0; body size 828 bytes.
#line 1 "ENTRY_10f536b0"

void __fastcall FUN_10f536b0(int param_1)

{
 try {
  code *pcVar1;
  char cVar2;
  int iVar3;
  SCStr *pSVar4;
  void *pvVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  SCStr *this_;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar12 = (uint)(0);

  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }

  if ((*(int **)(param_1 + 0x9c) != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x1c))
                        (DAT_12126b84 ), cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x2e) = 1;

    return;
  }
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x24) + 0x14))());
  if (iVar3 == 0) {
    pcVar1 = (code *)(*(code **)(**(int **)(param_1 + 0x24) + 0x28));
    if (*(char *)(param_1 + 0x2c) == '\0') {
      cVar2 = (char)((*pcVar1)());
      pcVar9 = (char *)("true");
      if (cVar2 == '\0') {
        pcVar9 = (char *)("false");
      }
      ((SCStr *)((SCStr *)&local_24))->int_allocRep(pcVar9);
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      ((SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (undefined1 *)(local_24);
      ((SCStr *)((SCStr *)&local_14))->int_addref();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      pSVar4 = (SCStr *)((SCStr *)&local_24);
    }
    else {
      cVar2 = (char)((*pcVar1)());
      pcVar9 = (char *)("1");
      if (cVar2 == '\0') {
        pcVar9 = (char *)("0");
      }
      ((SCStr *)((SCStr *)&local_20))->int_allocRep(pcVar9);
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      ((SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (undefined1 *)(local_20);
      ((SCStr *)((SCStr *)&local_14))->int_addref();
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      pSVar4 = (SCStr *)((SCStr *)&local_20);
    }
LAB_10f53816:
    ((SCStr *)(pSVar4))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 0;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 3) goto LAB_10f539cb;
      pSVar4 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 0x24) + 0x20))(&local_28));
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      if (pSVar4 != (SCStr *)&local_14) {
        ((SCStr *)((SCStr *)&local_14))->int_release();
        local_14 = (undefined1 *)(*(undefined1 **)pSVar4);
        ((SCStr *)((SCStr *)&local_14))->int_addref();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      pSVar4 = (SCStr *)((SCStr *)&local_28);
      goto LAB_10f53816;
    }
    (**(code **)(**(int **)(param_1 + 0x24) + 0x24))();
    ((SCStr *)(this_))->format((char *)&local_14);
  }
  puVar10 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)(local_14);
  }
  puVar11 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)(*(undefined1 **)(param_1 + 0x18));
  }
  thunk_FUN_112af4e0("SCSettingsReplicatorHousehold",2,"Setting %s to %s",puVar11,puVar10);
  pvVar5 = (void *)(operator_new(0x48));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (pvVar5 == (void *)0x0) {
    piVar7 = (int *)((int *)0x0);
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    default:
      ((SCStr *)((SCStr *)&local_18))->int_allocRep("");
      break;
    case 1:
    case 3:
    case 5:
      thunk_FUN_101d9790(&local_18,4,0);
      break;
    case 2:
    case 4:
      thunk_FUN_101d9790(&local_18,5,0);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));

    uVar6 = (undefined4)(thunk_FUN_102d5d00(&local_28,*(undefined4 *)(param_1 + 0x1c)));

    uVar12 = (uint)(7);

    piVar7 = (int *)((int *)thunk_FUN_10c80ce0(uVar6,&local_18,param_1 + 0x18,&local_14,0));
  }

  if (piVar7 != (int *)0x0) {
    piVar8 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
    (**(code **)(*piVar8 + 4))();
  }

  if ((uVar12 & 2) != 0) {
    uVar12 = (uint)(uVar12 & 0xfffffffd);

    local_1c = (uint)(uVar12);
    ((SCStr *)((SCStr *)&local_28))->int_release();

  }
  if ((uVar12 & 1) != 0) {
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    ((SCStr *)((SCStr *)&local_18))->int_release();

  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
  (**(code **)(*(int *)(param_1 + 0x98) + 4))();
  piVar8 = (int *)(*(int **)(param_1 + 0xa0));
  if (piVar8 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    (**(code **)(*piVar8 + 8))();
  }
  *(int **)(param_1 + 0x9c) = piVar7;
  if (piVar7 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  else {
    uVar6 = (undefined4)((**(code **)(*piVar7 + 0xc))());
    *(undefined4 *)(param_1 + 0xa0) = uVar6;
    if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x9c) + 0x14))(param_1 + 0x10);
      goto LAB_10f539cb;
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
LAB_10f539cb:

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10f55160; body size 248 bytes.
#line 1 "ENTRY_10f55160"

int * __thiscall Recovered_Bulk::FUN_10f55160(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }

  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIAudioInputResource");
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    piVar4 = (int *)((int *)(**(code **)*piVar4)(&local_14,&param_2));
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10f55400; body size 242 bytes.
#line 1 "ENTRY_10f55400"

int * __thiscall Recovered_Bulk::FUN_10f55400(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }

  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIAudioInputResource");
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    piVar4 = (int *)((int *)(**(code **)*piVar4)(&local_14,&param_2));
    iVar1 = (int)(*piVar4);
    *piVar4 = (int)(0);
    piVar4 = (int *)((int *)*param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(iVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10f55610; body size 78 bytes.
#line 1 "ENTRY_10f55610"

int * __thiscall Recovered_Bulk::FUN_10f55610(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 10f55680; body size 78 bytes.
#line 1 "ENTRY_10f55680"

int * __thiscall Recovered_Bulk::FUN_10f55680(int *param_2)
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
    return (int *)(param_1);
  }
  param_1[1] = 0;
  return (int *)(param_1);
}


// Reference entry 10f55960; body size 114 bytes.
#line 1 "ENTRY_10f55960"

undefined4 * __thiscall Recovered_Bulk::FUN_10f55960(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f559f0; body size 114 bytes.
#line 1 "ENTRY_10f559f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f559f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f55a80; body size 114 bytes.
#line 1 "ENTRY_10f55a80"

undefined4 * __thiscall Recovered_Bulk::FUN_10f55a80(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f55b10; body size 114 bytes.
#line 1 "ENTRY_10f55b10"

undefined4 * __thiscall Recovered_Bulk::FUN_10f55b10(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f55c60; body size 278 bytes.
#line 1 "ENTRY_10f55c60"

undefined4 * __thiscall Recovered_Bulk::FUN_10f55c60(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f55dc0; body size 278 bytes.
#line 1 "ENTRY_10f55dc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f55dc0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f55f20; body size 278 bytes.
#line 1 "ENTRY_10f55f20"

undefined4 * __thiscall Recovered_Bulk::FUN_10f55f20(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f56480; body size 292 bytes.
#line 1 "ENTRY_10f56480"

undefined4 * __thiscall Recovered_Bulk::FUN_10f56480(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlGetIRRepeaterState);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlGetIRRepeaterState);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f565f0; body size 292 bytes.
#line 1 "ENTRY_10f565f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f565f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlSetIRRepeaterState);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlSetIRRepeaterState);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f56760; body size 292 bytes.
#line 1 "ENTRY_10f56760"

undefined4 * __thiscall Recovered_Bulk::FUN_10f56760(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlSetLEDFeedbackState);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpHTControlSetLEDFeedbackState);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f56a40; body size 317 bytes.
#line 1 "ENTRY_10f56a40"

undefined4 * __thiscall Recovered_Bulk::FUN_10f56a40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10b8ff80(DAT_12126b84 );
  param_1[4] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[5] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[4] = (uint)&ghidra_vftable_SCOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorCustom);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorCustom;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = (uint)&ghidra_vftable_SCOpRef;
  param_1[9] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x15] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x20] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x23] = (uint)&ghidra_vftable_SCOpRef;
  param_1[0x2f] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  (**(code **)(*param_2 + 0x14))(param_1 + 0x3c);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  (**(code **)(*param_2 + 0x1c))(param_1 + 0x3d);
  *(undefined1 *)(param_1 + 0x3e) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f570c0; body size 260 bytes.
#line 1 "ENTRY_10f570c0"

void __fastcall FUN_10f570c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


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


// Reference entry 10f57210; body size 260 bytes.
#line 1 "ENTRY_10f57210"

void __fastcall FUN_10f57210(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


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


// Reference entry 10f57360; body size 260 bytes.
#line 1 "ENTRY_10f57360"

void __fastcall FUN_10f57360(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


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


// Reference entry 10f57600; body size 76 bytes.
#line 1 "ENTRY_10f57600"

void __fastcall FUN_10f57600(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f57670; body size 76 bytes.
#line 1 "ENTRY_10f57670"

void __fastcall FUN_10f57670(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f576e0; body size 76 bytes.
#line 1 "ENTRY_10f576e0"

void __fastcall FUN_10f576e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f57750; body size 76 bytes.
#line 1 "ENTRY_10f57750"

void __fastcall FUN_10f57750(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f57b50; body size 81 bytes.
#line 1 "ENTRY_10f57b50"

int * __thiscall Recovered_Bulk::FUN_10f57b50(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f57bc0; body size 81 bytes.
#line 1 "ENTRY_10f57bc0"

int * __thiscall Recovered_Bulk::FUN_10f57bc0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f57c30; body size 81 bytes.
#line 1 "ENTRY_10f57c30"

int * __thiscall Recovered_Bulk::FUN_10f57c30(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f57ca0; body size 81 bytes.
#line 1 "ENTRY_10f57ca0"

int * __thiscall Recovered_Bulk::FUN_10f57ca0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f57d10; body size 81 bytes.
#line 1 "ENTRY_10f57d10"

int * __thiscall Recovered_Bulk::FUN_10f57d10(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f57d80; body size 81 bytes.
#line 1 "ENTRY_10f57d80"

int * __thiscall Recovered_Bulk::FUN_10f57d80(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f57df0; body size 81 bytes.
#line 1 "ENTRY_10f57df0"

int * __thiscall Recovered_Bulk::FUN_10f57df0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f57e60; body size 81 bytes.
#line 1 "ENTRY_10f57e60"

int * __thiscall Recovered_Bulk::FUN_10f57e60(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f57ed0; body size 81 bytes.
#line 1 "ENTRY_10f57ed0"

int * __thiscall Recovered_Bulk::FUN_10f57ed0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f57f40; body size 81 bytes.
#line 1 "ENTRY_10f57f40"

int * __thiscall Recovered_Bulk::FUN_10f57f40(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f57fb0; body size 81 bytes.
#line 1 "ENTRY_10f57fb0"

int * __thiscall Recovered_Bulk::FUN_10f57fb0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f58a90; body size 76 bytes.
#line 1 "ENTRY_10f58a90"

void __fastcall FUN_10f58a90(int param_1)

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


// Reference entry 10f58af0; body size 76 bytes.
#line 1 "ENTRY_10f58af0"

void __fastcall FUN_10f58af0(int param_1)

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


// Reference entry 10f58b50; body size 76 bytes.
#line 1 "ENTRY_10f58b50"

void __fastcall FUN_10f58b50(int param_1)

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


// Reference entry 10f58bb0; body size 76 bytes.
#line 1 "ENTRY_10f58bb0"

void __fastcall FUN_10f58bb0(int param_1)

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


// Reference entry 10f58c10; body size 479 bytes.
#line 1 "ENTRY_10f58c10"

void __thiscall Recovered_Bulk::FUN_10f58c10(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((*(int **)(param_1 + 0xc) != (int *)0x0) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))(DAT_12126b84 )
     , iVar2 == param_2)) {
    if ((short)param_3 != 0) {
      (**(code **)(*(int *)(param_1 + -0x10) + 0x44))();
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0xe0) != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0xe0));
      }
      thunk_FUN_112af4e0("SCSettingsReplicatorCustom",1,"Error getting %s",puVar5);

      return;
    }
    piVar3 = (int *)((int *)(**(code **)(*(int *)(param_1 + -0x10) + 0x38))(&param_3));
    piVar4 = (int *)((int *)*piVar3);

    *piVar3 = (int)(0);
    if (piVar4 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (piVar4 != (int *)0x0) {
      if (piVar4 != *(int **)(param_1 + 0xd8)) {
        piVar1 = (int *)(*(int **)(param_1 + 0xdc));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0xd8) = 0;
          *(undefined4 *)(param_1 + 0xdc) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(int **)(param_1 + 0xd8) = piVar4;
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        *(int **)(param_1 + 0xdc) = piVar4;
        (**(code **)(*piVar4 + 4))();
      }
      thunk_FUN_10b93810();
    }

    if (piVar3 == (int *)0x0) {

      return;
    }
    (**(code **)(*piVar3 + 8))();

    return;
  }
  if (*(int **)(param_1 + 0x74) == (int *)0x0) {

    return;
  }
  iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x74) + 0x20))());
  if (iVar2 != param_2) {

    return;
  }
  if ((short)param_3 != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0xe0) != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0xe0));
    }
    thunk_FUN_112af4e0("SCSettingsReplicatorCustom",1,"Error setting %s",puVar5);
    if (*(char *)(param_1 + 0xe8) != '\0') goto LAB_10f58db8;
    (**(code **)(*(int *)(param_1 + -0x10) + 0x30))();
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {

    return;
  }
LAB_10f58db8:
  thunk_FUN_112af4e0("SCSettingsReplicatorCustom",2,"Pending set; sending now");
  *(undefined1 *)(param_1 + 0xe8) = 0;
  thunk_FUN_10f63140();

  return;

 } catch (...) { }
}


// Reference entry 10f58e70; body size 215 bytes.
#line 1 "ENTRY_10f58e70"

void __thiscall Recovered_Bulk::FUN_10f58e70(int param_2,short param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x24) + 0x20))());
  }
  if (iVar1 == param_2) {
    if (param_3 != 0) {
      puVar2 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
        puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
      }
      thunk_FUN_112af4e0("SCSettingsReplicatorUPnPString",1,"Error getting %s",puVar2);
      return;
    }
    thunk_FUN_10f64700();
    thunk_FUN_10b93810();
    return;
  }
  if (*(int **)(param_1 + 0x8c) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x8c) + 0x20))());
  }
  if (iVar1 != param_2) {
    return;
  }
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    thunk_FUN_112af4e0("SCSettingsReplicatorUPnPString",1,"Error setting %s",puVar2);
    if (*(char *)(param_1 + 0x1c) != '\0') goto LAB_10f58f23;
    (**(code **)(*(int *)(param_1 + -0x10) + 0x30))();
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    return;
  }
LAB_10f58f23:
  thunk_FUN_112af4e0("SCSettingsReplicatorUPnPString",2,"Pending set; sending now");
  *(undefined1 *)(param_1 + 0x1c) = 0;
  thunk_FUN_10f632b0();
  return;
}


// Reference entry 10f59280; body size 149 bytes.
#line 1 "ENTRY_10f59280"

void __thiscall Recovered_Bulk::FUN_10f59280(int *param_2,undefined4 param_3)
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


// Reference entry 10f59360; body size 149 bytes.
#line 1 "ENTRY_10f59360"

void __thiscall Recovered_Bulk::FUN_10f59360(int *param_2,undefined4 param_3)
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


// Reference entry 10f59440; body size 149 bytes.
#line 1 "ENTRY_10f59440"

void __thiscall Recovered_Bulk::FUN_10f59440(int *param_2,undefined4 param_3)
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


// Reference entry 10f59520; body size 149 bytes.
#line 1 "ENTRY_10f59520"

void __thiscall Recovered_Bulk::FUN_10f59520(int *param_2,undefined4 param_3)
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


// Reference entry 10f59680; body size 69 bytes.
#line 1 "ENTRY_10f59680"

void __fastcall FUN_10f59680(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f596e0; body size 69 bytes.
#line 1 "ENTRY_10f596e0"

void __fastcall FUN_10f596e0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f59740; body size 69 bytes.
#line 1 "ENTRY_10f59740"

void __fastcall FUN_10f59740(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f597a0; body size 69 bytes.
#line 1 "ENTRY_10f597a0"

void __fastcall FUN_10f597a0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f59800; body size 69 bytes.
#line 1 "ENTRY_10f59800"

void __fastcall FUN_10f59800(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f59880; body size 69 bytes.
#line 1 "ENTRY_10f59880"

void __fastcall FUN_10f59880(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f598e0; body size 69 bytes.
#line 1 "ENTRY_10f598e0"

void __fastcall FUN_10f598e0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f59940; body size 69 bytes.
#line 1 "ENTRY_10f59940"

void __fastcall FUN_10f59940(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f599a0; body size 69 bytes.
#line 1 "ENTRY_10f599a0"

void __fastcall FUN_10f599a0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f59a00; body size 69 bytes.
#line 1 "ENTRY_10f59a00"

void __fastcall FUN_10f59a00(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f59a60; body size 69 bytes.
#line 1 "ENTRY_10f59a60"

void __fastcall FUN_10f59a60(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f59ac0; body size 69 bytes.
#line 1 "ENTRY_10f59ac0"

void __fastcall FUN_10f59ac0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f59b20; body size 69 bytes.
#line 1 "ENTRY_10f59b20"

void __fastcall FUN_10f59b20(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  return;
}


// Reference entry 10f5a970; body size 178 bytes.
#line 1 "ENTRY_10f5a970"

undefined4 * __thiscall Recovered_Bulk::FUN_10f5a970(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x48));

  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    pvVar2 = (void *)(operator_new(0x6c));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar2 == (void *)0x0) {
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(0));
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_111c06e0(0));
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(uVar3));
    }
  }
  *(int **)(param_1 + 0x100) = piVar4;

  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar1);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f5ab40; body size 478 bytes.
#line 1 "ENTRY_10f5ab40"

int * __thiscall Recovered_Bulk::FUN_10f5ab40(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  int local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar6,uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0x1b8))(&local_18,param_1 + 0xf4));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_101b9270(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_24 != 0) {
      thunk_FUN_105c9e00(&local_24);
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      if (local_14 != (int *)0x0) {
        puVar5 = (undefined4 *)((undefined4 *)(**(code **)(*local_14 + 0x1c))(&local_1c));
        local_18 = (int *)((int *)*puVar5);
        *puVar5 = (undefined4)(0);
        piVar1 = (int *)(*(int **)(param_1 + 0x104));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x100) = 0;
          *(undefined4 *)(param_1 + 0x104) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(int **)(param_1 + 0x100) = local_18;
        if (local_18 == (int *)0x0) {
          uVar4 = (undefined4)(0);
        }
        else {
          uVar4 = (undefined4)((**(code **)(*local_18 + 0xc))());
        }
        *(undefined4 *)(param_1 + 0x104) = uVar4;
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }
        piVar1 = (int *)(*(int **)(param_1 + 0x100));
        *(unsigned char *)((char *)&local_8 + 0) = 8;
        *param_2 = (int)((int)piVar1);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0xb;
        (**(code **)(*local_14 + 8))();
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))();
        }

        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }

        return (int *)(param_2);
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
  }
  *param_2 = (int)(0);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f5ada0; body size 478 bytes.
#line 1 "ENTRY_10f5ada0"

int * __thiscall Recovered_Bulk::FUN_10f5ada0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  int local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar6,uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0x1b8))(&local_18,param_1 + 0xf4));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_101b9270(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_24 != 0) {
      thunk_FUN_105c9e00(&local_24);
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      if (local_14 != (int *)0x0) {
        puVar5 = (undefined4 *)((undefined4 *)(**(code **)(*local_14 + 0x24))(&local_1c));
        local_18 = (int *)((int *)*puVar5);
        *puVar5 = (undefined4)(0);
        piVar1 = (int *)(*(int **)(param_1 + 0x104));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x100) = 0;
          *(undefined4 *)(param_1 + 0x104) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(int **)(param_1 + 0x100) = local_18;
        if (local_18 == (int *)0x0) {
          uVar4 = (undefined4)(0);
        }
        else {
          uVar4 = (undefined4)((**(code **)(*local_18 + 0xc))());
        }
        *(undefined4 *)(param_1 + 0x104) = uVar4;
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }
        piVar1 = (int *)(*(int **)(param_1 + 0x100));
        *(unsigned char *)((char *)&local_8 + 0) = 8;
        *param_2 = (int)((int)piVar1);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        *(unsigned char *)((char *)&local_8 + 0) = 0xb;
        (**(code **)(*local_14 + 8))();
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))();
        }

        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }

        return (int *)(param_2);
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
  }
  *param_2 = (int)(0);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f5b000; body size 402 bytes.
#line 1 "ENTRY_10f5b000"

int * __thiscall Recovered_Bulk::FUN_10f5b000(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int **ppiVar6;
  int *local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar6,uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0x1b8))(&local_1c,param_1 + 0xf4));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_101b9270(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_18 != 0) {
      piVar5 = (int *)((int *)thunk_FUN_1031be20(&local_20));
      piVar1 = (int *)((int *)*piVar5);
      *piVar5 = (int)(0);
      piVar5 = (int *)(*(int **)(param_1 + 0x104));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x100) = 0;
        *(undefined4 *)(param_1 + 0x104) = 0;
        (**(code **)(*piVar5 + 8))();
      }
      *(int **)(param_1 + 0x100) = piVar1;
      if (piVar1 == (int *)0x0) {
        uVar4 = (undefined4)(0);
      }
      else {
        uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))());
      }
      *(undefined4 *)(param_1 + 0x104) = uVar4;
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 8))();
      }
      piVar1 = (int *)(*(int **)(param_1 + 0x100));
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      *param_2 = (int)((int)piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }

      goto LAB_10f5b171;
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  *param_2 = (int)(0);

LAB_10f5b171:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f5b420; body size 402 bytes.
#line 1 "ENTRY_10f5b420"

int * __thiscall Recovered_Bulk::FUN_10f5b420(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int **ppiVar6;
  int *local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar6,uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0x1b8))(&local_1c,param_1 + 0xf4));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_101b9270(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_18 != 0) {
      piVar5 = (int *)((int *)thunk_FUN_1031b860(&local_20));
      piVar1 = (int *)((int *)*piVar5);
      *piVar5 = (int)(0);
      piVar5 = (int *)(*(int **)(param_1 + 0x104));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x100) = 0;
        *(undefined4 *)(param_1 + 0x104) = 0;
        (**(code **)(*piVar5 + 8))();
      }
      *(int **)(param_1 + 0x100) = piVar1;
      if (piVar1 == (int *)0x0) {
        uVar4 = (undefined4)(0);
      }
      else {
        uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))());
      }
      *(undefined4 *)(param_1 + 0x104) = uVar4;
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 8))();
      }
      piVar1 = (int *)(*(int **)(param_1 + 0x100));
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      *param_2 = (int)((int)piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }

      goto LAB_10f5b591;
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  *param_2 = (int)(0);

LAB_10f5b591:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f5be80; body size 178 bytes.
#line 1 "ENTRY_10f5be80"

undefined4 * __thiscall Recovered_Bulk::FUN_10f5be80(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x48));

  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    pvVar2 = (void *)(operator_new(0x6c));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar2 == (void *)0x0) {
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(0));
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_111c06e0(0));
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(uVar3));
    }
  }
  *(int **)(param_1 + 0x100) = piVar4;

  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar1);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f5bf60; body size 178 bytes.
#line 1 "ENTRY_10f5bf60"

undefined4 * __thiscall Recovered_Bulk::FUN_10f5bf60(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  uVar1 = (uint)(DAT_12126b84);

  pvVar2 = (void *)(operator_new(0x48));

  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    pvVar2 = (void *)(operator_new(0x6c));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar2 == (void *)0x0) {
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(0));
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_111c06e0(0));
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      piVar4 = (int *)((int *)thunk_FUN_101b94f0(uVar3));
    }
  }
  *(int **)(param_1 + 0x100) = piVar4;

  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar1);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f5ce40; body size 315 bytes.
#line 1 "ENTRY_10f5ce40"

undefined4 * __thiscall Recovered_Bulk::FUN_10f5ce40(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  SCLibrary *pSVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uStack_44;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar2 = (int *)((int *)(**(code **)(*(int *)pSVar1 + 0x18))());
  piVar4 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar4 == (int *)0x0) {
    *param_2 = (undefined4)(0);

  }
  else {
    (**(code **)(**(int **)(param_1 + 0xe8) + 0x24))();

    pvVar3 = (void *)(operator_new(0x48));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {

      pvVar3 = (void *)(operator_new(0x74));
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      if (pvVar3 == (void *)0x0) {
        *(unsigned char *)((char *)&local_8 + 0) = 4;

        piVar4 = (int *)((int *)thunk_FUN_101b94f0());
      }
      else {
        (**(code **)(*piVar4 + 0x14))(&uStack_44);
        thunk_FUN_105d0d50();
        *(unsigned char *)((char *)&local_8 + 0) = 4;

        piVar4 = (int *)((int *)thunk_FUN_101b94f0());
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }

  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f5cfd0; body size 362 bytes.
#line 1 "ENTRY_10f5cfd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f5cfd0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int local_20;
  int *local_1c;
  int *local_18;
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
  if (piVar1 != (int *)0x0) {
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0x1b8))(&local_18,param_1 + 0xf4));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_101b9270(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_20 != 0) {
      thunk_FUN_105c9e00(&local_20);
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      if (local_14 != (int *)0x0) {
        uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0xe8) + 0x24))());
        (**(code **)(*local_14 + 0x20))(param_2,uVar4);
        *(unsigned char *)((char *)&local_8 + 0) = 9;
        (**(code **)(*local_14 + 8))();
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))();
        }

        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
        }

        return (undefined4 *)(param_2);
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
  }
  *param_2 = (undefined4)(0);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f5d3b0; body size 309 bytes.
#line 1 "ENTRY_10f5d3b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f5d3b0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  SCLibrary *this_;
  int *piVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar6,uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    uVar5 = (undefined4)((**(code **)(*piVar1 + 0x1b8))(&local_1c,param_1 + 0xf4));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_101b9270(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_18 != 0) {
      uVar2 = (undefined1)((**(code **)(**(int **)(param_1 + 0xe8) + 0x28))());
      thunk_FUN_1031d730(param_2,uVar2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }

      goto LAB_10f5d4c4;
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  *param_2 = (undefined4)(0);

LAB_10f5d4c4:
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f5d7e0; body size 309 bytes.
#line 1 "ENTRY_10f5d7e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f5d7e0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  SCLibrary *this_;
  int *piVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar6,uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    uVar5 = (undefined4)((**(code **)(*piVar1 + 0x1b8))(&local_1c,param_1 + 0xf4));
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_101b9270(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_18 != 0) {
      uVar2 = (undefined1)((**(code **)(**(int **)(param_1 + 0xe8) + 0x28))());
      thunk_FUN_1031d470(param_2,uVar2);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }

      goto LAB_10f5d8f4;
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }
  *param_2 = (undefined4)(0);

LAB_10f5d8f4:
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f61900; body size 128 bytes.
#line 1 "ENTRY_10f61900"

void __fastcall FUN_10f61900(int param_1)

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


// Reference entry 10f619a0; body size 128 bytes.
#line 1 "ENTRY_10f619a0"

void __fastcall FUN_10f619a0(int param_1)

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


// Reference entry 10f61a40; body size 128 bytes.
#line 1 "ENTRY_10f61a40"

void __fastcall FUN_10f61a40(int param_1)

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


// Reference entry 10f61ae0; body size 128 bytes.
#line 1 "ENTRY_10f61ae0"

void __fastcall FUN_10f61ae0(int param_1)

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


// Reference entry 10f61b80; body size 232 bytes.
#line 1 "ENTRY_10f61b80"

void __thiscall Recovered_Bulk::FUN_10f61b80(undefined4 param_2,undefined4 param_3)
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
    (**(code **)(*piVar1 + 0x38))();
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


// Reference entry 10f61cb0; body size 232 bytes.
#line 1 "ENTRY_10f61cb0"

void __thiscall Recovered_Bulk::FUN_10f61cb0(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f61de0; body size 232 bytes.
#line 1 "ENTRY_10f61de0"

void __thiscall Recovered_Bulk::FUN_10f61de0(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f61f10; body size 232 bytes.
#line 1 "ENTRY_10f61f10"

void __thiscall Recovered_Bulk::FUN_10f61f10(undefined4 param_2,undefined4 param_3)
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
    (**(code **)(*piVar1 + 0x3c))();
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


// Reference entry 10f62640; body size 224 bytes.
#line 1 "ENTRY_10f62640"

void __fastcall FUN_10f62640(int *param_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (((int *)param_1[7] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[7] + 0x1c))(DAT_12126b84 ),
     cVar1 != '\0')) {

    return;
  }
  if (((int *)param_1[0x21] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x21] + 0x1c))(), cVar1 != '\0')) {

    return;
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[0x3c] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)param_1[0x3c]);
  }
  thunk_FUN_112af4e0("SCSettingsReplicatorCustom",2,"Getting %s",puVar3);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x3c))(&local_14));

  thunk_FUN_102caa30(uVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (local_1c != 0) {
    thunk_FUN_102cb990(&local_1c,param_1 + 4);
  }

  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f63140; body size 287 bytes.
#line 1 "ENTRY_10f63140"

void __fastcall FUN_10f63140(int *param_1)

{
 try {
  int *piVar1;
  char cVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  undefined4 uVar5;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((int *)param_1[0x21] != (int *)0x0) {
    cVar2 = (char)((**(code **)(*(int *)param_1[0x21] + 0x1c))(DAT_12126b84 ));
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x3e) = 1;

      return;
    }
  }
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&local_14));
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
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    uVar5 = (undefined4)((**(code **)(*param_1 + 0x40))(&local_1c));
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_102caa30(uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_18 != 0) {
      thunk_FUN_102cb990(&local_18,param_1 + 4);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f63820; body size 100 bytes.
#line 1 "ENTRY_10f63820"

int __thiscall Recovered_Bulk::FUN_10f63820(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("RoomCalibrationEnabled");
  thunk_FUN_112505b0(iVar1);
  iVar1 = (int)(param_1 + 0xd7d1);
  thunk_FUN_1124ff50("RoomCalibrationAvailable");
  thunk_FUN_112505b0(iVar1);
  return (int)(param_1);
}


// Reference entry 10f64d40; body size 114 bytes.
#line 1 "ENTRY_10f64d40"

undefined4 * __thiscall Recovered_Bulk::FUN_10f64d40(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f65100; body size 93 bytes.
#line 1 "ENTRY_10f65100"

int __thiscall Recovered_Bulk::FUN_10f65100(int param_2)
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


// Reference entry 10f65c90; body size 177 bytes.
#line 1 "ENTRY_10f65c90"

void __fastcall FUN_10f65c90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();

  return;

 } catch (...) { }
}


// Reference entry 10f65d80; body size 76 bytes.
#line 1 "ENTRY_10f65d80"

void __fastcall FUN_10f65d80(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f65df0; body size 76 bytes.
#line 1 "ENTRY_10f65df0"

void __fastcall FUN_10f65df0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f65e60; body size 76 bytes.
#line 1 "ENTRY_10f65e60"

void __fastcall FUN_10f65e60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f65fb0; body size 320 bytes.
#line 1 "ENTRY_10f65fb0"

int __fastcall FUN_10f65fb0(undefined4 *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorMusicLibrary);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorMusicLibrary;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0x18))(param_1[10],uVar4);
  }
  thunk_FUN_102cc870();
  thunk_FUN_102cc960();
  thunk_FUN_102cc870();
  thunk_FUN_10f65c90();
  iVar5 = (int)(thunk_FUN_102cc870());
  piVar3 = (int *)((int *)param_1[0xb]);

  if (piVar3 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  piVar3 = (int *)((int *)param_1[9]);

  if (piVar3 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  piVar3 = (int *)((int *)param_1[7]);

  if (piVar3 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
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

  return (int)(iVar5);

 } catch (...) { }
}


// Reference entry 10f66150; body size 81 bytes.
#line 1 "ENTRY_10f66150"

int * __thiscall Recovered_Bulk::FUN_10f66150(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f664f0; body size 342 bytes.
#line 1 "ENTRY_10f664f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f664f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorMusicLibrary);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorMusicLibrary;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0x18))(param_1[10],uVar4);
  }
  thunk_FUN_102cc870();
  thunk_FUN_102cc960();
  thunk_FUN_102cc870();
  thunk_FUN_10f65c90();
  thunk_FUN_102cc870();
  piVar2 = (int *)((int *)param_1[0xb]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (piVar2 != (int *)0x0) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[9]);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar2 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  piVar2 = (int *)((int *)param_1[7]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (piVar2 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  param_1[4] = (uint)&ghidra_vftable_SCIObjImpl;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[4] = (uint)&ghidra_vftable_SCIObj;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar2 = (int *)((int *)param_1[3]);
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
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x250);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f66740; body size 76 bytes.
#line 1 "ENTRY_10f66740"

void __fastcall FUN_10f66740(int param_1)

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


// Reference entry 10f66c50; body size 149 bytes.
#line 1 "ENTRY_10f66c50"

void __thiscall Recovered_Bulk::FUN_10f66c50(int *param_2,undefined4 param_3)
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


// Reference entry 10f673a0; body size 185 bytes.
#line 1 "ENTRY_10f673a0"

undefined4 * FUN_10f673a0(undefined4 *param_1)

{
 try {
  uint uVar1;
  SCLibrary *this_;
  int *piVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar2 = (int *)((int *)0x0);
  if (this_ != (SCLibrary *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*(int *)this_ + 0xc))(uVar1));
    (**(code **)(*piVar2 + 4))();
  }

  if (this_ != (SCLibrary *)0x0) {
    puVar3 = (undefined4 *)(param_1);
    ((SCLibrary *)(this_))->getSCHousehold();

    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(puVar3);
    }

    return (undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f67620; body size 135 bytes.
#line 1 "ENTRY_10f67620"

void __fastcall FUN_10f67620(int param_1)

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


// Reference entry 10f676f0; body size 128 bytes.
#line 1 "ENTRY_10f676f0"

void __fastcall FUN_10f676f0(int param_1)

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


// Reference entry 10f677b0; body size 232 bytes.
#line 1 "ENTRY_10f677b0"

void __thiscall Recovered_Bulk::FUN_10f677b0(undefined4 param_2,undefined4 param_3)
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
    (**(code **)(*piVar1 + 0x38))();
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


// Reference entry 10f69580; body size 76 bytes.
#line 1 "ENTRY_10f69580"

void __fastcall FUN_10f69580(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f69920; body size 662 bytes.
#line 1 "ENTRY_10f69920"

void __thiscall Recovered_Bulk::FUN_10f69920(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(DAT_12126b84 ));
  }
  if (iVar1 == param_2) {
    piVar4 = (int *)((int *)0x0);
    piVar5 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    if ((short)param_3 == 0) {
      piVar5 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x34))(&param_3));
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
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 8))();
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    if (piVar4 == (int *)0x0) {
      thunk_FUN_112af4e0("SCSettingsReplicatorRest",1,"Error getting settings from player");
    }
    else {
      thunk_FUN_112af4e0("SCSettingsReplicatorRest",2,"Received settings");
      piVar2 = (int *)((int *)(**(code **)(*piVar4 + 0x94))(&param_3));
      piVar4 = (int *)((int *)*piVar2);
      *piVar2 = (int)(0);
      piVar2 = (int *)(*(int **)(param_1 + 0xec));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0xe8) = 0;
        *(undefined4 *)(param_1 + 0xec) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(param_1 + 0xe8) = piVar4;
      if (piVar4 == (int *)0x0) {
        uVar3 = (undefined4)(0);
      }
      else {
        uVar3 = (undefined4)((**(code **)(*piVar4 + 0xc))());
      }
      *(undefined4 *)(param_1 + 0xec) = uVar3;
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0;
    }
    thunk_FUN_10b93810();

    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();

      return;
    }
  }
  else {
    if (*(int **)(param_1 + 0x84) == (int *)0x0) {
      iVar1 = (int)(0);
    }
    else {
      iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x84) + 0x20))());
    }
    if (iVar1 == param_2) {
      if ((short)param_3 == 0) {
        if (*(int *)(param_1 + 0xf0) == 0) {
          thunk_FUN_10b93840();

          return;
        }
        thunk_FUN_112af4e0("SCSettingsReplicatorRest",2,"Pending settings changes; sending now");
        piVar4 = (int *)(*(int **)(param_1 + 0xf4));
        uVar3 = (undefined4)(*(undefined4 *)(param_1 + 0xf0));
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }

        if (*(int *)(param_1 + 0xf0) != 0) {
          piVar5 = (int *)(*(int **)(param_1 + 0xf4));
          if (piVar5 != (int *)0x0) {
            *(undefined4 *)(param_1 + 0xf0) = 0;
            *(undefined4 *)(param_1 + 0xf4) = 0;
            (**(code **)(*piVar5 + 8))();
          }
          *(undefined4 *)(param_1 + 0xf0) = 0;
          *(undefined4 *)(param_1 + 0xf4) = 0;
        }
        thunk_FUN_10f6aa00(uVar3);

        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))();

          return;
        }
      }
      else {
        thunk_FUN_112af4e0("SCSettingsReplicatorRest",1,"Error changing settings");
        (**(code **)(*(int *)(param_1 + -0x10) + 0x30))();
        thunk_FUN_10b937e0();
      }
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f6a680; body size 182 bytes.
#line 1 "ENTRY_10f6a680"

void __thiscall Recovered_Bulk::FUN_10f6a680(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)(**(code **)(*param_2 + 0x94))(&param_2,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);
  *piVar2 = (int)(0);
  piVar2 = (int *)(*(int **)(param_1 + 0xfc));

  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *(int **)(param_1 + 0xf8) = piVar1;
  if (piVar1 == (int *)0x0) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0xc))());
  }
  *(undefined4 *)(param_1 + 0xfc) = uVar3;

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  thunk_FUN_10b93810();

  return;

 } catch (...) { }
}


// Reference entry 10f6ae50; body size 181 bytes.
#line 1 "ENTRY_10f6ae50"

void FUN_10f6ae50(undefined4 param_1,undefined8 param_2)

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

  piVar3 = (int *)((int *)createPropertyBag());
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
  (**(code **)(*piVar1 + 0x34))(param_1,param_2);
  thunk_FUN_10f6aa00(piVar1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f6af40; body size 171 bytes.
#line 1 "ENTRY_10f6af40"

void __stdcall FUN_10f6af40(undefined4 param_1,undefined4 param_2)

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

  piVar3 = (int *)((int *)createPropertyBag());
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
  (**(code **)(*piVar1 + 0x28))(param_1,param_2);
  thunk_FUN_10f6aa00(piVar1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f6b380; body size 150 bytes.
#line 1 "ENTRY_10f6b380"

undefined4 __thiscall Recovered_Bulk::FUN_10f6b380(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);

  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_10f6b380(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);

    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }

    thunk_FUN_1148a50e(param_3,0x1c);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10f6b490; body size 73 bytes.
#line 1 "ENTRY_10f6b490"

int * __thiscall Recovered_Bulk::FUN_10f6b490(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*param_1);
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
  *param_2 = (int)((int)puVar4);
  param_2[1] = 0;
  param_2[2] = iVar1;
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = (uint)(*param_3);
    do {
      *param_2 = (int)((int)puVar4);
      uVar3 = (uint)(puVar4[4]);
      if (uVar2 <= uVar3) {
        param_2[2] = (int)puVar4;
        puVar4 = (undefined4 *)((undefined4 *)*puVar4);
      }
      else {
        puVar4 = (undefined4 *)((undefined4 *)puVar4[2]);
      }
      param_2[1] = (uint)(uVar2 <= uVar3);
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 10f6b510; body size 98 bytes.
#line 1 "ENTRY_10f6b510"

void FUN_10f6b510(undefined4 param_1,int param_2)

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


// Reference entry 10f6b5d0; body size 221 bytes.
#line 1 "ENTRY_10f6b5d0"

int * __thiscall Recovered_Bulk::FUN_10f6b5d0(int *param_2,uint *param_3)
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

  thunk_FUN_10f6b490(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(uint *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10f6c870(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10f6b780; body size 85 bytes.
#line 1 "ENTRY_10f6b780"

void FUN_10f6b780(undefined4 param_1,int param_2)

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


// Reference entry 10f6bcd0; body size 111 bytes.
#line 1 "ENTRY_10f6bcd0"

void __fastcall FUN_10f6bcd0(int param_1)

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


// Reference entry 10f6bdc0; body size 84 bytes.
#line 1 "ENTRY_10f6bdc0"

void __fastcall FUN_10f6bdc0(int param_1)

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


// Reference entry 10f6bfd0; body size 81 bytes.
#line 1 "ENTRY_10f6bfd0"

int * __thiscall Recovered_Bulk::FUN_10f6bfd0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
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
      return (int *)(param_1);
    }
    param_1[1] = 0;
  }
  return (int *)(param_1);
}


// Reference entry 10f6c0e0; body size 188 bytes.
#line 1 "ENTRY_10f6c0e0"

int __thiscall Recovered_Bulk::FUN_10f6c0e0(uint *param_2)
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

  thunk_FUN_10f6b490(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(uint *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10f6c870(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10f6c2b0; body size 107 bytes.
#line 1 "ENTRY_10f6c2b0"

int __thiscall Recovered_Bulk::FUN_10f6c2b0(byte param_2)
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


// Reference entry 10f6cb00; body size 79 bytes.
#line 1 "ENTRY_10f6cb00"

void __thiscall Recovered_Bulk::FUN_10f6cb00(int param_2)
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


// Reference entry 10f6cbf0; body size 83 bytes.
#line 1 "ENTRY_10f6cbf0"

void __thiscall Recovered_Bulk::FUN_10f6cbf0(int *param_2)
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


// Reference entry 10f6cc70; body size 774 bytes.
#line 1 "ENTRY_10f6cc70"

void __thiscall Recovered_Bulk::FUN_10f6cc70(int *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar5 = (int *)(param_2);


  if ((*(int **)(param_1 + 0x10) == (int *)0x0) ||
     (piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x20))
                                (DAT_12126b84 ), piVar1 != (int *)(piVar5))) {
    thunk_FUN_10f6b490(local_1c,&param_2);
    if ((*(char *)((int)local_14 + 0xd) != '\0') || (piVar5 < *(int **)((int)local_14 + 0x10))) {
      local_14 = (int *)(*(int **)(param_1 + 0x18));
    }
    if (local_14 != (int *)*(int *)(param_1 + 0x18)) {
      if ((short)param_3 != 0) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      iVar4 = (int)(thunk_FUN_10f6c490(local_14));
      piVar5 = (int *)(*(int **)(iVar4 + 0x18));

      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(iVar4 + 0x14) = 0;
        *(undefined4 *)(iVar4 + 0x18) = 0;
        (**(code **)(*piVar5 + 8))();
      }

      thunk_FUN_1148a50e(iVar4,0x1c);
      if (*(int *)(param_1 + 0x1c) == 0) {
        if (*(char *)(param_1 + 0x20) != '\0') {
          thunk_FUN_112af4e0("SCSettingsReplicatorSet",1,"Error changing settings");
          (**(code **)(*(int *)(param_1 + -0x10) + 0x30))();
          thunk_FUN_10b937e0();

          return;
        }
        if (*(int *)(param_1 + 0x2c) != 0) {
          thunk_FUN_112af4e0("SCSettingsReplicatorSet",2,"Pending settings changes; sending now");
          local_14 = (int *)(*(int **)(param_1 + 0x30));
          uVar3 = (undefined4)(*(undefined4 *)(param_1 + 0x2c));
          local_18 = (int *)((int *)uVar3);
          if (local_14 != (int *)0x0) {
            (**(code **)(*local_14 + 4))();
          }

          if (*(int *)(param_1 + 0x2c) != 0) {
            piVar5 = (int *)(*(int **)(param_1 + 0x30));
            if (piVar5 != (int *)0x0) {
              *(undefined4 *)(param_1 + 0x2c) = 0;
              *(undefined4 *)(param_1 + 0x30) = 0;
              (**(code **)(*piVar5 + 8))();
            }
            *(undefined4 *)(param_1 + 0x2c) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0;
          }
          thunk_FUN_10f6db80(uVar3);
          thunk_FUN_1011be40();

          return;
        }
        thunk_FUN_112af4e0("SCSettingsReplicatorSet",2,"Succeeded changing settings");
        thunk_FUN_10b93840();
      }
    }
  }
  else {
    piVar5 = (int *)((int *)0x0);
    piVar1 = (int *)((int *)0x0);
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    if ((short)param_3 == 0) {
      piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x34))(&param_3));
      piVar5 = (int *)((int *)*piVar1);
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      *piVar1 = (int)(0);
      local_18 = (int *)(piVar5);
      if (piVar5 == (int *)0x0) {
        piVar1 = (int *)((int *)0x0);
      }
      else {
        piVar1 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      local_14 = (int *)(piVar1);
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 8))();
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    if (piVar5 == (int *)0x0) {
      thunk_FUN_112af4e0("SCSettingsReplicatorSet",1,"Error getting settings from player");
    }
    else {
      thunk_FUN_112af4e0("SCSettingsReplicatorSet",2,"Received settings");
      puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*piVar5 + 0x94))(&param_2));
      param_3 = (int *)((int *)*puVar2);
      *puVar2 = (undefined4)(0);
      piVar5 = (int *)(*(int **)(param_1 + 0x28));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        (**(code **)(*piVar5 + 8))();
      }
      *(int **)(param_1 + 0x24) = param_3;
      if (param_3 == (int *)0x0) {
        uVar3 = (undefined4)(0);
      }
      else {
        uVar3 = (undefined4)((**(code **)(*param_3 + 0xc))());
      }
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0;
    }
    thunk_FUN_10b93810();
    if (*(int *)(param_1 + 0x10) != 0) {
      piVar5 = (int *)(*(int **)(param_1 + 0x14));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        (**(code **)(*piVar5 + 8))();
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }

    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();

      return;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f6d310; body size 69 bytes.
#line 1 "ENTRY_10f6d310"

void __thiscall Recovered_Bulk::FUN_10f6d310(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f6b490(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10f6d380; body size 288 bytes.
#line 1 "ENTRY_10f6d380"

int * __thiscall Recovered_Bulk::FUN_10f6d380(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_1037a2b0(&local_14,DAT_12126b84 ));
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
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 == (int *)0x0) {
    *param_2 = (int)(0);
    param_2[1] = 0;

  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0x1b8))(&local_18,param_1 + 0x1c));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    param_2[1] = 0;
    *param_2 = (int)(0);
    piVar1 = (int *)((int *)*piVar3);
    *piVar3 = (int)(0);
    piVar3 = (int *)((int *)param_2[1]);
    if (piVar3 != (int *)0x0) {
      *param_2 = (int)(0);
      param_2[1] = 0;
      (**(code **)(*piVar3 + 8))();
    }
    *param_2 = (int)((int)piVar1);
    if (piVar1 == (int *)0x0) {
      iVar4 = (int)(0);
    }
    else {
      iVar4 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_2[1] = iVar4;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }

  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f6d860; body size 167 bytes.
#line 1 "ENTRY_10f6d860"

void __thiscall Recovered_Bulk::FUN_10f6d860(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)(**(code **)(*param_2 + 0x94))(&param_2,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);
  *piVar2 = (int)(0);
  piVar2 = (int *)(*(int **)(param_1 + 0x38));

  if (piVar2 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *(int **)(param_1 + 0x34) = piVar1;
  if (piVar1 == (int *)0x0) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0xc))());
  }
  *(undefined4 *)(param_1 + 0x38) = uVar3;

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  thunk_FUN_10b93810();

  return;

 } catch (...) { }
}


// Reference entry 10f6d930; body size 346 bytes.
#line 1 "ENTRY_10f6d930"

void __fastcall FUN_10f6d930(int param_1)

{
 try {
  void *pvVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  int *piVar3;
  undefined4 uStack_40;
  int *local_28;
  int *local_24;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x2c) == 0)) {

    thunk_FUN_112af4e0("SCSettingsReplicatorSet");

    thunk_FUN_10f6d380();

    if (local_28 != (int *)0x0) {

      pvVar1 = (void *)(operator_new(0x48));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar1 == (void *)0x0) {
        piVar2 = (int *)((int *)0x0);
      }
      else {
        thunk_FUN_10f6d500(&stack0xffffffc4);
        *(unsigned char *)((char *)&local_8 + 0) = 2;
        uStack_40 = (undefined4)(extraout_ECX);
        (**(code **)(*local_28 + 0x14))(&uStack_40);
        *(unsigned char *)((char *)&local_8 + 0) = 1;
        piVar2 = (int *)((int *)thunk_FUN_10b870f0());
      }
      piVar3 = (int *)(*(int **)(param_1 + 0x20));
      *(unsigned char *)((char *)&local_8 + 0) = 0;
      if (piVar2 != (int *)(piVar3)) {
        piVar3 = (int *)(*(int **)(param_1 + 0x24));
        if (piVar3 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0x24) = 0;
          (**(code **)(*piVar3 + 8))();
        }
        *(int **)(param_1 + 0x20) = piVar2;
        if (piVar2 == (int *)0x0) {
          *(undefined4 *)(param_1 + 0x24) = 0;
          piVar3 = (int *)((int *)0x0);
        }
        else {
          piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
          *(int **)(param_1 + 0x24) = piVar2;
          (**(code **)(*piVar2 + 4))();
          piVar3 = (int *)(*(int **)(param_1 + 0x20));
        }
      }

      thunk_FUN_101da240();
      *(unsigned char *)((char *)&local_8 + 0) = 3;

      (**(code **)(*piVar3 + 0x14))();
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))();
      }
    }

    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f6e170; body size 171 bytes.
#line 1 "ENTRY_10f6e170"

void __stdcall FUN_10f6e170(undefined4 param_1,undefined4 param_2)

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

  piVar3 = (int *)((int *)createPropertyBag());
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
  (**(code **)(*piVar1 + 0x40))(param_1,param_2);
  thunk_FUN_10f6db80(piVar1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f6e250; body size 181 bytes.
#line 1 "ENTRY_10f6e250"

void FUN_10f6e250(undefined4 param_1,undefined8 param_2)

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

  piVar3 = (int *)((int *)createPropertyBag());
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
  (**(code **)(*piVar1 + 0x34))(param_1,param_2);
  thunk_FUN_10f6db80(piVar1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f6e340; body size 171 bytes.
#line 1 "ENTRY_10f6e340"

void __stdcall FUN_10f6e340(undefined4 param_1,undefined4 param_2)

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

  piVar3 = (int *)((int *)createPropertyBag());
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
  (**(code **)(*piVar1 + 0x28))(param_1,param_2);
  thunk_FUN_10f6db80(piVar1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f6e420; body size 171 bytes.
#line 1 "ENTRY_10f6e420"

void __stdcall FUN_10f6e420(undefined4 param_1,undefined4 param_2)

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

  piVar3 = (int *)((int *)createPropertyBag());
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
  (**(code **)(*piVar1 + 0x1c))(param_1,param_2);
  thunk_FUN_10f6db80(piVar1);

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f6e580; body size 107 bytes.
#line 1 "ENTRY_10f6e580"

undefined4 * __thiscall Recovered_Bulk::FUN_10f6e580(int param_2)
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
  param_1[0xb] = 0;

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f6efc0; body size 121 bytes.
#line 1 "ENTRY_10f6efc0"

undefined4 * FUN_10f6efc0(int param_1)

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
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10f6faa0; body size 114 bytes.
#line 1 "ENTRY_10f6faa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f6faa0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f6fb30; body size 278 bytes.
#line 1 "ENTRY_10f6fb30"

undefined4 * __thiscall Recovered_Bulk::FUN_10f6fb30(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f6fde0; body size 87 bytes.
#line 1 "ENTRY_10f6fde0"

int __thiscall Recovered_Bulk::FUN_10f6fde0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_2[9]);
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2));
        param_2[9] = 0;
        return (int)(param_1);
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = 0;
    }
  }
  return (int)(param_1);
}


// Reference entry 10f6fe50; body size 93 bytes.
#line 1 "ENTRY_10f6fe50"

int __thiscall Recovered_Bulk::FUN_10f6fe50(int param_2)
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


// Reference entry 10f6fee0; body size 93 bytes.
#line 1 "ENTRY_10f6fee0"

int __thiscall Recovered_Bulk::FUN_10f6fee0(int param_2)
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


// Reference entry 10f700d0; body size 344 bytes.
#line 1 "ENTRY_10f700d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f700d0(undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  thunk_FUN_11261e50(DAT_12126b84 );
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseGetUserSettingsAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RMuseGetUserSettingsAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 1;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_1124a160(0);
  param_1[7] = (uint)&ghidra_vftable_RMuseGetUserSettingsRequest;
  param_1[0xd] = (uint)&ghidra_vftable_RMuseGetUserSettingsRequest;
  param_1[0x1850] = 0;
  param_1[0x1851] = 0;
  param_1[0x1852] = 0;
  param_1[0x1853] = 0;
  param_1[0x1854] = 0;
  param_1[0x1855] = 0;
  param_1[0x1856] = 0;
  param_1[0x1858] = 0;
  param_1[0x1859] = 0;
  param_1[0x1857] = (uint)&ghidra_vftable_RControlAIOOpRef;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  piVar1 = (int *)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_2,param_3,param_4,param_5);
  }
  thunk_FUN_10f72bf0(param_2,piVar1,param_4,param_5);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f70280; body size 205 bytes.
#line 1 "ENTRY_10f70280"

undefined4 * __fastcall FUN_10f70280(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  param_1[5] = 0;

  thunk_FUN_1124a160(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseGetUserSettingsRequest);
  param_1[6] = (uint)&ghidra_vftable_RMuseGetUserSettingsRequest;
  param_1[0x1849] = 0;
  param_1[0x184a] = 0;
  param_1[0x184b] = 0;
  param_1[0x184c] = 0;
  param_1[0x184d] = 0;
  param_1[0x184e] = 0;
  param_1[0x184f] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f70830; body size 83 bytes.
#line 1 "ENTRY_10f70830"

void __fastcall FUN_10f70830(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f70a00; body size 177 bytes.
#line 1 "ENTRY_10f70a00"

void __fastcall FUN_10f70a00(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();

  return;

 } catch (...) { }
}


// Reference entry 10f70af0; body size 76 bytes.
#line 1 "ENTRY_10f70af0"

void __fastcall FUN_10f70af0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f70b60; body size 76 bytes.
#line 1 "ENTRY_10f70b60"

void __fastcall FUN_10f70b60(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f70c30; body size 84 bytes.
#line 1 "ENTRY_10f70c30"

void __fastcall FUN_10f70c30(int param_1)

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


// Reference entry 10f70d30; body size 103 bytes.
#line 1 "ENTRY_10f70d30"

void __fastcall FUN_10f70d30(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseGetUserSettingsAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RMuseGetUserSettingsAIOOp;
  thunk_FUN_10f72ff0(uVar1);
  param_1[0x1857] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f70dc0();
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 10f70f70; body size 222 bytes.
#line 1 "ENTRY_10f70f70"

int __fastcall FUN_10f70f70(undefined4 *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorBusiness);
  param_1[4] = (uint)&ghidra_vftable_SCSettingsReplicatorBusiness;
  (**(code **)(param_1[0xe] + 4))(uVar4);
  thunk_FUN_1059d800();
  thunk_FUN_10f70a00();
  piVar3 = (int *)((int *)param_1[0xc]);

  if (piVar3 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    (**(code **)(*piVar3 + 8))();
  }

  param_1[4] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  iVar5 = (int)(thunk_FUN_1059c050());
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

  return (int)(iVar5);

 } catch (...) { }
}


// Reference entry 10f71320; body size 107 bytes.
#line 1 "ENTRY_10f71320"

int __thiscall Recovered_Bulk::FUN_10f71320(byte param_2)
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


// Reference entry 10f71400; body size 134 bytes.
#line 1 "ENTRY_10f71400"

undefined4 * __thiscall Recovered_Bulk::FUN_10f71400(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseGetUserSettingsAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RMuseGetUserSettingsAIOOp;
  thunk_FUN_10f72ff0(uVar1);
  param_1[0x1857] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f70dc0();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6168);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f716a0; body size 124 bytes.
#line 1 "ENTRY_10f716a0"

undefined4 * __fastcall FUN_10f716a0(int param_1)

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
  puVar2[0xb] = 0;

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 10f71740; body size 105 bytes.
#line 1 "ENTRY_10f71740"

void __thiscall Recovered_Bulk::FUN_10f71740(char param_2)
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
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0xc);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f71d80; body size 76 bytes.
#line 1 "ENTRY_10f71d80"

void __fastcall FUN_10f71d80(int param_1)

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


// Reference entry 10f71fb0; body size 149 bytes.
#line 1 "ENTRY_10f71fb0"

void __thiscall Recovered_Bulk::FUN_10f71fb0(int *param_2,undefined4 param_3)
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


// Reference entry 10f72310; body size 288 bytes.
#line 1 "ENTRY_10f72310"

void __thiscall Recovered_Bulk::FUN_10f72310(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (param_2 == (int *)0x0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)param_1[5]);
    }
    pcVar7 = (char *)("Received unparsable player response:\n%s");
    uVar6 = (undefined4)(1);
  }
  else {
    piVar3 = (int *)((int *)createPropertyBag());
    piVar1 = (int *)((int *)*piVar3);
    *piVar3 = (int)(0);
    piVar3 = (int *)((int *)param_1[0x184f]);
    local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    if (piVar3 != (int *)0x0) {
      param_1[0x184e] = 0;
      param_1[0x184f] = 0;
      (**(code **)(*piVar3 + 8))();
    }
    param_1[0x184e] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar4 = (int)(0);
    }
    else {
      iVar4 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_1[0x184f] = iVar4;
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    (**(code **)(*param_2 + 0x88))(param_1[0x184e]);
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)((undefined1 *)param_1[5]);
    }
    pcVar7 = (char *)("Received and parsed player response:\n%s");
    uVar6 = (undefined4)(3);
  }
  thunk_FUN_112af4e0("SCSettingsReplicatorBusiness",uVar6,pcVar7,puVar5,uVar2);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f72ec0; body size 98 bytes.
#line 1 "ENTRY_10f72ec0"

undefined4 __thiscall Recovered_Bulk::FUN_10f72ec0(undefined4 param_2,short *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x6164) = 0;
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x6160) + 0x448c));
  if ((iVar1 != 200) && (iVar1 != -1)) {
    thunk_FUN_112af4e0("SCSettingsReplicatorBusiness",1,
                       "Failed to get user settings, http response %d",iVar1);
    return (undefined4)(1);
  }
  if (*param_3 != 0) {
    thunk_FUN_112af4e0("SCSettingsReplicatorBusiness",1,"Failed to get user settings, op result %u",
                       *param_3);
  }
  return (undefined4)(1);
}


// Reference entry 10f72f40; body size 135 bytes.
#line 1 "ENTRY_10f72f40"

void __fastcall FUN_10f72f40(int param_1)

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


// Reference entry 10f72ff0; body size 85 bytes.
#line 1 "ENTRY_10f72ff0"

void __fastcall FUN_10f72ff0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6164) != 0) && (*(int **)(param_1 + 0x6160) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6160) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6160));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6160) = 0;
    *(undefined4 *)(param_1 + 0x6164) = 0;
  }
  return;
}


// Reference entry 10f73430; body size 128 bytes.
#line 1 "ENTRY_10f73430"

void __fastcall FUN_10f73430(int param_1)

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


// Reference entry 10f73500; body size 232 bytes.
#line 1 "ENTRY_10f73500"

void __thiscall Recovered_Bulk::FUN_10f73500(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f737e0; body size 99 bytes.
#line 1 "ENTRY_10f737e0"

undefined4 __thiscall Recovered_Bulk::FUN_10f737e0(undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  *param_2 = (undefined1)(1);
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6128) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6128));
  }
  thunk_FUN_1145c250(param_3,puVar1,0x19);
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6124) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6124));
  }
  thunk_FUN_1145c250(param_4,puVar1,0x21);
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x612c) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c));
  }
  thunk_FUN_1145c250(param_5,puVar1,0x11);
  return (undefined4)(1);
}


// Reference entry 10f73870; body size 212 bytes.
#line 1 "ENTRY_10f73870"

void __thiscall Recovered_Bulk::FUN_10f73870(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0x4494));

  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x6150) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6150));
    }
    thunk_FUN_111c05a0(param_1 + 0x1c,-(uint)(param_1 + 0x1c != 0) & param_1 + 0x34U,puVar2,10000,
                       10000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp;
    *(undefined1 *)(puVar1 + 0x1124) = 0;
  }

  thunk_FUN_102207b0(puVar1,-(uint)(param_1 != 0) & param_1 + 8U,param_2);

  return;

 } catch (...) { }
}


// Reference entry 10f73bf0; body size 160 bytes.
#line 1 "ENTRY_10f73bf0"

void ** __fastcall FUN_10f73bf0(undefined4 *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  void **ppvVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);
  ppvVar5 = (void **)(&local_10);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorApp);
  piVar3 = (int *)((int *)param_1[5]);

  if (piVar3 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    ppvVar5 = (void **)((void **)(**(code **)(*piVar3 + 8))(uVar4));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar3 = (int *)((int *)param_1[3]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 1);
    iVar2 = (int)(*piVar1);
    ppvVar5 = (void **)((void **)*piVar1);
    *piVar1 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      ppvVar5 = (void **)((void **)(**(code **)*piVar3)());
      LOCK();
      piVar1 = (int *)(piVar3 + 2);
      iVar2 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar2 == 1) {
        ppvVar5 = (void **)((void **)(**(code **)(*piVar3 + 4))());
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return (void **)(ppvVar5);

 } catch (...) { }
}


// Reference entry 10f73cc0; body size 181 bytes.
#line 1 "ENTRY_10f73cc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f73cc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorApp);
  piVar2 = (int *)((int *)param_1[5]);

  if (piVar2 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar2 + 8))(uVar4);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicator);
  piVar2 = (int *)((int *)param_1[3]);
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
      }
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f749e0; body size 98 bytes.
#line 1 "ENTRY_10f749e0"

void __fastcall FUN_10f749e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1,DAT_12126b84 );
  }
  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f74a60; body size 144 bytes.
#line 1 "ENTRY_10f74a60"

void __fastcall FUN_10f74a60(undefined4 *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1,DAT_12126b84 );
  }
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  piVar1 = (int *)((int *)param_1[3]);

  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[1]);

  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f74b20; body size 136 bytes.
#line 1 "ENTRY_10f74b20"

void __fastcall FUN_10f74b20(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBitmapLoadAsyncIOOperation);
  param_1[2] = (uint)&ghidra_vftable_SCBitmapLoadAsyncIOOperation;
  param_1[0x3027] = (uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory;
  piVar1 = (int *)((int *)param_1[0x3026]);

  if (piVar1 != (int *)0x0) {
    param_1[0x3025] = 0;
    param_1[0x3026] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10f74a60();
  thunk_FUN_10b98e50();

  return;

 } catch (...) { }
}


// Reference entry 10f74be0; body size 103 bytes.
#line 1 "ENTRY_10f74be0"

void __fastcall FUN_10f74be0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBitmapResizer);
  free((void *)param_1[1]);
  piVar1 = (int *)((int *)param_1[9]);

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f74c70; body size 150 bytes.
#line 1 "ENTRY_10f74c70"

void __fastcall FUN_10f74c70(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCompressedImageLoadAsyncIOOperation);
  param_1[2] = (uint)&ghidra_vftable_SCCompressedImageLoadAsyncIOOperation;
  free((void *)param_1[0x3019]);
  param_1[0x3019] = 0;
  param_1[0x301c] = (uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory;
  piVar1 = (int *)((int *)param_1[0x3018]);

  if (piVar1 != (int *)0x0) {
    param_1[0x3017] = 0;
    param_1[0x3018] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10b98e50();

  return;

 } catch (...) { }
}


// Reference entry 10f74d40; body size 117 bytes.
#line 1 "ENTRY_10f74d40"

void __fastcall FUN_10f74d40(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCImprovedBitmapEnlarger);
  free((void *)param_1[10]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBitmapResizer);
  free((void *)param_1[1]);
  piVar1 = (int *)((int *)param_1[9]);

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f74e30; body size 157 bytes.
#line 1 "ENTRY_10f74e30"

void __fastcall FUN_10f74e30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyCompressedImageLoadAsyncIOOperation);
  param_1[2] = (uint)&ghidra_vftable_SCLegacyCompressedImageLoadAsyncIOOperation;
  param_1[7] = (uint)&ghidra_vftable_SCLegacyCompressedImageLoadAsyncIOOperation;
  free((void *)param_1[0x3023]);
  param_1[0x3023] = 0;
  param_1[0x3026] = (uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory;
  piVar1 = (int *)((int *)param_1[0x3022]);

  if (piVar1 != (int *)0x0) {
    param_1[0x3021] = 0;
    param_1[0x3022] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_111fc270();

  return;

 } catch (...) { }
}


// Reference entry 10f74f80; body size 160 bytes.
#line 1 "ENTRY_10f74f80"

undefined4 * __thiscall Recovered_Bulk::FUN_10f74f80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBitmapLoadAsyncIOOperation);
  param_1[2] = (uint)&ghidra_vftable_SCBitmapLoadAsyncIOOperation;
  param_1[0x3027] = (uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory;
  piVar1 = (int *)((int *)param_1[0x3026]);

  if (piVar1 != (int *)0x0) {
    param_1[0x3025] = 0;
    param_1[0x3026] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10f74a60();
  thunk_FUN_10b98e50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0a0);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f75080; body size 124 bytes.
#line 1 "ENTRY_10f75080"

undefined4 * __thiscall Recovered_Bulk::FUN_10f75080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBitmapResizer);
  free((void *)param_1[1]);
  piVar1 = (int *)((int *)param_1[9]);

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f75130; body size 174 bytes.
#line 1 "ENTRY_10f75130"

undefined4 * __thiscall Recovered_Bulk::FUN_10f75130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCompressedImageLoadAsyncIOOperation);
  param_1[2] = (uint)&ghidra_vftable_SCCompressedImageLoadAsyncIOOperation;
  free((void *)param_1[0x3019]);
  param_1[0x3019] = 0;
  param_1[0x301c] = (uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory;
  piVar1 = (int *)((int *)param_1[0x3018]);

  if (piVar1 != (int *)0x0) {
    param_1[0x3017] = 0;
    param_1[0x3018] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10b98e50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc074);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f75210; body size 138 bytes.
#line 1 "ENTRY_10f75210"

undefined4 * __thiscall Recovered_Bulk::FUN_10f75210(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCImprovedBitmapEnlarger);
  free((void *)param_1[10]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBitmapResizer);
  free((void *)param_1[1]);
  piVar1 = (int *)((int *)param_1[9]);

  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f752d0; body size 78 bytes.
#line 1 "ENTRY_10f752d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f752d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyBitmapLoadAsyncIOOperation);
  param_1[2] = (uint)&ghidra_vftable_SCLegacyBitmapLoadAsyncIOOperation;
  param_1[7] = (uint)&ghidra_vftable_SCLegacyBitmapLoadAsyncIOOperation;
  param_1[0x302f] = (uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory;
  thunk_FUN_10f74a60();
  thunk_FUN_111fc270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0c0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f75340; body size 181 bytes.
#line 1 "ENTRY_10f75340"

undefined4 * __thiscall Recovered_Bulk::FUN_10f75340(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyCompressedImageLoadAsyncIOOperation);
  param_1[2] = (uint)&ghidra_vftable_SCLegacyCompressedImageLoadAsyncIOOperation;
  param_1[7] = (uint)&ghidra_vftable_SCLegacyCompressedImageLoadAsyncIOOperation;
  free((void *)param_1[0x3023]);
  param_1[0x3023] = 0;
  param_1[0x3026] = (uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory;
  piVar1 = (int *)((int *)param_1[0x3022]);

  if (piVar1 != (int *)0x0) {
    param_1[0x3021] = 0;
    param_1[0x3022] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_111fc270();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc09c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f75460; body size 77 bytes.
#line 1 "ENTRY_10f75460"

void __thiscall Recovered_Bulk::FUN_10f75460(undefined4 param_2)
{
  int param_1 = (int )this;
  if (((short)param_2 == 0) && (*(int *)(param_1 + 0xc06c) != 0)) {
    thunk_FUN_10f75720();
    if (*(undefined4 **)(param_1 + 0xc06c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xc06c))(1);
    }
    *(undefined4 *)(param_1 + 0xc06c) = 0;
    *(undefined4 *)(param_1 + 0xc074) = 0;
  }
  thunk_FUN_11261fc0(param_2);
  return;
}


// Reference entry 10f754c0; body size 141 bytes.
#line 1 "ENTRY_10f754c0"

void __thiscall Recovered_Bulk::FUN_10f754c0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if ((short)param_2 == 0) {
    if (*(int *)(param_1 + 0xc064) == 0) {
      thunk_FUN_11261fc0(0x3ed);
      return;
    }
    uVar1 = (undefined4)(thunk_FUN_1148b586(*(undefined4 *)(param_1 + 0xc06c)));
    *(undefined4 *)(*(int *)(param_1 + 0xc05c) + 0x74) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0xc05c) + 0x3c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc05c) + 0x40) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc05c) + 0x44) = *(undefined4 *)(param_1 + 0xc06c);
    memcpy(*(void **)(*(int *)(param_1 + 0xc05c) + 0x74),*(void **)(param_1 + 0xc064),
           *(size_t *)(param_1 + 0xc06c));
  }
  thunk_FUN_11261fc0(param_2);
  return;
}


// Reference entry 10f75570; body size 77 bytes.
#line 1 "ENTRY_10f75570"

void __thiscall Recovered_Bulk::FUN_10f75570(undefined4 param_2)
{
  int param_1 = (int )this;
  if (((short)param_2 == 0) && (*(int *)(param_1 + 0xc094) != 0)) {
    thunk_FUN_10f75720();
    if (*(undefined4 **)(param_1 + 0xc094) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xc094))(1);
    }
    *(undefined4 *)(param_1 + 0xc094) = 0;
    *(undefined4 *)(param_1 + 0xc09c) = 0;
  }
  thunk_FUN_11261fc0(param_2);
  return;
}


// Reference entry 10f755d0; body size 141 bytes.
#line 1 "ENTRY_10f755d0"

void __thiscall Recovered_Bulk::FUN_10f755d0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if ((short)param_2 == 0) {
    if (*(int *)(param_1 + 0xc08c) == 0) {
      thunk_FUN_11261fc0(0x3ed);
      return;
    }
    uVar1 = (undefined4)(thunk_FUN_1148b586(*(undefined4 *)(param_1 + 0xc094)));
    *(undefined4 *)(*(int *)(param_1 + 0xc084) + 0x74) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0xc084) + 0x3c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc084) + 0x40) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc084) + 0x44) = *(undefined4 *)(param_1 + 0xc094);
    memcpy(*(void **)(*(int *)(param_1 + 0xc084) + 0x74),*(void **)(param_1 + 0xc08c),
           *(size_t *)(param_1 + 0xc094));
  }
  thunk_FUN_11261fc0(param_2);
  return;
}


// Reference entry 10f75720; body size 384 bytes.
#line 1 "ENTRY_10f75720"

void __fastcall FUN_10f75720(int *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_c;
  int iStack_8;
  uint uVar6;
  
  uVar2 = (uint)(param_1[4] * 3 & 0x80000003);
  if ((int)uVar2 < 0) {
    uVar2 = (uint)((uVar2 - 1 | 0xfffffffc) + 1);
  }
  uVar6 = (uint)(4 - uVar2);
  if ((int)uVar2 < 1) {
    uVar6 = (uint)(uVar2);
  }
  iVar5 = (int)(uVar6 + param_1[4] * 3);
  iVar9 = (int)(param_1[5] * iVar5 + 0x38);
  uVar3 = (undefined4)(thunk_FUN_1148b586(iVar9));
  *(undefined4 *)(param_1[8] + 0x74) = uVar3;
  *(int *)(param_1[8] + 0x3c) = param_1[4];
  *(int *)(param_1[8] + 0x40) = param_1[5];
  *(int *)(param_1[8] + 0x44) = iVar9;
  puVar1 = (undefined2 *)(*(undefined2 **)(param_1[8] + 0x74));
  *puVar1 = (undefined2)(0x4d42);
  *(undefined4 *)(puVar1 + 3) = 0;
  *(int *)(puVar1 + 1) = iVar9;
  *(undefined4 *)(puVar1 + 5) = 0x38;
  *(undefined4 *)(puVar1 + 7) = 0x28;
  *(int *)(puVar1 + 9) = param_1[4];
  *(int *)(puVar1 + 0xb) = param_1[5];
  *(undefined4 *)(puVar1 + 0xd) = 0x180001;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  iVar9 = (int)(param_1[5]);
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  *(int *)(puVar1 + 0x11) = iVar9 * iVar5;
  uVar2 = (uint)((**(code **)(*param_1 + 0xc))());
  iVar9 = (int)(param_1[5]);
  iStack_c = (int)(0);
  if (0 < iVar9) {
    iVar4 = (int)(param_1[4]);
    iStack_8 = (int)(0x38);
    do {
      iVar8 = (int)(0);
      iVar7 = (int)(iStack_8);
      if (0 < iVar4) {
        do {
          iVar9 = (int)(iVar7 + 3);
          iVar4 = (int)(((param_1[5] - iStack_c) + -1) * param_1[7] + iVar8);
          iVar8 = (int)(iVar8 + 1);
          *(char *)(iVar7 + *(int *)(param_1[8] + 0x74)) =
               (char)(*(uint *)(param_1[1] + 8 + iVar4 * 0xc) / uVar2);
          *(char *)(*(int *)(param_1[8] + 0x74) + -2 + iVar9) =
               (char)(*(uint *)(param_1[1] + 4 + iVar4 * 0xc) / uVar2);
          *(char *)(*(int *)(param_1[8] + 0x74) + -1 + iVar9) =
               (char)(*(uint *)(param_1[1] + iVar4 * 0xc) / uVar2);
          iVar4 = (int)(param_1[4]);
          iVar7 = (int)(iVar9);
        } while (iVar8 < iVar4);
        iVar9 = (int)(param_1[5]);
      }
      iStack_c = (int)(iStack_c + 1);
      iStack_8 = (int)(iStack_8 + iVar5);
    } while (iStack_c < iVar9);
  }
  return;
}


// Reference entry 10f75930; body size 158 bytes.
#line 1 "ENTRY_10f75930"

undefined1 __stdcall FUN_10f75930(int *param_1,int *param_2)

{
 try {
  undefined1 uVar1;
  undefined4 uVar2;
  void *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (undefined4)((**(code **)(*param_1 + 0x1c))(DAT_12126b84 ));
  _Memory = (void *)((void *)thunk_FUN_1148b586(uVar2));
  (**(code **)(*param_1 + 0x20))(0,_Memory,uVar2);
  uVar1 = (undefined1)(thunk_FUN_10f760c0(_Memory,uVar2));
  free(_Memory);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10f75a00; body size 143 bytes.
#line 1 "ENTRY_10f75a00"

undefined4 __thiscall Recovered_Bulk::FUN_10f75a00(int *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (undefined4)((**(code **)(*param_2 + 0x1c))(DAT_12126b84 ));
  *(undefined4 *)(param_1 + 0xc06c) = uVar1;
  uVar1 = (undefined4)(thunk_FUN_1148b586(uVar1));
  *(undefined4 *)(param_1 + 0xc064) = uVar1;
  (**(code **)(*param_2 + 0x20))(0,uVar1,*(undefined4 *)(param_1 + 0xc06c));

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (undefined4)(1);

 } catch (...) { }
}


// Reference entry 10f75b00; body size 139 bytes.
#line 1 "ENTRY_10f75b00"

void __thiscall Recovered_Bulk::FUN_10f75b00(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x20) + 0x38));
  if (param_3 < param_2) {
    *(int *)(param_1 + 0x10) = iVar1;
    iVar3 = (int)((iVar1 * param_3 + -1 + param_2) / param_2);
  }
  else {
    *(int *)(param_1 + 0x10) = (iVar1 * param_2 + -1 + param_3) / param_3;
    iVar3 = (int)(iVar1);
    param_2 = (int)(param_3);
  }
  *(int *)(param_1 + 0x14) = iVar3;
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = iVar1;
  free(*(void **)(param_1 + 4));
  lVar2 = (longlong)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x1c)) * 0xc);
  _Dst = (void *)((void *)thunk_FUN_1148b586(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2));
  *(void **)(param_1 + 4) = _Dst;
  memset(_Dst,0,*(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x1c) * 0xc);
  return;
}


// Reference entry 10f75bb0; body size 658 bytes.
#line 1 "ENTRY_10f75bb0"

void __thiscall Recovered_Bulk::FUN_10f75bb0(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint local_34;
  uint local_30;
  uint local_24;
  int local_20;
  
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x20) + 0x38));
  if (param_3 < param_2) {
    *(int *)(param_1 + 0x10) = iVar1;
    iVar6 = (int)((iVar1 * param_3 + -1 + param_2) / param_2);
  }
  else {
    *(int *)(param_1 + 0x10) = (iVar1 * param_2 + -1 + param_3) / param_3;
    iVar6 = (int)(iVar1);
    param_2 = (int)(param_3);
  }
  *(int *)(param_1 + 0x14) = iVar6;
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = iVar1;
  free(*(void **)(param_1 + 4));
  lVar2 = (longlong)((ulonglong)(uint)(*(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x1c)) * 0xc);
  pvVar7 = (void *)((void *)thunk_FUN_1148b586(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2));
  *(void **)(param_1 + 4) = pvVar7;
  memset(pvVar7,0,*(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x1c) * 0xc);
  free(*(void **)(param_1 + 0x28));
  uVar15 = (uint)(*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10));
  lVar2 = (longlong)((ulonglong)uVar15 * 0x10);
  pvVar7 = (void *)((void *)thunk_FUN_1148b586(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2));
  *(void **)(param_1 + 0x28) = pvVar7;
  memset(pvVar7,0,uVar15 * 0x10);
  uVar15 = (uint)(*(uint *)(param_1 + 0x1c));
  iVar6 = (int)(*(int *)(param_1 + 0x18) * 2);
  uVar8 = (uint)((*(int *)(param_1 + 0xc) * 2 + -1) * uVar15);
  iVar3 = (int)(uVar15 * 2);
  local_34 = (uint)(0);
  local_24 = (uint)(0);
  iVar1 = (int)(*(int *)(param_1 + 8));
  piVar9 = (int *)(*(int **)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x14) != 0) {
    local_20 = (int)(1);
    local_30 = (uint)(uVar15);
    do {
      uVar16 = (uint)(*(uint *)(param_1 + 0x18));
      uVar17 = (uint)(local_20 * uVar16);
      if (uVar17 < uVar15 || uVar17 - uVar15 == 0) {
        iVar13 = (int)(0);
        iVar11 = (int)(iVar3);
      }
      else if (uVar17 < uVar8 || uVar17 - uVar8 == 0) {
        uVar10 = (uint)(local_30);
        uVar5 = (uint)(local_30 + iVar3);
        if (uVar17 < local_30 || uVar17 - local_30 == 0) {
          uVar10 = (uint)(local_34);
          uVar5 = (uint)(local_30);
        }
        local_30 = (uint)(uVar5);
        iVar11 = (int)(uVar17 - uVar10);
        iVar13 = (int)(local_30 - uVar17);
        local_34 = (uint)(uVar10);
      }
      else {
        iVar11 = (int)(0);
        iVar13 = (int)(iVar3);
      }
      uVar17 = (uint)(0);
      for (; uVar5 = (uint)(uVar15 * 3, uVar10 = uVar15, uVar16 <= uVar15); uVar16 = uVar16 + iVar6) {
        *piVar9 = (int)(iVar13 * iVar3);
        piVar9[2] = iVar11 * iVar3;
        uVar17 = (uint)(uVar17 + 1);
        piVar9 = (int *)(piVar9 + 4);
      }
      while (uVar4 = uVar5, uVar10 < (iVar1 * 2 + -1) * uVar15) {
        if (uVar16 <= uVar4) {
          iVar18 = (int)((uVar16 - uVar10) * iVar13);
          iVar14 = (int)((uVar16 - uVar10) * iVar11);
          do {
            *piVar9 = (int)(iVar18);
            iVar18 = (int)(iVar18 + iVar13 * iVar6);
            iVar12 = (int)(uVar4 - uVar16);
            uVar16 = (uint)(uVar16 + iVar6);
            uVar17 = (uint)(uVar17 + 1);
            piVar9[2] = iVar14;
            iVar14 = (int)(iVar14 + iVar11 * iVar6);
            piVar9[1] = iVar12 * iVar13;
            piVar9[3] = iVar12 * iVar11;
            piVar9 = (int *)(piVar9 + 4);
          } while (uVar16 <= uVar4);
        }
        uVar5 = (uint)(uVar4 + iVar3);
        uVar10 = (uint)(uVar4);
      }
      if (uVar17 < *(uint *)(param_1 + 0x10)) {
        do {
          piVar9[1] = iVar13 * iVar3;
          uVar17 = (uint)(uVar17 + 1);
          piVar9[3] = iVar11 * iVar3;
          piVar9 = (int *)(piVar9 + 4);
        } while (uVar17 < *(uint *)(param_1 + 0x10));
      }
      local_24 = (uint)(local_24 + 1);
      local_20 = (int)(local_20 + 2);
    } while (local_24 < *(uint *)(param_1 + 0x14));
  }
  return;
}


// Reference entry 10f75ef0; body size 350 bytes.
#line 1 "ENTRY_10f75ef0"

undefined1 * __thiscall Recovered_Bulk::FUN_10f75ef0(int param_2,int param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  undefined1 auStackY_100 [212];
  undefined4 uStackY_2c;
  int iStackY_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((4000 < param_2) || (4000 < param_3)) {
    return (undefined1 *)(auStackY_100);
  }

  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    iStackY_28 = (int)(0x10f75f42);
    (*(code *)**(undefined4 **)param_1[2])();
  }
  if ((param_2 < param_1[3]) && (param_3 < param_1[3])) {
    iStackY_28 = (int)(0x10f75f5c);
    piVar1 = (int *)(operator_new(0x2c));

    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)((int *)*param_1);
      *piVar1 = (int)((int)(uint)&ghidra_vftable_SCBitmapResizer);
      piVar1[1] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = (int)piVar2;
      piVar1[9] = 0;
      if (piVar2 != (int *)0x0) {
        piVar2 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
        piVar1[9] = (int)piVar2;
        (**(code **)(*piVar2 + 4))();
      }
      piVar1[3] = 0;
      piVar1[2] = 0;
      piVar1[5] = 0;
      piVar1[4] = 0;
      *piVar1 = (int)((int)(uint)&ghidra_vftable_SCImprovedBitmapEnlarger);
      piVar1[10] = 0;
      goto LAB_10f75fff;
    }
  }
  else {
    iStackY_28 = (int)(0x10f75fdf);
    pvVar3 = (void *)(operator_new(0x28));

    if (pvVar3 != (void *)0x0) {
      iStackY_28 = (int)(0x10f75ff9);
      piVar1 = (int *)((int *)thunk_FUN_10f744c0());
      goto LAB_10f75fff;
    }
  }
  piVar1 = (int *)((int *)0x0);
LAB_10f75fff:

  param_1[2] = (int)piVar1;
  iStackY_28 = (int)(param_2);
  uStackY_2c = (undefined4)(0x10f76014);
  (**(code **)(*piVar1 + 4))();
  param_1[4] = 0;
  param_1[5] = -1;

  return (undefined1 *)((undefined1 *)0x1);

 } catch (...) { }
}


// Reference entry 10f76320; body size 257 bytes.
#line 1 "ENTRY_10f76320"

void __thiscall Recovered_Bulk::FUN_10f76320(int param_2,int param_3,byte param_4,byte param_5,byte param_6)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = (int)(*(int *)(param_1 + 0x1c));
  iVar6 = (int)((param_2 + 1) * iVar2);
  iVar8 = (int)((param_3 + 1) * iVar2);
  for (param_3 = (int)(iVar2 * param_3); param_3 < iVar8; param_3 = param_3 + iVar5) {
    iVar4 = (int)(iVar8 - param_3);
    iVar5 = (int)(*(int *)(param_1 + 0x18) - param_3 % *(int *)(param_1 + 0x18));
    if (iVar4 < iVar5) {
      iVar5 = (int)(iVar4);
    }
    if (iVar2 * param_2 < iVar6) {
      iVar4 = (int)(iVar2 * param_2);
      do {
        iVar3 = (int)(*(int *)(param_1 + 0x18));
        iVar7 = (int)(iVar3 - iVar4 % iVar3);
        if (iVar6 - iVar4 < iVar7) {
          iVar7 = (int)(iVar6 - iVar4);
        }
        piVar1 = (int *)((int *)(*(int *)(param_1 + 4) +
                        ((param_3 / iVar3) * *(int *)(param_1 + 0x1c) + iVar4 / iVar3) * 0xc));
        *piVar1 = (int)(*piVar1 + (uint)param_4 * iVar7 * iVar5);
        piVar1[1] = piVar1[1] + (uint)param_5 * iVar7 * iVar5;
        piVar1[2] = piVar1[2] + (uint)param_6 * iVar7 * iVar5;
        iVar4 = (int)(iVar4 + iVar7);
      } while (iVar4 < iVar6);
    }
  }
  return;
}


// Reference entry 10f76470; body size 696 bytes.
#line 1 "ENTRY_10f76470"

void __thiscall Recovered_Bulk::FUN_10f76470(int param_2,int param_3,byte param_4,byte param_5,byte param_6)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  
  iVar16 = (int)(*(int *)(param_1 + 0x1c));
  iVar2 = (int)(param_3 * 2 + 1);
  uVar7 = (uint)(iVar16 * (param_2 * 2 + 1));
  uVar8 = (uint)(iVar16 * iVar2);
  if (param_2 == 0) {
    iVar18 = (int)(0);
  }
  else {
    iVar18 = (int)((param_2 * 2 + -1) * iVar16 + 1);
  }
  if (param_3 == 0) {
    iVar16 = (int)(0);
  }
  else {
    iVar16 = (int)((param_3 * 2 + -1) * iVar16 + 1);
  }
  iVar3 = (int)(*(int *)(param_1 + 0x18));
  iVar6 = (int)(iVar3 * 2);
  iVar4 = (int)(*(int *)(param_1 + 0xc));
  uVar14 = (uint)(((uint)(param_2 < *(int *)(param_1 + 8) + -1) + param_2 * 2 + 2) *
           *(int *)(param_1 + 0x1c));
  iVar5 = (int)(*(int *)(param_1 + 0x1c));
  uVar9 = (uint)((uint)(iVar3 + -1 + iVar18) / (uint)(iVar3 * 2));
  uVar10 = (uint)((uint)(iVar3 + -1 + iVar16) / (uint)(iVar3 * 2));
  uVar19 = (uint)((uVar9 * 2 + 1) * iVar3);
  uVar11 = (uint)((uint)param_4);
  uVar12 = (uint)((uint)param_5);
  uVar13 = (uint)((uint)param_6);
  uVar15 = (uint)((uVar10 * 2 + 1) * iVar3);
  uVar17 = (uint)(uVar9);
  uVar20 = (uint)(uVar19);
  if (uVar15 < uVar8 || uVar15 - uVar8 == 0) {
    do {
      for (; uVar20 <= uVar7; uVar20 = uVar20 + iVar6) {
        piVar1 = (int *)((int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x1c) * uVar10 + uVar17) * 0xc));
        iVar16 = (int)(*(int *)(*(int *)(param_1 + 0x28) + 8 +
                         (*(int *)(param_1 + 0x10) * uVar10 + uVar17) * 0x10));
        *piVar1 = (int)(*piVar1 + uVar11 * iVar16);
        piVar1[1] = piVar1[1] + uVar12 * iVar16;
        piVar1[2] = piVar1[2] + uVar13 * iVar16;
        uVar17 = (uint)(uVar17 + 1);
      }
      for (; uVar20 < uVar14; uVar20 = uVar20 + iVar6) {
        piVar1 = (int *)((int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x1c) * uVar10 + uVar17) * 0xc));
        iVar16 = (int)(*(int *)(param_1 + 0x10) * uVar10 + uVar17);
        uVar17 = (uint)(uVar17 + 1);
        iVar16 = (int)(*(int *)(*(int *)(param_1 + 0x28) + 0xc + iVar16 * 0x10));
        *piVar1 = (int)(*piVar1 + uVar11 * iVar16);
        piVar1[1] = piVar1[1] + uVar12 * iVar16;
        piVar1[2] = piVar1[2] + uVar13 * iVar16;
      }
      uVar15 = (uint)(uVar15 + iVar6);
      uVar10 = (uint)(uVar10 + 1);
      uVar17 = (uint)(uVar9);
      uVar20 = (uint)(uVar19);
    } while (uVar15 <= uVar8);
  }
  for (; uVar8 = (uint)(uVar9, uVar17 = uVar19, uVar15 < ((param_3 < iVar4 + -1) + 1 + iVar2) * iVar5);
      uVar15 = uVar15 + iVar6) {
    for (; uVar17 <= uVar7; uVar17 = uVar17 + iVar6) {
      piVar1 = (int *)((int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x1c) * uVar10 + uVar8) * 0xc));
      iVar16 = (int)(*(int *)(*(int *)(param_1 + 0x28) +
                       (*(int *)(param_1 + 0x10) * uVar10 + uVar8) * 0x10));
      *piVar1 = (int)(*piVar1 + uVar11 * iVar16);
      piVar1[1] = piVar1[1] + uVar12 * iVar16;
      piVar1[2] = piVar1[2] + uVar13 * iVar16;
      uVar8 = (uint)(uVar8 + 1);
    }
    for (; uVar17 < uVar14; uVar17 = uVar17 + iVar6) {
      piVar1 = (int *)((int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x1c) * uVar10 + uVar8) * 0xc));
      iVar16 = (int)(*(int *)(param_1 + 0x10) * uVar10 + uVar8);
      uVar8 = (uint)(uVar8 + 1);
      iVar16 = (int)(*(int *)(*(int *)(param_1 + 0x28) + 4 + iVar16 * 0x10));
      *piVar1 = (int)(*piVar1 + uVar11 * iVar16);
      piVar1[1] = piVar1[1] + uVar12 * iVar16;
      piVar1[2] = piVar1[2] + uVar13 * iVar16;
    }
    uVar10 = (uint)(uVar10 + 1);
  }
  return;
}


// Reference entry 10f767e0; body size 66 bytes.
#line 1 "ENTRY_10f767e0"

void __thiscall Recovered_Bulk::FUN_10f767e0(undefined1 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(0);
  if (0 < *(int *)(*(int *)(param_1 + 8) + 8)) {
    do {
      (**(code **)(**(int **)(param_1 + 8) + 8))
                (iVar1,*(undefined4 *)(param_1 + 0x10),*param_2,param_2[1],param_2[2]);
      iVar1 = (int)(iVar1 + 1);
      param_2 = (undefined1 *)(param_2 + *(int *)(param_1 + 0x18));
    } while (iVar1 < *(int *)(*(int *)(param_1 + 8) + 8));
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}


// Reference entry 10f76840; body size 134 bytes.
#line 1 "ENTRY_10f76840"

void __thiscall Recovered_Bulk::FUN_10f76840(undefined1 *param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == *(int *)(param_1 + 0x14)) {
    iVar2 = (int)(*(int *)(param_1 + 0x10));
  }
  else {
    iVar2 = (int)(*(int *)(&DAT_11952fd4 + param_3 * 4));
    *(int *)(param_1 + 0x10) = iVar2;
    *(int *)(param_1 + 0x14) = param_3;
  }
  iVar1 = (int)(*(int *)(&DAT_11953040 + param_3 * 4));
  iVar3 = (int)(*(int *)(&DAT_1195301c + param_3 * 4));
  if (iVar3 < *(int *)(*(int *)(param_1 + 8) + 8)) {
    do {
      (**(code **)(**(int **)(param_1 + 8) + 8))
                (iVar3,*(undefined4 *)(param_1 + 0x10),*param_2,param_2[1],param_2[2]);
      iVar3 = (int)(iVar3 + iVar1);
      param_2 = (undefined1 *)(param_2 + *(int *)(param_1 + 0x18));
    } while (iVar3 < *(int *)(*(int *)(param_1 + 8) + 8));
    iVar2 = (int)(*(int *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x10) = *(int *)(&DAT_11952ff8 + param_3 * 4) + iVar2;
  return;
}


// Reference entry 10f768f0; body size 108 bytes.
#line 1 "ENTRY_10f768f0"

void __thiscall Recovered_Bulk::FUN_10f768f0(undefined1 *param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  if (param_3 == *(int *)(param_1 + 0x14)) {
    iVar1 = (int)(*(int *)(param_1 + 0x10));
  }
  else {
    iVar1 = (int)(*(int *)(&DAT_11953064 + param_3 * 4));
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(param_1 + 0x14) = param_3;
  }
  iVar2 = (int)(0);
  if (0 < *(int *)(*(int *)(param_1 + 8) + 8)) {
    do {
      (**(code **)(**(int **)(param_1 + 8) + 8))
                (iVar2,*(undefined4 *)(param_1 + 0x10),*param_2,param_2[1],param_2[2]);
      iVar2 = (int)(iVar2 + 1);
      param_2 = (undefined1 *)(param_2 + *(int *)(param_1 + 0x18));
    } while (iVar2 < *(int *)(*(int *)(param_1 + 8) + 8));
    iVar1 = (int)(*(int *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x10) = *(int *)(&DAT_11953078 + param_3 * 4) + iVar1;
  return;
}


// Reference entry 10f76980; body size 90 bytes.
#line 1 "ENTRY_10f76980"

void __thiscall Recovered_Bulk::FUN_10f76980(undefined1 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(0);
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  iVar2 = (int)(*(int *)(*(int *)(param_1 + 8) + 0xc));
  if (*(int *)(*(int *)(param_1 + 8) + 8) < 1) {
    *(int *)(param_1 + 0x10) = iVar1 + 1;
    return;
  }
  do {
    (**(code **)(**(int **)(param_1 + 8) + 8))
              (iVar3,(iVar2 - iVar1) + -1,*param_2,param_2[1],param_2[2]);
    iVar3 = (int)(iVar3 + 1);
    param_2 = (undefined1 *)(param_2 + *(int *)(param_1 + 0x18));
  } while (iVar3 < *(int *)(*(int *)(param_1 + 8) + 8));
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}


// Reference entry 10f769f0; body size 359 bytes.
#line 1 "ENTRY_10f769f0"

void __fastcall FUN_10f769f0(int param_1)

{
 try {
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar4 = (int)(param_1 + 0x28);
  iVar1 = (int)(thunk_FUN_11039a00(iVar4,*(undefined4 *)(param_1 + 0x34),
                             DAT_12126b84 ));
  if (iVar1 == 0) {
    pvVar2 = (void *)(operator_new(0x2b8));

    if (pvVar2 != (void *)0x0) {
      uVar3 = (undefined4)(thunk_FUN_11039180(param_1 + 8));
      *(undefined4 *)(param_1 + 0x24) = uVar3;

      return;
    }
  }
  else {
    iVar1 = (int)(thunk_FUN_110390a0(iVar4,*(undefined4 *)(param_1 + 0x34)));
    if (iVar1 == 0) {
      pvVar2 = (void *)(operator_new(0x18));

      if (pvVar2 != (void *)0x0) {
        uVar3 = (undefined4)(thunk_FUN_110389b0(param_1 + 8));
        *(undefined4 *)(param_1 + 0x24) = uVar3;

        return;
      }
    }
    else {
      iVar1 = (int)(thunk_FUN_1103a220(iVar4,*(undefined4 *)(param_1 + 0x34)));
      if (iVar1 == 0) {
        pvVar2 = (void *)(operator_new(0x20));

        if (pvVar2 != (void *)0x0) {
          uVar3 = (undefined4)(thunk_FUN_11039b30(param_1 + 8));
          *(undefined4 *)(param_1 + 0x24) = uVar3;

          return;
        }
      }
      else {
        iVar4 = (int)(thunk_FUN_11038930(iVar4,*(undefined4 *)(param_1 + 0x34)));
        if (iVar4 != 0) {

          return;
        }
        pvVar2 = (void *)(operator_new(0x60));

        if (pvVar2 != (void *)0x0) {
          uVar3 = (undefined4)(thunk_FUN_110380c0(param_1 + 8));
          *(undefined4 *)(param_1 + 0x24) = uVar3;

          return;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;

  return;

 } catch (...) { }
}


// Reference entry 10f76c10; body size 209 bytes.
#line 1 "ENTRY_10f76c10"

undefined4 __thiscall Recovered_Bulk::FUN_10f76c10(void *param_2,size_t param_3)
{
  int param_1 = (int )this;
  void *_Memory;
  uint uVar1;
  int iVar2;
  
  _Memory = (void *)(*(void **)(param_1 + 0xc070));
  if (_Memory == (void *)0x0) {
    _Memory = (void *)(malloc(0x400));
    *(void **)(param_1 + 0xc070) = _Memory;
    if (_Memory == (void *)0x0) {
      return (undefined4)(0);
    }
    *(undefined4 *)(param_1 + 0xc074) = 0x400;
    uVar1 = (uint)(0x400);
  }
  else {
    uVar1 = (uint)(*(uint *)(param_1 + 0xc074));
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc078));
  if (uVar1 < iVar2 + param_3) {
    do {
      *(uint *)(param_1 + 0xc074) = uVar1 * 2;
      _Memory = (void *)(realloc(_Memory,uVar1 * 2));
      if (_Memory == (void *)0x0) {
        free(*(void **)(param_1 + 0xc070));
        *(undefined4 *)(param_1 + 0xc070) = 0;
        return (undefined4)(0);
      }
      *(void **)(param_1 + 0xc070) = _Memory;
      iVar2 = (int)(*(int *)(param_1 + 0xc078));
      uVar1 = (uint)(*(uint *)(param_1 + 0xc074));
    } while (uVar1 < iVar2 + param_3);
  }
  memcpy((void *)((int)_Memory + iVar2),param_2,param_3);
  *(int *)(param_1 + 0xc078) = *(int *)(param_1 + 0xc078) + param_3;
  return (undefined4)(1);
}


// Reference entry 10f76d70; body size 126 bytes.
#line 1 "ENTRY_10f76d70"

void __fastcall FUN_10f76d70(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjACInternalListener);
  if ((*(char *)(param_1 + 5) != '\0') && (param_1[6] != 0)) {
    if (param_1[7] != 0) {
      thunk_FUN_112af4e0("SCSwfObjACListener",2,"Unsubscribe from SwfObjAC events",uVar1);
      thunk_FUN_1111a020(param_1);
      thunk_FUN_1111a090(param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  thunk_FUN_111a4f00();

  return;

 } catch (...) { }
}


// Reference entry 10f76e20; body size 154 bytes.
#line 1 "ENTRY_10f76e20"

undefined4 * __thiscall Recovered_Bulk::FUN_10f76e20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjACInternalListener);
  if ((*(char *)(param_1 + 5) != '\0') && (param_1[6] != 0)) {
    if (param_1[7] != 0) {
      thunk_FUN_112af4e0("SCSwfObjACListener",2,"Unsubscribe from SwfObjAC events",uVar1);
      thunk_FUN_1111a020(param_1);
      thunk_FUN_1111a090(param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f76ef0; body size 83 bytes.
#line 1 "ENTRY_10f76ef0"

void FUN_10f76ef0(int param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_111a5a30(param_1,&DAT_1211a2b0,0xb));
  uVar1 = (uint)(*(uint *)(param_1 + 0xc));
  if (((iVar2 != 0) && (*param_2 = 1, *(uint *)(iVar2 + 0xc) <= uVar1)) &&
     (uVar1 <= *(uint *)(iVar2 + 0x10))) {
    (**(code **)(iVar2 + 0x14))
              (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 8));
    return;
  }
  thunk_FUN_111a5820(param_1,param_2);
  return;
}


// Reference entry 10f76fc0; body size 281 bytes.
#line 1 "ENTRY_10f76fc0"

undefined4 FUN_10f76fc0(void)

{
 try {
  undefined4 *puVar1;
  char cVar2;
  char *_Src;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  size_t _Size;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  _Src = (char *)((char *)thunk_FUN_111a32a0(DAT_12126b84 ));
  if ((_Src == (char *)0x0) || (*_Src == '\0')) {
    local_14 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    pcVar5 = (char *)(_Src);
    do {
      cVar2 = (char)(*pcVar5);
      pcVar5 = (char *)(pcVar5 + 1);
    } while (cVar2 != '\0');
    _Size = (size_t)((int)pcVar5 - (int)(_Src + 1));
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
    puVar1 = (undefined4 *)(puVar3 + 4);
    *puVar3 = (undefined4)(1);
    puVar3[3] = _Size;
    puVar3[2] = 0;
    puVar3[1] = 0;
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    local_14 = (undefined4 *)(puVar1);
  }

  local_20 = (undefined4)(thunk_FUN_111a2df0());
  local_1c = (undefined4)(thunk_FUN_111a2df0());
  (**(code **)(**(int **)(local_18 + 0x18) + 0x20))(&local_14,&local_20,&local_1c);
  puVar1 = (undefined4 *)(local_14);

  if ((local_14 != (undefined4 *)0x0) && (puVar3 = local_14 + -4, (int)local_14[-4] < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0(puVar3));
    if (iVar4 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar3);
    }
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10f77140; body size 246 bytes.
#line 1 "ENTRY_10f77140"

undefined4 __thiscall Recovered_Bulk::FUN_10f77140(undefined4 param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  char cVar2;
  char *_Src;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  size_t _Size;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  _Src = (char *)((char *)thunk_FUN_111a32a0(DAT_12126b84 ));
  if ((_Src == (char *)0x0) || (*_Src == '\0')) {
    param_3 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    pcVar5 = (char *)(_Src);
    do {
      cVar2 = (char)(*pcVar5);
      pcVar5 = (char *)(pcVar5 + 1);
    } while (cVar2 != '\0');
    _Size = (size_t)((int)pcVar5 - (int)(_Src + 1));
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
    puVar1 = (undefined4 *)(puVar3 + 4);
    *puVar3 = (undefined4)(1);
    puVar3[3] = _Size;
    puVar3[2] = 0;
    puVar3[1] = 0;
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    param_3 = (undefined4 *)(puVar1);
  }

  (**(code **)(**(int **)(param_1 + 0x18) + 0x24))(&param_3);
  puVar1 = (undefined4 *)(param_3);

  if ((param_3 != (undefined4 *)0x0) && (puVar3 = param_3 + -4, (int)param_3[-4] < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0(puVar3));
    if (iVar4 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar3);
    }
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10f772a0; body size 65 bytes.
#line 1 "ENTRY_10f772a0"

void __fastcall FUN_10f772a0(int param_1)

{
  if ((*(char *)(param_1 + 0x14) == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_112af4e0("SCSwfObjACListener",2,"Subscribe to SwfObjAC events");
      thunk_FUN_1110ef60(param_1);
      thunk_FUN_1110ef90(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// Reference entry 10f77300; body size 65 bytes.
#line 1 "ENTRY_10f77300"

void __fastcall FUN_10f77300(int param_1)

{
  if ((*(char *)(param_1 + 0x14) != '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_112af4e0("SCSwfObjACListener",2,"Unsubscribe from SwfObjAC events");
      thunk_FUN_1111a020(param_1);
      thunk_FUN_1111a090(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


// Reference entry 10f77370; body size 114 bytes.
#line 1 "ENTRY_10f77370"

undefined4 * __thiscall Recovered_Bulk::FUN_10f77370(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f77460; body size 278 bytes.
#line 1 "ENTRY_10f77460"

undefined4 * __thiscall Recovered_Bulk::FUN_10f77460(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f77bd0; body size 76 bytes.
#line 1 "ENTRY_10f77bd0"

void __fastcall FUN_10f77bd0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f77cd0; body size 118 bytes.
#line 1 "ENTRY_10f77cd0"

void __fastcall FUN_10f77cd0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarm);
  param_1[3] = (uint)&ghidra_vftable_SCAlarm;
  if (param_1[2] != 0) {
    thunk_FUN_1110f4a0(uVar1);
  }
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_RAlarmProgramDataBrowseCB;
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f77fd0; body size 146 bytes.
#line 1 "ENTRY_10f77fd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f77fd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarm);
  param_1[3] = (uint)&ghidra_vftable_SCAlarm;
  if (param_1[2] != 0) {
    thunk_FUN_1110f4a0(uVar1);
  }
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[3] = (uint)&ghidra_vftable_RAlarmProgramDataBrowseCB;
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f78140; body size 76 bytes.
#line 1 "ENTRY_10f78140"

void __fastcall FUN_10f78140(int param_1)

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


// Reference entry 10f781a0; body size 149 bytes.
#line 1 "ENTRY_10f781a0"

void __thiscall Recovered_Bulk::FUN_10f781a0(int *param_2,undefined4 param_3)
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


// Reference entry 10f784e0; body size 524 bytes.
#line 1 "ENTRY_10f784e0"

int * __thiscall Recovered_Bulk::FUN_10f784e0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  SCLibrary *this_;
  int *piVar5;
  SCIAction *pSVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x20));

  local_14 = (int *)(piVar2);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)(operator_new(0x34));
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      piVar3[2] = 0;
      piVar3[3] = 0;
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCAlarmSaveAction);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      piVar3[4] = (int)param_1;
      piVar3[5] = 0;
      if (param_1 != (int *)0x0) {
        piVar4 = (int *)((int *)(**(code **)(*param_1 + 0xc))(uVar1));
        piVar3[5] = (int)piVar4;
        (**(code **)(*piVar4 + 4))();
      }
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      *(undefined1 *)(piVar3 + 0xc) = 0;
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[2] = (int)(uint)&ghidra_vftable_SCIActionDelegate;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCompoundAction);
    piVar2[2] = (int)(uint)&ghidra_vftable_SCCompoundAction;
    piVar2[3] = 0;
    piVar2[4] = 0;
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    piVar2[5] = (int)piVar3;
    piVar2[6] = 0;
    if (piVar3 != (int *)0x0) {
      if (*(code **)(*piVar3 + 0xc) != thunk_FUN_10211630) {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      }
      piVar2[6] = (int)piVar3;
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined1 *)(piVar2 + 7) = 0;
  }
  piVar3 = (int *)((int *)0x0);

  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_102116d0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    (**(code **)(*piVar3 + 4))();
  }
  pSVar6 = (SCIAction *)((SCIAction *)&local_14);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)((SCLibrary *)(this_))->createActionContextForAction(pSVar6));
  piVar4 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  *piVar5 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(piVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f78770; body size 1620 bytes.
#line 1 "ENTRY_10f78770"

undefined4 * __thiscall Recovered_Bulk::FUN_10f78770(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *local_50;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar5 = (int)(*(int *)(param_1 + 8));
  local_14 = (int)(iVar5);
  iVar3 = (int)(thunk_FUN_111134e0(DAT_12126b84 ));
  if (iVar3 == 0) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(thunk_FUN_11111570());
  }
  if ((iVar5 == 0) || (iVar3 == 0)) {
    *param_2 = (undefined4)(0);

    return (undefined4 *)(param_2);
  }
  uVar4 = (undefined4)(thunk_FUN_11112300());
  iVar5 = (int)(thunk_FUN_11115a00(uVar4));
  if (iVar5 == 0) {
    piVar6 = (int *)(operator_new(0xd7d8));

    local_50 = (int *)(piVar6);
    if (piVar6 == (int *)0x0) {
      local_18 = (int *)((int *)0x0);
    }
    else {
      local_18 = (int *)(piVar6);
      uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x48))());
      uVar16 = (undefined4)(0);
      uVar15 = (undefined4)(0);
      uVar14 = (undefined4)(2000);
      uVar13 = (undefined4)(2000);
      uVar7 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x50))
                        (2000,2000,0,0));
      thunk_FUN_111c0760(uVar4,"urn:schemas-upnp-org:service:AlarmClock:1","CreateAlarm",uVar7,
                         uVar13,uVar14,uVar15,uVar16);
      *piVar6 = (int)((int)(uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp);
      piVar6[0x18] = (int)(uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp;
      piVar6[0x11b] = (int)(uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp;
      piVar6[0x35f4] = 0;
    }

    puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_11113300(&local_50));

    puVar9 = (undefined4 *)((undefined4 *)thunk_FUN_111131f0(local_4c));
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    puVar10 = (undefined4 *)((undefined4 *)thunk_FUN_111133f0(local_48));
    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar8 != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)((undefined1 *)*puVar8);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    puVar12 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar9 != (undefined1 *)0x0) {
      puVar12 = (undefined1 *)((undefined1 *)*puVar9);
    }
    local_1c = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar10 != (undefined1 *)0x0) {
      local_1c = (undefined1 *)((undefined1 *)*puVar10);
    }
    uVar2 = (undefined1)(thunk_FUN_11112310());
    local_30 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_30 + 1)) << 8 | (uint)(uVar2)));
    local_34 = (uint)(thunk_FUN_11113cb0());
    local_34 = (uint)(local_34 & 0xffff);
    local_38 = (undefined4)(thunk_FUN_111123b0());
    local_3c = (undefined4)(thunk_FUN_111124d0());
    local_40 = (undefined4)(thunk_FUN_111123c0());
    uVar4 = (undefined4)(thunk_FUN_111130d0());
    uVar2 = (undefined1)(thunk_FUN_11111e70());
    local_44 = (int *)((int *)((uint)(*(unsigned short *)((char *)&local_44 + 1)) << 8 | (uint)(uVar2)));
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("StartLocalTime",0));
    (**(code **)(*piVar6 + 0xc))(local_1c);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("Duration",0));
    (**(code **)(*piVar6 + 0xc))(puVar12);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("Recurrence",0));
    (**(code **)(*piVar6 + 0xc))(puVar11);
    thunk_FUN_1124ffa0("Enabled",0);
    thunk_FUN_1124f3c0(local_44);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("RoomUUID",0));
    (**(code **)(*piVar6 + 0xc))(uVar4);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("ProgramURI",0));
    (**(code **)(*piVar6 + 0xc))(local_40);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("ProgramMetaData",0));
    (**(code **)(*piVar6 + 0xc))(local_3c);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("PlayMode",0));
    (**(code **)(*piVar6 + 0xc))(local_38);
    thunk_FUN_1124ffa0("Volume",0);
    thunk_FUN_1124f2e0(local_34);
    thunk_FUN_1124ffa0("IncludeLinkedZones",0);
    thunk_FUN_1124f3c0(local_30);
    piVar1 = (int *)(local_18);
    piVar6 = (int *)(local_18 + 0x35f4);
    thunk_FUN_1124ff50("AssignedID");
    thunk_FUN_112504b0(piVar6);
    thunk_FUN_101ba300();
    thunk_FUN_101ba300();

    thunk_FUN_101ba300();
    piVar6 = (int *)(operator_new(0x50));

    local_44 = (int *)(piVar6);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      thunk_FUN_10f77460(piVar1);
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCOpAlarmSave);
      piVar6[2] = (int)(uint)&ghidra_vftable_SCOpAlarmSave;
      piVar6[0x12] = (int)piVar1;
      piVar6[0x13] = 0;
    }

    *param_2 = (undefined4)(piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
  }
  else {
    piVar6 = (int *)(operator_new(0xd7d0));

    local_50 = (int *)(piVar6);
    if (piVar6 == (int *)0x0) {
      local_18 = (int *)((int *)0x0);
    }
    else {
      local_18 = (int *)(piVar6);
      uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x48))());
      uVar16 = (undefined4)(0);
      uVar15 = (undefined4)(0);
      uVar14 = (undefined4)(2000);
      uVar13 = (undefined4)(2000);
      uVar7 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 0x50))
                        (2000,2000,0,0));
      thunk_FUN_111c0760(uVar4,"urn:schemas-upnp-org:service:AlarmClock:1","UpdateAlarm",uVar7,
                         uVar13,uVar14,uVar15,uVar16);
      *piVar6 = (int)((int)(uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp);
      piVar6[0x18] = (int)(uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp;
      piVar6[0x11b] = (int)(uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp;
    }

    puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_11113300(&local_44));

    puVar9 = (undefined4 *)((undefined4 *)thunk_FUN_111131f0(&local_40));
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    puVar10 = (undefined4 *)((undefined4 *)thunk_FUN_111133f0(&local_3c));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    local_20 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar8 != (undefined1 *)0x0) {
      local_20 = (undefined1 *)((undefined1 *)*puVar8);
    }
    puVar11 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar9 != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)((undefined1 *)*puVar9);
    }
    local_1c = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar10 != (undefined1 *)0x0) {
      local_1c = (undefined1 *)((undefined1 *)*puVar10);
    }
    uVar2 = (undefined1)(thunk_FUN_11112310());
    local_38 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_38 + 1)) << 8 | (uint)(uVar2)));
    local_34 = (uint)(thunk_FUN_11113cb0());
    local_34 = (uint)(local_34 & 0xffff);
    local_30 = (undefined4)(thunk_FUN_111123b0());
    local_2c = (undefined4)(thunk_FUN_111124d0());
    local_28 = (undefined4)(thunk_FUN_111123c0());
    uVar4 = (undefined4)(thunk_FUN_111130d0());
    uVar2 = (undefined1)(thunk_FUN_11111e70());
    local_24 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_24 + 1)) << 8 | (uint)(uVar2)));
    uVar7 = (undefined4)(thunk_FUN_11112300());
    thunk_FUN_1124ffa0(&DAT_11910258,0);
    thunk_FUN_1124f350(uVar7);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("StartLocalTime",0));
    (**(code **)(*piVar6 + 0xc))(local_1c);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("Duration",0));
    (**(code **)(*piVar6 + 0xc))(puVar11);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("Recurrence",0));
    (**(code **)(*piVar6 + 0xc))(local_20);
    thunk_FUN_1124ffa0("Enabled",0);
    thunk_FUN_1124f3c0(local_24);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("RoomUUID",0));
    (**(code **)(*piVar6 + 0xc))(uVar4);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("ProgramURI",0));
    (**(code **)(*piVar6 + 0xc))(local_28);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("ProgramMetaData",0));
    (**(code **)(*piVar6 + 0xc))(local_2c);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("PlayMode",0));
    (**(code **)(*piVar6 + 0xc))(local_30);
    thunk_FUN_1124ffa0("Volume",0);
    thunk_FUN_1124f2e0(local_34);
    thunk_FUN_1124ffa0("IncludeLinkedZones",0);
    thunk_FUN_1124f3c0(local_38);
    thunk_FUN_101ba300();
    thunk_FUN_101ba300();

    thunk_FUN_101ba300();
    piVar6 = (int *)(operator_new(0x50));

    local_50 = (int *)(piVar6);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      iVar5 = (int)(thunk_FUN_11112300());
      thunk_FUN_10f77460(local_18);
      *piVar6 = (int)((int)(uint)&ghidra_vftable_SCOpAlarmSave);
      piVar6[2] = (int)(uint)&ghidra_vftable_SCOpAlarmSave;
      piVar6[0x12] = 0;
      piVar6[0x13] = iVar5;
    }

    *param_2 = (undefined4)(piVar6);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();

      return (undefined4 *)(param_2);
    }
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f79160; body size 161 bytes.
#line 1 "ENTRY_10f79160"

undefined4 * __thiscall Recovered_Bulk::FUN_10f79160(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);
  if (*(int *)(param_1 + 8) != 0) {

    pvVar2 = (void *)(operator_new(0x14));

    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_11111e60(uVar1));
      piVar4 = (int *)((int *)thunk_FUN_1025e250(uVar3));
    }

    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f798a0; body size 161 bytes.
#line 1 "ENTRY_10f798a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f798a0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);
  if (*(int *)(param_1 + 8) != 0) {

    pvVar2 = (void *)(operator_new(0x10));

    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_111130e0(uVar1));
      piVar4 = (int *)((int *)thunk_FUN_1029df20(uVar3));
    }

    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f79c70; body size 161 bytes.
#line 1 "ENTRY_10f79c70"

undefined4 * __thiscall Recovered_Bulk::FUN_10f79c70(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);
  if (*(int *)(param_1 + 8) != 0) {

    pvVar2 = (void *)(operator_new(0x14));

    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_111135b0(uVar1));
      piVar4 = (int *)((int *)thunk_FUN_1025e250(uVar3));
    }

    *param_2 = (undefined4)(piVar4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }

    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10f79f20; body size 128 bytes.
#line 1 "ENTRY_10f79f20"

void __fastcall FUN_10f79f20(int param_1)

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


// Reference entry 10f79fd0; body size 232 bytes.
#line 1 "ENTRY_10f79fd0"

void __thiscall Recovered_Bulk::FUN_10f79fd0(undefined4 param_2,undefined4 param_3)
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
    (**(code **)(*piVar1 + 0x38))();
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


// Reference entry 10f7a770; body size 297 bytes.
#line 1 "ENTRY_10f7a770"

int __thiscall Recovered_Bulk::FUN_10f7a770(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("StartLocalTime",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Duration",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Recurrence",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  thunk_FUN_1124ffa0("Enabled",0);
  thunk_FUN_1124f3c0(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("RoomUUID",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ProgramURI",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ProgramMetaData",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("PlayMode",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  thunk_FUN_1124ffa0("Volume",0);
  thunk_FUN_1124f2e0(param_3);
  thunk_FUN_1124ffa0("IncludeLinkedZones",0);
  thunk_FUN_1124f3c0(param_4);
  iVar2 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("AssignedID");
  thunk_FUN_112504b0(iVar2);
  return (int)(param_1);
}


// Reference entry 10f7a8f0; body size 292 bytes.
#line 1 "ENTRY_10f7a8f0"

undefined4 __thiscall Recovered_Bulk::FUN_10f7a8f0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  thunk_FUN_1124ffa0(&DAT_11910258,0);
  thunk_FUN_1124f350(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("StartLocalTime",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Duration",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Recurrence",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  thunk_FUN_1124ffa0("Enabled",0);
  thunk_FUN_1124f3c0(param_3);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("RoomUUID",0));
  (**(code **)(*piVar1 + 0xc))(param_4);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ProgramURI",0));
  (**(code **)(*piVar1 + 0xc))(param_4);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ProgramMetaData",0));
  (**(code **)(*piVar1 + 0xc))(param_4);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("PlayMode",0));
  (**(code **)(*piVar1 + 0xc))(param_4);
  thunk_FUN_1124ffa0("Volume",0);
  thunk_FUN_1124f2e0(param_4);
  thunk_FUN_1124ffa0("IncludeLinkedZones",0);
  thunk_FUN_1124f3c0(param_5);
  return (undefined4)(param_1);
}


// Reference entry 10f7af00; body size 73 bytes.
#line 1 "ENTRY_10f7af00"

void __thiscall Recovered_Bulk::FUN_10f7af00(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(param_2);
  if (((*(int *)(param_1 + 8) != 0) && (param_2 != (int *)0x0)) &&
     (cVar2 = (**(code **)(*param_2 + 0x14))(), cVar2 != '\0')) {
    param_2 = (int *)((int *)((uint)param_2 & 0xff000000));
    thunk_FUN_1025e860(piVar1,&param_2);
    thunk_FUN_1111bcf0(&param_2);
  }
  return;
}


// Reference entry 10f7b170; body size 93 bytes.
#line 1 "ENTRY_10f7b170"

void __fastcall FUN_10f7b170(undefined4 *param_1)

{
 try {
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjDDInternalListener);
  if (*(char *)(param_1 + 5) != '\0') {
    iVar2 = (int)(thunk_FUN_1112be50(uVar1));
    if (iVar2 != 0) {
      thunk_FUN_1112c280(param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  thunk_FUN_111a4f00();

  return;

 } catch (...) { }
}


// Reference entry 10f7b1f0; body size 121 bytes.
#line 1 "ENTRY_10f7b1f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7b1f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjDDInternalListener);
  if (*(char *)(param_1 + 5) != '\0') {
    iVar2 = (int)(thunk_FUN_1112be50(uVar1));
    if (iVar2 != 0) {
      thunk_FUN_1112c280(param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f7b290; body size 83 bytes.
#line 1 "ENTRY_10f7b290"

void FUN_10f7b290(int param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_111a5a30(param_1,&DAT_1211a490,2));
  uVar1 = (uint)(*(uint *)(param_1 + 0xc));
  if (((iVar2 != 0) && (*param_2 = 1, *(uint *)(iVar2 + 0xc) <= uVar1)) &&
     (uVar1 <= *(uint *)(iVar2 + 0x10))) {
    (**(code **)(iVar2 + 0x14))
              (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 8));
    return;
  }
  thunk_FUN_111a5820(param_1,param_2);
  return;
}


// Reference entry 10f7b640; body size 117 bytes.
#line 1 "ENTRY_10f7b640"

void __fastcall FUN_10f7b640(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjSPInternalListener);
  if ((*(char *)(param_1 + 5) != '\0') && (param_1[6] != 0)) {
    if (param_1[7] != 0) {
      thunk_FUN_112af4e0("SCSwfObjSPListener",2,"Unsubscribe from SwfObjSP events",uVar1);
      thunk_FUN_11162620(param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  thunk_FUN_111a4f00();

  return;

 } catch (...) { }
}


// Reference entry 10f7b6e0; body size 145 bytes.
#line 1 "ENTRY_10f7b6e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7b6e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjSPInternalListener);
  if ((*(char *)(param_1 + 5) != '\0') && (param_1[6] != 0)) {
    if (param_1[7] != 0) {
      thunk_FUN_112af4e0("SCSwfObjSPListener",2,"Unsubscribe from SwfObjSP events",uVar1);
      thunk_FUN_11162620(param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  thunk_FUN_111a4f00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f7b7a0; body size 83 bytes.
#line 1 "ENTRY_10f7b7a0"

void FUN_10f7b7a0(int param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_111a5a30(param_1,&DAT_1211a4e8,2));
  uVar1 = (uint)(*(uint *)(param_1 + 0xc));
  if (((iVar2 != 0) && (*param_2 = 1, *(uint *)(iVar2 + 0xc) <= uVar1)) &&
     (uVar1 <= *(uint *)(iVar2 + 0x10))) {
    (**(code **)(iVar2 + 0x14))
              (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 8));
    return;
  }
  thunk_FUN_111a5820(param_1,param_2);
  return;
}


// Reference entry 10f7b810; body size 183 bytes.
#line 1 "ENTRY_10f7b810"

undefined4 __fastcall FUN_10f7b810(int param_1)

{
 try {
  void *_Memory;
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (int)(param_1);
  thunk_FUN_111a3310(&local_14);

  if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(local_14 + -0x10),local_14,uVar2);
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  iVar1 = (int)(local_14);

  if ((local_14 != 0) && (_Memory = (void *)(local_14 + -0x10), *(int *)(local_14 + -0x10) < 0xffff)
     ) {
    iVar3 = (int)(thunk_FUN_1123fcd0(_Memory));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free(_Memory);
    }
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10f7bb60; body size 435 bytes.
#line 1 "ENTRY_10f7bb60"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7bb60(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined4 *)((undefined4 *)*param_1);
  puVar7 = (undefined4 *)((undefined4 *)local_14[1]);
  cVar4 = (char)(*(char *)((int)puVar7 + 0xd));
  ppvVar3 = (void **)(&local_10);
  puVar2 = (undefined4 *)(puVar7);

  while (puVar1 = puVar7, ExceptionList = ppvVar3, cVar4 == '\0') {
    if ((int *)param_3[1] != (int *)0x0) {
      (**(code **)(*(int *)param_3[1] + 4))();
    }
    uVar6 = (undefined4)(puVar1[4]);

    piVar9 = (int *)((int *)puVar1[5]);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(uVar6,piVar9);
    }

    cVar4 = (char)(thunk_FUN_10f7e400(uVar6,piVar9));
    if (cVar4 == '\0') {
      puVar7 = (undefined4 *)((undefined4 *)*puVar1);
      local_14 = (undefined4 *)(puVar1);
    }
    else {
      puVar7 = (undefined4 *)((undefined4 *)puVar1[2]);
    }
    cVar4 = (char)(*(char *)((int)puVar7 + 0xd));

    puVar2 = (undefined4 *)(puVar1);
  }
  if (*(char *)((int)local_14 + 0xd) == '\0') {
    if ((int *)local_14[5] != (int *)0x0) {
      (**(code **)(*(int *)local_14[5] + 4))();
    }
    iVar8 = (int)(*param_3);

    piVar9 = (int *)((int *)param_3[1]);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(iVar8,piVar9);
    }

    cVar4 = (char)(thunk_FUN_10f7e400(iVar8,piVar9));
    if (cVar4 == '\0') {
      *param_2 = (undefined4)(local_14);
      *(undefined1 *)(param_2 + 1) = 0;

      return (undefined4 *)(param_2);
    }
  }
  if (param_1[1] != 0xaaaaaaa) {
    iVar8 = (int)(*param_1);

    piVar5 = (int *)(operator_new(0x18));
    piVar5[4] = *param_3;
    piVar9 = (int *)((int *)param_3[1]);

    piVar5[5] = (int)piVar9;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))();
    }
    *piVar5 = (int)(iVar8);
    piVar5[1] = iVar8;
    piVar5[2] = iVar8;
    *(undefined2 *)(piVar5 + 3) = 0;
    uVar6 = (undefined4)(thunk_FUN_10f7ecc0(puVar2));
    *param_2 = (undefined4)(uVar6);
    *(undefined1 *)(param_2 + 1) = 1;

    return (undefined4 *)(param_2);
  }
                    
  thunk_FUN_101d7220();

 } catch (...) { }
}


// Reference entry 10f7bdc0; body size 150 bytes.
#line 1 "ENTRY_10f7bdc0"

undefined4 __thiscall Recovered_Bulk::FUN_10f7bdc0(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(DAT_12126b84);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);

  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_10f7bdc0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[5]);

    if (piVar3 != (int *)0x0) {
      param_3[4] = 0;
      param_3[5] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }

    thunk_FUN_1148a50e(param_3,0x18);

    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10f7be90; body size 200 bytes.
#line 1 "ENTRY_10f7be90"

int * __thiscall Recovered_Bulk::FUN_10f7be90(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  iVar1 = (int)(*param_1);
  puVar3 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
  *param_2 = (int)((int)puVar3);
  param_2[1] = 0;
  param_2[2] = iVar1;
  cVar2 = (char)(*(char *)((int)puVar3 + 0xd));
  while (cVar2 == '\0') {
    *param_2 = (int)((int)puVar3);
    if (*(int **)(param_3 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_3 + 4) + 4))();
    }
    uVar4 = (undefined4)(puVar3[4]);

    piVar5 = (int *)((int *)puVar3[5]);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(uVar4,piVar5);
    }

    cVar2 = (char)(thunk_FUN_10f7e400(uVar4,piVar5));
    if (cVar2 == '\0') {
      param_2[2] = (int)puVar3;
      puVar3 = (undefined4 *)((undefined4 *)*puVar3);
    }
    else {
      puVar3 = (undefined4 *)((undefined4 *)puVar3[2]);
    }
    param_2[1] = (uint)(cVar2 == '\0');
    cVar2 = (char)(*(char *)((int)puVar3 + 0xd));
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10f7bfb0; body size 98 bytes.
#line 1 "ENTRY_10f7bfb0"

void FUN_10f7bfb0(undefined4 param_1,int param_2)

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


// Reference entry 10f7c030; body size 170 bytes.
#line 1 "ENTRY_10f7c030"

undefined4 FUN_10f7c030(int param_1,undefined4 *param_2)

{
 try {
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    }

    uVar2 = (undefined4)(*param_2);
    piVar3 = (int *)((int *)param_2[1]);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(uVar2,piVar3);
    }

    cVar1 = (char)(thunk_FUN_10f7e400(uVar2,piVar3));
    if (cVar1 == '\0') {

      return (undefined4)(1);
    }
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10f7c190; body size 84 bytes.
#line 1 "ENTRY_10f7c190"

void FUN_10f7c190(undefined4 param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f7c2c0; body size 114 bytes.
#line 1 "ENTRY_10f7c2c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7c2c0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f7c350; body size 114 bytes.
#line 1 "ENTRY_10f7c350"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7c350(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f7c3e0; body size 278 bytes.
#line 1 "ENTRY_10f7c3e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7c3e0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f7c540; body size 278 bytes.
#line 1 "ENTRY_10f7c540"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7c540(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f7d1a0; body size 225 bytes.
#line 1 "ENTRY_10f7d1a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7d1a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  char *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_1124a160(0);
  param_1[0x1843] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[0x1844] = 0;
  param_1[0x1845] = 0;
  param_1[0x1846] = 0;
  *(undefined2 *)(param_1 + 0x1847) = 1;
  *(undefined1 *)((int)param_1 + 0x611e) = 1;
  param_1[0x1848] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RListOfLinkedServicesWithOAuthTokensRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RListOfLinkedServicesWithOAuthTokensRequest;
  param_1[0x1849] = 0;
  param_1[0x184a] = 0;
  param_1[0x184b] = 0;
  param_1[0x184c] = 0;

  pcVar1 = (char *)((char *)*param_2);
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    pcVar1 = (char *)((char *)0x0);
  }
  thunk_FUN_10f80070(pcVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f7dbb0; body size 111 bytes.
#line 1 "ENTRY_10f7dbb0"

void __fastcall FUN_10f7dbb0(int param_1)

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


// Reference entry 10f7dea0; body size 99 bytes.
#line 1 "ENTRY_10f7dea0"

void __fastcall FUN_10f7dea0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RConnectedPartnersGetAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RConnectedPartnersGetAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RConnectedPartnersGetAIOOp;
  thunk_FUN_10f7f1b0(uVar1);
  param_1[0x12] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f7dfd0();

  return;

 } catch (...) { }
}


// Reference entry 10f7df30; body size 118 bytes.
#line 1 "ENTRY_10f7df30"

void __fastcall FUN_10f7df30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RConnectedPartnersGetRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RConnectedPartnersGetRequest;
  piVar1 = (int *)((int *)param_1[0x184e]);

  if (piVar1 != (int *)0x0) {
    param_1[0x184d] = 0;
    param_1[0x184e] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10f7e0c0();

  return;

 } catch (...) { }
}


// Reference entry 10f7e220; body size 106 bytes.
#line 1 "ENTRY_10f7e220"

void __fastcall FUN_10f7e220(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpConnectedPartnersGet);
  param_1[2] = (uint)&ghidra_vftable_SCOpConnectedPartnersGet;
  piVar1 = (int *)((int *)param_1[0x13]);

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10f7da10();

  return;

 } catch (...) { }
}


// Reference entry 10f7e900; body size 127 bytes.
#line 1 "ENTRY_10f7e900"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7e900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RConnectedPartnersGetAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RConnectedPartnersGetAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RConnectedPartnersGetAIOOp;
  thunk_FUN_10f7f1b0(uVar1);
  param_1[0x12] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f7dfd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f7e9b0; body size 142 bytes.
#line 1 "ENTRY_10f7e9b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7e9b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RConnectedPartnersGetRequest);
  param_1[0x1843] = (uint)&ghidra_vftable_RConnectedPartnersGetRequest;
  piVar1 = (int *)((int *)param_1[0x184e]);

  if (piVar1 != (int *)0x0) {
    param_1[0x184d] = 0;
    param_1[0x184e] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10f7e0c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x613c);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f7eb10; body size 127 bytes.
#line 1 "ENTRY_10f7eb10"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7eb10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpConnectedPartnersGet);
  param_1[2] = (uint)&ghidra_vftable_SCOpConnectedPartnersGet;
  piVar1 = (int *)((int *)param_1[0x13]);

  if (piVar1 != (int *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_10f7da10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f7f080; body size 76 bytes.
#line 1 "ENTRY_10f7f080"

void __fastcall FUN_10f7f080(int param_1)

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


// Reference entry 10f7f0e0; body size 76 bytes.
#line 1 "ENTRY_10f7f0e0"

void __fastcall FUN_10f7f0e0(int param_1)

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


// Reference entry 10f7f140; body size 90 bytes.
#line 1 "ENTRY_10f7f140"

void __fastcall FUN_10f7f140(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x50) != 0) && (*(int **)(param_1 + 0x4c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x4c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))(1);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


// Reference entry 10f7f1b0; body size 90 bytes.
#line 1 "ENTRY_10f7f1b0"

void __fastcall FUN_10f7f1b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x50) != 0) && (*(int **)(param_1 + 0x4c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x4c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))(1);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


// Reference entry 10f7f220; body size 260 bytes.
#line 1 "ENTRY_10f7f220"

void __fastcall FUN_10f7f220(int param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((*(int *)(param_1 + 0x40) != 0) && (*(int **)(param_1 + 0x3c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(DAT_12126b84 );
    puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 0x3c));
    if (puVar3 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar3 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_18));

  piVar4 = (int *)((int *)(**(code **)(*(int *)*puVar3 + 0x40))(&local_14,param_1 + 0x30));
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
    (**(code **)(*piVar1 + 0x38))(*(undefined4 *)(param_1 + 0x20));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f7f370; body size 149 bytes.
#line 1 "ENTRY_10f7f370"

void __thiscall Recovered_Bulk::FUN_10f7f370(int *param_2,undefined4 param_3)
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


// Reference entry 10f7f450; body size 149 bytes.
#line 1 "ENTRY_10f7f450"

void __thiscall Recovered_Bulk::FUN_10f7f450(int *param_2,undefined4 param_3)
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


// Reference entry 10f7f600; body size 140 bytes.
#line 1 "ENTRY_10f7f600"

void __thiscall Recovered_Bulk::FUN_10f7f600(int param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_2 != 0) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(param_2,param_3,DAT_12126b84 );
    }
    (**(code **)(*(int *)(param_1 + -0x610c) + 0x14))();
  }

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f801c0; body size 66 bytes.
#line 1 "ENTRY_10f801c0"

undefined4 __thiscall Recovered_Bulk::FUN_10f801c0(int param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((int *)param_1[0xf] != (int *)0x0) {
    cVar1 = (char)((**(code **)(*(int *)param_1[0xf] + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(*(int *)param_1[0xf] + 8))());
      goto LAB_10f801e2;
    }
  }
  iVar2 = (int)(param_1[0x10]);
LAB_10f801e2:
  if (iVar2 == param_2) {
    return (undefined4)(1);
  }
  uVar3 = (undefined4)((**(code **)(*param_1 + 0x2c))(param_2,param_3));
  return (undefined4)(uVar3);
}


// Reference entry 10f805e0; body size 128 bytes.
#line 1 "ENTRY_10f805e0"

void __fastcall FUN_10f805e0(int param_1)

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


// Reference entry 10f80680; body size 128 bytes.
#line 1 "ENTRY_10f80680"

void __fastcall FUN_10f80680(int param_1)

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


// Reference entry 10f80740; body size 233 bytes.
#line 1 "ENTRY_10f80740"

void __thiscall Recovered_Bulk::FUN_10f80740(int *param_2)
{
  int param_1 = (int )this;
 try {
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x38))
              (*(undefined4 *)(param_1 + 0x20),DAT_12126b84 );
  }
  pvVar1 = (void *)(operator_new(0x6c));

  if (pvVar1 == (void *)0x0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(thunk_FUN_111c06e0(0));
  }
  piVar5 = (int *)(*(int **)(param_1 + 0x3c));

  if (piVar5 != (int *)0x0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      (**(code **)(*piVar5 + 0x10))();
      piVar5 = (int *)(*(int **)(param_1 + 0x3c));
    }
    if (piVar5 != (int *)0x0) {
      iVar3 = (int)(thunk_FUN_1123fcd0(piVar5 + 1));
      if (iVar3 == 0) {
        (**(code **)*piVar5)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  if (iVar2 != 0) {
    thunk_FUN_1123fce0(iVar2 + 4);
    if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0x3c) + 4))(-(uint)(param_1 != 0) & param_1 + 8U,0));
      *(undefined4 *)(param_1 + 0x40) = uVar4;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f80870; body size 234 bytes.
#line 1 "ENTRY_10f80870"

void __thiscall Recovered_Bulk::FUN_10f80870(int *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x38))
              (*(undefined4 *)(param_1 + 4),DAT_12126b84 );
  }
  iVar1 = (int)(param_1 + -0x14);
  if (param_1 == 0x1c) {
    iVar1 = (int)(0);
  }
  pvVar2 = (void *)(operator_new(0x6c));

  if (pvVar2 == (void *)0x0) {
    iVar3 = (int)(0);
  }
  else {
    iVar3 = (int)(thunk_FUN_111c06e0(0));
  }
  piVar6 = (int *)(*(int **)(param_1 + 0x20));

  if (piVar6 != (int *)0x0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      (**(code **)(*piVar6 + 0x10))();
      piVar6 = (int *)(*(int **)(param_1 + 0x20));
    }
    if (piVar6 != (int *)0x0) {
      iVar4 = (int)(thunk_FUN_1123fcd0(piVar6 + 1));
      if (iVar4 == 0) {
        (**(code **)*piVar6)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(int *)(param_1 + 0x20) = iVar3;
  if (iVar3 != 0) {
    thunk_FUN_1123fce0(iVar3 + 4);
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      uVar5 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 4))(iVar1,0));
      *(undefined4 *)(param_1 + 0x24) = uVar5;
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f80a70; body size 232 bytes.
#line 1 "ENTRY_10f80a70"

void __thiscall Recovered_Bulk::FUN_10f80a70(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f80ba0; body size 232 bytes.
#line 1 "ENTRY_10f80ba0"

void __thiscall Recovered_Bulk::FUN_10f80ba0(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f81690; body size 164 bytes.
#line 1 "ENTRY_10f81690"

void __thiscall Recovered_Bulk::FUN_10f81690(int param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  param_1[0xb] = param_2;
  if ((char)param_1[10] == '\0') {
    if (((char *)param_1[0xd] != (char *)0x0) && (*(char *)param_1[0xd] != '\0')) {
      (**(code **)(*param_1 + 0x24))(uVar1);

      return;
    }
    pvVar2 = (void *)(operator_new(0x6c));

    if (pvVar2 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_111c06e0(0));
    }

    thunk_FUN_102207b0(uVar3,param_1 + 2,0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f81c90; body size 140 bytes.
#line 1 "ENTRY_10f81c90"

void FUN_10f81c90(undefined4 param_1,undefined4 *param_2)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  *(undefined4 *)param_2[1] = 0;
  puVar3 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
    piVar2 = (int *)((int *)puVar3[3]);

    if (piVar2 != (int *)0x0) {
      puVar3[2] = 0;
      puVar3[3] = 0;
      (**(code **)(*piVar2 + 8))(uVar4);
    }

    thunk_FUN_1148a50e(puVar3,0x10);
    puVar3 = (undefined4 *)(puVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f81d70; body size 98 bytes.
#line 1 "ENTRY_10f81d70"

void FUN_10f81d70(undefined4 param_1,int param_2)

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


// Reference entry 10f81ef0; body size 84 bytes.
#line 1 "ENTRY_10f81ef0"

void FUN_10f81ef0(undefined4 param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f82270; body size 93 bytes.
#line 1 "ENTRY_10f82270"

int __thiscall Recovered_Bulk::FUN_10f82270(int param_2)
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


// Reference entry 10f82750; body size 177 bytes.
#line 1 "ENTRY_10f82750"

void __fastcall FUN_10f82750(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (uint)&ghidra_vftable_SCOpRef;
  piVar1 = (int *)((int *)param_1[0x19]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 0x10,uVar2);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)((int *)param_1[0xf]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);

  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();

  return;

 } catch (...) { }
}


// Reference entry 10f82a30; body size 111 bytes.
#line 1 "ENTRY_10f82a30"

void __fastcall FUN_10f82a30(int param_1)

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


// Reference entry 10f82b00; body size 153 bytes.
#line 1 "ENTRY_10f82b00"

void __fastcall FUN_10f82b00(int *param_1)

{
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    piVar3 = (int *)((int *)puVar1[3]);

    if (piVar3 != (int *)0x0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      (**(code **)(*piVar3 + 8))(uVar4);
    }

    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x10);

  return;

 } catch (...) { }
}


// Reference entry 10f82f10; body size 406 bytes.
#line 1 "ENTRY_10f82f10"

void __fastcall FUN_10f82f10(int *param_1)

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

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCLanScanner);
  param_1[2] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x1e] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x1f] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x20] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x21] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x22] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x23] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x26] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x38] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x3b] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x3e] = (int)(uint)&ghidra_vftable_SCLanScanner;
  local_14 = (int *)(param_1);
  piVar3 = (int *)((int *)thunk_FUN_1023ab10(&local_14,uVar2));
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

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(param_1[0x39]);
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  thunk_FUN_10f82b00();
  thunk_FUN_10f82750();
  param_1[0x3e] = (int)(uint)&ghidra_vftable_RITQHandler;
  param_1[0x3b] = (int)(uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[0x3d]);

  if (piVar1 != (int *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x38] = (int)(uint)&ghidra_vftable_SCControllerEventSink;
  piVar1 = (int *)((int *)param_1[0x3a]);

  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10c68c80();

  return;

 } catch (...) { }
}


// Reference entry 10f836c0; body size 422 bytes.
#line 1 "ENTRY_10f836c0"

int * __thiscall Recovered_Bulk::FUN_10f836c0(byte param_2)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCLanScanner);
  param_1[2] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x1e] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x1f] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x20] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x21] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x22] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x23] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x26] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x38] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x3b] = (int)(uint)&ghidra_vftable_SCLanScanner;
  param_1[0x3e] = (int)(uint)&ghidra_vftable_SCLanScanner;
  local_14 = (int *)(param_1);
  piVar3 = (int *)((int *)thunk_FUN_1023ab10(&local_14,uVar2));
  piVar1 = (int *)((int *)*piVar3);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(param_1[0x39]);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  thunk_FUN_10f82b00();
  thunk_FUN_10f82750();
  param_1[0x3e] = (int)(uint)&ghidra_vftable_RITQHandler;
  param_1[0x3b] = (int)(uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[0x3d]);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (piVar1 != (int *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x38] = (int)(uint)&ghidra_vftable_SCControllerEventSink;
  piVar1 = (int *)((int *)param_1[0x3a]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (piVar1 != (int *)0x0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10c68c80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x170);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10f83a00; body size 153 bytes.
#line 1 "ENTRY_10f83a00"

void __fastcall FUN_10f83a00(int *param_1)

{
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    piVar3 = (int *)((int *)puVar1[3]);

    if (piVar3 != (int *)0x0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      (**(code **)(*piVar3 + 8))(uVar4);
    }

    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x10);

  return;

 } catch (...) { }
}


// Reference entry 10f83b20; body size 120 bytes.
#line 1 "ENTRY_10f83b20"

int __thiscall Recovered_Bulk::FUN_10f83b20(int *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  iVar1 = (int)(*param_2);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  piVar2 = (int *)((int *)param_2[3]);

  if (piVar2 != (int *)0x0) {
    param_2[2] = 0;
    param_2[3] = 0;
    (**(code **)(*piVar2 + 8))(uVar3);
  }
  thunk_FUN_1148a50e(param_2,0x10);

  return (int)(iVar1);

 } catch (...) { }
}


// Reference entry 10f83d90; body size 321 bytes.
#line 1 "ENTRY_10f83d90"

void __thiscall Recovered_Bulk::FUN_10f83d90(int param_2,short param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x18) + 0x20))(DAT_12126b84 ));
  }
  if (param_2 == iVar2) {
    piVar5 = (int *)(*(int **)(**(int **)(param_1 + 0x7c) + 0xc));
    iVar2 = (int)(*(int *)(**(int **)(param_1 + 0x7c) + 8));
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }

    if (param_3 == 0) {
      thunk_FUN_10f86240();
      *(undefined4 *)(param_1 + 0x10) = 0;
      thunk_FUN_10c69f50(iVar2);
    }
    else if (*(int *)(param_1 + 0x10) < 2) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      thunk_FUN_10f85b00(iVar2);
    }
    else {
      thunk_FUN_10f86240();
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if ((*(int *)(param_1 + 0x80) != 0) && (*(int *)(param_1 + 0x10) == 0)) {
      iVar1 = (int)(**(int **)(param_1 + 0x7c));
      piVar3 = (int *)((int *)(iVar1 + 8));
      iVar4 = (int)(*piVar3);
      if (iVar4 != iVar2) {
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))();
          iVar4 = (int)(*piVar3);
        }
        piVar5 = (int *)(*(int **)(iVar1 + 0xc));
        iVar2 = (int)(iVar4);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
        }
      }
      thunk_FUN_10f86240();
      thunk_FUN_10f85b00(iVar2);
    }

    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10f83fd0; body size 76 bytes.
#line 1 "ENTRY_10f83fd0"

void __fastcall FUN_10f83fd0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      (**(code **)(*piVar2 + 0x10))();
      piVar2 = (int *)(*(int **)(param_1 + 0x2c));
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(thunk_FUN_1123fcd0(piVar2 + 1));
      if ((iVar1 == 0) && (piVar2 != (int *)0x0)) {
        (**(code **)*piVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


// Reference entry 10f84170; body size 138 bytes.
#line 1 "ENTRY_10f84170"

undefined4 __fastcall FUN_10f84170(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*(int *)(param_1 + 0x71c + *(int *)(*(int *)(param_1 + 0x71c) + 4)) + 0x30))
                    ());
  if (((cVar1 != '\0') &&
      (cVar1 = (**(code **)(*(int *)(param_1 + 0xda8 + *(int *)(*(int *)(param_1 + 0xda8) + 4)) +
                           0x30))(), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(*(int *)(param_1 + 0x1434 + *(int *)(*(int *)(param_1 + 0x1434) + 4)) +
                          0x30))(), cVar1 != '\0')) {
    cVar1 = (char)(thunk_FUN_11457240());
    if ((cVar1 == '\0') &&
       (cVar1 = (**(code **)(*(int *)(param_1 + 0x1ac0 + *(int *)(*(int *)(param_1 + 0x1ac0) + 4)) +
                            0x30))(), cVar1 == '\0')) {
      return (undefined4)(0);
    }
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10f859f0; body size 135 bytes.
#line 1 "ENTRY_10f859f0"

void __fastcall FUN_10f859f0(int param_1)

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


// Reference entry 10f85aa0; body size 75 bytes.
#line 1 "ENTRY_10f85aa0"

undefined4 FUN_10f85aa0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte local_8;
  undefined2 local_7;
  undefined4 local_4;
  
  local_8 = (byte)(local_8 & 0xf8);
  local_7 = (undefined2)(0);
  local_4 = (undefined4)(0);
  cVar1 = (char)(thunk_FUN_1125aed0(param_1,&local_8));
  if ((cVar1 != '\0') && (0x10 < (byte)local_7)) {
    uVar2 = (undefined4)(thunk_FUN_11456cb0(param_1));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10f86160; body size 175 bytes.
#line 1 "ENTRY_10f86160"

void __stdcall FUN_10f86160(int *param_1)

{
 try {
  char cVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }

  if (param_1 != (int *)0x0) {
    cVar1 = (char)(thunk_FUN_10242870());
    if (cVar1 != '\0') {
      thunk_FUN_10c6a3c0();
      goto LAB_10f861e9;
    }
  }
  cVar1 = (char)(thunk_FUN_10c6a420());
  if (cVar1 != '\0') {
    thunk_FUN_10c6cda0();
  }
LAB_10f861e9:

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f86240; body size 115 bytes.
#line 1 "ENTRY_10f86240"

void __fastcall FUN_10f86240(undefined4 *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)*param_1);
  iVar2 = (int)(*piVar1);
  param_1[1] = param_1[1] + -1;
  *(int *)piVar1[1] = iVar2;
  *(int *)(iVar2 + 4) = piVar1[1];
  piVar3 = (int *)((int *)piVar1[3]);

  if (piVar3 != (int *)0x0) {
    piVar1[2] = 0;
    piVar1[3] = 0;
    (**(code **)(*piVar3 + 8))(uVar4);
  }
  thunk_FUN_1148a50e(piVar1,0x10);

  return;

 } catch (...) { }
}


// Reference entry 10f862e0; body size 126 bytes.
#line 1 "ENTRY_10f862e0"

undefined4 __stdcall FUN_10f862e0(int *param_1)

{
 try {
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (param_1 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar1 + 4))();

    thunk_FUN_10f85b00(param_1);

    (**(code **)(*piVar1 + 8))();
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10f86470; body size 387 bytes.
#line 1 "ENTRY_10f86470"

void __thiscall Recovered_Bulk::FUN_10f86470(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1122cf10(param_2);
  (**(code **)(*(int *)(param_1 + 0x71c + *(int *)(*(int *)(param_1 + 0x71c) + 4)) + 0x2c))(param_2)
  ;
  (**(code **)(*(int *)(param_1 + 0xda8 + *(int *)(*(int *)(param_1 + 0xda8) + 4)) + 0x2c))(param_2)
  ;
  (**(code **)(*(int *)(param_1 + 0x1434 + *(int *)(*(int *)(param_1 + 0x1434) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x1ac0 + *(int *)(*(int *)(param_1 + 0x1ac0) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x214c + *(int *)(*(int *)(param_1 + 0x214c) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x27d8 + *(int *)(*(int *)(param_1 + 0x27d8) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x2e64 + *(int *)(*(int *)(param_1 + 0x2e64) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x3b7c + *(int *)(*(int *)(param_1 + 0x3b7c) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x4208 + *(int *)(*(int *)(param_1 + 0x4208) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x34f0 + *(int *)(*(int *)(param_1 + 0x34f0) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x4894 + *(int *)(*(int *)(param_1 + 0x4894) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x4fe0 + *(int *)(*(int *)(param_1 + 0x4fe0) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x566c + *(int *)(*(int *)(param_1 + 0x566c) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x5cf8 + *(int *)(*(int *)(param_1 + 0x5cf8) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x6384 + *(int *)(*(int *)(param_1 + 0x6384) + 4)) + 0x2c))
            (param_2);
  (**(code **)(*(int *)(param_1 + 0x6a10 + *(int *)(*(int *)(param_1 + 0x6a10) + 4)) + 0x2c))
            (param_2);
  return;
}


// Reference entry 10f86b70; body size 128 bytes.
#line 1 "ENTRY_10f86b70"

void __thiscall Recovered_Bulk::FUN_10f86b70(int *param_2,undefined4 param_3,uint param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  
  param_4 = (uint)(*(uint *)(param_1 + 0x18) & param_4);
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0xc) + 4 + param_4 * 8));
  if (piVar1 == *(int **)(param_1 + 4)) {
    *param_2 = (int)((int)*(int **)(param_1 + 4));
    param_2[1] = 0;
    return;
  }
  piVar2 = (int *)(*(int **)(*(int *)(param_1 + 0xc) + param_4 * 8));
  cVar4 = (char)(thunk_FUN_10405e20(param_3,piVar1 + 2));
  while( true ) {
    if (cVar4 != '\0') {
      iVar3 = (int)(*piVar1);
      param_2[1] = (int)piVar1;
      *param_2 = (int)(iVar3);
      return;
    }
    if (piVar1 == (int *)(piVar2)) break;
    piVar1 = (int *)((int *)piVar1[1]);
    cVar4 = (char)(thunk_FUN_10405e20(param_3,piVar1 + 2));
  }
  *param_2 = (int)((int)piVar1);
  param_2[1] = 0;
  return;
}


// Reference entry 10f86c10; body size 115 bytes.
#line 1 "ENTRY_10f86c10"

void FUN_10f86c10(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  *(undefined4 *)param_2[1] = 0;
  puVar4 = (undefined4 *)((undefined4 *)*param_2);
  do {
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = (uint)(puVar4[7]);
    puVar2 = (undefined4 *)((undefined4 *)*puVar4);
    if (0xf < uVar1) {
      iVar3 = (int)(puVar4[2]);
      uVar6 = (uint)(uVar1 + 1);
      iVar5 = (int)(iVar3);
      if (0xfff < uVar6) {
        iVar5 = (int)(*(int *)(iVar3 + -4));
        uVar6 = (uint)(uVar1 + 0x24);
        if (0x1f < (iVar3 - iVar5) - 4U) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(iVar5,uVar6);
    }
    puVar4[6] = 0;
    puVar4[7] = 0xf;
    *(undefined1 *)(puVar4 + 2) = 0;
    thunk_FUN_1148a50e(puVar4,0x24);
    puVar4 = (undefined4 *)(puVar2);
  } while( true );
}


// Reference entry 10f86cd0; body size 90 bytes.
#line 1 "ENTRY_10f86cd0"

void FUN_10f86cd0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (uint)(*(uint *)(param_2 + 0x1c));
  if (0xf < uVar1) {
    iVar2 = (int)(*(int *)(param_2 + 8));
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
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0xf;
  *(undefined1 *)(param_2 + 8) = 0;
  thunk_FUN_1148a50e(param_2,0x24);
  return;
}


// Reference entry 10f87440; body size 95 bytes.
#line 1 "ENTRY_10f87440"

void FUN_10f87440(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10f88700; body size 99 bytes.
#line 1 "ENTRY_10f88700"

void __fastcall FUN_10f88700(int param_1)

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
  thunk_FUN_10f86c10(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x24);
  return;
}


// Reference entry 10f88780; body size 77 bytes.
#line 1 "ENTRY_10f88780"

void __fastcall FUN_10f88780(int *param_1)

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
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// Reference entry 10f89000; body size 136 bytes.
#line 1 "ENTRY_10f89000"

float __thiscall Recovered_Bulk::FUN_10f89000(int param_2)
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


// Reference entry 10f893e0; body size 87 bytes.
#line 1 "ENTRY_10f893e0"

void __thiscall Recovered_Bulk::FUN_10f893e0(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10f89460; body size 133 bytes.
#line 1 "ENTRY_10f89460"

void __fastcall FUN_10f89460(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10f890c0();
  return;
}


// Reference entry 10f89530; body size 77 bytes.
#line 1 "ENTRY_10f89530"

void __fastcall FUN_10f89530(int *param_1)

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
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// Reference entry 10f89dd0; body size 342 bytes.
#line 1 "ENTRY_10f89dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f89dd0(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_10f8c450();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_10f89f1c:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_10f89f1c;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10f89f1c;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_10f89f16;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_10f89f16:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 10f8a080; body size 114 bytes.
#line 1 "ENTRY_10f8a080"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8a080(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8a110; body size 114 bytes.
#line 1 "ENTRY_10f8a110"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8a110(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8a1a0; body size 114 bytes.
#line 1 "ENTRY_10f8a1a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8a1a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8a230; body size 278 bytes.
#line 1 "ENTRY_10f8a230"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8a230(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8a390; body size 278 bytes.
#line 1 "ENTRY_10f8a390"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8a390(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8a4f0; body size 278 bytes.
#line 1 "ENTRY_10f8a4f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8a4f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&ghidra_vftable_RControlAIOOpCB;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (uint)&ghidra_vftable_SCOpImpl;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8a760; body size 279 bytes.
#line 1 "ENTRY_10f8a760"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8a760(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_11261e50(DAT_12126b84 );
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseGetPlayerInfoAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RMuseGetPlayerInfoAIOOp;
  param_1[7] = (uint)&ghidra_vftable_RHTTPBufferedDataIO;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 1;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_1124a160(0);
  param_1[7] = (uint)&ghidra_vftable_RMusePlayerInfoGetRequest;
  param_1[0xd] = (uint)&ghidra_vftable_RMusePlayerInfoGetRequest;
  param_1[0x1850] = 0;
  param_1[0x1851] = 0;
  param_1[0x1852] = 0;
  param_1[0x1853] = 0;
  param_1[0x1854] = 0;
  param_1[0x1856] = 0;
  param_1[0x1857] = 0;
  param_1[0x1855] = (uint)&ghidra_vftable_RControlAIOOpRef;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  param_1[0x1858] = 0;
  thunk_FUN_10f8d720(param_2,param_3,param_4);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8a8c0; body size 185 bytes.
#line 1 "ENTRY_10f8a8c0"

undefined4 * __fastcall FUN_10f8a8c0(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  param_1[5] = 0;

  thunk_FUN_1124a160(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusePlayerInfoGetRequest);
  param_1[6] = (uint)&ghidra_vftable_RMusePlayerInfoGetRequest;
  param_1[0x1849] = 0;
  param_1[0x184a] = 0;
  param_1[0x184b] = 0;
  param_1[0x184c] = 0;
  param_1[0x184d] = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8a9b0; body size 256 bytes.
#line 1 "ENTRY_10f8a9b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8a9b0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_11261e50(DAT_12126b84 );

  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseSetSettingsAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RMuseSetSettingsAIOOp;
  thunk_FUN_1124a200("application/json",0);
  param_1[0x188a] = (uint)&ghidra_vftable_RHTTPDataIO;
  param_1[7] = (uint)&ghidra_vftable_RMuseDeviceSetSettingsPostRequest;
  param_1[0x188a] = (uint)&ghidra_vftable_RMuseDeviceSetSettingsPostRequest;
  param_1[0x188b] = 0;
  param_1[0x188c] = 0;
  param_1[0x188d] = 0;
  param_1[0x188e] = 0;
  param_1[0x188f] = 0;
  param_1[0x1890] = 0;
  param_1[0x1891] = 0;
  param_1[0x1893] = 0;
  param_1[0x1894] = 0;
  param_1[0x1892] = (uint)&ghidra_vftable_RControlAIOOpRef;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_10f8d0b0(param_2,param_3,param_4);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8aaf0; body size 553 bytes.
#line 1 "ENTRY_10f8aaf0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8aaf0(int param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar4 = (uint)(DAT_12126b84);

  local_1c = (undefined4 *)(param_1);
  thunk_FUN_11261e50(uVar4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceVoiceSettingsCompoundSet);
  param_1[2] = (uint)&ghidra_vftable_SCOpDeviceVoiceSettingsCompoundSet;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_10bebd60(&local_2c,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uVar3 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  local_18 = (undefined4 *)(local_2c);
  puVar8 = (undefined4 *)(local_2c);
  if (local_2c == (undefined4 *)(local_28)) {
    iVar6 = (int)(param_1[8]);
    puVar5 = (undefined4 *)(param_1);
    *(unsigned char *)((char *)&local_8 + 0) = uVar3;
  }
  else {
    do {
      local_18 = (undefined4 *)(puVar8);
      puVar5 = (undefined4 *)(operator_new(0x6254));
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      local_14 = (undefined4 *)(puVar5);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        uVar1 = (undefined4)(*puVar8);
        thunk_FUN_11261e50(uVar4);
        *puVar5 = (undefined4)((uint)&ghidra_vftable_RMuseSetSettingsAIOOp);
        puVar5[2] = (uint)&ghidra_vftable_RMuseSetSettingsAIOOp;
        *(unsigned char *)((char *)&local_8 + 0) = 4;
        local_20 = (undefined4 *)(puVar5 + 7);
        thunk_FUN_1124a200("application/json",0);
        puVar5[0x188a] = (uint)&ghidra_vftable_RHTTPDataIO;
        puVar5[7] = (uint)&ghidra_vftable_RMuseDeviceSetSettingsPostRequest;
        puVar5[0x188a] = (uint)&ghidra_vftable_RMuseDeviceSetSettingsPostRequest;
        puVar5[0x188b] = 0;
        puVar5[0x188c] = 0;
        puVar5[0x188d] = 0;
        puVar5[0x188e] = 0;
        puVar5[0x188f] = 0;
        puVar5[0x1890] = 0;
        puVar5[0x1891] = 0;
        local_14[0x1893] = 0;
        local_14[0x1894] = 0;
        local_14[0x1892] = (uint)&ghidra_vftable_RControlAIOOpRef;
        *(unsigned char *)((char *)&local_8 + 0) = 6;
        thunk_FUN_10f8d0b0(uVar1,param_3,param_4);
        puVar5 = (undefined4 *)(local_14);
        puVar8 = (undefined4 *)(local_18);
      }
      puVar2 = (undefined4 *)((undefined4 *)param_1[8]);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (puVar2 == (undefined4 *)param_1[9]) {
        local_18 = (undefined4 *)(puVar5);
        thunk_FUN_10f89dd0(puVar2,&local_18);
      }
      else {
        *puVar2 = (undefined4)(puVar5);
        param_1[8] = param_1[8] + 4;
      }
      iVar6 = (int)(param_1[8]);
      puVar8 = (undefined4 *)(puVar8 + 1);
      puVar5 = (undefined4 *)(local_1c);
      local_18 = (undefined4 *)(puVar8);
    } while (puVar8 != (undefined4 *)(local_28));
  }
  if (iVar6 - param_1[7] >> 2 == 0) {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_2 + 0x5c) != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)(*(undefined1 **)(param_2 + 0x5c));
    }
    thunk_FUN_112af4e0("MuseDevice",2,"No Ops created for bonded set with ZP: %s",puVar7);
  }
  if (local_2c != (undefined4 *)0x0) {
    uVar4 = (uint)(local_24 - (int)local_2c & 0xfffffffc);
    puVar8 = (undefined4 *)(local_2c);
    if (0xfff < uVar4) {
      puVar8 = (undefined4 *)((undefined4 *)local_2c[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)puVar8))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar8,uVar4);
  }

  return (undefined4 *)(puVar5);

 } catch (...) { }
}


// Reference entry 10f8adb0; body size 338 bytes.
#line 1 "ENTRY_10f8adb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8adb0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x28));

  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_10f8aaf0(param_2,param_3,param_4));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceVoiceSettingsSet);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceVoiceSettingsSet);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8b280; body size 341 bytes.
#line 1 "ENTRY_10f8b280"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8b280(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x6254));

  if (pvVar3 == (void *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(thunk_FUN_10f8a9b0(param_2,param_3,param_4));
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);

  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRefBase;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  param_1[6] = iVar4;
  if (iVar4 != 0) {
    thunk_FUN_1123fce0(iVar4 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&ghidra_vftable_RControlAIOOpRef;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&ghidra_vftable_SCIObjImpl;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&ghidra_vftable_SCElapsedTimeMeasurement;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpMuseSetSettings);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOpMuseSetSettings);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8b460; body size 260 bytes.
#line 1 "ENTRY_10f8b460"

void __fastcall FUN_10f8b460(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


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


// Reference entry 10f8b5b0; body size 260 bytes.
#line 1 "ENTRY_10f8b5b0"

void __fastcall FUN_10f8b5b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


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


// Reference entry 10f8b700; body size 260 bytes.
#line 1 "ENTRY_10f8b700"

void __fastcall FUN_10f8b700(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


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


// Reference entry 10f8b850; body size 81 bytes.
#line 1 "ENTRY_10f8b850"

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

void __fastcall FID_conflict__Tidy_10f8b850(int *param_1)

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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10f8b8c0; body size 190 bytes.
#line 1 "ENTRY_10f8b8c0"

void __fastcall FUN_10f8b8c0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseDeviceSetSettingsPostRequest);
  param_1[0x1883] = (uint)&ghidra_vftable_RMuseDeviceSetSettingsPostRequest;

  ((SCStr *)((SCStr *)(param_1 + 0x1888)))->int_release();
  param_1[0x1888] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1887)))->int_release();
  param_1[0x1887] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1886)))->int_release();
  param_1[0x1886] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x1885)))->int_release();
  param_1[0x1885] = 0;
  thunk_FUN_1124a3e0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10f8b9c0; body size 103 bytes.
#line 1 "ENTRY_10f8b9c0"

void __fastcall FUN_10f8b9c0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseGetPlayerInfoAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RMuseGetPlayerInfoAIOOp;
  thunk_FUN_10f8dce0(uVar1);
  param_1[0x1855] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f8ba50();
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 10f8ba50; body size 220 bytes.
#line 1 "ENTRY_10f8ba50"

void __fastcall FUN_10f8ba50(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusePlayerInfoGetRequest);
  param_1[6] = (uint)&ghidra_vftable_RMusePlayerInfoGetRequest;
  piVar1 = (int *)((int *)param_1[0x184d]);

  if (piVar1 != (int *)0x0) {
    param_1[0x184c] = 0;
    param_1[0x184d] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x184b)))->int_release();
  param_1[0x184b] = 0;

  ((SCStr *)((SCStr *)(param_1 + 0x184a)))->int_release();
  param_1[0x184a] = 0;
  thunk_FUN_1124a3d0();

  ((SCStr *)((SCStr *)(param_1 + 5)))->int_release();
  param_1[5] = 0;

  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;

  return;

 } catch (...) { }
}


// Reference entry 10f8bb70; body size 103 bytes.
#line 1 "ENTRY_10f8bb70"

void __fastcall FUN_10f8bb70(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseSetSettingsAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RMuseSetSettingsAIOOp;
  thunk_FUN_10f8dd50(uVar1);
  param_1[0x1892] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f8b8c0();
  thunk_FUN_11261f10();

  return;

 } catch (...) { }
}


// Reference entry 10f8bc00; body size 102 bytes.
#line 1 "ENTRY_10f8bc00"

void __fastcall FUN_10f8bc00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceVoiceSettingsCompoundSet);
  param_1[2] = (uint)&ghidra_vftable_SCOpDeviceVoiceSettingsCompoundSet;
  iVar1 = (int)(param_1[7]);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[9] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  thunk_FUN_11261f10();
  return;
}


// Reference entry 10f8bf40; body size 134 bytes.
#line 1 "ENTRY_10f8bf40"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8bf40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseGetPlayerInfoAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RMuseGetPlayerInfoAIOOp;
  thunk_FUN_10f8dce0(uVar1);
  param_1[0x1855] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f8ba50();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6164);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8c020; body size 134 bytes.
#line 1 "ENTRY_10f8c020"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8c020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseSetSettingsAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RMuseSetSettingsAIOOp;
  thunk_FUN_10f8dd50(uVar1);
  param_1[0x1892] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_10f8b8c0();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6254);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10f8c0d0; body size 125 bytes.
#line 1 "ENTRY_10f8c0d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8c0d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceVoiceSettingsCompoundSet);
  param_1[2] = (uint)&ghidra_vftable_SCOpDeviceVoiceSettingsCompoundSet;
  iVar1 = (int)(param_1[7]);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[9] - iVar1 & 0xfffffffc);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10f8c270; body size 89 bytes.
#line 1 "ENTRY_10f8c270"

void __thiscall Recovered_Bulk::FUN_10f8c270(int param_2,int param_3,int param_4)
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
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}


// Reference entry 10f8c350; body size 81 bytes.
#line 1 "ENTRY_10f8c350"

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

void __fastcall FID_conflict__Tidy_10f8c350(int *param_1)

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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10f8c460; body size 76 bytes.
#line 1 "ENTRY_10f8c460"

void __fastcall FUN_10f8c460(int param_1)

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


// Reference entry 10f8c4c0; body size 76 bytes.
#line 1 "ENTRY_10f8c4c0"

void __fastcall FUN_10f8c4c0(int param_1)

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


// Reference entry 10f8c520; body size 76 bytes.
#line 1 "ENTRY_10f8c520"

void __fastcall FUN_10f8c520(int param_1)

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


// Reference entry 10f8c580; body size 149 bytes.
#line 1 "ENTRY_10f8c580"

void __thiscall Recovered_Bulk::FUN_10f8c580(int *param_2,undefined4 param_3)
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


// Reference entry 10f8c660; body size 149 bytes.
#line 1 "ENTRY_10f8c660"

void __thiscall Recovered_Bulk::FUN_10f8c660(int *param_2,undefined4 param_3)
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


// Reference entry 10f8c740; body size 149 bytes.
#line 1 "ENTRY_10f8c740"

void __thiscall Recovered_Bulk::FUN_10f8c740(int *param_2,undefined4 param_3)
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


// Reference entry 10f8c940; body size 357 bytes.
#line 1 "ENTRY_10f8c940"

void __thiscall Recovered_Bulk::FUN_10f8c940(int *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  pcVar8 = (char *)(*(char **)(*(int *)(param_1 + 0x6124) + 0x5c));
  pcVar6 = (char *)("");
  if (pcVar8 != (char *)0x0) {
    pcVar6 = (char *)(pcVar8);
  }
  ((SCStr *)((SCStr *)&local_14))->int_allocRep(pcVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (param_2 == (int *)0x0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
    }
    if (local_14 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)(local_14);
    }
    pcVar8 = (char *)("Received unparsable player (%s) response:\n%s");
    uVar4 = (undefined4)(1);
  }
  else {
    piVar3 = (int *)((int *)createPropertyBag());
    piVar1 = (int *)((int *)*piVar3);
    *piVar3 = (int)(0);
    piVar3 = (int *)(*(int **)(param_1 + 0x6134));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x6130) = 0;
      *(undefined4 *)(param_1 + 0x6134) = 0;
      (**(code **)(*piVar3 + 8))(uVar2);
    }
    *(int **)(param_1 + 0x6130) = piVar1;
    if (piVar1 == (int *)0x0) {
      uVar4 = (undefined4)(0);
    }
    else {
      uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))());
    }
    *(undefined4 *)(param_1 + 0x6134) = uVar4;
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    (**(code **)(*param_2 + 0x88))(*(undefined4 *)(param_1 + 0x6130));
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x14));
    }
    if (local_14 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)(local_14);
    }
    pcVar8 = (char *)("Received and parsed player (%s) response:\n%s");
    uVar4 = (undefined4)(4);
  }
  thunk_FUN_112af4e0("muse_request",uVar4,pcVar8,puVar7,puVar5);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10f8db70; body size 98 bytes.
#line 1 "ENTRY_10f8db70"

undefined4 __thiscall Recovered_Bulk::FUN_10f8db70(undefined4 param_2,short *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x615c) = 0;
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x6158) + 0x448c));
  if ((iVar1 != 200) && (iVar1 != -1)) {
    thunk_FUN_112af4e0("MuseDevice",2,"Failed to get device settings, http response %d",iVar1);
    return (undefined4)(1);
  }
  if (*param_3 != 0) {
    thunk_FUN_112af4e0("MuseDevice",2,"Failed to get device settings, op result %u",*param_3);
  }
  return (undefined4)(1);
}


// Reference entry 10f8dbf0; body size 98 bytes.
#line 1 "ENTRY_10f8dbf0"

undefined4 __thiscall Recovered_Bulk::FUN_10f8dbf0(undefined4 param_2,short *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x6250) = 0;
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x624c) + 0x448c));
  if ((iVar1 != 200) && (iVar1 != -1)) {
    thunk_FUN_112af4e0("MuseDevice",2,"Failed to set device settings, http response %d",iVar1);
    return (undefined4)(1);
  }
  if (*param_3 != 0) {
    thunk_FUN_112af4e0("MuseDevice",2,"Failed to set device settings, op result %u",*param_3);
  }
  return (undefined4)(1);
}


// Reference entry 10f8dc70; body size 82 bytes.
#line 1 "ENTRY_10f8dc70"

undefined4 __thiscall Recovered_Bulk::FUN_10f8dc70(int param_2)
{
  int param_1 = (int )this;
  int *_Src;
  int *piVar1;
  int *_Dst;
  
  _Dst = (int *)(*(int **)(param_1 + 0x1c));
  piVar1 = (int *)(*(int **)(param_1 + 0x20));
  if ((int *)(_Dst) != piVar1) {
    while (_Src = _Dst + 1, *(int *)(*_Dst + 0x14) != param_2) {
      _Dst = (int *)(_Src);
      if (_Src == (int *)(piVar1)) {
        return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x1c) >> 8)) << 8 | (uint)(*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20))));
      }
    }
    memmove(_Dst,_Src,(int)piVar1 - (int)_Src);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -4;
  }
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x1c) >> 8)) << 8 | (uint)(*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20))));
}


// Reference entry 10f8dce0; body size 85 bytes.
#line 1 "ENTRY_10f8dce0"

void __fastcall FUN_10f8dce0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x615c) != 0) && (*(int **)(param_1 + 0x6158) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6158) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6158));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6158) = 0;
    *(undefined4 *)(param_1 + 0x615c) = 0;
  }
  return;
}


// Reference entry 10f8dd50; body size 85 bytes.
#line 1 "ENTRY_10f8dd50"

void __fastcall FUN_10f8dd50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6250) != 0) && (*(int **)(param_1 + 0x624c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x624c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x624c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x624c) = 0;
    *(undefined4 *)(param_1 + 0x6250) = 0;
  }
  return;
}


// Reference entry 10f8de50; body size 128 bytes.
#line 1 "ENTRY_10f8de50"

void __fastcall FUN_10f8de50(int param_1)

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


// Reference entry 10f8def0; body size 128 bytes.
#line 1 "ENTRY_10f8def0"

void __fastcall FUN_10f8def0(int param_1)

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


// Reference entry 10f8df90; body size 128 bytes.
#line 1 "ENTRY_10f8df90"

void __fastcall FUN_10f8df90(int param_1)

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


// Reference entry 10f8e050; body size 232 bytes.
#line 1 "ENTRY_10f8e050"

void __thiscall Recovered_Bulk::FUN_10f8e050(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f8e180; body size 232 bytes.
#line 1 "ENTRY_10f8e180"

void __thiscall Recovered_Bulk::FUN_10f8e180(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f8e2b0; body size 232 bytes.
#line 1 "ENTRY_10f8e2b0"

void __thiscall Recovered_Bulk::FUN_10f8e2b0(undefined4 param_2,undefined4 param_3)
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


// Reference entry 10f8e410; body size 103 bytes.
#line 1 "ENTRY_10f8e410"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8e410(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f8e490; body size 103 bytes.
#line 1 "ENTRY_10f8e490"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8e490(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f8e510; body size 103 bytes.
#line 1 "ENTRY_10f8e510"

undefined4 * __thiscall Recovered_Bulk::FUN_10f8e510(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f8e6b0; body size 101 bytes.
#line 1 "ENTRY_10f8e6b0"

undefined4 __thiscall Recovered_Bulk::FUN_10f8e6b0(void *param_2,uint param_3,size_t *param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint _Size;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x18));
  if (uVar1 != 0) {
    uVar2 = (uint)(*(uint *)(param_1 + 0x1c));
    if (param_2 == (void *)0x0) {
      if (uVar2 == 0) {
        return (undefined4)(1);
      }
    }
    else if (uVar2 <= uVar1) {
      _Size = (uint)(uVar1 - uVar2);
      if (param_3 < uVar1 - uVar2) {
        _Size = (uint)(param_3);
      }
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x10));
      }
      memmove(param_2,puVar3 + uVar2,_Size);
      *param_4 = (size_t)(_Size);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + _Size;
      if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


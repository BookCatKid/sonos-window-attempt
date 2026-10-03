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
extern int FUN_1006aac8(...);
extern int FUN_10070892(...);
extern int FUN_104ab710(...);
extern int FUN_10692b90(...);
extern int FUN_1069ccd0(...);
extern int FUN_10bbd800(...);
extern int FUN_1110f110(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _Xbad_function_call(...);
extern __declspec(dllimport) int _Xout_of_range(...);
extern __declspec(dllimport) int __std_exception_copy(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int atoi(...);
extern int createPropertyBag(...);
extern int createSCIntArray(...);
extern __declspec(dllimport) int fflush(...);
extern int getSingleton(...);
extern int hash(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int length(...);
extern int op_assign(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_10116710(...);
extern int thunk_FUN_10117000(...);
extern int thunk_FUN_101a2b90(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101a33f0(...);
extern int thunk_FUN_101a9c10(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101c42f0(...);
extern int thunk_FUN_101c6ae0(...);
extern int thunk_FUN_101e7620(...);
extern int thunk_FUN_101eca20(...);
extern int thunk_FUN_101ed0d0(...);
extern int thunk_FUN_101ed5f0(...);
extern int thunk_FUN_101f1c60(...);
extern int thunk_FUN_101f1cd0(...);
extern int thunk_FUN_101f2770(...);
extern int thunk_FUN_101ff410(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102082f0(...);
extern int thunk_FUN_10208940(...);
extern int thunk_FUN_1020b530(...);
extern int thunk_FUN_10210390(...);
extern int thunk_FUN_102105a0(...);
extern int thunk_FUN_10210700(...);
extern int thunk_FUN_10210b20(...);
extern int thunk_FUN_10217af0(...);
extern int thunk_FUN_10219a00(...);
extern int thunk_FUN_1021bf80(...);
extern int thunk_FUN_1021cc40(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_1023a9f0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10247e10(...);
extern int thunk_FUN_1025ed70(...);
extern int thunk_FUN_1026e620(...);
extern int thunk_FUN_1026fe20(...);
extern int thunk_FUN_1027ee20(...);
extern int thunk_FUN_102bcb30(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_102ec850(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_1033cdb0(...);
extern int thunk_FUN_1034d2f0(...);
extern int thunk_FUN_1034de20(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_10370f20(...);
extern int thunk_FUN_103a3e50(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103cb6d0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_103f6890(...);
extern int thunk_FUN_103f6da0(...);
extern int thunk_FUN_103f6e10(...);
extern int thunk_FUN_10400590(...);
extern int thunk_FUN_10405f90(...);
extern int thunk_FUN_10406340(...);
extern int thunk_FUN_1040bfe0(...);
extern int thunk_FUN_1040fad0(...);
extern int thunk_FUN_1040fdd0(...);
extern int thunk_FUN_10410310(...);
extern int thunk_FUN_1041d2b0(...);
extern int thunk_FUN_10423b10(...);
extern int thunk_FUN_1042f680(...);
extern int thunk_FUN_10430fa0(...);
extern int thunk_FUN_10431980(...);
extern int thunk_FUN_10431e10(...);
extern int thunk_FUN_10436400(...);
extern int thunk_FUN_10437740(...);
extern int thunk_FUN_1043d850(...);
extern int thunk_FUN_1044eaf0(...);
extern int thunk_FUN_10455370(...);
extern int thunk_FUN_1045af20(...);
extern int thunk_FUN_1045c280(...);
extern int thunk_FUN_104693f0(...);
extern int thunk_FUN_1046ba90(...);
extern int thunk_FUN_1046bd60(...);
extern int thunk_FUN_1046c9a0(...);
extern int thunk_FUN_1046d3a0(...);
extern int thunk_FUN_1046fbd0(...);
extern int thunk_FUN_1046fe40(...);
extern int thunk_FUN_104706b0(...);
extern int thunk_FUN_104775f0(...);
extern int thunk_FUN_10478f70(...);
extern int thunk_FUN_1047d200(...);
extern int thunk_FUN_1047da40(...);
extern int thunk_FUN_1047dde0(...);
extern int thunk_FUN_1047ff40(...);
extern int thunk_FUN_104886e0(...);
extern int thunk_FUN_104963d0(...);
extern int thunk_FUN_10498d70(...);
extern int thunk_FUN_10499dd0(...);
extern int thunk_FUN_1049ae90(...);
extern int thunk_FUN_104a2320(...);
extern int thunk_FUN_104a2ff0(...);
extern int thunk_FUN_104a36d0(...);
extern int thunk_FUN_104a47b0(...);
extern int thunk_FUN_104a9270(...);
extern int thunk_FUN_104aa9d0(...);
extern int thunk_FUN_104ae600(...);
extern int thunk_FUN_104aef40(...);
extern int thunk_FUN_104b43f0(...);
extern int thunk_FUN_104ba760(...);
extern int thunk_FUN_104bd050(...);
extern int thunk_FUN_104bd1e0(...);
extern int thunk_FUN_104c49a0(...);
extern int thunk_FUN_104ca270(...);
extern int thunk_FUN_104d4740(...);
extern int thunk_FUN_104d5310(...);
extern int thunk_FUN_104d53b0(...);
extern int thunk_FUN_104d68b0(...);
extern int thunk_FUN_104d98f0(...);
extern int thunk_FUN_104d9cc0(...);
extern int thunk_FUN_104da760(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104dff70(...);
extern int thunk_FUN_104e0170(...);
extern int thunk_FUN_104e04f0(...);
extern int thunk_FUN_104e05c0(...);
extern int thunk_FUN_104e0690(...);
extern int thunk_FUN_104e0ca0(...);
extern int thunk_FUN_104e0f40(...);
extern int thunk_FUN_104e11c0(...);
extern int thunk_FUN_104e3e20(...);
extern int thunk_FUN_104e5a60(...);
extern int thunk_FUN_104e5f10(...);
extern int thunk_FUN_104eae30(...);
extern int thunk_FUN_104ecc10(...);
extern int thunk_FUN_104ee000(...);
extern int thunk_FUN_104f8780(...);
extern int thunk_FUN_104f8c40(...);
extern int thunk_FUN_104f8fb0(...);
extern int thunk_FUN_10500110(...);
extern int thunk_FUN_10503400(...);
extern int thunk_FUN_105035b0(...);
extern int thunk_FUN_10503c60(...);
extern int thunk_FUN_10503dd0(...);
extern int thunk_FUN_10504060(...);
extern int thunk_FUN_10504170(...);
extern int thunk_FUN_10508f40(...);
extern int thunk_FUN_10511190(...);
extern int thunk_FUN_105120a0(...);
extern int thunk_FUN_10533e90(...);
extern int thunk_FUN_1053e5d0(...);
extern int thunk_FUN_1053f430(...);
extern int thunk_FUN_10541eb0(...);
extern int thunk_FUN_1054dd50(...);
extern int thunk_FUN_1054e240(...);
extern int thunk_FUN_105551d0(...);
extern int thunk_FUN_1055b780(...);
extern int thunk_FUN_10579450(...);
extern int thunk_FUN_105855b0(...);
extern int thunk_FUN_10585690(...);
extern int thunk_FUN_1058bf80(...);
extern int thunk_FUN_10592970(...);
extern int thunk_FUN_10593e20(...);
extern int thunk_FUN_1059b6d0(...);
extern int thunk_FUN_1059b760(...);
extern int thunk_FUN_1059d120(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_1059f110(...);
extern int thunk_FUN_1059f1a0(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a4960(...);
extern int thunk_FUN_105a50c0(...);
extern int thunk_FUN_105a5110(...);
extern int thunk_FUN_105a51f0(...);
extern int thunk_FUN_105a5630(...);
extern int thunk_FUN_105a5690(...);
extern int thunk_FUN_105a56f0(...);
extern int thunk_FUN_105a5760(...);
extern int thunk_FUN_105ad910(...);
extern int thunk_FUN_105b36c0(...);
extern int thunk_FUN_105b3de0(...);
extern int thunk_FUN_105b4460(...);
extern int thunk_FUN_105b5360(...);
extern int thunk_FUN_105b6820(...);
extern int thunk_FUN_105b6a20(...);
extern int thunk_FUN_105b6d40(...);
extern int thunk_FUN_105b9d30(...);
extern int thunk_FUN_105b9f10(...);
extern int thunk_FUN_105ba0d0(...);
extern int thunk_FUN_105bb550(...);
extern int thunk_FUN_105bc9a0(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105c12d0(...);
extern int thunk_FUN_105ca4f0(...);
extern int thunk_FUN_105d2c90(...);
extern int thunk_FUN_105ef270(...);
extern int thunk_FUN_105f2210(...);
extern int thunk_FUN_105f34e0(...);
extern int thunk_FUN_105f36d0(...);
extern int thunk_FUN_105f38c0(...);
extern int thunk_FUN_105f5920(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105f5df0(...);
extern int thunk_FUN_105f60e0(...);
extern int thunk_FUN_105ff930(...);
extern int thunk_FUN_106045d0(...);
extern int thunk_FUN_10604700(...);
extern int thunk_FUN_10604790(...);
extern int thunk_FUN_10604820(...);
extern int thunk_FUN_1061c5e0(...);
extern int thunk_FUN_106243b0(...);
extern int thunk_FUN_106431c0(...);
extern int thunk_FUN_10648010(...);
extern int thunk_FUN_1064d7a0(...);
extern int thunk_FUN_1065a700(...);
extern int thunk_FUN_10681b80(...);
extern int thunk_FUN_10682380(...);
extern int thunk_FUN_106823f0(...);
extern int thunk_FUN_1068cc80(...);
extern int thunk_FUN_1068cf40(...);
extern int thunk_FUN_1068d4b0(...);
extern int thunk_FUN_106912f0(...);
extern int thunk_FUN_10695a20(...);
extern int thunk_FUN_10699fb0(...);
extern int thunk_FUN_106a3130(...);
extern int thunk_FUN_106a4110(...);
extern int thunk_FUN_106a48e0(...);
extern int thunk_FUN_106a4c50(...);
extern int thunk_FUN_106a9bb0(...);
extern int thunk_FUN_106aa5c0(...);
extern int thunk_FUN_106aa870(...);
extern int thunk_FUN_106aabe0(...);
extern int thunk_FUN_106aaea0(...);
extern int thunk_FUN_106ab040(...);
extern int thunk_FUN_106ab5b0(...);
extern int thunk_FUN_106ab7b0(...);
extern int thunk_FUN_106ab850(...);
extern int thunk_FUN_106ab920(...);
extern int thunk_FUN_106aec80(...);
extern int thunk_FUN_106b1170(...);
extern int thunk_FUN_106c9300(...);
extern int thunk_FUN_106cf140(...);
extern int thunk_FUN_106d1a70(...);
extern int thunk_FUN_106d64c0(...);
extern int thunk_FUN_106d6de0(...);
extern int thunk_FUN_106d91c0(...);
extern int thunk_FUN_106d9220(...);
extern int thunk_FUN_106d9270(...);
extern int thunk_FUN_106d9340(...);
extern int thunk_FUN_106d93a0(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106dbf00(...);
extern int thunk_FUN_106dc530(...);
extern int thunk_FUN_106dfa20(...);
extern int thunk_FUN_106e05a0(...);
extern int thunk_FUN_106e0790(...);
extern int thunk_FUN_106e09f0(...);
extern int thunk_FUN_106e1600(...);
extern int thunk_FUN_106e7650(...);
extern int thunk_FUN_106e76e0(...);
extern int thunk_FUN_10723bc0(...);
extern int thunk_FUN_10723ea0(...);
extern int thunk_FUN_107931b0(...);
extern int thunk_FUN_10793550(...);
extern int thunk_FUN_107bcdc0(...);
extern int thunk_FUN_108249b0(...);
extern int thunk_FUN_1082d6b0(...);
extern int thunk_FUN_1082df70(...);
extern int thunk_FUN_1083d0b0(...);
extern int thunk_FUN_1083d1a0(...);
extern int thunk_FUN_1083fac0(...);
extern int thunk_FUN_1086c3e0(...);
extern int thunk_FUN_1086f2f0(...);
extern int thunk_FUN_10882500(...);
extern int thunk_FUN_108c41c0(...);
extern int thunk_FUN_108eeb60(...);
extern int thunk_FUN_10939420(...);
extern int thunk_FUN_1098def0(...);
extern int thunk_FUN_1098e120(...);
extern int thunk_FUN_109e1620(...);
extern int thunk_FUN_10a12a30(...);
extern int thunk_FUN_10a4cd70(...);
extern int thunk_FUN_10a4cf70(...);
extern int thunk_FUN_10a76ed0(...);
extern int thunk_FUN_10af43b0(...);
extern int thunk_FUN_10af47d0(...);
extern int thunk_FUN_10b03530(...);
extern int thunk_FUN_10b03580(...);
extern int thunk_FUN_10b715a0(...);
extern int thunk_FUN_10b75c90(...);
extern int thunk_FUN_10b88380(...);
extern int thunk_FUN_10b8b660(...);
extern int thunk_FUN_10b8e250(...);
extern int thunk_FUN_10b8f140(...);
extern int thunk_FUN_10b91160(...);
extern int thunk_FUN_10b95f10(...);
extern int thunk_FUN_10b961a0(...);
extern int thunk_FUN_10b98a00(...);
extern int thunk_FUN_10b98d60(...);
extern int thunk_FUN_10b9bfd0(...);
extern int thunk_FUN_10b9e930(...);
extern int thunk_FUN_10ba0bf0(...);
extern int thunk_FUN_10ba0e70(...);
extern int thunk_FUN_10ba31f0(...);
extern int thunk_FUN_10ba3340(...);
extern int thunk_FUN_10ba6fd0(...);
extern int thunk_FUN_10baeb40(...);
extern int thunk_FUN_10bba8f0(...);
extern int thunk_FUN_10bbaa30(...);
extern int thunk_FUN_10bc8860(...);
extern int thunk_FUN_10bc8b30(...);
extern int thunk_FUN_10bcad90(...);
extern int thunk_FUN_10bce9a0(...);
extern int thunk_FUN_10bcee70(...);
extern int thunk_FUN_10bcf100(...);
extern int thunk_FUN_10bcf3d0(...);
extern int thunk_FUN_10bcf810(...);
extern int thunk_FUN_10bcf870(...);
extern int thunk_FUN_10bcf8e0(...);
extern int thunk_FUN_10bcf950(...);
extern int thunk_FUN_10bcf9b0(...);
extern int thunk_FUN_10bcfa10(...);
extern int thunk_FUN_10bcfa70(...);
extern int thunk_FUN_10bcfad0(...);
extern int thunk_FUN_10bd7130(...);
extern int thunk_FUN_10bde610(...);
extern int thunk_FUN_10bdeed0(...);
extern int thunk_FUN_10bdf8e0(...);
extern int thunk_FUN_10be2a00(...);
extern int thunk_FUN_10be4f80(...);
extern int thunk_FUN_10c66510(...);
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10cf35e0(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf3780(...);
extern int thunk_FUN_10cf4ae0(...);
extern int thunk_FUN_10d9e5c0(...);
extern int thunk_FUN_10d9e6c0(...);
extern int thunk_FUN_10d9e6d0(...);
extern int thunk_FUN_10da6830(...);
extern int thunk_FUN_10dd3060(...);
extern int thunk_FUN_10dd4b80(...);
extern int thunk_FUN_10de8ec0(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10e10fd0(...);
extern int thunk_FUN_10e110d0(...);
extern int thunk_FUN_10e111f0(...);
extern int thunk_FUN_10eac8a0(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eacd40(...);
extern int thunk_FUN_10eade00(...);
extern int thunk_FUN_10eae090(...);
extern int thunk_FUN_10eae160(...);
extern int thunk_FUN_10eb0c60(...);
extern int thunk_FUN_10eb0d90(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ee2ec0(...);
extern int thunk_FUN_10ee3000(...);
extern int thunk_FUN_10ee48c0(...);
extern int thunk_FUN_10ee7f70(...);
extern int thunk_FUN_10f04dc0(...);
extern int thunk_FUN_10f19cf0(...);
extern int thunk_FUN_10f56a40(...);
extern int thunk_FUN_10f7b950(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b2900(...);
extern int thunk_FUN_110c1190(...);
extern int thunk_FUN_110c1f30(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110c4430(...);
extern int thunk_FUN_110da760(...);
extern int thunk_FUN_110da8b0(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112a240(...);
extern int thunk_FUN_1112a990(...);
extern int thunk_FUN_1112ba50(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_111382a0(...);
extern int thunk_FUN_11138530(...);
extern int thunk_FUN_11138a30(...);
extern int thunk_FUN_1113ecc0(...);
extern int thunk_FUN_111a05c0(...);
extern int thunk_FUN_111a05e0(...);
extern int thunk_FUN_111a0620(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a74c0(...);
extern int thunk_FUN_111c0a80(...);
extern int thunk_FUN_111c14c0(...);
extern int thunk_FUN_111c1710(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_11206ea0(...);
extern int thunk_FUN_11207070(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11248b40(...);
extern int thunk_FUN_1124a3d0(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112505b0(...);
extern int thunk_FUN_1125b030(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_11272de0(...);
extern int thunk_FUN_11287ac0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112af500(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_00004494;
extern int DAT_00004498;
extern int DAT_0000449c;
extern int DAT_1186d2ee;
extern int DAT_1187d548;
extern int DAT_118823e4;
extern int DAT_11882ff0;
extern int DAT_118a1c50;
extern int DAT_118a906c;
extern int DAT_11910258;
extern int DAT_11e2f6dc;
extern int DAT_12126b84;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int DAT_121a22b8;
extern int DAT_121a2384;
extern int DAT_121a2d98;
extern int DAT_121a2e68;
extern int DAT_121a2e6c;
extern int DAT_121a2e70;
extern int DAT_121a2e74;
extern int DAT_121a2e78;
extern int DAT_121a2e7c;
extern int DAT_121a2e80;
extern int DAT_121a2e8c;
extern int DAT_121a2e90;
extern int DAT_121a2e98;
extern int DAT_121a35d8;
extern int DAT_121a3640;
extern int DAT_121a44e4;
extern int DAT_121a5030;
extern int g_lSCObjCount;
extern int ghidra_vftable_EtagFileParser;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RDataSource;
extern int ghidra_vftable_RDeviceDeleteAIOOp;
extern int ghidra_vftable_RDeviceGetAIOOp;
extern int ghidra_vftable_RDeviceGetRequest;
extern int ghidra_vftable_RDeviceOpRequest;
extern int ghidra_vftable_RDevicePostAIOOp;
extern int ghidra_vftable_RDevicePutAIOOp;
extern int ghidra_vftable_RFileTransferDownloadAIOOp;
extern int ghidra_vftable_RHttpDeleteNoRedirectAIOOp;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPostNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPutNoRedirectAIOOp;
extern int ghidra_vftable_SCAddProductLaunchable;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCArtworkCache;
extern int ghidra_vftable_SCBasicWizard;
extern int ghidra_vftable_SCBrowseGroupsInfo;
extern int ghidra_vftable_SCCPInfoListDataSource;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface;
extern int ghidra_vftable_SCContentProviderInfoViewHeaderDataSource;
extern int ghidra_vftable_SCEnterZIPBrowseItem;
extern int ghidra_vftable_SCFavoriteAVTMetadataCB;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCInfoTextViewDataSource;
extern int ghidra_vftable_SCInfoViewDynamicCPMenu;
extern int ghidra_vftable_SCInfoViewHelper;
extern int ghidra_vftable_SCLegacyJoinExistingWizardInitState;
extern int ghidra_vftable_SCLogoArtworkCache;
extern int ghidra_vftable_SCMusicServiceCompleteState;
extern int ghidra_vftable_SCNewWizLayer;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCPlayMenuAddDescriptor;
extern int ghidra_vftable_SCPlayMenuPlayNextDescriptor;
extern int ghidra_vftable_SCSettingsReplicatorVoiceAllowDataCollection;
extern int ghidra_vftable_SCSettingsReplicatorVoiceLocale;
extern int ghidra_vftable_SCShare;
extern int ghidra_vftable_SCSwfObjBCInternalListener;
extern int ghidra_vftable_SCSwfObjHHInternalListener;
extern int ghidra_vftable_SCSwfObjMSDiscoveryInternalListener;
extern int ghidra_vftable_SCTransparentWizard;
extern int ghidra_vftable_SCWeaklyOwnedObjectManager;
extern int ghidra_vftable_SetupFileTransferDownloadOp;
extern int ghidra_vftable_SetupFileTransferUploadOp;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_bad_cast;
extern int ghidra_vftable_std_exception;
extern int in_EAX;
extern int in_stack_00000010;
extern int in_stack_00000014;
extern int uStack00000004;
extern int uStack_10;
extern int uStack_4;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_1050ae52[];
extern undefined1 LAB_11559cf0[];
extern undefined1 LAB_1155ff10[];
extern undefined1 LAB_11561df0[];
extern undefined1 LAB_1156be00[];
extern undefined1 LAB_1156fa80[];
extern undefined1 LAB_11573e90[];
extern undefined1 LAB_1157af80[];
extern undefined1 LAB_11582a20[];
extern undefined1 LAB_11582a50[];
extern undefined1 LAB_1158a050[];
extern undefined1 LAB_1158a080[];
extern undefined1 LAB_1158b700[];
extern undefined1 LAB_1158d570[];
extern undefined1 LAB_1158d5a0[];
extern undefined1 LAB_1158f7e0[];
extern undefined1 LAB_115982d0[];
extern undefined1 LAB_11599d40[];
extern undefined1 LAB_115aab70[];
extern undefined1 LAB_115ac280[];
extern undefined1 LAB_115ac2b0[];
extern undefined1 LAB_115ac2e0[];
extern undefined1 LAB_115ac310[];
extern undefined1 LAB_115ac340[];
extern undefined1 LAB_115afab0[];
extern undefined1 LAB_115b9bf0[];
extern undefined1 LAB_115b9c20[];
extern undefined1 LAB_115c26c0[];
extern undefined1 LAB_115c26f0[];
extern undefined1 LAB_115d4bc0[];
extern undefined1 LAB_115d4bf0[];
extern undefined1 LAB_115d79e0[];
extern undefined1 LAB_115da150[];
extern undefined1 LAB_115da180[];
extern undefined1 LAB_115da1b0[];
extern undefined1 LAB_115df4f0[];
extern undefined1 LAB_115e26d0[];
extern undefined1 LAB_115e2700[];
extern undefined1 LAB_115e5840[];
extern undefined1 LAB_115e6980[];
extern undefined1 LAB_115e7820[];
extern undefined1 LAB_115e8da0[];
extern undefined1 LAB_115e8dd0[];
extern undefined1 LAB_115e8e00[];
extern undefined1 LAB_115ea720[];
extern undefined1 LAB_115ebcd0[];
extern undefined1 LAB_115fd1d0[];
extern undefined1 LAB_11603790[];
extern undefined1 LAB_116037c0[];
extern undefined1 LAB_11623d20[];
extern undefined1 LAB_11628d30[];
extern undefined1 LAB_11628d60[];
extern undefined1 LAB_11628d90[];
extern undefined1 LAB_1162e050[];
extern undefined1 LAB_116340f0[];
extern undefined1 LAB_116566b0[];
extern undefined1 LAB_1165f870[];
extern undefined1 LAB_1166f2a0[];
extern undefined1 LAB_116712f0[];
extern undefined1 LAB_116b9740[];
extern undefined1 LAB_116b9770[];
extern undefined1 LAB_116bc5e0[];
extern undefined1 LAB_116bc610[];
extern undefined1 LAB_116bc640[];
extern undefined1 LAB_116c00c0[];
extern undefined1 LAB_116c00f0[];
extern undefined1 LAB_116c0120[];
extern undefined1 LAB_116c1790[];
extern undefined1 LAB_116c30f0[];
extern int *PTR_s_AllowLaunchAfter_12119b3c;
extern int *stack0x00000008;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std { template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xout_of_range(A...);}
struct SCIndexRange { char _pad; SCIndexRange(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int op_assign(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int hash(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); template<class... A> int op_ctor(A...); template<class... A> int op_eq(A...); template<class... A> int op_lt(A...); };
typedef void *BLE;
typedef void *FV;
typedef void *K;
typedef void *LOCK;
typedef void *NFC;
typedef void *T;
typedef void *UNLOCK;
typedef void *WARNING;
typedef void *_Str;
struct AVTransportURIMetaData { char _pad; AVTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Announcements { char _pad; Announcements(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Bool { char _pad; Bool(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Connected { char _pad; Connected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CurrentTrackMetaData { char _pad; CurrentTrackMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DesiredIRRepeaterState { char _pad; DesiredIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct EnqueuedTransportURIMetaData { char _pad; EnqueuedTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct LEDFeedbackState { char _pad; LEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct LegacyTV { char _pad; LegacyTV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Not { char _pad; Not(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ObjectID { char _pad; ObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Options { char _pad; Options(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RemoteConfigured { char _pad; RemoteConfigured(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCAlarmManager { char _pad; SCAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCBTClassicConnectionManager { char _pad; SCBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAccountManager { char _pad; SCIAccountManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAlarmManager { char _pad; SCIAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIArtworkData { char _pad; SCIArtworkData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBTClassicConnectionManager { char _pad; SCIBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIController { char _pad; SCIController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIDateTimeManager { char _pad; SCIDateTimeManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIFeatureManager { char _pad; SCIFeatureManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIHouseholdManager { char _pad; SCIHouseholdManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIIndexManager { char _pad; SCIIndexManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIInfoViewHeaderDataSource { char _pad; SCIInfoViewHeaderDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISetting { char _pad; SCISetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIUserAccount { char _pad; SCIUserAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCLifecycleManager { char _pad; SCLifecycleManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSettingsReplicator { char _pad; SCSettingsReplicator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSetupEngine { char _pad; SCSetupEngine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCShareManager { char _pad; SCShareManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjBCInternalListener { char _pad; SCSwfObjBCInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjHHInternalListener { char _pad; SCSwfObjHHInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjMSDiscoveryInternalListener { char _pad; SCSwfObjMSDiscoveryInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjMSDiscoveryListener { char _pad; SCSwfObjMSDiscoveryListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Setup { char _pad; Setup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Sink { char _pad; Sink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct State { char _pad; State(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Stopping { char _pad; Stopping(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subscribe { char _pad; Subscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SwfObjMSDiscovery { char _pad; SwfObjMSDiscovery(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct TOSLinkConnection { char _pad; TOSLinkConnection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Timeout { char _pad; Timeout(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Unsubscribe { char _pad; Unsubscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered_Bulk { char _pad; int __thiscall FUN_103f6ad0(SCStr *param_2); template<class... A> int FUN_103f6ad0(A...); int __thiscall FUN_103f6b20(int *param_2); template<class... A> int FUN_103f6b20(A...); int __thiscall FUN_103fc200(byte param_2); template<class... A> int FUN_103fc200(A...); void __thiscall FUN_103fc650(char param_2); template<class... A> int FUN_103fc650(A...); void __thiscall FUN_103fc6a0(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_103fc6a0(A...); void __thiscall FUN_103fcfe0(int *param_2); template<class... A> int FUN_103fcfe0(A...); void __thiscall FUN_103ff050(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_103ff050(A...); uint __thiscall FUN_10400a40(uint param_2,int param_3); template<class... A> int FUN_10400a40(A...); void __thiscall FUN_10403340(int param_2); template<class... A> int FUN_10403340(A...); void __thiscall FUN_10403360(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10403360(A...); void __thiscall FUN_10407020(undefined4 *param_2); template<class... A> int FUN_10407020(A...); undefined4 * __thiscall FUN_1040b690(undefined4 *param_2); template<class... A> int FUN_1040b690(A...); void __thiscall FUN_1040cc10(undefined4 *param_2); template<class... A> int FUN_1040cc10(A...); int __thiscall FUN_1040fd90(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1040fd90(A...); void __thiscall FUN_104108a0(undefined4 *param_2); template<class... A> int FUN_104108a0(A...); void __thiscall FUN_104109b0(int *param_2,SCStr *param_3); template<class... A> int FUN_104109b0(A...); void __thiscall FUN_10412900(undefined4 *param_2); template<class... A> int FUN_10412900(A...); void __thiscall FUN_10412b50(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10412b50(A...); void __thiscall FUN_10412fd0(undefined4 *param_2); template<class... A> int FUN_10412fd0(A...); void __thiscall FUN_10413890(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10413890(A...); void __thiscall FUN_10414dc0(undefined4 *param_2); template<class... A> int FUN_10414dc0(A...); SCStr * __thiscall FUN_1041a580(SCStr *param_2); template<class... A> int FUN_1041a580(A...); SCStr * __thiscall FUN_1041a720(SCStr *param_2); template<class... A> int FUN_1041a720(A...); SCStr * __thiscall FUN_1041a760(SCStr *param_2); template<class... A> int FUN_1041a760(A...); void __thiscall FUN_1041d340(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_1041d340(A...); void __thiscall FUN_10422540(undefined4 *param_2); template<class... A> int FUN_10422540(A...); void __thiscall FUN_10422570(undefined4 *param_2); template<class... A> int FUN_10422570(A...); void __thiscall FUN_10422590(undefined4 *param_2); template<class... A> int FUN_10422590(A...); void __thiscall FUN_104225c0(undefined4 *param_2); template<class... A> int FUN_104225c0(A...); void __thiscall FUN_104225f0(undefined4 *param_2); template<class... A> int FUN_104225f0(A...); void __thiscall FUN_10422ac0(undefined4 *param_2); template<class... A> int FUN_10422ac0(A...); void __thiscall FUN_10422af0(undefined4 *param_2); template<class... A> int FUN_10422af0(A...); void __thiscall FUN_10422b10(undefined4 *param_2); template<class... A> int FUN_10422b10(A...); void __thiscall FUN_10422b40(undefined4 *param_2); template<class... A> int FUN_10422b40(A...); void __thiscall FUN_10422b70(undefined4 *param_2); template<class... A> int FUN_10422b70(A...); void __thiscall FUN_1042ba50(undefined4 *param_2); template<class... A> int FUN_1042ba50(A...); void __thiscall FUN_1042ba70(undefined4 *param_2); template<class... A> int FUN_1042ba70(A...); void __thiscall FUN_1042ba90(undefined4 *param_2); template<class... A> int FUN_1042ba90(A...); void __thiscall FUN_1042bab0(undefined4 *param_2); template<class... A> int FUN_1042bab0(A...); void __thiscall FUN_1042bc40(undefined4 *param_2); template<class... A> int FUN_1042bc40(A...); void __thiscall FUN_1042bc60(undefined4 *param_2); template<class... A> int FUN_1042bc60(A...); void __thiscall FUN_1042bc80(undefined4 *param_2); template<class... A> int FUN_1042bc80(A...); void __thiscall FUN_1042bca0(undefined4 *param_2); template<class... A> int FUN_1042bca0(A...); undefined4 __thiscall FUN_10436ac0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10436ac0(A...); void __thiscall FUN_1043b720(int param_2); template<class... A> int FUN_1043b720(A...); void __thiscall FUN_1043b880(int param_2); template<class... A> int FUN_1043b880(A...); undefined4 __thiscall FUN_1045aef0(undefined4 param_2); template<class... A> int FUN_1045aef0(A...); void __thiscall FUN_1045f910(undefined4 *param_2); template<class... A> int FUN_1045f910(A...); void __thiscall FUN_1045f9b0(undefined4 *param_2); template<class... A> int FUN_1045f9b0(A...); void __thiscall FUN_1046c810(undefined4 *param_2); template<class... A> int FUN_1046c810(A...); void __thiscall FUN_1046c830(undefined4 *param_2); template<class... A> int FUN_1046c830(A...); void __thiscall FUN_1046c930(undefined4 *param_2); template<class... A> int FUN_1046c930(A...); void __thiscall FUN_1046c950(undefined4 *param_2); template<class... A> int FUN_1046c950(A...); void __thiscall FUN_10479450(undefined4 *param_2); template<class... A> int FUN_10479450(A...); void __thiscall FUN_1047a230(undefined4 *param_2); template<class... A> int FUN_1047a230(A...); void __thiscall FUN_1047a250(undefined4 *param_2); template<class... A> int FUN_1047a250(A...); void __thiscall FUN_1047a270(undefined4 *param_2); template<class... A> int FUN_1047a270(A...); void __thiscall FUN_1047a290(undefined4 *param_2); template<class... A> int FUN_1047a290(A...); void __thiscall FUN_1047a2b0(undefined4 *param_2); template<class... A> int FUN_1047a2b0(A...); void __thiscall FUN_1047a2d0(undefined4 *param_2); template<class... A> int FUN_1047a2d0(A...); void __thiscall FUN_1047a5a0(undefined4 *param_2); template<class... A> int FUN_1047a5a0(A...); void __thiscall FUN_1047a5c0(undefined4 *param_2); template<class... A> int FUN_1047a5c0(A...); void __thiscall FUN_1047a5e0(undefined4 *param_2); template<class... A> int FUN_1047a5e0(A...); void __thiscall FUN_1047a600(undefined4 *param_2); template<class... A> int FUN_1047a600(A...); void __thiscall FUN_1047a620(undefined4 *param_2); template<class... A> int FUN_1047a620(A...); void __thiscall FUN_1047a640(undefined4 *param_2); template<class... A> int FUN_1047a640(A...); void __thiscall FUN_1047d4e0(undefined4 *param_2); template<class... A> int FUN_1047d4e0(A...); void __thiscall FUN_104816c0(undefined4 *param_2); template<class... A> int FUN_104816c0(A...); void __thiscall FUN_10486f40(undefined4 *param_2); template<class... A> int FUN_10486f40(A...); void __thiscall FUN_10487270(undefined4 *param_2); template<class... A> int FUN_10487270(A...); void __thiscall FUN_104881d0(undefined4 *param_2); template<class... A> int FUN_104881d0(A...); void __thiscall FUN_10488240(undefined4 *param_2); template<class... A> int FUN_10488240(A...); void __thiscall FUN_10488750(int *param_2); template<class... A> int FUN_10488750(A...); void __thiscall FUN_10496660(undefined4 *param_2); template<class... A> int FUN_10496660(A...); void __thiscall FUN_104a0fd0(int param_2); template<class... A> int FUN_104a0fd0(A...); int __thiscall FUN_104ada20(byte param_2); template<class... A> int FUN_104ada20(A...); void __thiscall FUN_104adb70(undefined4 *param_2); template<class... A> int FUN_104adb70(A...); void __thiscall FUN_104adbb0(undefined4 *param_2); template<class... A> int FUN_104adbb0(A...); void __thiscall FUN_104adbe0(undefined4 *param_2); template<class... A> int FUN_104adbe0(A...); void __thiscall FUN_104add60(char param_2); template<class... A> int FUN_104add60(A...); void __thiscall FUN_104ade60(undefined4 *param_2,ushort *param_3); template<class... A> int FUN_104ade60(A...); void __thiscall FUN_104adfb0(undefined4 *param_2); template<class... A> int FUN_104adfb0(A...); void __thiscall FUN_104adff0(undefined4 *param_2); template<class... A> int FUN_104adff0(A...); void __thiscall FUN_104ae020(undefined4 *param_2); template<class... A> int FUN_104ae020(A...); void __thiscall FUN_104b8d90(undefined4 *param_2); template<class... A> int FUN_104b8d90(A...); void __thiscall FUN_104b8e70(undefined4 *param_2); template<class... A> int FUN_104b8e70(A...); void __thiscall FUN_104b8e90(undefined4 *param_2); template<class... A> int FUN_104b8e90(A...); void __thiscall FUN_104b91b0(undefined4 *param_2); template<class... A> int FUN_104b91b0(A...); void __thiscall FUN_104b9200(undefined4 *param_2); template<class... A> int FUN_104b9200(A...); void __thiscall FUN_104b9220(undefined4 *param_2); template<class... A> int FUN_104b9220(A...); void __thiscall FUN_104bcb00(uint param_2); template<class... A> int FUN_104bcb00(A...); void __thiscall FUN_104bdde0(undefined4 *param_2); template<class... A> int FUN_104bdde0(A...); void __thiscall FUN_104bde60(undefined4 *param_2); template<class... A> int FUN_104bde60(A...); void __thiscall FUN_104c9d30(undefined4 *param_2); template<class... A> int FUN_104c9d30(A...); void __thiscall FUN_104c9db0(undefined4 *param_2); template<class... A> int FUN_104c9db0(A...); undefined4 * __thiscall FUN_104d5550(byte param_2); template<class... A> int FUN_104d5550(A...); int __thiscall FUN_104d6310(uint param_2); template<class... A> int FUN_104d6310(A...); int __thiscall FUN_104d6600(uint param_2); template<class... A> int FUN_104d6600(A...); void __thiscall FUN_104d6e20(undefined4 *param_2); template<class... A> int FUN_104d6e20(A...); void __thiscall FUN_104d7e00(undefined4 *param_2); template<class... A> int FUN_104d7e00(A...); void __thiscall FUN_104d7ed0(undefined4 *param_2); template<class... A> int FUN_104d7ed0(A...); void __thiscall FUN_104d8330(undefined4 param_2); template<class... A> int FUN_104d8330(A...); void __thiscall FUN_104d8370(undefined4 param_2); template<class... A> int FUN_104d8370(A...); undefined4 __thiscall FUN_104d8c80(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_104d8c80(A...); void __thiscall FUN_104d9d40(undefined4 *param_2); template<class... A> int FUN_104d9d40(A...); void __thiscall FUN_104d9e10(int param_2); template<class... A> int FUN_104d9e10(A...); undefined4 __thiscall FUN_104dacb0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104dacb0(A...); undefined4 __thiscall FUN_104daf30(undefined4 param_2); template<class... A> int FUN_104daf30(A...); undefined4 __thiscall FUN_104db380(undefined4 param_2); template<class... A> int FUN_104db380(A...); undefined4 __thiscall FUN_104dcfc0(SCIndexRange *param_2); template<class... A> int FUN_104dcfc0(A...); undefined4 * __thiscall FUN_104ddc30(undefined4 param_2); template<class... A> int FUN_104ddc30(A...); undefined4 * __thiscall FUN_104ddfd0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104ddfd0(A...); void __thiscall FUN_104dfa90(int *param_2); template<class... A> int FUN_104dfa90(A...); int __thiscall FUN_104e0430(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104e0430(A...); int __thiscall FUN_104e0470(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104e0470(A...); int __thiscall FUN_104e04b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_104e04b0(A...); void __thiscall FUN_104e1d40(undefined4 *param_2); template<class... A> int FUN_104e1d40(A...); void __thiscall FUN_104e1d90(undefined4 *param_2); template<class... A> int FUN_104e1d90(A...); int * __thiscall FUN_104e4750(char param_2); template<class... A> int FUN_104e4750(A...); undefined4 * __thiscall FUN_104e4f50(byte param_2); template<class... A> int FUN_104e4f50(A...); int __thiscall FUN_104ea530(int param_2); template<class... A> int FUN_104ea530(A...); void __thiscall FUN_104ec340(int param_2); template<class... A> int FUN_104ec340(A...); void __thiscall FUN_104eca70(undefined4 *param_2); template<class... A> int FUN_104eca70(A...); void __thiscall FUN_104ecac0(undefined4 *param_2); template<class... A> int FUN_104ecac0(A...); int __thiscall FUN_104f8b50(SCStr *param_2); template<class... A> int FUN_104f8b50(A...); void __thiscall FUN_104f97a0(undefined4 *param_2); template<class... A> int FUN_104f97a0(A...); void __thiscall FUN_104ff720(undefined4 *param_2); template<class... A> int FUN_104ff720(A...); undefined4 * __thiscall FUN_10504b30(byte param_2); template<class... A> int FUN_10504b30(A...); undefined4 * __thiscall FUN_10504c00(byte param_2); template<class... A> int FUN_10504c00(A...); undefined4 __thiscall FUN_10505060(byte param_2); template<class... A> int FUN_10505060(A...); undefined4 * __thiscall FUN_105050a0(byte param_2); template<class... A> int FUN_105050a0(A...); undefined4 __thiscall FUN_10505190(byte param_2); template<class... A> int FUN_10505190(A...); undefined4 __thiscall FUN_10505370(byte param_2); template<class... A> int FUN_10505370(A...); void __thiscall FUN_10505d30(void); template<class... A> int FUN_10505d30(A...); void __thiscall FUN_10505d70(void); template<class... A> int FUN_10505d70(A...); undefined4 * __thiscall FUN_105095e0(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_105095e0(A...); void __thiscall FUN_1050ae30(int param_2); template<class... A> int FUN_1050ae30(A...); undefined4 * __thiscall FUN_10510c40(byte param_2); template<class... A> int FUN_10510c40(A...); void __thiscall FUN_10510d60(undefined4 *param_2); template<class... A> int FUN_10510d60(A...); void __thiscall FUN_10510db0(void); template<class... A> int FUN_10510db0(A...); SCStr * __thiscall FUN_10513950(SCStr *param_2,undefined4 param_3); template<class... A> int FUN_10513950(A...); SCStr * __thiscall FUN_10513990(SCStr *param_2); template<class... A> int FUN_10513990(A...); undefined4 * __thiscall FUN_10515050(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_10515050(A...); undefined4 __thiscall FUN_10533c20(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10533c20(A...); bool __thiscall FUN_10534e40(int param_2); template<class... A> int FUN_10534e40(A...); undefined4 __thiscall FUN_10535630(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10535630(A...); undefined4 __thiscall FUN_10535770(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10535770(A...); undefined4 __thiscall FUN_105357c0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105357c0(A...); undefined4 __thiscall FUN_105361f0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105361f0(A...); undefined4 __thiscall FUN_10536220(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10536220(A...); undefined4 __thiscall FUN_10541b60(SCStr *param_2); template<class... A> int FUN_10541b60(A...); void __thiscall FUN_1054af60(int param_2,int param_3); template<class... A> int FUN_1054af60(A...); void __thiscall FUN_1054b5b0(undefined4 param_2,undefined8 param_3); template<class... A> int FUN_1054b5b0(A...); int __thiscall FUN_1054e1f0(SCStr *param_2); template<class... A> int FUN_1054e1f0(A...); void __thiscall FUN_1054ea60(undefined4 *param_2); template<class... A> int FUN_1054ea60(A...); void __thiscall FUN_105564a0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105564a0(A...); void __thiscall FUN_10556c40(undefined4 *param_2); template<class... A> int FUN_10556c40(A...); undefined4 * __thiscall FUN_1055a910(byte param_2); template<class... A> int FUN_1055a910(A...); undefined4 __thiscall FUN_10566db0(int param_2); template<class... A> int FUN_10566db0(A...); SCStr * __thiscall FUN_10574e60(SCStr *param_2); template<class... A> int FUN_10574e60(A...); void __thiscall FUN_10576160(int *param_2); template<class... A> int FUN_10576160(A...); void __thiscall FUN_1057d590(void); template<class... A> int FUN_1057d590(A...); bool __thiscall FUN_10585890(undefined4 param_2); template<class... A> int FUN_10585890(A...); undefined4 __thiscall FUN_10585f20(undefined4 param_2); template<class... A> int FUN_10585f20(A...); int __thiscall FUN_1058ec70(int param_2); template<class... A> int FUN_1058ec70(A...); undefined4 __thiscall FUN_10590f60(undefined4 param_2); template<class... A> int FUN_10590f60(A...); undefined4 __thiscall FUN_10590f80(undefined4 param_2); template<class... A> int FUN_10590f80(A...); void __thiscall FUN_105917c0(undefined4 param_2); template<class... A> int FUN_105917c0(A...); void __thiscall FUN_10592e90(undefined4 param_2); template<class... A> int FUN_10592e90(A...); int __thiscall FUN_10593dd0(SCStr *param_2); template<class... A> int FUN_10593dd0(A...); int __thiscall FUN_1059b720(uint *param_2); template<class... A> int FUN_1059b720(A...); int __thiscall FUN_1059f160(int *param_2); template<class... A> int FUN_1059f160(A...); undefined4 * __thiscall FUN_1059ff10(undefined4 param_2); template<class... A> int FUN_1059ff10(A...); undefined4 * __thiscall FUN_1059ff40(undefined4 param_2); template<class... A> int FUN_1059ff40(A...); undefined4 __thiscall FUN_105a0cb0(byte param_2); template<class... A> int FUN_105a0cb0(A...); int __thiscall FUN_105a5510(int *param_2); template<class... A> int FUN_105a5510(A...); int __thiscall FUN_105a5550(uint *param_2); template<class... A> int FUN_105a5550(A...); int __thiscall FUN_105a5590(SCStr *param_2); template<class... A> int FUN_105a5590(A...); int __thiscall FUN_105a55e0(SCStr *param_2); template<class... A> int FUN_105a55e0(A...); void __thiscall FUN_105a9ed0(undefined4 param_2); template<class... A> int FUN_105a9ed0(A...); int __thiscall FUN_105b27c0(byte param_2); template<class... A> int FUN_105b27c0(A...); int __thiscall FUN_105b2810(byte param_2); template<class... A> int FUN_105b2810(A...); void __thiscall FUN_105b29a0(undefined4 *param_2); template<class... A> int FUN_105b29a0(A...); void __thiscall FUN_105b2a80(char param_2); template<class... A> int FUN_105b2a80(A...); void __thiscall FUN_105b2b30(char param_2); template<class... A> int FUN_105b2b30(A...); void __thiscall FUN_105b2b80(undefined4 *param_2); template<class... A> int FUN_105b2b80(A...); void __thiscall FUN_105b2cd0(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_105b2cd0(A...); void __thiscall FUN_105b2dd0(undefined4 *param_2); template<class... A> int FUN_105b2dd0(A...); void __thiscall FUN_105b3420(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_105b3420(A...); void __thiscall FUN_105b6ce0(undefined4 param_2); template<class... A> int FUN_105b6ce0(A...); void __thiscall FUN_105b77f0(undefined4 *param_2); template<class... A> int FUN_105b77f0(A...); void __thiscall FUN_105b7840(undefined4 *param_2); template<class... A> int FUN_105b7840(A...); void __thiscall FUN_105b7910(int *param_2,SCStr *param_3); template<class... A> int FUN_105b7910(A...); undefined4 * __thiscall FUN_105baa10(byte param_2); template<class... A> int FUN_105baa10(A...); int __thiscall FUN_105bd300(undefined4 param_2); template<class... A> int FUN_105bd300(A...); void __thiscall FUN_105c04a0(undefined4 *param_2); template<class... A> int FUN_105c04a0(A...); void __thiscall FUN_105c04f0(undefined4 *param_2); template<class... A> int FUN_105c04f0(A...); undefined4 __thiscall FUN_105c2d80(void *param_2,uint param_3); template<class... A> int FUN_105c2d80(A...); undefined4 __thiscall FUN_105e74e0(undefined4 param_2); template<class... A> int FUN_105e74e0(A...); undefined4 __thiscall FUN_105e7510(undefined4 param_2); template<class... A> int FUN_105e7510(A...); undefined4 * __thiscall FUN_105ef430(undefined4 *param_2); template<class... A> int FUN_105ef430(A...); undefined4 __thiscall FUN_105f0340(byte param_2); template<class... A> int FUN_105f0340(A...); int __thiscall FUN_105f03f0(byte param_2); template<class... A> int FUN_105f03f0(A...); undefined4 * __thiscall FUN_105f07f0(undefined4 *param_2); template<class... A> int FUN_105f07f0(A...); void __thiscall FUN_105f08c0(undefined4 *param_2); template<class... A> int FUN_105f08c0(A...); void __thiscall FUN_105f0b80(undefined4 *param_2); template<class... A> int FUN_105f0b80(A...); void __thiscall FUN_105f0ba0(undefined4 *param_2); template<class... A> int FUN_105f0ba0(A...); void __thiscall FUN_105f0e90(char param_2); template<class... A> int FUN_105f0e90(A...); void __thiscall FUN_105f0f80(char param_2); template<class... A> int FUN_105f0f80(A...); bool __thiscall FUN_105f1590(undefined4 *param_2); template<class... A> int FUN_105f1590(A...); void __thiscall FUN_105f1e80(undefined4 *param_2); template<class... A> int FUN_105f1e80(A...); void __thiscall FUN_105f1ef0(undefined4 *param_2); template<class... A> int FUN_105f1ef0(A...); void __thiscall FUN_105f1f50(undefined4 *param_2); template<class... A> int FUN_105f1f50(A...); void __thiscall FUN_105f1f70(undefined4 *param_2); template<class... A> int FUN_105f1f70(A...); undefined4 * __thiscall FUN_10601bc0(byte param_2); template<class... A> int FUN_10601bc0(A...); undefined4 * __thiscall FUN_10601c00(byte param_2); template<class... A> int FUN_10601c00(A...); int __thiscall FUN_10605020(undefined4 param_2); template<class... A> int FUN_10605020(A...); int __thiscall FUN_10605060(undefined4 param_2); template<class... A> int FUN_10605060(A...); int __thiscall FUN_106050a0(undefined4 param_2); template<class... A> int FUN_106050a0(A...); int __thiscall FUN_10608110(undefined4 param_2); template<class... A> int FUN_10608110(A...); int __thiscall FUN_10608160(undefined4 param_2); template<class... A> int FUN_10608160(A...); int __thiscall FUN_106081b0(undefined4 param_2); template<class... A> int FUN_106081b0(A...); void __thiscall FUN_1065a4d0(int param_2); template<class... A> int FUN_1065a4d0(A...); void __thiscall FUN_1065a6a0(undefined4 *param_2); template<class... A> int FUN_1065a6a0(A...); void __thiscall FUN_1065a6c0(undefined4 *param_2); template<class... A> int FUN_1065a6c0(A...); void __thiscall FUN_1065a6e0(undefined4 *param_2); template<class... A> int FUN_1065a6e0(A...); void __thiscall FUN_1065ac80(undefined4 *param_2); template<class... A> int FUN_1065ac80(A...); void __thiscall FUN_1065aca0(undefined4 *param_2); template<class... A> int FUN_1065aca0(A...); void __thiscall FUN_1065acc0(undefined4 *param_2); template<class... A> int FUN_1065acc0(A...); void __thiscall FUN_1067f9b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1067f9b0(A...); int __thiscall FUN_10682040(SCStr *param_2); template<class... A> int FUN_10682040(A...); void __thiscall FUN_10682c90(undefined4 *param_2); template<class... A> int FUN_10682c90(A...); void __thiscall FUN_10687780(undefined4 *param_2); template<class... A> int FUN_10687780(A...); undefined4 * __thiscall FUN_106885a0(int param_2); template<class... A> int FUN_106885a0(A...); int __thiscall FUN_10688e80(int param_2); template<class... A> int FUN_10688e80(A...); void __thiscall FUN_1068be50(int param_2); template<class... A> int FUN_1068be50(A...); int __thiscall FUN_1068d470(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1068d470(A...); void __thiscall FUN_10690430(undefined4 *param_2); template<class... A> int FUN_10690430(A...); void __thiscall FUN_10690480(undefined4 *param_2); template<class... A> int FUN_10690480(A...); undefined4 __thiscall FUN_106967c0(undefined4 param_2); template<class... A> int FUN_106967c0(A...); void __thiscall FUN_10696ac0(undefined4 *param_2); template<class... A> int FUN_10696ac0(A...); void __thiscall FUN_10696b10(undefined4 *param_2); template<class... A> int FUN_10696b10(A...); SCStr * __thiscall FUN_10699700(SCStr *param_2); template<class... A> int FUN_10699700(A...); void __thiscall FUN_1069d8b0(undefined4 *param_2); template<class... A> int FUN_1069d8b0(A...); void __thiscall FUN_1069dda0(undefined4 *param_2); template<class... A> int FUN_1069dda0(A...); void __thiscall FUN_1069ed80(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1069ed80(A...); void __thiscall FUN_1069edb0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1069edb0(A...); undefined4 __thiscall FUN_106a2b90(SCStr *param_2); template<class... A> int FUN_106a2b90(A...); int __thiscall FUN_106a30e0(undefined4 param_2); template<class... A> int FUN_106a30e0(A...); undefined4 * __thiscall FUN_106a40d0(int param_2); template<class... A> int FUN_106a40d0(A...); int __thiscall FUN_106a4e00(byte param_2); template<class... A> int FUN_106a4e00(A...); undefined4 * __thiscall FUN_106a4e30(byte param_2); template<class... A> int FUN_106a4e30(A...); int __thiscall FUN_106ab730(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_106ab730(A...); int __thiscall FUN_106ab770(int *param_2); template<class... A> int FUN_106ab770(A...); void __thiscall FUN_106af240(undefined4 *param_2); template<class... A> int FUN_106af240(A...); void __thiscall FUN_106af2d0(undefined4 *param_2); template<class... A> int FUN_106af2d0(A...); void __thiscall FUN_106af320(undefined4 *param_2); template<class... A> int FUN_106af320(A...); void __thiscall FUN_106af6d0(int *param_2,SCStr *param_3); template<class... A> int FUN_106af6d0(A...); undefined4 * __thiscall FUN_106b1130(undefined4 *param_2); template<class... A> int FUN_106b1130(A...); undefined4 * __thiscall FUN_106b2380(undefined4 param_2); template<class... A> int FUN_106b2380(A...); int __thiscall FUN_106b6be0(byte param_2); template<class... A> int FUN_106b6be0(A...); void __thiscall FUN_106b89d0(undefined4 *param_2); template<class... A> int FUN_106b89d0(A...); void __thiscall FUN_106b89f0(undefined4 *param_2); template<class... A> int FUN_106b89f0(A...); void __thiscall FUN_106b8a40(undefined4 param_2); template<class... A> int FUN_106b8a40(A...); void __thiscall FUN_106b8ac0(char param_2); template<class... A> int FUN_106b8ac0(A...); void __thiscall FUN_106b8d40(undefined4 *param_2); template<class... A> int FUN_106b8d40(A...); bool __thiscall FUN_106b8d70(undefined4 *param_2); template<class... A> int FUN_106b8d70(A...); void __thiscall FUN_106ba600(undefined4 *param_2); template<class... A> int FUN_106ba600(A...); void __thiscall FUN_106ba620(undefined4 *param_2); template<class... A> int FUN_106ba620(A...); void __thiscall FUN_106ba670(int *param_2); template<class... A> int FUN_106ba670(A...); undefined4 __thiscall FUN_106c3cd0(undefined4 param_2); template<class... A> int FUN_106c3cd0(A...); void __thiscall FUN_106cc6c0(SCStr *param_2); template<class... A> int FUN_106cc6c0(A...); void __thiscall FUN_106cc710(undefined4 *param_2); template<class... A> int FUN_106cc710(A...); void __thiscall FUN_106cc760(undefined4 *param_2); template<class... A> int FUN_106cc760(A...); void __thiscall FUN_106cc7b0(undefined4 *param_2); template<class... A> int FUN_106cc7b0(A...); void __thiscall FUN_106cc800(undefined4 param_2); template<class... A> int FUN_106cc800(A...); int __thiscall FUN_106d1a20(SCStr *param_2); template<class... A> int FUN_106d1a20(A...); void __thiscall FUN_106d3760(undefined4 *param_2); template<class... A> int FUN_106d3760(A...); void __thiscall FUN_106d3780(undefined4 *param_2); template<class... A> int FUN_106d3780(A...); void __thiscall FUN_106d37a0(undefined4 *param_2); template<class... A> int FUN_106d37a0(A...); void __thiscall FUN_106d42c0(undefined4 *param_2); template<class... A> int FUN_106d42c0(A...); void __thiscall FUN_106d42e0(undefined4 *param_2); template<class... A> int FUN_106d42e0(A...); void __thiscall FUN_106d4300(undefined4 *param_2); template<class... A> int FUN_106d4300(A...); undefined4 __thiscall FUN_106d5d20(undefined4 param_2); template<class... A> int FUN_106d5d20(A...); void __thiscall FUN_106d68b0(int param_2); template<class... A> int FUN_106d68b0(A...); undefined4 * __thiscall FUN_106d8310(int *param_2); template<class... A> int FUN_106d8310(A...); void __thiscall FUN_106d90d0(undefined4 param_2); template<class... A> int FUN_106d90d0(A...); int __thiscall FUN_106d92c0(uint *param_2); template<class... A> int FUN_106d92c0(A...); int __thiscall FUN_106d9300(uint *param_2); template<class... A> int FUN_106d9300(A...); int * __thiscall FUN_106dacd0(byte param_2); template<class... A> int FUN_106dacd0(A...); void __thiscall FUN_106e1100(undefined4 *param_2); template<class... A> int FUN_106e1100(A...); undefined4 * __thiscall FUN_106e5e30(byte param_2); template<class... A> int FUN_106e5e30(A...); int __thiscall FUN_106e7ac0(undefined4 param_2); template<class... A> int FUN_106e7ac0(A...); int __thiscall FUN_106e8b80(undefined4 param_2); template<class... A> int FUN_106e8b80(A...); void __thiscall FUN_106f6ba0(undefined4 *param_2); template<class... A> int FUN_106f6ba0(A...); void __thiscall FUN_1072e190(int *param_2); template<class... A> int FUN_1072e190(A...); undefined4 __thiscall FUN_107bca20(undefined4 param_2); template<class... A> int FUN_107bca20(A...); int * __thiscall FUN_10827fe0(SCStr *param_2); template<class... A> int FUN_10827fe0(A...); void __thiscall FUN_1083e500(undefined4 param_2); template<class... A> int FUN_1083e500(A...); void __thiscall FUN_10848bd0(undefined4 *param_2); template<class... A> int FUN_10848bd0(A...); void __thiscall FUN_10848cf0(undefined4 *param_2); template<class... A> int FUN_10848cf0(A...); void __thiscall FUN_108b4730(uint param_2); template<class... A> int FUN_108b4730(A...); void __thiscall FUN_108c6e80(char param_2); template<class... A> int FUN_108c6e80(A...); undefined4 __thiscall FUN_10971200(byte param_2); template<class... A> int FUN_10971200(A...); void __thiscall FUN_109a66c0(undefined4 *param_2); template<class... A> int FUN_109a66c0(A...); undefined4 __thiscall FUN_10a08b50(undefined4 param_2); template<class... A> int FUN_10a08b50(A...); undefined4 __thiscall FUN_10a08b80(undefined4 param_2); template<class... A> int FUN_10a08b80(A...); int __thiscall FUN_10a129e0(SCStr *param_2); template<class... A> int FUN_10a129e0(A...); void __thiscall FUN_10a23870(int param_2); template<class... A> int FUN_10a23870(A...); void __thiscall FUN_10a4d9f0(undefined4 *param_2); template<class... A> int FUN_10a4d9f0(A...); void __thiscall FUN_10a4da40(undefined4 *param_2); template<class... A> int FUN_10a4da40(A...); void __thiscall FUN_10a642d0(undefined4 *param_2); template<class... A> int FUN_10a642d0(A...); void __thiscall FUN_10a64320(undefined4 *param_2); template<class... A> int FUN_10a64320(A...); void __thiscall FUN_10a779a0(int *param_2); template<class... A> int FUN_10a779a0(A...); undefined4 * __thiscall FUN_10a7d640(undefined4 param_2); template<class... A> int FUN_10a7d640(A...); undefined4 * __thiscall FUN_10b0e6a0(byte param_2); template<class... A> int FUN_10b0e6a0(A...); void __thiscall FUN_10b10630(short param_2); template<class... A> int FUN_10b10630(A...); undefined4 * __thiscall FUN_10b22ff0(undefined4 *param_2); template<class... A> int FUN_10b22ff0(A...); undefined4 __thiscall FUN_10b48570(undefined4 param_2); template<class... A> int FUN_10b48570(A...); undefined4 * __thiscall FUN_10b589f0(undefined4 param_2); template<class... A> int FUN_10b589f0(A...); SCStr * __thiscall FUN_10b6ff10(SCStr *param_2); template<class... A> int FUN_10b6ff10(A...); undefined4 * __thiscall FUN_10b7b430(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10b7b430(A...); undefined4 __thiscall FUN_10b7e7e0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10b7e7e0(A...); SCStr * __thiscall FUN_10b81cb0(SCStr *param_2); template<class... A> int FUN_10b81cb0(A...); undefined4 * __thiscall FUN_10b88a20(byte param_2); template<class... A> int FUN_10b88a20(A...); undefined4 * __thiscall FUN_10b88a60(byte param_2); template<class... A> int FUN_10b88a60(A...); undefined4 * __thiscall FUN_10b88aa0(byte param_2); template<class... A> int FUN_10b88aa0(A...); undefined4 * __thiscall FUN_10b88ae0(byte param_2); template<class... A> int FUN_10b88ae0(A...); undefined4 * __thiscall FUN_10b88e90(byte param_2); template<class... A> int FUN_10b88e90(A...); void __thiscall FUN_10b8e970(undefined4 param_2); template<class... A> int FUN_10b8e970(A...); undefined4 * __thiscall FUN_10b90770(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10b90770(A...); undefined4 * __thiscall FUN_10b907c0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10b907c0(A...); void __thiscall FUN_10b937b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10b937b0(A...); undefined4 * __thiscall FUN_10b9a030(byte param_2); template<class... A> int FUN_10b9a030(A...); void __thiscall FUN_10b9d980(void *param_2,size_t param_3); template<class... A> int FUN_10b9d980(A...); void __thiscall FUN_10b9d9c0(void *param_2,size_t param_3); template<class... A> int FUN_10b9d9c0(A...); SCStr * __thiscall FUN_10b9ddf0(SCStr *param_2); template<class... A> int FUN_10b9ddf0(A...); SCStr * __thiscall FUN_10b9de20(SCStr *param_2); template<class... A> int FUN_10b9de20(A...); void __thiscall FUN_10b9e1f0(undefined4 param_2); template<class... A> int FUN_10b9e1f0(A...); undefined4 __thiscall FUN_10ba0860(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10ba0860(A...); void __thiscall FUN_10ba17b0(int param_2); template<class... A> int FUN_10ba17b0(A...); void __thiscall FUN_10ba1800(int param_2); template<class... A> int FUN_10ba1800(A...); void __thiscall FUN_10ba1a60(int param_2); template<class... A> int FUN_10ba1a60(A...); int __thiscall FUN_10ba3300(int *param_2); template<class... A> int FUN_10ba3300(A...); int __thiscall FUN_10ba8180(byte param_2); template<class... A> int FUN_10ba8180(A...); void __thiscall FUN_10ba86b0(undefined4 *param_2); template<class... A> int FUN_10ba86b0(A...); void __thiscall FUN_10ba8790(char param_2); template<class... A> int FUN_10ba8790(A...); void __thiscall FUN_10ba8840(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_10ba8840(A...); void __thiscall FUN_10ba9fd0(undefined4 *param_2); template<class... A> int FUN_10ba9fd0(A...); void __thiscall FUN_10baa820(int param_2); template<class... A> int FUN_10baa820(A...); void __thiscall FUN_10baa860(int param_2); template<class... A> int FUN_10baa860(A...); void __thiscall FUN_10bab320(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10bab320(A...); undefined4 __thiscall FUN_10bb4330(undefined4 param_2); template<class... A> int FUN_10bb4330(A...); void __thiscall FUN_10bb6b30(int param_2); template<class... A> int FUN_10bb6b30(A...); int __thiscall FUN_10bc6fe0(byte param_2); template<class... A> int FUN_10bc6fe0(A...); void __thiscall FUN_10bc7290(undefined4 *param_2); template<class... A> int FUN_10bc7290(A...); void __thiscall FUN_10bc7390(char param_2); template<class... A> int FUN_10bc7390(A...); void __thiscall FUN_10bc7450(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_10bc7450(A...); void __thiscall FUN_10bc7530(undefined4 *param_2); template<class... A> int FUN_10bc7530(A...); void __thiscall FUN_10bc79f0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10bc79f0(A...); SCStr * __thiscall FUN_10bc81e0(SCStr *param_2); template<class... A> int FUN_10bc81e0(A...); void __thiscall FUN_10bc9060(int param_2); template<class... A> int FUN_10bc9060(A...); void __thiscall FUN_10bced50(undefined4 param_2); template<class... A> int FUN_10bced50(A...); int __thiscall FUN_10bcf5a0(uint *param_2); template<class... A> int FUN_10bcf5a0(A...); int __thiscall FUN_10bcf5e0(SCStr *param_2); template<class... A> int FUN_10bcf5e0(A...); int __thiscall FUN_10bcf630(SCStr *param_2); template<class... A> int FUN_10bcf630(A...); int __thiscall FUN_10bcf680(SCStr *param_2); template<class... A> int FUN_10bcf680(A...); int __thiscall FUN_10bcf6d0(int *param_2); template<class... A> int FUN_10bcf6d0(A...); int __thiscall FUN_10bcf710(int *param_2); template<class... A> int FUN_10bcf710(A...); int __thiscall FUN_10bcf750(int *param_2); template<class... A> int FUN_10bcf750(A...); int __thiscall FUN_10bcf790(int *param_2); template<class... A> int FUN_10bcf790(A...); int __thiscall FUN_10bcf7d0(int *param_2); template<class... A> int FUN_10bcf7d0(A...); void __thiscall FUN_10bd27a0(undefined4 *param_2); template<class... A> int FUN_10bd27a0(A...); undefined4 __thiscall FUN_10bd8ff0(byte param_2); template<class... A> int FUN_10bd8ff0(A...); undefined4 * __thiscall FUN_10bd91d0(byte param_2); template<class... A> int FUN_10bd91d0(A...); void __thiscall FUN_10bd9600(int param_2); template<class... A> int FUN_10bd9600(A...); undefined4 __thiscall FUN_10be6cf0(int param_2); template<class... A> int FUN_10be6cf0(A...); void __thiscall FUN_10be9e80(undefined4 *param_2); template<class... A> int FUN_10be9e80(A...); undefined4 __thiscall FUN_10bee4a0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10bee4a0(A...); undefined4 __thiscall FUN_10bee5b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10bee5b0(A...); };
using namespace std;
undefined4 * __fastcall FUN_103f8480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_103f8480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_103f84c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_103f84c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_103faa80(int *param_1);
extern void __fastcall FUN_103faa80(...);
void __fastcall FUN_103faab0(int *param_1);
extern void __fastcall FUN_103faab0(...);
void __fastcall FUN_103faae0(int *param_1);
extern void __fastcall FUN_103faae0(...);
void __fastcall FUN_103fab10(int *param_1);
extern void __fastcall FUN_103fab10(...);
void __fastcall FUN_103fab40(int *param_1);
extern void __fastcall FUN_103fab40(...);
void __fastcall FUN_103fac00(undefined4 *param_1);
extern void __fastcall FUN_103fac00(...);
void __fastcall FUN_103fad90(int *param_1);
extern void __fastcall FUN_103fad90(...);
void __fastcall FUN_103fadc0(int *param_1);
extern void __fastcall FUN_103fadc0(...);
void __fastcall FUN_103fadf0(int *param_1);
extern void __fastcall FUN_103fadf0(...);
void __fastcall FUN_103fae20(int *param_1);
extern void __fastcall FUN_103fae20(...);
void __fastcall FUN_103fae50(int *param_1);
extern void __fastcall FUN_103fae50(...);
int * __fastcall FUN_103fb580(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_103fb580(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_103fb5b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_103fb5b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_103fb5e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_103fb5e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_103fb610(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_103fb610(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_103fd310(int *param_1);
extern void __fastcall FUN_103fd310(...);
void __fastcall FUN_103fd340(int *param_1);
extern void __fastcall FUN_103fd340(...);
void __fastcall FUN_103fd370(int *param_1);
extern void __fastcall FUN_103fd370(...);
void __fastcall FUN_103fd3a0(int *param_1);
extern void __fastcall FUN_103fd3a0(...);
void __fastcall FUN_103fd3d0(int *param_1);
extern void __fastcall FUN_103fd3d0(...);
void FUN_103fee70(void);
extern void FUN_103fee70(...);
undefined4 __fastcall FUN_10400a90(int param_1);
extern undefined4 __fastcall FUN_10400a90(...);
uint __fastcall FUN_10400ad0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_10400ad0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104017b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104017b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10401800(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10401800(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104038b0(int param_1);
extern void __fastcall FUN_104038b0(...);
void __stdcall FUN_10403b40(int param_1);
void __stdcall FUN_10403b40(int param_1);
void __stdcall FUN_10403b80(int param_1);
void __stdcall FUN_10403b80(int param_1);
undefined4 * __fastcall FUN_10407500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10407500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10407eb0(int *param_1);
extern void __fastcall FUN_10407eb0(...);
undefined4 FUN_10408c60(undefined4 param_1,SCStr *param_2);
extern undefined4 FUN_10408c60(...);
undefined4 FUN_10408ca0(undefined4 param_1,SCStr *param_2,undefined4 param_3);
extern undefined4 FUN_10408ca0(...);
int __fastcall FUN_10409ef0(int param_1);
extern int __fastcall FUN_10409ef0(...);
void __stdcall FUN_1040a120(int param_1,int param_2);
void __stdcall FUN_1040a120(int param_1,int param_2);
undefined4 FUN_1040bfa0(undefined4 param_1,SCStr *param_2);
extern undefined4 FUN_1040bfa0(...);
int __fastcall FUN_1040df70(int param_1);
extern int __fastcall FUN_1040df70(...);
undefined4 * __fastcall FUN_10411480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10411480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104119f0(int *param_1);
extern void __fastcall FUN_104119f0(...);
void __fastcall FUN_10411ca0(int *param_1);
extern void __fastcall FUN_10411ca0(...);
int __stdcall FUN_10411ff0(undefined4 param_1);
int __stdcall FUN_10411ff0(undefined4 param_1);
void __fastcall FUN_10412ba0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
void __fastcall FUN_10412ba0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
void __fastcall FUN_104131d0(int *param_1);
extern void __fastcall FUN_104131d0(...);
int __fastcall FUN_10414320(int param_1);
extern int __fastcall FUN_10414320(...);
void __stdcall FUN_10415bd0(int param_1);
void __stdcall FUN_10415bd0(int param_1);
undefined1 __fastcall FUN_1041ca20(int param_1);
extern undefined1 __fastcall FUN_1041ca20(...);
void __stdcall FUN_1041d660(int param_1);
void __stdcall FUN_1041d660(int param_1);
void __stdcall FUN_1041d680(int param_1);
void __stdcall FUN_1041d680(int param_1);
void __fastcall FUN_1041fb10(int *param_1);
extern void __fastcall FUN_1041fb10(...);
void __fastcall FUN_1041fb40(int *param_1);
extern void __fastcall FUN_1041fb40(...);
void __fastcall FUN_1041fb70(int *param_1);
extern void __fastcall FUN_1041fb70(...);
void __fastcall FUN_1041fba0(int *param_1);
extern void __fastcall FUN_1041fba0(...);
void __fastcall FUN_1041fbd0(int *param_1);
extern void __fastcall FUN_1041fbd0(...);
void __fastcall FUN_1041fc00(int *param_1);
extern void __fastcall FUN_1041fc00(...);
void __fastcall FUN_1041fc30(int *param_1);
extern void __fastcall FUN_1041fc30(...);
void __fastcall FUN_1041fc60(int *param_1);
extern void __fastcall FUN_1041fc60(...);
void __stdcall FUN_10422740(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_10422740(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_10422cf0(int *param_1);
extern void __fastcall FUN_10422cf0(...);
void __fastcall FUN_10422d20(int *param_1);
extern void __fastcall FUN_10422d20(...);
void __fastcall FUN_10422d50(int *param_1);
extern void __fastcall FUN_10422d50(...);
void __fastcall FUN_10422d80(int *param_1);
extern void __fastcall FUN_10422d80(...);
void __fastcall FUN_1042a730(int *param_1);
extern void __fastcall FUN_1042a730(...);
void __fastcall FUN_1042a790(int *param_1);
extern void __fastcall FUN_1042a790(...);
void __fastcall FUN_1042a7c0(int *param_1);
extern void __fastcall FUN_1042a7c0(...);
void __stdcall FUN_1042bb60(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1042bb60(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1042bba0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1042bba0(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_1042bd10(int *param_1);
extern void __fastcall FUN_1042bd10(...);
void __stdcall FUN_1042cdd0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1042cdd0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1042ce00(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1042ce00(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1042ce90(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1042ce90(undefined4 param_1,undefined4 param_2);
undefined4 * __fastcall FUN_10433550(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10433550(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10433ba0(int *param_1);
extern void __fastcall FUN_10433ba0(...);
short __fastcall FUN_10436b10(int param_1);
extern short __fastcall FUN_10436b10(...);
int __fastcall FUN_10436cb0(int param_1);
extern int __fastcall FUN_10436cb0(...);
void __fastcall FUN_10437a40(int param_1);
extern void __fastcall FUN_10437a40(...);
uint __fastcall FUN_10437a70(int param_1);
extern uint __fastcall FUN_10437a70(...);
uint __fastcall FUN_10437b40(int param_1);
extern uint __fastcall FUN_10437b40(...);
void __stdcall FUN_104396d0(int param_1);
void __stdcall FUN_104396d0(int param_1);
void __fastcall FUN_1043a7d0(int *param_1);
extern void __fastcall FUN_1043a7d0(...);
void __fastcall FUN_1043a800(int *param_1);
extern void __fastcall FUN_1043a800(...);
int * __fastcall FUN_1043aa40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_1043aa40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1043ae30(int *param_1);
extern void __fastcall FUN_1043ae30(...);
void __stdcall FUN_1043d490(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1043d490(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_1043d7d0(int param_1);
extern void __fastcall FUN_1043d7d0(...);
void __fastcall FUN_1043d810(int param_1);
extern void __fastcall FUN_1043d810(...);
void __fastcall FUN_104420e0(int param_1);
extern void __fastcall FUN_104420e0(...);
void __fastcall FUN_10442130(int param_1);
extern void __fastcall FUN_10442130(...);
void __fastcall FUN_10443a10(int *param_1);
extern void __fastcall FUN_10443a10(...);
void __fastcall FUN_10443ab0(int *param_1);
extern void __fastcall FUN_10443ab0(...);
void __fastcall FUN_10444730(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10444730(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104447e0(int *param_1);
extern void __fastcall FUN_104447e0(...);
void __stdcall FUN_1044e3e0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1044e3e0(undefined4 param_1,undefined4 param_2);
undefined1 FUN_10454f00(SCStr *param_1);
extern undefined1 FUN_10454f00(...);
void __stdcall FUN_10454f40(unsigned int recovered_unused_stack_0);
void __stdcall FUN_10454f40(unsigned int recovered_unused_stack_0);
void __stdcall FUN_104551b0(unsigned int recovered_unused_stack_0);
void __stdcall FUN_104551b0(unsigned int recovered_unused_stack_0);
int __fastcall FUN_10459500(int param_1);
extern int __fastcall FUN_10459500(...);
undefined1 FUN_10459810(SCStr *param_1);
extern undefined1 FUN_10459810(...);
void __stdcall FUN_1045f950(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_1045f950(undefined4 *param_1,undefined4 param_2);
void __fastcall FUN_10462090(int *param_1);
extern void __fastcall FUN_10462090(...);
void __fastcall FUN_104620f0(int *param_1);
extern void __fastcall FUN_104620f0(...);
void __fastcall FUN_10462120(int *param_1);
extern void __fastcall FUN_10462120(...);
int * __fastcall FUN_104625c0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_104625c0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_10462c50(unsigned int recovered_unused_stack_0);
void __stdcall FUN_10462c50(unsigned int recovered_unused_stack_0);
void __fastcall FUN_10462d20(int *param_1);
extern void __fastcall FUN_10462d20(...);
void __fastcall FUN_10463900(int param_1);
extern void __fastcall FUN_10463900(...);
void __stdcall FUN_10468aa0(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_10468aa0(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_1046b5c0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1046b5c0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1046b5f0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1046b5f0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1046c660(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_1046c660(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_1046c890(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_1046c890(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_1046c8e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_1046c8e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void FUN_1046d370(void);
extern void FUN_1046d370(...);
void __stdcall FUN_1046f590(unsigned int recovered_unused_stack_0);
void __stdcall FUN_1046f590(unsigned int recovered_unused_stack_0);
void FUN_1046f5b0(void);
extern void FUN_1046f5b0(...);
void FUN_10470050(void);
extern void FUN_10470050(...);
void FUN_104715b0(void);
extern void FUN_104715b0(...);
void __fastcall FUN_10472990(int *param_1);
extern void __fastcall FUN_10472990(...);
void __fastcall FUN_104729f0(int *param_1);
extern void __fastcall FUN_104729f0(...);
void __fastcall FUN_10472a90(int *param_1);
extern void __fastcall FUN_10472a90(...);
void __fastcall FUN_104732f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104732f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104733a0(int *param_1);
extern void __fastcall FUN_104733a0(...);
void __fastcall FUN_104757b0(int *param_1);
extern void __fastcall FUN_104757b0(...);
void __fastcall FUN_10475850(int *param_1);
extern void __fastcall FUN_10475850(...);
void __fastcall FUN_10476240(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10476240(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10476310(int *param_1);
extern void __fastcall FUN_10476310(...);
void FUN_10478940(void);
extern void FUN_10478940(...);
void __stdcall FUN_1047a480(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1047a480(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1047a4d0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1047a4d0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1047c1c0(int param_1,int param_2);
void __stdcall FUN_1047c1c0(int param_1,int param_2);
void __stdcall FUN_1047c210(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_1047c210(undefined4 param_1,SCStr *param_2);
void __fastcall FUN_10484cc0(int *param_1);
extern void __fastcall FUN_10484cc0(...);
void __fastcall FUN_10484d20(int *param_1);
extern void __fastcall FUN_10484d20(...);
void __fastcall FUN_10484d50(int *param_1);
extern void __fastcall FUN_10484d50(...);
void __fastcall FUN_10484d80(int *param_1);
extern void __fastcall FUN_10484d80(...);
void __fastcall FUN_10484db0(int *param_1);
extern void __fastcall FUN_10484db0(...);
void __fastcall FUN_10484de0(int *param_1);
extern void __fastcall FUN_10484de0(...);
void __fastcall FUN_104852e0(int *param_1);
extern void __fastcall FUN_104852e0(...);
void __fastcall FUN_10485310(int *param_1);
extern void __fastcall FUN_10485310(...);
void __fastcall FUN_10485340(int *param_1);
extern void __fastcall FUN_10485340(...);
void __fastcall FUN_10485370(int *param_1);
extern void __fastcall FUN_10485370(...);
void __fastcall FUN_104853a0(int *param_1);
extern void __fastcall FUN_104853a0(...);
void __fastcall FUN_10487ad0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10487ad0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10487af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10487af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10487c00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10487c00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10487d00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10487d00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_10487dc0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_10487dc0(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_10488460(int *param_1);
extern void __fastcall FUN_10488460(...);
void __fastcall FUN_10488490(int *param_1);
extern void __fastcall FUN_10488490(...);
void __fastcall FUN_104884c0(int *param_1);
extern void __fastcall FUN_104884c0(...);
void __fastcall FUN_104884f0(int *param_1);
extern void __fastcall FUN_104884f0(...);
void __fastcall FUN_10488520(int *param_1);
extern void __fastcall FUN_10488520(...);
undefined1 FUN_10495570(SCStr *param_1);
extern undefined1 FUN_10495570(...);
undefined4 __fastcall FUN_10496b30(int param_1);
extern undefined4 __fastcall FUN_10496b30(...);
undefined4 __fastcall FUN_10496b60(int param_1);
extern undefined4 __fastcall FUN_10496b60(...);
void FUN_1049cc20(void);
extern void FUN_1049cc20(...);
void __fastcall FUN_1049f230(int *param_1);
extern void __fastcall FUN_1049f230(...);
void __fastcall FUN_1049f2d0(int *param_1);
extern void __fastcall FUN_1049f2d0(...);
void __fastcall FUN_104a09f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104a09f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104a0aa0(int *param_1);
extern void __fastcall FUN_104a0aa0(...);
void __stdcall FUN_104a1010(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104a1010(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104a1050(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104a1050(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104a1090(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104a1090(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104a10d0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104a10d0(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_104a1fa0(int param_1);
extern void __fastcall FUN_104a1fa0(...);
void __fastcall FUN_104a2140(int param_1);
extern void __fastcall FUN_104a2140(...);
void __fastcall FUN_104a87a0(int *param_1);
extern void __fastcall FUN_104a87a0(...);
void __stdcall FUN_104a9040(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104a9040(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104aa940(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104aa940(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_104ad3f0(int *param_1);
extern void __fastcall FUN_104ad3f0(...);
void __fastcall FUN_104ad420(int *param_1);
extern void __fastcall FUN_104ad420(...);
void __fastcall FUN_104ad450(int *param_1);
extern void __fastcall FUN_104ad450(...);
void __fastcall FUN_104ad4b0(int *param_1);
extern void __fastcall FUN_104ad4b0(...);
void __fastcall FUN_104ad4e0(int *param_1);
extern void __fastcall FUN_104ad4e0(...);
void __fastcall FUN_104ad510(int *param_1);
extern void __fastcall FUN_104ad510(...);
int * __fastcall FUN_104ad670(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_104ad670(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_104ad6e0(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_104ad6e0(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_104addb0(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_104addb0(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_104ade00(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_104ade00(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_104ade40(undefined4 *param_1,undefined2 *param_2);
void __stdcall FUN_104ade40(undefined4 *param_1,undefined2 *param_2);
void __fastcall FUN_104ae380(int *param_1);
extern void __fastcall FUN_104ae380(...);
void __fastcall FUN_104ae3b0(int *param_1);
extern void __fastcall FUN_104ae3b0(...);
void __fastcall FUN_104ae3e0(int *param_1);
extern void __fastcall FUN_104ae3e0(...);
void FUN_104aef10(void);
extern void FUN_104aef10(...);
void __stdcall FUN_104b4360(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104b4360(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_104b85c0(int *param_1);
extern void __fastcall FUN_104b85c0(...);
void __fastcall FUN_104b85f0(int *param_1);
extern void __fastcall FUN_104b85f0(...);
void __fastcall FUN_104b8690(int *param_1);
extern void __fastcall FUN_104b8690(...);
void __fastcall FUN_104b86c0(int *param_1);
extern void __fastcall FUN_104b86c0(...);
void __stdcall FUN_104b8fe0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104b8fe0(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_104b9030(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104b9030(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104b92e0(int *param_1);
extern void __fastcall FUN_104b92e0(...);
void __fastcall FUN_104b9310(int *param_1);
extern void __fastcall FUN_104b9310(...);
void __stdcall FUN_104bcb40(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104bcb40(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104bcb70(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104bcb70(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_104bcd30(int param_1);
extern void __fastcall FUN_104bcd30(...);
void __fastcall FUN_104bcd90(int param_1);
extern void __fastcall FUN_104bcd90(...);
void __fastcall FUN_104bde20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104bde20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104c39b0(int *param_1);
extern void __fastcall FUN_104c39b0(...);
void __stdcall FUN_104c6100(int param_1,int param_2);
void __stdcall FUN_104c6100(int param_1,int param_2);
void __stdcall FUN_104c9d70(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_104c9d70(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_104cc500(int *param_1);
extern void __fastcall FUN_104cc500(...);
void __fastcall FUN_104cc560(int *param_1);
extern void __fastcall FUN_104cc560(...);
void __stdcall FUN_104d13a0(int param_1,int param_2);
void __stdcall FUN_104d13a0(int param_1,int param_2);
void __stdcall FUN_104d4000(int *param_1);
void __stdcall FUN_104d4000(int *param_1);
undefined4 * __fastcall FUN_104d5270(undefined4 *param_1);
extern undefined4 * __fastcall FUN_104d5270(...);
void __fastcall FUN_104d52e0(int *param_1);
extern void __fastcall FUN_104d52e0(...);
void __fastcall FUN_104d5490(undefined4 *param_1);
extern void __fastcall FUN_104d5490(...);
void __stdcall FUN_104d56b0(int param_1,int param_2);
void __stdcall FUN_104d56b0(int param_1,int param_2);
void __fastcall FUN_104d5ca0(int *param_1);
extern void __fastcall FUN_104d5ca0(...);
void __fastcall FUN_104d5ce0(int param_1);
extern void __fastcall FUN_104d5ce0(...);
void __stdcall FUN_104d5d20(int param_1,int param_2);
void __stdcall FUN_104d5d20(int param_1,int param_2);
void __stdcall FUN_104d8290(int param_1,int param_2);
void __stdcall FUN_104d8290(int param_1,int param_2);
undefined4 __stdcall FUN_104d9010(int param_1);
undefined4 __stdcall FUN_104d9010(int param_1);
undefined4 __stdcall FUN_104d9030(int param_1);
undefined4 __stdcall FUN_104d9030(int param_1);
undefined4 FUN_104d9780(undefined4 param_1);
extern undefined4 FUN_104d9780(...);
SCStr * __stdcall FUN_104db100(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_104db100(SCStr *param_1, unsigned int recovered_unused_stack_0);
uint __fastcall FUN_104dd520(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_104dd520(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104dd540(int param_1);
extern void __fastcall FUN_104dd540(...);
void __fastcall FUN_104ddf60(int param_1);
extern void __fastcall FUN_104ddf60(...);
void __fastcall FUN_104ddf90(int param_1);
extern void __fastcall FUN_104ddf90(...);
undefined4 * __fastcall FUN_104e2dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104e2dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104e2e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104e2e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104e2e30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104e2e30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104e3b20(int param_1);
extern void __fastcall FUN_104e3b20(...);
void __fastcall FUN_104e40d0(undefined4 *param_1);
extern void __fastcall FUN_104e40d0(...);
int __stdcall FUN_104e4970(undefined4 param_1);
int __stdcall FUN_104e4970(undefined4 param_1);
int __stdcall FUN_104e49a0(undefined4 param_1);
int __stdcall FUN_104e49a0(undefined4 param_1);
int __stdcall FUN_104e49d0(undefined4 param_1);
int __stdcall FUN_104e49d0(undefined4 param_1);
void __fastcall FUN_104e6ab0(int param_1);
extern void __fastcall FUN_104e6ab0(...);
void __fastcall FUN_104e6b80(int param_1);
extern void __fastcall FUN_104e6b80(...);
void __stdcall FUN_104e9f10(int param_1,int param_2);
void __stdcall FUN_104e9f10(int param_1,int param_2);
void __stdcall FUN_104e9f60(int param_1,int param_2);
void __stdcall FUN_104e9f60(int param_1,int param_2);
void __stdcall FUN_104ec220(SCStr *param_1, SCStr *param_2, unsigned int recovered_unused_stack_0);
void __stdcall FUN_104ec220(SCStr *param_1, SCStr *param_2, unsigned int recovered_unused_stack_0);
void __fastcall FUN_104ed650(int param_1);
extern void __fastcall FUN_104ed650(...);
int __fastcall FUN_104ee0a0(int param_1);
extern int __fastcall FUN_104ee0a0(...);
undefined4 * __fastcall FUN_104f9e70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104f9e70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104fa0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_104fa0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_104fab60(int *param_1);
extern void __fastcall FUN_104fab60(...);
void __fastcall FUN_104fabc0(int *param_1);
extern void __fastcall FUN_104fabc0(...);
int __stdcall FUN_104fb850(undefined4 param_1);
int __stdcall FUN_104fb850(undefined4 param_1);
void __stdcall FUN_104fde60(int param_1,int param_2);
void __stdcall FUN_104fde60(int param_1,int param_2);
undefined4 __stdcall FUN_104ffd30(undefined4 param_1);
undefined4 __stdcall FUN_104ffd30(undefined4 param_1);
void __stdcall FUN_10500110(undefined4 param_1,int *param_2);
void __stdcall FUN_10500110(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_10500760(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10500760(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105007a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105007a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10503240(int *param_1);
extern void __fastcall FUN_10503240(...);
void __fastcall FUN_10503690(undefined4 *param_1);
extern void __fastcall FUN_10503690(...);
void __fastcall FUN_10503780(undefined4 *param_1);
extern void __fastcall FUN_10503780(...);
void __fastcall FUN_105037c0(undefined4 *param_1);
extern void __fastcall FUN_105037c0(...);
void __fastcall FUN_10503910(undefined4 *param_1);
extern void __fastcall FUN_10503910(...);
void FUN_10503d30(void);
extern void FUN_10503d30(...);
void __fastcall FUN_10503d50(undefined4 *param_1);
extern void __fastcall FUN_10503d50(...);
void FUN_10503ef0(void);
extern void FUN_10503ef0(...);
void FUN_10504240(void);
extern void FUN_10504240(...);
void __fastcall FUN_10504260(undefined4 *param_1);
extern void __fastcall FUN_10504260(...);
void __fastcall FUN_10504370(undefined4 *param_1);
extern void __fastcall FUN_10504370(...);
undefined4 * __stdcall FUN_105056e0(undefined4 *param_1);
undefined4 * __stdcall FUN_105056e0(undefined4 *param_1);
undefined4 * __stdcall FUN_105057b0(undefined4 *param_1);
undefined4 * __stdcall FUN_105057b0(undefined4 *param_1);
undefined4 * __stdcall FUN_10505800(undefined4 *param_1);
undefined4 * __stdcall FUN_10505800(undefined4 *param_1);
int __fastcall FUN_10505b50(int *param_1);
extern int __fastcall FUN_10505b50(...);
undefined4 __fastcall FUN_105077d0(int *param_1);
extern undefined4 __fastcall FUN_105077d0(...);
uint __fastcall FUN_1050a980(int param_1);
extern uint __fastcall FUN_1050a980(...);
uint __fastcall FUN_1050a9e0(int param_1);
extern uint __fastcall FUN_1050a9e0(...);
void __fastcall FUN_1050aac0(int *param_1);
extern void __fastcall FUN_1050aac0(...);
undefined4 __fastcall FUN_1050aae0(int *param_1);
extern undefined4 __fastcall FUN_1050aae0(...);
void __fastcall FUN_1050adb0(int *param_1);
extern void __fastcall FUN_1050adb0(...);
void __fastcall FUN_1050adf0(int *param_1);
extern void __fastcall FUN_1050adf0(...);
void __stdcall FUN_1050e590(int param_1);
void __stdcall FUN_1050e590(int param_1);
void __fastcall FUN_1050fcf0(undefined4 *param_1);
extern void __fastcall FUN_1050fcf0(...);
void __fastcall FUN_1050ff30(int *param_1);
extern void __fastcall FUN_1050ff30(...);
void __fastcall FUN_1050ff90(int *param_1);
extern void __fastcall FUN_1050ff90(...);
void __fastcall FUN_105106c0(undefined4 *param_1);
extern void __fastcall FUN_105106c0(...);
int __fastcall FUN_10510cb0(int *param_1);
extern int __fastcall FUN_10510cb0(...);
undefined4 __fastcall FUN_10513930(int param_1);
extern undefined4 __fastcall FUN_10513930(...);
undefined4 __fastcall FUN_10513af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10513af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10514040(int param_1);
extern undefined4 __fastcall FUN_10514040(...);
undefined4 __fastcall FUN_10514290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10514290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_105142b0(int param_1);
extern undefined4 __fastcall FUN_105142b0(...);
undefined4 __fastcall FUN_10515150(int param_1);
extern undefined4 __fastcall FUN_10515150(...);
undefined4 __fastcall FUN_105169a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_105169a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10516e40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10516e40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10517030(int param_1);
extern undefined4 __fastcall FUN_10517030(...);
undefined4 __fastcall FUN_10517060(int param_1);
extern undefined4 __fastcall FUN_10517060(...);
void __fastcall FUN_105171a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105171a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105171d0(int param_1);
extern void __fastcall FUN_105171d0(...);
undefined4 __fastcall FUN_1051a170(int param_1);
extern undefined4 __fastcall FUN_1051a170(...);
uint __fastcall FUN_1051a4a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_1051a4a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_1051a4c0(int param_1);
extern uint __fastcall FUN_1051a4c0(...);
void __stdcall FUN_1051b480(int param_1);
void __stdcall FUN_1051b480(int param_1);
void FUN_1051d480(void);
extern void FUN_1051d480(...);
undefined4 __fastcall FUN_1052dfd0(int param_1);
extern undefined4 __fastcall FUN_1052dfd0(...);
int __fastcall FUN_1052e200(int param_1);
extern int __fastcall FUN_1052e200(...);
int __fastcall FUN_1052e5b0(int param_1);
extern int __fastcall FUN_1052e5b0(...);
uint __fastcall FUN_1052e790(int *param_1);
extern uint __fastcall FUN_1052e790(...);
void __fastcall FUN_1052e820(int param_1);
extern void __fastcall FUN_1052e820(...);
void __fastcall FUN_1052e850(int param_1);
extern void __fastcall FUN_1052e850(...);
void __fastcall FUN_1052e8b0(int param_1);
extern void __fastcall FUN_1052e8b0(...);
undefined4 __fastcall FUN_1052e8f0(int *param_1);
extern undefined4 __fastcall FUN_1052e8f0(...);
undefined4 * __fastcall FUN_1052e9f0(undefined4 param_1);
extern undefined4 * __fastcall FUN_1052e9f0(...);
undefined4 * __fastcall FUN_1052fd10(int param_1);
extern undefined4 * __fastcall FUN_1052fd10(...);
undefined4 * __fastcall FUN_1052fe50(int param_1);
extern undefined4 * __fastcall FUN_1052fe50(...);
undefined4 * __fastcall FUN_10531c00(int param_1);
extern undefined4 * __fastcall FUN_10531c00(...);
undefined4 * __fastcall FUN_10531dd0(int param_1);
extern undefined4 * __fastcall FUN_10531dd0(...);
undefined4 * __fastcall FUN_10531e10(int param_1);
extern undefined4 * __fastcall FUN_10531e10(...);
undefined4 * __fastcall FUN_105322f0(int param_1);
extern undefined4 * __fastcall FUN_105322f0(...);
undefined4 __stdcall FUN_105327f0(undefined4 param_1);
undefined4 __stdcall FUN_105327f0(undefined4 param_1);
void FUN_105330f0(void);
extern void FUN_105330f0(...);
void FUN_10533120(void);
extern void FUN_10533120(...);
void FUN_10533150(void);
extern void FUN_10533150(...);
SCStr * FUN_10534670(SCStr *param_1,int param_2);
extern SCStr * FUN_10534670(...);
undefined4 FUN_105358a0(void);
extern undefined4 FUN_105358a0(...);
undefined4 __stdcall FUN_10535a50(undefined4 param_1);
undefined4 __stdcall FUN_10535a50(undefined4 param_1);
void __fastcall FUN_1053dbc0(int param_1);
extern void __fastcall FUN_1053dbc0(...);
undefined4 __fastcall FUN_1053dc00(int param_1);
extern undefined4 __fastcall FUN_1053dc00(...);
undefined4 __fastcall FUN_1053e3e0(int param_1);
extern undefined4 __fastcall FUN_1053e3e0(...);
void __fastcall FUN_1053f5b0(int param_1);
extern void __fastcall FUN_1053f5b0(...);
void __fastcall FUN_1053f5d0(int param_1);
extern void __fastcall FUN_1053f5d0(...);
void __fastcall FUN_1053f5f0(int param_1);
extern void __fastcall FUN_1053f5f0(...);
void __fastcall FUN_1053f620(int param_1);
extern void __fastcall FUN_1053f620(...);
void __fastcall FUN_10541030(int param_1);
extern void __fastcall FUN_10541030(...);
uint __fastcall FUN_10541090(int *param_1);
extern uint __fastcall FUN_10541090(...);
undefined4 __fastcall FUN_10541290(int param_1);
extern undefined4 __fastcall FUN_10541290(...);
undefined1 __fastcall FUN_105417f0(int param_1);
extern undefined1 __fastcall FUN_105417f0(...);
uint __fastcall FUN_10541c30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
uint __fastcall FUN_10541c30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10542ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10542ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10544a10(int param_1);
extern void __fastcall FUN_10544a10(...);
void __stdcall FUN_1054ac50(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_1054ac50(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_1054c0c0(int param_1);
void __stdcall FUN_1054c0c0(int param_1);
int __fastcall FUN_1054c100(int param_1);
extern int __fastcall FUN_1054c100(...);
int __fastcall FUN_1054c140(int param_1);
extern int __fastcall FUN_1054c140(...);
uint __fastcall FUN_1054c2a0(int *param_1);
extern uint __fastcall FUN_1054c2a0(...);
void __stdcall FUN_1054c2e0(int param_1);
void __stdcall FUN_1054c2e0(int param_1);
undefined4 * __fastcall FUN_1054eed0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1054eed0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1054fae0(int *param_1);
extern void __fastcall FUN_1054fae0(...);
void __stdcall FUN_105526b0(int param_1,int param_2);
void __stdcall FUN_105526b0(int param_1,int param_2);
void __fastcall FUN_105579d0(int param_1);
extern void __fastcall FUN_105579d0(...);
void __fastcall FUN_105597d0(int *param_1);
extern void __fastcall FUN_105597d0(...);
void __fastcall FUN_10559b30(undefined4 *param_1);
extern void __fastcall FUN_10559b30(...);
void __stdcall FUN_1055f480(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1055f480(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_1055f4b0(undefined4 param_1);
void __stdcall FUN_1055f4b0(undefined4 param_1);
void __stdcall FUN_10560090(int param_1);
void __stdcall FUN_10560090(int param_1);
void __stdcall FUN_10562a40(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10562a40(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10562a80(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10562a80(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10562b00(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10562b00(undefined4 *param_1,undefined4 param_2);
void __fastcall FUN_10566560(undefined4 *param_1);
extern void __fastcall FUN_10566560(...);
void __fastcall FUN_10566670(undefined4 *param_1);
extern void __fastcall FUN_10566670(...);
uint __fastcall FUN_10576040(int param_1);
extern uint __fastcall FUN_10576040(...);
undefined1 __fastcall FUN_1057d5b0(int param_1);
extern undefined1 __fastcall FUN_1057d5b0(...);
undefined1 __fastcall FUN_1057d600(int param_1);
extern undefined1 __fastcall FUN_1057d600(...);
undefined4 __fastcall FUN_10581980(int param_1);
extern undefined4 __fastcall FUN_10581980(...);
undefined4 __stdcall FUN_105839a0(int param_1);
undefined4 __stdcall FUN_105839a0(int param_1);
SCStr * FUN_105839d0(SCStr *param_1,int param_2,undefined4 param_3);
extern SCStr * FUN_105839d0(...);
void __fastcall FUN_10585850(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10585850(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_1058a650(int param_1);
extern undefined4 __fastcall FUN_1058a650(...);
int __fastcall FUN_10591870(int param_1);
extern int __fastcall FUN_10591870(...);
void __fastcall FUN_10591bc0(int param_1);
extern void __fastcall FUN_10591bc0(...);
void __fastcall FUN_105920b0(int param_1);
extern void __fastcall FUN_105920b0(...);
undefined4 * __fastcall FUN_10594a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10594a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105953a0(int *param_1);
extern void __fastcall FUN_105953a0(...);
void __stdcall FUN_10595f90(int param_1,int param_2);
void __stdcall FUN_10595f90(int param_1,int param_2);
void __stdcall FUN_105970f0(int param_1,int param_2);
void __stdcall FUN_105970f0(int param_1,int param_2);
void __stdcall FUN_1059b6d0(undefined4 param_1,int *param_2);
void __stdcall FUN_1059b6d0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_1059bb70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1059bb70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1059c010(int param_1);
extern void __fastcall FUN_1059c010(...);
void __fastcall FUN_1059d1e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1059d1e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_1059d2f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_1059d2f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void FUN_1059ed40(int param_1,int param_2);
extern void FUN_1059ed40(...);
void __stdcall FUN_1059f110(undefined4 param_1,int *param_2);
void __stdcall FUN_1059f110(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_1059fa40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1059fa40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1059ff80(undefined4 *param_1);
extern undefined4 * __fastcall FUN_1059ff80(...);
void __fastcall FUN_105a0150(int *param_1);
extern void __fastcall FUN_105a0150(...);
void __stdcall FUN_105a1540(int param_1,int param_2);
void __stdcall FUN_105a1540(int param_1,int param_2);
void __stdcall FUN_105a1570(int param_1,int param_2);
void __stdcall FUN_105a1570(int param_1,int param_2);
void __stdcall FUN_105a2380(int param_1,int param_2);
void __stdcall FUN_105a2380(int param_1,int param_2);
void __fastcall FUN_105a2c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105a2c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105a2ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105a2ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 FUN_105a3210(void);
extern undefined4 FUN_105a3210(...);
void __stdcall FUN_105a50c0(undefined4 param_1,int *param_2);
void __stdcall FUN_105a50c0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_105a6dc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6dc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105a6e80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105a7f00(undefined4 *param_1);
extern void __fastcall FUN_105a7f00(...);
void __fastcall FUN_105a7f30(undefined4 *param_1);
extern void __fastcall FUN_105a7f30(...);
void __fastcall FUN_105af180(int param_1);
extern void __fastcall FUN_105af180(...);
void __fastcall FUN_105b1e90(int *param_1);
extern void __fastcall FUN_105b1e90(...);
void __fastcall FUN_105b1ec0(int *param_1);
extern void __fastcall FUN_105b1ec0(...);
void __fastcall FUN_105b1f50(int *param_1);
extern void __fastcall FUN_105b1f50(...);
void __fastcall FUN_105b1f80(int *param_1);
extern void __fastcall FUN_105b1f80(...);
void __fastcall FUN_105b2f30(int *param_1);
extern void __fastcall FUN_105b2f30(...);
void __fastcall FUN_105b2f60(int *param_1);
extern void __fastcall FUN_105b2f60(...);
undefined4 __fastcall FUN_105b34b0(int param_1);
extern undefined4 __fastcall FUN_105b34b0(...);
int __fastcall FUN_105b36a0(int param_1);
extern int __fastcall FUN_105b36a0(...);
int __fastcall FUN_105b4990(int param_1);
extern int __fastcall FUN_105b4990(...);
void __fastcall FUN_105b4be0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b4be0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b4c50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b4c50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b4ca0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b4ca0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_105b4ed0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_105b4ed0(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_105b5ef0(int param_1,char param_2);
void __stdcall FUN_105b5ef0(int param_1,char param_2);
void __stdcall FUN_105b5f30(int param_1);
void __stdcall FUN_105b5f30(int param_1);
void __stdcall FUN_105b5f60(int param_1);
void __stdcall FUN_105b5f60(int param_1);
undefined4 * __fastcall FUN_105b8210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105b8210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105b8250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_105b8250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105b9b50(int *param_1);
extern void __fastcall FUN_105b9b50(...);
void __fastcall FUN_105b9be0(int *param_1);
extern void __fastcall FUN_105b9be0(...);
void __fastcall FUN_105b9c40(int param_1);
extern void __fastcall FUN_105b9c40(...);
void __fastcall FUN_105b9cd0(int *param_1);
extern void __fastcall FUN_105b9cd0(...);
void __fastcall FUN_105ba340(undefined4 *param_1);
extern void __fastcall FUN_105ba340(...);
void __fastcall FUN_105ba4a0(undefined4 *param_1);
extern void __fastcall FUN_105ba4a0(...);
void __fastcall FUN_105ba4e0(undefined4 *param_1);
extern void __fastcall FUN_105ba4e0(...);
void __stdcall FUN_105baf60(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_105baf60(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_105bba00(int param_1);
extern void __fastcall FUN_105bba00(...);
void __fastcall FUN_105bc920(int param_1);
extern void __fastcall FUN_105bc920(...);
void __fastcall FUN_105bc960(int *param_1);
extern void __fastcall FUN_105bc960(...);
void __stdcall FUN_105bcf50(int param_1,int param_2);
void __stdcall FUN_105bcf50(int param_1,int param_2);
void __stdcall FUN_105bcfa0(int param_1,int param_2);
void __stdcall FUN_105bcfa0(int param_1,int param_2);
void __stdcall FUN_105bcff0(int param_1,int param_2);
void __stdcall FUN_105bcff0(int param_1,int param_2);
void __stdcall FUN_105bd190(undefined4 param_1);
void __stdcall FUN_105bd190(undefined4 param_1);
undefined4 FUN_105bfbb0(undefined4 param_1);
extern undefined4 FUN_105bfbb0(...);
undefined4 FUN_105bfe00(void);
extern undefined4 FUN_105bfe00(...);
undefined4 FUN_105c0090(int param_1);
extern undefined4 FUN_105c0090(...);
undefined4 FUN_105c0190(undefined4 param_1);
extern undefined4 FUN_105c0190(...);
void __fastcall FUN_105c3cd0(int *param_1);
extern void __fastcall FUN_105c3cd0(...);
void __fastcall FUN_105c3d30(int *param_1);
extern void __fastcall FUN_105c3d30(...);
void __fastcall FUN_105c3d90(int *param_1);
extern void __fastcall FUN_105c3d90(...);
void __fastcall FUN_105c3df0(int *param_1);
extern void __fastcall FUN_105c3df0(...);
void __fastcall FUN_105c3e50(int *param_1);
extern void __fastcall FUN_105c3e50(...);
void __stdcall FUN_105c93d0(undefined4 *param_1);
void __stdcall FUN_105c93d0(undefined4 *param_1);
void __stdcall FUN_105c9420(undefined4 *param_1);
void __stdcall FUN_105c9420(undefined4 *param_1);
void __fastcall FUN_105d25e0(undefined4 *param_1);
extern void __fastcall FUN_105d25e0(...);
void __fastcall FUN_105d2bf0(int *param_1);
extern void __fastcall FUN_105d2bf0(...);
void __stdcall FUN_105d6eb0(unsigned int recovered_unused_stack_0);
void __stdcall FUN_105d6eb0(unsigned int recovered_unused_stack_0);
void __stdcall FUN_105dc0c0(int param_1,int param_2);
void __stdcall FUN_105dc0c0(int param_1,int param_2);
void __fastcall FUN_105e3f70(int param_1);
extern void __fastcall FUN_105e3f70(...);
void __fastcall FUN_105ee900(int *param_1);
extern void __fastcall FUN_105ee900(...);
void __fastcall FUN_105eefa0(int *param_1);
extern void __fastcall FUN_105eefa0(...);
void __fastcall FUN_105eefd0(int *param_1);
extern void __fastcall FUN_105eefd0(...);
void __fastcall FUN_105ef000(int *param_1);
extern void __fastcall FUN_105ef000(...);
void __fastcall FUN_105f15d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105f15d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105f1d10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_105f1d10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void FUN_105f2a40(int param_1,int param_2);
extern void FUN_105f2a40(...);
void __fastcall FUN_105febd0(undefined4 *param_1);
extern void __fastcall FUN_105febd0(...);
void __fastcall FUN_105fec00(undefined4 *param_1);
extern void __fastcall FUN_105fec00(...);
void __fastcall FUN_105ff440(int *param_1);
extern void __fastcall FUN_105ff440(...);
void __fastcall FUN_105ff4a0(int *param_1);
extern void __fastcall FUN_105ff4a0(...);
void __fastcall FUN_105ff810(int *param_1);
extern void __fastcall FUN_105ff810(...);
void __fastcall FUN_105ff840(undefined4 *param_1);
extern void __fastcall FUN_105ff840(...);
void __fastcall FUN_105ff870(undefined4 *param_1);
extern void __fastcall FUN_105ff870(...);
void __fastcall FUN_105ff8a0(undefined4 *param_1);
extern void __fastcall FUN_105ff8a0(...);
void __fastcall FUN_105ff8f0(int *param_1);
extern void __fastcall FUN_105ff8f0(...);
void FUN_10600240(void);
extern void FUN_10600240(...);
void __stdcall FUN_106042e0(int param_1,int param_2);
void __stdcall FUN_106042e0(int param_1,int param_2);
void __stdcall FUN_10604310(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10604310(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10604340(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10604340(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10604370(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10604370(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_10607f70(int param_1,int param_2);
void __stdcall FUN_10607f70(int param_1,int param_2);
void __stdcall FUN_10607fc0(int param_1,int param_2);
void __stdcall FUN_10607fc0(int param_1,int param_2);
void __stdcall FUN_10608010(int param_1,int param_2);
void __stdcall FUN_10608010(int param_1,int param_2);
void __stdcall FUN_10608060(int param_1,int param_2);
void __stdcall FUN_10608060(int param_1,int param_2);
void __stdcall FUN_106080b0(int param_1,int param_2);
void __stdcall FUN_106080b0(int param_1,int param_2);
void FUN_10619af0(void);
extern void FUN_10619af0(...);
void __fastcall FUN_1062c3c0(int *param_1);
extern void __fastcall FUN_1062c3c0(...);
void __fastcall FUN_1062c420(int *param_1);
extern void __fastcall FUN_1062c420(...);
void __fastcall FUN_1062c900(int *param_1);
extern void __fastcall FUN_1062c900(...);
void FUN_1062cc10(void);
extern void FUN_1062cc10(...);
void FUN_1062cc30(void);
extern void FUN_1062cc30(...);
void FUN_1062cc70(void);
extern void FUN_1062cc70(...);
void __stdcall FUN_10633d20(int param_1,int param_2);
void __stdcall FUN_10633d20(int param_1,int param_2);
undefined4 __stdcall FUN_1063d090(undefined4 param_1);
undefined4 __stdcall FUN_1063d090(undefined4 param_1);
undefined4 * __fastcall FUN_1064d4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1064d4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1064d500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1064d500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10654e60(int *param_1);
extern void __fastcall FUN_10654e60(...);
void __fastcall FUN_10654f30(int *param_1);
extern void __fastcall FUN_10654f30(...);
void __stdcall FUN_1065a700(undefined4 *param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_1065a700(undefined4 *param_1, unsigned int recovered_unused_stack_0);
void __fastcall FUN_1065ad50(int *param_1);
extern void __fastcall FUN_1065ad50(...);
void __stdcall FUN_1065e730(int param_1,int param_2);
void __stdcall FUN_1065e730(int param_1,int param_2);
undefined4 __stdcall FUN_1066bbd0(undefined4 param_1);
undefined4 __stdcall FUN_1066bbd0(undefined4 param_1);
undefined1 __fastcall FUN_10677fe0(int param_1);
extern undefined1 __fastcall FUN_10677fe0(...);
void FUN_10678fa0(void);
extern void FUN_10678fa0(...);
void FUN_1067e860(void);
extern void FUN_1067e860(...);
void FUN_1067eaa0(void);
extern void FUN_1067eaa0(...);
undefined4 * __fastcall FUN_106830d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106830d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10683110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10683110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 FUN_10686070(SCStr *param_1);
extern undefined4 FUN_10686070(...);
void __stdcall FUN_106863b0(int param_1,int param_2);
void __stdcall FUN_106863b0(int param_1,int param_2);
undefined4 * __fastcall FUN_10687e20(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10687e20(...);
undefined4 __stdcall FUN_1068a750(undefined4 param_1,int param_2);
undefined4 __stdcall FUN_1068a750(undefined4 param_1,int param_2);
uint __fastcall FUN_1068ad60(int param_1);
extern uint __fastcall FUN_1068ad60(...);
undefined4 * __fastcall FUN_106912c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106912c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10691aa0(undefined4 param_1);
extern undefined4 __fastcall FUN_10691aa0(...);
void __fastcall FUN_10692270(int *param_1);
extern void __fastcall FUN_10692270(...);
void __fastcall FUN_106922d0(int *param_1);
extern void __fastcall FUN_106922d0(...);
void __fastcall FUN_10692350(int *param_1);
extern void __fastcall FUN_10692350(...);
void __fastcall FUN_106925e0(int *param_1);
extern void __fastcall FUN_106925e0(...);
void __stdcall FUN_10693e50(undefined4 *param_1);
void __stdcall FUN_10693e50(undefined4 *param_1);
void __fastcall FUN_106944c0(int *param_1);
extern void __fastcall FUN_106944c0(...);
void __stdcall FUN_10695460(int param_1,int param_2);
void __stdcall FUN_10695460(int param_1,int param_2);
bool FUN_106967f0(void);
extern bool FUN_106967f0(...);
undefined4 * __fastcall FUN_10699a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
undefined4 * __fastcall FUN_10699a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
undefined4 * __fastcall FUN_1069b150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1069b150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1069bf80(int *param_1);
extern void __fastcall FUN_1069bf80(...);
void __fastcall FUN_1069c160(int *param_1);
extern void __fastcall FUN_1069c160(...);
int __stdcall FUN_1069cbf0(undefined4 param_1);
int __stdcall FUN_1069cbf0(undefined4 param_1);
void __stdcall FUN_1069d9a0(undefined4 *param_1);
void __stdcall FUN_1069d9a0(undefined4 *param_1);
void __fastcall FUN_1069e110(int *param_1);
extern void __fastcall FUN_1069e110(...);
void __fastcall FUN_106a1500(int *param_1);
extern void __fastcall FUN_106a1500(...);
undefined4 * __fastcall FUN_106a3af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106a3af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106a4110(undefined4 *param_1);
extern undefined4 * __fastcall FUN_106a4110(...);
void __fastcall FUN_106a4400(int param_1);
extern void __fastcall FUN_106a4400(...);
void FUN_106a55d0(void);
extern void FUN_106a55d0(...);
undefined4 __fastcall FUN_106a7f50(int *param_1);
extern undefined4 __fastcall FUN_106a7f50(...);
undefined4 * __fastcall FUN_106b0890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106b0890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106b0930(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106b0930(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106b3510(int *param_1);
extern void __fastcall FUN_106b3510(...);
void __fastcall FUN_106b3570(int *param_1);
extern void __fastcall FUN_106b3570(...);
void __fastcall FUN_106b35d0(int *param_1);
extern void __fastcall FUN_106b35d0(...);
void __fastcall FUN_106b3670(int *param_1);
extern void __fastcall FUN_106b3670(...);
void __fastcall FUN_106b37d0(undefined4 *param_1);
extern void __fastcall FUN_106b37d0(...);
void __fastcall FUN_106b3a30(undefined4 *param_1);
extern void __fastcall FUN_106b3a30(...);
void __fastcall FUN_106b3a60(int *param_1);
extern void __fastcall FUN_106b3a60(...);
void __fastcall FUN_106b3e80(int *param_1);
extern void __fastcall FUN_106b3e80(...);
void __stdcall FUN_106b8d10(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_106b8d10(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_106b8eb0(unsigned int recovered_unused_stack_0);
void __stdcall FUN_106b8eb0(unsigned int recovered_unused_stack_0);
bool __stdcall FUN_106b8f50(undefined4 *param_1);
bool __stdcall FUN_106b8f50(undefined4 *param_1);
int FUN_106ba4a0(int param_1);
extern int FUN_106ba4a0(...);
void __fastcall FUN_106baa10(int *param_1);
extern void __fastcall FUN_106baa10(...);
void __fastcall FUN_106bd4c0(int *param_1);
extern void __fastcall FUN_106bd4c0(...);
void __fastcall FUN_106bd500(int param_1);
extern void __fastcall FUN_106bd500(...);
undefined4 FUN_106bdd60(SCStr *param_1);
extern undefined4 FUN_106bdd60(...);
undefined4 FUN_106bddb0(SCStr *param_1);
extern undefined4 FUN_106bddb0(...);
void __stdcall FUN_106be280(int param_1,int param_2);
void __stdcall FUN_106be280(int param_1,int param_2);
void __stdcall FUN_106be2d0(int param_1,int param_2);
void __stdcall FUN_106be2d0(int param_1,int param_2);
void __stdcall FUN_106be320(int param_1,int param_2);
void __stdcall FUN_106be320(int param_1,int param_2);
int FUN_106c3c90(void);
extern int FUN_106c3c90(...);
void __stdcall FUN_106ca070(undefined4 param_1);
void __stdcall FUN_106ca070(undefined4 param_1);
void __fastcall FUN_106cf000(int param_1);
extern void __fastcall FUN_106cf000(...);
void __fastcall FUN_106cf0f0(int param_1);
extern void __fastcall FUN_106cf0f0(...);
void __fastcall FUN_106d00a0(int *param_1);
extern void __fastcall FUN_106d00a0(...);
void __fastcall FUN_106d00d0(int *param_1);
extern void __fastcall FUN_106d00d0(...);
int * __fastcall FUN_106d01d0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_106d01d0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106d0460(int *param_1);
extern void __fastcall FUN_106d0460(...);
void __fastcall FUN_106d0a70(int param_1);
extern void __fastcall FUN_106d0a70(...);
undefined4 * __fastcall FUN_106d2520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d2520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106d2ab0(int *param_1);
extern void __fastcall FUN_106d2ab0(...);
void __fastcall FUN_106d38b0(int param_1);
extern void __fastcall FUN_106d38b0(...);
void __fastcall FUN_106d56a0(int param_1);
extern void __fastcall FUN_106d56a0(...);
void FUN_106d71a0(void);
extern void FUN_106d71a0(...);
void FUN_106d8da0(int *param_1,int *param_2);
extern void FUN_106d8da0(...);
void __stdcall FUN_106d9220(undefined4 param_1,int *param_2);
void __stdcall FUN_106d9220(undefined4 param_1,int *param_2);
void __stdcall FUN_106d9270(undefined4 param_1,int *param_2);
void __stdcall FUN_106d9270(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_106d9c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d9c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d9c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d9c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d9ca0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106d9ca0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106da320(int *param_1);
extern void __fastcall FUN_106da320(...);
void __fastcall FUN_106da3f0(int *param_1);
extern void __fastcall FUN_106da3f0(...);
void __fastcall FUN_106da4b0(int *param_1);
extern void __fastcall FUN_106da4b0(...);
void __fastcall FUN_106da500(int *param_1);
extern void __fastcall FUN_106da500(...);
void __fastcall FUN_106da960(int *param_1);
extern void __fastcall FUN_106da960(...);
void __stdcall FUN_106db150(int *param_1,int *param_2);
void __stdcall FUN_106db150(int *param_1,int *param_2);
void __fastcall FUN_106dba90(int *param_1);
extern void __fastcall FUN_106dba90(...);
void __stdcall FUN_106dc1a0(int param_1,int param_2);
void __stdcall FUN_106dc1a0(int param_1,int param_2);
undefined4 __stdcall FUN_106dc4e0(undefined4 param_1);
undefined4 __stdcall FUN_106dc4e0(undefined4 param_1);
undefined4 __fastcall FUN_106dc540(int param_1);
extern undefined4 __fastcall FUN_106dc540(...);
uint __fastcall FUN_106dc570(undefined4 *param_1);
extern uint __fastcall FUN_106dc570(...);
undefined4 __fastcall FUN_106dc5b0(int param_1);
extern undefined4 __fastcall FUN_106dc5b0(...);
undefined4 __fastcall FUN_106dc5f0(int param_1);
extern undefined4 __fastcall FUN_106dc5f0(...);
undefined4 * __fastcall FUN_106dde40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106dde40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106dde80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106dde80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_106e09f0(undefined4 param_1,int *param_2);
void __stdcall FUN_106e09f0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_106e27a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_106e27a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_106e4b20(undefined4 *param_1);
extern void __fastcall FUN_106e4b20(...);
void __fastcall FUN_106e4e30(int *param_1);
extern void __fastcall FUN_106e4e30(...);
void __fastcall FUN_106e4e90(int *param_1);
extern void __fastcall FUN_106e4e90(...);
void __fastcall FUN_106e5050(undefined4 *param_1);
extern void __fastcall FUN_106e5050(...);
void __stdcall FUN_106e7130(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_106e7130(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_106e8ac0(int param_1,int param_2);
void __stdcall FUN_106e8ac0(int param_1,int param_2);
void __stdcall FUN_106e8b10(int param_1,int param_2);
void __stdcall FUN_106e8b10(int param_1,int param_2);
void __fastcall FUN_106f8490(int *param_1);
extern void __fastcall FUN_106f8490(...);
void __fastcall FUN_106fe7a0(int *param_1);
extern void __fastcall FUN_106fe7a0(...);
void __fastcall FUN_107038d0(int *param_1);
extern void __fastcall FUN_107038d0(...);
void __fastcall FUN_1070a270(int *param_1);
extern void __fastcall FUN_1070a270(...);
void __fastcall FUN_1070a2d0(int *param_1);
extern void __fastcall FUN_1070a2d0(...);
void __fastcall FUN_1070a330(int *param_1);
extern void __fastcall FUN_1070a330(...);
void __fastcall FUN_10712fc0(int *param_1);
extern void __fastcall FUN_10712fc0(...);
void __fastcall FUN_107196f0(int *param_1);
extern void __fastcall FUN_107196f0(...);
void __fastcall FUN_10723790(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10723790(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_10723bc0(undefined4 param_1,int *param_2);
void __stdcall FUN_10723bc0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_10726c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10726c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10726c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10726c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1072e140(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1072e140(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int __stdcall FUN_1072e7e0(int *param_1);
int __stdcall FUN_1072e7e0(int *param_1);
void FUN_107491c0(void);
extern void FUN_107491c0(...);
void FUN_10758160(void);
extern void FUN_10758160(...);
void FUN_10758190(void);
extern void FUN_10758190(...);
void __fastcall FUN_10761000(int *param_1);
extern void __fastcall FUN_10761000(...);
void FUN_10771db0(void);
extern void FUN_10771db0(...);
void __fastcall FUN_10773f70(int *param_1);
extern void __fastcall FUN_10773f70(...);
void FUN_10774410(void);
extern void FUN_10774410(...);
bool FUN_10781c60(void);
extern bool FUN_10781c60(...);
undefined4 * __fastcall FUN_10788330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10788330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1078e080(int *param_1);
extern void __fastcall FUN_1078e080(...);
void __fastcall FUN_1078e0e0(int *param_1);
extern void __fastcall FUN_1078e0e0(...);
undefined4 __fastcall FUN_10799320(int param_1);
extern undefined4 __fastcall FUN_10799320(...);
undefined4 __fastcall FUN_107bca40(int param_1);
extern undefined4 __fastcall FUN_107bca40(...);
bool FUN_107bcdc0(void);
extern bool FUN_107bcdc0(...);
void __stdcall FUN_107cc800(int param_1);
void __stdcall FUN_107cc800(int param_1);
void FUN_107ec120(void);
extern void FUN_107ec120(...);
void FUN_107ec190(void);
extern void FUN_107ec190(...);
void FUN_107ec200(void);
extern void FUN_107ec200(...);
undefined4 __stdcall FUN_10823350(undefined4 param_1);
undefined4 __stdcall FUN_10823350(undefined4 param_1);
undefined4 __stdcall FUN_10823370(undefined4 param_1);
undefined4 __stdcall FUN_10823370(undefined4 param_1);
undefined4 __stdcall FUN_10823390(undefined4 param_1);
undefined4 __stdcall FUN_10823390(undefined4 param_1);
undefined4 __stdcall FUN_10823870(undefined4 param_1);
undefined4 __stdcall FUN_10823870(undefined4 param_1);
undefined4 __stdcall FUN_10823bc0(undefined4 param_1);
undefined4 __stdcall FUN_10823bc0(undefined4 param_1);
undefined4 * __fastcall FUN_10829cb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10829cb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_1082b810(undefined4 *param_1);
extern void __fastcall FUN_1082b810(...);
void __stdcall FUN_108303c0(int param_1,int param_2);
void __stdcall FUN_108303c0(int param_1,int param_2);
void FUN_10836240(void);
extern void FUN_10836240(...);
void FUN_10838510(void);
extern void FUN_10838510(...);
void FUN_108388d0(void);
extern void FUN_108388d0(...);
int __fastcall FUN_1083d1a0(int param_1);
extern int __fastcall FUN_1083d1a0(...);
void __fastcall FUN_108459b0(int *param_1);
extern void __fastcall FUN_108459b0(...);
void __fastcall FUN_10846600(undefined4 *param_1);
extern void __fastcall FUN_10846600(...);
undefined4 * __fastcall FUN_1085ff40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1085ff40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10861a40(int *param_1);
extern void __fastcall FUN_10861a40(...);
void __fastcall FUN_10861aa0(int *param_1);
extern void __fastcall FUN_10861aa0(...);
void __fastcall FUN_10861b00(int *param_1);
extern void __fastcall FUN_10861b00(...);
undefined4 __stdcall FUN_10864920(undefined4 param_1);
undefined4 __stdcall FUN_10864920(undefined4 param_1);
undefined4 __stdcall FUN_10866550(undefined4 param_1);
undefined4 __stdcall FUN_10866550(undefined4 param_1);
undefined4 __stdcall FUN_10866570(undefined4 param_1);
undefined4 __stdcall FUN_10866570(undefined4 param_1);
void __stdcall FUN_1086f2f0(undefined4 param_1,int *param_2);
void __stdcall FUN_1086f2f0(undefined4 param_1,int *param_2);
void __stdcall FUN_10877a40(int param_1,int param_2);
void __stdcall FUN_10877a40(int param_1,int param_2);
void __stdcall FUN_10877a90(int param_1,int param_2);
void __stdcall FUN_10877a90(int param_1,int param_2);
undefined4 FUN_1087e310(void);
extern undefined4 FUN_1087e310(...);
void __fastcall FUN_10881dd0(int *param_1);
extern void __fastcall FUN_10881dd0(...);
void FUN_108836f0(undefined4 param_1);
extern void FUN_108836f0(...);
void FUN_1088f7f0(void);
extern void FUN_1088f7f0(...);
undefined4 __fastcall FUN_1089ce20(int param_1);
extern undefined4 __fastcall FUN_1089ce20(...);
void __fastcall FUN_108a1960(int *param_1);
extern void __fastcall FUN_108a1960(...);
void FUN_108a2300(void);
extern void FUN_108a2300(...);
bool FUN_108a9310(void);
extern bool FUN_108a9310(...);
void __fastcall FUN_108b16a0(int *param_1);
extern void __fastcall FUN_108b16a0(...);
void FUN_108b4480(void);
extern void FUN_108b4480(...);
void FUN_108b44b0(void);
extern void FUN_108b44b0(...);
undefined4 __fastcall FUN_108b6b20(int *param_1);
extern undefined4 __fastcall FUN_108b6b20(...);
void FUN_108f6cf0(void);
extern void FUN_108f6cf0(...);
void FUN_108fcfa0(void);
extern void FUN_108fcfa0(...);
void FUN_1092ed60(void);
extern void FUN_1092ed60(...);
void __fastcall FUN_1095c3d0(int *param_1);
extern void __fastcall FUN_1095c3d0(...);
void FUN_10970e90(void);
extern void FUN_10970e90(...);
void FUN_1097e9a0(void);
extern void FUN_1097e9a0(...);
void FUN_10988080(void);
extern void FUN_10988080(...);
void FUN_109887c0(void);
extern void FUN_109887c0(...);
void __fastcall FUN_10989760(int *param_1);
extern void __fastcall FUN_10989760(...);
void __stdcall FUN_1098e820(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_1098e820(undefined4 *param_1,undefined4 param_2);
undefined4 * __fastcall FUN_1098eec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1098eec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10990220(undefined4 *param_1);
extern void __fastcall FUN_10990220(...);
int FUN_109919c0(int param_1);
extern int FUN_109919c0(...);
void FUN_1099c720(void);
extern void FUN_1099c720(...);
void __stdcall FUN_109a0940(int param_1,int param_2);
void __stdcall FUN_109a0940(int param_1,int param_2);
void __fastcall FUN_109ccdb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_109ccdb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_109d9e60(int *param_1);
extern void __fastcall FUN_109d9e60(...);
void FUN_109e0650(void);
extern void FUN_109e0650(...);
void __fastcall FUN_109e3750(int *param_1);
extern void __fastcall FUN_109e3750(...);
void FUN_109ec5c0(void);
extern void FUN_109ec5c0(...);
void __fastcall FUN_109edbe0(int param_1);
extern void __fastcall FUN_109edbe0(...);
int __fastcall FUN_10a08bb0(int param_1);
extern int __fastcall FUN_10a08bb0(...);
void FUN_10a0ca70(void);
extern void FUN_10a0ca70(...);
void FUN_10a0caa0(void);
extern void FUN_10a0caa0(...);
undefined4 * __fastcall FUN_10a13420(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10a13420(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10a22230(undefined4 *param_1);
extern void __fastcall FUN_10a22230(...);
int __stdcall FUN_10a35eb0(undefined4 param_1);
int __stdcall FUN_10a35eb0(undefined4 param_1);
void __fastcall FUN_10a41700(undefined4 *param_1);
extern void __fastcall FUN_10a41700(...);
void __stdcall FUN_10a56020(int param_1,int param_2);
void __stdcall FUN_10a56020(int param_1,int param_2);
void __stdcall FUN_10a56070(int param_1,int param_2);
void __stdcall FUN_10a56070(int param_1,int param_2);
bool FUN_10a560c0(void);
extern bool FUN_10a560c0(...);
void FUN_10a711a0(void);
extern void FUN_10a711a0(...);
void __fastcall FUN_10a76ae0(int *param_1);
extern void __fastcall FUN_10a76ae0(...);
void __stdcall FUN_10a77900(int param_1,int param_2);
void __stdcall FUN_10a77900(int param_1,int param_2);
void __fastcall FUN_10a783d0(int param_1);
extern void __fastcall FUN_10a783d0(...);
void __fastcall FUN_10a78410(int *param_1);
extern void __fastcall FUN_10a78410(...);
void __stdcall FUN_10a787e0(int param_1,int param_2);
void __stdcall FUN_10a787e0(int param_1,int param_2);
void __fastcall FUN_10a92a00(undefined4 *param_1);
extern void __fastcall FUN_10a92a00(...);
void __fastcall FUN_10a92b90(int param_1);
extern void __fastcall FUN_10a92b90(...);
void FUN_10ab26b0(void);
extern void FUN_10ab26b0(...);
undefined4 * __fastcall FUN_10af55e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10af55e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10af5620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10af5620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10af69b0(undefined4 *param_1);
extern void __fastcall FUN_10af69b0(...);
int __stdcall FUN_10af8530(int *param_1);
int __stdcall FUN_10af8530(int *param_1);
int __stdcall FUN_10af8580(int *param_1);
int __stdcall FUN_10af8580(int *param_1);
void __stdcall FUN_10b03530(undefined4 param_1,int *param_2);
void __stdcall FUN_10b03530(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_10b04120(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10b04120(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 FUN_10b06540(int *param_1);
extern undefined4 FUN_10b06540(...);
void __stdcall FUN_10b06a90(int param_1,int param_2);
void __stdcall FUN_10b06a90(int param_1,int param_2);
void FUN_10b08c40(void);
extern void FUN_10b08c40(...);
void FUN_10b09740(void);
extern void FUN_10b09740(...);
void __fastcall FUN_10b0d770(undefined4 *param_1);
extern void __fastcall FUN_10b0d770(...);
void __fastcall FUN_10b0da20(undefined4 *param_1);
extern void __fastcall FUN_10b0da20(...);
int FUN_10b0f310(int param_1);
extern int FUN_10b0f310(...);
void FUN_10b1a400(void);
extern void FUN_10b1a400(...);
void FUN_10b46150(void);
extern void FUN_10b46150(...);
undefined4 * __fastcall FUN_10b5b460(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10b5b460(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void FUN_10b6bb00(void);
extern void FUN_10b6bb00(...);
void __fastcall FUN_10b6d6c0(int *param_1);
extern void __fastcall FUN_10b6d6c0(...);
void __fastcall FUN_10b6d720(int *param_1);
extern void __fastcall FUN_10b6d720(...);
undefined4 __fastcall FUN_10b6f7e0(int param_1);
extern undefined4 __fastcall FUN_10b6f7e0(...);
bool __fastcall FUN_10b71b80(int param_1);
extern bool __fastcall FUN_10b71b80(...);
undefined1 __fastcall FUN_10b71c20(int param_1);
extern undefined1 __fastcall FUN_10b71c20(...);
void __fastcall FUN_10b766b0(int param_1);
extern void __fastcall FUN_10b766b0(...);
int __stdcall FUN_10b76e80(undefined4 param_1);
int __stdcall FUN_10b76e80(undefined4 param_1);
SCStr * FUN_10b78e90(SCStr *param_1,SCStr *param_2);
extern SCStr * FUN_10b78e90(...);
int __fastcall FUN_10b79ea0(int param_1);
extern int __fastcall FUN_10b79ea0(...);
void __stdcall FUN_10b7b410(int param_1);
void __stdcall FUN_10b7b410(int param_1);
void __fastcall FUN_10b7b650(int param_1);
extern void __fastcall FUN_10b7b650(...);
void __fastcall FUN_10b7b6a0(int param_1);
extern void __fastcall FUN_10b7b6a0(...);
void __fastcall FUN_10b7d1c0(int *param_1);
extern void __fastcall FUN_10b7d1c0(...);
void __fastcall FUN_10b7d220(int *param_1);
extern void __fastcall FUN_10b7d220(...);
void __fastcall FUN_10b7d280(int *param_1);
extern void __fastcall FUN_10b7d280(...);
int __fastcall FUN_10b7e4a0(int *param_1);
extern int __fastcall FUN_10b7e4a0(...);
int __fastcall FUN_10b7e4e0(int *param_1);
extern int __fastcall FUN_10b7e4e0(...);
int __fastcall FUN_10b7e520(int *param_1);
extern int __fastcall FUN_10b7e520(...);
SCStr * __stdcall FUN_10b81cf0(SCStr *param_1);
SCStr * __stdcall FUN_10b81cf0(SCStr *param_1);
SCStr * __stdcall FUN_10b81d20(SCStr *param_1);
SCStr * __stdcall FUN_10b81d20(SCStr *param_1);
uint __fastcall FUN_10b82b50(int *param_1);
extern uint __fastcall FUN_10b82b50(...);
uint FUN_10b82bb0(void);
extern uint FUN_10b82bb0(...);
uint __fastcall FUN_10b82c00(int *param_1);
extern uint __fastcall FUN_10b82c00(...);
void __fastcall FUN_10b87a00(undefined4 *param_1);
extern void __fastcall FUN_10b87a00(...);
void __fastcall FUN_10b87a20(undefined4 *param_1);
extern void __fastcall FUN_10b87a20(...);
void __fastcall FUN_10b87a40(undefined4 *param_1);
extern void __fastcall FUN_10b87a40(...);
void __fastcall FUN_10b87a60(undefined4 *param_1);
extern void __fastcall FUN_10b87a60(...);
void __fastcall FUN_10b88200(undefined4 *param_1);
extern void __fastcall FUN_10b88200(...);
void __fastcall FUN_10b88300(undefined4 *param_1);
extern void __fastcall FUN_10b88300(...);
void __fastcall FUN_10b88350(undefined4 *param_1);
extern void __fastcall FUN_10b88350(...);
void __fastcall FUN_10b88520(undefined4 *param_1);
extern void __fastcall FUN_10b88520(...);
void __fastcall FUN_10b88620(undefined4 *param_1);
extern void __fastcall FUN_10b88620(...);
undefined4 __fastcall FUN_10b8b530(int param_1);
extern undefined4 __fastcall FUN_10b8b530(...);
undefined4 __fastcall FUN_10b8b550(int param_1);
extern undefined4 __fastcall FUN_10b8b550(...);
undefined4 __fastcall FUN_10b8b570(int param_1);
extern undefined4 __fastcall FUN_10b8b570(...);
undefined4 __fastcall FUN_10b8b590(int param_1);
extern undefined4 __fastcall FUN_10b8b590(...);
undefined4 __stdcall FUN_10b8b750(undefined4 param_1);
undefined4 __stdcall FUN_10b8b750(undefined4 param_1);
undefined4 __stdcall FUN_10b8b790(undefined4 param_1);
undefined4 __stdcall FUN_10b8b790(undefined4 param_1);
undefined4 __stdcall FUN_10b8b7d0(undefined4 param_1);
undefined4 __stdcall FUN_10b8b7d0(undefined4 param_1);
undefined4 __stdcall FUN_10b8b810(undefined4 param_1);
undefined4 __stdcall FUN_10b8b810(undefined4 param_1);
undefined4 __stdcall FUN_10b8b850(undefined4 param_1);
undefined4 __stdcall FUN_10b8b850(undefined4 param_1);
undefined4 __fastcall FUN_10b8b910(int param_1);
extern undefined4 __fastcall FUN_10b8b910(...);
undefined4 __fastcall FUN_10b8b930(int param_1);
extern undefined4 __fastcall FUN_10b8b930(...);
undefined4 __fastcall FUN_10b8b950(int param_1);
extern undefined4 __fastcall FUN_10b8b950(...);
undefined4 __fastcall FUN_10b8b970(int param_1);
extern undefined4 __fastcall FUN_10b8b970(...);
undefined4 * __fastcall FUN_10b8e520(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10b8e520(...);
undefined4 * __fastcall FUN_10b8fe40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10b8fe40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10b90ea0(int *param_1);
extern void __fastcall FUN_10b90ea0(...);
void __fastcall FUN_10b90f00(int *param_1);
extern void __fastcall FUN_10b90f00(...);
void __fastcall FUN_10b90f60(int *param_1);
extern void __fastcall FUN_10b90f60(...);
void __fastcall FUN_10b910c0(int param_1);
extern void __fastcall FUN_10b910c0(...);
int __stdcall FUN_10b91d50(undefined4 param_1);
int __stdcall FUN_10b91d50(undefined4 param_1);
void FUN_10b937e0(void);
extern void FUN_10b937e0(...);
void FUN_10b93810(void);
extern void FUN_10b93810(...);
void FUN_10b93840(void);
extern void FUN_10b93840(...);
undefined4 * __fastcall FUN_10b97330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10b97330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10b97360(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10b97360(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10b988b0(int *param_1);
extern void __fastcall FUN_10b988b0(...);
void __fastcall FUN_10b98950(int *param_1);
extern void __fastcall FUN_10b98950(...);
void __fastcall FUN_10b98bf0(int param_1);
extern void __fastcall FUN_10b98bf0(...);
void __fastcall FUN_10b98c40(int *param_1);
extern void __fastcall FUN_10b98c40(...);
void __fastcall FUN_10b98fe0(undefined4 *param_1);
extern void __fastcall FUN_10b98fe0(...);
void __fastcall FUN_10b99270(undefined4 *param_1);
extern void __fastcall FUN_10b99270(...);
int * __fastcall FUN_10b99720(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10b99720(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int __stdcall FUN_10b99850(undefined4 param_1);
int __stdcall FUN_10b99850(undefined4 param_1);
int __stdcall FUN_10b99880(undefined4 param_1);
int __stdcall FUN_10b99880(undefined4 param_1);
void __fastcall FUN_10b9b3a0(int *param_1);
extern void __fastcall FUN_10b9b3a0(...);
void __fastcall FUN_10b9c480(int param_1);
extern void __fastcall FUN_10b9c480(...);
int * __stdcall FUN_10b9c740(int *param_1, unsigned int recovered_unused_stack_0);
int * __stdcall FUN_10b9c740(int *param_1, unsigned int recovered_unused_stack_0);
undefined4 __fastcall FUN_10ba0970(int *param_1);
extern undefined4 __fastcall FUN_10ba0970(...);
undefined4 __stdcall FUN_10ba0b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 __stdcall FUN_10ba0b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 __stdcall FUN_10ba0b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 __stdcall FUN_10ba0b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __stdcall FUN_10ba31f0(undefined4 param_1,int *param_2);
void __stdcall FUN_10ba31f0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_10ba5250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10ba5250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10ba5290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10ba5290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10ba6b30(int *param_1);
extern void __fastcall FUN_10ba6b30(...);
void __fastcall FUN_10ba6c70(int *param_1);
extern void __fastcall FUN_10ba6c70(...);
void __fastcall FUN_10ba6e50(int *param_1);
extern void __fastcall FUN_10ba6e50(...);
void __fastcall FUN_10ba6ec0(int *param_1);
extern void __fastcall FUN_10ba6ec0(...);
void __stdcall FUN_10ba87e0(int param_1,int param_2);
void __stdcall FUN_10ba87e0(int param_1,int param_2);
void __fastcall FUN_10ba8810(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10ba8810(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10baa290(int *param_1);
extern void __fastcall FUN_10baa290(...);
undefined1 __fastcall FUN_10baa800(int param_1);
extern undefined1 __fastcall FUN_10baa800(...);
void __fastcall FUN_10baa980(int *param_1);
extern void __fastcall FUN_10baa980(...);
void __stdcall FUN_10bab1e0(int param_1,int param_2);
void __stdcall FUN_10bab1e0(int param_1,int param_2);
void __fastcall FUN_10bab270(int param_1);
extern void __fastcall FUN_10bab270(...);
void __fastcall FUN_10bab2a0(int param_1);
extern void __fastcall FUN_10bab2a0(...);
undefined4 __stdcall FUN_10bb24a0(undefined4 param_1,undefined4 param_2);
undefined4 __stdcall FUN_10bb24a0(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_10bb3040(int param_1);
extern void __fastcall FUN_10bb3040(...);
void __fastcall FUN_10bb3070(int param_1);
extern void __fastcall FUN_10bb3070(...);
void __stdcall FUN_10bb4690(int param_1);
void __stdcall FUN_10bb4690(int param_1);
undefined4 * __fastcall FUN_10bb5310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bb5310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10bb6fe0(int param_1);
extern void __fastcall FUN_10bb6fe0(...);
undefined4 * __fastcall FUN_10bb7170(undefined4 param_1);
extern undefined4 * __fastcall FUN_10bb7170(...);
void __stdcall FUN_10bb7a10(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_10bb7a10(undefined4 param_1,SCStr *param_2);
undefined4 __stdcall FUN_10bb7e90(undefined4 param_1);
undefined4 __stdcall FUN_10bb7e90(undefined4 param_1);
void __fastcall FUN_10bbb130(int param_1);
extern void __fastcall FUN_10bbb130(...);
void __fastcall FUN_10bbb340(int param_1);
extern void __fastcall FUN_10bbb340(...);
int __fastcall FUN_10bbbf20(int *param_1);
extern int __fastcall FUN_10bbbf20(...);
void FUN_10bbd7c0(int param_1);
extern void FUN_10bbd7c0(...);
void __stdcall FUN_10bc0c20(unsigned int recovered_unused_stack_0);
void __stdcall FUN_10bc0c20(unsigned int recovered_unused_stack_0);
void __fastcall FUN_10bc0c40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10bc0c40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10bc5190(int param_1);
extern undefined4 __fastcall FUN_10bc5190(...);
void __fastcall FUN_10bc6860(int *param_1);
extern void __fastcall FUN_10bc6860(...);
void __fastcall FUN_10bc6890(int *param_1);
extern void __fastcall FUN_10bc6890(...);
void __fastcall FUN_10bc68f0(int *param_1);
extern void __fastcall FUN_10bc68f0(...);
void __fastcall FUN_10bc6920(int *param_1);
extern void __fastcall FUN_10bc6920(...);
void __fastcall FUN_10bc7650(int *param_1);
extern void __fastcall FUN_10bc7650(...);
void __fastcall FUN_10bc7680(int *param_1);
extern void __fastcall FUN_10bc7680(...);
void FUN_10bc78f0(void);
extern void FUN_10bc78f0(...);
void __fastcall FUN_10bc8830(int param_1);
extern void __fastcall FUN_10bc8830(...);
undefined4 __fastcall FUN_10bc8bb0(int param_1);
extern undefined4 __fastcall FUN_10bc8bb0(...);
undefined4 __fastcall FUN_10bc8bd0(int param_1);
extern undefined4 __fastcall FUN_10bc8bd0(...);
void __stdcall FUN_10bc8e80(int param_1);
void __stdcall FUN_10bc8e80(int param_1);
void __stdcall FUN_10bc9780(int param_1);
void __stdcall FUN_10bc9780(int param_1);
void __stdcall FUN_10bc97a0(int param_1);
void __stdcall FUN_10bc97a0(int param_1);
void __fastcall FUN_10bcb100(int param_1);
extern void __fastcall FUN_10bcb100(...);
void FUN_10bcb570(void);
extern void FUN_10bcb570(...);
void __fastcall FUN_10bcb620(int param_1);
extern void __fastcall FUN_10bcb620(...);
void __stdcall FUN_10bcee70(undefined4 param_1,int *param_2);
void __stdcall FUN_10bcee70(undefined4 param_1,int *param_2);
void __stdcall FUN_10bcf3d0(undefined4 param_1,int *param_2);
void __stdcall FUN_10bcf3d0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_10bd33c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd33c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3400(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3400(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3440(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3440(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd35a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd35a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd35e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd35e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10bd3620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10bd6470(int *param_1);
extern void __fastcall FUN_10bd6470(...);
void __fastcall FUN_10bd6750(int param_1);
extern void __fastcall FUN_10bd6750(...);
void __fastcall FUN_10bd6b90(int *param_1);
extern void __fastcall FUN_10bd6b90(...);
void __fastcall FUN_10bd7020(undefined4 *param_1);
extern void __fastcall FUN_10bd7020(...);
void FUN_10bdee90(void);
extern void FUN_10bdee90(...);
void FUN_10bdf8a0(void);
extern void FUN_10bdf8a0(...);
void FUN_10be0220(void);
extern void FUN_10be0220(...);
void __stdcall FUN_10be1cc0(int param_1,int param_2);
void __stdcall FUN_10be1cc0(int param_1,int param_2);
void __stdcall FUN_10be1d10(int param_1,int param_2);
void __stdcall FUN_10be1d10(int param_1,int param_2);
void FUN_10bed2a0(int *param_1);
extern void FUN_10bed2a0(...);
void __fastcall FUN_10bee240(int param_1);
extern void __fastcall FUN_10bee240(...);
void __fastcall FUN_10bee690(int param_1);
extern void __fastcall FUN_10bee690(...);
void __fastcall FUN_10bee710(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10bee710(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10bee740(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10bee740(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10bee770(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10bee770(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void FUN_10bee8d0(void);
extern void FUN_10bee8d0(...);
void FUN_10bee8f0(void);
extern void FUN_10bee8f0(...);
// Reference entry 103f6ad0; body size 60 bytes.
#line 1 "ENTRY_103f6ad0"

int __thiscall Recovered_Bulk::FUN_103f6ad0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_103f6da0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 103f6b20; body size 49 bytes.
#line 1 "ENTRY_103f6b20"

int __thiscall Recovered_Bulk::FUN_103f6b20(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_103f6e10(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 103f8480; body size 48 bytes.
#line 1 "ENTRY_103f8480"

undefined4 * __fastcall FUN_103f8480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 103f84c0; body size 48 bytes.
#line 1 "ENTRY_103f84c0"

undefined4 * __fastcall FUN_103f84c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 103faa80; body size 33 bytes.
#line 1 "ENTRY_103faa80"

void __fastcall FUN_103faa80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103faab0; body size 33 bytes.
#line 1 "ENTRY_103faab0"

void __fastcall FUN_103faab0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103faae0; body size 33 bytes.
#line 1 "ENTRY_103faae0"

void __fastcall FUN_103faae0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fab10; body size 33 bytes.
#line 1 "ENTRY_103fab10"

void __fastcall FUN_103fab10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fab40; body size 33 bytes.
#line 1 "ENTRY_103fab40"

void __fastcall FUN_103fab40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fac00; body size 36 bytes.
#line 1 "ENTRY_103fac00"

void __fastcall FUN_103fac00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    thunk_FUN_103f6890(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x18);
  }
  return;
}


// Reference entry 103fad90; body size 33 bytes.
#line 1 "ENTRY_103fad90"

void __fastcall FUN_103fad90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fadc0; body size 33 bytes.
#line 1 "ENTRY_103fadc0"

void __fastcall FUN_103fadc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fadf0; body size 33 bytes.
#line 1 "ENTRY_103fadf0"

void __fastcall FUN_103fadf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fae20; body size 33 bytes.
#line 1 "ENTRY_103fae20"

void __fastcall FUN_103fae20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fae50; body size 33 bytes.
#line 1 "ENTRY_103fae50"

void __fastcall FUN_103fae50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fb580; body size 37 bytes.
#line 1 "ENTRY_103fb580"

int * __fastcall FUN_103fb580(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 103fb5b0; body size 37 bytes.
#line 1 "ENTRY_103fb5b0"

int * __fastcall FUN_103fb5b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 103fb5e0; body size 37 bytes.
#line 1 "ENTRY_103fb5e0"

int * __fastcall FUN_103fb5e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 103fb610; body size 37 bytes.
#line 1 "ENTRY_103fb610"

int * __fastcall FUN_103fb610(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 103fc200; body size 60 bytes.
#line 1 "ENTRY_103fc200"

int __thiscall Recovered_Bulk::FUN_103fc200(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 103fc650; body size 58 bytes.
#line 1 "ENTRY_103fc650"

void __thiscall Recovered_Bulk::FUN_103fc650(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 103fc6a0; body size 39 bytes.
#line 1 "ENTRY_103fc6a0"

void __thiscall Recovered_Bulk::FUN_103fc6a0(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 103fcfe0; body size 59 bytes.
#line 1 "ENTRY_103fcfe0"

void __thiscall Recovered_Bulk::FUN_103fcfe0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_103f6890(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  iVar1 = (int)(*param_1);
  *param_1 = (int)(*param_2);
  *param_2 = (int)(iVar1);
  iVar1 = (int)(param_1[1]);
  param_1[1] = (int)(param_2[1]);
  param_2[1] = (int)(iVar1);
  return;
}


// Reference entry 103fd310; body size 33 bytes.
#line 1 "ENTRY_103fd310"

void __fastcall FUN_103fd310(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fd340; body size 33 bytes.
#line 1 "ENTRY_103fd340"

void __fastcall FUN_103fd340(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fd370; body size 33 bytes.
#line 1 "ENTRY_103fd370"

void __fastcall FUN_103fd370(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fd3a0; body size 33 bytes.
#line 1 "ENTRY_103fd3a0"

void __fastcall FUN_103fd3a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fd3d0; body size 33 bytes.
#line 1 "ENTRY_103fd3d0"

void __fastcall FUN_103fd3d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103fee70; body size 25 bytes.
#line 1 "ENTRY_103fee70"

void FUN_103fee70(void)

{
  thunk_FUN_10400590(0,1);
  thunk_FUN_10400590(1,1);
  return;
}


// Reference entry 103ff050; body size 35 bytes.
#line 1 "ENTRY_103ff050"

void __thiscall Recovered_Bulk::FUN_103ff050(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10400a40; body size 57 bytes.
#line 1 "ENTRY_10400a40"

uint __thiscall Recovered_Bulk::FUN_10400a40(uint param_2,int param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  __time64_t _Var3;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x68) & *(uint *)(param_1 + 0x6c));
  if (uVar1 != 0xffffffff) {
    _Var3 = (__time64_t)(_time64((__time64_t *)0x0));
    uVar1 = (uint)((uint)_Var3 - *(uint *)(param_1 + 0x68));
    iVar2 = (int)(((int)((ulonglong)_Var3 >> 0x20) - *(int *)(param_1 + 0x6c)) -
            (uint)((uint)_Var3 < *(uint *)(param_1 + 0x68)));
    if ((iVar2 <= param_3) && ((iVar2 < param_3 || (uVar1 < param_2)))) {
      return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10400a90; body size 27 bytes.
#line 1 "ENTRY_10400a90"

undefined4 __fastcall FUN_10400a90(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x184) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x184) + 0x1c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10400ad0; body size 19 bytes.
#line 1 "ENTRY_10400ad0"

uint __fastcall FUN_10400ad0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x1c))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 104017b0; body size 36 bytes.
#line 1 "ENTRY_104017b0"

void __fastcall FUN_104017b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIUserAccount:onAccountTokenFetchFailed");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10401800; body size 36 bytes.
#line 1 "ENTRY_10401800"

void __fastcall FUN_10401800(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIUserAccount:onAccountTokenReady");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10403340; body size 20 bytes.
#line 1 "ENTRY_10403340"

void __thiscall Recovered_Bulk::FUN_10403340(int param_2)
{
  int param_1 = (int )this;
  *(int *)(param_1 + 0xa0) = param_2;
  *(int *)(param_1 + 0xa4) = param_2 >> 0x1f;
  return;
}


// Reference entry 10403360; body size 23 bytes.
#line 1 "ENTRY_10403360"

void __thiscall Recovered_Bulk::FUN_10403360(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_3;
  return;
}


// Reference entry 104038b0; body size 57 bytes.
#line 1 "ENTRY_104038b0"

void __fastcall FUN_104038b0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    thunk_FUN_10400590(0,1);
    thunk_FUN_10400590(1,1);
    return;
  }
  thunk_FUN_103cb6d0(param_1 + 0x44,0);
  thunk_FUN_10400590(1,1);
  return;
}


// Reference entry 10403b40; body size 22 bytes.
#line 1 "ENTRY_10403b40"

void __stdcall FUN_10403b40(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 10403b80; body size 23 bytes.
#line 1 "ENTRY_10403b80"

void __stdcall FUN_10403b80(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10407020; body size 59 bytes.
#line 1 "ENTRY_10407020"

void __thiscall Recovered_Bulk::FUN_10407020(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10406340(puVar1,param_2);
  return;
}


// Reference entry 10407500; body size 48 bytes.
#line 1 "ENTRY_10407500"

undefined4 * __fastcall FUN_10407500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10407eb0; body size 60 bytes.
#line 1 "ENTRY_10407eb0"

void __fastcall FUN_10407eb0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10408c60; body size 43 bytes.
#line 1 "ENTRY_10408c60"

undefined4 FUN_10408c60(undefined4 param_1,SCStr *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(undefined1 *)(param_2) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)param_2);
  }
  uVar1 = (uint)(((SCStr *)(param_2))->length());
  thunk_FUN_1040bfe0(param_1,puVar2,uVar1,uVar3);
  return (undefined4)(param_1);
}


// Reference entry 10408ca0; body size 45 bytes.
#line 1 "ENTRY_10408ca0"

undefined4 FUN_10408ca0(undefined4 param_1,SCStr *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(undefined1 *)(param_2) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)param_2);
  }
  uVar1 = (uint)(((SCStr *)(param_2))->length());
  thunk_FUN_1040bfe0(param_1,puVar2,uVar1,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10409ef0; body size 42 bytes.
#line 1 "ENTRY_10409ef0"

int __fastcall FUN_10409ef0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 1 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 1) * 8);
}


// Reference entry 1040a120; body size 60 bytes.
#line 1 "ENTRY_1040a120"

void __stdcall FUN_1040a120(int param_1,int param_2)

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


// Reference entry 1040b690; body size 53 bytes.
#line 1 "ENTRY_1040b690"

undefined4 * __thiscall Recovered_Bulk::FUN_1040b690(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 2);
  param_1[0x11] = (int)(5);
  thunk_FUN_10405f90(*piVar1,param_1[3],piVar1);
  param_1[3] = (int)(*piVar1);
  *param_2 = (undefined4)(param_1);
  (**(code **)(*param_1 + 4))();
  return (undefined4 *)(param_2);
}


// Reference entry 1040bfa0; body size 43 bytes.
#line 1 "ENTRY_1040bfa0"

undefined4 FUN_1040bfa0(undefined4 param_1,SCStr *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(undefined1 *)(param_2) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)param_2);
  }
  uVar1 = (uint)(((SCStr *)(param_2))->length());
  thunk_FUN_1040bfe0(param_1,puVar2,uVar1,uVar3);
  return (undefined4)(param_1);
}


// Reference entry 1040cc10; body size 59 bytes.
#line 1 "ENTRY_1040cc10"

void __thiscall Recovered_Bulk::FUN_1040cc10(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10406340(puVar1,param_2);
  return;
}


// Reference entry 1040df70; body size 42 bytes.
#line 1 "ENTRY_1040df70"

int __fastcall FUN_1040df70(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 1 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 1) * 8);
}


// Reference entry 1040fd90; body size 40 bytes.
#line 1 "ENTRY_1040fd90"

int __thiscall Recovered_Bulk::FUN_1040fd90(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_1040fdd0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104108a0; body size 59 bytes.
#line 1 "ENTRY_104108a0"

void __thiscall Recovered_Bulk::FUN_104108a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_1040fad0(puVar1,param_2);
  return;
}


// Reference entry 104109b0; body size 55 bytes.
#line 1 "ENTRY_104109b0"

void __thiscall Recovered_Bulk::FUN_104109b0(int *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (uint)(((SCStr *)(param_3))->hash());
  iVar2 = (int)(thunk_FUN_1040fdd0(local_8,param_3,uVar1));
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 10411480; body size 39 bytes.
#line 1 "ENTRY_10411480"

undefined4 * __fastcall FUN_10411480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 104119f0; body size 33 bytes.
#line 1 "ENTRY_104119f0"

void __fastcall FUN_104119f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10411ca0; body size 33 bytes.
#line 1 "ENTRY_10411ca0"

void __fastcall FUN_10411ca0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10411ff0; body size 27 bytes.
#line 1 "ENTRY_10411ff0"

int __stdcall FUN_10411ff0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10410310(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10412900; body size 19 bytes.
#line 1 "ENTRY_10412900"

void __thiscall Recovered_Bulk::FUN_10412900(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10412b50; body size 57 bytes.
#line 1 "ENTRY_10412b50"

void __thiscall Recovered_Bulk::FUN_10412b50(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uStack_10;
  char *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(param_3);
  pcStack_c = (char *)("SCIController:onConnectivityStateChanged");
  uStack_10 = (undefined4)(0x10412b61);
  cVar1 = (char)(thunk_FUN_101a2c70());
  if (cVar1 != '\0') {
    uStack_8 = (undefined4)(0);
    pcStack_c = (char *)(*(char **)(param_1 + 4));
    ((SCStr *)((SCStr *)&uStack_10))->int_allocRep("SCIFeatureManager:onConnectivityStateChanged");
    thunk_FUN_103d65f0();
  }
  return;
}


// Reference entry 10412ba0; body size 24 bytes.
#line 1 "ENTRY_10412ba0"

void __fastcall FUN_10412ba0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(param_1 + 8);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10412fd0; body size 19 bytes.
#line 1 "ENTRY_10412fd0"

void __thiscall Recovered_Bulk::FUN_10412fd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104131d0; body size 33 bytes.
#line 1 "ENTRY_104131d0"

void __fastcall FUN_104131d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10413890; body size 35 bytes.
#line 1 "ENTRY_10413890"

void __thiscall Recovered_Bulk::FUN_10413890(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10414320; body size 19 bytes.
#line 1 "ENTRY_10414320"

int __fastcall FUN_10414320(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x31) != '\0')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10414dc0; body size 59 bytes.
#line 1 "ENTRY_10414dc0"

void __thiscall Recovered_Bulk::FUN_10414dc0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_1040fad0(puVar1,param_2);
  return;
}


// Reference entry 10415bd0; body size 23 bytes.
#line 1 "ENTRY_10415bd0"

void __stdcall FUN_10415bd0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 1041a580; body size 30 bytes.
#line 1 "ENTRY_1041a580"

SCStr * __thiscall Recovered_Bulk::FUN_1041a580(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x48));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x4c);
  return (SCStr *)(param_2);
}


// Reference entry 1041a720; body size 33 bytes.
#line 1 "ENTRY_1041a720"

SCStr * __thiscall Recovered_Bulk::FUN_1041a720(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xb8));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xbc);
  return (SCStr *)(param_2);
}


// Reference entry 1041a760; body size 33 bytes.
#line 1 "ENTRY_1041a760"

SCStr * __thiscall Recovered_Bulk::FUN_1041a760(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xb0));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xb4);
  return (SCStr *)(param_2);
}


// Reference entry 1041ca20; body size 22 bytes.
#line 1 "ENTRY_1041ca20"

undefined1 __fastcall FUN_1041ca20(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    cVar1 = (char)(thunk_FUN_101e7620());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 1041d340; body size 49 bytes.
#line 1 "ENTRY_1041d340"

void __thiscall Recovered_Bulk::FUN_1041d340(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x44) = param_2;
  if ((SCStr *)(param_3) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_3));
    ((SCStr *)(this_))->int_addref();
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_3 + 4);
  return;
}


// Reference entry 1041d660; body size 22 bytes.
#line 1 "ENTRY_1041d660"

void __stdcall FUN_1041d660(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 1041d680; body size 23 bytes.
#line 1 "ENTRY_1041d680"

void __stdcall FUN_1041d680(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 1041fb10; body size 33 bytes.
#line 1 "ENTRY_1041fb10"

void __fastcall FUN_1041fb10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fb40; body size 33 bytes.
#line 1 "ENTRY_1041fb40"

void __fastcall FUN_1041fb40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fb70; body size 33 bytes.
#line 1 "ENTRY_1041fb70"

void __fastcall FUN_1041fb70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fba0; body size 33 bytes.
#line 1 "ENTRY_1041fba0"

void __fastcall FUN_1041fba0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fbd0; body size 33 bytes.
#line 1 "ENTRY_1041fbd0"

void __fastcall FUN_1041fbd0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fc00; body size 33 bytes.
#line 1 "ENTRY_1041fc00"

void __fastcall FUN_1041fc00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fc30; body size 33 bytes.
#line 1 "ENTRY_1041fc30"

void __fastcall FUN_1041fc30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1041fc60; body size 33 bytes.
#line 1 "ENTRY_1041fc60"

void __fastcall FUN_1041fc60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10422540; body size 19 bytes.
#line 1 "ENTRY_10422540"

void __thiscall Recovered_Bulk::FUN_10422540(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10422570; body size 19 bytes.
#line 1 "ENTRY_10422570"

void __thiscall Recovered_Bulk::FUN_10422570(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10422590; body size 19 bytes.
#line 1 "ENTRY_10422590"

void __thiscall Recovered_Bulk::FUN_10422590(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104225c0; body size 19 bytes.
#line 1 "ENTRY_104225c0"

void __thiscall Recovered_Bulk::FUN_104225c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104225f0; body size 19 bytes.
#line 1 "ENTRY_104225f0"

void __thiscall Recovered_Bulk::FUN_104225f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10422740; body size 36 bytes.
#line 1 "ENTRY_10422740"

void __stdcall FUN_10422740(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIAccountManager:onCurrentAccountChanged",param_2));
  if (cVar1 != '\0') {
    thunk_FUN_10423b10();
  }
  return;
}


// Reference entry 10422ac0; body size 19 bytes.
#line 1 "ENTRY_10422ac0"

void __thiscall Recovered_Bulk::FUN_10422ac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10422af0; body size 19 bytes.
#line 1 "ENTRY_10422af0"

void __thiscall Recovered_Bulk::FUN_10422af0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10422b10; body size 19 bytes.
#line 1 "ENTRY_10422b10"

void __thiscall Recovered_Bulk::FUN_10422b10(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10422b40; body size 19 bytes.
#line 1 "ENTRY_10422b40"

void __thiscall Recovered_Bulk::FUN_10422b40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10422b70; body size 19 bytes.
#line 1 "ENTRY_10422b70"

void __thiscall Recovered_Bulk::FUN_10422b70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10422cf0; body size 33 bytes.
#line 1 "ENTRY_10422cf0"

void __fastcall FUN_10422cf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10422d20; body size 33 bytes.
#line 1 "ENTRY_10422d20"

void __fastcall FUN_10422d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10422d50; body size 33 bytes.
#line 1 "ENTRY_10422d50"

void __fastcall FUN_10422d50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10422d80; body size 33 bytes.
#line 1 "ENTRY_10422d80"

void __fastcall FUN_10422d80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1042a730; body size 60 bytes.
#line 1 "ENTRY_1042a730"

void __fastcall FUN_1042a730(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1042a790; body size 33 bytes.
#line 1 "ENTRY_1042a790"

void __fastcall FUN_1042a790(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1042a7c0; body size 33 bytes.
#line 1 "ENTRY_1042a7c0"

void __fastcall FUN_1042a7c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1042ba50; body size 19 bytes.
#line 1 "ENTRY_1042ba50"

void __thiscall Recovered_Bulk::FUN_1042ba50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1042ba70; body size 19 bytes.
#line 1 "ENTRY_1042ba70"

void __thiscall Recovered_Bulk::FUN_1042ba70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1042ba90; body size 19 bytes.
#line 1 "ENTRY_1042ba90"

void __thiscall Recovered_Bulk::FUN_1042ba90(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1042bab0; body size 19 bytes.
#line 1 "ENTRY_1042bab0"

void __thiscall Recovered_Bulk::FUN_1042bab0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1042bb60; body size 36 bytes.
#line 1 "ENTRY_1042bb60"

void __stdcall FUN_1042bb60(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIHousehold:onZoneGroupsChanged",param_2));
  if (cVar1 != '\0') {
    thunk_FUN_1042f680();
  }
  return;
}


// Reference entry 1042bba0; body size 36 bytes.
#line 1 "ENTRY_1042bba0"

void __stdcall FUN_1042bba0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIAlarmManager:onAlarmsChanged",param_2));
  if (cVar1 != '\0') {
    thunk_FUN_1042f680();
  }
  return;
}


// Reference entry 1042bc40; body size 19 bytes.
#line 1 "ENTRY_1042bc40"

void __thiscall Recovered_Bulk::FUN_1042bc40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1042bc60; body size 19 bytes.
#line 1 "ENTRY_1042bc60"

void __thiscall Recovered_Bulk::FUN_1042bc60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1042bc80; body size 19 bytes.
#line 1 "ENTRY_1042bc80"

void __thiscall Recovered_Bulk::FUN_1042bc80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1042bca0; body size 19 bytes.
#line 1 "ENTRY_1042bca0"

void __thiscall Recovered_Bulk::FUN_1042bca0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1042bd10; body size 33 bytes.
#line 1 "ENTRY_1042bd10"

void __fastcall FUN_1042bd10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1042cdd0; body size 34 bytes.
#line 1 "ENTRY_1042cdd0"

void __stdcall FUN_1042cdd0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_10430fa0();
  }
  return;
}


// Reference entry 1042ce00; body size 34 bytes.
#line 1 "ENTRY_1042ce00"

void __stdcall FUN_1042ce00(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_10431980();
  }
  return;
}


// Reference entry 1042ce90; body size 34 bytes.
#line 1 "ENTRY_1042ce90"

void __stdcall FUN_1042ce90(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_10431e10();
  }
  return;
}


// Reference entry 10433550; body size 48 bytes.
#line 1 "ENTRY_10433550"

undefined4 * __fastcall FUN_10433550(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10433ba0; body size 60 bytes.
#line 1 "ENTRY_10433ba0"

void __fastcall FUN_10433ba0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10436ac0; body size 48 bytes.
#line 1 "ENTRY_10436ac0"

undefined4 __thiscall Recovered_Bulk::FUN_10436ac0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  short sVar1;
  
  sVar1 = (short)(*(short *)(param_1 + 0x867ea) + -1);
  if (sVar1 == 0) {
    sVar1 = (short)(1);
  }
  thunk_FUN_10436400(param_2,sVar1,param_3);
  return (undefined4)(param_2);
}


// Reference entry 10436b10; body size 24 bytes.
#line 1 "ENTRY_10436b10"

short __fastcall FUN_10436b10(int param_1)

{
  short sVar1;
  
  sVar1 = (short)(*(short *)(param_1 + 0x867ea) + -1);
  if (sVar1 == 0) {
    sVar1 = (short)(1);
  }
  return (short)(sVar1);
}


// Reference entry 10436cb0; body size 19 bytes.
#line 1 "ENTRY_10436cb0"

int __fastcall FUN_10436cb0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x4c);
  if (*(char *)(param_1 + 0xd58) == '\0') {
    iVar1 = (int)(param_1 + 0x2cd80);
  }
  return (int)(iVar1);
}


// Reference entry 10437a40; body size 35 bytes.
#line 1 "ENTRY_10437a40"

void __fastcall FUN_10437a40(int param_1)

{
  short sVar1;
  
  sVar1 = (short)(*(short *)(param_1 + 0x867ea) + -1);
  if (sVar1 == 0) {
    sVar1 = (short)(1);
  }
  thunk_FUN_10437740(sVar1);
  return;
}


// Reference entry 10437a70; body size 23 bytes.
#line 1 "ENTRY_10437a70"

uint __fastcall FUN_10437a70(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_11272de0());
  return (uint)(((uint)((int3)((uint)uVar1 >> 8)) << 8 | (uint)((ushort)uVar1 < *(ushort *)(param_1 + 0x867ea))) & 0xffff);
}


// Reference entry 10437b40; body size 23 bytes.
#line 1 "ENTRY_10437b40"

uint __fastcall FUN_10437b40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_11272de0());
  return (uint)(((uint)((int3)((uint)uVar1 >> 8)) << 8 | (uint)((short)(short)(uVar1) == *(short *)(param_1 + 0x867ea))) & 0xffff);
}


// Reference entry 104396d0; body size 43 bytes.
#line 1 "ENTRY_104396d0"

void __stdcall FUN_104396d0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930(param_1);
    thunk_FUN_112af4e0("SCLifecycleManager",3,"Remove Event Sink %p",param_1);
  }
  return;
}


// Reference entry 1043a7d0; body size 33 bytes.
#line 1 "ENTRY_1043a7d0"

void __fastcall FUN_1043a7d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1043a800; body size 33 bytes.
#line 1 "ENTRY_1043a800"

void __fastcall FUN_1043a800(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1043aa40; body size 37 bytes.
#line 1 "ENTRY_1043aa40"

int * __fastcall FUN_1043aa40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 1043ae30; body size 33 bytes.
#line 1 "ENTRY_1043ae30"

void __fastcall FUN_1043ae30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1043b720; body size 49 bytes.
#line 1 "ENTRY_1043b720"

void __thiscall Recovered_Bulk::FUN_1043b720(int param_2)
{
  int param_1 = (int )this;
  if (param_2 == 6) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x28) + 0x24))();
    return;
  }
  if (param_2 == 9) {
                    
                    
    (**(code **)(**(int **)(param_1 + 4) + 0x24))();
    return;
  }
  return;
}


// Reference entry 1043b880; body size 49 bytes.
#line 1 "ENTRY_1043b880"

void __thiscall Recovered_Bulk::FUN_1043b880(int param_2)
{
  int param_1 = (int )this;
  if (param_2 == 8) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x28) + 0x24))();
    return;
  }
  if (param_2 == 10) {
                    
                    
    (**(code **)(**(int **)(param_1 + 4) + 0x24))();
    return;
  }
  return;
}


// Reference entry 1043d490; body size 34 bytes.
#line 1 "ENTRY_1043d490"

void __stdcall FUN_1043d490(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_1043d850();
  }
  return;
}


// Reference entry 1043d7d0; body size 48 bytes.
#line 1 "ENTRY_1043d7d0"

void __fastcall FUN_1043d7d0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x90);
  if (param_1 == 0) {
    iVar1 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x98) + 0x6c))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 1043d810; body size 48 bytes.
#line 1 "ENTRY_1043d810"

void __fastcall FUN_1043d810(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x90);
  if (param_1 == 0) {
    iVar1 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x98) + 0x70))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 104420e0; body size 60 bytes.
#line 1 "ENTRY_104420e0"

void __fastcall FUN_104420e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 + 0x90);
  iVar2 = (int)(iVar1);
  if (param_1 == 0) {
    iVar2 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(iVar2);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xac) + 0x6c))(iVar1);
  return;
}


// Reference entry 10442130; body size 60 bytes.
#line 1 "ENTRY_10442130"

void __fastcall FUN_10442130(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 + 0x90);
  iVar2 = (int)(iVar1);
  if (param_1 == 0) {
    iVar2 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(iVar2);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x70))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xac) + 0x70))(iVar1);
  return;
}


// Reference entry 10443a10; body size 33 bytes.
#line 1 "ENTRY_10443a10"

void __fastcall FUN_10443a10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10443ab0; body size 33 bytes.
#line 1 "ENTRY_10443ab0"

void __fastcall FUN_10443ab0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10444730; body size 23 bytes.
#line 1 "ENTRY_10444730"

void __fastcall FUN_10444730(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104447e0; body size 33 bytes.
#line 1 "ENTRY_104447e0"

void __fastcall FUN_104447e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1044e3e0; body size 31 bytes.
#line 1 "ENTRY_1044e3e0"

void __stdcall FUN_1044e3e0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_1044eaf0();
  }
  return;
}


// Reference entry 10454f00; body size 44 bytes.
#line 1 "ENTRY_10454f00"

undefined1 FUN_10454f00(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onAreasChanged"));
    if (!bVar1) {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10454f40; body size 32 bytes.
#line 1 "ENTRY_10454f40"

void __stdcall FUN_10454f40(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_10455370();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 104551b0; body size 32 bytes.
#line 1 "ENTRY_104551b0"

void __stdcall FUN_104551b0(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_10455370();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 10459500; body size 58 bytes.
#line 1 "ENTRY_10459500"

int __fastcall FUN_10459500(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(*(int *)(param_1 + 0xe0));
  iVar2 = (int)((**(code **)(**(int **)(param_1 + 200) + 0x14))());
  if (iVar2 == 0) {
    iVar2 = (int)(1);
  }
  iVar3 = (int)(iVar3 + iVar2);
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xd8) + 0x18))());
  iVar2 = (int)(iVar3 + 1);
  if (cVar1 != '\0') {
    iVar2 = (int)(iVar3);
  }
  return (int)(iVar2);
}


// Reference entry 10459810; body size 44 bytes.
#line 1 "ENTRY_10459810"

undefined1 FUN_10459810(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onAreasChanged"));
    if (!bVar1) {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 1045aef0; body size 30 bytes.
#line 1 "ENTRY_1045aef0"

undefined4 __thiscall Recovered_Bulk::FUN_1045aef0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 8) != '\0') {
    thunk_FUN_1045af20(param_2);
    return (undefined4)(0);
  }
  thunk_FUN_1045c280();
  return (undefined4)(0);
}


// Reference entry 1045f910; body size 19 bytes.
#line 1 "ENTRY_1045f910"

void __thiscall Recovered_Bulk::FUN_1045f910(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1045f950; body size 57 bytes.
#line 1 "ENTRY_1045f950"

void __stdcall FUN_1045f950(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)((int *)*param_1);
  cVar2 = (char)(thunk_FUN_101a2c70("SCISetting:onValueChanged:Bool",param_2));
  if (cVar2 != '\0') {
    cVar2 = (char)((**(code **)(*piVar1 + 0x20))());
    if (cVar2 == '\0') {
      thunk_FUN_101f1c60();
    }
  }
  return;
}


// Reference entry 1045f9b0; body size 19 bytes.
#line 1 "ENTRY_1045f9b0"

void __thiscall Recovered_Bulk::FUN_1045f9b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10462090; body size 60 bytes.
#line 1 "ENTRY_10462090"

void __fastcall FUN_10462090(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 104620f0; body size 33 bytes.
#line 1 "ENTRY_104620f0"

void __fastcall FUN_104620f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10462120; body size 33 bytes.
#line 1 "ENTRY_10462120"

void __fastcall FUN_10462120(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104625c0; body size 37 bytes.
#line 1 "ENTRY_104625c0"

int * __fastcall FUN_104625c0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10462c50; body size 16 bytes.
#line 1 "ENTRY_10462c50"

void __stdcall FUN_10462c50(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1061c5e0(5);
  return;
}


// Reference entry 10462d20; body size 33 bytes.
#line 1 "ENTRY_10462d20"

void __fastcall FUN_10462d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10463900; body size 28 bytes.
#line 1 "ENTRY_10463900"

void __fastcall FUN_10463900(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))());
  if (cVar1 != '\0') {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10468aa0; body size 52 bytes.
#line 1 "ENTRY_10468aa0"

void __stdcall FUN_10468aa0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIIndexManager:onIndexEvent"));
  if ((!bVar1) && (cVar2 = thunk_FUN_102d65b0(param_2), cVar2 == '\0')) {
    return;
  }
  thunk_FUN_104693f0();
  return;
}


// Reference entry 1046b5c0; body size 34 bytes.
#line 1 "ENTRY_1046b5c0"

void __stdcall FUN_1046b5c0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_1046ba90();
  }
  return;
}


// Reference entry 1046b5f0; body size 34 bytes.
#line 1 "ENTRY_1046b5f0"

void __stdcall FUN_1046b5f0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_1046bd60();
  }
  return;
}


// Reference entry 1046c660; body size 55 bytes.
#line 1 "ENTRY_1046c660"

void __stdcall FUN_1046c660(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (bVar1) {
    thunk_FUN_101ed0d0();
    thunk_FUN_1046d3a0();
    thunk_FUN_1046c9a0();
    thunk_FUN_101ed5f0();
  }
  return;
}


// Reference entry 1046c810; body size 19 bytes.
#line 1 "ENTRY_1046c810"

void __thiscall Recovered_Bulk::FUN_1046c810(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1046c830; body size 19 bytes.
#line 1 "ENTRY_1046c830"

void __thiscall Recovered_Bulk::FUN_1046c830(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1046c890; body size 56 bytes.
#line 1 "ENTRY_1046c890"

void __stdcall FUN_1046c890(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (bVar1) {
    thunk_FUN_101ed0d0();
    thunk_FUN_1046d3a0();
    thunk_FUN_1046c9a0();
    thunk_FUN_101ed5f0();
  }
  return;
}


// Reference entry 1046c8e0; body size 36 bytes.
#line 1 "ENTRY_1046c8e0"

void __stdcall FUN_1046c8e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_1046d3a0();
  thunk_FUN_1046c9a0();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 1046c930; body size 19 bytes.
#line 1 "ENTRY_1046c930"

void __thiscall Recovered_Bulk::FUN_1046c930(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1046c950; body size 19 bytes.
#line 1 "ENTRY_1046c950"

void __thiscall Recovered_Bulk::FUN_1046c950(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1046d370; body size 30 bytes.
#line 1 "ENTRY_1046d370"

void FUN_1046d370(void)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_1046d3a0();
  thunk_FUN_1046c9a0();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 1046f590; body size 25 bytes.
#line 1 "ENTRY_1046f590"

void __stdcall FUN_1046f590(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1046fe40();
  thunk_FUN_1046fbd0();
  return;
}


// Reference entry 1046f5b0; body size 22 bytes.
#line 1 "ENTRY_1046f5b0"

void FUN_1046f5b0(void)

{
  thunk_FUN_1046fe40();
  thunk_FUN_1046fbd0();
  return;
}


// Reference entry 10470050; body size 16 bytes.
#line 1 "ENTRY_10470050"

void FUN_10470050(void)

{
  thunk_FUN_1046fe40();
  thunk_FUN_1046fbd0();
  return;
}


// Reference entry 104715b0; body size 30 bytes.
#line 1 "ENTRY_104715b0"

void FUN_104715b0(void)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_101f2770();
  thunk_FUN_104706b0();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 10472990; body size 60 bytes.
#line 1 "ENTRY_10472990"

void __fastcall FUN_10472990(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 104729f0; body size 33 bytes.
#line 1 "ENTRY_104729f0"

void __fastcall FUN_104729f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10472a90; body size 33 bytes.
#line 1 "ENTRY_10472a90"

void __fastcall FUN_10472a90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104732f0; body size 23 bytes.
#line 1 "ENTRY_104732f0"

void __fastcall FUN_104732f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104733a0; body size 33 bytes.
#line 1 "ENTRY_104733a0"

void __fastcall FUN_104733a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104757b0; body size 33 bytes.
#line 1 "ENTRY_104757b0"

void __fastcall FUN_104757b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10475850; body size 33 bytes.
#line 1 "ENTRY_10475850"

void __fastcall FUN_10475850(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10476240; body size 49 bytes.
#line 1 "ENTRY_10476240"

void __fastcall FUN_10476240(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  thunk_FUN_10d9e6c0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x9c));
  return;
}


// Reference entry 10476310; body size 33 bytes.
#line 1 "ENTRY_10476310"

void __fastcall FUN_10476310(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10478940; body size 43 bytes.
#line 1 "ENTRY_10478940"

void FUN_10478940(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0());
  if (cVar1 == '\0') {
    thunk_FUN_101ed0d0();
    thunk_FUN_101f2770();
    thunk_FUN_104775f0();
    thunk_FUN_101ed5f0();
    return;
  }
  return;
}


// Reference entry 10479450; body size 59 bytes.
#line 1 "ENTRY_10479450"

void __thiscall Recovered_Bulk::FUN_10479450(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10478f70(puVar1,param_2);
  return;
}


// Reference entry 1047a230; body size 19 bytes.
#line 1 "ENTRY_1047a230"

void __thiscall Recovered_Bulk::FUN_1047a230(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a250; body size 19 bytes.
#line 1 "ENTRY_1047a250"

void __thiscall Recovered_Bulk::FUN_1047a250(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a270; body size 19 bytes.
#line 1 "ENTRY_1047a270"

void __thiscall Recovered_Bulk::FUN_1047a270(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a290; body size 19 bytes.
#line 1 "ENTRY_1047a290"

void __thiscall Recovered_Bulk::FUN_1047a290(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a2b0; body size 19 bytes.
#line 1 "ENTRY_1047a2b0"

void __thiscall Recovered_Bulk::FUN_1047a2b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a2d0; body size 19 bytes.
#line 1 "ENTRY_1047a2d0"

void __thiscall Recovered_Bulk::FUN_1047a2d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a480; body size 44 bytes.
#line 1 "ENTRY_1047a480"

void __stdcall FUN_1047a480(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIController:onConnectivityStateChanged",param_2));
  if (cVar1 != '\0') {
    thunk_FUN_1047da40();
    thunk_FUN_1047dde0();
  }
  return;
}


// Reference entry 1047a4d0; body size 57 bytes.
#line 1 "ENTRY_1047a4d0"

void __stdcall FUN_1047a4d0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIHousehold:onZoneGroupsChanged",param_2));
  if ((cVar1 == '\0') &&
     (cVar1 = thunk_FUN_101a2c70("SCIHousehold:onZPUpdateComplete",param_2), cVar1 == '\0')) {
    return;
  }
  thunk_FUN_1047dde0();
  return;
}


// Reference entry 1047a5a0; body size 19 bytes.
#line 1 "ENTRY_1047a5a0"

void __thiscall Recovered_Bulk::FUN_1047a5a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a5c0; body size 19 bytes.
#line 1 "ENTRY_1047a5c0"

void __thiscall Recovered_Bulk::FUN_1047a5c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a5e0; body size 19 bytes.
#line 1 "ENTRY_1047a5e0"

void __thiscall Recovered_Bulk::FUN_1047a5e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a600; body size 19 bytes.
#line 1 "ENTRY_1047a600"

void __thiscall Recovered_Bulk::FUN_1047a600(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a620; body size 19 bytes.
#line 1 "ENTRY_1047a620"

void __thiscall Recovered_Bulk::FUN_1047a620(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047a640; body size 19 bytes.
#line 1 "ENTRY_1047a640"

void __thiscall Recovered_Bulk::FUN_1047a640(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1047c1c0; body size 60 bytes.
#line 1 "ENTRY_1047c1c0"

void __stdcall FUN_1047c1c0(int param_1,int param_2)

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


// Reference entry 1047c210; body size 36 bytes.
#line 1 "ENTRY_1047c210"

void __stdcall FUN_1047c210(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCSetupEngine:onShouldRefreshUI"));
  if (bVar1) {
    thunk_FUN_1047d200();
  }
  return;
}


// Reference entry 1047d4e0; body size 59 bytes.
#line 1 "ENTRY_1047d4e0"

void __thiscall Recovered_Bulk::FUN_1047d4e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10478f70(puVar1,param_2);
  return;
}


// Reference entry 104816c0; body size 59 bytes.
#line 1 "ENTRY_104816c0"

void __thiscall Recovered_Bulk::FUN_104816c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_1047ff40(puVar1,param_2);
  return;
}


// Reference entry 10484cc0; body size 60 bytes.
#line 1 "ENTRY_10484cc0"

void __fastcall FUN_10484cc0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10484d20; body size 33 bytes.
#line 1 "ENTRY_10484d20"

void __fastcall FUN_10484d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10484d50; body size 33 bytes.
#line 1 "ENTRY_10484d50"

void __fastcall FUN_10484d50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10484d80; body size 33 bytes.
#line 1 "ENTRY_10484d80"

void __fastcall FUN_10484d80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10484db0; body size 33 bytes.
#line 1 "ENTRY_10484db0"

void __fastcall FUN_10484db0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10484de0; body size 33 bytes.
#line 1 "ENTRY_10484de0"

void __fastcall FUN_10484de0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104852e0; body size 33 bytes.
#line 1 "ENTRY_104852e0"

void __fastcall FUN_104852e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10485310; body size 33 bytes.
#line 1 "ENTRY_10485310"

void __fastcall FUN_10485310(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10485340; body size 33 bytes.
#line 1 "ENTRY_10485340"

void __fastcall FUN_10485340(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10485370; body size 33 bytes.
#line 1 "ENTRY_10485370"

void __fastcall FUN_10485370(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104853a0; body size 33 bytes.
#line 1 "ENTRY_104853a0"

void __fastcall FUN_104853a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10486f40; body size 19 bytes.
#line 1 "ENTRY_10486f40"

void __thiscall Recovered_Bulk::FUN_10486f40(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10487270; body size 19 bytes.
#line 1 "ENTRY_10487270"

void __thiscall Recovered_Bulk::FUN_10487270(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10487ad0; body size 23 bytes.
#line 1 "ENTRY_10487ad0"

void __fastcall FUN_10487ad0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10487af0; body size 23 bytes.
#line 1 "ENTRY_10487af0"

void __fastcall FUN_10487af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10487c00; body size 23 bytes.
#line 1 "ENTRY_10487c00"

void __fastcall FUN_10487c00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10487d00; body size 23 bytes.
#line 1 "ENTRY_10487d00"

void __fastcall FUN_10487d00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10487dc0; body size 36 bytes.
#line 1 "ENTRY_10487dc0"

void __stdcall FUN_10487dc0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCISetting:onValueChanged:Bool",param_2));
  if (cVar1 != '\0') {
    thunk_FUN_104963d0();
  }
  return;
}


// Reference entry 104881d0; body size 19 bytes.
#line 1 "ENTRY_104881d0"

void __thiscall Recovered_Bulk::FUN_104881d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10488240; body size 19 bytes.
#line 1 "ENTRY_10488240"

void __thiscall Recovered_Bulk::FUN_10488240(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10488460; body size 33 bytes.
#line 1 "ENTRY_10488460"

void __fastcall FUN_10488460(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10488490; body size 33 bytes.
#line 1 "ENTRY_10488490"

void __fastcall FUN_10488490(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104884c0; body size 33 bytes.
#line 1 "ENTRY_104884c0"

void __fastcall FUN_104884c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104884f0; body size 33 bytes.
#line 1 "ENTRY_104884f0"

void __fastcall FUN_104884f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10488520; body size 33 bytes.
#line 1 "ENTRY_10488520"

void __fastcall FUN_10488520(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10488750; body size 61 bytes.
#line 1 "ENTRY_10488750"

void __thiscall Recovered_Bulk::FUN_10488750(int *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc3) != '\0') {
    uVar1 = (undefined4)((**(code **)(*param_2 + 0x28))());
    switch(uVar1) {
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
      break;
    default:
      thunk_FUN_1041d2b0(0);
    }
  }
  thunk_FUN_101eca20(param_2);
  return;
}


// Reference entry 10495570; body size 44 bytes.
#line 1 "ENTRY_10495570"

undefined1 FUN_10495570(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onVoiceAccountInfoChanged"));
    if (!bVar1) {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10496660; body size 59 bytes.
#line 1 "ENTRY_10496660"

void __thiscall Recovered_Bulk::FUN_10496660(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_1047ff40(puVar1,param_2);
  return;
}


// Reference entry 10496b30; body size 27 bytes.
#line 1 "ENTRY_10496b30"

undefined4 __fastcall FUN_10496b30(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x11c) + 0x20))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10496b60; body size 27 bytes.
#line 1 "ENTRY_10496b60"

undefined4 __fastcall FUN_10496b60(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x114) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x114) + 0x20))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1049cc20; body size 57 bytes.
#line 1 "ENTRY_1049cc20"

void FUN_1049cc20(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0());
  if (cVar1 == '\0') {
    thunk_FUN_101ed0d0();
    thunk_FUN_101f2770();
    thunk_FUN_1049ae90();
    thunk_FUN_10499dd0();
    thunk_FUN_10498d70();
    thunk_FUN_101ed5f0();
    return;
  }
  return;
}


// Reference entry 1049f230; body size 33 bytes.
#line 1 "ENTRY_1049f230"

void __fastcall FUN_1049f230(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1049f2d0; body size 33 bytes.
#line 1 "ENTRY_1049f2d0"

void __fastcall FUN_1049f2d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104a09f0; body size 23 bytes.
#line 1 "ENTRY_104a09f0"

void __fastcall FUN_104a09f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104a0aa0; body size 33 bytes.
#line 1 "ENTRY_104a0aa0"

void __fastcall FUN_104a0aa0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104a0fd0; body size 42 bytes.
#line 1 "ENTRY_104a0fd0"

void __thiscall Recovered_Bulk::FUN_104a0fd0(int param_2)
{
  int param_1 = (int )this;
  if ((int)(param_2) == *(int *)(param_1 + 0x98)) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x3c))(DAT_118a1c50);
  }
  return;
}


// Reference entry 104a1010; body size 45 bytes.
#line 1 "ENTRY_104a1010"

void __stdcall FUN_104a1010(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2));
    if (cVar1 != '\0') {
      thunk_FUN_104a2320();
    }
  }
  return;
}


// Reference entry 104a1050; body size 45 bytes.
#line 1 "ENTRY_104a1050"

void __stdcall FUN_104a1050(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2));
    if (cVar1 != '\0') {
      thunk_FUN_104a2ff0();
    }
  }
  return;
}


// Reference entry 104a1090; body size 45 bytes.
#line 1 "ENTRY_104a1090"

void __stdcall FUN_104a1090(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2));
    if (cVar1 != '\0') {
      thunk_FUN_104a36d0();
    }
  }
  return;
}


// Reference entry 104a10d0; body size 45 bytes.
#line 1 "ENTRY_104a10d0"

void __stdcall FUN_104a10d0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2));
    if (cVar1 != '\0') {
      thunk_FUN_104a47b0();
    }
  }
  return;
}


// Reference entry 104a1fa0; body size 60 bytes.
#line 1 "ENTRY_104a1fa0"

void __fastcall FUN_104a1fa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 + 0x90);
  iVar2 = (int)(iVar1);
  if (param_1 == 0) {
    iVar2 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(iVar2);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x6c))(iVar1);
  return;
}


// Reference entry 104a2140; body size 60 bytes.
#line 1 "ENTRY_104a2140"

void __fastcall FUN_104a2140(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 + 0x90);
  iVar2 = (int)(iVar1);
  if (param_1 == 0) {
    iVar2 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(iVar2);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x70))(iVar1);
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x70))(iVar1);
  return;
}


// Reference entry 104a87a0; body size 60 bytes.
#line 1 "ENTRY_104a87a0"

void __fastcall FUN_104a87a0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 104a9040; body size 34 bytes.
#line 1 "ENTRY_104a9040"

void __stdcall FUN_104a9040(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_104a9270();
  }
  return;
}


// Reference entry 104aa940; body size 45 bytes.
#line 1 "ENTRY_104aa940"

void __stdcall FUN_104aa940(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2));
    if (cVar1 != '\0') {
      thunk_FUN_104aa9d0();
    }
  }
  return;
}


// Reference entry 104ad3f0; body size 33 bytes.
#line 1 "ENTRY_104ad3f0"

void __fastcall FUN_104ad3f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad420; body size 33 bytes.
#line 1 "ENTRY_104ad420"

void __fastcall FUN_104ad420(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad450; body size 33 bytes.
#line 1 "ENTRY_104ad450"

void __fastcall FUN_104ad450(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad4b0; body size 33 bytes.
#line 1 "ENTRY_104ad4b0"

void __fastcall FUN_104ad4b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad4e0; body size 33 bytes.
#line 1 "ENTRY_104ad4e0"

void __fastcall FUN_104ad4e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad510; body size 33 bytes.
#line 1 "ENTRY_104ad510"

void __fastcall FUN_104ad510(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ad670; body size 37 bytes.
#line 1 "ENTRY_104ad670"

int * __fastcall FUN_104ad670(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 104ad6e0; body size 32 bytes.
#line 1 "ENTRY_104ad6e0"

void __stdcall FUN_104ad6e0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (bVar1) {
    thunk_FUN_104ae600();
  }
  return;
}


// Reference entry 104ada20; body size 60 bytes.
#line 1 "ENTRY_104ada20"

int __thiscall Recovered_Bulk::FUN_104ada20(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 104adb70; body size 19 bytes.
#line 1 "ENTRY_104adb70"

void __thiscall Recovered_Bulk::FUN_104adb70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104adbb0; body size 19 bytes.
#line 1 "ENTRY_104adbb0"

void __thiscall Recovered_Bulk::FUN_104adbb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104adbe0; body size 19 bytes.
#line 1 "ENTRY_104adbe0"

void __thiscall Recovered_Bulk::FUN_104adbe0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104add60; body size 58 bytes.
#line 1 "ENTRY_104add60"

void __thiscall Recovered_Bulk::FUN_104add60(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 104addb0; body size 33 bytes.
#line 1 "ENTRY_104addb0"

void __stdcall FUN_104addb0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (bVar1) {
    thunk_FUN_104ae600();
  }
  return;
}


// Reference entry 104ade00; body size 36 bytes.
#line 1 "ENTRY_104ade00"

void __stdcall FUN_104ade00(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_104aef40();
  thunk_FUN_104ae600();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 104ade40; body size 25 bytes.
#line 1 "ENTRY_104ade40"

void __stdcall FUN_104ade40(undefined4 *param_1,undefined2 *param_2)

{
  FUN_104ab710(*param_1,*param_2);
  return;
}


// Reference entry 104ade60; body size 51 bytes.
#line 1 "ENTRY_104ade60"

void __thiscall Recovered_Bulk::FUN_104ade60(undefined4 *param_2,ushort *param_3)
{
  int param_1 = (int )this;
  param_3 = (ushort *)((ushort *)(uint)*param_3);
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,&param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 104adfb0; body size 19 bytes.
#line 1 "ENTRY_104adfb0"

void __thiscall Recovered_Bulk::FUN_104adfb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104adff0; body size 19 bytes.
#line 1 "ENTRY_104adff0"

void __thiscall Recovered_Bulk::FUN_104adff0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104ae020; body size 19 bytes.
#line 1 "ENTRY_104ae020"

void __thiscall Recovered_Bulk::FUN_104ae020(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104ae380; body size 33 bytes.
#line 1 "ENTRY_104ae380"

void __fastcall FUN_104ae380(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ae3b0; body size 33 bytes.
#line 1 "ENTRY_104ae3b0"

void __fastcall FUN_104ae3b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104ae3e0; body size 33 bytes.
#line 1 "ENTRY_104ae3e0"

void __fastcall FUN_104ae3e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104aef10; body size 30 bytes.
#line 1 "ENTRY_104aef10"

void FUN_104aef10(void)

{
  thunk_FUN_101ed0d0();
  thunk_FUN_104aef40();
  thunk_FUN_104ae600();
  thunk_FUN_101ed5f0();
  return;
}


// Reference entry 104b4360; body size 45 bytes.
#line 1 "ENTRY_104b4360"

void __stdcall FUN_104b4360(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101f1cd0());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_102d65b0(param_2));
    if (cVar1 != '\0') {
      thunk_FUN_104b43f0();
    }
  }
  return;
}


// Reference entry 104b85c0; body size 33 bytes.
#line 1 "ENTRY_104b85c0"

void __fastcall FUN_104b85c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b85f0; body size 33 bytes.
#line 1 "ENTRY_104b85f0"

void __fastcall FUN_104b85f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b8690; body size 33 bytes.
#line 1 "ENTRY_104b8690"

void __fastcall FUN_104b8690(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b86c0; body size 33 bytes.
#line 1 "ENTRY_104b86c0"

void __fastcall FUN_104b86c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b8d90; body size 19 bytes.
#line 1 "ENTRY_104b8d90"

void __thiscall Recovered_Bulk::FUN_104b8d90(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b8e70; body size 19 bytes.
#line 1 "ENTRY_104b8e70"

void __thiscall Recovered_Bulk::FUN_104b8e70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b8e90; body size 19 bytes.
#line 1 "ENTRY_104b8e90"

void __thiscall Recovered_Bulk::FUN_104b8e90(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b8fe0; body size 57 bytes.
#line 1 "ENTRY_104b8fe0"

void __stdcall FUN_104b8fe0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIDateTimeManager:onTimeStatusChanged",param_2));
  if ((cVar1 == '\0') &&
     (cVar1 = thunk_FUN_101a2c70("SCIDateTimeManager:onTimeZoneChanged",param_2), cVar1 == '\0')) {
    return;
  }
  thunk_FUN_104ba760();
  return;
}


// Reference entry 104b9030; body size 23 bytes.
#line 1 "ENTRY_104b9030"

void __fastcall FUN_104b9030(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b91b0; body size 19 bytes.
#line 1 "ENTRY_104b91b0"

void __thiscall Recovered_Bulk::FUN_104b91b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b9200; body size 19 bytes.
#line 1 "ENTRY_104b9200"

void __thiscall Recovered_Bulk::FUN_104b9200(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b9220; body size 19 bytes.
#line 1 "ENTRY_104b9220"

void __thiscall Recovered_Bulk::FUN_104b9220(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104b92e0; body size 33 bytes.
#line 1 "ENTRY_104b92e0"

void __fastcall FUN_104b92e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104b9310; body size 33 bytes.
#line 1 "ENTRY_104b9310"

void __fastcall FUN_104b9310(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 104bcb00; body size 46 bytes.
#line 1 "ENTRY_104bcb00"

void __thiscall Recovered_Bulk::FUN_104bcb00(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x9c));
  if ((uVar1 <= param_2) && (param_2 < uVar1 + 4)) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x30))((&DAT_118a906c)[param_2 - uVar1]);
  }
  return;
}


// Reference entry 104bcb40; body size 34 bytes.
#line 1 "ENTRY_104bcb40"

void __stdcall FUN_104bcb40(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_104bd1e0();
  }
  return;
}


// Reference entry 104bcb70; body size 34 bytes.
#line 1 "ENTRY_104bcb70"

void __stdcall FUN_104bcb70(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_104bd050();
  }
  return;
}


// Reference entry 104bcd30; body size 48 bytes.
#line 1 "ENTRY_104bcd30"

void __fastcall FUN_104bcd30(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x90);
  if (param_1 == 0) {
    iVar1 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x6c))(iVar1);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))(param_1 + 0x90);
  return;
}


// Reference entry 104bcd90; body size 48 bytes.
#line 1 "ENTRY_104bcd90"

void __fastcall FUN_104bcd90(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0x90);
  if (param_1 == 0) {
    iVar1 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x70))(iVar1);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x70))(param_1 + 0x90);
  return;
}


// Reference entry 104bdde0; body size 19 bytes.
#line 1 "ENTRY_104bdde0"

void __thiscall Recovered_Bulk::FUN_104bdde0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104bde20; body size 29 bytes.
#line 1 "ENTRY_104bde20"

void __fastcall FUN_104bde20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10d9e6c0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x94));
  return;
}


// Reference entry 104bde60; body size 19 bytes.
#line 1 "ENTRY_104bde60"

void __thiscall Recovered_Bulk::FUN_104bde60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104c39b0; body size 33 bytes.
#line 1 "ENTRY_104c39b0"

void __fastcall FUN_104c39b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    thunk_FUN_104c49a0();
  }
  return;
}


// Reference entry 104c6100; body size 59 bytes.
#line 1 "ENTRY_104c6100"

void __stdcall FUN_104c6100(int param_1,int param_2)

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


// Reference entry 104c9d30; body size 19 bytes.
#line 1 "ENTRY_104c9d30"

void __thiscall Recovered_Bulk::FUN_104c9d30(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104c9d70; body size 36 bytes.
#line 1 "ENTRY_104c9d70"

void __stdcall FUN_104c9d70(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2c70("SCIHousehold:onZoneGroupsChanged",param_2));
  if (cVar1 != '\0') {
    thunk_FUN_104ca270();
  }
  return;
}


// Reference entry 104c9db0; body size 19 bytes.
#line 1 "ENTRY_104c9db0"

void __thiscall Recovered_Bulk::FUN_104c9db0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104cc500; body size 60 bytes.
#line 1 "ENTRY_104cc500"

void __fastcall FUN_104cc500(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 104cc560; body size 60 bytes.
#line 1 "ENTRY_104cc560"

void __fastcall FUN_104cc560(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 104d13a0; body size 59 bytes.
#line 1 "ENTRY_104d13a0"

void __stdcall FUN_104d13a0(int param_1,int param_2)

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


// Reference entry 104d4000; body size 29 bytes.
#line 1 "ENTRY_104d4000"

void __stdcall FUN_104d4000(int *param_1)

{
  char *_Str;
  
  _Str = (char *)("");
  if ((char *)*(char *)(param_1) != (char *)0x0) {
    _Str = (char *)((char *)*param_1);
  }
  atoi(_Str);
  return;
}


// Reference entry 104d5270; body size 54 bytes.
#line 1 "ENTRY_104d5270"

undefined4 * __fastcall FUN_104d5270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseGroupsInfo);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104d52e0; body size 33 bytes.
#line 1 "ENTRY_104d52e0"

void __fastcall FUN_104d52e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x28) {
    thunk_FUN_104d53b0();
  }
  return;
}


// Reference entry 104d5490; body size 37 bytes.
#line 1 "ENTRY_104d5490"

void __fastcall FUN_104d5490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseGroupsInfo);
  thunk_FUN_104d5310();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104d5550; body size 59 bytes.
#line 1 "ENTRY_104d5550"

undefined4 * __thiscall Recovered_Bulk::FUN_104d5550(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseGroupsInfo);
  thunk_FUN_104d5310();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104d56b0; body size 35 bytes.
#line 1 "ENTRY_104d56b0"

void __stdcall FUN_104d56b0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    thunk_FUN_104d53b0();
  }
  return;
}


// Reference entry 104d5ca0; body size 46 bytes.
#line 1 "ENTRY_104d5ca0"

void __fastcall FUN_104d5ca0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_104d53b0();
      iVar2 = (int)(iVar2 + 0x28);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 104d5ce0; body size 47 bytes.
#line 1 "ENTRY_104d5ce0"

void __fastcall FUN_104d5ce0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  iVar2 = (int)(*(int *)(param_1 + 8));
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_104d53b0();
      iVar2 = (int)(iVar2 + 0x28);
    } while (iVar2 != iVar1);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    return;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}


// Reference entry 104d5d20; body size 59 bytes.
#line 1 "ENTRY_104d5d20"

void __stdcall FUN_104d5d20(int param_1,int param_2)

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


// Reference entry 104d6310; body size 51 bytes.
#line 1 "ENTRY_104d6310"

int __thiscall Recovered_Bulk::FUN_104d6310(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8));
  if (param_2 < (uint)(iVar1 / 0x28)) {
    return (int)(((uint)((int3)(param_2 * 5 >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 8) + 8 + param_2 * 0x28))));
  }
  return (int)((uint)(uint3)((ulonglong)((longlong)iVar1 * 0x66666667) >> 8) << 8);
}


// Reference entry 104d6600; body size 51 bytes.
#line 1 "ENTRY_104d6600"

int __thiscall Recovered_Bulk::FUN_104d6600(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8));
  if (param_2 < (uint)(iVar1 / 0x28)) {
    return (int)(((uint)((int3)(param_2 * 5 >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 8) + 0x10 + param_2 * 0x28))));
  }
  return (int)((uint)(uint3)((ulonglong)((longlong)iVar1 * 0x66666667) >> 8) << 8);
}


// Reference entry 104d6e20; body size 59 bytes.
#line 1 "ENTRY_104d6e20"

void __thiscall Recovered_Bulk::FUN_104d6e20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_104d68b0(puVar1,param_2);
  return;
}


// Reference entry 104d7e00; body size 19 bytes.
#line 1 "ENTRY_104d7e00"

void __thiscall Recovered_Bulk::FUN_104d7e00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104d7ed0; body size 19 bytes.
#line 1 "ENTRY_104d7ed0"

void __thiscall Recovered_Bulk::FUN_104d7ed0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104d8290; body size 60 bytes.
#line 1 "ENTRY_104d8290"

void __stdcall FUN_104d8290(int param_1,int param_2)

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


// Reference entry 104d8330; body size 51 bytes.
#line 1 "ENTRY_104d8330"

void __thiscall Recovered_Bulk::FUN_104d8330(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  SCStr aSStack_10 [4];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0x104d833d);
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))());
  if (cVar1 == '\0') {
    uStack_8 = (undefined4)(param_2);
    piStack_c = (int *)(param_1);
    ((SCStr *)(aSStack_10))->int_allocRep("SCIBrowseDataSource:onBrowseChanged");
    thunk_FUN_103d65f0();
  }
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  return;
}


// Reference entry 104d8370; body size 51 bytes.
#line 1 "ENTRY_104d8370"

void __thiscall Recovered_Bulk::FUN_104d8370(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  SCStr aSStack_10 [4];
  int *piStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0x104d837d);
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))());
  if (cVar1 == '\0') {
    uStack_8 = (undefined4)(param_2);
    piStack_c = (int *)(param_1);
    ((SCStr *)(aSStack_10))->int_allocRep("SCIBrowseDataSource:onBrowseChanged");
    thunk_FUN_103d63d0();
  }
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  return;
}


// Reference entry 104d8c80; body size 24 bytes.
#line 1 "ENTRY_104d8c80"

undefined4 __thiscall Recovered_Bulk::FUN_104d8c80(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x38))(param_2,param_3,param_4);
  return (undefined4)(param_3);
}


// Reference entry 104d9010; body size 18 bytes.
#line 1 "ENTRY_104d9010"

undefined4 __stdcall FUN_104d9010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (param_1 == 2) {
    uVar1 = (undefined4)(0x28);
  }
  return (undefined4)(uVar1);
}


// Reference entry 104d9030; body size 18 bytes.
#line 1 "ENTRY_104d9030"

undefined4 __stdcall FUN_104d9030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (param_1 == 2) {
    uVar1 = (undefined4)(0x28);
  }
  return (undefined4)(uVar1);
}


// Reference entry 104d9780; body size 33 bytes.
#line 1 "ENTRY_104d9780"

undefined4 FUN_104d9780(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 104d9d40; body size 59 bytes.
#line 1 "ENTRY_104d9d40"

void __thiscall Recovered_Bulk::FUN_104d9d40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_104d68b0(puVar1,param_2);
  return;
}


// Reference entry 104d9e10; body size 53 bytes.
#line 1 "ENTRY_104d9e10"

void __thiscall Recovered_Bulk::FUN_104d9e10(int param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0xd8))());
  if (cVar1 != '\0') {
    param_1[0x18] = (int)(param_2);
    cVar1 = (char)((**(code **)(*param_1 + 0x5c))());
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x110))(0);
    }
  }
  return;
}


// Reference entry 104dacb0; body size 20 bytes.
#line 1 "ENTRY_104dacb0"

undefined4 __thiscall Recovered_Bulk::FUN_104dacb0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x58))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 104daf30; body size 30 bytes.
#line 1 "ENTRY_104daf30"

undefined4 __thiscall Recovered_Bulk::FUN_104daf30(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  SCLibrary *pSVar1;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  (**(code **)(*(int *)pSVar1 + 0xc4))(param_2,param_1);
  return (undefined4)(param_2);
}


// Reference entry 104db100; body size 32 bytes.
#line 1 "ENTRY_104db100"

SCStr * __stdcall FUN_104db100(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4 *)(param_1 + 4) = DAT_121a07b4;
  return (SCStr *)(param_1);
}


// Reference entry 104db380; body size 36 bytes.
#line 1 "ENTRY_104db380"

undefined4 __thiscall Recovered_Bulk::FUN_104db380(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
  case 1:
  case 4:
    return (undefined4)(1);
  case 2:
  case 5:
    uVar1 = (undefined4)((**(code **)(*param_1 + 0x40))());
    return (undefined4)(uVar1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 104dcfc0; body size 61 bytes.
#line 1 "ENTRY_104dcfc0"

undefined4 __thiscall Recovered_Bulk::FUN_104dcfc0(SCIndexRange *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x2c));
  *piVar1 = (int)(*piVar1 + 1);
  if (*piVar1 < 0) {
    return (undefined4)(0);
  }
  if (*(uint *)(param_1 + 0x2c) < (uint)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3))
  {
    ((SCIndexRange *)(param_2))->op_assign((SCIndexRange *)(*(int *)(param_1 + 0x20) + *(uint *)(param_1 + 0x2c) * 8));
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 104dd520; body size 19 bytes.
#line 1 "ENTRY_104dd520"

uint __fastcall FUN_104dd520(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x18))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 104dd540; body size 41 bytes.
#line 1 "ENTRY_104dd540"

void __fastcall FUN_104dd540(int param_1)

{
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(*(undefined4 *)(param_1 + 0xc));
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}


// Reference entry 104ddc30; body size 44 bytes.
#line 1 "ENTRY_104ddc30"

undefined4 * __thiscall Recovered_Bulk::FUN_104ddc30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjBCInternalListener");
  param_1[6] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjBCInternalListener);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 104ddf60; body size 33 bytes.
#line 1 "ENTRY_104ddf60"

void __fastcall FUN_104ddf60(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar1 = (int)(thunk_FUN_11128910());
    if (iVar1 != 0) {
      FUN_10070892(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// Reference entry 104ddf90; body size 33 bytes.
#line 1 "ENTRY_104ddf90"

void __fastcall FUN_104ddf90(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar1 = (int)(thunk_FUN_11128910());
    if (iVar1 != 0) {
      FUN_10065348(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


// Reference entry 104ddfd0; body size 51 bytes.
#line 1 "ENTRY_104ddfd0"

undefined4 * __thiscall Recovered_Bulk::FUN_104ddfd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjHHInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHInternalListener);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 104dfa90; body size 55 bytes.
#line 1 "ENTRY_104dfa90"

void __thiscall Recovered_Bulk::FUN_104dfa90(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  iVar2 = (int)(*param_2);
  if (iVar1 != 0) {
    iVar3 = (int)(*(int *)(param_1 + 0xc));
    piVar4 = (int *)(*(int **)(iVar2 + 4));
    piVar5 = (int *)(*(int **)(param_1 + 8));
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = (int)(iVar3);
    *piVar5 = (int)(iVar2);
    *(int **)(iVar2 + 4) = piVar5;
    param_2[1] = (int)(param_2[1] + iVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


// Reference entry 104e0430; body size 40 bytes.
#line 1 "ENTRY_104e0430"

int __thiscall Recovered_Bulk::FUN_104e0430(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_104e04f0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104e0470; body size 40 bytes.
#line 1 "ENTRY_104e0470"

int __thiscall Recovered_Bulk::FUN_104e0470(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_104e05c0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104e04b0; body size 40 bytes.
#line 1 "ENTRY_104e04b0"

int __thiscall Recovered_Bulk::FUN_104e04b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_104e0690(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 104e1d40; body size 59 bytes.
#line 1 "ENTRY_104e1d40"

void __thiscall Recovered_Bulk::FUN_104e1d40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_104dff70(puVar1,param_2);
  return;
}


// Reference entry 104e1d90; body size 59 bytes.
#line 1 "ENTRY_104e1d90"

void __thiscall Recovered_Bulk::FUN_104e1d90(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_104e0170(puVar1,param_2);
  return;
}


// Reference entry 104e2dd0; body size 39 bytes.
#line 1 "ENTRY_104e2dd0"

undefined4 * __fastcall FUN_104e2dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 104e2e00; body size 39 bytes.
#line 1 "ENTRY_104e2e00"

undefined4 * __fastcall FUN_104e2e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 104e2e30; body size 39 bytes.
#line 1 "ENTRY_104e2e30"

undefined4 * __fastcall FUN_104e2e30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 104e3b20; body size 38 bytes.
#line 1 "ENTRY_104e3b20"

void __fastcall FUN_104e3b20(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_104e3e20();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x14);
  }
  return;
}


// Reference entry 104e40d0; body size 25 bytes.
#line 1 "ENTRY_104e40d0"

void __fastcall FUN_104e40d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFavoriteAVTMetadataCB);
  thunk_FUN_10202e00();
  thunk_FUN_11202570();
  return;
}


// Reference entry 104e4750; body size 57 bytes.
#line 1 "ENTRY_104e4750"

int * __thiscall Recovered_Bulk::FUN_104e4750(char param_2)
{
  int *param_1 = (int *)this;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((uint *)(*param_1 + ((uint)param_1[1] >> 5) * 4));
  uVar2 = (uint)(1 << ((byte)param_1[1] & 0x1f));
  if (param_2 != '\0') {
    *puVar1 = (uint)(*puVar1 | uVar2);
    return (int *)(param_1);
  }
  *puVar1 = (uint)(~uVar2 & *puVar1);
  return (int *)(param_1);
}


// Reference entry 104e4970; body size 27 bytes.
#line 1 "ENTRY_104e4970"

int __stdcall FUN_104e4970(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104e0f40(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104e49a0; body size 27 bytes.
#line 1 "ENTRY_104e49a0"

int __stdcall FUN_104e49a0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104e11c0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104e49d0; body size 27 bytes.
#line 1 "ENTRY_104e49d0"

int __stdcall FUN_104e49d0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104e0ca0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104e4f50; body size 51 bytes.
#line 1 "ENTRY_104e4f50"

undefined4 * __thiscall Recovered_Bulk::FUN_104e4f50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFavoriteAVTMetadataCB);
  thunk_FUN_10202e00();
  thunk_FUN_11202570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104e6ab0; body size 23 bytes.
#line 1 "ENTRY_104e6ab0"

void __fastcall FUN_104e6ab0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_104e5a60(*(int *)(param_1 + 8) + 1));
  thunk_FUN_104e5f10(uVar1);
  return;
}


// Reference entry 104e6b80; body size 21 bytes.
#line 1 "ENTRY_104e6b80"

void __fastcall FUN_104e6b80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_104e5a60(*(undefined4 *)(param_1 + 8)));
  thunk_FUN_104e5f10(uVar1);
  return;
}


// Reference entry 104e9f10; body size 60 bytes.
#line 1 "ENTRY_104e9f10"

void __stdcall FUN_104e9f10(int param_1,int param_2)

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


// Reference entry 104e9f60; body size 60 bytes.
#line 1 "ENTRY_104e9f60"

void __stdcall FUN_104e9f60(int param_1,int param_2)

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


// Reference entry 104ea530; body size 35 bytes.
#line 1 "ENTRY_104ea530"

int __thiscall Recovered_Bulk::FUN_104ea530(int param_2)
{
  int param_1 = (int )this;
  if (0xb < param_2) {
    return (int)(0);
  }
  return (int)(*(int *)(param_1 + 0x3c + param_2 * 0xc) - *(int *)(param_1 + 0x38 + param_2 * 0xc) >> 3);
}


// Reference entry 104ec220; body size 51 bytes.
#line 1 "ENTRY_104ec220"

void __stdcall FUN_104ec220(SCStr *param_1, SCStr *param_2, unsigned int recovered_unused_stack_0)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("RINCON_AssociatedZPUDN"));
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_2))->op_eq("FV:2"));
    if (bVar1) {
      thunk_FUN_104ecc10();
    }
  }
  return;
}


// Reference entry 104ec340; body size 39 bytes.
#line 1 "ENTRY_104ec340"

void __thiscall Recovered_Bulk::FUN_104ec340(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x248) == (int)(param_2)) {
    *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 1;
    *(undefined4 *)(param_1 + 0x248) = 0;
    thunk_FUN_104ecc10();
  }
  return;
}


// Reference entry 104eca70; body size 59 bytes.
#line 1 "ENTRY_104eca70"

void __thiscall Recovered_Bulk::FUN_104eca70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_104dff70(puVar1,param_2);
  return;
}


// Reference entry 104ecac0; body size 59 bytes.
#line 1 "ENTRY_104ecac0"

void __thiscall Recovered_Bulk::FUN_104ecac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_104e0170(puVar1,param_2);
  return;
}


// Reference entry 104ed650; body size 26 bytes.
#line 1 "ENTRY_104ed650"

void __fastcall FUN_104ed650(int param_1)

{
  if (*(char *)(param_1 + 0x161) == '\0') {
    thunk_FUN_104eae30();
  }
                    
                    
  (**(code **)(**(int **)(param_1 + 0x30) + 0x14))();
  return;
}


// Reference entry 104ee0a0; body size 39 bytes.
#line 1 "ENTRY_104ee0a0"

int __fastcall FUN_104ee0a0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x14))(param_1));
    if (iVar1 == 0) {
      thunk_FUN_104ee000();
    }
    return (int)(iVar1);
  }
  return (int)(0);
}


// Reference entry 104f8b50; body size 60 bytes.
#line 1 "ENTRY_104f8b50"

int __thiscall Recovered_Bulk::FUN_104f8b50(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_104f8c40(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 104f97a0; body size 59 bytes.
#line 1 "ENTRY_104f97a0"

void __thiscall Recovered_Bulk::FUN_104f97a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_104f8780(puVar1,param_2);
  return;
}


// Reference entry 104f9e70; body size 48 bytes.
#line 1 "ENTRY_104f9e70"

undefined4 * __fastcall FUN_104f9e70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 104fa0a0; body size 39 bytes.
#line 1 "ENTRY_104fa0a0"

undefined4 * __fastcall FUN_104fa0a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 104fab60; body size 60 bytes.
#line 1 "ENTRY_104fab60"

void __fastcall FUN_104fab60(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 104fabc0; body size 60 bytes.
#line 1 "ENTRY_104fabc0"

void __fastcall FUN_104fabc0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 104fb850; body size 27 bytes.
#line 1 "ENTRY_104fb850"

int __stdcall FUN_104fb850(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104f8fb0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 104fde60; body size 60 bytes.
#line 1 "ENTRY_104fde60"

void __stdcall FUN_104fde60(int param_1,int param_2)

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


// Reference entry 104ff720; body size 59 bytes.
#line 1 "ENTRY_104ff720"

void __thiscall Recovered_Bulk::FUN_104ff720(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_104f8780(puVar1,param_2);
  return;
}


// Reference entry 104ffd30; body size 30 bytes.
#line 1 "ENTRY_104ffd30"

undefined4 __stdcall FUN_104ffd30(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_104f8fb0(local_8,param_1));
  return (undefined4)(((uint)((int3)((uint)*piVar1 >> 8)) << 8 | (uint)(*(undefined1 *)(*piVar1 + 0xc))));
}


// Reference entry 10500110; body size 57 bytes.
#line 1 "ENTRY_10500110"

void __stdcall FUN_10500110(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10500110(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10500760; body size 48 bytes.
#line 1 "ENTRY_10500760"

undefined4 * __fastcall FUN_10500760(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 105007a0; body size 48 bytes.
#line 1 "ENTRY_105007a0"

undefined4 * __fastcall FUN_105007a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10503240; body size 60 bytes.
#line 1 "ENTRY_10503240"

void __fastcall FUN_10503240(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10503690; body size 25 bytes.
#line 1 "ENTRY_10503690"

void __fastcall FUN_10503690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10503780; body size 50 bytes.
#line 1 "ENTRY_10503780"

void __fastcall FUN_10503780(undefined4 *param_1)

{
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCContentProviderInfoViewHeaderDataSource);
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105037c0; body size 25 bytes.
#line 1 "ENTRY_105037c0"

void __fastcall FUN_105037c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10503910; body size 55 bytes.
#line 1 "ENTRY_10503910"

void __fastcall FUN_10503910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoTextViewDataSource);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCInfoTextViewDataSource);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  param_1[3] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10503d30; body size 22 bytes.
#line 1 "ENTRY_10503d30"

void FUN_10503d30(void)

{
  thunk_FUN_10503c60();
  thunk_FUN_10503400();
  return;
}


// Reference entry 10503d50; body size 35 bytes.
#line 1 "ENTRY_10503d50"

void __fastcall FUN_10503d50(undefined4 *param_1)

{
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCInfoViewDynamicCPMenu);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10503ef0; body size 22 bytes.
#line 1 "ENTRY_10503ef0"

void FUN_10503ef0(void)

{
  thunk_FUN_10503dd0();
  thunk_FUN_10504060();
  return;
}


// Reference entry 10504240; body size 22 bytes.
#line 1 "ENTRY_10504240"

void FUN_10504240(void)

{
  thunk_FUN_10504170();
  thunk_FUN_105035b0();
  return;
}


// Reference entry 10504260; body size 25 bytes.
#line 1 "ENTRY_10504260"

void __fastcall FUN_10504260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10504370; body size 25 bytes.
#line 1 "ENTRY_10504370"

void __fastcall FUN_10504370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  return;
}


// Reference entry 10504b30; body size 50 bytes.
#line 1 "ENTRY_10504b30"

undefined4 * __thiscall Recovered_Bulk::FUN_10504b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10504c00; body size 50 bytes.
#line 1 "ENTRY_10504c00"

undefined4 * __thiscall Recovered_Bulk::FUN_10504c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10505060; body size 48 bytes.
#line 1 "ENTRY_10505060"

undefined4 __thiscall Recovered_Bulk::FUN_10505060(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10503c60();
  thunk_FUN_10503400();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x200);
  }
  return (undefined4)(param_1);
}


// Reference entry 105050a0; body size 60 bytes.
#line 1 "ENTRY_105050a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105050a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCInfoViewDynamicCPMenu);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10505190; body size 48 bytes.
#line 1 "ENTRY_10505190"

undefined4 __thiscall Recovered_Bulk::FUN_10505190(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10503dd0();
  thunk_FUN_10504060();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x208);
  }
  return (undefined4)(param_1);
}


// Reference entry 10505370; body size 48 bytes.
#line 1 "ENTRY_10505370"

undefined4 __thiscall Recovered_Bulk::FUN_10505370(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10504170();
  thunk_FUN_105035b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1f8);
  }
  return (undefined4)(param_1);
}


// Reference entry 105056e0; body size 39 bytes.
#line 1 "ENTRY_105056e0"

undefined4 * __stdcall FUN_105056e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_8 [8];
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(local_8,"AVTransportURIMetaData"));
  *param_1 = (undefined4)(*puVar1);
  param_1[1] = (undefined4)(puVar1[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 105057b0; body size 39 bytes.
#line 1 "ENTRY_105057b0"

undefined4 * __stdcall FUN_105057b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_8 [8];
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(local_8,"CurrentTrackMetaData"));
  *param_1 = (undefined4)(*puVar1);
  param_1[1] = (undefined4)(puVar1[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 10505800; body size 39 bytes.
#line 1 "ENTRY_10505800"

undefined4 * __stdcall FUN_10505800(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_8 [8];
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(local_8,"r:EnqueuedTransportURIMetaData"));
  *param_1 = (undefined4)(*puVar1);
  param_1[1] = (undefined4)(puVar1[1]);
  return (undefined4 *)(param_1);
}


// Reference entry 10505b50; body size 48 bytes.
#line 1 "ENTRY_10505b50"

int __fastcall FUN_10505b50(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x3c))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10505d30; body size 50 bytes.
#line 1 "ENTRY_10505d30"

void __thiscall Recovered_Bulk::FUN_10505d30(void)
{
  int param_1 = (int )this;
  int in_stack_00000010;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  *(undefined1 *)(param_1 + 0x14) = 1;
  if ((in_stack_00000010 != 0) && (iStack_c = *(int *)(param_1 + -0xa8), iStack_c != 0)) {
    uStack_8 = (undefined4)(0);
    iStack_10 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
    thunk_FUN_103d65f0();
  }
  return;
}


// Reference entry 10505d70; body size 50 bytes.
#line 1 "ENTRY_10505d70"

void __thiscall Recovered_Bulk::FUN_10505d70(void)
{
  int param_1 = (int )this;
  int in_stack_00000010;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((in_stack_00000010 != 0) && (iStack_c = *(int *)(param_1 + -0xa8), iStack_c != 0)) {
    uStack_8 = (undefined4)(0);
    iStack_10 = (int)(param_1);
    ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
    thunk_FUN_103d65f0();
  }
  return;
}


// Reference entry 105077d0; body size 39 bytes.
#line 1 "ENTRY_105077d0"

undefined4 __fastcall FUN_105077d0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x20))());
  if (cVar1 != '\0') {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x38))());
                    
                    
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x17c))());
    return (undefined4)(uVar3);
  }
  return (undefined4)(7);
}


// Reference entry 105095e0; body size 49 bytes.
#line 1 "ENTRY_105095e0"

undefined4 * __thiscall Recovered_Bulk::FUN_105095e0(undefined4 *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x38))());
    (**(code **)(*piVar1 + 0x184))(param_2);
    return (undefined4 *)(param_3);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 1050a980; body size 45 bytes.
#line 1 "ENTRY_1050a980"

uint __fastcall FUN_1050a980(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x13c));
  if ((((((char *)(pcVar1) == (char *)0x0) || (*pcVar1 == '\0')) ||
       (pcVar1 = *(char **)(param_1 + 0x138), (char *)(pcVar1) == (char *)0x0)) || (*pcVar1 == '\0')) &&
     (*(char *)(param_1 + 0x144) == '\0')) {
    return (uint)((uint)pcVar1 & 0xffffff00);
  }
  return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1050a9e0; body size 60 bytes.
#line 1 "ENTRY_1050a9e0"

uint __fastcall FUN_1050a9e0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x140));
  if ((((((char *)(pcVar1) == (char *)0x0) || (*pcVar1 == '\0')) ||
       (pcVar1 = *(char **)(param_1 + 0x13c), (char *)(pcVar1) == (char *)0x0)) ||
      (((*pcVar1 == '\0' || (pcVar1 = *(char **)(param_1 + 0x138), (char *)(pcVar1) == (char *)0x0)) ||
       (*pcVar1 == '\0')))) && (*(char *)(param_1 + 0x148) == '\0')) {
    return (uint)((uint)pcVar1 & 0xffffff00);
  }
  return (uint)(((uint)((int3)((uint)pcVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1050aac0; body size 17 bytes.
#line 1 "ENTRY_1050aac0"

void __fastcall FUN_1050aac0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x180))());
                    
                    
  (**(code **)(*piVar1 + 0x14))();
  return;
}


// Reference entry 1050aae0; body size 33 bytes.
#line 1 "ENTRY_1050aae0"

undefined4 __fastcall FUN_1050aae0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  if (param_1[2] != 0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x38))());
    cVar1 = (char)((**(code **)(*piVar2 + 0x164))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1050adb0; body size 47 bytes.
#line 1 "ENTRY_1050adb0"

void __fastcall FUN_1050adb0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  thunk_FUN_104d98f0();
  cVar1 = (char)((**(code **)(*param_1 + 0x5c))());
  if (cVar1 == '\0') {
    piVar2 = (int *)(param_1 + 0x20);
    (**(code **)(*param_1 + 0x180))(piVar2);
    thunk_FUN_111a05c0(piVar2);
  }
  return;
}


// Reference entry 1050adf0; body size 42 bytes.
#line 1 "ENTRY_1050adf0"

void __fastcall FUN_1050adf0(int *param_1)

{
  uint uVar1;
  
  thunk_FUN_104d9cc0();
  uVar1 = (uint)(-(uint)((int *)(param_1) != (int *)0x0) & (uint)(param_1 + 0x20));
  (**(code **)(*param_1 + 0x180))(uVar1);
  thunk_FUN_111a05e0(uVar1);
  return;
}


// Reference entry 1050ae30; body size 63 bytes.
#line 1 "ENTRY_1050ae30"

void __thiscall Recovered_Bulk::FUN_1050ae30(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 8) + 8))());
      goto LAB_1050ae52;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc));
LAB_1050ae52:
  if (iVar2 == param_2) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_111a0620();
  }
  return;
}


// Reference entry 1050e590; body size 23 bytes.
#line 1 "ENTRY_1050e590"

void __stdcall FUN_1050e590(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 1050fcf0; body size 60 bytes.
#line 1 "ENTRY_1050fcf0"

void __fastcall FUN_1050fcf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_101c42f0(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_101c6ae0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1050ff30; body size 60 bytes.
#line 1 "ENTRY_1050ff30"

void __fastcall FUN_1050ff30(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1050ff90; body size 60 bytes.
#line 1 "ENTRY_1050ff90"

void __fastcall FUN_1050ff90(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105106c0; body size 29 bytes.
#line 1 "ENTRY_105106c0"

void __fastcall FUN_105106c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewHelper);
  thunk_FUN_10202e00();
  thunk_FUN_10202e00();
  return;
}


// Reference entry 10510c40; body size 55 bytes.
#line 1 "ENTRY_10510c40"

undefined4 * __thiscall Recovered_Bulk::FUN_10510c40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewHelper);
  thunk_FUN_10202e00();
  thunk_FUN_10202e00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x140);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10510cb0; body size 48 bytes.
#line 1 "ENTRY_10510cb0"

int __fastcall FUN_10510cb0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x3c))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10510d60; body size 59 bytes.
#line 1 "ENTRY_10510d60"

void __thiscall Recovered_Bulk::FUN_10510d60(undefined4 *param_2)
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
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
    return;
  }
  thunk_FUN_1026e620(puVar1,param_2);
  return;
}


// Reference entry 10510db0; body size 31 bytes.
#line 1 "ENTRY_10510db0"

void __thiscall Recovered_Bulk::FUN_10510db0(void)
{
  int param_1 = (int )this;
  undefined2 in_stack_00000014;
  
  *(undefined2 *)(param_1 + 0x1c8) = in_stack_00000014;
  (**(code **)(*(int *)(param_1 + -0x84) + 0x114))(0);
  return;
}


// Reference entry 10513930; body size 18 bytes.
#line 1 "ENTRY_10513930"

undefined4 __fastcall FUN_10513930(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x30) + 0x34))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10513950; body size 50 bytes.
#line 1 "ENTRY_10513950"

SCStr * __thiscall Recovered_Bulk::FUN_10513950(SCStr *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x2c))(param_2,param_3);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10513990; body size 46 bytes.
#line 1 "ENTRY_10513990"

SCStr * __thiscall Recovered_Bulk::FUN_10513990(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x30))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10513af0; body size 23 bytes.
#line 1 "ENTRY_10513af0"

undefined4 __fastcall FUN_10513af0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10514040; body size 21 bytes.
#line 1 "ENTRY_10514040"

undefined4 __fastcall FUN_10514040(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x21c) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x21c) + 0x188))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10514290; body size 20 bytes.
#line 1 "ENTRY_10514290"

undefined4 __fastcall FUN_10514290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 105142b0; body size 26 bytes.
#line 1 "ENTRY_105142b0"

undefined4 __fastcall FUN_105142b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10508f40(param_1 + 4));
  if (iVar1 != 0) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10515050; body size 40 bytes.
#line 1 "ENTRY_10515050"

undefined4 * __thiscall Recovered_Bulk::FUN_10515050(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x24))(param_2);
    return (undefined4 *)(param_3);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10515150; body size 18 bytes.
#line 1 "ENTRY_10515150"

undefined4 __fastcall FUN_10515150(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x14))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 105169a0; body size 20 bytes.
#line 1 "ENTRY_105169a0"

undefined4 __fastcall FUN_105169a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10516e40; body size 22 bytes.
#line 1 "ENTRY_10516e40"

undefined4 __fastcall FUN_10516e40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10517030; body size 27 bytes.
#line 1 "ENTRY_10517030"

undefined4 __fastcall FUN_10517030(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x21c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x21c) + 0x5c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10517060; body size 24 bytes.
#line 1 "ENTRY_10517060"

undefined4 __fastcall FUN_10517060(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x30) + 0x20))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 105171a0; body size 27 bytes.
#line 1 "ENTRY_105171a0"

void __fastcall FUN_105171a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_105120a0();
  (**(code **)(*(int *)(param_1 + -0x28) + 0x110))(0);
  return;
}


// Reference entry 105171d0; body size 28 bytes.
#line 1 "ENTRY_105171d0"

void __fastcall FUN_105171d0(int param_1)

{
  thunk_FUN_105120a0();
  (**(code **)(*(int *)(param_1 + -0x90) + 0x110))(0);
  return;
}


// Reference entry 1051a170; body size 52 bytes.
#line 1 "ENTRY_1051a170"

undefined4 __fastcall FUN_1051a170(int param_1)

{
  char cVar1;
  
  if ((*(short *)(param_1 + 0x24c) == 0) && (*(int **)(param_1 + 0x21c) != (int *)0x0)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x21c) + 0x94))());
    if (cVar1 != '\0') {
      thunk_FUN_10511190();
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1051a4a0; body size 22 bytes.
#line 1 "ENTRY_1051a4a0"

uint __fastcall FUN_1051a4a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x1c8) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x1c8) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1051a4c0; body size 35 bytes.
#line 1 "ENTRY_1051a4c0"

uint __fastcall FUN_1051a4c0(int param_1)

{
  char *_Str;
  ulong uVar1;
  
  _Str = (char *)(*(char **)(param_1 + 0xcc));
  if (((char *)(_Str) != (char *)0x0) && (*_Str != '\0')) {
    uVar1 = (ulong)(strtoul(_Str,(char **)0x0,10));
    return (uint)(uVar1 & 0xffffff01);
  }
  return (uint)((uint)_Str & 0xffffff00);
}


// Reference entry 1051b480; body size 23 bytes.
#line 1 "ENTRY_1051b480"

void __stdcall FUN_1051b480(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 1051d480; body size 54 bytes.
#line 1 "ENTRY_1051d480"

void FUN_1051d480(void)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_111a36f0(DAT_12126b84 );

  return;

 } catch (...) { }
}


// Reference entry 1052dfd0; body size 24 bytes.
#line 1 "ENTRY_1052dfd0"

undefined4 __fastcall FUN_1052dfd0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))());
    if (cVar1 != '\0') {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 1052e200; body size 43 bytes.
#line 1 "ENTRY_1052e200"

int __fastcall FUN_1052e200(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 3) * 4);
}


// Reference entry 1052e5b0; body size 25 bytes.
#line 1 "ENTRY_1052e5b0"

int __fastcall FUN_1052e5b0(int param_1)

{
  short sVar1;
  uint3 uVar2;
  
  sVar1 = (short)(*(short *)(param_1 + 0x10));
  uVar2 = (uint3)((uint3)(byte)((ushort)sVar1 >> 8));
  if ((sVar1 != 0) && (sVar1 != 0x323)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 1052e790; body size 26 bytes.
#line 1 "ENTRY_1052e790"

uint __fastcall FUN_1052e790(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x68))());
  if ((char)uVar1 != '\0') {
    uVar1 = (uint)(thunk_FUN_10dd3060());
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 1052e820; body size 33 bytes.
#line 1 "ENTRY_1052e820"

void __fastcall FUN_1052e820(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 1052e850; body size 60 bytes.
#line 1 "ENTRY_1052e850"

void __fastcall FUN_1052e850(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x78) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x74) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 1052e8b0; body size 33 bytes.
#line 1 "ENTRY_1052e8b0"

void __fastcall FUN_1052e8b0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 1052e8f0; body size 31 bytes.
#line 1 "ENTRY_1052e8f0"

undefined4 __fastcall FUN_1052e8f0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x2c))());
  if ((cVar1 != '\0') && (param_1[0x25] == -1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1052e9f0; body size 42 bytes.
#line 1 "ENTRY_1052e9f0"

undefined4 * __fastcall FUN_1052e9f0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1052fd10; body size 45 bytes.
#line 1 "ENTRY_1052fd10"

undefined4 * __fastcall FUN_1052fd10(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1052fe50; body size 55 bytes.
#line 1 "ENTRY_1052fe50"

undefined4 * __fastcall FUN_1052fe50(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(*(int *)(param_1 + 8) + 0xd1) = 1;
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10531c00; body size 45 bytes.
#line 1 "ENTRY_10531c00"

undefined4 * __fastcall FUN_10531c00(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10531dd0; body size 45 bytes.
#line 1 "ENTRY_10531dd0"

undefined4 * __fastcall FUN_10531dd0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10531e10; body size 45 bytes.
#line 1 "ENTRY_10531e10"

undefined4 * __fastcall FUN_10531e10(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 105322f0; body size 55 bytes.
#line 1 "ENTRY_105322f0"

undefined4 * __fastcall FUN_105322f0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(*(int *)(param_1 + 8) + 0xd1) = 1;
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 105327f0; body size 19 bytes.
#line 1 "ENTRY_105327f0"

undefined4 __stdcall FUN_105327f0(undefined4 param_1)

{
  createSCIntArray();
  return (undefined4)(param_1);
}


// Reference entry 105330f0; body size 31 bytes.
#line 1 "ENTRY_105330f0"

void FUN_105330f0(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCIWizard:onStateChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10533120; body size 31 bytes.
#line 1 "ENTRY_10533120"

void FUN_10533120(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCIWizard:onStateTransitionsEnabled");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10533150; body size 31 bytes.
#line 1 "ENTRY_10533150"

void FUN_10533150(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCIWizard:onStateUpdate");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10533c20; body size 26 bytes.
#line 1 "ENTRY_10533c20"

undefined4 __thiscall Recovered_Bulk::FUN_10533c20(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x60))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10534670; body size 48 bytes.
#line 1 "ENTRY_10534670"

SCStr * FUN_10534670(SCStr *param_1,int param_2)

{
  if (param_2 != 0) {
    ((SCStr *)(param_1))->int_allocRep("unknown");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("default");
  return (SCStr *)(param_1);
}


// Reference entry 10534e40; body size 37 bytes.
#line 1 "ENTRY_10534e40"

bool __thiscall Recovered_Bulk::FUN_10534e40(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (param_2 != 0) {
    return (bool)(false);
  }
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x1e8))());
  return (bool)(cVar1 != '\0');
}


// Reference entry 10535630; body size 26 bytes.
#line 1 "ENTRY_10535630"

undefined4 __thiscall Recovered_Bulk::FUN_10535630(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x6c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10535770; body size 26 bytes.
#line 1 "ENTRY_10535770"

undefined4 __thiscall Recovered_Bulk::FUN_10535770(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x48))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 105357c0; body size 29 bytes.
#line 1 "ENTRY_105357c0"

undefined4 __thiscall Recovered_Bulk::FUN_105357c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 105358a0; body size 38 bytes.
#line 1 "ENTRY_105358a0"

undefined4 FUN_105358a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_110c2c60());
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_10533e90());
    uVar2 = (undefined4)(thunk_FUN_110c1f30(uVar2));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10535a50; body size 19 bytes.
#line 1 "ENTRY_10535a50"

undefined4 __stdcall FUN_10535a50(undefined4 param_1)

{
  createPropertyBag();
  return (undefined4)(param_1);
}


// Reference entry 105361f0; body size 26 bytes.
#line 1 "ENTRY_105361f0"

undefined4 __thiscall Recovered_Bulk::FUN_105361f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x54))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10536220; body size 26 bytes.
#line 1 "ENTRY_10536220"

undefined4 __thiscall Recovered_Bulk::FUN_10536220(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x18))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1053dbc0; body size 46 bytes.
#line 1 "ENTRY_1053dbc0"

void __fastcall FUN_1053dbc0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x14) + 8))();
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


// Reference entry 1053dc00; body size 56 bytes.
#line 1 "ENTRY_1053dc00"

undefined4 __fastcall FUN_1053dc00(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (uint)((*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1);
  return (undefined4)(*(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x5c) + (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) +
          (uVar1 & 3) * 4));
}


// Reference entry 1053e3e0; body size 56 bytes.
#line 1 "ENTRY_1053e3e0"

undefined4 __fastcall FUN_1053e3e0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (uint)((*(int *)(param_1 + 0x68) + *(int *)(param_1 + 100)) - 1);
  return (undefined4)(*(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x5c) + (uVar1 >> 2 & *(int *)(param_1 + 0x60) - 1U) * 4) +
          (uVar1 & 3) * 4));
}


// Reference entry 1053f5b0; body size 21 bytes.
#line 1 "ENTRY_1053f5b0"

void __fastcall FUN_1053f5b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(0x9c4));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}


// Reference entry 1053f5d0; body size 21 bytes.
#line 1 "ENTRY_1053f5d0"

void __fastcall FUN_1053f5d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(5000));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}


// Reference entry 1053f5f0; body size 28 bytes.
#line 1 "ENTRY_1053f5f0"

void __fastcall FUN_1053f5f0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 1053f620; body size 28 bytes.
#line 1 "ENTRY_1053f620"

void __fastcall FUN_1053f620(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 10541030; body size 16 bytes.
#line 1 "ENTRY_10541030"

void __fastcall FUN_10541030(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x9c))();
  return;
}


// Reference entry 10541090; body size 43 bytes.
#line 1 "ENTRY_10541090"

uint __fastcall FUN_10541090(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x54))());
  if (uVar1 == 1) {
    iVar2 = (int)((**(code **)(*param_1 + 0x5c))());
    uVar1 = (uint)((*(uint *)(iVar2 + 4) & 0x7f) - 1 & 0xfffffffe);
    if (uVar1 == 10) {
      return (uint)(1);
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10541290; body size 33 bytes.
#line 1 "ENTRY_10541290"

undefined4 __fastcall FUN_10541290(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(0);
  if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0xd8) + 0x38))());
    if ((iVar2 != 2) && (iVar2 != 3)) {
      return (undefined4)(0);
    }
    uVar1 = (undefined4)(1);
  }
  return (undefined4)(uVar1);
}


// Reference entry 105417f0; body size 24 bytes.
#line 1 "ENTRY_105417f0"

undefined1 __fastcall FUN_105417f0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xc) != 4) {
    cVar1 = (char)(thunk_FUN_10541eb0());
    if (cVar1 != '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10541b60; body size 48 bytes.
#line 1 "ENTRY_10541b60"

undefined4 __thiscall Recovered_Bulk::FUN_10541b60(SCStr *param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  
  if ((*(char **)(char *)(param_2) != (char *)0x0) && (**(char **)param_2 != '\0')) {
    uVar1 = (uint)((**(code **)(*param_1 + 0x20))());
    uVar2 = (uint)(((SCStr *)(param_2))->length());
    if (uVar2 <= uVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10541c30; body size 19 bytes.
#line 1 "ENTRY_10541c30"

uint __fastcall FUN_10541c30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0xc))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10542ed0; body size 25 bytes.
#line 1 "ENTRY_10542ed0"

void __fastcall FUN_10542ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  thunk_FUN_1053f430();
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}


// Reference entry 10544a10; body size 21 bytes.
#line 1 "ENTRY_10544a10"

void __fastcall FUN_10544a10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 8) + 0x50))());
  thunk_FUN_1053e5d0(uVar1);
  return;
}


// Reference entry 1054ac50; body size 49 bytes.
#line 1 "ENTRY_1054ac50"

void __stdcall FUN_1054ac50(int param_1, unsigned int recovered_unused_stack_0)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = (undefined4)(0);
  }
  else {
    if (param_1 != 1) {
      return;
    }
    uVar1 = (undefined4)(1);
  }
  iVar2 = (int)(thunk_FUN_1053e5d0(uVar1));
  if (iVar2 == 2) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 1054af60; body size 33 bytes.
#line 1 "ENTRY_1054af60"

void __thiscall Recovered_Bulk::FUN_1054af60(int param_2,int param_3)
{
  int param_1 = (int )this;
  if (param_2 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1ec))(param_3 != 0);
  }
  return;
}


// Reference entry 1054b5b0; body size 32 bytes.
#line 1 "ENTRY_1054b5b0"

void __thiscall Recovered_Bulk::FUN_1054b5b0(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 1054c0c0; body size 22 bytes.
#line 1 "ENTRY_1054c0c0"

void __stdcall FUN_1054c0c0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 1054c100; body size 43 bytes.
#line 1 "ENTRY_1054c100"

int __fastcall FUN_1054c100(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 3) * 4);
}


// Reference entry 1054c140; body size 43 bytes.
#line 1 "ENTRY_1054c140"

int __fastcall FUN_1054c140(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 3) * 4);
}


// Reference entry 1054c2a0; body size 26 bytes.
#line 1 "ENTRY_1054c2a0"

uint __fastcall FUN_1054c2a0(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x60))());
  if ((char)uVar1 != '\0') {
    uVar1 = (uint)(thunk_FUN_10dd4b80());
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 1054c2e0; body size 23 bytes.
#line 1 "ENTRY_1054c2e0"

void __stdcall FUN_1054c2e0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 1054e1f0; body size 60 bytes.
#line 1 "ENTRY_1054e1f0"

int __thiscall Recovered_Bulk::FUN_1054e1f0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1054e240(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 1054ea60; body size 59 bytes.
#line 1 "ENTRY_1054ea60"

void __thiscall Recovered_Bulk::FUN_1054ea60(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_1054dd50(puVar1,param_2);
  return;
}


// Reference entry 1054eed0; body size 48 bytes.
#line 1 "ENTRY_1054eed0"

undefined4 * __fastcall FUN_1054eed0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1054fae0; body size 60 bytes.
#line 1 "ENTRY_1054fae0"

void __fastcall FUN_1054fae0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105526b0; body size 60 bytes.
#line 1 "ENTRY_105526b0"

void __stdcall FUN_105526b0(int param_1,int param_2)

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


// Reference entry 105564a0; body size 46 bytes.
#line 1 "ENTRY_105564a0"

void __thiscall Recovered_Bulk::FUN_105564a0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x48));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x4c)) {
    do {
      (**(code **)(*(int *)*puVar1 + 4))(param_2,param_3);
      puVar1 = (undefined4 *)(puVar1 + 1);
    } while ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x4c));
  }
  return;
}


// Reference entry 10556c40; body size 59 bytes.
#line 1 "ENTRY_10556c40"

void __thiscall Recovered_Bulk::FUN_10556c40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_1054dd50(puVar1,param_2);
  return;
}


// Reference entry 105579d0; body size 42 bytes.
#line 1 "ENTRY_105579d0"

void __fastcall FUN_105579d0(int param_1)

{
  thunk_FUN_105551d0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 105597d0; body size 60 bytes.
#line 1 "ENTRY_105597d0"

void __fastcall FUN_105597d0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10559b30; body size 31 bytes.
#line 1 "ENTRY_10559b30"

void __fastcall FUN_10559b30(undefined4 *param_1)

{
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCEnterZIPBrowseItem);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEnterZIPBrowseItem);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  return;
}


// Reference entry 1055a910; body size 54 bytes.
#line 1 "ENTRY_1055a910"

undefined4 * __thiscall Recovered_Bulk::FUN_1055a910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCEnterZIPBrowseItem);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEnterZIPBrowseItem);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1055f480; body size 27 bytes.
#line 1 "ENTRY_1055f480"

void __stdcall FUN_1055f480(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1021bf80(param_1,param_2);
  thunk_FUN_1055b780();
  return;
}


// Reference entry 1055f4b0; body size 23 bytes.
#line 1 "ENTRY_1055f4b0"

void __stdcall FUN_1055f4b0(undefined4 param_1)

{
  thunk_FUN_1055b780();
  thunk_FUN_1021cc40(param_1);
  return;
}


// Reference entry 10560090; body size 23 bytes.
#line 1 "ENTRY_10560090"

void __stdcall FUN_10560090(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10562a40; body size 40 bytes.
#line 1 "ENTRY_10562a40"

void __stdcall FUN_10562a40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562a80; body size 40 bytes.
#line 1 "ENTRY_10562a80"

void __stdcall FUN_10562a80(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562b00; body size 40 bytes.
#line 1 "ENTRY_10562b00"

void __stdcall FUN_10562b00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10566560; body size 40 bytes.
#line 1 "ENTRY_10566560"

void __fastcall FUN_10566560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuAddDescriptor);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10566670; body size 40 bytes.
#line 1 "ENTRY_10566670"

void __fastcall FUN_10566670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuPlayNextDescriptor);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10566db0; body size 49 bytes.
#line 1 "ENTRY_10566db0"

undefined4 __thiscall Recovered_Bulk::FUN_10566db0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  if (*(byte *)(param_2 + 1) < *(byte *)(param_1 + 1)) {
    return (undefined4)(0);
  }
  if (*(byte *)(param_1 + 1) == *(byte *)(param_2 + 1)) {
    if (*(byte *)(param_2 + 2) < *(byte *)(param_1 + 2)) {
      return (undefined4)(0);
    }
    if (*(byte *)(param_1 + 2) == *(byte *)(param_2 + 2)) {
      uVar1 = (uint)(*(uint *)(param_1 + 4));
      uVar2 = (uint)(*(uint *)(param_2 + 4));
      if (uVar2 <= uVar1 && uVar1 != uVar2) {
        return (undefined4)(0);
      }
      if (uVar1 == uVar2) {
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(1);
}


// Reference entry 10574e60; body size 51 bytes.
#line 1 "ENTRY_10574e60"

SCStr * __thiscall Recovered_Bulk::FUN_10574e60(SCStr *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = (undefined4)(0x1f57);
  if (*(char *)(param_1 + 0x18b0) == '\0') {
    uVar1 = (undefined4)(0x2204);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar1,&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10576040; body size 17 bytes.
#line 1 "ENTRY_10576040"

uint __fastcall FUN_10576040(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x18) + 0x2c))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10576160; body size 45 bytes.
#line 1 "ENTRY_10576160"

void __thiscall Recovered_Bulk::FUN_10576160(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((int *)(param_2) == *(int **)(param_1 + 0x14)) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x5c))());
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x1c) == '\0')) {
      thunk_FUN_10579450();
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
  }
  return;
}


// Reference entry 1057d590; body size 16 bytes.
#line 1 "ENTRY_1057d590"

void __thiscall Recovered_Bulk::FUN_1057d590(void)
{
  int param_1 = (int )this;
  undefined4 in_stack_00000014;
  
  *(undefined4 *)(param_1 + 0x3c) = in_stack_00000014;
  thunk_FUN_102082f0();
  return;
}


// Reference entry 1057d5b0; body size 57 bytes.
#line 1 "ENTRY_1057d5b0"

undefined1 __fastcall FUN_1057d5b0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_1 + 300) == 0) {
    cVar1 = (char)(thunk_FUN_105855b0());
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
    uVar2 = (undefined1)(thunk_FUN_10217af0());
    return (undefined1)(uVar2);
  }
  cVar1 = (char)(thunk_FUN_105855b0());
  if ((cVar1 == '\0') && (cVar1 = thunk_FUN_10585690(), cVar1 == '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1057d600; body size 40 bytes.
#line 1 "ENTRY_1057d600"

undefined1 __fastcall FUN_1057d600(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_105855b0());
  if (cVar1 != '\0') {
    return (undefined1)(1);
  }
  if ((*(int *)(param_1 + 300) == 0) && (cVar1 = thunk_FUN_10208940(), cVar1 != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10581980; body size 37 bytes.
#line 1 "ENTRY_10581980"

undefined4 __fastcall FUN_10581980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x140) != '\0') {
    iVar1 = (int)(thunk_FUN_1020b530());
    if (iVar1 != 7) {
      uVar2 = (undefined4)(thunk_FUN_1020b530());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(4);
}


// Reference entry 105839a0; body size 28 bytes.
#line 1 "ENTRY_105839a0"

undefined4 __stdcall FUN_105839a0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 2) {
    uVar1 = (undefined4)(thunk_FUN_102105a0());
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 105839d0; body size 55 bytes.
#line 1 "ENTRY_105839d0"

SCStr * FUN_105839d0(SCStr *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 2) {
    thunk_FUN_10210700(param_1,param_2,param_3);
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("emptyplaylists");
  return (SCStr *)(param_1);
}


// Reference entry 10585850; body size 49 bytes.
#line 1 "ENTRY_10585850"

void __fastcall FUN_10585850(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0x280);
  *(undefined1 *)(param_1 + -0x240) = 1;
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10585890; body size 59 bytes.
#line 1 "ENTRY_10585890"

bool __thiscall Recovered_Bulk::FUN_10585890(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  thunk_FUN_110b0460(1);
  iVar1 = (int)(thunk_FUN_110b2900(param_1 + 8,"RINCON_AssociatedZPUDN",&DAT_118823e4,0));
  *(int *)(param_1 + 0x14) = iVar1;
  return (bool)(0 < iVar1);
}


// Reference entry 10585f20; body size 38 bytes.
#line 1 "ENTRY_10585f20"

undefined4 __thiscall Recovered_Bulk::FUN_10585f20(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ObjectID",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 1058a650; body size 31 bytes.
#line 1 "ENTRY_1058a650"

undefined4 __fastcall FUN_1058a650(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    cVar1 = (char)(thunk_FUN_10219a00(param_1 + 0x128));
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1058ec70; body size 32 bytes.
#line 1 "ENTRY_1058ec70"

int __thiscall Recovered_Bulk::FUN_1058ec70(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if ((param_2 != 1) && (param_2 != 2)) {
    iVar1 = (int)(thunk_FUN_10210390());
    return (int)(iVar1);
  }
  return (int)(param_1 + 0xf0);
}


// Reference entry 10590f60; body size 23 bytes.
#line 1 "ENTRY_10590f60"

undefined4 __thiscall Recovered_Bulk::FUN_10590f60(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101ff410(param_1 + 0x128);
  return (undefined4)(param_2);
}


// Reference entry 10590f80; body size 23 bytes.
#line 1 "ENTRY_10590f80"

undefined4 __thiscall Recovered_Bulk::FUN_10590f80(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101ff410(param_1 + 0x128);
  return (undefined4)(param_2);
}


// Reference entry 105917c0; body size 57 bytes.
#line 1 "ENTRY_105917c0"

void __thiscall Recovered_Bulk::FUN_105917c0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    iVar1 = (int)(thunk_FUN_1058bf80(param_2,param_1 + 100));
    if (iVar1 != 0) {
      thunk_FUN_102207b0(iVar1,param_1 + 0x120,0);
    }
  }
  return;
}


// Reference entry 10591870; body size 21 bytes.
#line 1 "ENTRY_10591870"

int __fastcall FUN_10591870(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x124));
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)0x0) && (*pcVar1 != '\0')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10591bc0; body size 20 bytes.
#line 1 "ENTRY_10591bc0"

void __fastcall FUN_10591bc0(int param_1)

{
  undefined4 uStack00000004;
  
  uStack00000004 = (undefined4)(0);
                    
                    
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))();
  return;
}


// Reference entry 105920b0; body size 53 bytes.
#line 1 "ENTRY_105920b0"

void __fastcall FUN_105920b0(int param_1)

{
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(-(uint)(param_1 != 0x1ec) & param_1 - 0xd4U);
  thunk_FUN_10592970();
  return;
}


// Reference entry 10592e90; body size 57 bytes.
#line 1 "ENTRY_10592e90"

void __thiscall Recovered_Bulk::FUN_10592e90(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    iVar1 = (int)(thunk_FUN_1058bf80(param_2,param_1 + 100));
    if (iVar1 != 0) {
      thunk_FUN_102207b0(iVar1,param_1 + 0x120,0);
    }
  }
  return;
}


// Reference entry 10593dd0; body size 60 bytes.
#line 1 "ENTRY_10593dd0"

int __thiscall Recovered_Bulk::FUN_10593dd0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10593e20(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10594a50; body size 48 bytes.
#line 1 "ENTRY_10594a50"

undefined4 * __fastcall FUN_10594a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 105953a0; body size 33 bytes.
#line 1 "ENTRY_105953a0"

void __fastcall FUN_105953a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    thunk_FUN_10de8ec0();
  }
  return;
}


// Reference entry 10595f90; body size 35 bytes.
#line 1 "ENTRY_10595f90"

void __stdcall FUN_10595f90(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    thunk_FUN_10de8ec0();
  }
  return;
}


// Reference entry 105970f0; body size 59 bytes.
#line 1 "ENTRY_105970f0"

void __stdcall FUN_105970f0(int param_1,int param_2)

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


// Reference entry 1059b6d0; body size 57 bytes.
#line 1 "ENTRY_1059b6d0"

void __stdcall FUN_1059b6d0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_1059b6d0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 1059b720; body size 49 bytes.
#line 1 "ENTRY_1059b720"

int __thiscall Recovered_Bulk::FUN_1059b720(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1059b760(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 1059bb70; body size 48 bytes.
#line 1 "ENTRY_1059bb70"

undefined4 * __fastcall FUN_1059bb70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1059c010; body size 47 bytes.
#line 1 "ENTRY_1059c010"

void __fastcall FUN_1059c010(int param_1)

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


// Reference entry 1059d1e0; body size 19 bytes.
#line 1 "ENTRY_1059d1e0"

void __fastcall FUN_1059d1e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 8))();
  }
  return;
}


// Reference entry 1059d2f0; body size 20 bytes.
#line 1 "ENTRY_1059d2f0"

undefined4 __fastcall FUN_1059d2f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  thunk_FUN_1059d5a0(*(undefined4 *)(param_1 + 0xc));
  return (undefined4)(0);
}


// Reference entry 1059ed40; body size 33 bytes.
#line 1 "ENTRY_1059ed40"

void FUN_1059ed40(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    thunk_FUN_10def0d0();
  }
  return;
}


// Reference entry 1059f110; body size 57 bytes.
#line 1 "ENTRY_1059f110"

void __stdcall FUN_1059f110(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_1059f110(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x30);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 1059f160; body size 49 bytes.
#line 1 "ENTRY_1059f160"

int __thiscall Recovered_Bulk::FUN_1059f160(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1059f1a0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 1059fa40; body size 48 bytes.
#line 1 "ENTRY_1059fa40"

undefined4 * __fastcall FUN_1059fa40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1059ff10; body size 37 bytes.
#line 1 "ENTRY_1059ff10"

undefined4 * __thiscall Recovered_Bulk::FUN_1059ff10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayer);
  param_1[1] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059ff40; body size 47 bytes.
#line 1 "ENTRY_1059ff40"

undefined4 * __thiscall Recovered_Bulk::FUN_1059ff40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayer);
  param_1[2] = (undefined4)(0);
  thunk_FUN_104d4740(param_1 + 3);
  return (undefined4 *)(param_1);
}


// Reference entry 1059ff80; body size 35 bytes.
#line 1 "ENTRY_1059ff80"

undefined4 * __fastcall FUN_1059ff80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizLayer);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a0150; body size 33 bytes.
#line 1 "ENTRY_105a0150"

void __fastcall FUN_105a0150(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    thunk_FUN_10def0d0();
  }
  return;
}


// Reference entry 105a0cb0; body size 43 bytes.
#line 1 "ENTRY_105a0cb0"

undefined4 __thiscall Recovered_Bulk::FUN_105a0cb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4)(param_1);
}


// Reference entry 105a1540; body size 35 bytes.
#line 1 "ENTRY_105a1540"

void __stdcall FUN_105a1540(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    thunk_FUN_10def0d0();
  }
  return;
}


// Reference entry 105a1570; body size 47 bytes.
#line 1 "ENTRY_105a1570"

void __stdcall FUN_105a1570(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)(param_1 + 4);
    do {
      thunk_FUN_105a1d20();
      thunk_FUN_105a1c80();
      iVar1 = (int)(iVar2 + 0x18);
      iVar2 = (int)(iVar2 + 0x1c);
    } while (iVar1 != param_2);
  }
  return;
}


// Reference entry 105a2380; body size 59 bytes.
#line 1 "ENTRY_105a2380"

void __stdcall FUN_105a2380(int param_1,int param_2)

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


// Reference entry 105a2c70; body size 31 bytes.
#line 1 "ENTRY_105a2c70"

void __fastcall FUN_105a2c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x14))());
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x14))());
                    
                    
    (**(code **)(*piVar2 + 0x20))();
    return;
  }
  return;
}


// Reference entry 105a2ca0; body size 31 bytes.
#line 1 "ENTRY_105a2ca0"

void __fastcall FUN_105a2ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x14))());
  if (iVar1 != 0) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x14))());
                    
                    
    (**(code **)(*piVar2 + 0x24))();
    return;
  }
  return;
}


// Reference entry 105a3210; body size 24 bytes.
#line 1 "ENTRY_105a3210"

undefined4 FUN_105a3210(void)

{
  SCLibrary *pSVar1;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (((SCLibrary *)(pSVar1) != (SCLibrary *)0x0) && (pSVar1[0x18c] != (SCLibrary)0x0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 105a50c0; body size 57 bytes.
#line 1 "ENTRY_105a50c0"

void __stdcall FUN_105a50c0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_105a50c0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 105a5510; body size 49 bytes.
#line 1 "ENTRY_105a5510"

int __thiscall Recovered_Bulk::FUN_105a5510(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105a5630(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 105a5550; body size 49 bytes.
#line 1 "ENTRY_105a5550"

int __thiscall Recovered_Bulk::FUN_105a5550(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105a5690(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 105a5590; body size 60 bytes.
#line 1 "ENTRY_105a5590"

int __thiscall Recovered_Bulk::FUN_105a5590(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105a56f0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 105a55e0; body size 60 bytes.
#line 1 "ENTRY_105a55e0"

int __thiscall Recovered_Bulk::FUN_105a55e0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_105a5760(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 105a6dc0; body size 48 bytes.
#line 1 "ENTRY_105a6dc0"

undefined4 * __fastcall FUN_105a6dc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 105a6e00; body size 48 bytes.
#line 1 "ENTRY_105a6e00"

undefined4 * __fastcall FUN_105a6e00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6e40; body size 48 bytes.
#line 1 "ENTRY_105a6e40"

undefined4 * __fastcall FUN_105a6e40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6e80; body size 48 bytes.
#line 1 "ENTRY_105a6e80"

undefined4 * __fastcall FUN_105a6e80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x38));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7f00; body size 36 bytes.
#line 1 "ENTRY_105a7f00"

void __fastcall FUN_105a7f00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    thunk_FUN_105a5110(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x20);
  }
  return;
}


// Reference entry 105a7f30; body size 36 bytes.
#line 1 "ENTRY_105a7f30"

void __fastcall FUN_105a7f30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    thunk_FUN_105a51f0(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x38);
  }
  return;
}


// Reference entry 105a9ed0; body size 50 bytes.
#line 1 "ENTRY_105a9ed0"

void __thiscall Recovered_Bulk::FUN_105a9ed0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_105a5110(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  thunk_FUN_105a4960(param_2,param_2);
  return;
}


// Reference entry 105af180; body size 44 bytes.
#line 1 "ENTRY_105af180"

void __fastcall FUN_105af180(int param_1)

{
  if (*(int *)(param_1 + 0xb0) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xb0));
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  return;
}


// Reference entry 105b1e90; body size 33 bytes.
#line 1 "ENTRY_105b1e90"

void __fastcall FUN_105b1e90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b1ec0; body size 33 bytes.
#line 1 "ENTRY_105b1ec0"

void __fastcall FUN_105b1ec0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b1f50; body size 33 bytes.
#line 1 "ENTRY_105b1f50"

void __fastcall FUN_105b1f50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b1f80; body size 33 bytes.
#line 1 "ENTRY_105b1f80"

void __fastcall FUN_105b1f80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b27c0; body size 60 bytes.
#line 1 "ENTRY_105b27c0"

int __thiscall Recovered_Bulk::FUN_105b27c0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 105b2810; body size 60 bytes.
#line 1 "ENTRY_105b2810"

int __thiscall Recovered_Bulk::FUN_105b2810(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 105b29a0; body size 19 bytes.
#line 1 "ENTRY_105b29a0"

void __thiscall Recovered_Bulk::FUN_105b29a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105b2a80; body size 58 bytes.
#line 1 "ENTRY_105b2a80"

void __thiscall Recovered_Bulk::FUN_105b2a80(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 105b2b30; body size 58 bytes.
#line 1 "ENTRY_105b2b30"

void __thiscall Recovered_Bulk::FUN_105b2b30(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 105b2b80; body size 37 bytes.
#line 1 "ENTRY_105b2b80"

void __thiscall Recovered_Bulk::FUN_105b2b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 105b2cd0; body size 39 bytes.
#line 1 "ENTRY_105b2cd0"

void __thiscall Recovered_Bulk::FUN_105b2cd0(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 105b2dd0; body size 19 bytes.
#line 1 "ENTRY_105b2dd0"

void __thiscall Recovered_Bulk::FUN_105b2dd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105b2f30; body size 33 bytes.
#line 1 "ENTRY_105b2f30"

void __fastcall FUN_105b2f30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b2f60; body size 33 bytes.
#line 1 "ENTRY_105b2f60"

void __fastcall FUN_105b2f60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105b3420; body size 35 bytes.
#line 1 "ENTRY_105b3420"

void __thiscall Recovered_Bulk::FUN_105b3420(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 105b34b0; body size 47 bytes.
#line 1 "ENTRY_105b34b0"

undefined4 __fastcall FUN_105b34b0(int param_1)

{
  char cVar1;
  
  if ((*(int **)(param_1 + 0x60) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x1c))(), cVar1 != '\0')) {
    return (undefined4)(1);
  }
  if ((*(int **)(param_1 + 0x68) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0x1c))(), cVar1 != '\0')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 105b36a0; body size 18 bytes.
#line 1 "ENTRY_105b36a0"

int __fastcall FUN_105b36a0(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x44));
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)0x0) && (*pcVar1 != '\0')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 105b4990; body size 19 bytes.
#line 1 "ENTRY_105b4990"

int __fastcall FUN_105b4990(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x4c));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 2) && (iVar1 != 3)) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 105b4be0; body size 49 bytes.
#line 1 "ENTRY_105b4be0"

void __fastcall FUN_105b4be0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  char cVar1;
  SCStr aSStack_18 [4];
  int iStack_14;
  undefined4 uStack_10;
  
  uStack_10 = (undefined4)(0x105b4bef);
  cVar1 = (char)(thunk_FUN_105b4460());
  if (cVar1 != '\0') {
    uStack_10 = (undefined4)(0);
    iStack_14 = (int)(param_1 + -0xc);
    ((SCStr *)(aSStack_18))->int_allocRep("SCIHouseholdManager:onCurrentHouseholdChanged");
    thunk_FUN_103d63d0();
  }
  return;
}


// Reference entry 105b4c50; body size 36 bytes.
#line 1 "ENTRY_105b4c50"

void __fastcall FUN_105b4c50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0xc);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIHouseholdManager:onUpdatingZPs");
  thunk_FUN_103d63d0();
  return;
}


// Reference entry 105b4ca0; body size 36 bytes.
#line 1 "ENTRY_105b4ca0"

void __fastcall FUN_105b4ca0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0xc);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIHouseholdManager:onZPUpdateComplete");
  thunk_FUN_103d63d0();
  return;
}


// Reference entry 105b4ed0; body size 37 bytes.
#line 1 "ENTRY_105b4ed0"

void __stdcall FUN_105b4ed0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10c66510(0x14,param_2));
  if (cVar1 != '\0') {
    thunk_FUN_105b3de0(param_1);
  }
  return;
}


// Reference entry 105b5ef0; body size 46 bytes.
#line 1 "ENTRY_105b5ef0"

void __stdcall FUN_105b5ef0(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 != '\0') {
    uVar1 = (undefined4)(thunk_FUN_110828b0());
    thunk_FUN_105b36c0(uVar1);
  }
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 105b5f30; body size 39 bytes.
#line 1 "ENTRY_105b5f30"

void __stdcall FUN_105b5f30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_110828b0());
  thunk_FUN_105b36c0(uVar1);
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 105b5f60; body size 23 bytes.
#line 1 "ENTRY_105b5f60"

void __stdcall FUN_105b5f60(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 105b6ce0; body size 33 bytes.
#line 1 "ENTRY_105b6ce0"

void __thiscall Recovered_Bulk::FUN_105b6ce0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105b6d40(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x34);
  return;
}


// Reference entry 105b77f0; body size 59 bytes.
#line 1 "ENTRY_105b77f0"

void __thiscall Recovered_Bulk::FUN_105b77f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_105b6820(puVar1,param_2);
  return;
}


// Reference entry 105b7840; body size 59 bytes.
#line 1 "ENTRY_105b7840"

void __thiscall Recovered_Bulk::FUN_105b7840(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_105b6a20(puVar1,param_2);
  return;
}


// Reference entry 105b7910; body size 55 bytes.
#line 1 "ENTRY_105b7910"

void __thiscall Recovered_Bulk::FUN_105b7910(int *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (uint)(((SCStr *)(param_3))->hash());
  iVar2 = (int)(thunk_FUN_10117000(local_8,param_3,uVar1));
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 105b8210; body size 48 bytes.
#line 1 "ENTRY_105b8210"

undefined4 * __fastcall FUN_105b8210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x34));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 105b8250; body size 48 bytes.
#line 1 "ENTRY_105b8250"

undefined4 * __fastcall FUN_105b8250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 105b9b50; body size 60 bytes.
#line 1 "ENTRY_105b9b50"

void __fastcall FUN_105b9b50(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105b9be0; body size 28 bytes.
#line 1 "ENTRY_105b9be0"

void __fastcall FUN_105b9be0(int *param_1)

{
  thunk_FUN_105b6d40(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x34);
  return;
}


// Reference entry 105b9c40; body size 38 bytes.
#line 1 "ENTRY_105b9c40"

void __fastcall FUN_105b9c40(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_105b9d30();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x34);
  }
  return;
}


// Reference entry 105b9cd0; body size 28 bytes.
#line 1 "ENTRY_105b9cd0"

void __fastcall FUN_105b9cd0(int *param_1)

{
  thunk_FUN_105b6d40(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x34);
  return;
}


// Reference entry 105ba340; body size 38 bytes.
#line 1 "ENTRY_105ba340"

void __fastcall FUN_105ba340(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFileTransferDownloadAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RFileTransferDownloadAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 105ba4a0; body size 48 bytes.
#line 1 "ENTRY_105ba4a0"

void __fastcall FUN_105ba4a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SetupFileTransferDownloadOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SetupFileTransferDownloadOp);
  thunk_FUN_105b9f10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  return;
}


// Reference entry 105ba4e0; body size 48 bytes.
#line 1 "ENTRY_105ba4e0"

void __fastcall FUN_105ba4e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SetupFileTransferUploadOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_SetupFileTransferUploadOp);
  thunk_FUN_105ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpPostNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  return;
}


// Reference entry 105baa10; body size 61 bytes.
#line 1 "ENTRY_105baa10"

undefined4 * __thiscall Recovered_Bulk::FUN_105baa10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RFileTransferDownloadAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RFileTransferDownloadAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105baf60; body size 36 bytes.
#line 1 "ENTRY_105baf60"

void __stdcall FUN_105baf60(undefined4 *param_1,undefined4 *param_2)

{
  for (; (undefined4 *)(param_1) != (undefined4 *)(param_2); param_1 = param_1 + 4) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105bba00; body size 55 bytes.
#line 1 "ENTRY_105bba00"

void __fastcall FUN_105bba00(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x20));
    if ((int *)(piVar1) != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


// Reference entry 105bc920; body size 48 bytes.
#line 1 "ENTRY_105bc920"

void __fastcall FUN_105bc920(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 8));
  if ((undefined4 *)(puVar2) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)*puVar2)(0);
      puVar2 = (undefined4 *)(puVar2 + 4);
    } while ((undefined4 *)(puVar2) != (undefined4 *)(puVar1));
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    return;
  }
  *(undefined4 **)(param_1 + 0xc) = puVar2;
  return;
}


// Reference entry 105bc960; body size 47 bytes.
#line 1 "ENTRY_105bc960"

void __fastcall FUN_105bc960(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  puVar2 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar2) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)*puVar2)(0);
      puVar2 = (undefined4 *)(puVar2 + 4);
    } while ((undefined4 *)(puVar2) != (undefined4 *)(puVar1));
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)((int)puVar2);
  return;
}


// Reference entry 105bcf50; body size 60 bytes.
#line 1 "ENTRY_105bcf50"

void __stdcall FUN_105bcf50(int param_1,int param_2)

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


// Reference entry 105bcfa0; body size 60 bytes.
#line 1 "ENTRY_105bcfa0"

void __stdcall FUN_105bcfa0(int param_1,int param_2)

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


// Reference entry 105bcff0; body size 56 bytes.
#line 1 "ENTRY_105bcff0"

void __stdcall FUN_105bcff0(int param_1,int param_2)

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


// Reference entry 105bd190; body size 35 bytes.
#line 1 "ENTRY_105bd190"

void __stdcall FUN_105bd190(undefined4 param_1)

{
  thunk_FUN_1125b030(param_1,0);
  thunk_FUN_111c14c0(param_1);
  return;
}


// Reference entry 105bd300; body size 60 bytes.
#line 1 "ENTRY_105bd300"

int __thiscall Recovered_Bulk::FUN_105bd300(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_111c1710(param_2));
  if ((*(char *)(param_1 + 0xa9d8) != '\0') || (param_2 = 1, iVar1 != 0)) {
    param_2 = (undefined4)(0);
  }
  thunk_FUN_105bc9a0(param_2);
  return (int)(iVar1);
}


// Reference entry 105bfbb0; body size 32 bytes.
#line 1 "ENTRY_105bfbb0"

undefined4 FUN_105bfbb0(undefined4 param_1)

{
  switch(param_1) {
  case 0x16:
  case 0x17:
  case 0x1d:
  case 0x23:
  case 0x37:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 105bfe00; body size 63 bytes.
#line 1 "ENTRY_105bfe00"

undefined4 FUN_105bfe00(void)

{
  int iVar1;
  int iVar2;
  
  thunk_FUN_105ad910();
  iVar1 = (int)(thunk_FUN_106dc530());
  iVar2 = (int)(thunk_FUN_1083fac0());
  if (iVar1 != iVar2) {
    thunk_FUN_105ad910();
    iVar1 = (int)(thunk_FUN_106dc530());
    iVar2 = (int)(thunk_FUN_109e1620());
    if (iVar1 != iVar2) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 105c0090; body size 25 bytes.
#line 1 "ENTRY_105c0090"

undefined4 FUN_105c0090(int param_1)

{
  if (((param_1 != 0x16) && (param_1 != 0x20)) && (param_1 != 0x2c)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 105c0190; body size 29 bytes.
#line 1 "ENTRY_105c0190"

undefined4 FUN_105c0190(undefined4 param_1)

{
  switch(param_1) {
  default:
    return (undefined4)(0);
  case 5:
  case 7:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x32:
  case 0x37:
  case 0x3a:
  case 0x3b:
  case 0x3c:
    return (undefined4)(1);
  }
}


// Reference entry 105c04a0; body size 59 bytes.
#line 1 "ENTRY_105c04a0"

void __thiscall Recovered_Bulk::FUN_105c04a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_105b6820(puVar1,param_2);
  return;
}


// Reference entry 105c04f0; body size 59 bytes.
#line 1 "ENTRY_105c04f0"

void __thiscall Recovered_Bulk::FUN_105c04f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_105b6a20(puVar1,param_2);
  return;
}


// Reference entry 105c2d80; body size 57 bytes.
#line 1 "ENTRY_105c2d80"

undefined4 __thiscall Recovered_Bulk::FUN_105c2d80(void *param_2,uint param_3)
{
  int param_1 = (int )this;
  size_t sVar1;
  
  if ((param_3 == 0) && ((void *)(param_2) == (void *)0x0)) {
    return (undefined4)(1);
  }
  if ((*(FILE **)(param_1 + 0x6110) != (FILE *)0x0) &&
     (sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x6110)), param_3 <= sVar1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 105c3cd0; body size 60 bytes.
#line 1 "ENTRY_105c3cd0"

void __fastcall FUN_105c3cd0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105c3d30; body size 60 bytes.
#line 1 "ENTRY_105c3d30"

void __fastcall FUN_105c3d30(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105c3d90; body size 60 bytes.
#line 1 "ENTRY_105c3d90"

void __fastcall FUN_105c3d90(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105c3df0; body size 60 bytes.
#line 1 "ENTRY_105c3df0"

void __fastcall FUN_105c3df0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105c3e50; body size 60 bytes.
#line 1 "ENTRY_105c3e50"

void __fastcall FUN_105c3e50(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105c93d0; body size 63 bytes.
#line 1 "ENTRY_105c93d0"

void __stdcall FUN_105c93d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 105c9420; body size 63 bytes.
#line 1 "ENTRY_105c9420"

void __stdcall FUN_105c9420(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 105d25e0; body size 60 bytes.
#line 1 "ENTRY_105d25e0"

void __fastcall FUN_105d25e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_105ca4f0(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_105d2c90();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105d2bf0; body size 60 bytes.
#line 1 "ENTRY_105d2bf0"

void __fastcall FUN_105d2bf0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105d6eb0; body size 22 bytes.
#line 1 "ENTRY_105d6eb0"

void __stdcall FUN_105d6eb0(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10eae090(0);
  return;
}


// Reference entry 105dc0c0; body size 60 bytes.
#line 1 "ENTRY_105dc0c0"

void __stdcall FUN_105dc0c0(int param_1,int param_2)

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


// Reference entry 105e3f70; body size 16 bytes.
#line 1 "ENTRY_105e3f70"

void __fastcall FUN_105e3f70(int param_1)

{
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x58) + 0xe4))();
    return;
  }
  return;
}


// Reference entry 105e74e0; body size 38 bytes.
#line 1 "ENTRY_105e74e0"

undefined4 __thiscall Recovered_Bulk::FUN_105e74e0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredIRRepeaterState",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 105e7510; body size 38 bytes.
#line 1 "ENTRY_105e7510"

undefined4 __thiscall Recovered_Bulk::FUN_105e7510(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("LEDFeedbackState",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 105ee900; body size 33 bytes.
#line 1 "ENTRY_105ee900"

void __fastcall FUN_105ee900(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105eefa0; body size 33 bytes.
#line 1 "ENTRY_105eefa0"

void __fastcall FUN_105eefa0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105eefd0; body size 33 bytes.
#line 1 "ENTRY_105eefd0"

void __fastcall FUN_105eefd0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105ef000; body size 33 bytes.
#line 1 "ENTRY_105ef000"

void __fastcall FUN_105ef000(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 105ef430; body size 47 bytes.
#line 1 "ENTRY_105ef430"

undefined4 * __thiscall Recovered_Bulk::FUN_105ef430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_2);
  param_1[2] = (undefined4)(param_2[2]);
  thunk_FUN_105ef270(param_2 + 4);
  thunk_FUN_105f2210();
  return (undefined4 *)(param_1);
}


// Reference entry 105f0340; body size 35 bytes.
#line 1 "ENTRY_105f0340"

undefined4 __thiscall Recovered_Bulk::FUN_105f0340(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101a33f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 105f03f0; body size 60 bytes.
#line 1 "ENTRY_105f03f0"

int __thiscall Recovered_Bulk::FUN_105f03f0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 105f07f0; body size 35 bytes.
#line 1 "ENTRY_105f07f0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f07f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  thunk_FUN_1027ee20(param_1 + 4);
  return (undefined4 *)(param_2);
}


// Reference entry 105f08c0; body size 19 bytes.
#line 1 "ENTRY_105f08c0"

void __thiscall Recovered_Bulk::FUN_105f08c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105f0b80; body size 19 bytes.
#line 1 "ENTRY_105f0b80"

void __thiscall Recovered_Bulk::FUN_105f0b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105f0ba0; body size 25 bytes.
#line 1 "ENTRY_105f0ba0"

void __thiscall Recovered_Bulk::FUN_105f0ba0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 105f0e90; body size 33 bytes.
#line 1 "ENTRY_105f0e90"

void __thiscall Recovered_Bulk::FUN_105f0e90(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101a33f0();
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return;
}


// Reference entry 105f0f80; body size 58 bytes.
#line 1 "ENTRY_105f0f80"

void __thiscall Recovered_Bulk::FUN_105f0f80(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 105f1590; body size 42 bytes.
#line 1 "ENTRY_105f1590"

bool __thiscall Recovered_Bulk::FUN_105f1590(undefined4 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2));
    return (bool)(cVar1 == '\0');
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 105f15d0; body size 30 bytes.
#line 1 "ENTRY_105f15d0"

void __fastcall FUN_105f15d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  int iStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  iStack_8 = (int)(param_1);
  thunk_FUN_1034de20(&iStack_8);
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// Reference entry 105f1d10; body size 30 bytes.
#line 1 "ENTRY_105f1d10"

void __fastcall FUN_105f1d10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  int iStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  iStack_8 = (int)(param_1);
  thunk_FUN_1034d2f0(&iStack_8);
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// Reference entry 105f1e80; body size 58 bytes.
#line 1 "ENTRY_105f1e80"

void __thiscall Recovered_Bulk::FUN_105f1e80(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_1 + 8));
  uVar3 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_2[3] = (undefined4)(uVar1);
  param_2[1] = (undefined4)(uVar3);
  param_2[2] = (undefined4)(uVar2);
  return;
}


// Reference entry 105f1ef0; body size 19 bytes.
#line 1 "ENTRY_105f1ef0"

void __thiscall Recovered_Bulk::FUN_105f1ef0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105f1f50; body size 19 bytes.
#line 1 "ENTRY_105f1f50"

void __thiscall Recovered_Bulk::FUN_105f1f50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 105f1f70; body size 25 bytes.
#line 1 "ENTRY_105f1f70"

void __thiscall Recovered_Bulk::FUN_105f1f70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 105f2a40; body size 33 bytes.
#line 1 "ENTRY_105f2a40"

void FUN_105f2a40(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x34) {
    thunk_FUN_105ff930();
  }
  return;
}


// Reference entry 105febd0; body size 27 bytes.
#line 1 "ENTRY_105febd0"

void __fastcall FUN_105febd0(undefined4 *param_1)

{
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  return;
}


// Reference entry 105fec00; body size 27 bytes.
#line 1 "ENTRY_105fec00"

void __fastcall FUN_105fec00(undefined4 *param_1)

{
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  return;
}


// Reference entry 105ff440; body size 60 bytes.
#line 1 "ENTRY_105ff440"

void __fastcall FUN_105ff440(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105ff4a0; body size 60 bytes.
#line 1 "ENTRY_105ff4a0"

void __fastcall FUN_105ff4a0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 105ff810; body size 33 bytes.
#line 1 "ENTRY_105ff810"

void __fastcall FUN_105ff810(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x34) {
    thunk_FUN_105ff930();
  }
  return;
}


// Reference entry 105ff840; body size 34 bytes.
#line 1 "ENTRY_105ff840"

void __fastcall FUN_105ff840(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)(param_1) != (undefined4 *)(puVar1); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105ff870; body size 34 bytes.
#line 1 "ENTRY_105ff870"

void __fastcall FUN_105ff870(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)(param_1) != (undefined4 *)(puVar1); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105ff8a0; body size 34 bytes.
#line 1 "ENTRY_105ff8a0"

void __fastcall FUN_105ff8a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)(param_1) != (undefined4 *)(puVar1); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 105ff8f0; body size 42 bytes.
#line 1 "ENTRY_105ff8f0"

void __fastcall FUN_105ff8f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    thunk_FUN_105a1d20();
    thunk_FUN_105a1c80();
  }
  return;
}


// Reference entry 10600240; body size 20 bytes.
#line 1 "ENTRY_10600240"

void FUN_10600240(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 10601bc0; body size 49 bytes.
#line 1 "ENTRY_10601bc0"

undefined4 * __thiscall Recovered_Bulk::FUN_10601bc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10601c00; body size 49 bytes.
#line 1 "ENTRY_10601c00"

undefined4 * __thiscall Recovered_Bulk::FUN_10601c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106042e0; body size 35 bytes.
#line 1 "ENTRY_106042e0"

void __stdcall FUN_106042e0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x34) {
    thunk_FUN_105ff930();
  }
  return;
}


// Reference entry 10604310; body size 36 bytes.
#line 1 "ENTRY_10604310"

void __stdcall FUN_10604310(undefined4 *param_1,undefined4 *param_2)

{
  for (; (undefined4 *)(param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 10604340; body size 36 bytes.
#line 1 "ENTRY_10604340"

void __stdcall FUN_10604340(undefined4 *param_1,undefined4 *param_2)

{
  for (; (undefined4 *)(param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 10604370; body size 36 bytes.
#line 1 "ENTRY_10604370"

void __stdcall FUN_10604370(undefined4 *param_1,undefined4 *param_2)

{
  for (; (undefined4 *)(param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 10605020; body size 50 bytes.
#line 1 "ENTRY_10605020"

int __thiscall Recovered_Bulk::FUN_10605020(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
    thunk_FUN_105f5a00(param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20;
    return (int)(param_1);
  }
  thunk_FUN_105f34e0(*(int *)(param_1 + 0x18),param_2);
  return (int)(param_1);
}


// Reference entry 10605060; body size 50 bytes.
#line 1 "ENTRY_10605060"

int __thiscall Recovered_Bulk::FUN_10605060(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
    thunk_FUN_105f5df0(param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20;
    return (int)(param_1);
  }
  thunk_FUN_105f36d0(*(int *)(param_1 + 0x18),param_2);
  return (int)(param_1);
}


// Reference entry 106050a0; body size 50 bytes.
#line 1 "ENTRY_106050a0"

int __thiscall Recovered_Bulk::FUN_106050a0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
    thunk_FUN_105f60e0(param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20;
    return (int)(param_1);
  }
  thunk_FUN_105f38c0(*(int *)(param_1 + 0x18),param_2);
  return (int)(param_1);
}


// Reference entry 10607f70; body size 54 bytes.
#line 1 "ENTRY_10607f70"

void __stdcall FUN_10607f70(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x34);
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


// Reference entry 10607fc0; body size 56 bytes.
#line 1 "ENTRY_10607fc0"

void __stdcall FUN_10607fc0(int param_1,int param_2)

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


// Reference entry 10608010; body size 56 bytes.
#line 1 "ENTRY_10608010"

void __stdcall FUN_10608010(int param_1,int param_2)

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


// Reference entry 10608060; body size 56 bytes.
#line 1 "ENTRY_10608060"

void __stdcall FUN_10608060(int param_1,int param_2)

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


// Reference entry 106080b0; body size 59 bytes.
#line 1 "ENTRY_106080b0"

void __stdcall FUN_106080b0(int param_1,int param_2)

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


// Reference entry 10608110; body size 60 bytes.
#line 1 "ENTRY_10608110"

int __thiscall Recovered_Bulk::FUN_10608110(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  *(undefined4 *)(iVar1 + -0x1c) = 3;
  if (*(int *)(iVar1 + -8) != *(int *)(iVar1 + -4)) {
    thunk_FUN_105f5a00(param_2);
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 0x20;
    return (int)(param_1);
  }
  thunk_FUN_105f34e0(*(int *)(iVar1 + -8),param_2);
  return (int)(param_1);
}


// Reference entry 10608160; body size 60 bytes.
#line 1 "ENTRY_10608160"

int __thiscall Recovered_Bulk::FUN_10608160(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  *(undefined4 *)(iVar1 + -0x1c) = 3;
  if (*(int *)(iVar1 + -8) != *(int *)(iVar1 + -4)) {
    thunk_FUN_105f5df0(param_2);
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 0x20;
    return (int)(param_1);
  }
  thunk_FUN_105f36d0(*(int *)(iVar1 + -8),param_2);
  return (int)(param_1);
}


// Reference entry 106081b0; body size 60 bytes.
#line 1 "ENTRY_106081b0"

int __thiscall Recovered_Bulk::FUN_106081b0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  *(undefined4 *)(iVar1 + -0x1c) = 3;
  if (*(int *)(iVar1 + -8) != *(int *)(iVar1 + -4)) {
    thunk_FUN_105f60e0(param_2);
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 0x20;
    return (int)(param_1);
  }
  thunk_FUN_105f38c0(*(int *)(iVar1 + -8),param_2);
  return (int)(param_1);
}


// Reference entry 10619af0; body size 18 bytes.
#line 1 "ENTRY_10619af0"

void FUN_10619af0(void)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0x80000004);
  thunk_FUN_10ee48c0(0x80000004);
  thunk_FUN_10ee2ec0(uVar1);
  return;
}


// Reference entry 1062c3c0; body size 60 bytes.
#line 1 "ENTRY_1062c3c0"

void __fastcall FUN_1062c3c0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1062c420; body size 60 bytes.
#line 1 "ENTRY_1062c420"

void __fastcall FUN_1062c420(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1062c900; body size 33 bytes.
#line 1 "ENTRY_1062c900"

void __fastcall FUN_1062c900(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1062cc10; body size 20 bytes.
#line 1 "ENTRY_1062cc10"

void FUN_1062cc10(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 1062cc30; body size 20 bytes.
#line 1 "ENTRY_1062cc30"

void FUN_1062cc30(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 1062cc70; body size 20 bytes.
#line 1 "ENTRY_1062cc70"

void FUN_1062cc70(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 10633d20; body size 59 bytes.
#line 1 "ENTRY_10633d20"

void __stdcall FUN_10633d20(int param_1,int param_2)

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


// Reference entry 1063d090; body size 30 bytes.
#line 1 "ENTRY_1063d090"

undefined4 __stdcall FUN_1063d090(undefined4 param_1)

{
  undefined4 local_4;
  
  local_4 = (undefined4)(DAT_121a22b8);
  thunk_FUN_105f5920(&local_4);
  return (undefined4)(param_1);
}


// Reference entry 1064d4c0; body size 48 bytes.
#line 1 "ENTRY_1064d4c0"

undefined4 * __fastcall FUN_1064d4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1064d500; body size 48 bytes.
#line 1 "ENTRY_1064d500"

undefined4 * __fastcall FUN_1064d500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10654e60; body size 33 bytes.
#line 1 "ENTRY_10654e60"

void __fastcall FUN_10654e60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10654f30; body size 33 bytes.
#line 1 "ENTRY_10654f30"

void __fastcall FUN_10654f30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1065a4d0; body size 30 bytes.
#line 1 "ENTRY_1065a4d0"

void __thiscall Recovered_Bulk::FUN_1065a4d0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10370f20(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 1065a6a0; body size 19 bytes.
#line 1 "ENTRY_1065a6a0"

void __thiscall Recovered_Bulk::FUN_1065a6a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1065a6c0; body size 25 bytes.
#line 1 "ENTRY_1065a6c0"

void __thiscall Recovered_Bulk::FUN_1065a6c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 1065a6e0; body size 25 bytes.
#line 1 "ENTRY_1065a6e0"

void __thiscall Recovered_Bulk::FUN_1065a6e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 1065a700; body size 21 bytes.
#line 1 "ENTRY_1065a700"

void __stdcall FUN_1065a700(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10648010(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 1065ac80; body size 19 bytes.
#line 1 "ENTRY_1065ac80"

void __thiscall Recovered_Bulk::FUN_1065ac80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1065aca0; body size 25 bytes.
#line 1 "ENTRY_1065aca0"

void __thiscall Recovered_Bulk::FUN_1065aca0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 1065acc0; body size 25 bytes.
#line 1 "ENTRY_1065acc0"

void __thiscall Recovered_Bulk::FUN_1065acc0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 1065ad50; body size 33 bytes.
#line 1 "ENTRY_1065ad50"

void __fastcall FUN_1065ad50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1065e730; body size 60 bytes.
#line 1 "ENTRY_1065e730"

void __stdcall FUN_1065e730(int param_1,int param_2)

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


// Reference entry 1066bbd0; body size 30 bytes.
#line 1 "ENTRY_1066bbd0"

undefined4 __stdcall FUN_1066bbd0(undefined4 param_1)

{
  undefined4 local_4;
  
  local_4 = (undefined4)(DAT_121a2384);
  thunk_FUN_105f5920(&local_4);
  return (undefined4)(param_1);
}


// Reference entry 10677fe0; body size 34 bytes.
#line 1 "ENTRY_10677fe0"

undefined1 __fastcall FUN_10677fe0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_11248b40(0x15));
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x11d) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10678fa0; body size 42 bytes.
#line 1 "ENTRY_10678fa0"

void FUN_10678fa0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 1067e860; body size 40 bytes.
#line 1 "ENTRY_1067e860"

void FUN_1067e860(void)

{
  undefined1 uVar1;
  int iVar2;
  
  thunk_FUN_10ebc1d0();
  iVar2 = (int)(thunk_FUN_10eb41b0());
  uVar1 = (undefined1)(thunk_FUN_10eac8a0());
  *(undefined1 *)(iVar2 + 0x11d) = uVar1;
  return;
}


// Reference entry 1067eaa0; body size 45 bytes.
#line 1 "ENTRY_1067eaa0"

void FUN_1067eaa0(void)

{
  undefined1 uVar1;
  
  thunk_FUN_10ebc1d0();
  thunk_FUN_10eb41b0();
  uVar1 = (undefined1)(thunk_FUN_1083d1a0());
  thunk_FUN_10eade00(uVar1);
  return;
}


// Reference entry 1067f9b0; body size 29 bytes.
#line 1 "ENTRY_1067f9b0"

void __thiscall Recovered_Bulk::FUN_1067f9b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10682040; body size 60 bytes.
#line 1 "ENTRY_10682040"

int __thiscall Recovered_Bulk::FUN_10682040(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10682380(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10682c90; body size 59 bytes.
#line 1 "ENTRY_10682c90"

void __thiscall Recovered_Bulk::FUN_10682c90(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10681b80(puVar1,param_2);
  return;
}


// Reference entry 106830d0; body size 48 bytes.
#line 1 "ENTRY_106830d0"

undefined4 * __fastcall FUN_106830d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10683110; body size 48 bytes.
#line 1 "ENTRY_10683110"

undefined4 * __fastcall FUN_10683110(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10686070; body size 61 bytes.
#line 1 "ENTRY_10686070"

undefined4 FUN_10686070(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_106823f0(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106863b0; body size 60 bytes.
#line 1 "ENTRY_106863b0"

void __stdcall FUN_106863b0(int param_1,int param_2)

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


// Reference entry 10687780; body size 59 bytes.
#line 1 "ENTRY_10687780"

void __thiscall Recovered_Bulk::FUN_10687780(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10681b80(puVar1,param_2);
  return;
}


// Reference entry 10687e20; body size 27 bytes.
#line 1 "ENTRY_10687e20"

undefined4 * __fastcall FUN_10687e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 106885a0; body size 46 bytes.
#line 1 "ENTRY_106885a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106885a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShare);
  puVar2 = (undefined4 *)((undefined4 *)(param_2 + 8));
  puVar3 = (undefined4 *)(param_1 + 2);
  for (iVar1 = (int)(0x302); iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = (undefined4)(*puVar2);
    puVar2 = (undefined4 *)(puVar2 + 1);
    puVar3 = (undefined4 *)(puVar3 + 1);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10688e80; body size 36 bytes.
#line 1 "ENTRY_10688e80"

int __thiscall Recovered_Bulk::FUN_10688e80(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  puVar2 = (undefined4 *)((undefined4 *)(param_2 + 8));
  puVar3 = (undefined4 *)((undefined4 *)(param_1 + 8));
  for (iVar1 = (int)(0x302); iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = (undefined4)(*puVar2);
    puVar2 = (undefined4 *)(puVar2 + 1);
    puVar3 = (undefined4 *)(puVar3 + 1);
  }
  return (int)(param_1);
}


// Reference entry 1068a750; body size 29 bytes.
#line 1 "ENTRY_1068a750"

undefined4 __stdcall FUN_1068a750(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_2 != 1) {
    iVar1 = (int)(param_2);
  }
  thunk_FUN_10210b20(param_1,iVar1);
  return (undefined4)(param_1);
}


// Reference entry 1068ad60; body size 26 bytes.
#line 1 "ENTRY_1068ad60"

uint __fastcall FUN_1068ad60(int param_1)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x38));
  if (iVar1 != 0) {
    iVar1 = (int)(*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8));
    in_EAX = (uint)(0);
    if (iVar1 >> 3 != 0) {
      return (uint)(((uint)((int3)(iVar1 >> 0xb)) << 8 | (uint)(1)));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1068be50; body size 56 bytes.
#line 1 "ENTRY_1068be50"

void __thiscall Recovered_Bulk::FUN_1068be50(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
    thunk_FUN_112af4e0("SCShareManager",5,"Remove Event Sink %p empty:%i",param_2,
                       *(int *)(param_1 + 0x20) == 0);
  }
  return;
}


// Reference entry 1068d470; body size 40 bytes.
#line 1 "ENTRY_1068d470"

int __thiscall Recovered_Bulk::FUN_1068d470(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_1068d4b0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10690430; body size 59 bytes.
#line 1 "ENTRY_10690430"

void __thiscall Recovered_Bulk::FUN_10690430(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_1068cc80(puVar1,param_2);
  return;
}


// Reference entry 10690480; body size 59 bytes.
#line 1 "ENTRY_10690480"

void __thiscall Recovered_Bulk::FUN_10690480(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_1068cf40(puVar1,param_2);
  return;
}


// Reference entry 106912c0; body size 39 bytes.
#line 1 "ENTRY_106912c0"

undefined4 * __fastcall FUN_106912c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10691aa0; body size 18 bytes.
#line 1 "ENTRY_10691aa0"

undefined4 __fastcall FUN_10691aa0(undefined4 param_1)

{
  thunk_FUN_106912f0();
  return (undefined4)(param_1);
}


// Reference entry 10692270; body size 60 bytes.
#line 1 "ENTRY_10692270"

void __fastcall FUN_10692270(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 106922d0; body size 60 bytes.
#line 1 "ENTRY_106922d0"

void __fastcall FUN_106922d0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10692350; body size 33 bytes.
#line 1 "ENTRY_10692350"

void __fastcall FUN_10692350(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106925e0; body size 33 bytes.
#line 1 "ENTRY_106925e0"

void __fastcall FUN_106925e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10693e50; body size 17 bytes.
#line 1 "ENTRY_10693e50"

void __stdcall FUN_10693e50(undefined4 *param_1)

{
  FUN_10692b90(*param_1);
  return;
}


// Reference entry 106944c0; body size 33 bytes.
#line 1 "ENTRY_106944c0"

void __fastcall FUN_106944c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10695460; body size 59 bytes.
#line 1 "ENTRY_10695460"

void __stdcall FUN_10695460(int param_1,int param_2)

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


// Reference entry 106967c0; body size 27 bytes.
#line 1 "ENTRY_106967c0"

undefined4 __thiscall Recovered_Bulk::FUN_106967c0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_1);
  thunk_FUN_10116710(param_1 + 0x2c,(int)&uStack_4 + 3);
  return (undefined4)(param_2);
}


// Reference entry 106967f0; body size 40 bytes.
#line 1 "ENTRY_106967f0"

bool FUN_106967f0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_c [12];
  
  piVar3 = (int *)((int *)thunk_FUN_10695a20(local_c));
  iVar1 = (int)(piVar3[1]);
  iVar2 = (int)(*piVar3);
  thunk_FUN_1026fe20();
  return (bool)(iVar1 - iVar2 >> 3 != 0);
}


// Reference entry 10696ac0; body size 59 bytes.
#line 1 "ENTRY_10696ac0"

void __thiscall Recovered_Bulk::FUN_10696ac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_1068cc80(puVar1,param_2);
  return;
}


// Reference entry 10696b10; body size 59 bytes.
#line 1 "ENTRY_10696b10"

void __thiscall Recovered_Bulk::FUN_10696b10(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_1068cf40(puVar1,param_2);
  return;
}


// Reference entry 10699700; body size 30 bytes.
#line 1 "ENTRY_10699700"

SCStr * __thiscall Recovered_Bulk::FUN_10699700(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x14));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x18);
  return (SCStr *)(param_2);
}


// Reference entry 10699a70; body size 39 bytes.
#line 1 "ENTRY_10699a70"

undefined4 * __fastcall FUN_10699a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

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


// Reference entry 1069b150; body size 39 bytes.
#line 1 "ENTRY_1069b150"

undefined4 * __fastcall FUN_1069b150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1069bf80; body size 33 bytes.
#line 1 "ENTRY_1069bf80"

void __fastcall FUN_1069bf80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1069c160; body size 33 bytes.
#line 1 "ENTRY_1069c160"

void __fastcall FUN_1069c160(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1069cbf0; body size 27 bytes.
#line 1 "ENTRY_1069cbf0"

int __stdcall FUN_1069cbf0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10699fb0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 1069d8b0; body size 19 bytes.
#line 1 "ENTRY_1069d8b0"

void __thiscall Recovered_Bulk::FUN_1069d8b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1069d9a0; body size 17 bytes.
#line 1 "ENTRY_1069d9a0"

void __stdcall FUN_1069d9a0(undefined4 *param_1)

{
  FUN_1069ccd0(*param_1);
  return;
}


// Reference entry 1069dda0; body size 19 bytes.
#line 1 "ENTRY_1069dda0"

void __thiscall Recovered_Bulk::FUN_1069dda0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1069e110; body size 33 bytes.
#line 1 "ENTRY_1069e110"

void __fastcall FUN_1069e110(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1069ed80; body size 35 bytes.
#line 1 "ENTRY_1069ed80"

void __thiscall Recovered_Bulk::FUN_1069ed80(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 1069edb0; body size 35 bytes.
#line 1 "ENTRY_1069edb0"

void __thiscall Recovered_Bulk::FUN_1069edb0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 106a1500; body size 60 bytes.
#line 1 "ENTRY_106a1500"

void __fastcall FUN_106a1500(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 106a2b90; body size 59 bytes.
#line 1 "ENTRY_106a2b90"

undefined4 __thiscall Recovered_Bulk::FUN_106a2b90(SCStr *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  uVar2 = (uint)(((SCStr *)(param_2))->hash());
  iVar3 = (int)(thunk_FUN_10117000(local_8,param_2,uVar2));
  iVar3 = (int)(*(int *)(iVar3 + 4));
  if (iVar3 == 0) {
    iVar3 = (int)(*(int *)(param_1 + 4));
  }
  return (undefined4)(((uint)((int3)((uint)iVar3 >> 8)) << 8 | (uint)(iVar3 != iVar1)));
}


// Reference entry 106a30e0; body size 62 bytes.
#line 1 "ENTRY_106a30e0"

int __thiscall Recovered_Bulk::FUN_106a30e0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106a3130(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_106a48e0(param_2,local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 106a3af0; body size 48 bytes.
#line 1 "ENTRY_106a3af0"

undefined4 * __fastcall FUN_106a3af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106a40d0; body size 48 bytes.
#line 1 "ENTRY_106a40d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106a40d0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_bad_cast);
  return (undefined4 *)(param_1);
}


// Reference entry 106a4110; body size 24 bytes.
#line 1 "ENTRY_106a4110"

undefined4 * __fastcall FUN_106a4110(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = (undefined4)("bad cast");
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_bad_cast);
  return (undefined4 *)(param_1);
}


// Reference entry 106a4400; body size 25 bytes.
#line 1 "ENTRY_106a4400"

void __fastcall FUN_106a4400(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 8))());
    if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


// Reference entry 106a4e00; body size 38 bytes.
#line 1 "ENTRY_106a4e00"

int __thiscall Recovered_Bulk::FUN_106a4e00(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106a4c50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1 + -0x78,0xc0);
  }
  return (int)(param_1 + -0x78);
}


// Reference entry 106a4e30; body size 45 bytes.
#line 1 "ENTRY_106a4e30"

undefined4 * __thiscall Recovered_Bulk::FUN_106a4e30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106a55d0; body size 26 bytes.
#line 1 "ENTRY_106a55d0"

void FUN_106a55d0(void)

{
  undefined1 local_c [12];
  
  thunk_FUN_106a4110();
                    
  _CxxThrowException(local_c,(ThrowInfo *)&DAT_11e2f6dc);
}


// Reference entry 106a7f50; body size 46 bytes.
#line 1 "ENTRY_106a7f50"

undefined4 __fastcall FUN_106a7f50(int *param_1)

{
  int iVar1;
  
  if (param_1[0x13] != 0) {
    iVar1 = (int)((**(code **)(*param_1 + 0xc))(0xffffffff));
    if (iVar1 != -1) {
      iVar1 = (int)(fflush((FILE *)param_1[0x13]));
      if (iVar1 < 0) {
        return (undefined4)(0xffffffff);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 106ab730; body size 40 bytes.
#line 1 "ENTRY_106ab730"

int __thiscall Recovered_Bulk::FUN_106ab730(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_106ab7b0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 106ab770; body size 49 bytes.
#line 1 "ENTRY_106ab770"

int __thiscall Recovered_Bulk::FUN_106ab770(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106ab920(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 106af240; body size 59 bytes.
#line 1 "ENTRY_106af240"

void __thiscall Recovered_Bulk::FUN_106af240(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_106aa870(puVar1,param_2);
  return;
}


// Reference entry 106af2d0; body size 59 bytes.
#line 1 "ENTRY_106af2d0"

void __thiscall Recovered_Bulk::FUN_106af2d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_106aabe0(puVar1,param_2);
  return;
}


// Reference entry 106af320; body size 59 bytes.
#line 1 "ENTRY_106af320"

void __thiscall Recovered_Bulk::FUN_106af320(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_106aaea0(puVar1,param_2);
  return;
}


// Reference entry 106af6d0; body size 55 bytes.
#line 1 "ENTRY_106af6d0"

void __thiscall Recovered_Bulk::FUN_106af6d0(int *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (uint)(((SCStr *)(param_3))->hash());
  iVar2 = (int)(thunk_FUN_106ab7b0(local_8,param_3,uVar1));
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 106b0890; body size 48 bytes.
#line 1 "ENTRY_106b0890"

undefined4 * __fastcall FUN_106b0890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106b0930; body size 48 bytes.
#line 1 "ENTRY_106b0930"

undefined4 * __fastcall FUN_106b0930(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106b1130; body size 49 bytes.
#line 1 "ENTRY_106b1130"

undefined4 * __thiscall Recovered_Bulk::FUN_106b1130(undefined4 *param_2)
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


// Reference entry 106b2380; body size 37 bytes.
#line 1 "ENTRY_106b2380"

undefined4 * __thiscall Recovered_Bulk::FUN_106b2380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f04dc0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddProductLaunchable);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAddProductLaunchable);
  return (undefined4 *)(param_1);
}


// Reference entry 106b3510; body size 60 bytes.
#line 1 "ENTRY_106b3510"

void __fastcall FUN_106b3510(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 106b3570; body size 60 bytes.
#line 1 "ENTRY_106b3570"

void __fastcall FUN_106b3570(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 106b35d0; body size 60 bytes.
#line 1 "ENTRY_106b35d0"

void __fastcall FUN_106b35d0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 106b3670; body size 33 bytes.
#line 1 "ENTRY_106b3670"

void __fastcall FUN_106b3670(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106b37d0; body size 36 bytes.
#line 1 "ENTRY_106b37d0"

void __fastcall FUN_106b37d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    thunk_FUN_106ab5b0(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x28);
  }
  return;
}


// Reference entry 106b3a30; body size 34 bytes.
#line 1 "ENTRY_106b3a30"

void __fastcall FUN_106b3a30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)(param_1) != (undefined4 *)(puVar1); param_1 = param_1 + 5) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106b3a60; body size 33 bytes.
#line 1 "ENTRY_106b3a60"

void __fastcall FUN_106b3a60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106b3e80; body size 33 bytes.
#line 1 "ENTRY_106b3e80"

void __fastcall FUN_106b3e80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106b6be0; body size 60 bytes.
#line 1 "ENTRY_106b6be0"

int __thiscall Recovered_Bulk::FUN_106b6be0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 106b89d0; body size 19 bytes.
#line 1 "ENTRY_106b89d0"

void __thiscall Recovered_Bulk::FUN_106b89d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106b89f0; body size 19 bytes.
#line 1 "ENTRY_106b89f0"

void __thiscall Recovered_Bulk::FUN_106b89f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106b8a40; body size 50 bytes.
#line 1 "ENTRY_106b8a40"

void __thiscall Recovered_Bulk::FUN_106b8a40(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_106ab5b0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  thunk_FUN_106a9bb0(param_2,param_2);
  return;
}


// Reference entry 106b8ac0; body size 58 bytes.
#line 1 "ENTRY_106b8ac0"

void __thiscall Recovered_Bulk::FUN_106b8ac0(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 106b8d10; body size 36 bytes.
#line 1 "ENTRY_106b8d10"

void __stdcall FUN_106b8d10(undefined4 *param_1,undefined4 *param_2)

{
  for (; (undefined4 *)(param_1) != (undefined4 *)(param_2); param_1 = param_1 + 5) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106b8d40; body size 37 bytes.
#line 1 "ENTRY_106b8d40"

void __thiscall Recovered_Bulk::FUN_106b8d40(undefined4 *param_2)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 106b8d70; body size 60 bytes.
#line 1 "ENTRY_106b8d70"

bool __thiscall Recovered_Bulk::FUN_106b8d70(undefined4 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (**(int **)(param_1 + 4) == 1) {
    cVar1 = (char)((**(code **)(*(int *)*param_2 + 0x20))());
    return (bool)(cVar1 == '\0');
  }
  if (**(int **)(param_1 + 4) != 2) {
    return (bool)(false);
  }
  cVar1 = (char)((**(code **)(*(int *)*param_2 + 0x24))());
  return (bool)(cVar1 == '\0');
}


// Reference entry 106b8eb0; body size 16 bytes.
#line 1 "ENTRY_106b8eb0"

void __stdcall FUN_106b8eb0(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1061c5e0(4);
  return;
}


// Reference entry 106b8f50; body size 19 bytes.
#line 1 "ENTRY_106b8f50"

bool __stdcall FUN_106b8f50(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*(int *)*param_1 + 0x18))());
  return (bool)(iVar1 == 0);
}


// Reference entry 106ba4a0; body size 30 bytes.
#line 1 "ENTRY_106ba4a0"

int FUN_106ba4a0(int param_1)

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


// Reference entry 106ba600; body size 19 bytes.
#line 1 "ENTRY_106ba600"

void __thiscall Recovered_Bulk::FUN_106ba600(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106ba620; body size 19 bytes.
#line 1 "ENTRY_106ba620"

void __thiscall Recovered_Bulk::FUN_106ba620(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106ba670; body size 59 bytes.
#line 1 "ENTRY_106ba670"

void __thiscall Recovered_Bulk::FUN_106ba670(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_106ab5b0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  iVar1 = (int)(*param_1);
  *param_1 = (int)(*param_2);
  *param_2 = (int)(iVar1);
  iVar1 = (int)(param_1[1]);
  param_1[1] = (int)(param_2[1]);
  param_2[1] = (int)(iVar1);
  return;
}


// Reference entry 106baa10; body size 33 bytes.
#line 1 "ENTRY_106baa10"

void __fastcall FUN_106baa10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106bd4c0; body size 47 bytes.
#line 1 "ENTRY_106bd4c0"

void __fastcall FUN_106bd4c0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  puVar2 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar2) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)*puVar2)(0);
      puVar2 = (undefined4 *)(puVar2 + 5);
    } while ((undefined4 *)(puVar2) != (undefined4 *)(puVar1));
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)((int)puVar2);
  return;
}


// Reference entry 106bd500; body size 59 bytes.
#line 1 "ENTRY_106bd500"

void __fastcall FUN_106bd500(int param_1)

{
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x104));
  (**(code **)(**(int **)(param_1 + 0x124) + 0x14))(PTR_s_AllowLaunchAfter_12119b3c);
  return;
}


// Reference entry 106bdd60; body size 61 bytes.
#line 1 "ENTRY_106bdd60"

undefined4 FUN_106bdd60(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_106ab850(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106bddb0; body size 61 bytes.
#line 1 "ENTRY_106bddb0"

undefined4 FUN_106bddb0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_1025ed70(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 106be280; body size 60 bytes.
#line 1 "ENTRY_106be280"

void __stdcall FUN_106be280(int param_1,int param_2)

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


// Reference entry 106be2d0; body size 60 bytes.
#line 1 "ENTRY_106be2d0"

void __stdcall FUN_106be2d0(int param_1,int param_2)

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


// Reference entry 106be320; body size 59 bytes.
#line 1 "ENTRY_106be320"

void __stdcall FUN_106be320(int param_1,int param_2)

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


// Reference entry 106c3c90; body size 16 bytes.
#line 1 "ENTRY_106c3c90"

int FUN_106c3c90(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1033cdb0(0x17));
  return (int)(iVar1 * 2);
}


// Reference entry 106c3cd0; body size 23 bytes.
#line 1 "ENTRY_106c3cd0"

undefined4 __thiscall Recovered_Bulk::FUN_106c3cd0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_106b1170(param_1 + 0x1ac);
  return (undefined4)(param_2);
}


// Reference entry 106ca070; body size 39 bytes.
#line 1 "ENTRY_106ca070"

void __stdcall FUN_106ca070(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(param_1);
  thunk_FUN_105bebd0(param_1);
  cVar1 = (char)(thunk_FUN_10e10fd0(uVar2));
  if (cVar1 == '\0') {
    thunk_FUN_105bebd0(param_1);
    thunk_FUN_10e111f0(param_1);
  }
  return;
}


// Reference entry 106cc6c0; body size 56 bytes.
#line 1 "ENTRY_106cc6c0"

void __thiscall Recovered_Bulk::FUN_106cc6c0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4));
  if ((SCStr *)(this_) != *(SCStr **)(param_1 + 8)) {
    ((SCStr *)(this_))->op_ctor(param_2);
    this_[4] = (SCStr)(param_2[4]);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_106aa5c0(this_,param_2);
  return;
}


// Reference entry 106cc710; body size 59 bytes.
#line 1 "ENTRY_106cc710"

void __thiscall Recovered_Bulk::FUN_106cc710(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_106aabe0(puVar1,param_2);
  return;
}


// Reference entry 106cc760; body size 59 bytes.
#line 1 "ENTRY_106cc760"

void __thiscall Recovered_Bulk::FUN_106cc760(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_106aaea0(puVar1,param_2);
  return;
}


// Reference entry 106cc7b0; body size 59 bytes.
#line 1 "ENTRY_106cc7b0"

void __thiscall Recovered_Bulk::FUN_106cc7b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_106aa870(puVar1,param_2);
  return;
}


// Reference entry 106cc800; body size 42 bytes.
#line 1 "ENTRY_106cc800"

void __thiscall Recovered_Bulk::FUN_106cc800(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    thunk_FUN_106aec80(param_1);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x14;
    return;
  }
  thunk_FUN_106ab040(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 106cf000; body size 56 bytes.
#line 1 "ENTRY_106cf000"

void __fastcall FUN_106cf000(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x100) != 0) &&
     (cVar1 = thunk_FUN_1059d120(*(int *)(param_1 + 0x100)), cVar1 != '\0')) {
    thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x100));
  }
  thunk_FUN_106c9300();
  return;
}


// Reference entry 106cf0f0; body size 55 bytes.
#line 1 "ENTRY_106cf0f0"

void __fastcall FUN_106cf0f0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_1059d120(*(undefined4 *)(param_1 + 0x100)));
  if (cVar1 != '\0') {
    thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x100));
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  return;
}


// Reference entry 106d00a0; body size 33 bytes.
#line 1 "ENTRY_106d00a0"

void __fastcall FUN_106d00a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106d00d0; body size 33 bytes.
#line 1 "ENTRY_106d00d0"

void __fastcall FUN_106d00d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106d01d0; body size 37 bytes.
#line 1 "ENTRY_106d01d0"

int * __fastcall FUN_106d01d0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 106d0460; body size 33 bytes.
#line 1 "ENTRY_106d0460"

void __fastcall FUN_106d0460(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106d0a70; body size 28 bytes.
#line 1 "ENTRY_106d0a70"

void __fastcall FUN_106d0a70(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))());
  if (cVar1 != '\0') {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
    return;
  }
  return;
}


// Reference entry 106d1a20; body size 60 bytes.
#line 1 "ENTRY_106d1a20"

int __thiscall Recovered_Bulk::FUN_106d1a20(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106d1a70(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 106d2520; body size 48 bytes.
#line 1 "ENTRY_106d2520"

undefined4 * __fastcall FUN_106d2520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106d2ab0; body size 60 bytes.
#line 1 "ENTRY_106d2ab0"

void __fastcall FUN_106d2ab0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 106d3760; body size 25 bytes.
#line 1 "ENTRY_106d3760"

void __thiscall Recovered_Bulk::FUN_106d3760(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 106d3780; body size 19 bytes.
#line 1 "ENTRY_106d3780"

void __thiscall Recovered_Bulk::FUN_106d3780(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106d37a0; body size 19 bytes.
#line 1 "ENTRY_106d37a0"

void __thiscall Recovered_Bulk::FUN_106d37a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106d38b0; body size 48 bytes.
#line 1 "ENTRY_106d38b0"

void __fastcall FUN_106d38b0(int param_1)

{
  int extraout_ECX;
  int iStack_c;
  
  iStack_c = (int)(param_1);
  if (*(char *)(param_1 + 0xc) != '\0') {
    iStack_c = (int)(0x106d38c2);
    thunk_FUN_106d64c0();
    iStack_c = (int)(extraout_ECX);
  }
  ((SCStr *)((SCStr *)&iStack_c))->op_ctor((SCStr *)(*(int *)(param_1 + 4) + 0x85a0));
  thunk_FUN_10f19cf0();
  return;
}


// Reference entry 106d42c0; body size 25 bytes.
#line 1 "ENTRY_106d42c0"

void __thiscall Recovered_Bulk::FUN_106d42c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  param_2[2] = (undefined4)(uVar1);
  return;
}


// Reference entry 106d42e0; body size 19 bytes.
#line 1 "ENTRY_106d42e0"

void __thiscall Recovered_Bulk::FUN_106d42e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106d4300; body size 19 bytes.
#line 1 "ENTRY_106d4300"

void __thiscall Recovered_Bulk::FUN_106d4300(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 106d56a0; body size 17 bytes.
#line 1 "ENTRY_106d56a0"

void __fastcall FUN_106d56a0(int param_1)

{
                    
                    
  (**(code **)(*(int *)(param_1 + 0x8554) + 8))();
  return;
}


// Reference entry 106d5d20; body size 23 bytes.
#line 1 "ENTRY_106d5d20"

undefined4 __thiscall Recovered_Bulk::FUN_106d5d20(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_101a2b90(param_1 + 0x85a0);
  return (undefined4)(param_2);
}


// Reference entry 106d68b0; body size 50 bytes.
#line 1 "ENTRY_106d68b0"

void __thiscall Recovered_Bulk::FUN_106d68b0(int param_2)
{
  int param_1 = (int )this;
  undefined **local_28;
  int local_24;
  undefined1 *local_4;
  
  if ((int)(param_2) == *(int *)(param_1 + 0x85ac)) {
    local_4 = (undefined1 *)((undefined1 *)&local_28);
    *(undefined4 *)(param_1 + 0x85ac) = 0;
    local_24 = (int)(param_1 + -0xc);
    local_28 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    thunk_FUN_106d6de0();
  }
  return;
}


// Reference entry 106d71a0; body size 25 bytes.
#line 1 "ENTRY_106d71a0"

void FUN_106d71a0(void)

{
  undefined **local_2c [9];
  undefined1 *local_8;
  
  local_8 = (undefined1 *)((undefined1 *)local_2c);
  local_2c[0] = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  thunk_FUN_106d6de0();
  return;
}


// Reference entry 106d8310; body size 47 bytes.
#line 1 "ENTRY_106d8310"

undefined4 * __thiscall Recovered_Bulk::FUN_106d8310(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106d8da0; body size 54 bytes.
#line 1 "ENTRY_106d8da0"

void FUN_106d8da0(int *param_1,int *param_2)

{
  int *piVar1;
  
  for (; (int *)(param_1) != (int *)(param_2); param_1 = param_1 + 10) {
    piVar1 = (int *)((int *)param_1[9]);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
      param_1[9] = (int)(0);
    }
  }
  return;
}


// Reference entry 106d90d0; body size 33 bytes.
#line 1 "ENTRY_106d90d0"

void __thiscall Recovered_Bulk::FUN_106d90d0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_106d91c0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 106d9220; body size 57 bytes.
#line 1 "ENTRY_106d9220"

void __stdcall FUN_106d9220(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_106d9220(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 106d9270; body size 57 bytes.
#line 1 "ENTRY_106d9270"

void __stdcall FUN_106d9270(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_106d9270(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 106d92c0; body size 49 bytes.
#line 1 "ENTRY_106d92c0"

int __thiscall Recovered_Bulk::FUN_106d92c0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106d9340(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 106d9300; body size 49 bytes.
#line 1 "ENTRY_106d9300"

int __thiscall Recovered_Bulk::FUN_106d9300(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_106d93a0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 106d9c20; body size 48 bytes.
#line 1 "ENTRY_106d9c20"

undefined4 * __fastcall FUN_106d9c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106d9c60; body size 48 bytes.
#line 1 "ENTRY_106d9c60"

undefined4 * __fastcall FUN_106d9c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106d9ca0; body size 48 bytes.
#line 1 "ENTRY_106d9ca0"

undefined4 * __fastcall FUN_106d9ca0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106da320; body size 33 bytes.
#line 1 "ENTRY_106da320"

void __fastcall FUN_106da320(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106da3f0; body size 28 bytes.
#line 1 "ENTRY_106da3f0"

void __fastcall FUN_106da3f0(int *param_1)

{
  thunk_FUN_106d91c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 106da4b0; body size 33 bytes.
#line 1 "ENTRY_106da4b0"

void __fastcall FUN_106da4b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106da500; body size 28 bytes.
#line 1 "ENTRY_106da500"

void __fastcall FUN_106da500(int *param_1)

{
  thunk_FUN_106d91c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 106da960; body size 28 bytes.
#line 1 "ENTRY_106da960"

void __fastcall FUN_106da960(int *param_1)

{
  thunk_FUN_106d91c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 106dacd0; body size 55 bytes.
#line 1 "ENTRY_106dacd0"

int * __thiscall Recovered_Bulk::FUN_106dacd0(byte param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (int *)(param_1);
}


// Reference entry 106db150; body size 56 bytes.
#line 1 "ENTRY_106db150"

void __stdcall FUN_106db150(int *param_1,int *param_2)

{
  int *piVar1;
  
  for (; (int *)(param_1) != (int *)(param_2); param_1 = param_1 + 10) {
    piVar1 = (int *)((int *)param_1[9]);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
      param_1[9] = (int)(0);
    }
  }
  return;
}


// Reference entry 106dba90; body size 33 bytes.
#line 1 "ENTRY_106dba90"

void __fastcall FUN_106dba90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 106dc1a0; body size 59 bytes.
#line 1 "ENTRY_106dc1a0"

void __stdcall FUN_106dc1a0(int param_1,int param_2)

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


// Reference entry 106dc4e0; body size 26 bytes.
#line 1 "ENTRY_106dc4e0"

undefined4 __stdcall FUN_106dc4e0(undefined4 param_1)

{
  thunk_FUN_10eae160();
  thunk_FUN_106dfa20(param_1);
  return (undefined4)(param_1);
}


// Reference entry 106dc540; body size 32 bytes.
#line 1 "ENTRY_106dc540"

undefined4 __fastcall FUN_106dc540(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc)) / 0xc);
  return (undefined4)(((uint)((int3)((uint)iVar1 >> 8)) << 8 | (uint)(iVar1 != 0)));
}


// Reference entry 106dc570; body size 49 bytes.
#line 1 "ENTRY_106dc570"

uint __fastcall FUN_106dc570(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((**(code **)*param_1)());
  if (uVar2 == 0) {
    iVar1 = (int)((int)(param_1[0x34] - param_1[0x33]) / 0xc);
    uVar2 = (uint)(0);
    if (iVar1 != 0) {
      return (uint)(((uint)((int3)((uint)iVar1 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 106dc5b0; body size 41 bytes.
#line 1 "ENTRY_106dc5b0"

undefined4 __fastcall FUN_106dc5b0(int param_1)

{
  if ((*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc)) / 0xc == 0) {
    return (undefined4)(0);
  }
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xd0) + -8));
}


// Reference entry 106dc5f0; body size 41 bytes.
#line 1 "ENTRY_106dc5f0"

undefined4 __fastcall FUN_106dc5f0(int param_1)

{
  if ((*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc)) / 0xc == 0) {
    return (undefined4)(0);
  }
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0xd0) + -8));
}


// Reference entry 106dde40; body size 48 bytes.
#line 1 "ENTRY_106dde40"

undefined4 * __fastcall FUN_106dde40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106dde80; body size 48 bytes.
#line 1 "ENTRY_106dde80"

undefined4 * __fastcall FUN_106dde80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106e09f0; body size 57 bytes.
#line 1 "ENTRY_106e09f0"

void __stdcall FUN_106e09f0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_106e09f0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 106e1100; body size 59 bytes.
#line 1 "ENTRY_106e1100"

void __thiscall Recovered_Bulk::FUN_106e1100(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_106e0790(puVar1,param_2);
  return;
}


// Reference entry 106e27a0; body size 48 bytes.
#line 1 "ENTRY_106e27a0"

undefined4 * __fastcall FUN_106e27a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 106e4b20; body size 27 bytes.
#line 1 "ENTRY_106e4b20"

void __fastcall FUN_106e4b20(undefined4 *param_1)

{
  thunk_FUN_106e7650();
  thunk_FUN_106e76e0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  return;
}


// Reference entry 106e4e30; body size 60 bytes.
#line 1 "ENTRY_106e4e30"

void __fastcall FUN_106e4e30(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 106e4e90; body size 60 bytes.
#line 1 "ENTRY_106e4e90"

void __fastcall FUN_106e4e90(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 106e5050; body size 34 bytes.
#line 1 "ENTRY_106e5050"

void __fastcall FUN_106e5050(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)(param_1) != (undefined4 *)(puVar1); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106e5e30; body size 49 bytes.
#line 1 "ENTRY_106e5e30"

undefined4 * __thiscall Recovered_Bulk::FUN_106e5e30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106e7650();
  thunk_FUN_106e76e0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTreeNoAppendInterface);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 106e7130; body size 36 bytes.
#line 1 "ENTRY_106e7130"

void __stdcall FUN_106e7130(undefined4 *param_1,undefined4 *param_2)

{
  for (; (undefined4 *)(param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106e7ac0; body size 50 bytes.
#line 1 "ENTRY_106e7ac0"

int __thiscall Recovered_Bulk::FUN_106e7ac0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
    thunk_FUN_106e1600(param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20;
    return (int)(param_1);
  }
  thunk_FUN_106e05a0(*(int *)(param_1 + 0x18),param_2);
  return (int)(param_1);
}


// Reference entry 106e8ac0; body size 56 bytes.
#line 1 "ENTRY_106e8ac0"

void __stdcall FUN_106e8ac0(int param_1,int param_2)

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


// Reference entry 106e8b10; body size 60 bytes.
#line 1 "ENTRY_106e8b10"

void __stdcall FUN_106e8b10(int param_1,int param_2)

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


// Reference entry 106e8b80; body size 60 bytes.
#line 1 "ENTRY_106e8b80"

int __thiscall Recovered_Bulk::FUN_106e8b80(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  *(undefined4 *)(iVar1 + -0x1c) = 3;
  if (*(int *)(iVar1 + -8) != *(int *)(iVar1 + -4)) {
    thunk_FUN_106e1600(param_2);
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 0x20;
    return (int)(param_1);
  }
  thunk_FUN_106e05a0(*(int *)(iVar1 + -8),param_2);
  return (int)(param_1);
}


// Reference entry 106f6ba0; body size 59 bytes.
#line 1 "ENTRY_106f6ba0"

void __thiscall Recovered_Bulk::FUN_106f6ba0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_106e0790(puVar1,param_2);
  return;
}


// Reference entry 106f8490; body size 60 bytes.
#line 1 "ENTRY_106f8490"

void __fastcall FUN_106f8490(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 106fe7a0; body size 60 bytes.
#line 1 "ENTRY_106fe7a0"

void __fastcall FUN_106fe7a0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 107038d0; body size 60 bytes.
#line 1 "ENTRY_107038d0"

void __fastcall FUN_107038d0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1070a270; body size 60 bytes.
#line 1 "ENTRY_1070a270"

void __fastcall FUN_1070a270(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1070a2d0; body size 60 bytes.
#line 1 "ENTRY_1070a2d0"

void __fastcall FUN_1070a2d0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1070a330; body size 60 bytes.
#line 1 "ENTRY_1070a330"

void __fastcall FUN_1070a330(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10712fc0; body size 60 bytes.
#line 1 "ENTRY_10712fc0"

void __fastcall FUN_10712fc0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 107196f0; body size 60 bytes.
#line 1 "ENTRY_107196f0"

void __fastcall FUN_107196f0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10723790; body size 58 bytes.
#line 1 "ENTRY_10723790"

void __fastcall FUN_10723790(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  thunk_FUN_10eb41c0();
  uVar1 = (undefined4)(thunk_FUN_10d9e5c0());
  thunk_FUN_10d9e6c0(uVar1);
  thunk_FUN_10d9e6d0(param_1 + 4);
  return;
}


// Reference entry 10723bc0; body size 57 bytes.
#line 1 "ENTRY_10723bc0"

void __stdcall FUN_10723bc0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10723bc0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10726c20; body size 48 bytes.
#line 1 "ENTRY_10726c20"

undefined4 * __fastcall FUN_10726c20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10726c60; body size 48 bytes.
#line 1 "ENTRY_10726c60"

undefined4 * __fastcall FUN_10726c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 1072e140; body size 61 bytes.
#line 1 "ENTRY_1072e140"

void __fastcall FUN_1072e140(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  thunk_FUN_10eb41c0();
  uVar1 = (undefined4)(thunk_FUN_10d9e5c0());
  thunk_FUN_10d9e6c0(uVar1);
  thunk_FUN_10d9e6d0(param_1 + 8);
  return;
}


// Reference entry 1072e190; body size 60 bytes.
#line 1 "ENTRY_1072e190"

void __thiscall Recovered_Bulk::FUN_1072e190(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  SCStr *this_;
  
  iVar1 = (int)(*param_2);
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  this_ = (SCStr *)((SCStr *)(iVar1 + 0xf4));
  if ((SCStr *)(param_1 + 0xc) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)(param_1 + 0xc)));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1072e7e0; body size 56 bytes.
#line 1 "ENTRY_1072e7e0"

int __stdcall FUN_1072e7e0(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10723ea0(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_1)) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 107491c0; body size 42 bytes.
#line 1 "ENTRY_107491c0"

void FUN_107491c0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 10758160; body size 36 bytes.
#line 1 "ENTRY_10758160"

void FUN_10758160(void)

{
  undefined1 uVar1;
  int iVar2;
  
  thunk_FUN_10ebc1d0();
  iVar2 = (int)(thunk_FUN_10eb41b0());
  uVar1 = (undefined1)(thunk_FUN_107bcdc0());
  *(undefined1 *)(iVar2 + 0xf4) = uVar1;
  return;
}


// Reference entry 10758190; body size 36 bytes.
#line 1 "ENTRY_10758190"

void FUN_10758190(void)

{
  undefined1 uVar1;
  int iVar2;
  
  thunk_FUN_10ebc1d0();
  iVar2 = (int)(thunk_FUN_10eb41b0());
  uVar1 = (undefined1)(thunk_FUN_108eeb60());
  *(undefined1 *)(iVar2 + 0xf4) = uVar1;
  return;
}


// Reference entry 10761000; body size 61 bytes.
#line 1 "ENTRY_10761000"

void __fastcall FUN_10761000(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 8))();
  thunk_FUN_105ad910();
  iVar1 = (int)(thunk_FUN_106dc530());
  iVar2 = (int)(thunk_FUN_106243b0());
  if (iVar1 != iVar2) {
    thunk_FUN_10eacd40();
    return;
  }
  thunk_FUN_106431c0();
  return;
}


// Reference entry 10771db0; body size 59 bytes.
#line 1 "ENTRY_10771db0"

void FUN_10771db0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10ebc1d0());
  *(undefined4 *)(iVar1 + 0xf4) = 3;
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 10773f70; body size 60 bytes.
#line 1 "ENTRY_10773f70"

void __fastcall FUN_10773f70(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10774410; body size 20 bytes.
#line 1 "ENTRY_10774410"

void FUN_10774410(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 10781c60; body size 17 bytes.
#line 1 "ENTRY_10781c60"

bool FUN_10781c60(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a2d98));
  return (bool)(0 < iVar1);
}


// Reference entry 10788330; body size 48 bytes.
#line 1 "ENTRY_10788330"

undefined4 * __fastcall FUN_10788330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1078e080; body size 60 bytes.
#line 1 "ENTRY_1078e080"

void __fastcall FUN_1078e080(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1078e0e0; body size 60 bytes.
#line 1 "ENTRY_1078e0e0"

void __fastcall FUN_1078e0e0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10799320; body size 52 bytes.
#line 1 "ENTRY_10799320"

undefined4 __fastcall FUN_10799320(int param_1)

{
  switch(*(undefined4 *)(*(int *)(param_1 + 0x128) + 0x28)) {
  case 1:
    return (undefined4)(DAT_121a2e68);
  case 2:
    return (undefined4)(DAT_121a2e6c);
  default:
    return (undefined4)(DAT_121a2e8c);
  case 7:
    return (undefined4)(DAT_121a2e74);
  case 8:
    return (undefined4)(DAT_121a2e70);
  }
}


// Reference entry 107bca20; body size 20 bytes.
#line 1 "ENTRY_107bca20"

undefined4 __thiscall Recovered_Bulk::FUN_107bca20(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1064d7a0(param_1 + 0x40);
  return (undefined4)(param_2);
}


// Reference entry 107bca40; body size 48 bytes.
#line 1 "ENTRY_107bca40"

undefined4 __fastcall FUN_107bca40(int param_1)

{
  switch(*(undefined4 *)(*(int *)(param_1 + 0x128) + 0x28)) {
  case 9:
  case 10:
    return (undefined4)(DAT_121a2e78);
  default:
    return (undefined4)(DAT_121a2e90);
  case 0xd:
    return (undefined4)(DAT_121a2e80);
  case 0xe:
    return (undefined4)(DAT_121a2e7c);
  }
}


// Reference entry 107bcdc0; body size 17 bytes.
#line 1 "ENTRY_107bcdc0"

bool FUN_107bcdc0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a2e98));
  return (bool)(0 < iVar1);
}


// Reference entry 107cc800; body size 41 bytes.
#line 1 "ENTRY_107cc800"

void __stdcall FUN_107cc800(int param_1)

{
  undefined4 uStack_c;
  
  if (param_1 != 0) {
    uStack_c = (undefined4)(3);
    thunk_FUN_107931b0(param_1);
    thunk_FUN_10c98710(&uStack_c);
    thunk_FUN_10793550();
  }
  return;
}


// Reference entry 107ec120; body size 20 bytes.
#line 1 "ENTRY_107ec120"

void FUN_107ec120(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 107ec190; body size 20 bytes.
#line 1 "ENTRY_107ec190"

void FUN_107ec190(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 107ec200; body size 20 bytes.
#line 1 "ENTRY_107ec200"

void FUN_107ec200(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 10823350; body size 25 bytes.
#line 1 "ENTRY_10823350"

undefined4 __stdcall FUN_10823350(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_108249b0(param_1,1);
  return (undefined4)(param_1);
}


// Reference entry 10823370; body size 25 bytes.
#line 1 "ENTRY_10823370"

undefined4 __stdcall FUN_10823370(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_108249b0(param_1,0);
  return (undefined4)(param_1);
}


// Reference entry 10823390; body size 25 bytes.
#line 1 "ENTRY_10823390"

undefined4 __stdcall FUN_10823390(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_108249b0(param_1,4);
  return (undefined4)(param_1);
}


// Reference entry 10823870; body size 25 bytes.
#line 1 "ENTRY_10823870"

undefined4 __stdcall FUN_10823870(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_108249b0(param_1,4);
  return (undefined4)(param_1);
}


// Reference entry 10823bc0; body size 25 bytes.
#line 1 "ENTRY_10823bc0"

undefined4 __stdcall FUN_10823bc0(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_108249b0(param_1,3);
  return (undefined4)(param_1);
}


// Reference entry 10827fe0; body size 55 bytes.
#line 1 "ENTRY_10827fe0"

int * __thiscall Recovered_Bulk::FUN_10827fe0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  SCStr *this_;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  this_ = (SCStr *)((SCStr *)param_1[1]);
  if ((SCStr *)(param_2) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *puVar1 = (undefined4)(*(undefined4 *)(param_2 + 4));
  puVar1[1] = (undefined4)(uVar2);
  return (int *)(param_1);
}


// Reference entry 10829cb0; body size 48 bytes.
#line 1 "ENTRY_10829cb0"

undefined4 * __fastcall FUN_10829cb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1082b810; body size 55 bytes.
#line 1 "ENTRY_1082b810"

void __fastcall FUN_1082b810(undefined4 *param_1)

{
  thunk_FUN_1082d6b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 108303c0; body size 59 bytes.
#line 1 "ENTRY_108303c0"

void __stdcall FUN_108303c0(int param_1,int param_2)

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


// Reference entry 10836240; body size 52 bytes.
#line 1 "ENTRY_10836240"

void FUN_10836240(void)

{
  thunk_FUN_10cf4ae0(1);
  thunk_FUN_10cf4ae0(3);
  thunk_FUN_10cf4ae0(2);
  thunk_FUN_1082df70();
  return;
}


// Reference entry 10838510; body size 22 bytes.
#line 1 "ENTRY_10838510"

void FUN_10838510(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_11287ac0();
  return;
}


// Reference entry 108388d0; body size 22 bytes.
#line 1 "ENTRY_108388d0"

void FUN_108388d0(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_11287ac0();
  return;
}


// Reference entry 1083d1a0; body size 23 bytes.
#line 1 "ENTRY_1083d1a0"

int __fastcall FUN_1083d1a0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x100));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (iVar1 != 0x3ef)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 1083e500; body size 61 bytes.
#line 1 "ENTRY_1083e500"

void __thiscall Recovered_Bulk::FUN_1083e500(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x100) = param_2;
  thunk_FUN_10eb0d90("updateResultCode",param_2);
  iVar1 = (int)(thunk_FUN_110828b0());
  if (iVar1 != 0) {
    thunk_FUN_10eb0c60("targetBaselineVersion",iVar1 + 0xad1);
  }
  return;
}


// Reference entry 108459b0; body size 60 bytes.
#line 1 "ENTRY_108459b0"

void __fastcall FUN_108459b0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10846600; body size 55 bytes.
#line 1 "ENTRY_10846600"

void __fastcall FUN_10846600(undefined4 *param_1)

{
  thunk_FUN_1036e480();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 10848bd0; body size 19 bytes.
#line 1 "ENTRY_10848bd0"

void __thiscall Recovered_Bulk::FUN_10848bd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10848cf0; body size 19 bytes.
#line 1 "ENTRY_10848cf0"

void __thiscall Recovered_Bulk::FUN_10848cf0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1085ff40; body size 48 bytes.
#line 1 "ENTRY_1085ff40"

undefined4 * __fastcall FUN_1085ff40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10861a40; body size 60 bytes.
#line 1 "ENTRY_10861a40"

void __fastcall FUN_10861a40(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10861aa0; body size 60 bytes.
#line 1 "ENTRY_10861aa0"

void __fastcall FUN_10861aa0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10861b00; body size 60 bytes.
#line 1 "ENTRY_10861b00"

void __fastcall FUN_10861b00(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10864920; body size 23 bytes.
#line 1 "ENTRY_10864920"

undefined4 __stdcall FUN_10864920(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_1086c3e0(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10866550; body size 23 bytes.
#line 1 "ENTRY_10866550"

undefined4 __stdcall FUN_10866550(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_1086c3e0(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10866570; body size 23 bytes.
#line 1 "ENTRY_10866570"

undefined4 __stdcall FUN_10866570(undefined4 param_1)

{
  thunk_FUN_10eb41c0();
  thunk_FUN_1086c3e0(param_1);
  return (undefined4)(param_1);
}


// Reference entry 1086f2f0; body size 57 bytes.
#line 1 "ENTRY_1086f2f0"

void __stdcall FUN_1086f2f0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_1086f2f0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10877a40; body size 59 bytes.
#line 1 "ENTRY_10877a40"

void __stdcall FUN_10877a40(int param_1,int param_2)

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


// Reference entry 10877a90; body size 59 bytes.
#line 1 "ENTRY_10877a90"

void __stdcall FUN_10877a90(int param_1,int param_2)

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


// Reference entry 1087e310; body size 60 bytes.
#line 1 "ENTRY_1087e310"

undefined4 FUN_1087e310(void)

{
  int local_8;
  undefined4 local_4;
  
  thunk_FUN_105c12d0(&local_8);
  thunk_FUN_105b6d40(&local_8,*(undefined4 *)(local_8 + 4));
  thunk_FUN_1148a50e(local_8,0x34);
  return (undefined4)(local_4);
}


// Reference entry 10881dd0; body size 60 bytes.
#line 1 "ENTRY_10881dd0"

void __fastcall FUN_10881dd0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 108836f0; body size 39 bytes.
#line 1 "ENTRY_108836f0"

void FUN_108836f0(undefined4 param_1)

{
  __time64_t *p_Var1;
  __time64_t _Var2;
  
  _Var2 = (__time64_t)(_time64((__time64_t *)0x0));
  p_Var1 = (__time64_t *)((__time64_t *)thunk_FUN_10882500(param_1));
  *p_Var1 = (__time64_t)(_Var2);
  return;
}


// Reference entry 1088f7f0; body size 42 bytes.
#line 1 "ENTRY_1088f7f0"

void FUN_1088f7f0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 1089ce20; body size 27 bytes.
#line 1 "ENTRY_1089ce20"

undefined4 __fastcall FUN_1089ce20(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x378) + 4))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 108a1960; body size 60 bytes.
#line 1 "ENTRY_108a1960"

void __fastcall FUN_108a1960(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 108a2300; body size 20 bytes.
#line 1 "ENTRY_108a2300"

void FUN_108a2300(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 108a9310; body size 17 bytes.
#line 1 "ENTRY_108a9310"

bool FUN_108a9310(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a35d8));
  return (bool)(0 < iVar1);
}


// Reference entry 108b16a0; body size 61 bytes.
#line 1 "ENTRY_108b16a0"

void __fastcall FUN_108b16a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 8))();
  thunk_FUN_105ad910();
  iVar1 = (int)(thunk_FUN_106dc530());
  iVar2 = (int)(thunk_FUN_106243b0());
  if (iVar1 != iVar2) {
    thunk_FUN_10eacd40();
    return;
  }
  thunk_FUN_106431c0();
  return;
}


// Reference entry 108b4480; body size 33 bytes.
#line 1 "ENTRY_108b4480"

void FUN_108b4480(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(thunk_FUN_10ebc1d0());
  iVar2 = (int)(thunk_FUN_10eb41b0());
  *(undefined1 *)(iVar2 + 0x118) = *(undefined1 *)(iVar1 + 0x118);
  return;
}


// Reference entry 108b44b0; body size 33 bytes.
#line 1 "ENTRY_108b44b0"

void FUN_108b44b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(thunk_FUN_10ebc1d0());
  iVar2 = (int)(thunk_FUN_10eb41b0());
  *(undefined1 *)(iVar2 + 0x118) = *(undefined1 *)(iVar1 + 0x118);
  return;
}


// Reference entry 108b4730; body size 32 bytes.
#line 1 "ENTRY_108b4730"

void __thiscall Recovered_Bulk::FUN_108b4730(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(param_2);
  if (param_1 + 0x11cU != param_2) {
    param_2 = (uint)(param_2 & 0xffffff00);
    thunk_FUN_1065a700(uVar1,param_2);
  }
  return;
}


// Reference entry 108b6b20; body size 61 bytes.
#line 1 "ENTRY_108b6b20"

undefined4 __fastcall FUN_108b6b20(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 8))();
  thunk_FUN_105ad910();
  iVar1 = (int)(thunk_FUN_10eac8c0());
  if (iVar1 == 2) {
    iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a3640));
    if (0 < iVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 108c6e80; body size 61 bytes.
#line 1 "ENTRY_108c6e80"

void __thiscall Recovered_Bulk::FUN_108c6e80(char param_2)
{
  int param_1 = (int )this;
  int iVar1;
  char *pcVar2;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  *(char *)(iVar1 + 0xf5) = param_2;
  pcVar2 = (char *)("Connected");
  if (param_2 == '\0') {
    pcVar2 = (char *)("Not Connected");
  }
  thunk_FUN_10302280(param_1 + -0x38,"LegacyTV: TOSLinkConnection status: %s",pcVar2);
  return;
}


// Reference entry 108f6cf0; body size 36 bytes.
#line 1 "ENTRY_108f6cf0"

void FUN_108f6cf0(void)

{
  undefined1 uVar1;
  int iVar2;
  
  thunk_FUN_10ebc1d0();
  iVar2 = (int)(thunk_FUN_10eb41b0());
  uVar1 = (undefined1)(thunk_FUN_108c41c0());
  *(undefined1 *)(iVar2 + 0x110) = uVar1;
  return;
}


// Reference entry 108fcfa0; body size 20 bytes.
#line 1 "ENTRY_108fcfa0"

void FUN_108fcfa0(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 1092ed60; body size 20 bytes.
#line 1 "ENTRY_1092ed60"

void FUN_1092ed60(void)

{
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  return;
}


// Reference entry 1095c3d0; body size 60 bytes.
#line 1 "ENTRY_1095c3d0"

void __fastcall FUN_1095c3d0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10970e90; body size 22 bytes.
#line 1 "ENTRY_10970e90"

void FUN_10970e90(void)

{
  thunk_FUN_1036e480();
  thunk_FUN_106da680();
  return;
}


// Reference entry 10971200; body size 48 bytes.
#line 1 "ENTRY_10971200"

undefined4 __thiscall Recovered_Bulk::FUN_10971200(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1036e480();
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4)(param_1);
}


// Reference entry 1097e9a0; body size 59 bytes.
#line 1 "ENTRY_1097e9a0"

void FUN_1097e9a0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10ebc1d0());
  *(undefined4 *)(iVar1 + 0xf4) = 2;
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 10988080; body size 42 bytes.
#line 1 "ENTRY_10988080"

void FUN_10988080(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 109887c0; body size 34 bytes.
#line 1 "ENTRY_109887c0"

void FUN_109887c0(void)

{
  char cVar1;
  undefined4 uVar2;
  
  thunk_FUN_10ee48c0();
  cVar1 = (char)(thunk_FUN_10ee7f70());
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(0x80000000);
    thunk_FUN_10ee48c0(0x80000000);
    thunk_FUN_10ee3000(uVar2);
  }
  return;
}


// Reference entry 10989760; body size 60 bytes.
#line 1 "ENTRY_10989760"

void __fastcall FUN_10989760(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 1098e820; body size 39 bytes.
#line 1 "ENTRY_1098e820"

void __stdcall FUN_1098e820(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_8;
  undefined1 local_4;
  
  thunk_FUN_1098def0(&local_8,param_2);
  *param_1 = (undefined4)(local_8);
  *(undefined1 *)(param_1 + 1) = local_4;
  return;
}


// Reference entry 1098eec0; body size 48 bytes.
#line 1 "ENTRY_1098eec0"

undefined4 * __fastcall FUN_1098eec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10990220; body size 36 bytes.
#line 1 "ENTRY_10990220"

void __fastcall FUN_10990220(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    thunk_FUN_1098e120(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x1c);
  }
  return;
}


// Reference entry 109919c0; body size 30 bytes.
#line 1 "ENTRY_109919c0"

int FUN_109919c0(int param_1)

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


// Reference entry 1099c720; body size 42 bytes.
#line 1 "ENTRY_1099c720"

void FUN_1099c720(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 109a0940; body size 56 bytes.
#line 1 "ENTRY_109a0940"

void __stdcall FUN_109a0940(int param_1,int param_2)

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


// Reference entry 109a66c0; body size 31 bytes.
#line 1 "ENTRY_109a66c0"

void __thiscall Recovered_Bulk::FUN_109a66c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  if ((undefined4 *)(param_1 + 0x10c) != (undefined4 *)(param_2)) {
    thunk_FUN_10648010(*param_2,param_2[1],param_2);
  }
  return;
}


// Reference entry 109ccdb0; body size 42 bytes.
#line 1 "ENTRY_109ccdb0"

void __fastcall FUN_109ccdb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10d9e6c0(3);
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 109d9e60; body size 60 bytes.
#line 1 "ENTRY_109d9e60"

void __fastcall FUN_109d9e60(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 109e0650; body size 59 bytes.
#line 1 "ENTRY_109e0650"

void FUN_109e0650(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10ebc1d0());
  *(undefined4 *)(iVar1 + 0xf4) = 1;
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 109e3750; body size 60 bytes.
#line 1 "ENTRY_109e3750"

void __fastcall FUN_109e3750(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 109ec5c0; body size 42 bytes.
#line 1 "ENTRY_109ec5c0"

void FUN_109ec5c0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf35e0(iVar1);
  return;
}


// Reference entry 109edbe0; body size 31 bytes.
#line 1 "ENTRY_109edbe0"

void __fastcall FUN_109edbe0(int param_1)

{
  thunk_FUN_10302280(param_1 + 0xa8,"Stopping Setup Announcements");
  thunk_FUN_106cf140();
  return;
}


// Reference entry 10a08b50; body size 38 bytes.
#line 1 "ENTRY_10a08b50"

undefined4 __thiscall Recovered_Bulk::FUN_10a08b50(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0(&DAT_1187d548,0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10a08b80; body size 38 bytes.
#line 1 "ENTRY_10a08b80"

undefined4 __thiscall Recovered_Bulk::FUN_10a08b80(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124ffa0("Timeout",0);
  thunk_FUN_1124f350(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10a08bb0; body size 37 bytes.
#line 1 "ENTRY_10a08bb0"

int __fastcall FUN_10a08bb0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("RemoteConfigured");
  thunk_FUN_112505b0(iVar1);
  return (int)(param_1);
}


// Reference entry 10a0ca70; body size 36 bytes.
#line 1 "ENTRY_10a0ca70"

void FUN_10a0ca70(void)

{
  undefined1 uVar1;
  int iVar2;
  
  thunk_FUN_10ebc1d0();
  iVar2 = (int)(thunk_FUN_10eb41b0());
  uVar1 = (undefined1)(thunk_FUN_108c41c0());
  *(undefined1 *)(iVar2 + 0xf4) = uVar1;
  return;
}


// Reference entry 10a0caa0; body size 36 bytes.
#line 1 "ENTRY_10a0caa0"

void FUN_10a0caa0(void)

{
  undefined1 uVar1;
  int iVar2;
  
  thunk_FUN_10ebc1d0();
  iVar2 = (int)(thunk_FUN_10eb41b0());
  uVar1 = (undefined1)(thunk_FUN_108eeb60());
  *(undefined1 *)(iVar2 + 0xf4) = uVar1;
  return;
}


// Reference entry 10a129e0; body size 60 bytes.
#line 1 "ENTRY_10a129e0"

int __thiscall Recovered_Bulk::FUN_10a129e0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10a12a30(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10a13420; body size 51 bytes.
#line 1 "ENTRY_10a13420"

undefined4 * __fastcall FUN_10a13420(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x4e8));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10a22230; body size 55 bytes.
#line 1 "ENTRY_10a22230"

void __fastcall FUN_10a22230(undefined4 *param_1)

{
  thunk_FUN_101a2bf0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 10a23870; body size 30 bytes.
#line 1 "ENTRY_10a23870"

void __thiscall Recovered_Bulk::FUN_10a23870(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_104886e0(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 4);
  return;
}


// Reference entry 10a35eb0; body size 54 bytes.
#line 1 "ENTRY_10a35eb0"

int __stdcall FUN_10a35eb0(undefined4 param_1)

{
  int local_c;
  int local_8;
  
  thunk_FUN_10be4f80();
  thunk_FUN_10be2a00(&local_c,param_1);
  thunk_FUN_1036e480();
  return (int)(local_8 - local_c >> 3);
}


// Reference entry 10a41700; body size 55 bytes.
#line 1 "ENTRY_10a41700"

void __fastcall FUN_10a41700(undefined4 *param_1)

{
  thunk_FUN_10247e10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 10a4d9f0; body size 59 bytes.
#line 1 "ENTRY_10a4d9f0"

void __thiscall Recovered_Bulk::FUN_10a4d9f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10a4cd70(puVar1,param_2);
  return;
}


// Reference entry 10a4da40; body size 59 bytes.
#line 1 "ENTRY_10a4da40"

void __thiscall Recovered_Bulk::FUN_10a4da40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10a4cf70(puVar1,param_2);
  return;
}


// Reference entry 10a56020; body size 60 bytes.
#line 1 "ENTRY_10a56020"

void __stdcall FUN_10a56020(int param_1,int param_2)

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


// Reference entry 10a56070; body size 60 bytes.
#line 1 "ENTRY_10a56070"

void __stdcall FUN_10a56070(int param_1,int param_2)

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


// Reference entry 10a560c0; body size 17 bytes.
#line 1 "ENTRY_10a560c0"

bool FUN_10a560c0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a44e4));
  return (bool)(0 < iVar1);
}


// Reference entry 10a642d0; body size 59 bytes.
#line 1 "ENTRY_10a642d0"

void __thiscall Recovered_Bulk::FUN_10a642d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10a4cd70(puVar1,param_2);
  return;
}


// Reference entry 10a64320; body size 59 bytes.
#line 1 "ENTRY_10a64320"

void __thiscall Recovered_Bulk::FUN_10a64320(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10a4cf70(puVar1,param_2);
  return;
}


// Reference entry 10a711a0; body size 17 bytes.
#line 1 "ENTRY_10a711a0"

void FUN_10a711a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(1);
  uVar1 = (undefined4)(0xf);
  thunk_FUN_105bebd0(0xf,1);
  thunk_FUN_10e110d0(uVar1,uVar2);
  return;
}


// Reference entry 10a76ae0; body size 33 bytes.
#line 1 "ENTRY_10a76ae0"

void __fastcall FUN_10a76ae0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    thunk_FUN_10a76ed0();
  }
  return;
}


// Reference entry 10a77900; body size 35 bytes.
#line 1 "ENTRY_10a77900"

void __stdcall FUN_10a77900(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    thunk_FUN_10a76ed0();
  }
  return;
}


// Reference entry 10a779a0; body size 59 bytes.
#line 1 "ENTRY_10a779a0"

void __thiscall Recovered_Bulk::FUN_10a779a0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10246290(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  iVar1 = (int)(*param_1);
  *param_1 = (int)(*param_2);
  *param_2 = (int)(iVar1);
  iVar1 = (int)(param_1[1]);
  param_1[1] = (int)(param_2[1]);
  param_2[1] = (int)(iVar1);
  return;
}


// Reference entry 10a783d0; body size 47 bytes.
#line 1 "ENTRY_10a783d0"

void __fastcall FUN_10a783d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  iVar2 = (int)(*(int *)(param_1 + 8));
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_10a76ed0();
      iVar2 = (int)(iVar2 + 0x18);
    } while (iVar2 != iVar1);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    return;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}


// Reference entry 10a78410; body size 46 bytes.
#line 1 "ENTRY_10a78410"

void __fastcall FUN_10a78410(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_10a76ed0();
      iVar2 = (int)(iVar2 + 0x18);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 10a787e0; body size 59 bytes.
#line 1 "ENTRY_10a787e0"

void __stdcall FUN_10a787e0(int param_1,int param_2)

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


// Reference entry 10a7d640; body size 57 bytes.
#line 1 "ENTRY_10a7d640"

undefined4 * __thiscall Recovered_Bulk::FUN_10a7d640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBasicWizard);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCBasicWizard);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCBasicWizard);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCBasicWizard);
  return (undefined4 *)(param_1);
}


// Reference entry 10a92a00; body size 55 bytes.
#line 1 "ENTRY_10a92a00"

void __fastcall FUN_10a92a00(undefined4 *param_1)

{
  thunk_FUN_105bb550();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 10a92b90; body size 50 bytes.
#line 1 "ENTRY_10a92b90"

void __fastcall FUN_10a92b90(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x11c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  thunk_FUN_106da680();
  return;
}


// Reference entry 10ab26b0; body size 17 bytes.
#line 1 "ENTRY_10ab26b0"

void FUN_10ab26b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(1);
  uVar1 = (undefined4)(0xf);
  thunk_FUN_105bebd0(0xf,1);
  thunk_FUN_10e110d0(uVar1,uVar2);
  return;
}


// Reference entry 10af55e0; body size 48 bytes.
#line 1 "ENTRY_10af55e0"

undefined4 * __fastcall FUN_10af55e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10af5620; body size 48 bytes.
#line 1 "ENTRY_10af5620"

undefined4 * __fastcall FUN_10af5620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10af69b0; body size 36 bytes.
#line 1 "ENTRY_10af69b0"

void __fastcall FUN_10af69b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    thunk_FUN_10af43b0(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x18);
  }
  return;
}


// Reference entry 10af8530; body size 56 bytes.
#line 1 "ENTRY_10af8530"

int __stdcall FUN_10af8530(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10af47d0(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_1)) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10af8580; body size 56 bytes.
#line 1 "ENTRY_10af8580"

int __stdcall FUN_10af8580(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10af47d0(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_1)) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10b03530; body size 57 bytes.
#line 1 "ENTRY_10b03530"

void __stdcall FUN_10b03530(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10b03530(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10b04120; body size 48 bytes.
#line 1 "ENTRY_10b04120"

undefined4 * __fastcall FUN_10b04120(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10b06540; body size 55 bytes.
#line 1 "ENTRY_10b06540"

undefined4 FUN_10b06540(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_10b03580(local_c,param_1));
  if ((*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= *param_1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10b06a90; body size 59 bytes.
#line 1 "ENTRY_10b06a90"

void __stdcall FUN_10b06a90(int param_1,int param_2)

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


// Reference entry 10b08c40; body size 56 bytes.
#line 1 "ENTRY_10b08c40"

void FUN_10b08c40(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  iVar1 = (int)(thunk_FUN_10ebc1d0());
  *(undefined1 *)(iVar1 + 0x112) = 1;
  return;
}


// Reference entry 10b09740; body size 36 bytes.
#line 1 "ENTRY_10b09740"

void FUN_10b09740(void)

{
  undefined1 uVar1;
  int iVar2;
  
  thunk_FUN_10ebc1d0();
  iVar2 = (int)(thunk_FUN_10eb41b0());
  uVar1 = (undefined1)(thunk_FUN_10939420());
  *(undefined1 *)(iVar2 + 0xf4) = uVar1;
  return;
}


// Reference entry 10b0d770; body size 31 bytes.
#line 1 "ENTRY_10b0d770"

void __fastcall FUN_10b0d770(undefined4 *param_1)

{
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  return;
}


// Reference entry 10b0da20; body size 55 bytes.
#line 1 "ENTRY_10b0da20"

void __fastcall FUN_10b0da20(undefined4 *param_1)

{
  thunk_FUN_105bb550();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  return;
}


// Reference entry 10b0e6a0; body size 54 bytes.
#line 1 "ENTRY_10b0e6a0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b0e6a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b0f310; body size 30 bytes.
#line 1 "ENTRY_10b0f310"

int FUN_10b0f310(int param_1)

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


// Reference entry 10b10630; body size 59 bytes.
#line 1 "ENTRY_10b10630"

void __thiscall Recovered_Bulk::FUN_10b10630(short param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  *(short *)(iVar1 + 0x14e) = param_2;
  *(bool *)(param_1 + 4) = param_2 == 0;
  thunk_FUN_10ebb8e0("downloadCompleted",0);
  return;
}


// Reference entry 10b1a400; body size 63 bytes.
#line 1 "ENTRY_10b1a400"

void FUN_10b1a400(void)

{
  int iVar1;
  
  thunk_FUN_10ebc1d0();
  iVar1 = (int)(thunk_FUN_1083d0b0());
  if ((iVar1 != 0) && (iVar1 != 0x3ef)) {
    iVar1 = (int)(thunk_FUN_10eb41b0());
    *(undefined1 *)(iVar1 + 0x14c) = 0;
    return;
  }
  iVar1 = (int)(thunk_FUN_10eb41b0());
  *(undefined1 *)(iVar1 + 0x14c) = 1;
  return;
}


// Reference entry 10b22ff0; body size 38 bytes.
#line 1 "ENTRY_10b22ff0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b22ff0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10b46150; body size 42 bytes.
#line 1 "ENTRY_10b46150"

void FUN_10b46150(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10eb41b0());
  if (iVar1 == 0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(iVar1 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar1);
  thunk_FUN_10cf3630(iVar1);
  return;
}


// Reference entry 10b48570; body size 38 bytes.
#line 1 "ENTRY_10b48570"

undefined4 __thiscall Recovered_Bulk::FUN_10b48570(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Options",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10b589f0; body size 57 bytes.
#line 1 "ENTRY_10b589f0"

undefined4 * __thiscall Recovered_Bulk::FUN_10b589f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_106da030(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTransparentWizard);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCTransparentWizard);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCTransparentWizard);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCTransparentWizard);
  return (undefined4 *)(param_1);
}


// Reference entry 10b5b460; body size 48 bytes.
#line 1 "ENTRY_10b5b460"

undefined4 * __fastcall FUN_10b5b460(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b6bb00; body size 33 bytes.
#line 1 "ENTRY_10b6bb00"

void FUN_10b6bb00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(1);
  uVar1 = (undefined4)(0xf);
  thunk_FUN_105bebd0(0xf,1);
  thunk_FUN_10e110d0(uVar1,uVar2);
  uVar2 = (undefined4)(2);
  uVar1 = (undefined4)(0x12);
  thunk_FUN_105bebd0(0x12,2);
  thunk_FUN_10e110d0(uVar1,uVar2);
  return;
}


// Reference entry 10b6d6c0; body size 60 bytes.
#line 1 "ENTRY_10b6d6c0"

void __fastcall FUN_10b6d6c0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10b6d720; body size 60 bytes.
#line 1 "ENTRY_10b6d720"

void __fastcall FUN_10b6d720(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10b6f7e0; body size 18 bytes.
#line 1 "ENTRY_10b6f7e0"

undefined4 __fastcall FUN_10b6f7e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = (undefined4)(thunk_FUN_111382a0(0));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10b6ff10; body size 49 bytes.
#line 1 "ENTRY_10b6ff10"

SCStr * __thiscall Recovered_Bulk::FUN_10b6ff10(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 8) != 0) {
    ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 8) + 0x20));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10b71b80; body size 29 bytes.
#line 1 "ENTRY_10b71b80"

bool __fastcall FUN_10b71b80(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = (uint)(thunk_FUN_11138530());
    return (bool)((uVar1 & 4) != 0);
  }
  return (bool)(false);
}


// Reference entry 10b71c20; body size 33 bytes.
#line 1 "ENTRY_10b71c20"

undefined1 __fastcall FUN_10b71c20(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (char)(thunk_FUN_10b715a0());
  if (cVar1 != '\0') {
    return (undefined1)(1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = (undefined1)(thunk_FUN_11138a30());
    return (undefined1)(uVar2);
  }
  return (undefined1)(0);
}


// Reference entry 10b766b0; body size 38 bytes.
#line 1 "ENTRY_10b766b0"

void __fastcall FUN_10b766b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_102ec850();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x14);
  }
  return;
}


// Reference entry 10b76e80; body size 27 bytes.
#line 1 "ENTRY_10b76e80"

int __stdcall FUN_10b76e80(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10b75c90(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10b78e90; body size 57 bytes.
#line 1 "ENTRY_10b78e90"

SCStr * FUN_10b78e90(SCStr *param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("com.sonos.airplay"));
  if (bVar1) {
    ((SCStr *)(param_1))->int_allocRep("com.sonos.dcv2.airplay");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->op_ctor(param_2);
  return (SCStr *)(param_1);
}


// Reference entry 10b79ea0; body size 24 bytes.
#line 1 "ENTRY_10b79ea0"

int __fastcall FUN_10b79ea0(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x38));
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if ((((char *)(pcVar1) != (char *)0x0) && (*pcVar1 != '\0')) && (*(int *)(param_1 + 0x40) != 0)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10b7b410; body size 23 bytes.
#line 1 "ENTRY_10b7b410"

void __stdcall FUN_10b7b410(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10b7b430; body size 51 bytes.
#line 1 "ENTRY_10b7b430"

undefined4 * __thiscall Recovered_Bulk::FUN_10b7b430(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjMSDiscoveryInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjMSDiscoveryInternalListener);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10b7b650; body size 56 bytes.
#line 1 "ENTRY_10b7b650"

void __fastcall FUN_10b7b650(int param_1)

{
  if ((*(char *)(param_1 + 0x14) == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_112af4e0("SCSwfObjMSDiscoveryListener",2,"Subscribe to SwfObjMSDiscovery events");
      thunk_FUN_110c1190(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// Reference entry 10b7b6a0; body size 56 bytes.
#line 1 "ENTRY_10b7b6a0"

void __fastcall FUN_10b7b6a0(int param_1)

{
  if ((*(char *)(param_1 + 0x14) != '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_112af4e0("SCSwfObjMSDiscoveryListener",2,"Unsubscribe from SwfObjMSDiscovery events"
                        );
      thunk_FUN_110c4430(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


// Reference entry 10b7d1c0; body size 60 bytes.
#line 1 "ENTRY_10b7d1c0"

void __fastcall FUN_10b7d1c0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10b7d220; body size 60 bytes.
#line 1 "ENTRY_10b7d220"

void __fastcall FUN_10b7d220(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10b7d280; body size 60 bytes.
#line 1 "ENTRY_10b7d280"

void __fastcall FUN_10b7d280(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10b7e4a0; body size 48 bytes.
#line 1 "ENTRY_10b7e4a0"

int __fastcall FUN_10b7e4a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x18))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10b7e4e0; body size 48 bytes.
#line 1 "ENTRY_10b7e4e0"

int __fastcall FUN_10b7e4e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x20))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10b7e520; body size 48 bytes.
#line 1 "ENTRY_10b7e520"

int __fastcall FUN_10b7e520(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x18))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10b7e7e0; body size 30 bytes.
#line 1 "ENTRY_10b7e7e0"

undefined4 __thiscall Recovered_Bulk::FUN_10b7e7e0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x20))());
  (**(code **)(*piVar1 + 0x88))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10b81cb0; body size 51 bytes.
#line 1 "ENTRY_10b81cb0"

SCStr * __thiscall Recovered_Bulk::FUN_10b81cb0(SCStr *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    ((SCStr *)(param_2))->int_allocRep((char *)0x0);
    return (SCStr *)(param_2);
  }
  uVar1 = (undefined4)(thunk_FUN_110da760());
  thunk_FUN_103a3e50(param_2,uVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10b81cf0; body size 32 bytes.
#line 1 "ENTRY_10b81cf0"

SCStr * __stdcall FUN_10b81cf0(SCStr *param_1)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_110da8b0());
  pcVar2 = (char *)((char *)(**(code **)(*piVar1 + 0x3c))());
  ((SCStr *)(param_1))->int_allocRep(pcVar2);
  return (SCStr *)(param_1);
}


// Reference entry 10b81d20; body size 32 bytes.
#line 1 "ENTRY_10b81d20"

SCStr * __stdcall FUN_10b81d20(SCStr *param_1)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_110da8b0());
  pcVar2 = (char *)((char *)(**(code **)(*piVar1 + 0x30))());
  ((SCStr *)(param_1))->int_allocRep(pcVar2);
  return (SCStr *)(param_1);
}


// Reference entry 10b82b50; body size 43 bytes.
#line 1 "ENTRY_10b82b50"

uint __fastcall FUN_10b82b50(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x54))());
  if (uVar1 == 1) {
    iVar2 = (int)((**(code **)(*param_1 + 0x5c))());
    uVar1 = (uint)(*(uint *)(iVar2 + 4) & 0xffffff00);
    if (uVar1 == 0x12f00) {
      return (uint)(0x12f01);
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10b82bb0; body size 58 bytes.
#line 1 "ENTRY_10b82bb0"

uint FUN_10b82bb0(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)((int *)thunk_FUN_110da8b0());
  uVar3 = (uint)((**(code **)(*piVar2 + 0x54))());
  if (uVar3 == 1) {
    uVar3 = (uint)((**(code **)(*piVar2 + 0x5c))());
    uVar1 = (uint)(*(uint *)(uVar3 + 4));
    if (((uVar1 != 0) && (uVar3 = uVar1 & 0xffffff81, (char)uVar3 != -0x80)) && ((uVar1 & 1) == 0))
    {
      return (uint)(((uint)((int3)(uVar3 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(uVar3 & 0xffffff00);
}


// Reference entry 10b82c00; body size 48 bytes.
#line 1 "ENTRY_10b82c00"

uint __fastcall FUN_10b82c00(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((**(code **)(*param_1 + 0x54))());
  if (uVar2 == 1) {
    uVar2 = (uint)((**(code **)(*param_1 + 0x5c))());
    uVar1 = (uint)(*(uint *)(uVar2 + 4));
    if (((uVar1 != 0) && (uVar2 = uVar1 & 0xffffff81, (char)uVar2 != -0x80)) && ((uVar1 & 1) == 0))
    {
      return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 10b87a00; body size 20 bytes.
#line 1 "ENTRY_10b87a00"

void __fastcall FUN_10b87a00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b87a20; body size 20 bytes.
#line 1 "ENTRY_10b87a20"

void __fastcall FUN_10b87a20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b87a40; body size 20 bytes.
#line 1 "ENTRY_10b87a40"

void __fastcall FUN_10b87a40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b87a60; body size 20 bytes.
#line 1 "ENTRY_10b87a60"

void __fastcall FUN_10b87a60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
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
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
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
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
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
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
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
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


// Reference entry 10b88a20; body size 46 bytes.
#line 1 "ENTRY_10b88a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10b88a20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
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
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
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
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
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
  if ((undefined4 *)(undefined4 *)(param_1[1]) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
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
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0xc)) {
    *puVar1 = (undefined4)(param_2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    return;
  }
  thunk_FUN_10b8e250(puVar1,&param_2);
  return;
}


// Reference entry 10b8fe40; body size 39 bytes.
#line 1 "ENTRY_10b8fe40"

undefined4 * __fastcall FUN_10b8fe40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
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


  if ((int *)*(int *)(param_1) != (int *)0x0) {
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


  if ((int *)*(int *)(param_1) != (int *)0x0) {
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


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
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


// Reference entry 10b937b0; body size 35 bytes.
#line 1 "ENTRY_10b937b0"

void __thiscall Recovered_Bulk::FUN_10b937b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if ((int *)(piVar1) != (int *)0x0) {
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


// Reference entry 10b97330; body size 39 bytes.
#line 1 "ENTRY_10b97330"

undefined4 * __fastcall FUN_10b97330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97360; body size 39 bytes.
#line 1 "ENTRY_10b97360"

undefined4 * __fastcall FUN_10b97360(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b988b0; body size 60 bytes.
#line 1 "ENTRY_10b988b0"

void __fastcall FUN_10b988b0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10b98950; body size 33 bytes.
#line 1 "ENTRY_10b98950"

void __fastcall FUN_10b98950(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
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


// Reference entry 10b98c40; body size 33 bytes.
#line 1 "ENTRY_10b98c40"

void __fastcall FUN_10b98c40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
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


// Reference entry 10b99720; body size 37 bytes.
#line 1 "ENTRY_10b99720"

int * __fastcall FUN_10b99720(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
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


// Reference entry 10b9b3a0; body size 33 bytes.
#line 1 "ENTRY_10b9b3a0"

void __fastcall FUN_10b9b3a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
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

int * __stdcall FUN_10b9c740(int *param_1, unsigned int recovered_unused_stack_0)

{
 try {
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10b95f10(local_8,&stack0x00000008));
  piVar1 = (int *)(*(int **)(*piVar1 + 0xc));
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
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


// Reference entry 10ba5250; body size 48 bytes.
#line 1 "ENTRY_10ba5250"

undefined4 * __fastcall FUN_10ba5250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5290; body size 48 bytes.
#line 1 "ENTRY_10ba5290"

undefined4 * __fastcall FUN_10ba5290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
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


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10ba6c70; body size 33 bytes.
#line 1 "ENTRY_10ba6c70"

void __fastcall FUN_10ba6c70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
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


// Reference entry 10ba6ec0; body size 33 bytes.
#line 1 "ENTRY_10ba6ec0"

void __fastcall FUN_10ba6ec0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ba8180; body size 60 bytes.
#line 1 "ENTRY_10ba8180"

int __thiscall Recovered_Bulk::FUN_10ba8180(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
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


// Reference entry 10ba8790; body size 58 bytes.
#line 1 "ENTRY_10ba8790"

void __thiscall Recovered_Bulk::FUN_10ba8790(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
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

void __fastcall FUN_10ba8810(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10ba8840; body size 39 bytes.
#line 1 "ENTRY_10ba8840"

void __thiscall Recovered_Bulk::FUN_10ba8840(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
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


// Reference entry 10baa290; body size 33 bytes.
#line 1 "ENTRY_10baa290"

void __fastcall FUN_10baa290(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
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
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
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
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
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
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
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
    if ((int *)(piVar1) != (int *)0x0) {
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
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


// Reference entry 10bb5310; body size 48 bytes.
#line 1 "ENTRY_10bb5310"

undefined4 * __fastcall FUN_10bb5310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
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
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
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


// Reference entry 10bb7e90; body size 19 bytes.
#line 1 "ENTRY_10bb7e90"

undefined4 __stdcall FUN_10bb7e90(undefined4 param_1)

{
  createPropertyBag();
  return (undefined4)(param_1);
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


// Reference entry 10bbbf20; body size 48 bytes.
#line 1 "ENTRY_10bbbf20"

int __fastcall FUN_10bbbf20(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x44))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
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


// Reference entry 10bc0c20; body size 22 bytes.
#line 1 "ENTRY_10bc0c20"

void __stdcall FUN_10bc0c20(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10d9e6c0(3);
  return;
}


// Reference entry 10bc0c40; body size 38 bytes.
#line 1 "ENTRY_10bc0c40"

void __fastcall FUN_10bc0c40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  thunk_FUN_10d9e6c0(2);
  return;
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


// Reference entry 10bc6860; body size 33 bytes.
#line 1 "ENTRY_10bc6860"

void __fastcall FUN_10bc6860(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10bc6890; body size 33 bytes.
#line 1 "ENTRY_10bc6890"

void __fastcall FUN_10bc6890(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10bc68f0; body size 33 bytes.
#line 1 "ENTRY_10bc68f0"

void __fastcall FUN_10bc68f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10bc6920; body size 33 bytes.
#line 1 "ENTRY_10bc6920"

void __fastcall FUN_10bc6920(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10bc6fe0; body size 60 bytes.
#line 1 "ENTRY_10bc6fe0"

int __thiscall Recovered_Bulk::FUN_10bc6fe0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
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


// Reference entry 10bc7390; body size 58 bytes.
#line 1 "ENTRY_10bc7390"

void __thiscall Recovered_Bulk::FUN_10bc7390(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 10bc7450; body size 39 bytes.
#line 1 "ENTRY_10bc7450"

void __thiscall Recovered_Bulk::FUN_10bc7450(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
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


// Reference entry 10bc7650; body size 33 bytes.
#line 1 "ENTRY_10bc7650"

void __fastcall FUN_10bc7650(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10bc7680; body size 33 bytes.
#line 1 "ENTRY_10bc7680"

void __fastcall FUN_10bc7680(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
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
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
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
  if ((int)(param_2) == *(int *)(param_1 + 0x24)) {
    thunk_FUN_10bc8860();
    return;
  }
  if ((int)(param_2) == *(int *)(param_1 + 0x20)) {
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


// Reference entry 10bced50; body size 33 bytes.
#line 1 "ENTRY_10bced50"

void __thiscall Recovered_Bulk::FUN_10bced50(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10bcf100(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
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


// Reference entry 10bd27a0; body size 59 bytes.
#line 1 "ENTRY_10bd27a0"

void __thiscall Recovered_Bulk::FUN_10bd27a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10bce9a0(puVar1,param_2);
  return;
}


// Reference entry 10bd33c0; body size 48 bytes.
#line 1 "ENTRY_10bd33c0"

undefined4 * __fastcall FUN_10bd33c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3400; body size 48 bytes.
#line 1 "ENTRY_10bd3400"

undefined4 * __fastcall FUN_10bd3400(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10bd3440; body size 48 bytes.
#line 1 "ENTRY_10bd3440"

undefined4 * __fastcall FUN_10bd3440(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10bd3480; body size 48 bytes.
#line 1 "ENTRY_10bd3480"

undefined4 * __fastcall FUN_10bd3480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10bd3520; body size 48 bytes.
#line 1 "ENTRY_10bd3520"

undefined4 * __fastcall FUN_10bd3520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3560; body size 48 bytes.
#line 1 "ENTRY_10bd3560"

undefined4 * __fastcall FUN_10bd3560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd35a0; body size 48 bytes.
#line 1 "ENTRY_10bd35a0"

undefined4 * __fastcall FUN_10bd35a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd35e0; body size 48 bytes.
#line 1 "ENTRY_10bd35e0"

undefined4 * __fastcall FUN_10bd35e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd3620; body size 48 bytes.
#line 1 "ENTRY_10bd3620"

undefined4 * __fastcall FUN_10bd3620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10bd6470; body size 28 bytes.
#line 1 "ENTRY_10bd6470"

void __fastcall FUN_10bd6470(int *param_1)

{
  thunk_FUN_10bcf100(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
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


// Reference entry 10bd6b90; body size 28 bytes.
#line 1 "ENTRY_10bd6b90"

void __fastcall FUN_10bd6b90(int *param_1)

{
  thunk_FUN_10bcf100(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x30);
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
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
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
  if ((int *)(piVar2) == (int *)param_1[1]) {
    param_1[1] = (int)((int)piVar2);
    return;
  }
  do {
    puVar1 = (undefined4 *)((undefined4 *)*piVar2);
    if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      thunk_FUN_10f7b950();
      (**(code **)*puVar1)(1);
    }
    piVar2 = (int *)(piVar2 + 1);
  } while ((int *)(piVar2) != (int *)param_1[1]);
  param_1[1] = (int)(*param_1);
  return;
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


// Reference entry 10bee690; body size 20 bytes.
#line 1 "ENTRY_10bee690"

void __fastcall FUN_10bee690(int param_1)

{
  undefined4 uStack00000004;
  
  uStack00000004 = (undefined4)(0);
                    
                    
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))();
  return;
}


// Reference entry 10bee710; body size 36 bytes.
#line 1 "ENTRY_10bee710"

void __fastcall FUN_10bee710(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

void __fastcall FUN_10bee740(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

void __fastcall FUN_10bee770(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


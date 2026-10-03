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
extern int FUN_100517a8(...);
extern int FUN_10065348(...);
extern int FUN_1006aac8(...);
extern int FUN_10070892(...);
extern int FUN_10cbcff0(...);
extern int FUN_10cf1ee0(...);
extern int FUN_10cf2340(...);
extern int FUN_10dc6500(...);
extern int FUN_10e06bc0(...);
extern int FUN_10ea7290(...);
extern int FUN_10f4b5e0(...);
extern int FUN_111138d0(...);
extern int FUN_1111b230(...);
extern int FUN_1111c680(...);
extern int FUN_11155590(...);
extern int FUN_11155810(...);
extern int FUN_111559c0(...);
extern int FUN_11155ba0(...);
extern int FUN_11155d80(...);
extern int FUN_11158050(...);
extern int FUN_11158070(...);
extern int FUN_111580a0(...);
extern int FUN_111580d0(...);
extern int FUN_11158120(...);
extern int FUN_11158140(...);
extern int FUN_111581a0(...);
extern int FUN_11158240(...);
extern int FUN_11158270(...);
extern int FUN_111582a0(...);
extern int FUN_111582d0(...);
extern int FUN_11158300(...);
extern int FUN_11158330(...);
extern int FUN_11158360(...);
extern int FUN_11158390(...);
extern int FUN_111583c0(...);
extern int FUN_11158420(...);
extern __declspec(dllimport) int _Xbad_alloc(...);
extern __declspec(dllimport) int _Xbad_function_call(...);
extern __declspec(dllimport) int _Xout_of_range(...);
extern __declspec(dllimport) int __RTDynamicCast(...);
extern __declspec(dllimport) int __stdio_common_vsprintf(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern int append(...);
extern int beginsWith(...);
extern int cancelTimeout(...);
extern int createPropertyBag(...);
extern int createSCStringArray(...);
extern int events(...);
extern int getSingleton(...);
extern int hash(...);
extern int int_allocRep(...);
extern int int_release(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strrchr(...);
extern int thunk_FUN_1012cdb0(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101a33f0(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101e7e50(...);
extern int thunk_FUN_101f4930(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_10208940(...);
extern int thunk_FUN_1020a5b0(...);
extern int thunk_FUN_1020fe60(...);
extern int thunk_FUN_102105a0(...);
extern int thunk_FUN_10210700(...);
extern int thunk_FUN_10211340(...);
extern int thunk_FUN_1021b750(...);
extern int thunk_FUN_1021d0d0(...);
extern int thunk_FUN_10221640(...);
extern int thunk_FUN_10288040(...);
extern int thunk_FUN_1028a000(...);
extern int thunk_FUN_1028c3a0(...);
extern int thunk_FUN_1029e960(...);
extern int thunk_FUN_102a0500(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_102f5770(...);
extern int thunk_FUN_103021f0(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10302310(...);
extern int thunk_FUN_1033b650(...);
extern int thunk_FUN_1033c720(...);
extern int thunk_FUN_1034d200(...);
extern int thunk_FUN_1034dc70(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_103eb560(...);
extern int thunk_FUN_103eb620(...);
extern int thunk_FUN_104d8570(...);
extern int thunk_FUN_104d8ab0(...);
extern int thunk_FUN_104d8ba0(...);
extern int thunk_FUN_104d98f0(...);
extern int thunk_FUN_104d9cc0(...);
extern int thunk_FUN_104da1b0(...);
extern int thunk_FUN_104dad90(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_1050e5b0(...);
extern int thunk_FUN_10545740(...);
extern int thunk_FUN_10595470(...);
extern int thunk_FUN_10595510(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a26b0(...);
extern int thunk_FUN_105a2cd0(...);
extern int thunk_FUN_105a2e60(...);
extern int thunk_FUN_105a3010(...);
extern int thunk_FUN_105a5630(...);
extern int thunk_FUN_105a8c20(...);
extern int thunk_FUN_105aa0f0(...);
extern int thunk_FUN_105aa9d0(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_105ad940(...);
extern int thunk_FUN_105ae230(...);
extern int thunk_FUN_105ae450(...);
extern int thunk_FUN_105ae560(...);
extern int thunk_FUN_105ae900(...);
extern int thunk_FUN_105aeb50(...);
extern int thunk_FUN_105aef50(...);
extern int thunk_FUN_105aefc0(...);
extern int thunk_FUN_105af180(...);
extern int thunk_FUN_105af1c0(...);
extern int thunk_FUN_105af2b0(...);
extern int thunk_FUN_105b02b0(...);
extern int thunk_FUN_105c0190(...);
extern int thunk_FUN_105d3a20(...);
extern int thunk_FUN_105f6050(...);
extern int thunk_FUN_10604c90(...);
extern int thunk_FUN_10604cd0(...);
extern int thunk_FUN_1065a700(...);
extern int thunk_FUN_106964d0(...);
extern int thunk_FUN_106c9af0(...);
extern int thunk_FUN_106c9eb0(...);
extern int thunk_FUN_106cf0e0(...);
extern int thunk_FUN_106d8310(...);
extern int thunk_FUN_106d8350(...);
extern int thunk_FUN_106d83f0(...);
extern int thunk_FUN_106dc520(...);
extern int thunk_FUN_106dc540(...);
extern int thunk_FUN_106dc570(...);
extern int thunk_FUN_106dc650(...);
extern int thunk_FUN_106dc6c0(...);
extern int thunk_FUN_106dfa00(...);
extern int thunk_FUN_10785c60(...);
extern int thunk_FUN_10799310(...);
extern int thunk_FUN_107cccd0(...);
extern int thunk_FUN_10828990(...);
extern int thunk_FUN_1086f290(...);
extern int thunk_FUN_108754f0(...);
extern int thunk_FUN_10b034d0(...);
extern int thunk_FUN_10b93810(...);
extern int thunk_FUN_10bb46d0(...);
extern int thunk_FUN_10be2e40(...);
extern int thunk_FUN_10be4f80(...);
extern int thunk_FUN_10be6f80(...);
extern int thunk_FUN_10bef940(...);
extern int thunk_FUN_10bf3bc0(...);
extern int thunk_FUN_10bf3c60(...);
extern int thunk_FUN_10bf3f30(...);
extern int thunk_FUN_10bf4300(...);
extern int thunk_FUN_10bf5990(...);
extern int thunk_FUN_10bf8040(...);
extern int thunk_FUN_10bfa620(...);
extern int thunk_FUN_10bfb550(...);
extern int thunk_FUN_10bfb670(...);
extern int thunk_FUN_10bfebd0(...);
extern int thunk_FUN_10c11c30(...);
extern int thunk_FUN_10c13d10(...);
extern int thunk_FUN_10c21f70(...);
extern int thunk_FUN_10c220f0(...);
extern int thunk_FUN_10c22290(...);
extern int thunk_FUN_10c24160(...);
extern int thunk_FUN_10c31e60(...);
extern int thunk_FUN_10c322c0(...);
extern int thunk_FUN_10c34d70(...);
extern int thunk_FUN_10c3b550(...);
extern int thunk_FUN_10c3d380(...);
extern int thunk_FUN_10c3d700(...);
extern int thunk_FUN_10c3d800(...);
extern int thunk_FUN_10c3dd10(...);
extern int thunk_FUN_10c46460(...);
extern int thunk_FUN_10c47270(...);
extern int thunk_FUN_10c5e210(...);
extern int thunk_FUN_10c5e5a0(...);
extern int thunk_FUN_10c62c00(...);
extern int thunk_FUN_10c69cb0(...);
extern int thunk_FUN_10c6c6c0(...);
extern int thunk_FUN_10c6cda0(...);
extern int thunk_FUN_10c7a380(...);
extern int thunk_FUN_10c7a9d0(...);
extern int thunk_FUN_10c7bc70(...);
extern int thunk_FUN_10c7cce0(...);
extern int thunk_FUN_10c7d430(...);
extern int thunk_FUN_10c7ddf0(...);
extern int thunk_FUN_10c83fc0(...);
extern int thunk_FUN_10c84db0(...);
extern int thunk_FUN_10c85210(...);
extern int thunk_FUN_10c85290(...);
extern int thunk_FUN_10c872c0(...);
extern int thunk_FUN_10c87570(...);
extern int thunk_FUN_10c8edf0(...);
extern int thunk_FUN_10c8f700(...);
extern int thunk_FUN_10c96760(...);
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10c9b9b0(...);
extern int thunk_FUN_10ca43c0(...);
extern int thunk_FUN_10ca7a80(...);
extern int thunk_FUN_10ca8700(...);
extern int thunk_FUN_10cb1110(...);
extern int thunk_FUN_10cb8b80(...);
extern int thunk_FUN_10cd9930(...);
extern int thunk_FUN_10ce00f0(...);
extern int thunk_FUN_10ce04e0(...);
extern int thunk_FUN_10ce2c30(...);
extern int thunk_FUN_10ce2d60(...);
extern int thunk_FUN_10ce3510(...);
extern int thunk_FUN_10ce5d10(...);
extern int thunk_FUN_10ce5f30(...);
extern int thunk_FUN_10cede00(...);
extern int thunk_FUN_10cefa80(...);
extern int thunk_FUN_10cefc20(...);
extern int thunk_FUN_10cf3780(...);
extern int thunk_FUN_10cf3d20(...);
extern int thunk_FUN_10cf3e20(...);
extern int thunk_FUN_10cf4ae0(...);
extern int thunk_FUN_10cf4bb0(...);
extern int thunk_FUN_10cf7dd0(...);
extern int thunk_FUN_10d142b0(...);
extern int thunk_FUN_10d19820(...);
extern int thunk_FUN_10d1cf80(...);
extern int thunk_FUN_10d24420(...);
extern int thunk_FUN_10d244b0(...);
extern int thunk_FUN_10d34dd0(...);
extern int thunk_FUN_10d34fd0(...);
extern int thunk_FUN_10d352a0(...);
extern int thunk_FUN_10d38af0(...);
extern int thunk_FUN_10d40300(...);
extern int thunk_FUN_10d4d500(...);
extern int thunk_FUN_10d4d580(...);
extern int thunk_FUN_10d50930(...);
extern int thunk_FUN_10d53f30(...);
extern int thunk_FUN_10d55d20(...);
extern int thunk_FUN_10d5a520(...);
extern int thunk_FUN_10d5a820(...);
extern int thunk_FUN_10d5e1e0(...);
extern int thunk_FUN_10d5e270(...);
extern int thunk_FUN_10d5f7c0(...);
extern int thunk_FUN_10d62720(...);
extern int thunk_FUN_10d685f0(...);
extern int thunk_FUN_10d798f0(...);
extern int thunk_FUN_10d9efd0(...);
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
extern int thunk_FUN_10da1ea0(...);
extern int thunk_FUN_10db8010(...);
extern int thunk_FUN_10dcfdb0(...);
extern int thunk_FUN_10dd0610(...);
extern int thunk_FUN_10dd0b60(...);
extern int thunk_FUN_10dd1440(...);
extern int thunk_FUN_10dd4b80(...);
extern int thunk_FUN_10dd5d50(...);
extern int thunk_FUN_10dd66e0(...);
extern int thunk_FUN_10dd6740(...);
extern int thunk_FUN_10dd6820(...);
extern int thunk_FUN_10dd6880(...);
extern int thunk_FUN_10de7a90(...);
extern int thunk_FUN_10de84c0(...);
extern int thunk_FUN_10dec1c0(...);
extern int thunk_FUN_10dec580(...);
extern int thunk_FUN_10dec7c0(...);
extern int thunk_FUN_10deea50(...);
extern int thunk_FUN_10deeca0(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def4a0(...);
extern int thunk_FUN_10def6b0(...);
extern int thunk_FUN_10defa10(...);
extern int thunk_FUN_10df0720(...);
extern int thunk_FUN_10df0ea0(...);
extern int thunk_FUN_10df1180(...);
extern int thunk_FUN_10df1530(...);
extern int thunk_FUN_10df15d0(...);
extern int thunk_FUN_10df2460(...);
extern int thunk_FUN_10df2e20(...);
extern int thunk_FUN_10df2e40(...);
extern int thunk_FUN_10df2ea0(...);
extern int thunk_FUN_10df3040(...);
extern int thunk_FUN_10df3190(...);
extern int thunk_FUN_10df31d0(...);
extern int thunk_FUN_10df3a40(...);
extern int thunk_FUN_10df3e90(...);
extern int thunk_FUN_10df3ed0(...);
extern int thunk_FUN_10df3fd0(...);
extern int thunk_FUN_10dfd3a0(...);
extern int thunk_FUN_10e00af0(...);
extern int thunk_FUN_10e01790(...);
extern int thunk_FUN_10e0b690(...);
extern int thunk_FUN_10e0b6f0(...);
extern int thunk_FUN_10e0d700(...);
extern int thunk_FUN_10e0f0d0(...);
extern int thunk_FUN_10e0f500(...);
extern int thunk_FUN_10e0f790(...);
extern int thunk_FUN_10e10dc0(...);
extern int thunk_FUN_10e19870(...);
extern int thunk_FUN_10e1dfc0(...);
extern int thunk_FUN_10e23ff0(...);
extern int thunk_FUN_10e3cae0(...);
extern int thunk_FUN_10e44d70(...);
extern int thunk_FUN_10e46300(...);
extern int thunk_FUN_10e4a9e0(...);
extern int thunk_FUN_10e4ddb0(...);
extern int thunk_FUN_10e55410(...);
extern int thunk_FUN_10e5acf0(...);
extern int thunk_FUN_10e5ca20(...);
extern int thunk_FUN_10e697b0(...);
extern int thunk_FUN_10e79390(...);
extern int thunk_FUN_10e82310(...);
extern int thunk_FUN_10e84bd0(...);
extern int thunk_FUN_10ea8130(...);
extern int thunk_FUN_10eb2520(...);
extern int thunk_FUN_10eb27e0(...);
extern int thunk_FUN_10eb29d0(...);
extern int thunk_FUN_10eb5050(...);
extern int thunk_FUN_10eb50c0(...);
extern int thunk_FUN_10eb5130(...);
extern int thunk_FUN_10ebc8e0(...);
extern int thunk_FUN_10ebd6e0(...);
extern int thunk_FUN_10ec1d20(...);
extern int thunk_FUN_10ec2f90(...);
extern int thunk_FUN_10ee15b0(...);
extern int thunk_FUN_10eed870(...);
extern int thunk_FUN_10eeee80(...);
extern int thunk_FUN_10ef70c0(...);
extern int thunk_FUN_10ef9890(...);
extern int thunk_FUN_10f00850(...);
extern int thunk_FUN_10f01a30(...);
extern int thunk_FUN_10f01c90(...);
extern int thunk_FUN_10f01e70(...);
extern int thunk_FUN_10f0b5e0(...);
extern int thunk_FUN_10f11890(...);
extern int thunk_FUN_10f15f70(...);
extern int thunk_FUN_10f163f0(...);
extern int thunk_FUN_10f1b420(...);
extern int thunk_FUN_10f1b480(...);
extern int thunk_FUN_10f1b4e0(...);
extern int thunk_FUN_10f220c0(...);
extern int thunk_FUN_10f22380(...);
extern int thunk_FUN_10f23a20(...);
extern int thunk_FUN_10f29d90(...);
extern int thunk_FUN_10f377b0(...);
extern int thunk_FUN_10f37810(...);
extern int thunk_FUN_10f3da70(...);
extern int thunk_FUN_10f3e260(...);
extern int thunk_FUN_10f45a10(...);
extern int thunk_FUN_10f463a0(...);
extern int thunk_FUN_10f494b0(...);
extern int thunk_FUN_10f4da00(...);
extern int thunk_FUN_10f4e790(...);
extern int thunk_FUN_10f50770(...);
extern int thunk_FUN_10f63480(...);
extern int thunk_FUN_10f67a90(...);
extern int thunk_FUN_10f67e60(...);
extern int thunk_FUN_10f68190(...);
extern int thunk_FUN_10f6b490(...);
extern int thunk_FUN_10f73060(...);
extern int thunk_FUN_10f74a60(...);
extern int thunk_FUN_10f75720(...);
extern int thunk_FUN_10f7bb60(...);
extern int thunk_FUN_10f86b70(...);
extern int thunk_FUN_10f87140(...);
extern int thunk_FUN_10f99ba0(...);
extern int thunk_FUN_10fa0090(...);
extern int thunk_FUN_10fa4480(...);
extern int thunk_FUN_10fa7300(...);
extern int thunk_FUN_10fab530(...);
extern int thunk_FUN_10fab5b0(...);
extern int thunk_FUN_10fab630(...);
extern int thunk_FUN_10fab6b0(...);
extern int thunk_FUN_10fabd40(...);
extern int thunk_FUN_10fabfe0(...);
extern int thunk_FUN_10fac280(...);
extern int thunk_FUN_10fac550(...);
extern int thunk_FUN_10fac7f0(...);
extern int thunk_FUN_10fb01d0(...);
extern int thunk_FUN_10fc0c00(...);
extern int thunk_FUN_10fc5a10(...);
extern int thunk_FUN_10fca310(...);
extern int thunk_FUN_10fcd830(...);
extern int thunk_FUN_10fce4b0(...);
extern int thunk_FUN_10fde940(...);
extern int thunk_FUN_10fdea70(...);
extern int thunk_FUN_10fe0880(...);
extern int thunk_FUN_10fe96d0(...);
extern int thunk_FUN_10fe9990(...);
extern int thunk_FUN_10fe9cb0(...);
extern int thunk_FUN_10ff3290(...);
extern int thunk_FUN_10ff3f10(...);
extern int thunk_FUN_10ff4670(...);
extern int thunk_FUN_10ff8d30(...);
extern int thunk_FUN_10ff8fb0(...);
extern int thunk_FUN_10ffa820(...);
extern int thunk_FUN_1106d920(...);
extern int thunk_FUN_110810b0(...);
extern int thunk_FUN_11081b20(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110833f0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_110965d0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a3e90(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b2900(...);
extern int thunk_FUN_110b9840(...);
extern int thunk_FUN_110dde00(...);
extern int thunk_FUN_110fa660(...);
extern int thunk_FUN_111004d0(...);
extern int thunk_FUN_11111e40(...);
extern int thunk_FUN_111123b0(...);
extern int thunk_FUN_111123c0(...);
extern int thunk_FUN_11113190(...);
extern int thunk_FUN_111135f0(...);
extern int thunk_FUN_11113bb0(...);
extern int thunk_FUN_11113cb0(...);
extern int thunk_FUN_1111b630(...);
extern int thunk_FUN_1111bc60(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112b9e0(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_1112c280(...);
extern int thunk_FUN_1112c3b0(...);
extern int thunk_FUN_1113f590(...);
extern int thunk_FUN_11158170(...);
extern int thunk_FUN_11159cc0(...);
extern int thunk_FUN_1115b9c0(...);
extern int thunk_FUN_1115f330(...);
extern int thunk_FUN_1115f360(...);
extern int thunk_FUN_1115f390(...);
extern int thunk_FUN_1115f570(...);
extern int thunk_FUN_11161d90(...);
extern int thunk_FUN_11162290(...);
extern int thunk_FUN_11162620(...);
extern int thunk_FUN_11164710(...);
extern int thunk_FUN_111a2bd0(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a2ec0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3630(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111bd050(...);
extern int thunk_FUN_111bd6b0(...);
extern int thunk_FUN_111be2e0(...);
extern int thunk_FUN_111c1530(...);
extern int thunk_FUN_111fc270(...);
extern int thunk_FUN_111fc6a0(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_1125cbb0(...);
extern int thunk_FUN_112624a0(...);
extern int thunk_FUN_1128f080(...);
extern int thunk_FUN_1128f0a0(...);
extern int thunk_FUN_1128f0f0(...);
extern int thunk_FUN_1128f110(...);
extern int thunk_FUN_1128f160(...);
extern int thunk_FUN_1128f1b0(...);
extern int thunk_FUN_1128f200(...);
extern int thunk_FUN_1128f250(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_114568e0(...);
extern int thunk_FUN_11456d50(...);
extern int thunk_FUN_11456de0(...);
extern int thunk_FUN_11456e70(...);
extern int thunk_FUN_11456f80(...);
extern int thunk_FUN_114575a0(...);
extern int thunk_FUN_11457630(...);
extern int thunk_FUN_11457670(...);
extern int thunk_FUN_114576b0(...);
extern int thunk_FUN_114576f0(...);
extern int thunk_FUN_114577b0(...);
extern int thunk_FUN_114577f0(...);
extern int thunk_FUN_11457d40(...);
extern int thunk_FUN_11457d80(...);
extern int thunk_FUN_11457f10(...);
extern int thunk_FUN_11457fd0(...);
extern int thunk_FUN_11458020(...);
extern int thunk_FUN_11458060(...);
extern int thunk_FUN_114580e0(...);
extern int thunk_FUN_11458730(...);
extern int thunk_FUN_1148a50e(...);
extern int utf8_length(...);
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_1189bdd4;
extern int DAT_1195e878;
extern int DAT_1211a564;
extern int DAT_1211a56c;
extern int DAT_1211a570;
extern int DAT_12126b84;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int DAT_121a5354;
extern int DAT_121a5e80;
extern int DAT_122e8a18;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RDataSource;
extern int ghidra_vftable_RHTControl;
extern int ghidra_vftable_RMusicServicesDirectory;
extern int ghidra_vftable_RServiceAuthHeaderBuilderFactory;
extern int ghidra_vftable_SCAggregateHelper;
extern int ghidra_vftable_SCAlexaAuthCompleteState;
extern int ghidra_vftable_SCAlexaAuthEnableAckChimeState;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAudioData;
extern int ghidra_vftable_SCBridgeRemovalWizardCompleteState;
extern int ghidra_vftable_SCBridgeRemovalWizardInitState;
extern int ghidra_vftable_SCBridgeRemovalWizardIntroState;
extern int ghidra_vftable_SCCPInfoListDataSource;
extern int ghidra_vftable_SCChangeEmailWizCompleteState;
extern int ghidra_vftable_SCChangeEmailWizInitState;
extern int ghidra_vftable_SCDeviceAutoplay;
extern int ghidra_vftable_SCDeviceLineOut;
extern int ghidra_vftable_SCDeviceMusicEqualizationEventSink;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCInfoViewTextPaneMetadata;
extern int ghidra_vftable_SCInfoviewMenuInfo;
extern int ghidra_vftable_SCInfoviewViewBuilder_HeaderMapping;
extern int ghidra_vftable_SCInfoviewViewBuilder_MenuItemMapping;
extern int ghidra_vftable_SCLegacyBitmapLoadAsyncIOOperation;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardCompleteState;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardInitState;
extern int ghidra_vftable_SCLegacyMusicLibrarySetupWizardSubwizardState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizCompleteState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizInitState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizIntroState;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizard;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizardInitState;
extern int ghidra_vftable_SCLifecycleLauncherWizardCompleteState;
extern int ghidra_vftable_SCLifecycleLauncherWizardInitState;
extern int ghidra_vftable_SCLifecycleMixedLegacyCompleteState;
extern int ghidra_vftable_SCLifecycleMixedLegacyIncompatPlayersState;
extern int ghidra_vftable_SCLifecycleMixedLegacyWizard;
extern int ghidra_vftable_SCLifecycleModernCompleteState;
extern int ghidra_vftable_SCLifecycleNetworkTestInitState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardCompleteState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardInitState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardIntroState;
extern int ghidra_vftable_SCLifecycleWizardMixedLegacyInitState;
extern int ghidra_vftable_SCLifecycleWizardModernInitState;
extern int ghidra_vftable_SCLoadingBrowseDatasource;
extern int ghidra_vftable_SCMutableUrlRequest;
extern int ghidra_vftable_SCNewWizEventSource;
extern int ghidra_vftable_SCNewWizParams;
extern int ghidra_vftable_SCNewWizStayPut;
extern int ghidra_vftable_SCOnlineUpdateCompleteState;
extern int ghidra_vftable_SCOnlineUpdateErrorState;
extern int ghidra_vftable_SCOnlineUpdateInitState;
extern int ghidra_vftable_SCOnlineUpdateWizCompleteState;
extern int ghidra_vftable_SCSecureExistingCompleteState;
extern int ghidra_vftable_SCSecureExistingInitState;
extern int ghidra_vftable_SCSecurePlayerCompleteState;
extern int ghidra_vftable_SCSecurePlayerInitState;
extern int ghidra_vftable_SCSecureRegistrationCompleteState;
extern int ghidra_vftable_SCSecureRegistrationInitState;
extern int ghidra_vftable_SCSecureTransferWizCompleteState;
extern int ghidra_vftable_SCSecureTransferWizInitState;
extern int ghidra_vftable_SCSecureTransferWizIntroState;
extern int ghidra_vftable_SCSonanceDetectionInitState;
extern int ghidra_vftable_SCSonanceDetectionIntroState;
extern int ghidra_vftable_SCSonarCompleteState;
extern int ghidra_vftable_SCSonarInitState;
extern int ghidra_vftable_SCSonarIntroState;
extern int ghidra_vftable_SCSonarWizard;
extern int ghidra_vftable_SCSwfObjACInternalListener;
extern int ghidra_vftable_SCSwfObjDDInternalListener;
extern int ghidra_vftable_SCSwfObjIndexListener;
extern int ghidra_vftable_SCSwfObjQInternalListener;
extern int ghidra_vftable_SCSwfObjSPInternalListener;
extern int ghidra_vftable_SCSwfObjSysInternalListener;
extern int ghidra_vftable_SCSwfObjUMInternalListener;
extern int ghidra_vftable_SCUrlConnection_Callback;
extern int ghidra_vftable_SCUsageDataCompleteState;
extern int ghidra_vftable_SCUsageDataInitState;
extern int ghidra_vftable_SCUsageDataOptInState;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_Node_assert;
extern int ghidra_vftable_std_Node_base;
extern int in_EAX;
extern int in_stack_00000014;
extern int uStack00000004;
extern int uStack_14;
extern int uStack_18;
extern int uStack_1c;
extern int uStack_20;
extern int uStack_48;
extern int uStack_50;
extern int uStack_8;
extern int uStack_88;
extern int uStack_8c;
extern int uStack_c;
extern int unaff_EBX;
extern int unaff_ESI;
extern undefined1 LAB_1020ff3b[];
extern undefined1 LAB_1020ff6a[];
extern undefined1 LAB_105ad9e2[];
extern undefined1 LAB_105adbb7[];
extern undefined1 LAB_10c7c44b[];
extern undefined1 LAB_10d7750b[];
extern undefined1 LAB_10e2b4ee[];
extern undefined1 LAB_10ff820f[];
extern undefined1 LAB_115054c7[];
extern undefined1 LAB_115a8bef[];
extern undefined1 LAB_116cfe30[];
extern undefined1 LAB_116f7e10[];
extern undefined1 LAB_11704550[];
extern undefined1 LAB_1170f170[];
extern undefined1 LAB_1171dd80[];
extern undefined1 LAB_1171eee0[];
extern undefined1 LAB_11731340[];
extern undefined1 LAB_117702a0[];
extern undefined1 LAB_117702d0[];
extern undefined1 LAB_11770300[];
extern undefined1 LAB_11770330[];
extern undefined1 LAB_11770f30[];
extern undefined1 LAB_11772e80[];
extern undefined1 LAB_11791770[];
extern undefined1 LAB_11795460[];
extern int *stack0x00000004;
extern int *stack0x00000010;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std { template<class... A> int _Xbad_alloc(A...); template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xout_of_range(A...);}
struct SCActionOnGroupDescriptorImpl { char _pad; SCActionOnGroupDescriptorImpl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int RTTI_Type_Descriptor; };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int getSingleton(A...); };
struct SCPlayMenuPlayNowDescriptor { char _pad; SCPlayMenuPlayNowDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int RTTI_Type_Descriptor; };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int append(A...); template<class... A> int beginsWith(A...); template<class... A> int hash(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int op_ctor(A...); template<class... A> int op_eq(A...); template<class... A> int op_lt(A...); template<class... A> int utf8_length(A...); };
typedef void *A;
typedef void *K;
typedef void *N;
typedef void *R;
typedef void *SHUFFLE;
typedef void *SQ;
typedef void *T;
typedef void *WARNING;
struct AlbumArtistDisplayOption { char _pad; AlbumArtistDisplayOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct AlexaAuthWizard { char _pad; AlexaAuthWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Bad { char _pad; Bad(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Cancel { char _pad; Cancel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Canceling { char _pad; Canceling(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ChannelMapSet { char _pad; ChannelMapSet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Charge { char _pad; Charge(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Charging { char _pad; Charging(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Check { char _pad; Check(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Close { char _pad; Close(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CurrentDailyIndexRefreshTime { char _pad; CurrentDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CurrentIRRepeaterState { char _pad; CurrentIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DesiredDailyIndexRefreshTime { char _pad; DesiredDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DesiredTimeServer { char _pad; DesiredTimeServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Discharging { char _pad; Discharging(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Email { char _pad; Email(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Enum { char _pad; Enum(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Feature { char _pad; Feature(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Fire { char _pad; Fire(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct History { char _pad; History(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct KeepAlive { char _pad; KeepAlive(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct LEDFeedbackState { char _pad; LEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Match { char _pad; Match(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct MyRadioStations { char _pad; MyRadioStations(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Not { char _pad; Not(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Password { char _pad; Password(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Playlists { char _pad; Playlists(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RTTI_Type_Descriptor { char _pad; RTTI_Type_Descriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCAlarm { char _pad; SCAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCAlexaAuthReminderState { char _pad; SCAlexaAuthReminderState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCDateTimeManager { char _pad; SCDateTimeManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAccountManager { char _pad; SCIAccountManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIActionContext { char _pad; SCIActionContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAlarm { char _pad; SCIAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAlarmManager { char _pad; SCIAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIController { char _pad; SCIController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIDateTimeManager { char _pad; SCIDateTimeManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIDeviceMusicEqualization { char _pad; SCIDeviceMusicEqualization(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIIndexManager { char _pad; SCIIndexManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjACInternalListener { char _pad; SCSwfObjACInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjDDInternalListener { char _pad; SCSwfObjDDInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjQInternalListener { char _pad; SCSwfObjQInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjQListener { char _pad; SCSwfObjQListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjSPInternalListener { char _pad; SCSwfObjSPInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjSPListener { char _pad; SCSwfObjSPListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjUMInternalListener { char _pad; SCSwfObjUMInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Search { char _pad; Search(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Sink { char _pad; Sink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Stop { char _pad; Stop(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subscribe { char _pad; Subscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SwfObjQ { char _pad; SwfObjQ(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SwfObjSP { char _pad; SwfObjSP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SwfStr { char _pad; SwfStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Unknown { char _pad; Unknown(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Unsubscribe { char _pad; Unsubscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
using namespace std;
undefined4 * __thiscall FUN_10beed50(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10bf00f0(undefined4 *param_1);
extern void __fastcall FUN_10bf00f0(...);
int * __fastcall FUN_10bf0550(int *param_1);
extern int * __fastcall FUN_10bf0550(...);
int __fastcall FUN_10bf2460(int *param_1);
extern int __fastcall FUN_10bf2460(...);
int __fastcall FUN_10bf24a0(int *param_1);
extern int __fastcall FUN_10bf24a0(...);
int __thiscall FUN_10bf3b40(int param_1,undefined4 param_2,undefined4 param_3);
int __thiscall FUN_10bf3b80(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __fastcall FUN_10bf50a0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bf50a0(...);
undefined4 * __fastcall FUN_10bf50d0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bf50d0(...);
void __fastcall FUN_10bf5880(int param_1);
extern void __fastcall FUN_10bf5880(...);
void __fastcall FUN_10bf58b0(undefined4 *param_1);
extern void __fastcall FUN_10bf58b0(...);
int FUN_10bf5f40(undefined4 param_1);
extern int FUN_10bf5f40(...);
bool FUN_10bf78b0(undefined4 param_1,int param_2);
extern bool FUN_10bf78b0(...);
undefined4 * __fastcall FUN_10bfad00(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10bfad00(...);
void __fastcall FUN_10bfb4b0(int param_1);
extern void __fastcall FUN_10bfb4b0(...);
void __fastcall FUN_10bfb650(undefined4 *param_1);
extern void __fastcall FUN_10bfb650(...);
int FUN_10bfbad0(undefined4 param_1);
extern int FUN_10bfbad0(...);
undefined4 * __thiscall FUN_10bfbc10(undefined4 *param_1,byte param_2);
void __fastcall FUN_10bfe9e0(int *param_1);
extern void __fastcall FUN_10bfe9e0(...);
undefined4 * __thiscall FUN_10bfef00(undefined4 *param_1,byte param_2);
undefined4 __fastcall FUN_10c00ae0(int param_1);
extern undefined4 __fastcall FUN_10c00ae0(...);
void FUN_10c02e00(int param_1,int param_2);
extern void FUN_10c02e00(...);
void __fastcall FUN_10c06f90(int param_1);
extern void __fastcall FUN_10c06f90(...);
void FUN_10c06fb0(void);
extern void FUN_10c06fb0(...);
int __fastcall FUN_10c070b0(int *param_1);
extern int __fastcall FUN_10c070b0(...);
undefined4 __thiscall FUN_10c0f120(int *param_1,undefined4 param_2);
undefined4 FUN_10c0f160(undefined4 param_1);
extern undefined4 FUN_10c0f160(...);
undefined4 FUN_10c146f0(void);
extern undefined4 FUN_10c146f0(...);
undefined4 __fastcall FUN_10c14ab0(int *param_1);
extern undefined4 __fastcall FUN_10c14ab0(...);
undefined4 __fastcall FUN_10c16c60(int param_1);
extern undefined4 __fastcall FUN_10c16c60(...);
undefined4 __fastcall FUN_10c17fd0(int *param_1);
extern undefined4 __fastcall FUN_10c17fd0(...);
undefined4 __fastcall FUN_10c186b0(int param_1);
extern undefined4 __fastcall FUN_10c186b0(...);
undefined4 __fastcall FUN_10c19540(int param_1);
extern undefined4 __fastcall FUN_10c19540(...);
undefined4 __thiscall FUN_10c1be40(int param_1,int param_2);
undefined4 __thiscall FUN_10c1c560(int param_1,undefined4 param_2);
undefined4 __thiscall FUN_10c1c700(int param_1,undefined4 param_2);
undefined4 __thiscall FUN_10c1e7b0(int param_1,undefined4 param_2);
undefined4 __fastcall FUN_10c1e7e0(int param_1);
extern undefined4 __fastcall FUN_10c1e7e0(...);
int __fastcall FUN_10c1ec20(int param_1);
extern int __fastcall FUN_10c1ec20(...);
uint __fastcall FUN_10c1ed60(int param_1);
extern uint __fastcall FUN_10c1ed60(...);
undefined4 __fastcall FUN_10c1edc0(int param_1);
extern undefined4 __fastcall FUN_10c1edc0(...);
void __fastcall FUN_10c208f0(int param_1);
extern void __fastcall FUN_10c208f0(...);
uint __fastcall FUN_10c20eb0(int param_1);
extern uint __fastcall FUN_10c20eb0(...);
void FUN_10c21100(int param_1);
extern void FUN_10c21100(...);
void __thiscall FUN_10c23420(int param_1,undefined4 *param_2);
void __thiscall FUN_10c23470(int param_1,undefined4 *param_2);
undefined4 * __fastcall FUN_10c23ae0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10c23ae0(...);
void FUN_10c261e0(int param_1,int param_2);
extern void FUN_10c261e0(...);
undefined * FUN_10c26570(undefined4 param_1,int *param_2);
extern undefined * FUN_10c26570(...);
int * __thiscall FUN_10c265e0(int param_1,int *param_2,uint param_3);
void __thiscall FUN_10c271e0(int param_1,undefined4 *param_2);
void __thiscall FUN_10c27230(int param_1,undefined4 *param_2);
void __fastcall FUN_10c2a700(int param_1);
extern void __fastcall FUN_10c2a700(...);
void __thiscall FUN_10c2a8b0(int *param_1,int param_2);
void __thiscall FUN_10c2a8e0(int *param_1,int param_2);
void __fastcall FUN_10c2bce0(undefined4 *param_1);
extern void __fastcall FUN_10c2bce0(...);
void FUN_10c2c0e0(undefined4 param_1,SCStr *param_2);
extern void FUN_10c2c0e0(...);
void __thiscall FUN_10c2c3b0(int param_1,undefined4 *param_2);
void FUN_10c2c400(undefined4 param_1,SCStr *param_2);
extern void FUN_10c2c400(...);
void __thiscall FUN_10c2c4b0(int param_1,undefined4 *param_2);
void __thiscall FUN_10c32530(int param_1,int *param_2);
void __thiscall FUN_10c32580(int param_1,undefined4 param_2);
void __thiscall FUN_10c325d0(int param_1,undefined4 param_2);
void __fastcall FUN_10c32620(int param_1);
extern void __fastcall FUN_10c32620(...);
undefined4 * __fastcall FUN_10c35720(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10c35720(...);
void __fastcall FUN_10c35e20(int *param_1);
extern void __fastcall FUN_10c35e20(...);
void __fastcall FUN_10c35ff0(int *param_1);
extern void __fastcall FUN_10c35ff0(...);
int * __fastcall FUN_10c36500(int *param_1);
extern int * __fastcall FUN_10c36500(...);
int FUN_10c36570(undefined4 param_1);
extern int FUN_10c36570(...);
void __fastcall FUN_10c370e0(int *param_1);
extern void __fastcall FUN_10c370e0(...);
undefined4 __thiscall FUN_10c380f0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10c3ad50(int param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10c3b1c0(int param_1);
extern void __fastcall FUN_10c3b1c0(...);
void __thiscall FUN_10c3b200(int param_1,int param_2);
void __thiscall FUN_10c3b9f0(int param_1,undefined4 param_2,undefined8 param_3);
void FUN_10c3d380(undefined4 param_1,int *param_2);
extern void FUN_10c3d380(...);
int __thiscall FUN_10c3d3d0(int param_1,undefined4 param_2,undefined4 param_3);
int __thiscall FUN_10c3d410(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_10c3d960(undefined4 param_1,undefined4 *param_2);
extern void FUN_10c3d960(...);
undefined4 * __fastcall FUN_10c404f0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10c404f0(...);
undefined4 * __fastcall FUN_10c40520(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10c40520(...);
undefined4 * __fastcall FUN_10c40550(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10c40550(...);
undefined4 * __fastcall FUN_10c40580(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10c40580(...);
void __fastcall FUN_10c41500(int param_1);
extern void __fastcall FUN_10c41500(...);
void __fastcall FUN_10c41590(undefined4 *param_1);
extern void __fastcall FUN_10c41590(...);
int FUN_10c41d40(undefined4 param_1);
extern int FUN_10c41d40(...);
int __thiscall FUN_10c42140(int param_1,byte param_2);
void __fastcall FUN_10c42890(int *param_1);
extern void __fastcall FUN_10c42890(...);
void FUN_10c471c0(void);
extern void FUN_10c471c0(...);
void __thiscall FUN_10c471f0(int param_1,int param_2);
void __fastcall FUN_10c4a070(int param_1);
extern void __fastcall FUN_10c4a070(...);
void __fastcall FUN_10c4b2f0(int *param_1);
extern void __fastcall FUN_10c4b2f0(...);
void __fastcall FUN_10c4b320(int *param_1);
extern void __fastcall FUN_10c4b320(...);
int * __fastcall FUN_10c4b8b0(int *param_1);
extern int * __fastcall FUN_10c4b8b0(...);
void __fastcall FUN_10c4bf90(int *param_1);
extern void __fastcall FUN_10c4bf90(...);
void __fastcall FUN_10c4c4a0(int param_1);
extern void __fastcall FUN_10c4c4a0(...);
char __thiscall FUN_10c4c900(int param_1,undefined4 param_2);
undefined4 FUN_10c4d990(int param_1,int param_2);
extern undefined4 FUN_10c4d990(...);
undefined4 * __thiscall FUN_10c4ea80(undefined4 *param_1,undefined4 param_2);
int __fastcall FUN_10c50ee0(int *param_1);
extern int __fastcall FUN_10c50ee0(...);
int __fastcall FUN_10c56a20(int *param_1);
extern int __fastcall FUN_10c56a20(...);
undefined4 * __thiscall FUN_10c594a0(undefined4 *param_1,undefined4 param_2);
int __fastcall FUN_10c59da0(int *param_1);
extern int __fastcall FUN_10c59da0(...);
undefined4 * __thiscall FUN_10c5b250(undefined4 *param_1,int param_2);
int __fastcall FUN_10c5bb30(int *param_1);
extern int __fastcall FUN_10c5bb30(...);
int __fastcall FUN_10c5bb70(int *param_1);
extern int __fastcall FUN_10c5bb70(...);
void __thiscall FUN_10c5bbb0(int param_1,short param_2);
void __thiscall FUN_10c5bbf0(int param_1,short param_2);
undefined1 __fastcall FUN_10c5c920(int param_1);
extern undefined1 __fastcall FUN_10c5c920(...);
void __thiscall FUN_10c5c970(int param_1,short param_2);
void __thiscall FUN_10c5cb70(int param_1,short param_2);
uint __fastcall FUN_10c5cbb0(int param_1);
extern uint __fastcall FUN_10c5cbb0(...);
void __thiscall FUN_10c5cbd0(int param_1,undefined1 param_2);
void __thiscall FUN_10c5cc20(int param_1,short param_2);
void __thiscall FUN_10c5cc70(int param_1,undefined1 param_2);
void __fastcall FUN_10c5ccb0(int param_1);
extern void __fastcall FUN_10c5ccb0(...);
void __fastcall FUN_10c5ccf0(int param_1);
extern void __fastcall FUN_10c5ccf0(...);
void __fastcall FUN_10c5d2f0(int param_1);
extern void __fastcall FUN_10c5d2f0(...);
void __fastcall FUN_10c5d300(int param_1);
extern void __fastcall FUN_10c5d300(...);
void __fastcall FUN_10c5d310(int param_1);
extern void __fastcall FUN_10c5d310(...);
void __fastcall FUN_10c5d320(int param_1);
extern void __fastcall FUN_10c5d320(...);
void __fastcall FUN_10c5d330(int param_1);
extern void __fastcall FUN_10c5d330(...);
void __thiscall FUN_10c5d350(int param_1,short param_2);
void __fastcall FUN_10c5d390(int param_1);
extern void __fastcall FUN_10c5d390(...);
void __fastcall FUN_10c5d3b0(int param_1);
extern void __fastcall FUN_10c5d3b0(...);
void __fastcall FUN_10c5d3d0(int *param_1);
extern void __fastcall FUN_10c5d3d0(...);
void __fastcall FUN_10c5d3f0(int param_1);
extern void __fastcall FUN_10c5d3f0(...);
void __fastcall FUN_10c5d410(int param_1);
extern void __fastcall FUN_10c5d410(...);
void __fastcall FUN_10c5d430(int param_1);
extern void __fastcall FUN_10c5d430(...);
void __fastcall FUN_10c5d450(int param_1);
extern void __fastcall FUN_10c5d450(...);
void __fastcall FUN_10c5d470(int param_1);
extern void __fastcall FUN_10c5d470(...);
void __thiscall FUN_10c5d490(int param_1,undefined1 param_2);
void __fastcall FUN_10c5d4b0(int param_1);
extern void __fastcall FUN_10c5d4b0(...);
void __fastcall FUN_10c5d4d0(int param_1);
extern void __fastcall FUN_10c5d4d0(...);
void __fastcall FUN_10c5d4f0(int param_1);
extern void __fastcall FUN_10c5d4f0(...);
void __fastcall FUN_10c5d510(int param_1);
extern void __fastcall FUN_10c5d510(...);
void __fastcall FUN_10c5d530(int param_1);
extern void __fastcall FUN_10c5d530(...);
void __fastcall FUN_10c5d550(int param_1);
extern void __fastcall FUN_10c5d550(...);
void __fastcall FUN_10c5d570(int param_1);
extern void __fastcall FUN_10c5d570(...);
void __fastcall FUN_10c5d590(int param_1);
extern void __fastcall FUN_10c5d590(...);
void __fastcall FUN_10c5d5b0(int param_1);
extern void __fastcall FUN_10c5d5b0(...);
void __fastcall FUN_10c5d5d0(int param_1);
extern void __fastcall FUN_10c5d5d0(...);
void __thiscall FUN_10c5d720(int param_1,undefined1 param_2);
void __thiscall FUN_10c5d770(int param_1,short param_2);
void __thiscall FUN_10c5d7c0(int param_1,undefined1 param_2);
void __thiscall FUN_10c5d9e0(int param_1,undefined1 param_2);
void __thiscall FUN_10c5da30(int param_1,short param_2);
void __thiscall FUN_10c5da80(int param_1,short param_2);
void __thiscall FUN_10c5dac0(int param_1,short param_2);
void __thiscall FUN_10c5db10(int param_1,short param_2);
void __thiscall FUN_10c5db60(int param_1,undefined1 param_2);
void __thiscall FUN_10c5dba0(int param_1,undefined4 param_2);
void __thiscall FUN_10c5dc20(int param_1,short param_2);
int __thiscall FUN_10c5e2d0(int *param_1,int *param_2);
int __thiscall FUN_10c5e310(int *param_1,SCStr *param_2);
undefined4 * __fastcall FUN_10c5eae0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10c5eae0(...);
undefined4 * __fastcall FUN_10c5ed70(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10c5ed70(...);
SCStr * __thiscall FUN_10c5f840(SCStr *param_1,SCStr *param_2);
SCStr * __thiscall FUN_10c5f870(SCStr *param_1,SCStr *param_2);
int * __thiscall FUN_10c5fa70(int *param_1,undefined4 param_2,undefined4 param_3);
int __fastcall FUN_10c62f60(undefined4 *param_1);
extern int __fastcall FUN_10c62f60(...);
SCStr * FUN_10c63000(undefined4 param_1,SCStr *param_2);
extern SCStr * FUN_10c63000(...);
int FUN_10c66510(uint param_1,uint param_2);
extern int FUN_10c66510(...);
undefined4 __fastcall FUN_10c67700(int *param_1);
extern undefined4 __fastcall FUN_10c67700(...);
void __thiscall FUN_10c67ab0(int *param_1,int param_2);
void __fastcall FUN_10c67c20(int param_1);
extern void __fastcall FUN_10c67c20(...);
bool FUN_10c69170(undefined4 param_1);
extern bool FUN_10c69170(...);
void FUN_10c69f50(int param_1);
extern void FUN_10c69f50(...);
void __fastcall FUN_10c6a3c0(int param_1);
extern void __fastcall FUN_10c6a3c0(...);
void __thiscall FUN_10c6a450(int param_1,int param_2);
void __thiscall FUN_10c6a490(int param_1,int param_2);
void __fastcall FUN_10c6a4c0(int param_1);
extern void __fastcall FUN_10c6a4c0(...);
void __thiscall FUN_10c6a520(int param_1,undefined4 param_2,int param_3);
void __fastcall FUN_10c6a950(int param_1);
extern void __fastcall FUN_10c6a950(...);
void __fastcall FUN_10c6a970(int param_1);
extern void __fastcall FUN_10c6a970(...);
undefined4 __fastcall FUN_10c6ed50(int param_1);
extern undefined4 __fastcall FUN_10c6ed50(...);
undefined4 __fastcall FUN_10c6ed70(int param_1);
extern undefined4 __fastcall FUN_10c6ed70(...);
undefined4 __fastcall FUN_10c6fb30(int param_1);
extern undefined4 __fastcall FUN_10c6fb30(...);
undefined1 __thiscall FUN_10c6fcb0(int param_1,char param_2);
uint FUN_10c71eb0(uint param_1,int param_2);
extern uint FUN_10c71eb0(...);
void FUN_10c73860(undefined4 *param_1,char *param_2,char *param_3,int *param_4);
extern void FUN_10c73860(...);
void __fastcall FUN_10c75fb0(undefined4 *param_1);
extern void __fastcall FUN_10c75fb0(...);
void __fastcall FUN_10c760e0(undefined4 *param_1);
extern void __fastcall FUN_10c760e0(...);
void __fastcall FUN_10c76170(int param_1);
extern void __fastcall FUN_10c76170(...);
void __fastcall FUN_10c761e0(int param_1);
extern void __fastcall FUN_10c761e0(...);
void __fastcall FUN_10c76540(undefined4 *param_1);
extern void __fastcall FUN_10c76540(...);
int __thiscall FUN_10c76c60(undefined4 *param_1,int param_2);
int __thiscall FUN_10c770a0(int param_1,byte param_2);
undefined4 * __thiscall FUN_10c771c0(undefined4 *param_1,byte param_2);
int __thiscall FUN_10c77200(int param_1,byte param_2);
uint __fastcall FUN_10c78bf0(int param_1);
extern uint __fastcall FUN_10c78bf0(...);
bool FUN_10c7a2d0(void);
extern bool FUN_10c7a2d0(...);
undefined4 __thiscall FUN_10c7ad10(int param_1,char param_2);
void FUN_10c7b430(void);
extern void FUN_10c7b430(...);
void __thiscall FUN_10c7c260(size_t *param_1,undefined1 param_2);
uint __fastcall FUN_10c7c420(int *param_1);
extern uint __fastcall FUN_10c7c420(...);
void __fastcall FUN_10c7d3b0(undefined4 *param_1);
extern void __fastcall FUN_10c7d3b0(...);
void FUN_10c7d870(undefined4 *param_1,int param_2);
extern void FUN_10c7d870(...);
void FUN_10c7d8f0(undefined4 *param_1,int param_2);
extern void FUN_10c7d8f0(...);
uint FUN_10c7e160(int param_1,int param_2);
extern uint FUN_10c7e160(...);
undefined4 __fastcall FUN_10c7e5a0(int param_1);
extern undefined4 __fastcall FUN_10c7e5a0(...);
undefined4 __fastcall FUN_10c7e960(int param_1);
extern undefined4 __fastcall FUN_10c7e960(...);
void __thiscall FUN_10c7fcd0(undefined4 *param_1,uint param_2);
undefined4 * __thiscall FUN_10c83a10(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10c83c30(int param_1);
extern void __fastcall FUN_10c83c30(...);
void __fastcall FUN_10c83c80(int param_1);
extern void __fastcall FUN_10c83c80(...);
undefined4 * __thiscall FUN_10c83ce0(undefined4 *param_1,undefined4 param_2);
undefined4 __fastcall FUN_10c83f10(int param_1);
extern undefined4 __fastcall FUN_10c83f10(...);
void __fastcall FUN_10c83f90(int param_1);
extern void __fastcall FUN_10c83f90(...);
void __fastcall FUN_10c83fc0(int param_1);
extern void __fastcall FUN_10c83fc0(...);
int __thiscall FUN_10c85140(int param_1,undefined4 param_2,undefined4 param_3);
int __thiscall FUN_10c85180(int param_1,undefined4 param_2,undefined4 param_3);
int __thiscall FUN_10c851c0(int *param_1,SCStr *param_2);
void __thiscall FUN_10c87b70(int param_1,undefined4 *param_2);
undefined4 * __fastcall FUN_10c88a30(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10c88a30(...);
undefined4 * __fastcall FUN_10c88a60(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10c88a60(...);
int FUN_10c89fc0(undefined4 param_1);
extern int FUN_10c89fc0(...);
int FUN_10c89ff0(undefined4 param_1);
extern int FUN_10c89ff0(...);
void FUN_10c8be80(undefined4 param_1,undefined4 param_2);
extern void FUN_10c8be80(...);
SCStr * __thiscall FUN_10c8d640(int param_1,SCStr *param_2);
undefined4 __thiscall FUN_10c8dce0(int param_1,undefined4 param_2);
undefined4 FUN_10c8de30(undefined4 param_1);
extern undefined4 FUN_10c8de30(...);
undefined4 FUN_10c8de80(undefined4 param_1);
extern undefined4 FUN_10c8de80(...);
void __thiscall FUN_10c92d70(int param_1,undefined4 *param_2);
void __fastcall FUN_10c92e40(int param_1);
extern void __fastcall FUN_10c92e40(...);
char * FUN_10c93210(undefined4 param_1);
extern char * FUN_10c93210(...);
void __fastcall FUN_10c93f50(int param_1);
extern void __fastcall FUN_10c93f50(...);
undefined4 __fastcall FUN_10c96350(int param_1);
extern undefined4 __fastcall FUN_10c96350(...);
undefined4 __fastcall FUN_10c96760(int param_1);
extern undefined4 __fastcall FUN_10c96760(...);
undefined4 __thiscall FUN_10c97630(int param_1,undefined4 param_2);
undefined4 __fastcall FUN_10c97650(int param_1);
extern undefined4 __fastcall FUN_10c97650(...);
undefined4 __fastcall FUN_10c97670(int param_1);
extern undefined4 __fastcall FUN_10c97670(...);
int __fastcall FUN_10c97b50(int param_1);
extern int __fastcall FUN_10c97b50(...);
void __fastcall FUN_10c97b70(int param_1);
extern void __fastcall FUN_10c97b70(...);
void __fastcall FUN_10c980a0(int param_1);
extern void __fastcall FUN_10c980a0(...);
void __fastcall FUN_10c98100(int param_1);
extern void __fastcall FUN_10c98100(...);
void __fastcall FUN_10c99580(int param_1);
extern void __fastcall FUN_10c99580(...);
void __fastcall FUN_10c99820(int param_1);
extern void __fastcall FUN_10c99820(...);
void __fastcall FUN_10c99870(int param_1);
extern void __fastcall FUN_10c99870(...);
void __fastcall FUN_10c998c0(int param_1);
extern void __fastcall FUN_10c998c0(...);
void __fastcall FUN_10c99dc0(int param_1);
extern void __fastcall FUN_10c99dc0(...);
void __fastcall FUN_10c9a420(int param_1);
extern void __fastcall FUN_10c9a420(...);
void __fastcall FUN_10c9b060(int param_1);
extern void __fastcall FUN_10c9b060(...);
undefined4 __fastcall FUN_10c9b1e0(int param_1);
extern undefined4 __fastcall FUN_10c9b1e0(...);
void __fastcall FUN_10c9c3f0(int param_1);
extern void __fastcall FUN_10c9c3f0(...);
undefined4 __fastcall FUN_10c9c4d0(int param_1);
extern undefined4 __fastcall FUN_10c9c4d0(...);
bool __fastcall FUN_10c9c640(int param_1);
extern bool __fastcall FUN_10c9c640(...);
void __fastcall FUN_10c9c6e0(int param_1);
extern void __fastcall FUN_10c9c6e0(...);
void __fastcall FUN_10c9c980(int param_1);
extern void __fastcall FUN_10c9c980(...);
void __fastcall FUN_10c9c9d0(int param_1);
extern void __fastcall FUN_10c9c9d0(...);
void __fastcall FUN_10c9ca20(int param_1);
extern void __fastcall FUN_10c9ca20(...);
void __fastcall FUN_10c9cc60(int param_1);
extern void __fastcall FUN_10c9cc60(...);
void __thiscall FUN_10ca3b90(int param_1,int param_2);
undefined1 __fastcall FUN_10ca3ee0(int param_1);
extern undefined1 __fastcall FUN_10ca3ee0(...);
undefined1 __fastcall FUN_10ca3ff0(int param_1);
extern undefined1 __fastcall FUN_10ca3ff0(...);
void __fastcall FUN_10ca4250(int param_1);
extern void __fastcall FUN_10ca4250(...);
void __fastcall FUN_10ca42b0(int param_1);
extern void __fastcall FUN_10ca42b0(...);
undefined4 * __fastcall FUN_10ca4b50(undefined4 param_1);
extern undefined4 * __fastcall FUN_10ca4b50(...);
undefined4 * __fastcall FUN_10ca4d90(undefined4 param_1);
extern undefined4 * __fastcall FUN_10ca4d90(...);
undefined4 * __fastcall FUN_10ca4dd0(int param_1);
extern undefined4 * __fastcall FUN_10ca4dd0(...);
undefined4 * __fastcall FUN_10ca4e10(int param_1);
extern undefined4 * __fastcall FUN_10ca4e10(...);
undefined4 * __fastcall FUN_10ca5270(int param_1);
extern undefined4 * __fastcall FUN_10ca5270(...);
undefined4 * __fastcall FUN_10ca5370(int param_1);
extern undefined4 * __fastcall FUN_10ca5370(...);
undefined4 * __fastcall FUN_10ca5ac0(int param_1);
extern undefined4 * __fastcall FUN_10ca5ac0(...);
undefined4 * __fastcall FUN_10ca5b00(int param_1);
extern undefined4 * __fastcall FUN_10ca5b00(...);
undefined4 * __fastcall FUN_10ca5e80(int param_1);
extern undefined4 * __fastcall FUN_10ca5e80(...);
undefined4 * __fastcall FUN_10ca6210(int param_1);
extern undefined4 * __fastcall FUN_10ca6210(...);
undefined4 * __fastcall FUN_10ca67f0(int param_1);
extern undefined4 * __fastcall FUN_10ca67f0(...);
void FUN_10ca7710(int param_1,int param_2);
extern void FUN_10ca7710(...);
uint FUN_10ca7ef0(void);
extern uint FUN_10ca7ef0(...);
undefined4 __fastcall FUN_10ca8b40(int param_1);
extern undefined4 __fastcall FUN_10ca8b40(...);
undefined4 __fastcall FUN_10ca92f0(int param_1);
extern undefined4 __fastcall FUN_10ca92f0(...);
undefined4 __thiscall FUN_10ca9450(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10ca9a70(int param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10cb1020(int param_1);
extern void __fastcall FUN_10cb1020(...);
undefined4 __fastcall FUN_10cb1ab0(int param_1);
extern undefined4 __fastcall FUN_10cb1ab0(...);
undefined4 __fastcall FUN_10cb1c70(int *param_1);
extern undefined4 __fastcall FUN_10cb1c70(...);
undefined1 FUN_10cb2250(SCStr *param_1);
extern undefined1 FUN_10cb2250(...);
void __fastcall FUN_10cb2f70(int param_1);
extern void __fastcall FUN_10cb2f70(...);
void __fastcall FUN_10cb3780(int *param_1);
extern void __fastcall FUN_10cb3780(...);
void __fastcall FUN_10cb3800(int param_1);
extern void __fastcall FUN_10cb3800(...);
void __fastcall FUN_10cb5cc0(int param_1);
extern void __fastcall FUN_10cb5cc0(...);
void __fastcall FUN_10cb6550(int param_1);
extern void __fastcall FUN_10cb6550(...);
void __thiscall FUN_10cb68f0(int param_1,int param_2);
void FUN_10cb6c40(int param_1);
extern void FUN_10cb6c40(...);
void FUN_10cb6c60(int param_1);
extern void FUN_10cb6c60(...);
undefined4 FUN_10cb7580(void);
extern undefined4 FUN_10cb7580(...);
int __thiscall FUN_10cb8b30(int *param_1,SCStr *param_2);
void __thiscall FUN_10cbd350(int param_1,undefined4 *param_2);
void FUN_10cbd390(undefined4 *param_1,undefined4 param_2);
extern void FUN_10cbd390(...);
void __thiscall FUN_10cbd3c0(int param_1,undefined4 *param_2);
int * __thiscall FUN_10cbd9d0(int param_1,int *param_2,int param_3);
bool __thiscall FUN_10cbda80(int param_1,int param_2);
void __fastcall FUN_10ccf340(int param_1);
extern void __fastcall FUN_10ccf340(...);
int * __thiscall FUN_10cd4010(int param_1,int *param_2,int param_3);
void __thiscall FUN_10cd7cb0(int param_1,int *param_2);
void __thiscall FUN_10cd9af0(int param_1,undefined4 param_2);
void __thiscall FUN_10cdaa70(int param_1,undefined4 param_2);
void __fastcall FUN_10cdc070(int *param_1);
extern void __fastcall FUN_10cdc070(...);
void __fastcall FUN_10cdc0a0(int *param_1);
extern void __fastcall FUN_10cdc0a0(...);
int * __fastcall FUN_10cdc3e0(int *param_1);
extern int * __fastcall FUN_10cdc3e0(...);
void __fastcall FUN_10cdcc40(int *param_1);
extern void __fastcall FUN_10cdcc40(...);
void __fastcall FUN_10cdd550(int param_1);
extern void __fastcall FUN_10cdd550(...);
void __fastcall FUN_10cddc50(undefined4 param_1);
extern void __fastcall FUN_10cddc50(...);
void __fastcall FUN_10cddc70(undefined4 param_1);
extern void __fastcall FUN_10cddc70(...);
int __fastcall FUN_10cdf040(int param_1);
extern int __fastcall FUN_10cdf040(...);
undefined4 __thiscall FUN_10cdf070(undefined4 param_1,undefined4 param_2);
undefined4 __thiscall FUN_10cdf0a0(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_10cdf0d0(int param_1);
extern void __fastcall FUN_10cdf0d0(...);
void __fastcall FUN_10cdf240(int param_1);
extern void __fastcall FUN_10cdf240(...);
void FUN_10cdfa20(void);
extern void FUN_10cdfa20(...);
undefined4 FUN_10cdfcc0(void);
extern undefined4 FUN_10cdfcc0(...);
undefined4 FUN_10cdfce0(void);
extern undefined4 FUN_10cdfce0(...);
void __thiscall FUN_10cdfda0(int *param_1,int param_2);
void FUN_10cdffe0(undefined4 param_1,SCStr *param_2);
extern void FUN_10cdffe0(...);
undefined4 __fastcall FUN_10ce0060(int param_1);
extern undefined4 __fastcall FUN_10ce0060(...);
void __thiscall FUN_10ce0ad0(int param_1,undefined4 param_2);
void __thiscall FUN_10ce3280(int param_1,undefined4 *param_2);
void FUN_10ce3d50(int param_1,int param_2);
extern void FUN_10ce3d50(...);
int * __thiscall FUN_10ce4000(int param_1,int *param_2,uint param_3);
void __fastcall FUN_10ce4570(int param_1);
extern void __fastcall FUN_10ce4570(...);
void __thiscall FUN_10ce4c60(int param_1,undefined4 *param_2);
int __thiscall FUN_10ce5cd0(int param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_10ce64d0(int param_1,int *param_2,SCStr *param_3);
undefined4 * __fastcall FUN_10ce6a80(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10ce6a80(...);
void __fastcall FUN_10ce71c0(int *param_1);
extern void __fastcall FUN_10ce71c0(...);
void __fastcall FUN_10ce71f0(int *param_1);
extern void __fastcall FUN_10ce71f0(...);
void __fastcall FUN_10ce73c0(int *param_1);
extern void __fastcall FUN_10ce73c0(...);
void __fastcall FUN_10ce73f0(int *param_1);
extern void __fastcall FUN_10ce73f0(...);
int * __fastcall FUN_10ce7740(int *param_1);
extern int * __fastcall FUN_10ce7740(...);
int * __fastcall FUN_10ce7770(int *param_1);
extern int * __fastcall FUN_10ce7770(...);
int FUN_10ce7820(undefined4 param_1);
extern int FUN_10ce7820(...);
void __fastcall FUN_10ce83a0(int *param_1);
extern void __fastcall FUN_10ce83a0(...);
void __fastcall FUN_10ce83d0(int *param_1);
extern void __fastcall FUN_10ce83d0(...);
int FUN_10ce9420(SCStr *param_1);
extern int FUN_10ce9420(...);
void __thiscall FUN_10cee1c0(int param_1,undefined4 *param_2);
void __fastcall FUN_10cee720(undefined4 *param_1);
extern void __fastcall FUN_10cee720(...);
void __fastcall FUN_10cee8d0(int *param_1);
extern void __fastcall FUN_10cee8d0(...);
void __fastcall FUN_10cee900(int *param_1);
extern void __fastcall FUN_10cee900(...);
int * __fastcall FUN_10ceeb90(int *param_1);
extern int * __fastcall FUN_10ceeb90(...);
void __thiscall FUN_10ceee20(int *param_1,int *param_2);
void __fastcall FUN_10ceeea0(int *param_1);
extern void __fastcall FUN_10ceeea0(...);
void __thiscall FUN_10cf0930(int param_1,undefined4 *param_2);
void FUN_10cf1010(int param_1);
extern void FUN_10cf1010(...);
void FUN_10cf1030(int param_1);
extern void FUN_10cf1030(...);
void __thiscall FUN_10cf3370(int param_1,undefined4 *param_2);
void __thiscall FUN_10cf3390(int param_1,undefined4 *param_2);
void FUN_10cf33f0(undefined4 *param_1);
extern void FUN_10cf33f0(...);
void FUN_10cf3410(undefined4 *param_1);
extern void FUN_10cf3410(...);
void __thiscall FUN_10cf3450(int param_1,undefined4 *param_2);
void __thiscall FUN_10cf3470(int param_1,undefined4 *param_2);
void __thiscall FUN_10cf3940(int *param_1,uint param_2);
void FUN_10cf4ac0(undefined4 *param_1);
extern void FUN_10cf4ac0(...);
void FUN_10cf4ae0(void);
extern void FUN_10cf4ae0(...);
void FUN_10cf5110(void);
extern void FUN_10cf5110(...);
void FUN_10cf53c0(void);
extern void FUN_10cf53c0(...);
SCStr * __thiscall FUN_10cf6150(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10cf7f50(int *param_1,SCStr *param_2);
uint __fastcall FUN_10cf8b00(int param_1);
extern uint __fastcall FUN_10cf8b00(...);
void FUN_10cf9070(int param_1);
extern void FUN_10cf9070(...);
undefined4 __fastcall FUN_10cf9740(int param_1);
extern undefined4 __fastcall FUN_10cf9740(...);
undefined4 __fastcall FUN_10cf9c70(int param_1);
extern undefined4 __fastcall FUN_10cf9c70(...);
int * __thiscall FUN_10cf9c90(int param_1,int *param_2,uint param_3);
undefined4 __fastcall FUN_10cfa090(int param_1);
extern undefined4 __fastcall FUN_10cfa090(...);
undefined4 __fastcall FUN_10cfa2c0(int param_1);
extern undefined4 __fastcall FUN_10cfa2c0(...);
uint __fastcall FUN_10cfb1d0(int param_1);
extern uint __fastcall FUN_10cfb1d0(...);
undefined4 __thiscall FUN_10cfbe60(int param_1,undefined4 param_2,undefined4 param_3);
int * __thiscall FUN_10cfc100(int param_1,int *param_2,uint param_3);
undefined4 __thiscall FUN_10cfc1c0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10cfc400(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10cfc440(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10cfc4e0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10cfc510(int param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_10cfe140(int param_1,undefined4 param_2,undefined8 param_3);
void __fastcall FUN_10d017b0(undefined4 *param_1);
extern void __fastcall FUN_10d017b0(...);
void __fastcall FUN_10d03040(int param_1);
extern void __fastcall FUN_10d03040(...);
void __thiscall FUN_10d03130(int param_1,undefined4 *param_2);
undefined4 __fastcall FUN_10d03290(int *param_1);
extern undefined4 __fastcall FUN_10d03290(...);
SCStr * FUN_10d04bc0(SCStr *param_1);
extern SCStr * FUN_10d04bc0(...);
void __thiscall FUN_10d05e30(int *param_1,undefined4 param_2);
void __fastcall FUN_10d05f30(int param_1);
extern void __fastcall FUN_10d05f30(...);
void __fastcall FUN_10d05f80(int param_1);
extern void __fastcall FUN_10d05f80(...);
void __thiscall FUN_10d09f30(int param_1,undefined4 *param_2);
void __thiscall FUN_10d09f50(int param_1,undefined4 *param_2);
void __thiscall FUN_10d0a1e0(int param_1,undefined4 *param_2);
void __thiscall FUN_10d0a200(int param_1,undefined4 *param_2);
void __thiscall FUN_10d0f480(int *param_1,undefined4 param_2);
void FUN_10d113e0(int param_1);
extern void FUN_10d113e0(...);
undefined4 __fastcall FUN_10d130b0(int param_1);
extern undefined4 __fastcall FUN_10d130b0(...);
undefined4 __fastcall FUN_10d13700(int param_1);
extern undefined4 __fastcall FUN_10d13700(...);
int * __thiscall FUN_10d13740(int param_1,int *param_2,uint param_3);
undefined4 __fastcall FUN_10d13d50(int param_1);
extern undefined4 __fastcall FUN_10d13d50(...);
undefined4 __fastcall FUN_10d13fd0(int param_1);
extern undefined4 __fastcall FUN_10d13fd0(...);
void __fastcall FUN_10d14290(int param_1);
extern void __fastcall FUN_10d14290(...);
uint __fastcall FUN_10d15320(int param_1);
extern uint __fastcall FUN_10d15320(...);
void __fastcall FUN_10d16980(int *param_1);
extern void __fastcall FUN_10d16980(...);
int __fastcall FUN_10d17d40(int *param_1);
extern int __fastcall FUN_10d17d40(...);
undefined4 __thiscall FUN_10d17e80(int param_1,int param_2);
undefined1 __fastcall FUN_10d18640(int param_1);
extern undefined1 __fastcall FUN_10d18640(...);
void __fastcall FUN_10d18670(int *param_1);
extern void __fastcall FUN_10d18670(...);
undefined1 __fastcall FUN_10d187d0(int param_1);
extern undefined1 __fastcall FUN_10d187d0(...);
void FUN_10d18800(void);
extern void FUN_10d18800(...);
undefined1 __fastcall FUN_10d189f0(int *param_1);
extern undefined1 __fastcall FUN_10d189f0(...);
void __fastcall FUN_10d18a30(int param_1);
extern void __fastcall FUN_10d18a30(...);
void __fastcall FUN_10d18e50(int param_1);
extern void __fastcall FUN_10d18e50(...);
void __fastcall FUN_10d19370(int param_1);
extern void __fastcall FUN_10d19370(...);
void __fastcall FUN_10d193b0(int param_1);
extern void __fastcall FUN_10d193b0(...);
undefined4 __fastcall FUN_10d194d0(int *param_1);
extern undefined4 __fastcall FUN_10d194d0(...);
undefined2 FUN_10d19730(short param_1,int param_2);
extern undefined2 FUN_10d19730(...);
void __thiscall FUN_10d197a0(int *param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_10d19b20(int param_1,undefined4 *param_2);
void __fastcall FUN_10d1a530(int *param_1);
extern void __fastcall FUN_10d1a530(...);
undefined4 * __thiscall FUN_10d1c3f0(int param_1,undefined4 *param_2);
int * __thiscall FUN_10d1c4c0(int param_1,int *param_2,uint param_3);
void __fastcall FUN_10d1ce70(int param_1);
extern void __fastcall FUN_10d1ce70(...);
void __fastcall FUN_10d1cf60(int param_1);
extern void __fastcall FUN_10d1cf60(...);
void __thiscall FUN_10d1d4a0(int param_1,undefined4 *param_2);
void FUN_10d1d940(int param_1);
extern void FUN_10d1d940(...);
void __thiscall FUN_10d1eb10(int param_1,int param_2);
void __thiscall FUN_10d1f920(int param_1,undefined4 *param_2);
void __thiscall FUN_10d1f940(int param_1,undefined4 *param_2);
void __thiscall FUN_10d1fb00(int param_1,undefined4 *param_2);
void __thiscall FUN_10d1fb20(int param_1,undefined4 *param_2);
int * __thiscall FUN_10d20520(int param_1,int *param_2,uint param_3);
undefined4 FUN_10d205d0(int param_1);
extern undefined4 FUN_10d205d0(...);
SCStr * FUN_10d20600(SCStr *param_1,int param_2,undefined4 param_3);
extern SCStr * FUN_10d20600(...);
SCStr * __thiscall FUN_10d20690(int param_1,SCStr *param_2);
int __fastcall FUN_10d23140(int param_1);
extern int __fastcall FUN_10d23140(...);
void __thiscall FUN_10d23440(int param_1,int param_2);
void __fastcall FUN_10d234b0(int param_1);
extern void __fastcall FUN_10d234b0(...);
void FUN_10d24420(undefined4 param_1,int *param_2);
extern void FUN_10d24420(...);
int __thiscall FUN_10d24470(int *param_1,uint *param_2);
undefined4 * __fastcall FUN_10d26320(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10d26320(...);
void __thiscall FUN_10d28920(int param_1,undefined4 *param_2);
void __thiscall FUN_10d28940(int param_1,undefined4 *param_2);
void __thiscall FUN_10d28960(int param_1,undefined4 *param_2);
void __thiscall FUN_10d28980(int param_1,undefined4 *param_2);
void __thiscall FUN_10d289a0(int param_1,undefined4 *param_2);
void __thiscall FUN_10d289c0(int param_1,undefined4 *param_2);
void __thiscall FUN_10d289e0(int param_1,undefined4 *param_2);
void __thiscall FUN_10d28a00(int param_1,undefined4 *param_2);
void __thiscall FUN_10d29210(int param_1,undefined4 *param_2);
void __thiscall FUN_10d29230(int param_1,undefined4 *param_2);
void __thiscall FUN_10d29250(int param_1,undefined4 *param_2);
void __thiscall FUN_10d29270(int param_1,undefined4 *param_2);
void __thiscall FUN_10d29290(int param_1,undefined4 *param_2);
void __thiscall FUN_10d292b0(int param_1,undefined4 *param_2);
void __thiscall FUN_10d292d0(int param_1,undefined4 *param_2);
void __thiscall FUN_10d292f0(int param_1,undefined4 *param_2);
SCStr * __thiscall FUN_10d29c20(int param_1,SCStr *param_2);
int * __thiscall FUN_10d29f40(int param_1,int *param_2,uint param_3);
SCStr * FUN_10d2a180(SCStr *param_1);
extern SCStr * FUN_10d2a180(...);
SCStr * FUN_10d2a1e0(SCStr *param_1);
extern SCStr * FUN_10d2a1e0(...);
SCStr * __thiscall FUN_10d2a200(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10d2a8f0(int param_1,SCStr *param_2);
void __fastcall FUN_10d2ae00(int param_1);
extern void __fastcall FUN_10d2ae00(...);
void FUN_10d2be50(int param_1);
extern void FUN_10d2be50(...);
void FUN_10d2be70(int param_1);
extern void FUN_10d2be70(...);
void __thiscall FUN_10d30a60(int param_1,undefined4 *param_2);
void __thiscall FUN_10d30a80(int param_1,undefined4 *param_2);
void __thiscall FUN_10d30aa0(int param_1,undefined4 *param_2);
void __fastcall FUN_10d30b40(int param_1);
extern void __fastcall FUN_10d30b40(...);
void __thiscall FUN_10d30b70(int param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10d30bb0(int param_1);
extern void __fastcall FUN_10d30bb0(...);
void __thiscall FUN_10d30c10(int param_1,undefined4 *param_2);
void __thiscall FUN_10d30c30(int param_1,undefined4 *param_2);
void __thiscall FUN_10d30c50(int param_1,undefined4 *param_2);
SCStr * __thiscall FUN_10d35680(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10d356b0(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10d356e0(int param_1,SCStr *param_2);
undefined4 __fastcall FUN_10d35830(int param_1);
extern undefined4 __fastcall FUN_10d35830(...);
undefined4 __fastcall FUN_10d360e0(int param_1);
extern undefined4 __fastcall FUN_10d360e0(...);
undefined4 __fastcall FUN_10d370c0(int param_1);
extern undefined4 __fastcall FUN_10d370c0(...);
undefined4 __fastcall FUN_10d37d60(int param_1);
extern undefined4 __fastcall FUN_10d37d60(...);
undefined4 __fastcall FUN_10d37fa0(int param_1);
extern undefined4 __fastcall FUN_10d37fa0(...);
bool __fastcall FUN_10d381f0(int *param_1);
extern bool __fastcall FUN_10d381f0(...);
void __fastcall FUN_10d38420(int param_1);
extern void __fastcall FUN_10d38420(...);
void __fastcall FUN_10d38450(int param_1);
extern void __fastcall FUN_10d38450(...);
void __fastcall FUN_10d38510(int param_1);
extern void __fastcall FUN_10d38510(...);
void __fastcall FUN_10d386f0(int param_1);
extern void __fastcall FUN_10d386f0(...);
void __fastcall FUN_10d389c0(int param_1);
extern void __fastcall FUN_10d389c0(...);
void __fastcall FUN_10d38a40(int param_1);
extern void __fastcall FUN_10d38a40(...);
void __fastcall FUN_10d38a70(int param_1);
extern void __fastcall FUN_10d38a70(...);
void __fastcall FUN_10d38aa0(int param_1);
extern void __fastcall FUN_10d38aa0(...);
undefined4 __fastcall FUN_10d39fa0(int *param_1);
extern undefined4 __fastcall FUN_10d39fa0(...);
uint __fastcall FUN_10d3a8f0(int param_1);
extern uint __fastcall FUN_10d3a8f0(...);
void __thiscall FUN_10d3b670(int param_1);
void __thiscall FUN_10d3b6a0(int param_1);
undefined2 __fastcall FUN_10d3c3a0(int param_1);
extern undefined2 __fastcall FUN_10d3c3a0(...);
undefined4 __fastcall FUN_10d3c470(int param_1);
extern undefined4 __fastcall FUN_10d3c470(...);
SCStr * __thiscall FUN_10d3c4f0(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10d3c540(int param_1,SCStr *param_2);
void __fastcall FUN_10d3c9b0(int param_1);
extern void __fastcall FUN_10d3c9b0(...);
void FUN_10d3ccf0(int param_1);
extern void FUN_10d3ccf0(...);
void __thiscall FUN_10d3cd10(int param_1,int param_2);
undefined4 __fastcall FUN_10d3f250(int param_1);
extern undefined4 __fastcall FUN_10d3f250(...);
undefined4 __fastcall FUN_10d3f7a0(int param_1);
extern undefined4 __fastcall FUN_10d3f7a0(...);
int * __thiscall FUN_10d3f800(int param_1,int *param_2,uint param_3);
undefined4 __fastcall FUN_10d3fd00(int param_1);
extern undefined4 __fastcall FUN_10d3fd00(...);
undefined4 __fastcall FUN_10d3ff90(int param_1);
extern undefined4 __fastcall FUN_10d3ff90(...);
uint __fastcall FUN_10d40010(int param_1);
extern uint __fastcall FUN_10d40010(...);
void __thiscall FUN_10d40090(int param_1,int param_2);
void __thiscall FUN_10d40250(int param_1,int param_2);
void __thiscall FUN_10d40290(int param_1,int param_2);
void __thiscall FUN_10d402c0(int param_1,int param_2);
uint __fastcall FUN_10d422d0(int param_1);
extern uint __fastcall FUN_10d422d0(...);
void __thiscall FUN_10d440e0(int param_1,undefined4 param_2,SCStr *param_3);
undefined4 __fastcall FUN_10d44fa0(int param_1);
extern undefined4 __fastcall FUN_10d44fa0(...);
undefined4 __fastcall FUN_10d44fc0(int param_1);
extern undefined4 __fastcall FUN_10d44fc0(...);
undefined4 __fastcall FUN_10d44fe0(int param_1);
extern undefined4 __fastcall FUN_10d44fe0(...);
undefined4 __fastcall FUN_10d45e50(int param_1);
extern undefined4 __fastcall FUN_10d45e50(...);
undefined4 __fastcall FUN_10d45e70(int param_1);
extern undefined4 __fastcall FUN_10d45e70(...);
undefined4 __fastcall FUN_10d45e90(int param_1);
extern undefined4 __fastcall FUN_10d45e90(...);
int * __thiscall FUN_10d45eb0(int param_1,int *param_2,uint param_3);
undefined4 __fastcall FUN_10d462d0(int param_1);
extern undefined4 __fastcall FUN_10d462d0(...);
undefined4 __fastcall FUN_10d462f0(int param_1);
extern undefined4 __fastcall FUN_10d462f0(...);
undefined4 __fastcall FUN_10d46310(int param_1);
extern undefined4 __fastcall FUN_10d46310(...);
undefined4 __fastcall FUN_10d46760(int param_1);
extern undefined4 __fastcall FUN_10d46760(...);
undefined4 __fastcall FUN_10d46780(int param_1);
extern undefined4 __fastcall FUN_10d46780(...);
undefined4 __fastcall FUN_10d467a0(int param_1);
extern undefined4 __fastcall FUN_10d467a0(...);
void __fastcall FUN_10d46830(int param_1);
extern void __fastcall FUN_10d46830(...);
void __fastcall FUN_10d468e0(int param_1);
extern void __fastcall FUN_10d468e0(...);
void __fastcall FUN_10d49e60(int param_1);
extern void __fastcall FUN_10d49e60(...);
uint __fastcall FUN_10d49e90(int param_1);
extern uint __fastcall FUN_10d49e90(...);
uint __fastcall FUN_10d49eb0(int param_1);
extern uint __fastcall FUN_10d49eb0(...);
uint __fastcall FUN_10d49ed0(int param_1);
extern uint __fastcall FUN_10d49ed0(...);
void __fastcall FUN_10d4b930(int *param_1);
extern void __fastcall FUN_10d4b930(...);
undefined4 FUN_10d4f3a0(int param_1);
extern undefined4 FUN_10d4f3a0(...);
SCStr * __thiscall FUN_10d4f570(int param_1,SCStr *param_2);
undefined1 __fastcall FUN_10d507d0(int param_1);
extern undefined1 __fastcall FUN_10d507d0(...);
undefined4 __fastcall FUN_10d50800(int param_1);
extern undefined4 __fastcall FUN_10d50800(...);
void __thiscall FUN_10d50d00(int param_1,undefined4 param_2);
void __thiscall FUN_10d515e0(int param_1,undefined4 param_2);
SCStr * __thiscall FUN_10d51bf0(int param_1,SCStr *param_2);
void __fastcall FUN_10d53b70(int *param_1);
extern void __fastcall FUN_10d53b70(...);
void __thiscall FUN_10d540a0(undefined4 *param_1,undefined4 param_2,SCStr *param_3);
void __thiscall FUN_10d54390(int param_1,undefined4 *param_2);
void __thiscall FUN_10d543b0(int param_1,undefined4 *param_2);
void FUN_10d54410(int param_1,int param_2);
extern void FUN_10d54410(...);
void __thiscall FUN_10d54440(int param_1,undefined4 param_2,SCStr *param_3);
void __thiscall FUN_10d545a0(int param_1,undefined4 *param_2);
void __thiscall FUN_10d545c0(int param_1,undefined4 *param_2);
void __fastcall FUN_10d54a10(int *param_1);
extern void __fastcall FUN_10d54a10(...);
void FUN_10d54a50(int param_1,int param_2);
extern void FUN_10d54a50(...);
undefined4 __fastcall FUN_10d54d40(int param_1);
extern undefined4 __fastcall FUN_10d54d40(...);
undefined4 __fastcall FUN_10d553a0(int param_1);
extern undefined4 __fastcall FUN_10d553a0(...);
undefined4 FUN_10d554c0(int param_1);
extern undefined4 FUN_10d554c0(...);
SCStr * FUN_10d554f0(SCStr *param_1,int param_2,undefined4 param_3);
extern SCStr * FUN_10d554f0(...);
undefined4 __fastcall FUN_10d55ac0(int param_1);
extern undefined4 __fastcall FUN_10d55ac0(...);
undefined4 __fastcall FUN_10d56df0(int param_1);
extern undefined4 __fastcall FUN_10d56df0(...);
void __fastcall FUN_10d57bf0(int param_1);
extern void __fastcall FUN_10d57bf0(...);
uint __fastcall FUN_10d58c00(int param_1);
extern uint __fastcall FUN_10d58c00(...);
void __thiscall FUN_10d59ad0(int param_1,undefined4 *param_2);
void __thiscall FUN_10d59be0(int param_1,undefined4 *param_2);
uint __fastcall FUN_10d59c40(int param_1);
extern uint __fastcall FUN_10d59c40(...);
void __fastcall FUN_10d59e20(int param_1);
extern void __fastcall FUN_10d59e20(...);
undefined4 __thiscall FUN_10d59ee0(int param_1,undefined4 param_2);
undefined4 __fastcall FUN_10d59f20(int param_1);
extern undefined4 __fastcall FUN_10d59f20(...);
undefined4 __fastcall FUN_10d59f40(int param_1);
extern undefined4 __fastcall FUN_10d59f40(...);
undefined4 __fastcall FUN_10d5a0c0(int param_1);
extern undefined4 __fastcall FUN_10d5a0c0(...);
undefined4 __fastcall FUN_10d5a1b0(int param_1);
extern undefined4 __fastcall FUN_10d5a1b0(...);
undefined4 __fastcall FUN_10d5a1e0(int param_1);
extern undefined4 __fastcall FUN_10d5a1e0(...);
undefined4 __fastcall FUN_10d5a200(int param_1);
extern undefined4 __fastcall FUN_10d5a200(...);
undefined4 __fastcall FUN_10d5a220(int param_1);
extern undefined4 __fastcall FUN_10d5a220(...);
SCStr * __thiscall FUN_10d5a240(int param_1,SCStr *param_2,undefined4 param_3,undefined4 param_4);
undefined4 __fastcall FUN_10d5a300(int param_1);
extern undefined4 __fastcall FUN_10d5a300(...);
undefined4 __fastcall FUN_10d5a320(int param_1);
extern undefined4 __fastcall FUN_10d5a320(...);
SCStr * __thiscall FUN_10d5a340(int param_1,SCStr *param_2,undefined4 param_3);
SCStr * __thiscall FUN_10d5a3b0(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10d5a430(int param_1,SCStr *param_2,undefined4 param_3);
uint __fastcall FUN_10d5a4e0(int param_1);
extern uint __fastcall FUN_10d5a4e0(...);
uint __fastcall FUN_10d5a700(int param_1);
extern uint __fastcall FUN_10d5a700(...);
uint __fastcall FUN_10d5a720(int param_1);
extern uint __fastcall FUN_10d5a720(...);
uint __fastcall FUN_10d5a740(int param_1);
extern uint __fastcall FUN_10d5a740(...);
uint __fastcall FUN_10d5a760(int param_1);
extern uint __fastcall FUN_10d5a760(...);
uint __fastcall FUN_10d5a780(int param_1);
extern uint __fastcall FUN_10d5a780(...);
uint __fastcall FUN_10d5a7e0(int param_1);
extern uint __fastcall FUN_10d5a7e0(...);
uint __fastcall FUN_10d5a800(int param_1);
extern uint __fastcall FUN_10d5a800(...);
undefined4 __fastcall FUN_10d5a910(int param_1);
extern undefined4 __fastcall FUN_10d5a910(...);
void __fastcall FUN_10d5a960(int param_1);
extern void __fastcall FUN_10d5a960(...);
uint __fastcall FUN_10d5aa70(int param_1);
extern uint __fastcall FUN_10d5aa70(...);
void __fastcall FUN_10d5add0(int param_1);
extern void __fastcall FUN_10d5add0(...);
void __fastcall FUN_10d5adf0(int param_1);
extern void __fastcall FUN_10d5adf0(...);
uint __fastcall FUN_10d5ae10(int param_1);
extern uint __fastcall FUN_10d5ae10(...);
uint __fastcall FUN_10d5ae30(int param_1);
extern uint __fastcall FUN_10d5ae30(...);
uint __fastcall FUN_10d5b120(int param_1);
extern uint __fastcall FUN_10d5b120(...);
void __fastcall FUN_10d5e1b0(int *param_1);
extern void __fastcall FUN_10d5e1b0(...);
void FUN_10d5e990(int param_1,int param_2);
extern void FUN_10d5e990(...);
void FUN_10d5ed90(int param_1);
extern void FUN_10d5ed90(...);
void FUN_10d5efd0(int param_1,int param_2);
extern void FUN_10d5efd0(...);
void FUN_10d5f020(undefined4 param_1,SCStr *param_2);
extern void FUN_10d5f020(...);
int __fastcall FUN_10d5f4d0(int param_1);
extern int __fastcall FUN_10d5f4d0(...);
undefined4 FUN_10d5f500(int param_1);
extern undefined4 FUN_10d5f500(...);
SCStr * FUN_10d5f520(SCStr *param_1,int param_2);
extern SCStr * FUN_10d5f520(...);
undefined4 FUN_10d5fc00(int param_1);
extern undefined4 FUN_10d5fc00(...);
undefined4 __fastcall FUN_10d61910(int param_1);
extern undefined4 __fastcall FUN_10d61910(...);
undefined4 __fastcall FUN_10d61e50(int param_1);
extern undefined4 __fastcall FUN_10d61e50(...);
int * __thiscall FUN_10d61e70(int *param_1,int *param_2,uint param_3);
undefined4 __fastcall FUN_10d62490(int param_1);
extern undefined4 __fastcall FUN_10d62490(...);
undefined4 __fastcall FUN_10d63300(int param_1);
extern undefined4 __fastcall FUN_10d63300(...);
void __fastcall FUN_10d634d0(int param_1);
extern void __fastcall FUN_10d634d0(...);
uint __fastcall FUN_10d638e0(int param_1);
extern uint __fastcall FUN_10d638e0(...);
void __thiscall FUN_10d652f0(int param_1,undefined4 *param_2);
void __thiscall FUN_10d65310(int param_1,undefined4 *param_2);
void __thiscall FUN_10d653c0(int param_1,undefined4 *param_2);
void __thiscall FUN_10d653e0(int param_1,undefined4 *param_2);
int * __thiscall FUN_10d666f0(int *param_1,int *param_2,uint param_3);
SCStr * FUN_10d668e0(SCStr *param_1,int param_2);
extern SCStr * FUN_10d668e0(...);
undefined4 __fastcall FUN_10d67100(int param_1);
extern undefined4 __fastcall FUN_10d67100(...);
void FUN_10d67eb0(int param_1);
extern void FUN_10d67eb0(...);
int __thiscall FUN_10d685b0(int *param_1,uint *param_2);
undefined4 * __fastcall FUN_10d68a40(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10d68a40(...);
int __fastcall FUN_10d6d4c0(int param_1);
extern int __fastcall FUN_10d6d4c0(...);
undefined4 __thiscall FUN_10d6d850(int param_1,int param_2);
SCStr * __thiscall FUN_10d6d880(int param_1,SCStr *param_2,int param_3,undefined4 param_4);
void __thiscall FUN_10d70fc0(int *param_1,undefined4 param_2);
void __thiscall FUN_10d71000(int *param_1,undefined4 param_2);
undefined4 __fastcall FUN_10d71620(int param_1);
extern undefined4 __fastcall FUN_10d71620(...);
void FUN_10d73f00(int param_1);
extern void FUN_10d73f00(...);
void __fastcall FUN_10d755b0(int *param_1);
extern void __fastcall FUN_10d755b0(...);
void __fastcall FUN_10d755e0(int *param_1);
extern void __fastcall FUN_10d755e0(...);
void __fastcall FUN_10d75610(int *param_1);
extern void __fastcall FUN_10d75610(...);
void __fastcall FUN_10d75640(int *param_1);
extern void __fastcall FUN_10d75640(...);
void __fastcall FUN_10d75670(int *param_1);
extern void __fastcall FUN_10d75670(...);
void __fastcall FUN_10d756a0(int *param_1);
extern void __fastcall FUN_10d756a0(...);
int * __fastcall FUN_10d75dc0(int *param_1);
extern int * __fastcall FUN_10d75dc0(...);
int * __fastcall FUN_10d75df0(int *param_1);
extern int * __fastcall FUN_10d75df0(...);
int * __fastcall FUN_10d75e20(int *param_1);
extern int * __fastcall FUN_10d75e20(...);
void __fastcall FUN_10d766e0(int *param_1);
extern void __fastcall FUN_10d766e0(...);
void __fastcall FUN_10d76710(int *param_1);
extern void __fastcall FUN_10d76710(...);
void __fastcall FUN_10d76740(int *param_1);
extern void __fastcall FUN_10d76740(...);
char __fastcall FUN_10d774f0(int param_1);
extern char __fastcall FUN_10d774f0(...);
void __fastcall FUN_10d77940(int param_1);
extern void __fastcall FUN_10d77940(...);
void FUN_10d77b40(void);
extern void FUN_10d77b40(...);
bool __fastcall FUN_10d79fc0(int param_1);
extern bool __fastcall FUN_10d79fc0(...);
void FUN_10d7a4a0(void);
extern void FUN_10d7a4a0(...);
undefined4 * __thiscall FUN_10d87c20(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
int __fastcall FUN_10d893e0(int param_1);
extern int __fastcall FUN_10d893e0(...);
void FUN_10d8ce00(void);
extern void FUN_10d8ce00(...);
undefined4 __thiscall FUN_10d8d4f0(undefined4 param_1,byte param_2);
void __fastcall FUN_10d97510(int *param_1);
extern void __fastcall FUN_10d97510(...);
void __fastcall FUN_10d9bb70(int *param_1);
extern void __fastcall FUN_10d9bb70(...);
int __thiscall FUN_10d9c780(int param_1,int param_2);
int __thiscall FUN_10d9ed50(int *param_1,int *param_2);
undefined4 * __fastcall FUN_10d9f530(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10d9f530(...);
undefined4 FUN_10da1830(void);
extern undefined4 FUN_10da1830(...);
bool FUN_10da1e80(void);
extern bool FUN_10da1e80(...);
undefined4 * __fastcall FUN_10da4720(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10da4720(...);
void __fastcall FUN_10da5040(int *param_1);
extern void __fastcall FUN_10da5040(...);
void __fastcall FUN_10da50a0(int *param_1);
extern void __fastcall FUN_10da50a0(...);
int __thiscall FUN_10da5810(int param_1,byte param_2);
void __thiscall FUN_10da5bf0(int param_1,char param_2);
void __thiscall FUN_10da5c40(int param_1,undefined4 *param_2,undefined4 param_3);
void __fastcall FUN_10da5d90(int *param_1);
extern void __fastcall FUN_10da5d90(...);
void __thiscall FUN_10da6880(int param_1,undefined4 param_2,undefined4 param_3);
uint __fastcall FUN_10da6b80(int param_1);
extern uint __fastcall FUN_10da6b80(...);
undefined4 __thiscall FUN_10da6c80(int *param_1,undefined4 param_2);
uint __fastcall FUN_10da7060(int param_1);
extern uint __fastcall FUN_10da7060(...);
undefined4 __fastcall FUN_10da7080(int param_1);
extern undefined4 __fastcall FUN_10da7080(...);
undefined4 __fastcall FUN_10da71e0(int param_1);
extern undefined4 __fastcall FUN_10da71e0(...);
undefined4 __fastcall FUN_10da73d0(int *param_1);
extern undefined4 __fastcall FUN_10da73d0(...);
void __fastcall FUN_10da73f0(int param_1);
extern void __fastcall FUN_10da73f0(...);
void __fastcall FUN_10da7430(int param_1);
extern void __fastcall FUN_10da7430(...);
void __fastcall FUN_10da7460(int param_1);
extern void __fastcall FUN_10da7460(...);
void __fastcall FUN_10da7490(int param_1);
extern void __fastcall FUN_10da7490(...);
void __fastcall FUN_10da74c0(int param_1);
extern void __fastcall FUN_10da74c0(...);
void __fastcall FUN_10da74f0(int param_1);
extern void __fastcall FUN_10da74f0(...);
undefined4 __thiscall FUN_10da7930(undefined4 param_1,undefined4 param_2);
void FUN_10da7e10(int param_1);
extern void FUN_10da7e10(...);
undefined4 __fastcall FUN_10da9750(int param_1);
extern undefined4 __fastcall FUN_10da9750(...);
void __fastcall FUN_10db2270(int *param_1);
extern void __fastcall FUN_10db2270(...);
void __fastcall FUN_10db22c0(int *param_1);
extern void __fastcall FUN_10db22c0(...);
void __fastcall FUN_10db2460(int *param_1);
extern void __fastcall FUN_10db2460(...);
undefined4 * __thiscall FUN_10db9020(undefined4 *param_1,byte param_2);
undefined4 * __thiscall FUN_10db9060(undefined4 *param_1,byte param_2);
undefined4 * __thiscall FUN_10db92a0(undefined4 *param_1,byte param_2);
void __thiscall FUN_10dbb680(int *param_1,int param_2);
void FUN_10dbd9b0(int param_1,int param_2);
extern void FUN_10dbd9b0(...);
undefined4 __fastcall FUN_10dc3e30(int param_1);
extern undefined4 __fastcall FUN_10dc3e30(...);
undefined4 * __thiscall FUN_10dcb000(undefined4 *param_1,byte param_2);
undefined4 * __thiscall FUN_10dcb040(undefined4 *param_1,byte param_2);
void __fastcall FUN_10dcdda0(int *param_1);
extern void __fastcall FUN_10dcdda0(...);
void __thiscall FUN_10dd2230(int param_1,undefined4 *param_2);
int __fastcall FUN_10dd2280(int param_1);
extern int __fastcall FUN_10dd2280(...);
SCStr * __thiscall FUN_10dd2780(int *param_1,SCStr *param_2);
undefined4 __thiscall FUN_10dd2b90(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10dd3040(void);
extern undefined4 FUN_10dd3040(...);
void __fastcall FUN_10dd44c0(int param_1);
extern void __fastcall FUN_10dd44c0(...);
void __thiscall FUN_10dd5c80(int param_1,uint param_2);
void __thiscall FUN_10dd5d50(int param_1,int param_2);
int __fastcall FUN_10dd5e60(int param_1);
extern int __fastcall FUN_10dd5e60(...);
int __fastcall FUN_10dd5ea0(int param_1);
extern int __fastcall FUN_10dd5ea0(...);
void __thiscall FUN_10dd6680(int *param_1,undefined4 param_2);
void __thiscall FUN_10dd66b0(int *param_1,undefined4 param_2);
int __thiscall FUN_10dd67a0(int *param_1,uint *param_2);
int __thiscall FUN_10dd67e0(int *param_1,uint *param_2);
undefined4 * __fastcall FUN_10dd7220(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10dd7220(...);
undefined4 * __fastcall FUN_10dd7260(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10dd7260(...);
void __fastcall FUN_10dd7f00(int *param_1);
extern void __fastcall FUN_10dd7f00(...);
void __fastcall FUN_10dd7f30(int *param_1);
extern void __fastcall FUN_10dd7f30(...);
void __fastcall FUN_10dd7f90(int param_1);
extern void __fastcall FUN_10dd7f90(...);
void __fastcall FUN_10dd8000(int *param_1);
extern void __fastcall FUN_10dd8000(...);
void __fastcall FUN_10dd8030(int *param_1);
extern void __fastcall FUN_10dd8030(...);
undefined4 __thiscall FUN_10dd8a80(undefined4 param_1,byte param_2);
void __thiscall FUN_10de5f80(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5, short param_6);
undefined4 * __fastcall FUN_10de9cd0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10de9cd0(...);
void FUN_10de9dd0(void);
extern void FUN_10de9dd0(...);
int __thiscall FUN_10dec700(int *param_1,undefined4 param_2);
undefined4 * __fastcall FUN_10dee260(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10dee260(...);
undefined4 * __fastcall FUN_10deef20(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10deef20(...);
void __fastcall FUN_10deefc0(undefined4 *param_1);
extern void __fastcall FUN_10deefc0(...);
void __fastcall FUN_10deeff0(int param_1);
extern void __fastcall FUN_10deeff0(...);
bool __fastcall FUN_10def6f0(undefined4 param_1);
extern bool __fastcall FUN_10def6f0(...);
undefined4 __thiscall FUN_10def940(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10defb40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
bool __fastcall FUN_10df0700(undefined4 param_1);
extern bool __fastcall FUN_10df0700(...);
bool __fastcall FUN_10df1160(undefined4 param_1);
extern bool __fastcall FUN_10df1160(...);
void __thiscall FUN_10df15a0(int param_1,undefined4 param_2);
uint FUN_10df16f0(undefined4 param_1,int param_2);
extern uint FUN_10df16f0(...);
undefined4 __fastcall FUN_10df2dc0(int *param_1);
extern undefined4 __fastcall FUN_10df2dc0(...);
undefined4 __fastcall FUN_10df2df0(int param_1);
extern undefined4 __fastcall FUN_10df2df0(...);
undefined4 __fastcall FUN_10df2e20(int param_1);
extern undefined4 __fastcall FUN_10df2e20(...);
void __thiscall FUN_10df3190(int param_1,undefined4 param_2);
uint __fastcall FUN_10df3eb0(uint *param_1);
extern uint __fastcall FUN_10df3eb0(...);
uint __fastcall FUN_10df3ed0(uint *param_1);
extern uint __fastcall FUN_10df3ed0(...);
void __fastcall FUN_10dfe620(int *param_1);
extern void __fastcall FUN_10dfe620(...);
int FUN_10e00af0(undefined4 param_1,undefined4 param_2);
extern int FUN_10e00af0(...);
undefined1 FUN_10e01da0(SCStr *param_1);
extern undefined1 FUN_10e01da0(...);
undefined4 * __fastcall FUN_10e0bf10(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10e0bf10(...);
undefined4 * __fastcall FUN_10e0bf50(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10e0bf50(...);
int FUN_10e0d650(int *param_1);
extern int FUN_10e0d650(...);
undefined4 FUN_10e0eb00(int *param_1);
extern undefined4 FUN_10e0eb00(...);
undefined4 FUN_10e0eb50(SCStr *param_1);
extern undefined4 FUN_10e0eb50(...);
undefined4 FUN_10e10e20(SCStr *param_1);
extern undefined4 FUN_10e10e20(...);
undefined4 __thiscall FUN_10e10e70(int param_1,undefined4 param_2);
void FUN_10e11fa0(undefined4 param_1);
extern void FUN_10e11fa0(...);
void FUN_10e120a0(undefined4 param_1);
extern void FUN_10e120a0(...);
undefined4 __fastcall FUN_10e15150(int param_1);
extern undefined4 __fastcall FUN_10e15150(...);
undefined1 __fastcall FUN_10e151c0(int param_1);
extern undefined1 __fastcall FUN_10e151c0(...);
undefined1 __fastcall FUN_10e15210(int param_1);
extern undefined1 __fastcall FUN_10e15210(...);
void __fastcall FUN_10e15650(int param_1);
extern void __fastcall FUN_10e15650(...);
void __fastcall FUN_10e158c0(int param_1);
extern void __fastcall FUN_10e158c0(...);
undefined4 * __fastcall FUN_10e16b00(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e16b00(...);
undefined4 * __fastcall FUN_10e16b40(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e16b40(...);
void FUN_10e16b80(void);
extern void FUN_10e16b80(...);
undefined4 __fastcall FUN_10e19980(int param_1);
extern undefined4 __fastcall FUN_10e19980(...);
undefined4 __fastcall FUN_10e19c70(int param_1);
extern undefined4 __fastcall FUN_10e19c70(...);
undefined4 __thiscall FUN_10e19ca0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10e19cf0(int param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10e1eb40(int param_1);
extern void __fastcall FUN_10e1eb40(...);
void __fastcall FUN_10e1eb70(int param_1);
extern void __fastcall FUN_10e1eb70(...);
void __fastcall FUN_10e1eba0(int param_1);
extern void __fastcall FUN_10e1eba0(...);
undefined4 __fastcall FUN_10e1ef50(int param_1);
extern undefined4 __fastcall FUN_10e1ef50(...);
undefined4 __fastcall FUN_10e1f010(int *param_1);
extern undefined4 __fastcall FUN_10e1f010(...);
undefined1 FUN_10e1f040(SCStr *param_1);
extern undefined1 FUN_10e1f040(...);
void __fastcall FUN_10e1f6f0(int *param_1);
extern void __fastcall FUN_10e1f6f0(...);
void __fastcall FUN_10e1f770(int param_1);
extern void __fastcall FUN_10e1f770(...);
void __fastcall FUN_10e1f7b0(int param_1);
extern void __fastcall FUN_10e1f7b0(...);
void __fastcall FUN_10e1fd00(int param_1);
extern void __fastcall FUN_10e1fd00(...);
undefined4 * __thiscall FUN_10e23140(undefined4 *param_1,undefined4 param_2);
undefined1 __fastcall FUN_10e238b0(int param_1);
extern undefined1 __fastcall FUN_10e238b0(...);
undefined1 __fastcall FUN_10e238e0(int param_1);
extern undefined1 __fastcall FUN_10e238e0(...);
undefined4 * __fastcall FUN_10e239c0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e239c0(...);
undefined4 __fastcall FUN_10e24220(int param_1);
extern undefined4 __fastcall FUN_10e24220(...);
undefined4 __fastcall FUN_10e24300(int param_1);
extern undefined4 __fastcall FUN_10e24300(...);
undefined4 __thiscall FUN_10e24330(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10e24380(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_10e24930(int param_1);
extern undefined4 __fastcall FUN_10e24930(...);
undefined4 __fastcall FUN_10e24960(int *param_1);
extern undefined4 __fastcall FUN_10e24960(...);
undefined1 FUN_10e24990(SCStr *param_1);
extern undefined1 FUN_10e24990(...);
void __fastcall FUN_10e24a70(int *param_1);
extern void __fastcall FUN_10e24a70(...);
void __fastcall FUN_10e27410(int *param_1);
extern void __fastcall FUN_10e27410(...);
void __fastcall FUN_10e27440(int *param_1);
extern void __fastcall FUN_10e27440(...);
void __fastcall FUN_10e27470(int *param_1);
extern void __fastcall FUN_10e27470(...);
void __fastcall FUN_10e274a0(int *param_1);
extern void __fastcall FUN_10e274a0(...);
void __fastcall FUN_10e274d0(int *param_1);
extern void __fastcall FUN_10e274d0(...);
void __fastcall FUN_10e27500(int *param_1);
extern void __fastcall FUN_10e27500(...);
void __fastcall FUN_10e27530(int *param_1);
extern void __fastcall FUN_10e27530(...);
void __fastcall FUN_10e27560(int *param_1);
extern void __fastcall FUN_10e27560(...);
int * __fastcall FUN_10e28c10(int *param_1);
extern int * __fastcall FUN_10e28c10(...);
int * __fastcall FUN_10e28c40(int *param_1);
extern int * __fastcall FUN_10e28c40(...);
int * __fastcall FUN_10e28c70(int *param_1);
extern int * __fastcall FUN_10e28c70(...);
int * __fastcall FUN_10e28ca0(int *param_1);
extern int * __fastcall FUN_10e28ca0(...);
void __fastcall FUN_10e2aae0(int *param_1);
extern void __fastcall FUN_10e2aae0(...);
void __fastcall FUN_10e2ab10(int *param_1);
extern void __fastcall FUN_10e2ab10(...);
void __fastcall FUN_10e2ab40(int *param_1);
extern void __fastcall FUN_10e2ab40(...);
void __fastcall FUN_10e2ab70(int *param_1);
extern void __fastcall FUN_10e2ab70(...);
void __thiscall FUN_10e2b430(int param_1,int param_2);
void __thiscall FUN_10e2b550(int param_1,int param_2);
void __thiscall FUN_10e2bfe0(int param_1,int param_2,ushort param_3);
undefined4 __fastcall FUN_10e2ccf0(int param_1);
extern undefined4 __fastcall FUN_10e2ccf0(...);
void __fastcall FUN_10e2d310(int param_1);
extern void __fastcall FUN_10e2d310(...);
void __fastcall FUN_10e2d350(int param_1);
extern void __fastcall FUN_10e2d350(...);
void __fastcall FUN_10e2d390(int param_1);
extern void __fastcall FUN_10e2d390(...);
void __fastcall FUN_10e2d510(int param_1);
extern void __fastcall FUN_10e2d510(...);
void __fastcall FUN_10e2d550(int param_1);
extern void __fastcall FUN_10e2d550(...);
void __fastcall FUN_10e2d600(int param_1);
extern void __fastcall FUN_10e2d600(...);
void __fastcall FUN_10e2d640(int param_1);
extern void __fastcall FUN_10e2d640(...);
void __fastcall FUN_10e2d680(int param_1);
extern void __fastcall FUN_10e2d680(...);
undefined4 * __fastcall FUN_10e2d6c0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e2d6c0(...);
undefined4 * __fastcall FUN_10e2d700(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e2d700(...);
void FUN_10e2e8a0(void);
extern void FUN_10e2e8a0(...);
void FUN_10e2e8d0(void);
extern void FUN_10e2e8d0(...);
undefined4 __fastcall FUN_10e302d0(int param_1);
extern undefined4 __fastcall FUN_10e302d0(...);
undefined4 __fastcall FUN_10e30410(int param_1);
extern undefined4 __fastcall FUN_10e30410(...);
undefined4 __fastcall FUN_10e30430(int param_1);
extern undefined4 __fastcall FUN_10e30430(...);
bool __fastcall FUN_10e3e500(int param_1);
extern bool __fastcall FUN_10e3e500(...);
void __fastcall FUN_10e3e990(int param_1);
extern void __fastcall FUN_10e3e990(...);
void __fastcall FUN_10e3f460(int param_1);
extern void __fastcall FUN_10e3f460(...);
void __fastcall FUN_10e3f480(int param_1);
extern void __fastcall FUN_10e3f480(...);
void __thiscall FUN_10e46b00(int param_1,undefined4 *param_2);
undefined1 __fastcall FUN_10e48ba0(int param_1);
extern undefined1 __fastcall FUN_10e48ba0(...);
undefined1 __fastcall FUN_10e48c10(int param_1);
extern undefined1 __fastcall FUN_10e48c10(...);
undefined4 * __fastcall FUN_10e48e80(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e48e80(...);
undefined4 * __fastcall FUN_10e48ec0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e48ec0(...);
void FUN_10e49720(void);
extern void FUN_10e49720(...);
void FUN_10e4a2e0(void);
extern void FUN_10e4a2e0(...);
void FUN_10e4a310(void);
extern void FUN_10e4a310(...);
void FUN_10e4a6b0(int param_1,int param_2);
extern void FUN_10e4a6b0(...);
void FUN_10e4a700(int param_1,int param_2);
extern void FUN_10e4a700(...);
undefined4 __fastcall FUN_10e4ad50(int param_1);
extern undefined4 __fastcall FUN_10e4ad50(...);
undefined4 __fastcall FUN_10e4afb0(int param_1);
extern undefined4 __fastcall FUN_10e4afb0(...);
undefined4 __thiscall FUN_10e4afe0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10e4b030(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_10e4e2d0(int param_1);
extern undefined4 __fastcall FUN_10e4e2d0(...);
undefined4 __fastcall FUN_10e4e380(int *param_1);
extern undefined4 __fastcall FUN_10e4e380(...);
undefined1 FUN_10e4e410(SCStr *param_1);
extern undefined1 FUN_10e4e410(...);
void __fastcall FUN_10e4e530(int *param_1);
extern void __fastcall FUN_10e4e530(...);
void __thiscall FUN_10e4e590(int param_1,undefined4 *param_2);
undefined1 __fastcall FUN_10e523e0(int param_1);
extern undefined1 __fastcall FUN_10e523e0(...);
undefined1 __fastcall FUN_10e52450(int param_1);
extern undefined1 __fastcall FUN_10e52450(...);
void __fastcall FUN_10e52740(int param_1);
extern void __fastcall FUN_10e52740(...);
undefined4 * __fastcall FUN_10e53580(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e53580(...);
undefined4 * __fastcall FUN_10e535c0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e535c0(...);
undefined4 * __fastcall FUN_10e53d00(int param_1);
extern undefined4 * __fastcall FUN_10e53d00(...);
undefined4 * __fastcall FUN_10e54630(int param_1);
extern undefined4 * __fastcall FUN_10e54630(...);
undefined4 * __fastcall FUN_10e54940(int param_1);
extern undefined4 * __fastcall FUN_10e54940(...);
undefined4 __fastcall FUN_10e55520(int param_1);
extern undefined4 __fastcall FUN_10e55520(...);
undefined4 __fastcall FUN_10e55750(int param_1);
extern undefined4 __fastcall FUN_10e55750(...);
undefined4 __thiscall FUN_10e55780(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10e557d0(int param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10e58620(int param_1);
extern void __fastcall FUN_10e58620(...);
void __fastcall FUN_10e58670(int param_1);
extern void __fastcall FUN_10e58670(...);
void __fastcall FUN_10e586a0(int param_1);
extern void __fastcall FUN_10e586a0(...);
uint __fastcall FUN_10e586d0(int *param_1);
extern uint __fastcall FUN_10e586d0(...);
undefined4 __fastcall FUN_10e587e0(int param_1);
extern undefined4 __fastcall FUN_10e587e0(...);
undefined4 __fastcall FUN_10e588a0(int *param_1);
extern undefined4 __fastcall FUN_10e588a0(...);
undefined1 FUN_10e588f0(SCStr *param_1);
extern undefined1 FUN_10e588f0(...);
void __fastcall FUN_10e590b0(int *param_1);
extern void __fastcall FUN_10e590b0(...);
void __fastcall FUN_10e59100(int param_1);
extern void __fastcall FUN_10e59100(...);
void __fastcall FUN_10e59140(int param_1);
extern void __fastcall FUN_10e59140(...);
int __thiscall FUN_10e5acb0(int *param_1,uint *param_2);
undefined4 * __fastcall FUN_10e5c000(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10e5c000(...);
void __fastcall FUN_10e5e320(int *param_1);
extern void __fastcall FUN_10e5e320(...);
void __fastcall FUN_10e5e350(int *param_1);
extern void __fastcall FUN_10e5e350(...);
void __fastcall FUN_10e5e380(int *param_1);
extern void __fastcall FUN_10e5e380(...);
void __fastcall FUN_10e5e3b0(int *param_1);
extern void __fastcall FUN_10e5e3b0(...);
void __fastcall FUN_10e5e3e0(int *param_1);
extern void __fastcall FUN_10e5e3e0(...);
void __fastcall FUN_10e5e520(int *param_1);
extern void __fastcall FUN_10e5e520(...);
void __fastcall FUN_10e5e550(int *param_1);
extern void __fastcall FUN_10e5e550(...);
void __fastcall FUN_10e5e580(int *param_1);
extern void __fastcall FUN_10e5e580(...);
void __fastcall FUN_10e5e5b0(int *param_1);
extern void __fastcall FUN_10e5e5b0(...);
void __fastcall FUN_10e5e5e0(int *param_1);
extern void __fastcall FUN_10e5e5e0(...);
int * __fastcall FUN_10e5f6b0(int *param_1);
extern int * __fastcall FUN_10e5f6b0(...);
int * __fastcall FUN_10e5f6e0(int *param_1);
extern int * __fastcall FUN_10e5f6e0(...);
int * __fastcall FUN_10e5f710(int *param_1);
extern int * __fastcall FUN_10e5f710(...);
int * __fastcall FUN_10e5f740(int *param_1);
extern int * __fastcall FUN_10e5f740(...);
int * __fastcall FUN_10e5f770(int *param_1);
extern int * __fastcall FUN_10e5f770(...);
void __fastcall FUN_10e61cf0(int *param_1);
extern void __fastcall FUN_10e61cf0(...);
void __fastcall FUN_10e61d20(int *param_1);
extern void __fastcall FUN_10e61d20(...);
void __fastcall FUN_10e61d50(int *param_1);
extern void __fastcall FUN_10e61d50(...);
void __fastcall FUN_10e61d80(int *param_1);
extern void __fastcall FUN_10e61d80(...);
void __fastcall FUN_10e61db0(int *param_1);
extern void __fastcall FUN_10e61db0(...);
void __thiscall FUN_10e62aa0(int param_1,int param_2);
undefined1 __fastcall FUN_10e65ed0(int param_1);
extern undefined1 __fastcall FUN_10e65ed0(...);
undefined1 __fastcall FUN_10e66010(int param_1);
extern undefined1 __fastcall FUN_10e66010(...);
void __fastcall FUN_10e66420(int param_1);
extern void __fastcall FUN_10e66420(...);
void __fastcall FUN_10e66450(int param_1);
extern void __fastcall FUN_10e66450(...);
void __fastcall FUN_10e667a0(int param_1);
extern void __fastcall FUN_10e667a0(...);
void __fastcall FUN_10e66930(int param_1);
extern void __fastcall FUN_10e66930(...);
void __fastcall FUN_10e66ae0(int param_1);
extern void __fastcall FUN_10e66ae0(...);
undefined4 * __fastcall FUN_10e66bc0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e66bc0(...);
undefined4 * __fastcall FUN_10e66ec0(int param_1);
extern undefined4 * __fastcall FUN_10e66ec0(...);
undefined4 * __fastcall FUN_10e68250(int param_1);
extern undefined4 * __fastcall FUN_10e68250(...);
undefined4 __fastcall FUN_10e685c0(int param_1);
extern undefined4 __fastcall FUN_10e685c0(...);
void FUN_10e69350(int param_1,int param_2);
extern void FUN_10e69350(...);
undefined4 __fastcall FUN_10e698c0(int param_1);
extern undefined4 __fastcall FUN_10e698c0(...);
undefined4 __fastcall FUN_10e69cd0(int param_1);
extern undefined4 __fastcall FUN_10e69cd0(...);
undefined4 __thiscall FUN_10e69d50(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10e69dd0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_10e714a0(int param_1);
extern undefined4 __fastcall FUN_10e714a0(...);
undefined4 __fastcall FUN_10e71570(int *param_1);
extern undefined4 __fastcall FUN_10e71570(...);
undefined1 FUN_10e71680(SCStr *param_1);
extern undefined1 FUN_10e71680(...);
void __fastcall FUN_10e71f60(int *param_1);
extern void __fastcall FUN_10e71f60(...);
undefined4 __fastcall FUN_10e72180(int param_1);
extern undefined4 __fastcall FUN_10e72180(...);
void FUN_10e755c0(int param_1);
extern void FUN_10e755c0(...);
void FUN_10e755e0(int param_1);
extern void FUN_10e755e0(...);
void FUN_10e75600(int param_1);
extern void FUN_10e75600(...);
void FUN_10e75620(int param_1);
extern void FUN_10e75620(...);
void FUN_10e75640(int param_1);
extern void FUN_10e75640(...);
undefined1 __fastcall FUN_10e78060(int param_1);
extern undefined1 __fastcall FUN_10e78060(...);
undefined1 __fastcall FUN_10e78090(int param_1);
extern undefined1 __fastcall FUN_10e78090(...);
void __fastcall FUN_10e780f0(int param_1);
extern void __fastcall FUN_10e780f0(...);
void __fastcall FUN_10e78120(int param_1);
extern void __fastcall FUN_10e78120(...);
undefined4 * __fastcall FUN_10e78740(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e78740(...);
undefined4 * __fastcall FUN_10e78cf0(int param_1);
extern undefined4 * __fastcall FUN_10e78cf0(...);
undefined4 __fastcall FUN_10e795c0(int param_1);
extern undefined4 __fastcall FUN_10e795c0(...);
undefined4 __fastcall FUN_10e79730(int param_1);
extern undefined4 __fastcall FUN_10e79730(...);
undefined4 __thiscall FUN_10e79760(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10e79a40(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_10e7b410(int param_1);
extern undefined4 __fastcall FUN_10e7b410(...);
undefined4 __fastcall FUN_10e7b460(int *param_1);
extern undefined4 __fastcall FUN_10e7b460(...);
undefined1 FUN_10e7b490(SCStr *param_1);
extern undefined1 FUN_10e7b490(...);
void __fastcall FUN_10e7b570(int *param_1);
extern void __fastcall FUN_10e7b570(...);
undefined4 __fastcall FUN_10e80b00(int param_1);
extern undefined4 __fastcall FUN_10e80b00(...);
void __fastcall FUN_10e80b60(int param_1);
extern void __fastcall FUN_10e80b60(...);
void __fastcall FUN_10e80ba0(int param_1);
extern void __fastcall FUN_10e80ba0(...);
undefined4 * __fastcall FUN_10e80be0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e80be0(...);
undefined4 * __fastcall FUN_10e80c20(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e80c20(...);
void FUN_10e80e00(void);
extern void FUN_10e80e00(...);
void FUN_10e80e30(void);
extern void FUN_10e80e30(...);
void FUN_10e82e70(int param_1);
extern void FUN_10e82e70(...);
undefined1 __fastcall FUN_10e83fe0(int param_1);
extern undefined1 __fastcall FUN_10e83fe0(...);
undefined1 __fastcall FUN_10e84010(int param_1);
extern undefined1 __fastcall FUN_10e84010(...);
undefined4 * __fastcall FUN_10e84090(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e84090(...);
undefined4 * __fastcall FUN_10e840d0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e840d0(...);
undefined4 __fastcall FUN_10e84ce0(int param_1);
extern undefined4 __fastcall FUN_10e84ce0(...);
undefined4 __fastcall FUN_10e84e40(int param_1);
extern undefined4 __fastcall FUN_10e84e40(...);
undefined4 __thiscall FUN_10e84e70(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10e84ec0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_10e86660(int param_1);
extern undefined4 __fastcall FUN_10e86660(...);
undefined4 __fastcall FUN_10e866e0(int *param_1);
extern undefined4 __fastcall FUN_10e866e0(...);
undefined1 FUN_10e86710(SCStr *param_1);
extern undefined1 FUN_10e86710(...);
void __fastcall FUN_10e867f0(int *param_1);
extern void __fastcall FUN_10e867f0(...);
undefined4 * __thiscall FUN_10e86e40(undefined4 *param_1,undefined4 param_2);
undefined4 * __fastcall FUN_10e871a0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e871a0(...);
undefined4 * __fastcall FUN_10e871e0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e871e0(...);
undefined4 * __fastcall FUN_10e87520(int param_1);
extern undefined4 * __fastcall FUN_10e87520(...);
undefined4 * __fastcall FUN_10e87720(int param_1);
extern undefined4 * __fastcall FUN_10e87720(...);
undefined4 * __fastcall FUN_10e89cd0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e89cd0(...);
undefined4 * __fastcall FUN_10e89d10(undefined4 param_1);
extern undefined4 * __fastcall FUN_10e89d10(...);
undefined4 * __fastcall FUN_10e89d50(int param_1);
extern undefined4 * __fastcall FUN_10e89d50(...);
undefined4 * __fastcall FUN_10e89d90(int param_1);
extern undefined4 * __fastcall FUN_10e89d90(...);
void __fastcall FUN_10e940b0(int *param_1);
extern void __fastcall FUN_10e940b0(...);
void __fastcall FUN_10e940e0(int *param_1);
extern void __fastcall FUN_10e940e0(...);
void __fastcall FUN_10e94110(int *param_1);
extern void __fastcall FUN_10e94110(...);
void __fastcall FUN_10e94140(int *param_1);
extern void __fastcall FUN_10e94140(...);
void __fastcall FUN_10e94170(int *param_1);
extern void __fastcall FUN_10e94170(...);
void __fastcall FUN_10e941a0(int *param_1);
extern void __fastcall FUN_10e941a0(...);
void __fastcall FUN_10e941d0(int *param_1);
extern void __fastcall FUN_10e941d0(...);
void __fastcall FUN_10e94200(int *param_1);
extern void __fastcall FUN_10e94200(...);
void __fastcall FUN_10e94230(int *param_1);
extern void __fastcall FUN_10e94230(...);
void __fastcall FUN_10e94260(int *param_1);
extern void __fastcall FUN_10e94260(...);
void __fastcall FUN_10e94290(int *param_1);
extern void __fastcall FUN_10e94290(...);
void __fastcall FUN_10e942c0(int *param_1);
extern void __fastcall FUN_10e942c0(...);
int * __fastcall FUN_10e96720(int *param_1);
extern int * __fastcall FUN_10e96720(...);
int * __fastcall FUN_10e96750(int *param_1);
extern int * __fastcall FUN_10e96750(...);
int * __fastcall FUN_10e96780(int *param_1);
extern int * __fastcall FUN_10e96780(...);
int * __fastcall FUN_10e967b0(int *param_1);
extern int * __fastcall FUN_10e967b0(...);
int * __fastcall FUN_10e967e0(int *param_1);
extern int * __fastcall FUN_10e967e0(...);
int * __fastcall FUN_10e96810(int *param_1);
extern int * __fastcall FUN_10e96810(...);
void __fastcall FUN_10e99bb0(int *param_1);
extern void __fastcall FUN_10e99bb0(...);
void __fastcall FUN_10e99be0(int *param_1);
extern void __fastcall FUN_10e99be0(...);
void __fastcall FUN_10e99c10(int *param_1);
extern void __fastcall FUN_10e99c10(...);
void __fastcall FUN_10e99c40(int *param_1);
extern void __fastcall FUN_10e99c40(...);
void __fastcall FUN_10e99c70(int *param_1);
extern void __fastcall FUN_10e99c70(...);
void __fastcall FUN_10e99ca0(int *param_1);
extern void __fastcall FUN_10e99ca0(...);
void __thiscall FUN_10e9c020(int param_1,int param_2);
undefined4 * __thiscall FUN_10e9deb0(int param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_10e9dee0(int param_1,undefined4 *param_2);
SCStr * __thiscall FUN_10ea1c30(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10ea1dd0(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10ea1ec0(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10ea1f80(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10ea1fd0(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10ea2020(int param_1,SCStr *param_2);
void FUN_10ea4530(void);
extern void FUN_10ea4530(...);
int __fastcall FUN_10ea6c00(int param_1);
extern int __fastcall FUN_10ea6c00(...);
void __fastcall FUN_10ea6f20(int param_1);
extern void __fastcall FUN_10ea6f20(...);
void FUN_10ea8130(undefined4 param_1,int *param_2);
extern void FUN_10ea8130(...);
void __fastcall FUN_10eab2c0(undefined4 *param_1);
extern void __fastcall FUN_10eab2c0(...);
void __fastcall FUN_10eab2f0(undefined4 *param_1);
extern void __fastcall FUN_10eab2f0(...);
void __fastcall FUN_10eab310(int *param_1);
extern void __fastcall FUN_10eab310(...);
void __thiscall FUN_10eabdb0(int param_1,undefined4 *param_2);
void FUN_10eabdf0(int param_1,int param_2);
extern void FUN_10eabdf0(...);
void FUN_10eabe20(undefined4 *param_1);
extern void FUN_10eabe20(...);
void __thiscall FUN_10eabf30(int param_1,undefined4 *param_2);
void __fastcall FUN_10eac550(int *param_1);
extern void __fastcall FUN_10eac550(...);
void __fastcall FUN_10eac590(int *param_1);
extern void __fastcall FUN_10eac590(...);
void FUN_10eac620(int param_1,int param_2);
extern void FUN_10eac620(...);
int __fastcall FUN_10eacd00(int *param_1);
extern int __fastcall FUN_10eacd00(...);
int __fastcall FUN_10eacd20(int *param_1);
extern int __fastcall FUN_10eacd20(...);
int __fastcall FUN_10eace20(int *param_1);
extern int __fastcall FUN_10eace20(...);
undefined4 * __thiscall FUN_10eae0a0(undefined4 *param_1,undefined4 param_2);
undefined4 __fastcall FUN_10eb25f0(undefined4 param_1);
extern undefined4 __fastcall FUN_10eb25f0(...);
undefined4 __thiscall FUN_10eb2610(undefined4 param_1,undefined4 param_2);
undefined4 * __fastcall FUN_10eb26d0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10eb26d0(...);
uint __fastcall FUN_10eb3a60(uint *param_1);
extern uint __fastcall FUN_10eb3a60(...);
void __thiscall FUN_10eb3a80(int *param_1,uint param_2);
int __fastcall FUN_10eb3b50(int *param_1);
extern int __fastcall FUN_10eb3b50(...);
undefined4 FUN_10eb4160(undefined4 param_1);
extern undefined4 FUN_10eb4160(...);
int __thiscall FUN_10eb4f60(int *param_1,SCStr *param_2);
int __thiscall FUN_10eb4fb0(int *param_1,SCStr *param_2);
int __thiscall FUN_10eb5000(int *param_1,SCStr *param_2);
undefined4 * __fastcall FUN_10eb6040(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10eb6040(...);
undefined4 * __fastcall FUN_10eb6080(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10eb6080(...);
undefined4 * __fastcall FUN_10eb60c0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10eb60c0(...);
undefined4 __thiscall FUN_10eb9540(int *param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_10eba5f0(int *param_1,undefined4 param_2);
void __thiscall FUN_10ebb360(int *param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_10ebb790(int *param_1,undefined4 param_2);
void __thiscall FUN_10ebb7d0(int *param_1,undefined4 param_2);
void __thiscall FUN_10ebb810(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __thiscall FUN_10ebb850(int *param_1,int param_2);
void __thiscall FUN_10ebb890(int *param_1,int param_2,int param_3);
void __thiscall FUN_10ebb8e0(int *param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10ebba40(int *param_1);
extern void __fastcall FUN_10ebba40(...);
void __thiscall FUN_10ebba70(int *param_1,undefined4 param_2);
void __thiscall FUN_10ebbab0(int *param_1,uint param_2);
void __thiscall FUN_10ebbaf0(int *param_1,uint param_2);
void __thiscall FUN_10ebc210(int *param_1,undefined4 param_2);
void FUN_10ebc260(undefined4 param_1,undefined4 param_2);
extern void FUN_10ebc260(...);
void __thiscall FUN_10ebc2a0(int *param_1,undefined4 param_2,int *param_3);
void __thiscall FUN_10ebc5d0(int param_1,SCStr *param_2);
void __thiscall FUN_10ebfa70(int param_1,undefined4 *param_2);
undefined4 * __fastcall FUN_10ec0fb0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10ec0fb0(...);
undefined4 __fastcall FUN_10ec1d20(undefined4 param_1);
extern undefined4 __fastcall FUN_10ec1d20(...);
int __thiscall FUN_10ec35e0(int param_1,undefined4 *param_2);
int __thiscall FUN_10ec3610(int param_1,undefined4 *param_2);
undefined4 FUN_10ec67a0(SCStr *param_1);
extern undefined4 FUN_10ec67a0(...);
undefined4 FUN_10ec7200(undefined4 param_1);
extern undefined4 FUN_10ec7200(...);
void __thiscall FUN_10ec99c0(int param_1,undefined4 *param_2);
void __thiscall FUN_10ec9a10(int *param_1,uint param_2);
undefined4 * __fastcall FUN_10ed09d0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10ed09d0(...);
undefined4 FUN_10ed4080(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed4080(...);
undefined4 FUN_10ed4340(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed4340(...);
undefined4 FUN_10ed4390(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed4390(...);
undefined4 FUN_10ed43e0(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed43e0(...);
undefined4 FUN_10ed4740(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed4740(...);
undefined4 FUN_10ed4790(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed4790(...);
undefined4 FUN_10ed47e0(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed47e0(...);
undefined4 FUN_10ed4830(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed4830(...);
undefined4 FUN_10ed5e70(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed5e70(...);
undefined4 FUN_10ed5ec0(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed5ec0(...);
undefined4 FUN_10ed5f10(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed5f10(...);
undefined4 FUN_10ed8e20(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed8e20(...);
undefined4 FUN_10ed8f80(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed8f80(...);
undefined4 FUN_10ed8fd0(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed8fd0(...);
undefined4 FUN_10ed9020(undefined4 param_1,int param_2);
extern undefined4 FUN_10ed9020(...);
void __fastcall FUN_10edf8f0(int *param_1);
extern void __fastcall FUN_10edf8f0(...);
void __fastcall FUN_10edf920(int *param_1);
extern void __fastcall FUN_10edf920(...);
int * __fastcall FUN_10edfac0(int *param_1);
extern int * __fastcall FUN_10edfac0(...);
void __fastcall FUN_10edfdf0(int *param_1);
extern void __fastcall FUN_10edfdf0(...);
void __fastcall FUN_10ee1160(int param_1);
extern void __fastcall FUN_10ee1160(...);
void __thiscall FUN_10ee16d0(int param_1,int param_2,int param_3);
void __thiscall FUN_10ee1710(int param_1,int param_2,int param_3);
void __thiscall FUN_10ee1750(int param_1,int param_2,int param_3);
void __fastcall FUN_10ee2d60(int param_1);
extern void __fastcall FUN_10ee2d60(...);
void __fastcall FUN_10ee2fa0(int param_1);
extern void __fastcall FUN_10ee2fa0(...);
void __fastcall FUN_10ee2fd0(int param_1);
extern void __fastcall FUN_10ee2fd0(...);
void __fastcall FUN_10ee4150(int param_1);
extern void __fastcall FUN_10ee4150(...);
int __fastcall FUN_10ee42f0(int param_1);
extern int __fastcall FUN_10ee42f0(...);
undefined4 __fastcall FUN_10ee49c0(int param_1);
extern undefined4 __fastcall FUN_10ee49c0(...);
void __fastcall FUN_10ee7150(int param_1);
extern void __fastcall FUN_10ee7150(...);
undefined4 __fastcall FUN_10ee7510(int param_1);
extern undefined4 __fastcall FUN_10ee7510(...);
bool __fastcall FUN_10ee7f70(int param_1);
extern bool __fastcall FUN_10ee7f70(...);
void __fastcall FUN_10eebd30(int *param_1);
extern void __fastcall FUN_10eebd30(...);
void __fastcall FUN_10eebd60(int *param_1);
extern void __fastcall FUN_10eebd60(...);
void __fastcall FUN_10eebd90(int *param_1);
extern void __fastcall FUN_10eebd90(...);
void __fastcall FUN_10eebdc0(int *param_1);
extern void __fastcall FUN_10eebdc0(...);
int * __fastcall FUN_10eebed0(int *param_1);
extern int * __fastcall FUN_10eebed0(...);
int * __fastcall FUN_10eebf00(int *param_1);
extern int * __fastcall FUN_10eebf00(...);
void __fastcall FUN_10eec2f0(int *param_1);
extern void __fastcall FUN_10eec2f0(...);
void __fastcall FUN_10eec320(int *param_1);
extern void __fastcall FUN_10eec320(...);
undefined4 FUN_10eee200(SCStr *param_1);
extern undefined4 FUN_10eee200(...);
undefined4 FUN_10eee9f0(SCStr *param_1);
extern undefined4 FUN_10eee9f0(...);
int FUN_10eefae0(int *param_1);
extern int FUN_10eefae0(...);
undefined4 FUN_10eefdc0(int *param_1);
extern undefined4 FUN_10eefdc0(...);
undefined4 FUN_10eefe10(SCStr *param_1);
extern undefined4 FUN_10eefe10(...);
undefined4 FUN_10ef0990(SCStr *param_1);
extern undefined4 FUN_10ef0990(...);
char * FUN_10ef3110(char *param_1);
extern char * FUN_10ef3110(...);
int FUN_10ef4180(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int FUN_10ef4180(...);
void FUN_10ef4da0(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
extern void FUN_10ef4da0(...);
void __fastcall FUN_10ef64b0(int param_1);
extern void __fastcall FUN_10ef64b0(...);
int __thiscall FUN_10ef9850(int *param_1,int *param_2);
undefined4 * __thiscall FUN_10efdbb0(int param_1,undefined4 *param_2);
undefined4 __fastcall FUN_10f00a60(int param_1);
extern undefined4 __fastcall FUN_10f00a60(...);
void __thiscall FUN_10f01c60(int *param_1,undefined4 param_2);
void FUN_10f01ee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_10f01ee0(...);
undefined4 * __fastcall FUN_10f02150(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f02150(...);
undefined4 * __fastcall FUN_10f021f0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f021f0(...);
void __fastcall FUN_10f02df0(int *param_1);
extern void __fastcall FUN_10f02df0(...);
void __fastcall FUN_10f02e20(undefined4 *param_1);
extern void __fastcall FUN_10f02e20(...);
void __fastcall FUN_10f02ec0(int *param_1);
extern void __fastcall FUN_10f02ec0(...);
undefined4 __fastcall FUN_10f04f60(int *param_1);
extern undefined4 __fastcall FUN_10f04f60(...);
undefined1 FUN_10f04fa0(void);
extern undefined1 FUN_10f04fa0(...);
undefined4 __fastcall FUN_10f04fe0(int *param_1);
extern undefined4 __fastcall FUN_10f04fe0(...);
undefined1 FUN_10f05120(void);
extern undefined1 FUN_10f05120(...);
undefined4 __fastcall FUN_10f05160(int *param_1);
extern undefined4 __fastcall FUN_10f05160(...);
undefined1 FUN_10f05290(void);
extern undefined1 FUN_10f05290(...);
undefined1 FUN_10f052d0(void);
extern undefined1 FUN_10f052d0(...);
undefined4 __fastcall FUN_10f05330(int *param_1);
extern undefined4 __fastcall FUN_10f05330(...);
undefined1 FUN_10f054a0(void);
extern undefined1 FUN_10f054a0(...);
undefined1 FUN_10f05830(void);
extern undefined1 FUN_10f05830(...);
undefined1 __fastcall FUN_10f058f0(int param_1);
extern undefined1 __fastcall FUN_10f058f0(...);
undefined4 __fastcall FUN_10f060e0(undefined4 param_1);
extern undefined4 __fastcall FUN_10f060e0(...);
undefined4 FUN_10f06350(void);
extern undefined4 FUN_10f06350(...);
char FUN_10f06390(void);
extern char FUN_10f06390(...);
undefined4 __fastcall FUN_10f063e0(undefined4 param_1);
extern undefined4 __fastcall FUN_10f063e0(...);
undefined4 FUN_10f067b0(void);
extern undefined4 FUN_10f067b0(...);
undefined4 FUN_10f06840(void);
extern undefined4 FUN_10f06840(...);
undefined4 FUN_10f09a10(void);
extern undefined4 FUN_10f09a10(...);
undefined4 FUN_10f0b840(void);
extern undefined4 FUN_10f0b840(...);
undefined1 FUN_10f0b9a0(void);
extern undefined1 FUN_10f0b9a0(...);
undefined4 __fastcall FUN_10f0bd80(int param_1);
extern undefined4 __fastcall FUN_10f0bd80(...);
undefined4 FUN_10f11b90(undefined4 param_1);
extern undefined4 FUN_10f11b90(...);
int __thiscall FUN_10f163a0(int *param_1,SCStr *param_2);
void __thiscall FUN_10f16c50(int param_1,undefined4 *param_2);
undefined4 * __fastcall FUN_10f16f30(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f16f30(...);
int * __thiscall FUN_10f18020(int *param_1,byte param_2);
void FUN_10f19500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern void FUN_10f19500(...);
void __thiscall FUN_10f1aa30(int param_1,undefined4 *param_2);
undefined4 * __fastcall FUN_10f1bf40(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f1bf40(...);
undefined4 * __fastcall FUN_10f1bf80(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f1bf80(...);
int FUN_10f1df20(int *param_1);
extern int FUN_10f1df20(...);
int FUN_10f1df70(int *param_1);
extern int FUN_10f1df70(...);
undefined4 FUN_10f1f800(int *param_1);
extern undefined4 FUN_10f1f800(...);
undefined4 FUN_10f1f850(int *param_1);
extern undefined4 FUN_10f1f850(...);
undefined4 FUN_10f1f8a0(SCStr *param_1);
extern undefined4 FUN_10f1f8a0(...);
undefined4 FUN_10f209a0(SCStr *param_1);
extern undefined4 FUN_10f209a0(...);
uint __fastcall FUN_10f209f0(int param_1);
extern uint __fastcall FUN_10f209f0(...);
void __thiscall FUN_10f228a0(int param_1,int param_2);
undefined4 * __fastcall FUN_10f24a40(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f24a40(...);
void __fastcall FUN_10f25bc0(undefined4 *param_1);
extern void __fastcall FUN_10f25bc0(...);
void __fastcall FUN_10f25bf0(undefined4 *param_1);
extern void __fastcall FUN_10f25bf0(...);
undefined4 FUN_10f2a8e0(undefined4 param_1);
extern undefined4 FUN_10f2a8e0(...);
undefined4 FUN_10f2a900(undefined4 param_1);
extern undefined4 FUN_10f2a900(...);
undefined4 __thiscall FUN_10f2ce50(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_10f2f730(int param_1);
extern void __fastcall FUN_10f2f730(...);
undefined4 __thiscall FUN_10f372e0(int param_1,char *param_2,uint param_3);
undefined4 * __fastcall FUN_10f37e60(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f37e60(...);
int FUN_10f392b0(int *param_1);
extern int FUN_10f392b0(...);
undefined4 FUN_10f39910(int *param_1);
extern undefined4 FUN_10f39910(...);
undefined4 FUN_10f39960(SCStr *param_1);
extern undefined4 FUN_10f39960(...);
undefined4 FUN_10f3bdb0(SCStr *param_1);
extern undefined4 FUN_10f3bdb0(...);
void __thiscall FUN_10f3d660(int param_1,int param_2);
void __thiscall FUN_10f3d690(int param_1,int param_2);
void __fastcall FUN_10f3d8d0(int param_1);
extern void __fastcall FUN_10f3d8d0(...);
void __fastcall FUN_10f3d910(int param_1);
extern void __fastcall FUN_10f3d910(...);
void __fastcall FUN_10f3f550(int param_1);
extern void __fastcall FUN_10f3f550(...);
void __thiscall FUN_10f3fb40(undefined4 *param_1,undefined4 param_2);
void __fastcall FUN_10f41490(int *param_1);
extern void __fastcall FUN_10f41490(...);
void __fastcall FUN_10f414f0(int *param_1);
extern void __fastcall FUN_10f414f0(...);
void __fastcall FUN_10f41550(int *param_1);
extern void __fastcall FUN_10f41550(...);
void __fastcall FUN_10f415b0(int *param_1);
extern void __fastcall FUN_10f415b0(...);
int __fastcall FUN_10f41ba0(int *param_1);
extern int __fastcall FUN_10f41ba0(...);
void __thiscall FUN_10f41d20(int *param_1,int param_2);
void __fastcall FUN_10f420a0(int *param_1);
extern void __fastcall FUN_10f420a0(...);
undefined4 __fastcall FUN_10f42da0(int *param_1);
extern undefined4 __fastcall FUN_10f42da0(...);
void __fastcall FUN_10f42dd0(int param_1);
extern void __fastcall FUN_10f42dd0(...);
void __fastcall FUN_10f437a0(int param_1);
extern void __fastcall FUN_10f437a0(...);
void __fastcall FUN_10f44930(int *param_1);
extern void __fastcall FUN_10f44930(...);
int __fastcall FUN_10f450f0(int *param_1);
extern int __fastcall FUN_10f450f0(...);
uint __fastcall FUN_10f46d90(int *param_1);
extern uint __fastcall FUN_10f46d90(...);
void __fastcall FUN_10f47170(int *param_1);
extern void __fastcall FUN_10f47170(...);
void __fastcall FUN_10f47850(int param_1);
extern void __fastcall FUN_10f47850(...);
undefined4 FUN_10f47f80(short param_1);
extern undefined4 FUN_10f47f80(...);
void __thiscall FUN_10f47fa0(int param_1,undefined4 param_2);
void __thiscall FUN_10f499d0(int param_1,undefined4 *param_2);
int __fastcall FUN_10f4b4a0(int *param_1);
extern int __fastcall FUN_10f4b4a0(...);
int __fastcall FUN_10f4b4e0(int *param_1);
extern int __fastcall FUN_10f4b4e0(...);
void __fastcall FUN_10f4b5c0(int param_1);
extern void __fastcall FUN_10f4b5c0(...);
undefined4 __fastcall FUN_10f4b990(int param_1);
extern undefined4 __fastcall FUN_10f4b990(...);
void FUN_10f4b9c0(int param_1,int param_2);
extern void FUN_10f4b9c0(...);
int __fastcall FUN_10f4be50(int param_1);
extern int __fastcall FUN_10f4be50(...);
undefined4 __fastcall FUN_10f4c190(int param_1);
extern undefined4 __fastcall FUN_10f4c190(...);
void __fastcall FUN_10f4c1d0(int *param_1);
extern void __fastcall FUN_10f4c1d0(...);
uint __fastcall FUN_10f4c720(int param_1);
extern uint __fastcall FUN_10f4c720(...);
uint __fastcall FUN_10f4c770(int param_1);
extern uint __fastcall FUN_10f4c770(...);
undefined4 __fastcall FUN_10f4c7a0(int param_1);
extern undefined4 __fastcall FUN_10f4c7a0(...);
void __thiscall FUN_10f4c970(int param_1,undefined4 *param_2);
undefined4 * __fastcall FUN_10f4e130(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f4e130(...);
void __fastcall FUN_10f4e590(int *param_1);
extern void __fastcall FUN_10f4e590(...);
void __fastcall FUN_10f4e6f0(int param_1);
extern void __fastcall FUN_10f4e6f0(...);
int FUN_10f4ec90(undefined4 param_1);
extern int FUN_10f4ec90(...);
void FUN_10f4fa50(undefined4 param_1,SCStr *param_2);
extern void FUN_10f4fa50(...);
undefined4 __thiscall FUN_10f50750(int param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_10f518c0(int param_1,undefined4 param_2,undefined8 param_3);
void __fastcall FUN_10f52370(int *param_1);
extern void __fastcall FUN_10f52370(...);
void __fastcall FUN_10f523a0(int *param_1);
extern void __fastcall FUN_10f523a0(...);
int * __fastcall FUN_10f52570(int *param_1);
extern int * __fastcall FUN_10f52570(...);
void __fastcall FUN_10f52840(int *param_1);
extern void __fastcall FUN_10f52840(...);
int __fastcall FUN_10f637f0(int param_1);
extern int __fastcall FUN_10f637f0(...);
void __thiscall FUN_10f63e00(int param_1,SCStr *param_2,undefined1 param_3);
void __fastcall FUN_10f65ed0(int *param_1);
extern void __fastcall FUN_10f65ed0(...);
void __fastcall FUN_10f65f00(int *param_1);
extern void __fastcall FUN_10f65f00(...);
int * __fastcall FUN_10f661c0(int *param_1);
extern int * __fastcall FUN_10f661c0(...);
void __fastcall FUN_10f66710(int *param_1);
extern void __fastcall FUN_10f66710(...);
undefined4 __thiscall FUN_10f67600(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_10f67a70(void);
extern void FUN_10f67a70(...);
int __fastcall FUN_10f685d0(int param_1);
extern int __fastcall FUN_10f685d0(...);
void __thiscall FUN_10f68ab0(int param_1,undefined4 param_2,undefined8 param_3);
int __thiscall FUN_10f6b450(int *param_1,uint *param_2);
undefined4 * __fastcall FUN_10f6b980(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f6b980(...);
void __fastcall FUN_10f70bd0(int *param_1);
extern void __fastcall FUN_10f70bd0(...);
void __fastcall FUN_10f70c00(int *param_1);
extern void __fastcall FUN_10f70c00(...);
void __fastcall FUN_10f70cd0(int *param_1);
extern void __fastcall FUN_10f70cd0(...);
void __fastcall FUN_10f70d00(int *param_1);
extern void __fastcall FUN_10f70d00(...);
int * __fastcall FUN_10f71110(int *param_1);
extern int * __fastcall FUN_10f71110(...);
int __thiscall FUN_10f713b0(int param_1,byte param_2);
void __thiscall FUN_10f717d0(int param_1,char param_2);
void __thiscall FUN_10f71980(int param_1,undefined4 *param_2,ushort *param_3);
void __fastcall FUN_10f71d20(int *param_1);
extern void __fastcall FUN_10f71d20(...);
void __fastcall FUN_10f71d50(int *param_1);
extern void __fastcall FUN_10f71d50(...);
void __thiscall FUN_10f734d0(int param_1,int param_2);
undefined4 __thiscall FUN_10f74070(int param_1,undefined4 param_2,undefined4 param_3);
void __thiscall FUN_10f74150(int param_1,undefined4 param_2,undefined8 param_3);
void __fastcall FUN_10f74de0(undefined4 *param_1);
extern void __fastcall FUN_10f74de0(...);
void __fastcall FUN_10f756a0(int param_1);
extern void __fastcall FUN_10f756a0(...);
void __fastcall FUN_10f756e0(int param_1);
extern void __fastcall FUN_10f756e0(...);
undefined4 * __thiscall FUN_10f76d30(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_10f76f60(int param_1);
extern undefined4 __fastcall FUN_10f76f60(...);
int __fastcall FUN_10f782a0(int param_1);
extern int __fastcall FUN_10f782a0(...);
void __fastcall FUN_10f782e0(int param_1);
extern void __fastcall FUN_10f782e0(...);
SCStr * __thiscall FUN_10f79110(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10f79860(int param_1,SCStr *param_2);
undefined4 __thiscall FUN_10f79a70(int *param_1,undefined4 param_2);
uint __fastcall FUN_10f79c00(int param_1);
extern uint __fastcall FUN_10f79c00(...);
bool __fastcall FUN_10f79c20(int param_1);
extern bool __fastcall FUN_10f79c20(...);
undefined2 __fastcall FUN_10f79d40(int param_1);
extern undefined2 __fastcall FUN_10f79d40(...);
void __fastcall FUN_10f7ad60(int param_1);
extern void __fastcall FUN_10f7ad60(...);
void __thiscall FUN_10f7ada0(int param_1,uint param_2);
void __fastcall FUN_10f7adf0(int param_1);
extern void __fastcall FUN_10f7adf0(...);
void __fastcall FUN_10f7af60(int param_1);
extern void __fastcall FUN_10f7af60(...);
void FUN_10f7b0c0(int param_1);
extern void FUN_10f7b0c0(...);
undefined4 * __thiscall FUN_10f7b130(undefined4 *param_1,undefined4 param_2);
void __fastcall FUN_10f7b5a0(int param_1);
extern void __fastcall FUN_10f7b5a0(...);
void __fastcall FUN_10f7b5d0(int param_1);
extern void __fastcall FUN_10f7b5d0(...);
undefined4 * __thiscall FUN_10f7b600(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_10f7b900(int param_1);
extern void __fastcall FUN_10f7b900(...);
void __fastcall FUN_10f7b950(int param_1);
extern void __fastcall FUN_10f7b950(...);
void FUN_10f7c290(undefined4 *param_1,undefined4 param_2);
extern void FUN_10f7c290(...);
undefined4 * __fastcall FUN_10f7c6c0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f7c6c0(...);
void __fastcall FUN_10f82a00(int *param_1);
extern void __fastcall FUN_10f82a00(...);
void __fastcall FUN_10f82ad0(int *param_1);
extern void __fastcall FUN_10f82ad0(...);
void FUN_10f82c80(void);
extern void FUN_10f82c80(...);
void FUN_10f82ca0(void);
extern void FUN_10f82ca0(...);
void FUN_10f82cc0(void);
extern void FUN_10f82cc0(...);
void FUN_10f82cf0(void);
extern void FUN_10f82cf0(...);
void FUN_10f82d20(void);
extern void FUN_10f82d20(...);
void FUN_10f82d40(void);
extern void FUN_10f82d40(...);
void FUN_10f82d60(void);
extern void FUN_10f82d60(...);
void __fastcall FUN_10f82e10(undefined4 *param_1);
extern void __fastcall FUN_10f82e10(...);
void __fastcall FUN_10f82e40(undefined4 *param_1);
extern void __fastcall FUN_10f82e40(...);
void FUN_10f82e90(void);
extern void FUN_10f82e90(...);
void FUN_10f82eb0(void);
extern void FUN_10f82eb0(...);
int * __fastcall FUN_10f83140(int *param_1);
extern int * __fastcall FUN_10f83140(...);
void FUN_10f832d0(void);
extern void FUN_10f832d0(...);
void FUN_10f832f0(void);
extern void FUN_10f832f0(...);
void FUN_10f83310(void);
extern void FUN_10f83310(...);
void FUN_10f83340(void);
extern void FUN_10f83340(...);
void FUN_10f83360(void);
extern void FUN_10f83360(...);
void FUN_10f83380(void);
extern void FUN_10f83380(...);
void FUN_10f833a0(void);
extern void FUN_10f833a0(...);
void __fastcall FUN_10f833c0(undefined4 *param_1);
extern void __fastcall FUN_10f833c0(...);
void __fastcall FUN_10f833e0(undefined4 *param_1);
extern void __fastcall FUN_10f833e0(...);
void FUN_10f83410(void);
extern void FUN_10f83410(...);
void FUN_10f83430(void);
extern void FUN_10f83430(...);
void __fastcall FUN_10f839d0(int *param_1);
extern void __fastcall FUN_10f839d0(...);
void __fastcall FUN_10f84040(int param_1);
extern void __fastcall FUN_10f84040(...);
int __thiscall FUN_10f86b30(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __fastcall FUN_10f87ac0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f87ac0(...);
void __fastcall FUN_10f887f0(undefined4 *param_1);
extern void __fastcall FUN_10f887f0(...);
void __fastcall FUN_10f8c8e0(int param_1);
extern void __fastcall FUN_10f8c8e0(...);
void __thiscall FUN_10f8ed40(int param_1,undefined4 param_2);
undefined4 __thiscall FUN_10f8ed80(int param_1,char *param_2,uint param_3);
void __thiscall FUN_10f8f7d0(int param_1,int param_2);
void __fastcall FUN_10f8fa20(int param_1);
extern void __fastcall FUN_10f8fa20(...);
void __fastcall FUN_10f8fa50(int param_1);
extern void __fastcall FUN_10f8fa50(...);
void __fastcall FUN_10f8fa80(int param_1);
extern void __fastcall FUN_10f8fa80(...);
undefined4 * __fastcall FUN_10f8fab0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10f8fab0(...);
undefined4 * __fastcall FUN_10f8faf0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10f8faf0(...);
undefined4 * __fastcall FUN_10f8fcb0(int param_1);
extern undefined4 * __fastcall FUN_10f8fcb0(...);
undefined4 * __fastcall FUN_10f8fec0(int param_1);
extern undefined4 * __fastcall FUN_10f8fec0(...);
undefined1 __thiscall FUN_10f90020(int param_1,int param_2);
void __thiscall FUN_10f912e0(int param_1,int param_2,int param_3);
void __fastcall FUN_10f91cd0(undefined4 *param_1);
extern void __fastcall FUN_10f91cd0(...);
void __thiscall FUN_10f924f0(int param_1,int param_2);
void __fastcall FUN_10f925a0(int param_1);
extern void __fastcall FUN_10f925a0(...);
undefined4 * __fastcall FUN_10f92ab0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10f92ab0(...);
undefined4 * __fastcall FUN_10f92af0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10f92af0(...);
undefined4 * __fastcall FUN_10f92b30(int param_1);
extern undefined4 * __fastcall FUN_10f92b30(...);
undefined4 * __fastcall FUN_10f92cf0(int param_1);
extern undefined4 * __fastcall FUN_10f92cf0(...);
undefined4 * __fastcall FUN_10f92d40(int param_1);
extern undefined4 * __fastcall FUN_10f92d40(...);
undefined4 * __fastcall FUN_10f92d80(int param_1);
extern undefined4 * __fastcall FUN_10f92d80(...);
void __fastcall FUN_10f977c0(int param_1);
extern void __fastcall FUN_10f977c0(...);
undefined4 * __fastcall FUN_10f97800(undefined4 param_1);
extern undefined4 * __fastcall FUN_10f97800(...);
undefined4 * __fastcall FUN_10f97840(undefined4 param_1);
extern undefined4 * __fastcall FUN_10f97840(...);
undefined4 * __fastcall FUN_10f97890(int param_1);
extern undefined4 * __fastcall FUN_10f97890(...);
undefined4 * __fastcall FUN_10f978d0(int param_1);
extern undefined4 * __fastcall FUN_10f978d0(...);
undefined4 * __fastcall FUN_10f97910(int param_1);
extern undefined4 * __fastcall FUN_10f97910(...);
uint __fastcall FUN_10f98e90(int *param_1);
extern uint __fastcall FUN_10f98e90(...);
void FUN_10f99360(int param_1);
extern void FUN_10f99360(...);
int __thiscall FUN_10f99b60(int *param_1,uint *param_2);
undefined4 * __fastcall FUN_10f9a6f0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f9a6f0(...);
undefined4 * __fastcall FUN_10f9a730(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10f9a730(...);
undefined1 __fastcall FUN_10f9dbf0(int param_1);
extern undefined1 __fastcall FUN_10f9dbf0(...);
undefined1 __fastcall FUN_10f9dc40(int param_1);
extern undefined1 __fastcall FUN_10f9dc40(...);
undefined4 * __fastcall FUN_10f9def0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10f9def0(...);
undefined4 * __fastcall FUN_10f9df30(undefined4 param_1);
extern undefined4 * __fastcall FUN_10f9df30(...);
undefined4 * __fastcall FUN_10f9df70(int param_1);
extern undefined4 * __fastcall FUN_10f9df70(...);
undefined4 * __fastcall FUN_10f9e070(int param_1);
extern undefined4 * __fastcall FUN_10f9e070(...);
undefined4 * __fastcall FUN_10f9e360(int param_1);
extern undefined4 * __fastcall FUN_10f9e360(...);
undefined4 __fastcall FUN_10fa01c0(int param_1);
extern undefined4 __fastcall FUN_10fa01c0(...);
undefined4 __fastcall FUN_10fa0410(int param_1);
extern undefined4 __fastcall FUN_10fa0410(...);
undefined4 __thiscall FUN_10fa0450(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10fa04b0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_10fa3450(int param_1);
extern undefined4 __fastcall FUN_10fa3450(...);
undefined4 __fastcall FUN_10fa34a0(int *param_1);
extern undefined4 __fastcall FUN_10fa34a0(...);
undefined1 FUN_10fa34d0(SCStr *param_1);
extern undefined1 FUN_10fa34d0(...);
void __fastcall FUN_10fa3670(int *param_1);
extern void __fastcall FUN_10fa3670(...);
void __fastcall FUN_10fa3e60(int param_1);
extern void __fastcall FUN_10fa3e60(...);
undefined1 __fastcall FUN_10fa5c20(int param_1);
extern undefined1 __fastcall FUN_10fa5c20(...);
undefined1 __fastcall FUN_10fa5c50(int param_1);
extern undefined1 __fastcall FUN_10fa5c50(...);
void __fastcall FUN_10fa5cc0(int param_1);
extern void __fastcall FUN_10fa5cc0(...);
undefined4 * __fastcall FUN_10fa5d10(undefined4 param_1);
extern undefined4 * __fastcall FUN_10fa5d10(...);
undefined4 * __fastcall FUN_10fa5d50(undefined4 param_1);
extern undefined4 * __fastcall FUN_10fa5d50(...);
undefined4 * __fastcall FUN_10fa6870(int param_1);
extern undefined4 * __fastcall FUN_10fa6870(...);
undefined4 * __fastcall FUN_10fa68b0(int param_1);
extern undefined4 * __fastcall FUN_10fa68b0(...);
undefined4 __fastcall FUN_10fa7690(int param_1);
extern undefined4 __fastcall FUN_10fa7690(...);
undefined4 __fastcall FUN_10fa7840(int param_1);
extern undefined4 __fastcall FUN_10fa7840(...);
undefined4 __thiscall FUN_10fa7880(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10fa7ba0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_10fa9a40(int param_1);
extern undefined4 __fastcall FUN_10fa9a40(...);
undefined4 __fastcall FUN_10fa9a90(int *param_1);
extern undefined4 __fastcall FUN_10fa9a90(...);
undefined1 FUN_10fa9ac0(SCStr *param_1);
extern undefined1 FUN_10fa9ac0(...);
void __fastcall FUN_10fa9dc0(int *param_1);
extern void __fastcall FUN_10fa9dc0(...);
int __thiscall FUN_10fab430(int param_1,undefined4 param_2,undefined4 param_3);
int __thiscall FUN_10fab470(int param_1,undefined4 param_2,undefined4 param_3);
int __thiscall FUN_10fab4b0(int param_1,undefined4 param_2,undefined4 param_3);
int __thiscall FUN_10fab4f0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __fastcall FUN_10fae4c0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10fae4c0(...);
undefined4 * __fastcall FUN_10fae4f0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10fae4f0(...);
undefined4 * __fastcall FUN_10fae520(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10fae520(...);
void __fastcall FUN_10fafca0(int param_1);
extern void __fastcall FUN_10fafca0(...);
int FUN_10fb1100(undefined4 param_1);
extern int FUN_10fb1100(...);
int FUN_10fb1130(undefined4 param_1);
extern int FUN_10fb1130(...);
int FUN_10fb1160(undefined4 param_1);
extern int FUN_10fb1160(...);
int FUN_10fb1190(undefined4 param_1);
extern int FUN_10fb1190(...);
int FUN_10fb11c0(undefined4 param_1);
extern int FUN_10fb11c0(...);
undefined4 __thiscall FUN_10fb1730(undefined4 param_1,byte param_2);
void __fastcall FUN_10fb6aa0(int param_1);
extern void __fastcall FUN_10fb6aa0(...);
void __fastcall FUN_10fb6ef0(int param_1);
extern void __fastcall FUN_10fb6ef0(...);
undefined4 * __fastcall FUN_10fb74d0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10fb74d0(...);
SCStr * FUN_10fb8f00(SCStr *param_1,int param_2);
extern SCStr * FUN_10fb8f00(...);
int * __thiscall FUN_10fb94a0(int param_1,int *param_2,int param_3);
void FUN_10fbfe40(int param_1);
extern void FUN_10fbfe40(...);
int __thiscall FUN_10fc0bc0(int *param_1,uint *param_2);
undefined4 * __fastcall FUN_10fc12c0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10fc12c0(...);
undefined1 __fastcall FUN_10fc3d60(int param_1);
extern undefined1 __fastcall FUN_10fc3d60(...);
undefined1 __fastcall FUN_10fc3db0(int param_1);
extern undefined1 __fastcall FUN_10fc3db0(...);
undefined4 * __fastcall FUN_10fc4020(undefined4 param_1);
extern undefined4 * __fastcall FUN_10fc4020(...);
undefined4 * __fastcall FUN_10fc4060(undefined4 param_1);
extern undefined4 * __fastcall FUN_10fc4060(...);
undefined4 * __fastcall FUN_10fc4340(int param_1);
extern undefined4 * __fastcall FUN_10fc4340(...);
undefined4 * __fastcall FUN_10fc4660(int param_1);
extern undefined4 * __fastcall FUN_10fc4660(...);
undefined4 __fastcall FUN_10fc5b40(int param_1);
extern undefined4 __fastcall FUN_10fc5b40(...);
undefined4 __fastcall FUN_10fc5dc0(int param_1);
extern undefined4 __fastcall FUN_10fc5dc0(...);
undefined4 __thiscall FUN_10fc5e00(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_10fc5e60(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_10fc9370(int param_1);
extern undefined4 __fastcall FUN_10fc9370(...);
undefined4 __fastcall FUN_10fc93c0(int *param_1);
extern undefined4 __fastcall FUN_10fc93c0(...);
undefined1 FUN_10fc93f0(SCStr *param_1);
extern undefined1 FUN_10fc93f0(...);
void __fastcall FUN_10fc9570(int *param_1);
extern void __fastcall FUN_10fc9570(...);
void __fastcall FUN_10fc9ce0(int param_1);
extern void __fastcall FUN_10fc9ce0(...);
void __fastcall FUN_10fcbac0(int *param_1);
extern void __fastcall FUN_10fcbac0(...);
undefined4 * __thiscall FUN_10fccee0(undefined4 *param_1,undefined4 param_2);
int * __thiscall FUN_10fcd4b0(int param_1,int *param_2,uint param_3);
void __thiscall FUN_10fcdd50(int param_1,undefined4 *param_2);
void __fastcall FUN_10fce530(undefined4 *param_1);
extern void __fastcall FUN_10fce530(...);
undefined4 * __thiscall FUN_10fce700(undefined4 *param_1,byte param_2);
void FUN_10fcec60(int param_1,int param_2);
extern void FUN_10fcec60(...);
SCStr * FUN_10fced10(SCStr *param_1);
extern SCStr * FUN_10fced10(...);
SCStr * FUN_10fced40(SCStr *param_1);
extern SCStr * FUN_10fced40(...);
undefined4 FUN_10fcee40(undefined4 param_1);
extern undefined4 FUN_10fcee40(...);
undefined4 FUN_10fcee60(undefined4 param_1);
extern undefined4 FUN_10fcee60(...);
SCStr * FUN_10fcf010(SCStr *param_1);
extern SCStr * FUN_10fcf010(...);
SCStr * FUN_10fcf040(SCStr *param_1);
extern SCStr * FUN_10fcf040(...);
undefined4 FUN_10fcf0d0(undefined4 param_1);
extern undefined4 FUN_10fcf0d0(...);
SCStr * FUN_10fcf1f0(SCStr *param_1);
extern SCStr * FUN_10fcf1f0(...);
SCStr * FUN_10fcf220(SCStr *param_1);
extern SCStr * FUN_10fcf220(...);
undefined4 FUN_10fcf250(undefined4 param_1);
extern undefined4 FUN_10fcf250(...);
void __thiscall FUN_10fcf420(int param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_10fdd050(int param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_10fdd090(int param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_10fdd0d0(int param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_10fdd110(int param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_10fdd150(int param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_10fdd190(int param_1,undefined4 *param_2);
SCStr * __thiscall FUN_10fdd210(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10fdd260(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10fdd2d0(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10fdd320(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10fdd390(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10fdd490(int param_1,SCStr *param_2);
void __fastcall FUN_10fdd8d0(int param_1);
extern void __fastcall FUN_10fdd8d0(...);
void __fastcall FUN_10fddaa0(int param_1);
extern void __fastcall FUN_10fddaa0(...);
void __fastcall FUN_10fddea0(int param_1);
extern void __fastcall FUN_10fddea0(...);
void __thiscall FUN_10fde830(int param_1,undefined4 param_2);
void __thiscall FUN_10fe0020(int param_1,undefined4 *param_2);
void __fastcall FUN_10fe0720(undefined4 *param_1);
extern void __fastcall FUN_10fe0720(...);
void FUN_10fe1610(int param_1,int param_2);
extern void FUN_10fe1610(...);
void __fastcall FUN_10fe3320(int param_1);
extern void __fastcall FUN_10fe3320(...);
void __fastcall FUN_10fe3350(int param_1);
extern void __fastcall FUN_10fe3350(...);
void __fastcall FUN_10fe34f0(int param_1);
extern void __fastcall FUN_10fe34f0(...);
void __thiscall FUN_10fe3520(int param_1,undefined4 *param_2);
void __thiscall FUN_10fe3720(int param_1,uint param_2);
undefined4 __fastcall FUN_10fe6d40(int param_1);
extern undefined4 __fastcall FUN_10fe6d40(...);
undefined4 __fastcall FUN_10fe84e0(int param_1);
extern undefined4 __fastcall FUN_10fe84e0(...);
undefined4 __fastcall FUN_10fe8510(int param_1);
extern undefined4 __fastcall FUN_10fe8510(...);
undefined4 __fastcall FUN_10fe8530(int param_1);
extern undefined4 __fastcall FUN_10fe8530(...);
void FUN_10fe9cb0(undefined4 param_1,int *param_2);
extern void FUN_10fe9cb0(...);
void __thiscall FUN_10febc00(int param_1,undefined4 *param_2);
void __thiscall FUN_10febc50(int param_1,undefined4 *param_2);
undefined4 * __fastcall FUN_10fec290(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10fec290(...);
void __thiscall FUN_10fef110(int param_1,undefined4 *param_2);
void __thiscall FUN_10fef130(int param_1,undefined4 *param_2);
void __thiscall FUN_10fef150(int param_1,undefined4 *param_2);
void __thiscall FUN_10fef170(int param_1,undefined4 *param_2);
void FUN_10fef250(undefined4 param_1,undefined4 param_2);
extern void FUN_10fef250(...);
void FUN_10fef280(undefined4 param_1,undefined4 param_2);
extern void FUN_10fef280(...);
void __thiscall FUN_10fef730(int param_1,undefined4 *param_2);
void __thiscall FUN_10fef750(int param_1,undefined4 *param_2);
void __thiscall FUN_10fef770(int param_1,undefined4 *param_2);
void __thiscall FUN_10fef790(int param_1,undefined4 *param_2);
void FUN_10ff0d00(int param_1,int param_2);
extern void FUN_10ff0d00(...);
void FUN_10ff0d50(int param_1,int param_2);
extern void FUN_10ff0d50(...);
void __thiscall FUN_10ff0dc0(int param_1,undefined4 param_2,undefined4 param_3);
SCStr * __thiscall FUN_10ff15e0(int param_1,SCStr *param_2,int param_3,undefined4 param_4);
int __fastcall FUN_10ff1960(int param_1);
extern int __fastcall FUN_10ff1960(...);
undefined4 FUN_10ff1ad0(int param_1);
extern undefined4 FUN_10ff1ad0(...);
undefined4 FUN_10ff1ce0(int param_1);
extern undefined4 FUN_10ff1ce0(...);
undefined4 FUN_10ff1d00(int param_1);
extern undefined4 FUN_10ff1d00(...);
SCStr * __thiscall FUN_10ff20b0(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10ff2b20(int param_1,SCStr *param_2);
undefined1 FUN_10ff3020(int param_1);
extern undefined1 FUN_10ff3020(...);
undefined4 __fastcall FUN_10ff6e20(int param_1);
extern undefined4 __fastcall FUN_10ff6e20(...);
undefined4 FUN_10ff6e80(int param_1);
extern undefined4 FUN_10ff6e80(...);
undefined4 __fastcall FUN_10ff6f60(int param_1);
extern undefined4 __fastcall FUN_10ff6f60(...);
void __fastcall FUN_10ff81f0(int param_1);
extern void __fastcall FUN_10ff81f0(...);
void __thiscall FUN_10ff8430(int param_1,undefined4 *param_2);
void __thiscall FUN_10ff8480(int param_1,undefined4 *param_2);
void __thiscall FUN_10ff8cb0(int param_1,undefined4 param_2);
void __thiscall FUN_10ff8cf0(int param_1,undefined4 param_2);
void __fastcall FUN_10ffaf90(undefined4 *param_1);
extern void __fastcall FUN_10ffaf90(...);
undefined4 * __thiscall FUN_10ffb2b0(undefined4 *param_1,byte param_2);
void __fastcall FUN_10ffb490(int *param_1);
extern void __fastcall FUN_10ffb490(...);
void __thiscall FUN_10ffb670(int param_1,undefined4 *param_2);
void __fastcall FUN_10ffbc50(int *param_1);
extern void __fastcall FUN_10ffbc50(...);
void __thiscall FUN_10ffc070(int param_1,undefined4 param_2,undefined4 param_3);
byte __fastcall FUN_10ffcab0(int param_1);
extern byte __fastcall FUN_10ffcab0(...);
SCStr * __thiscall FUN_10ffcdc0(int param_1,SCStr *param_2);
SCStr * __thiscall FUN_10ffce10(int param_1,SCStr *param_2);
undefined4 __fastcall FUN_10ffce70(int param_1);
extern undefined4 __fastcall FUN_10ffce70(...);
undefined4 __fastcall FUN_10ffd060(int *param_1);
extern undefined4 __fastcall FUN_10ffd060(...);
void __thiscall FUN_10ffd210(int param_1,int param_2);
void __thiscall FUN_10ffd290(int param_1,int param_2);
void __fastcall FUN_10ffd5c0(int *param_1);
extern void __fastcall FUN_10ffd5c0(...);
undefined4 __fastcall FUN_10ffec20(int *param_1);
extern undefined4 __fastcall FUN_10ffec20(...);
void __fastcall FUN_10fff880(undefined4 *param_1);
extern void __fastcall FUN_10fff880(...);
undefined4 * __thiscall FUN_10fffbb0(undefined4 *param_1,byte param_2);
undefined4 FUN_10fffc00(SCStr *param_1);
extern undefined4 FUN_10fffc00(...);
void __fastcall FUN_10fffc90(int param_1);
extern void __fastcall FUN_10fffc90(...);
SCStr * __thiscall FUN_11002ae0(int param_1,SCStr *param_2);
undefined4 __fastcall FUN_110031b0(int *param_1);
extern undefined4 __fastcall FUN_110031b0(...);
undefined1 __thiscall FUN_11005070(int param_1,undefined4 param_2);
undefined1 __thiscall FUN_110050a0(int param_1,undefined4 param_2);
undefined1 __thiscall FUN_110051f0(int param_1,undefined4 param_2);
void __fastcall FUN_11007ed0(int *param_1);
extern void __fastcall FUN_11007ed0(...);
void __fastcall FUN_11007f00(int *param_1);
extern void __fastcall FUN_11007f00(...);
int * __fastcall FUN_11008010(int *param_1);
extern int * __fastcall FUN_11008010(...);
void __fastcall FUN_110082c0(int *param_1);
extern void __fastcall FUN_110082c0(...);
void FUN_1100bf00(int param_1);
extern void FUN_1100bf00(...);
void FUN_1100bf20(int param_1);
extern void FUN_1100bf20(...);
void __fastcall FUN_11010200(int *param_1);
extern void __fastcall FUN_11010200(...);
// Reference entry 10beed50; body size 34 bytes.
#line 1 "ENTRY_10beed50"

undefined4 * __thiscall FUN_10beed50(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10bef940(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMutableUrlRequest);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf00f0; body size 62 bytes.
#line 1 "ENTRY_10bf00f0"

void __fastcall FUN_10bf00f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlConnection_Callback);
  piVar1 = (int *)((int *)param_1[0xd]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1) + 4);
    param_1[0xd] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf0550; body size 37 bytes.
#line 1 "ENTRY_10bf0550"

int * __fastcall FUN_10bf0550(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10bf2460; body size 48 bytes.
#line 1 "ENTRY_10bf2460"

int __fastcall FUN_10bf2460(int *param_1)

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


// Reference entry 10bf24a0; body size 48 bytes.
#line 1 "ENTRY_10bf24a0"

int __fastcall FUN_10bf24a0(int *param_1)

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


// Reference entry 10bf3b40; body size 40 bytes.
#line 1 "ENTRY_10bf3b40"

int __thiscall FUN_10bf3b40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10bf3bc0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10bf3b80; body size 40 bytes.
#line 1 "ENTRY_10bf3b80"

int __thiscall FUN_10bf3b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10bf3c60(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10bf50a0; body size 39 bytes.
#line 1 "ENTRY_10bf50a0"

undefined4 * __fastcall FUN_10bf50a0(undefined4 *param_1)

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


// Reference entry 10bf50d0; body size 39 bytes.
#line 1 "ENTRY_10bf50d0"

undefined4 * __fastcall FUN_10bf50d0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5880; body size 38 bytes.
#line 1 "ENTRY_10bf5880"

void __fastcall FUN_10bf5880(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10bf5990();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x14);
  }
  return;
}


// Reference entry 10bf58b0; body size 44 bytes.
#line 1 "ENTRY_10bf58b0"

void __fastcall FUN_10bf58b0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_10bf4300(*param_1,param_1[1] + 8);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x20);
  }
  return;
}


// Reference entry 10bf5f40; body size 27 bytes.
#line 1 "ENTRY_10bf5f40"

int FUN_10bf5f40(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10bf3f30(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10bf78b0; body size 50 bytes.
#line 1 "ENTRY_10bf78b0"

bool FUN_10bf78b0(undefined4 param_1,int param_2)

{
  int iVar1;
  __time64_t _Var2;
  
  _Var2 = (__time64_t)(_time64((__time64_t *)0x0));
  iVar1 = (int)(thunk_FUN_10bf8040(param_1));
  return (bool)(param_2 * 0x15180 < (int)_Var2 - iVar1);
}


// Reference entry 10bfad00; body size 39 bytes.
#line 1 "ENTRY_10bfad00"

undefined4 * __fastcall FUN_10bfad00(undefined4 *param_1)

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


// Reference entry 10bfb4b0; body size 38 bytes.
#line 1 "ENTRY_10bfb4b0"

void __fastcall FUN_10bfb4b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10bfb550();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x10);
  }
  return;
}


// Reference entry 10bfb650; body size 25 bytes.
#line 1 "ENTRY_10bfb650"

void __fastcall FUN_10bfb650(undefined4 *param_1)

{
  thunk_FUN_10bfb670();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  return;
}


// Reference entry 10bfbad0; body size 27 bytes.
#line 1 "ENTRY_10bfbad0"

int FUN_10bfbad0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10bfa620(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10bfbc10; body size 51 bytes.
#line 1 "ENTRY_10bfbc10"

undefined4 * __thiscall FUN_10bfbc10(undefined4 *param_1,byte param_2)

{
  thunk_FUN_10bfb670();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x623c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe9e0; body size 60 bytes.
#line 1 "ENTRY_10bfe9e0"

void __fastcall FUN_10bfe9e0(int *param_1)

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


// Reference entry 10bfef00; body size 58 bytes.
#line 1 "ENTRY_10bfef00"

undefined4 * __thiscall FUN_10bfef00(undefined4 *param_1,byte param_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAudioData);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_10bfebd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c00ae0; body size 51 bytes.
#line 1 "ENTRY_10c00ae0"

undefined4 __fastcall FUN_10c00ae0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x14))());
    iVar2 = (int)(*(int *)(param_1 + 0x14) + 1);
    if ((iVar2 < iVar1) && (*(int *)(param_1 + 0x14) = iVar2, -1 < iVar2)) {
      iVar1 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x14))());
      if (*(int *)(param_1 + 0x14) < iVar1) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c02e00; body size 60 bytes.
#line 1 "ENTRY_10c02e00"

void FUN_10c02e00(int param_1,int param_2)

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


// Reference entry 10c06f90; body size 23 bytes.
#line 1 "ENTRY_10c06f90"

void __fastcall FUN_10c06f90(int param_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c06fb0; body size 22 bytes.
#line 1 "ENTRY_10c06fb0"

void FUN_10c06fb0(void)

{
  thunk_FUN_10cf4ae0(0);
  return;
}


// Reference entry 10c070b0; body size 48 bytes.
#line 1 "ENTRY_10c070b0"

int __fastcall FUN_10c070b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x70))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c0f120; body size 43 bytes.
#line 1 "ENTRY_10c0f120"

undefined4 __thiscall FUN_10c0f120(int *param_1,undefined4 param_2)

{
  int iVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  iVar1 = (int)(*param_1);
  uVar3 = (undefined4)((**(code **)(*(int *)pSVar2 + 0x124))());
  (**(code **)(iVar1 + 0x80))(param_2,uVar3);
  return (undefined4)(unaff_EBX);
}


// Reference entry 10c0f160; body size 38 bytes.
#line 1 "ENTRY_10c0f160"

undefined4 FUN_10c0f160(undefined4 param_1)

{
  SCLibrary *pSVar1;
  undefined4 uVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar2 = (undefined4)((**(code **)(*(int *)pSVar1 + 0x124))());
  thunk_FUN_10c11c30(param_1,uVar2);
  return (undefined4)(param_1);
}


// Reference entry 10c146f0; body size 28 bytes.
#line 1 "ENTRY_10c146f0"

undefined4 FUN_10c146f0(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_101b5540());
  if (iVar2 != 0) {
    cVar1 = (char)(thunk_FUN_101b5de0(2));
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c14ab0; body size 35 bytes.
#line 1 "ENTRY_10c14ab0"

undefined4 __fastcall FUN_10c14ab0(int *param_1)

{
  char cVar1;
  
  thunk_FUN_10c13d10();
  if ((char)param_1[0xc] == '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x14))());
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c16c60; body size 43 bytes.
#line 1 "ENTRY_10c16c60"

undefined4 __fastcall FUN_10c16c60(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar1 != 0)) {
    return (undefined4)(0);
  }
  if ((*(int **)(param_1 + 0x18) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(), iVar1 != 0)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10c17fd0; body size 48 bytes.
#line 1 "ENTRY_10c17fd0"

undefined4 __fastcall FUN_10c17fd0(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)((**(code **)(*(int *)param_1[0x28] + 0x14))());
  cVar1 = (char)((**(code **)(*param_1 + 0x168))());
  if ((cVar1 != '\0') && (1 < uVar2)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10c186b0; body size 20 bytes.
#line 1 "ENTRY_10c186b0"

undefined4 __fastcall FUN_10c186b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10c19540; body size 17 bytes.
#line 1 "ENTRY_10c19540"

undefined4 __fastcall FUN_10c19540(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10c1be40; body size 56 bytes.
#line 1 "ENTRY_10c1be40"

undefined4 __thiscall FUN_10c1be40(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = (undefined4)(7);
    if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
      uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xa8) + 0x30))());
    }
    return (undefined4)(uVar1);
  }
  if (param_2 != 2) {
    uVar1 = (undefined4)(thunk_FUN_104d8ab0());
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 10c1c560; body size 21 bytes.
#line 1 "ENTRY_10c1c560"

undefined4 __thiscall FUN_10c1c560(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(param_2);
  return (undefined4)(0);
}


// Reference entry 10c1c700; body size 21 bytes.
#line 1 "ENTRY_10c1c700"

undefined4 __thiscall FUN_10c1c700(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(param_2);
  return (undefined4)(0);
}


// Reference entry 10c1e7b0; body size 21 bytes.
#line 1 "ENTRY_10c1e7b0"

undefined4 __thiscall FUN_10c1e7b0(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(param_2);
  return (undefined4)(1);
}


// Reference entry 10c1e7e0; body size 17 bytes.
#line 1 "ENTRY_10c1e7e0"

undefined4 __fastcall FUN_10c1e7e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10c1ec20; body size 21 bytes.
#line 1 "ENTRY_10c1ec20"

int __fastcall FUN_10c1ec20(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0xdc));
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)0x0) && (*pcVar1 != '\0')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10c1ed60; body size 46 bytes.
#line 1 "ENTRY_10c1ed60"

uint __fastcall FUN_10c1ed60(int param_1)

{
  uint in_EAX;
  
  if (((*(int **)(param_1 + 0xa0) != (int *)0x0) && (*(int *)(param_1 + 0xa8) != 0)) &&
     (*(char *)(param_1 + 0x14d) == '\0')) {
    in_EAX = (uint)((**(code **)(**(int **)(param_1 + 0xa0) + 0x1c))());
    if (in_EAX == 3) {
      return (uint)(1);
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10c1edc0; body size 19 bytes.
#line 1 "ENTRY_10c1edc0"

undefined4 __fastcall FUN_10c1edc0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10c208f0; body size 37 bytes.
#line 1 "ENTRY_10c208f0"

void __fastcall FUN_10c208f0(int param_1)

{
  thunk_FUN_104d9cc0();
  if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa0) + 0x20))(0);
  }
  thunk_FUN_1106d920();
  return;
}


// Reference entry 10c20eb0; body size 19 bytes.
#line 1 "ENTRY_10c20eb0"

uint __fastcall FUN_10c20eb0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 4) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10c21100; body size 23 bytes.
#line 1 "ENTRY_10c21100"

void FUN_10c21100(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10c23420; body size 59 bytes.
#line 1 "ENTRY_10c23420"

void __thiscall FUN_10c23420(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10c220f0(puVar1,param_2);
  return;
}


// Reference entry 10c23470; body size 59 bytes.
#line 1 "ENTRY_10c23470"

void __thiscall FUN_10c23470(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10c22290(puVar1,param_2);
  return;
}


// Reference entry 10c23ae0; body size 39 bytes.
#line 1 "ENTRY_10c23ae0"

undefined4 * __fastcall FUN_10c23ae0(undefined4 *param_1)

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


// Reference entry 10c261e0; body size 60 bytes.
#line 1 "ENTRY_10c261e0"

void FUN_10c261e0(int param_1,int param_2)

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


// Reference entry 10c26570; body size 23 bytes.
#line 1 "ENTRY_10c26570"

undefined * FUN_10c26570(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_1);
  return (undefined *)(&DAT_121a5354);
}


// Reference entry 10c265e0; body size 57 bytes.
#line 1 "ENTRY_10c265e0"

int * __thiscall FUN_10c265e0(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x14) + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10c271e0; body size 59 bytes.
#line 1 "ENTRY_10c271e0"

void __thiscall FUN_10c271e0(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10c220f0(puVar1,param_2);
  return;
}


// Reference entry 10c27230; body size 59 bytes.
#line 1 "ENTRY_10c27230"

void __thiscall FUN_10c27230(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10c22290(puVar1,param_2);
  return;
}


// Reference entry 10c2a700; body size 16 bytes.
#line 1 "ENTRY_10c2a700"

void __fastcall FUN_10c2a700(int param_1)

{
  *(undefined1 *)(param_1 + 0x34) = 0;
  thunk_FUN_10cefc20();
  thunk_FUN_10cefa80();
  return;
}


// Reference entry 10c2a8b0; body size 39 bytes.
#line 1 "ENTRY_10c2a8b0"

void __thiscall FUN_10c2a8b0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    if (param_1[4] == 0) {
      (**(code **)(*param_1 + 0x30))();
    }
    thunk_FUN_103d61d0(param_2,0);
  }
  return;
}


// Reference entry 10c2a8e0; body size 41 bytes.
#line 1 "ENTRY_10c2a8e0"

void __thiscall FUN_10c2a8e0(int *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_103d6930(param_2));
    if ((cVar1 != '\0') && (param_1[4] == 0)) {
      (**(code **)(*param_1 + 0x34))();
    }
  }
  return;
}


// Reference entry 10c2bce0; body size 34 bytes.
#line 1 "ENTRY_10c2bce0"

void __fastcall FUN_10c2bce0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)(param_1) != (undefined4 *)(puVar1); param_1 = param_1 + 4) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 10c2c0e0; body size 45 bytes.
#line 1 "ENTRY_10c2c0e0"

void FUN_10c2c0e0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIAccountManager:onCurrentAccountChanged"));
  if (bVar1) {
    cVar2 = (char)(thunk_FUN_10c322c0());
    if (cVar2 != '\0') {
      thunk_FUN_10c31e60(0);
    }
  }
  return;
}


// Reference entry 10c2c3b0; body size 19 bytes.
#line 1 "ENTRY_10c2c3b0"

void __thiscall FUN_10c2c3b0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c2c400; body size 47 bytes.
#line 1 "ENTRY_10c2c400"

void FUN_10c2c400(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIAccountManager:onCurrentAccountChanged"));
  if (bVar1) {
    cVar2 = (char)(thunk_FUN_10c322c0());
    if (cVar2 != '\0') {
      thunk_FUN_10c31e60(0);
    }
  }
  return;
}


// Reference entry 10c2c4b0; body size 19 bytes.
#line 1 "ENTRY_10c2c4b0"

void __thiscall FUN_10c2c4b0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c32530; body size 57 bytes.
#line 1 "ENTRY_10c32530"

void __thiscall FUN_10c32530(int param_1,int *param_2)

{
  char cVar1;
  
  if (((int *)(param_2) != (int *)0x0) && (cVar1 = (**(code **)(*param_2 + 0x8c))(5,0), cVar1 != '\0')) {
    (**(code **)(*param_2 + 0x38))(*(undefined4 *)(param_1 + 4));
    thunk_FUN_10c31e60(0);
  }
  return;
}


// Reference entry 10c32580; body size 55 bytes.
#line 1 "ENTRY_10c32580"

void __thiscall FUN_10c32580(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2 != 0) {
    do {
      (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x2c) + uVar1 * 4))(param_2);
      uVar1 = (uint)(uVar1 + 1);
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2));
  }
  return;
}


// Reference entry 10c325d0; body size 56 bytes.
#line 1 "ENTRY_10c325d0"

void __thiscall FUN_10c325d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x2c) + uVar1 * 4) + 4))(param_2);
      uVar1 = (uint)(uVar1 + 1);
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2));
  }
  return;
}


// Reference entry 10c32620; body size 44 bytes.
#line 1 "ENTRY_10c32620"

void __fastcall FUN_10c32620(int param_1)

{
  char cVar1;
  
  (**(code **)(*(int *)(param_1 + 0x18) + 8))();
  if (*(char *)(param_1 + 0x38) != '\0') {
    cVar1 = (char)(thunk_FUN_10c322c0());
    if (cVar1 != '\0') {
      thunk_FUN_10c31e60(0);
    }
  }
  return;
}


// Reference entry 10c35720; body size 39 bytes.
#line 1 "ENTRY_10c35720"

undefined4 * __fastcall FUN_10c35720(undefined4 *param_1)

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


// Reference entry 10c35e20; body size 33 bytes.
#line 1 "ENTRY_10c35e20"

void __fastcall FUN_10c35e20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c35ff0; body size 33 bytes.
#line 1 "ENTRY_10c35ff0"

void __fastcall FUN_10c35ff0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c36500; body size 37 bytes.
#line 1 "ENTRY_10c36500"

int * __fastcall FUN_10c36500(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10c36570; body size 27 bytes.
#line 1 "ENTRY_10c36570"

int FUN_10c36570(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10c34d70(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10c370e0; body size 33 bytes.
#line 1 "ENTRY_10c370e0"

void __fastcall FUN_10c370e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c380f0; body size 26 bytes.
#line 1 "ENTRY_10c380f0"

undefined4 __thiscall FUN_10c380f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x24) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10c3ad50; body size 26 bytes.
#line 1 "ENTRY_10c3ad50"

undefined4 __thiscall FUN_10c3ad50(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x34) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10c3b1c0; body size 42 bytes.
#line 1 "ENTRY_10c3b1c0"

void __fastcall FUN_10c3b1c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 400) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 400) + 0x14))(*(undefined4 *)(param_1 + 0x3c));
  }
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(1000));
  *(undefined4 *)(param_1 + 0x198) = uVar1;
  return;
}


// Reference entry 10c3b200; body size 56 bytes.
#line 1 "ENTRY_10c3b200"

void __thiscall FUN_10c3b200(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(param_2) == *(int *)(param_1 + 0x180)) {
    thunk_FUN_10c3b550();
    thunk_FUN_10b93810();
    uVar1 = (undefined4)(thunk_FUN_1059d5a0(1000));
    *(undefined4 *)(param_1 + 0x180) = uVar1;
  }
  return;
}


// Reference entry 10c3b9f0; body size 29 bytes.
#line 1 "ENTRY_10c3b9f0"

void __thiscall FUN_10c3b9f0(int param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x34) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 10c3d380; body size 57 bytes.
#line 1 "ENTRY_10c3d380"

void FUN_10c3d380(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10c3d380(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10c3d3d0; body size 40 bytes.
#line 1 "ENTRY_10c3d3d0"

int __thiscall FUN_10c3d3d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10c3d700(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10c3d410; body size 40 bytes.
#line 1 "ENTRY_10c3d410"

int __thiscall FUN_10c3d410(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10c3d800(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10c3d960; body size 52 bytes.
#line 1 "ENTRY_10c3d960"

void FUN_10c3d960(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_10b034d0(puVar2 + 3);
    thunk_FUN_1148a50e(puVar2,0x14);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 10c404f0; body size 39 bytes.
#line 1 "ENTRY_10c404f0"

undefined4 * __fastcall FUN_10c404f0(undefined4 *param_1)

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


// Reference entry 10c40520; body size 39 bytes.
#line 1 "ENTRY_10c40520"

undefined4 * __fastcall FUN_10c40520(undefined4 *param_1)

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


// Reference entry 10c40550; body size 39 bytes.
#line 1 "ENTRY_10c40550"

undefined4 * __fastcall FUN_10c40550(undefined4 *param_1)

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


// Reference entry 10c40580; body size 39 bytes.
#line 1 "ENTRY_10c40580"

undefined4 * __fastcall FUN_10c40580(undefined4 *param_1)

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


// Reference entry 10c41500; body size 39 bytes.
#line 1 "ENTRY_10c41500"

void __fastcall FUN_10c41500(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10b034d0(*(int *)(param_1 + 4) + 0xc);
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x14);
  }
  return;
}


// Reference entry 10c41590; body size 17 bytes.
#line 1 "ENTRY_10c41590"

void __fastcall FUN_10c41590(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    thunk_FUN_10b034d0(*param_1);
  }
  return;
}


// Reference entry 10c41d40; body size 27 bytes.
#line 1 "ENTRY_10c41d40"

int FUN_10c41d40(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10c3dd10(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10c42140; body size 36 bytes.
#line 1 "ENTRY_10c42140"

int __thiscall FUN_10c42140(int param_1,byte param_2)

{
  thunk_FUN_10b034d0(param_1 + 4);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (int)(param_1);
}


// Reference entry 10c42890; body size 40 bytes.
#line 1 "ENTRY_10c42890"

void __fastcall FUN_10c42890(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_10b034d0(piVar1 + 3);
  thunk_FUN_1148a50e(piVar1,0x14);
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
  return;
}


// Reference entry 10c471c0; body size 16 bytes.
#line 1 "ENTRY_10c471c0"

void FUN_10c471c0(void)

{
  undefined4 uStack00000004;
  
  uStack00000004 = (undefined4)(9);
  thunk_FUN_10c47270();
  return;
}


// Reference entry 10c471f0; body size 20 bytes.
#line 1 "ENTRY_10c471f0"

void __thiscall FUN_10c471f0(int param_1,int param_2)

{
  if ((int)(param_2) == *(int *)(param_1 + 0x5c)) {
    thunk_FUN_10c46460();
  }
  return;
}


// Reference entry 10c4a070; body size 23 bytes.
#line 1 "ENTRY_10c4a070"

void __fastcall FUN_10c4a070(int param_1)

{
  thunk_FUN_1059d800();
  *(undefined4 *)(param_1 + 0x94) = 0;
  return;
}


// Reference entry 10c4b2f0; body size 33 bytes.
#line 1 "ENTRY_10c4b2f0"

void __fastcall FUN_10c4b2f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c4b320; body size 33 bytes.
#line 1 "ENTRY_10c4b320"

void __fastcall FUN_10c4b320(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c4b8b0; body size 37 bytes.
#line 1 "ENTRY_10c4b8b0"

int * __fastcall FUN_10c4b8b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10c4bf90; body size 33 bytes.
#line 1 "ENTRY_10c4bf90"

void __fastcall FUN_10c4bf90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c4c4a0; body size 28 bytes.
#line 1 "ENTRY_10c4c4a0"

void __fastcall FUN_10c4c4a0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))());
  if (cVar1 != '\0') {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10c4c900; body size 34 bytes.
#line 1 "ENTRY_10c4c900"

char __thiscall FUN_10c4c900(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_111fc6a0(param_2));
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x442c) == 0x130)) {
    cVar1 = (char)('\x01');
  }
  return (char)(cVar1);
}


// Reference entry 10c4d990; body size 31 bytes.
#line 1 "ENTRY_10c4d990"

undefined4 FUN_10c4d990(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    thunk_FUN_1012cdb0(param_1,param_2);
  }
  return (undefined4)(1);
}


// Reference entry 10c4ea80; body size 49 bytes.
#line 1 "ENTRY_10c4ea80"

undefined4 * __thiscall FUN_10c4ea80(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceAutoplay);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c50ee0; body size 48 bytes.
#line 1 "ENTRY_10c50ee0"

int __fastcall FUN_10c50ee0(int *param_1)

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


// Reference entry 10c56a20; body size 48 bytes.
#line 1 "ENTRY_10c56a20"

int __fastcall FUN_10c56a20(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x30))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c594a0; body size 42 bytes.
#line 1 "ENTRY_10c594a0"

undefined4 * __thiscall FUN_10c594a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceLineOut);
  return (undefined4 *)(param_1);
}


// Reference entry 10c59da0; body size 48 bytes.
#line 1 "ENTRY_10c59da0"

int __fastcall FUN_10c59da0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x24))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c5b250; body size 46 bytes.
#line 1 "ENTRY_10c5b250"

undefined4 * __thiscall FUN_10c5b250(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceMusicEqualizationEventSink);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  piVar1 = (int *)(*(int **)(param_2 + 8));
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c5bb30; body size 51 bytes.
#line 1 "ENTRY_10c5bb30"

int __fastcall FUN_10c5bb30(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xf8))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c5bb70; body size 51 bytes.
#line 1 "ENTRY_10c5bb70"

int __fastcall FUN_10c5bb70(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xf8))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c5bbb0; body size 42 bytes.
#line 1 "ENTRY_10c5bbb0"

void __thiscall FUN_10c5bbb0(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x30) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onBalanceLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5bbf0; body size 42 bytes.
#line 1 "ENTRY_10c5bbf0"

void __thiscall FUN_10c5bbf0(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x28) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onBassLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5c920; body size 51 bytes.
#line 1 "ENTRY_10c5c920"

undefined1 __fastcall FUN_10c5c920(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return (undefined1)(1);
  }
  cVar1 = (char)(thunk_FUN_11456f80());
  if ((cVar1 == '\0') && (cVar1 = thunk_FUN_11458730(), cVar1 != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10c5c970; body size 42 bytes.
#line 1 "ENTRY_10c5c970"

void __thiscall FUN_10c5c970(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 100) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onHeightChannelLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5cb70; body size 42 bytes.
#line 1 "ENTRY_10c5cb70"

void __thiscall FUN_10c5cb70(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x58) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onLeftRearDelayChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5cbb0; body size 19 bytes.
#line 1 "ENTRY_10c5cbb0"

uint __fastcall FUN_10c5cbb0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x4c))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10c5cbd0; body size 41 bytes.
#line 1 "ENTRY_10c5cbd0"

void __thiscall FUN_10c5cbd0(int param_1,undefined1 param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x24) = param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onLoudnessChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5cc20; body size 42 bytes.
#line 1 "ENTRY_10c5cc20"

void __thiscall FUN_10c5cc20(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x4c) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onMusicSurroundLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5cc70; body size 41 bytes.
#line 1 "ENTRY_10c5cc70"

void __thiscall FUN_10c5cc70(int param_1,undefined1 param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x54) = param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onNightModeChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5ccb0; body size 38 bytes.
#line 1 "ENTRY_10c5ccb0"

void __fastcall FUN_10c5ccb0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0xc);
  *(undefined1 *)(param_1 + 0x60) = 0;
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDeviceMusicEqualization:onFixedOutput");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5ccf0; body size 38 bytes.
#line 1 "ENTRY_10c5ccf0"

void __fastcall FUN_10c5ccf0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0xc);
  *(undefined1 *)(param_1 + 0x60) = 1;
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDeviceMusicEqualization:onFixedOutput");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5d2f0; body size 17 bytes.
#line 1 "ENTRY_10c5d2f0"

void __fastcall FUN_10c5d2f0(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11155590();
  return;
}


// Reference entry 10c5d300; body size 17 bytes.
#line 1 "ENTRY_10c5d300"

void __fastcall FUN_10c5d300(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11155810();
  return;
}


// Reference entry 10c5d310; body size 17 bytes.
#line 1 "ENTRY_10c5d310"

void __fastcall FUN_10c5d310(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111559c0();
  return;
}


// Reference entry 10c5d320; body size 17 bytes.
#line 1 "ENTRY_10c5d320"

void __fastcall FUN_10c5d320(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11155ba0();
  return;
}


// Reference entry 10c5d330; body size 17 bytes.
#line 1 "ENTRY_10c5d330"

void __fastcall FUN_10c5d330(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11155d80();
  return;
}


// Reference entry 10c5d350; body size 42 bytes.
#line 1 "ENTRY_10c5d350"

void __thiscall FUN_10c5d350(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x5c) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onRightRearDelayChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5d390; body size 19 bytes.
#line 1 "ENTRY_10c5d390"

void __fastcall FUN_10c5d390(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158070();
  return;
}


// Reference entry 10c5d3b0; body size 19 bytes.
#line 1 "ENTRY_10c5d3b0"

void __fastcall FUN_10c5d3b0(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111582d0();
  return;
}


// Reference entry 10c5d3d0; body size 23 bytes.
#line 1 "ENTRY_10c5d3d0"

void __fastcall FUN_10c5d3d0(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0x68))();
  return;
}


// Reference entry 10c5d3f0; body size 19 bytes.
#line 1 "ENTRY_10c5d3f0"

void __fastcall FUN_10c5d3f0(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111580a0();
  return;
}


// Reference entry 10c5d410; body size 19 bytes.
#line 1 "ENTRY_10c5d410"

void __fastcall FUN_10c5d410(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111580d0();
  return;
}


// Reference entry 10c5d430; body size 19 bytes.
#line 1 "ENTRY_10c5d430"

void __fastcall FUN_10c5d430(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158050();
  return;
}


// Reference entry 10c5d450; body size 19 bytes.
#line 1 "ENTRY_10c5d450"

void __fastcall FUN_10c5d450(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158120();
  return;
}


// Reference entry 10c5d470; body size 19 bytes.
#line 1 "ENTRY_10c5d470"

void __fastcall FUN_10c5d470(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158140();
  return;
}


// Reference entry 10c5d490; body size 26 bytes.
#line 1 "ENTRY_10c5d490"

void __thiscall FUN_10c5d490(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x60) = param_2;
  if (*(int *)(param_1 + 0x74) != 0) {
    thunk_FUN_11158170();
    return;
  }
  return;
}


// Reference entry 10c5d4b0; body size 19 bytes.
#line 1 "ENTRY_10c5d4b0"

void __fastcall FUN_10c5d4b0(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111581a0();
  return;
}


// Reference entry 10c5d4d0; body size 19 bytes.
#line 1 "ENTRY_10c5d4d0"

void __fastcall FUN_10c5d4d0(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158240();
  return;
}


// Reference entry 10c5d4f0; body size 19 bytes.
#line 1 "ENTRY_10c5d4f0"

void __fastcall FUN_10c5d4f0(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158270();
  return;
}


// Reference entry 10c5d510; body size 19 bytes.
#line 1 "ENTRY_10c5d510"

void __fastcall FUN_10c5d510(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111582a0();
  return;
}


// Reference entry 10c5d530; body size 19 bytes.
#line 1 "ENTRY_10c5d530"

void __fastcall FUN_10c5d530(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158300();
  return;
}


// Reference entry 10c5d550; body size 19 bytes.
#line 1 "ENTRY_10c5d550"

void __fastcall FUN_10c5d550(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158330();
  return;
}


// Reference entry 10c5d570; body size 19 bytes.
#line 1 "ENTRY_10c5d570"

void __fastcall FUN_10c5d570(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158360();
  return;
}


// Reference entry 10c5d590; body size 19 bytes.
#line 1 "ENTRY_10c5d590"

void __fastcall FUN_10c5d590(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158390();
  return;
}


// Reference entry 10c5d5b0; body size 19 bytes.
#line 1 "ENTRY_10c5d5b0"

void __fastcall FUN_10c5d5b0(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111583c0();
  return;
}


// Reference entry 10c5d5d0; body size 19 bytes.
#line 1 "ENTRY_10c5d5d0"

void __fastcall FUN_10c5d5d0(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158420();
  return;
}


// Reference entry 10c5d720; body size 41 bytes.
#line 1 "ENTRY_10c5d720"

void __thiscall FUN_10c5d720(int param_1,undefined1 param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x34) = param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSubEnabledChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5d770; body size 42 bytes.
#line 1 "ENTRY_10c5d770"

void __thiscall FUN_10c5d770(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x38) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSubGainChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5d7c0; body size 41 bytes.
#line 1 "ENTRY_10c5d7c0"

void __thiscall FUN_10c5d7c0(int param_1,undefined1 param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x35) = param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSubPolarityChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5d9e0; body size 41 bytes.
#line 1 "ENTRY_10c5d9e0"

void __thiscall FUN_10c5d9e0(int param_1,undefined1 param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x36) = param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSurroundEnabledChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5da30; body size 42 bytes.
#line 1 "ENTRY_10c5da30"

void __thiscall FUN_10c5da30(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x48) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSurroundLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5da80; body size 42 bytes.
#line 1 "ENTRY_10c5da80"

void __thiscall FUN_10c5da80(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x50) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSurroundModeChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5dac0; body size 42 bytes.
#line 1 "ENTRY_10c5dac0"

void __thiscall FUN_10c5dac0(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x2c) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onTrebleLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5db10; body size 42 bytes.
#line 1 "ENTRY_10c5db10"

void __thiscall FUN_10c5db10(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x44) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onTVAudioDelayChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5db60; body size 41 bytes.
#line 1 "ENTRY_10c5db60"

void __thiscall FUN_10c5db60(int param_1,undefined1 param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x40) = param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onTVDialogLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5dba0; body size 54 bytes.
#line 1 "ENTRY_10c5dba0"

void __thiscall FUN_10c5dba0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  thunk_FUN_103d6930(param_2);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x74))(1);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}


// Reference entry 10c5dc20; body size 42 bytes.
#line 1 "ENTRY_10c5dc20"

void __thiscall FUN_10c5dc20(int param_1,short param_2)

{
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int *)(param_1 + 0x3c) = (int)param_2;
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onCrossoverChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5e2d0; body size 49 bytes.
#line 1 "ENTRY_10c5e2d0"

int __thiscall FUN_10c5e2d0(int *param_1,int *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10c5e5a0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10c5e310; body size 60 bytes.
#line 1 "ENTRY_10c5e310"

int __thiscall FUN_10c5e310(int *param_1,SCStr *param_2)

{
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10828990(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10c5eae0; body size 48 bytes.
#line 1 "ENTRY_10c5eae0"

undefined4 * __fastcall FUN_10c5eae0(undefined4 *param_1)

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


// Reference entry 10c5ed70; body size 28 bytes.
#line 1 "ENTRY_10c5ed70"

undefined4 * __fastcall FUN_10c5ed70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(6);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5f840; body size 31 bytes.
#line 1 "ENTRY_10c5f840"

SCStr * __thiscall FUN_10c5f840(SCStr *param_1,SCStr *param_2)

{
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return (SCStr *)(param_1);
}


// Reference entry 10c5f870; body size 31 bytes.
#line 1 "ENTRY_10c5f870"

SCStr * __thiscall FUN_10c5f870(SCStr *param_1,SCStr *param_2)

{
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return (SCStr *)(param_1);
}


// Reference entry 10c5fa70; body size 52 bytes.
#line 1 "ENTRY_10c5fa70"

int * __thiscall FUN_10c5fa70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10c5e210(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  thunk_FUN_10c62c00(param_2,param_3);
  return (int *)(param_1);
}


// Reference entry 10c62f60; body size 17 bytes.
#line 1 "ENTRY_10c62f60"

int __fastcall FUN_10c62f60(undefined4 *param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)((char *)*param_1);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)0x0) && (*pcVar1 != '\0')) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 10c63000; body size 36 bytes.
#line 1 "ENTRY_10c63000"

SCStr * FUN_10c63000(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_102a0500());
  pcVar2 = (char *)((char *)(**(code **)(*piVar1 + 0x28))(0x231e));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10c66510; body size 25 bytes.
#line 1 "ENTRY_10c66510"

int FUN_10c66510(uint param_1,uint param_2)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint3)((param_1 & param_2) >> 8));
  if (((param_1 & param_2) == param_2) && ((int)param_2 < 0x1f)) {
    return (int)(((uint)(uVar1) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar1 << 8);
}


// Reference entry 10c67700; body size 57 bytes.
#line 1 "ENTRY_10c67700"

undefined4 __fastcall FUN_10c67700(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)(param_1[0xc]);
  thunk_FUN_101b5540(iVar3);
  cVar1 = (char)(thunk_FUN_101b5de0(iVar3));
  if (cVar1 == '\0') {
    return (undefined4)(3);
  }
  cVar1 = (char)((**(code **)(*param_1 + 0x18))());
  if (cVar1 != '\0') {
    return (undefined4)(2);
  }
                    
                    
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x28))());
  return (undefined4)(uVar2);
}


// Reference entry 10c67ab0; body size 34 bytes.
#line 1 "ENTRY_10c67ab0"

void __thiscall FUN_10c67ab0(int *param_1,int param_2)

{
  char cVar1;
  
  if ((int *)(param_2) == (int *)(param_1)[0xc]) {
    cVar1 = (char)((**(code **)(*param_1 + 0x18))());
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x14))();
    }
  }
  return;
}


// Reference entry 10c67c20; body size 23 bytes.
#line 1 "ENTRY_10c67c20"

void __fastcall FUN_10c67c20(int param_1)

{
  thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}


// Reference entry 10c69170; body size 17 bytes.
#line 1 "ENTRY_10c69170"

bool FUN_10c69170(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10c69cb0(param_1));
  return (bool)(iVar1 == 0);
}


// Reference entry 10c69f50; body size 26 bytes.
#line 1 "ENTRY_10c69f50"

void FUN_10c69f50(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_1033b650();
    return;
  }
  return;
}


// Reference entry 10c6a3c0; body size 20 bytes.
#line 1 "ENTRY_10c6a3c0"

void __fastcall FUN_10c6a3c0(int param_1)

{
  thunk_FUN_10c6c6c0(*(int *)(param_1 + 0xcc) != 0);
  return;
}


// Reference entry 10c6a450; body size 40 bytes.
#line 1 "ENTRY_10c6a450"

void __thiscall FUN_10c6a450(int param_1,int param_2)

{
  if ((int)(param_2) == *(int *)(param_1 + 0x34)) {
    thunk_FUN_10c6c6c0();
    return;
  }
  return;
}


// Reference entry 10c6a490; body size 23 bytes.
#line 1 "ENTRY_10c6a490"

void __thiscall FUN_10c6a490(int param_1,int param_2)

{
  if ((int)(param_2) == *(int *)(param_1 + 0x34)) {
    thunk_FUN_10c6cda0();
  }
  return;
}


// Reference entry 10c6a4c0; body size 56 bytes.
#line 1 "ENTRY_10c6a4c0"

void __fastcall FUN_10c6a4c0(int param_1)

{
  thunk_FUN_10c6c6c0(*(int *)(param_1 + 0x50) != 0);
  if (*(int *)(param_1 + 0x60) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x60))(1);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}


// Reference entry 10c6a520; body size 34 bytes.
#line 1 "ENTRY_10c6a520"

void __thiscall FUN_10c6a520(int param_1,undefined4 param_2,int param_3)

{
  if ((int)(param_3) == *(int *)(param_1 + 0x34)) {
    thunk_FUN_10c6c6c0(*(int *)(param_1 + 0x4c) != 0);
  }
  return;
}


// Reference entry 10c6a950; body size 18 bytes.
#line 1 "ENTRY_10c6a950"

void __fastcall FUN_10c6a950(int param_1)

{
  if (*(int *)(param_1 + 0x44) == 0) {
    thunk_FUN_10c6cda0();
    return;
  }
  return;
}


// Reference entry 10c6a970; body size 26 bytes.
#line 1 "ENTRY_10c6a970"

void __fastcall FUN_10c6a970(int param_1)

{
  thunk_FUN_10c6c6c0(*(int *)(param_1 + 0x44) != 0);
  return;
}


// Reference entry 10c6ed50; body size 17 bytes.
#line 1 "ENTRY_10c6ed50"

undefined4 __fastcall FUN_10c6ed50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (*(int *)(param_1 + 0xe8) == 0) {
    uVar1 = (undefined4)(4);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10c6ed70; body size 18 bytes.
#line 1 "ENTRY_10c6ed70"

undefined4 __fastcall FUN_10c6ed70(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xe8) + 0x2c))(0);
  return (undefined4)(1);
}


// Reference entry 10c6fb30; body size 17 bytes.
#line 1 "ENTRY_10c6fb30"

undefined4 __fastcall FUN_10c6fb30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar1 = (undefined4)(4);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10c6fcb0; body size 30 bytes.
#line 1 "ENTRY_10c6fcb0"

undefined1 __thiscall FUN_10c6fcb0(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x174) = 1;
    thunk_FUN_1112c3b0();
  }
  return (undefined1)(1);
}


// Reference entry 10c71eb0; body size 56 bytes.
#line 1 "ENTRY_10c71eb0"

uint FUN_10c71eb0(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (*(uint *)(param_2 + 4) != 0) {
    do {
      if ((*(byte *)(*(int *)(param_2 + 8) + uVar1) <= param_1) &&
         ((byte)(param_1) <= *(byte *)(*(int *)(param_2 + 8) + 1 + uVar1))) {
        return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
      }
      uVar1 = (uint)(uVar1 + 2);
    } while (uVar1 < *(uint *)(param_2 + 4));
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10c73860; body size 46 bytes.
#line 1 "ENTRY_10c73860"

void FUN_10c73860(undefined4 *param_1,char *param_2,char *param_3,int *param_4)

{
  if ((char *)(param_2) == (char *)(param_3)) {
    *param_1 = (undefined4)(param_2);
    return;
  }
  do {
    if ((int)*param_2 == *param_4) break;
    param_2 = (char *)(param_2 + 1);
  } while ((char *)(param_2) != (char *)(param_3));
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c75fb0; body size 23 bytes.
#line 1 "ENTRY_10c75fb0"

void __fastcall FUN_10c75fb0(undefined4 *param_1)

{
  free((void *)param_1[7]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c760e0; body size 48 bytes.
#line 1 "ENTRY_10c760e0"

void __fastcall FUN_10c760e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  param_1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(param_1) != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
    while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)((undefined4 *)puVar2[3]);
      puVar2[3] = (undefined4)(0);
      (**(code **)*puVar2)(1);
      puVar2 = (undefined4 *)(puVar1);
    }
    *param_1 = (undefined4)(0);
  }
  return;
}


// Reference entry 10c76170; body size 34 bytes.
#line 1 "ENTRY_10c76170"

void __fastcall FUN_10c76170(int param_1)

{
  undefined4 *puVar1;
  
  thunk_FUN_10c7d430();
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 0x10) + 8))());
    if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


// Reference entry 10c761e0; body size 25 bytes.
#line 1 "ENTRY_10c761e0"

void __fastcall FUN_10c761e0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 0xc) + 8))());
    if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


// Reference entry 10c76540; body size 49 bytes.
#line 1 "ENTRY_10c76540"

void __fastcall FUN_10c76540(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_assert);
  puVar2 = (undefined4 *)((undefined4 *)param_1[5]);
  while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)puVar2[3]);
    puVar2[3] = (undefined4)(0);
    (**(code **)*puVar2)(1);
    puVar2 = (undefined4 *)(puVar1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c76c60; body size 17 bytes.
#line 1 "ENTRY_10c76c60"

int __thiscall FUN_10c76c60(undefined4 *param_1,int param_2)

{
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)((undefined4 *)*param_1);
  }
  return (int)(param_2 + (int)param_1);
}


// Reference entry 10c770a0; body size 39 bytes.
#line 1 "ENTRY_10c770a0"

int __thiscall FUN_10c770a0(int param_1,byte param_2)

{
  free(*(void **)(param_1 + 8));
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (int)(param_1);
}


// Reference entry 10c771c0; body size 45 bytes.
#line 1 "ENTRY_10c771c0"

undefined4 * __thiscall FUN_10c771c0(undefined4 *param_1,byte param_2)

{
  free((void *)param_1[7]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c77200; body size 39 bytes.
#line 1 "ENTRY_10c77200"

int __thiscall FUN_10c77200(int param_1,byte param_2)

{
  free(*(void **)(param_1 + 0xc));
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (int)(param_1);
}


// Reference entry 10c78bf0; body size 53 bytes.
#line 1 "ENTRY_10c78bf0"

uint __fastcall FUN_10c78bf0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(*(int *)(param_1 + 4) + 4));
  if ((((uVar1 != 0x14) && (uVar1 != 8)) && (uVar1 != 0xd)) &&
     ((uVar1 != 2 ||
      (((uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 4), uVar1 != 0x14 &&
        (uVar1 != 8)) && (uVar1 != 0xd)))))) {
    return (uint)(uVar1 & 0xffffff00);
  }
  return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 10c7a2d0; body size 21 bytes.
#line 1 "ENTRY_10c7a2d0"

bool FUN_10c7a2d0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10c7a9d0(10,0x7fffffff));
  return (bool)(iVar1 != 0x7fffffff);
}


// Reference entry 10c7ad10; body size 43 bytes.
#line 1 "ENTRY_10c7ad10"

undefined4 __thiscall FUN_10c7ad10(int param_1,char param_2)

{
  if (param_2 == 'a') {
    *(undefined4 *)(param_1 + 0x44) = 7;
    return (undefined4)(1);
  }
  if (param_2 == 'b') {
    *(undefined4 *)(param_1 + 0x44) = 8;
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10c7b430; body size 37 bytes.
#line 1 "ENTRY_10c7b430"

void FUN_10c7b430(void)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_10c7cce0(8));
  thunk_FUN_10c7a380();
  thunk_FUN_10c7bc70(uVar1);
  return;
}


// Reference entry 10c7c260; body size 62 bytes.
#line 1 "ENTRY_10c7c260"

void __thiscall FUN_10c7c260(size_t *param_1,undefined1 param_2)

{
  size_t _NewSize;
  void *pvVar1;
  
  if (*param_1 <= param_1[1]) {
    _NewSize = (size_t)(param_1[1] + 0x10);
    pvVar1 = (void *)(realloc((void *)param_1[2],_NewSize));
    if ((void *)(pvVar1) == (void *)0x0) {
                    
      std::_Xbad_alloc();
    }
    param_1[2] = (size_t)((size_t)pvVar1);
    *param_1 = (size_t)(_NewSize);
  }
  *(undefined1 *)(param_1[2] + param_1[1]) = param_2;
  param_1[1] = (size_t)(param_1[1] + 1);
  return;
}


// Reference entry 10c7c420; body size 49 bytes.
#line 1 "ENTRY_10c7c420"

uint __fastcall FUN_10c7c420(int *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((char *)(*param_1 + 1));
  if ((char *)(pcVar2) != (char *)param_1[2]) {
    if (((param_1[0x14] & 8U) == 0) && ((*pcVar2 == '(' || (*pcVar2 == ')')))) {
LAB_10c7c44b:
      return (uint)(((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(1)));
    }
    if ((param_1[0x14] & 0x10U) == 0) {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)((char *)((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(cVar1)));
      if ((cVar1 == '{') || (cVar1 == '}')) goto LAB_10c7c44b;
    }
  }
  return (uint)((uint)pcVar2 & 0xffffff00);
}


// Reference entry 10c7d3b0; body size 48 bytes.
#line 1 "ENTRY_10c7d3b0"

void __fastcall FUN_10c7d3b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((undefined4 *)*param_1);
  while ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)puVar2[3]);
    puVar2[3] = (undefined4)(0);
    (**(code **)*puVar2)(1);
    puVar2 = (undefined4 *)(puVar1);
  }
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10c7d870; body size 40 bytes.
#line 1 "ENTRY_10c7d870"

void FUN_10c7d870(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1 = (undefined4 *)(param_1 + 2);
  }
  return;
}


// Reference entry 10c7d8f0; body size 44 bytes.
#line 1 "ENTRY_10c7d8f0"

void FUN_10c7d8f0(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    *(undefined1 *)(param_1 + 2) = 0;
    param_1 = (undefined4 *)(param_1 + 3);
  }
  return;
}


// Reference entry 10c7e160; body size 48 bytes.
#line 1 "ENTRY_10c7e160"

uint FUN_10c7e160(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(0x811c9dc5);
  uVar2 = (uint)(0);
  if (param_2 != param_1) {
    do {
      pbVar1 = (byte *)((byte *)(uVar2 + param_1));
      uVar2 = (uint)(uVar2 + 1);
      uVar3 = (uint)((*pbVar1 ^ uVar3) * 0x1000193);
    } while (uVar2 < (uint)(param_2 - param_1));
  }
  return (uint)(uVar3);
}


// Reference entry 10c7e5a0; body size 17 bytes.
#line 1 "ENTRY_10c7e5a0"

undefined4 __fastcall FUN_10c7e5a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar1 = (undefined4)(4);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10c7e960; body size 16 bytes.
#line 1 "ENTRY_10c7e960"

undefined4 __fastcall FUN_10c7e960(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x178) + 0x14))();
  return (undefined4)(1);
}


// Reference entry 10c7fcd0; body size 40 bytes.
#line 1 "ENTRY_10c7fcd0"

void __thiscall FUN_10c7fcd0(undefined4 *param_1,uint param_2)

{
  if (param_2 <= (uint)param_1[4]) {
    param_1[4] = (undefined4)(param_2);
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)((undefined4 *)*param_1);
    }
    *(undefined1 *)((int)param_1 + param_2) = 0;
    return;
  }
  thunk_FUN_10c7ddf0();
  return;
}


// Reference entry 10c83a10; body size 51 bytes.
#line 1 "ENTRY_10c83a10"

undefined4 * __thiscall FUN_10c83a10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_111a4bc0(0,"SCSwfObjQInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjQInternalListener);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10c83c30; body size 56 bytes.
#line 1 "ENTRY_10c83c30"

void __fastcall FUN_10c83c30(int param_1)

{
  if ((*(char *)(param_1 + 0x14) == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_112af4e0("SCSwfObjQListener",3,"Subscribe to SwfObjQ events");
      thunk_FUN_11159cc0(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// Reference entry 10c83c80; body size 56 bytes.
#line 1 "ENTRY_10c83c80"

void __fastcall FUN_10c83c80(int param_1)

{
  if ((*(char *)(param_1 + 0x14) != '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_112af4e0("SCSwfObjQListener",3,"Unsubscribe from SwfObjQ events");
      thunk_FUN_1115b9c0(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


// Reference entry 10c83ce0; body size 44 bytes.
#line 1 "ENTRY_10c83ce0"

undefined4 * __thiscall FUN_10c83ce0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_111a4bc0(0,"SCSwfObjUMInternalListener");
  param_1[6] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjUMInternalListener);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10c83f10; body size 27 bytes.
#line 1 "ENTRY_10c83f10"

undefined4 __fastcall FUN_10c83f10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a2df0());
  (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(uVar1);
  return (undefined4)(0);
}


// Reference entry 10c83f90; body size 34 bytes.
#line 1 "ENTRY_10c83f90"

void __fastcall FUN_10c83f90(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (DAT_122e8a18 != 0) {
      FUN_10070892(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// Reference entry 10c83fc0; body size 34 bytes.
#line 1 "ENTRY_10c83fc0"

void __fastcall FUN_10c83fc0(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    if (DAT_122e8a18 != 0) {
      FUN_10065348(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


// Reference entry 10c85140; body size 40 bytes.
#line 1 "ENTRY_10c85140"

int __thiscall FUN_10c85140(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10c85210(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
  }
  return (int)(iVar1);
}


// Reference entry 10c85180; body size 40 bytes.
#line 1 "ENTRY_10c85180"

int __thiscall FUN_10c85180(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10c85290(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
  }
  return (int)(iVar1);
}


// Reference entry 10c851c0; body size 60 bytes.
#line 1 "ENTRY_10c851c0"

int __thiscall FUN_10c851c0(int *param_1,SCStr *param_2)

{
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1028c3a0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10c87b70; body size 59 bytes.
#line 1 "ENTRY_10c87b70"

void __thiscall FUN_10c87b70(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10c84db0(puVar1,param_2);
  return;
}


// Reference entry 10c88a30; body size 39 bytes.
#line 1 "ENTRY_10c88a30"

undefined4 * __fastcall FUN_10c88a30(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88a60; body size 39 bytes.
#line 1 "ENTRY_10c88a60"

undefined4 * __fastcall FUN_10c88a60(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c89fc0; body size 27 bytes.
#line 1 "ENTRY_10c89fc0"

int FUN_10c89fc0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10c872c0(local_8,param_1));
  return (int)(*piVar1 + 0x10);
}


// Reference entry 10c89ff0; body size 27 bytes.
#line 1 "ENTRY_10c89ff0"

int FUN_10c89ff0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10c87570(local_8,param_1));
  return (int)(*piVar1 + 0x10);
}


// Reference entry 10c8be80; body size 38 bytes.
#line 1 "ENTRY_10c8be80"

void FUN_10c8be80(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10c8edf0(param_1,param_2);
  thunk_FUN_10c8f700(param_1,param_2);
  return;
}


// Reference entry 10c8d640; body size 50 bytes.
#line 1 "ENTRY_10c8d640"

SCStr * __thiscall FUN_10c8d640(int param_1,SCStr *param_2)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + -4) != 0) {
    pcVar1 = (char *)((char *)thunk_FUN_110810b0());
    ((SCStr *)(param_2))->int_allocRep(pcVar1);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep((char *)0x0);
  return (SCStr *)(param_2);
}


// Reference entry 10c8dce0; body size 50 bytes.
#line 1 "ENTRY_10c8dce0"

undefined4 __thiscall FUN_10c8dce0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + -4) != 0) {
    cVar1 = (char)(thunk_FUN_110833f0());
    if (cVar1 != '\0') {
      uVar2 = (undefined4)(FUN_10c8de80(param_2));
      uVar2 = (undefined4)(thunk_FUN_11081b20(uVar2));
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c8de30; body size 31 bytes.
#line 1 "ENTRY_10c8de30"

undefined4 FUN_10c8de30(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (undefined4)(0);
  case 1:
  case 6:
    return (undefined4)(1);
  default:
    return (undefined4)(2);
  }
}


// Reference entry 10c8de80; body size 38 bytes.
#line 1 "ENTRY_10c8de80"

undefined4 FUN_10c8de80(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 0xb:
    return (undefined4)(0);
  default:
    return (undefined4)(2);
  case 10:
  case 0xf:
    return (undefined4)(1);
  }
}


// Reference entry 10c92d70; body size 59 bytes.
#line 1 "ENTRY_10c92d70"

void __thiscall FUN_10c92d70(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10c84db0(puVar1,param_2);
  return;
}


// Reference entry 10c92e40; body size 35 bytes.
#line 1 "ENTRY_10c92e40"

void __fastcall FUN_10c92e40(int param_1)

{
  if (*(int *)(param_1 + -4) != 0) {
    thunk_FUN_110965d0();
    return;
  }
  return;
}


// Reference entry 10c93210; body size 46 bytes.
#line 1 "ENTRY_10c93210"

char * FUN_10c93210(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (char *)("Unknown");
  case 1:
    return (char *)("N/A");
  case 2:
    return (char *)("Charging");
  case 3:
    return (char *)("Discharging");
  default:
    return (char *)("Bad Charge Enum");
  }
}


// Reference entry 10c93f50; body size 53 bytes.
#line 1 "ENTRY_10c93f50"

void __fastcall FUN_10c93f50(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_105c0190(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_105c0190(uVar1);
    return;
  }
  thunk_FUN_105c0190(0);
  return;
}


// Reference entry 10c96350; body size 25 bytes.
#line 1 "ENTRY_10c96350"

undefined4 __fastcall FUN_10c96350(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 4));
  }
  iVar1 = (int)(*(int *)(param_1 + 0x70));
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  if (*(char *)(iVar1 + 0x90) != '\0') {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x94));
  }
  return (undefined4)(0);
}


// Reference entry 10c96760; body size 24 bytes.
#line 1 "ENTRY_10c96760"

undefined4 __fastcall FUN_10c96760(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    return (undefined4)(**(undefined4 **)(param_1 + 0x6c));
  }
  iVar1 = (int)(*(int *)(param_1 + 0x70));
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  if (*(char *)(iVar1 + 0x78) != '\0') {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x7c));
  }
  if ((*(char *)(iVar1 + 0x80) != '\0') && (*(char *)(iVar1 + 0x88) != '\0')) {
    uVar2 = (undefined4)(thunk_FUN_114568e0(*(undefined4 *)(iVar1 + 0x84),*(undefined4 *)(iVar1 + 0x8c)));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10c97630; body size 20 bytes.
#line 1 "ENTRY_10c97630"

undefined4 __thiscall FUN_10c97630(int param_1,undefined4 param_2)

{
  thunk_FUN_1125cbb0(param_1 + 0x10);
  return (undefined4)(param_2);
}


// Reference entry 10c97650; body size 26 bytes.
#line 1 "ENTRY_10c97650"

undefined4 __fastcall FUN_10c97650(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 8));
  }
  iVar1 = (int)(*(int *)(param_1 + 0x70));
  if (iVar1 == 0) {
    return (undefined4)(0xffffffff);
  }
  if (*(char *)(iVar1 + 0x80) != '\0') {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x84));
  }
  return (undefined4)(0);
}


// Reference entry 10c97670; body size 26 bytes.
#line 1 "ENTRY_10c97670"

undefined4 __fastcall FUN_10c97670(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0xc));
  }
  iVar1 = (int)(*(int *)(param_1 + 0x70));
  if (iVar1 == 0) {
    return (undefined4)(0xffffffff);
  }
  if (*(char *)(iVar1 + 0x88) != '\0') {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x8c));
  }
  return (undefined4)(0);
}


// Reference entry 10c97b50; body size 22 bytes.
#line 1 "ENTRY_10c97b50"

int __fastcall FUN_10c97b50(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x24));
  if (iVar1 < 0) {
    iVar1 = (int)(*(int *)(param_1 + 0x70));
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0xa0) != '\0') {
        return (int)(*(int *)(iVar1 + 0xa4));
      }
      return (int)(-1);
    }
    iVar1 = (int)(-1);
  }
  return (int)(iVar1);
}


// Reference entry 10c97b70; body size 53 bytes.
#line 1 "ENTRY_10c97b70"

void __fastcall FUN_10c97b70(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11456d50(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11456d50(uVar1);
    return;
  }
  thunk_FUN_11456d50(0);
  return;
}


// Reference entry 10c980a0; body size 53 bytes.
#line 1 "ENTRY_10c980a0"

void __fastcall FUN_10c980a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11456de0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11456de0(uVar1);
    return;
  }
  thunk_FUN_11456de0(0);
  return;
}


// Reference entry 10c98100; body size 53 bytes.
#line 1 "ENTRY_10c98100"

void __fastcall FUN_10c98100(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11456e70(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11456e70(uVar1);
    return;
  }
  thunk_FUN_11456e70(0);
  return;
}


// Reference entry 10c99580; body size 53 bytes.
#line 1 "ENTRY_10c99580"

void __fastcall FUN_10c99580(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11457d40(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11457d40(uVar1);
    return;
  }
  thunk_FUN_11457d40(0);
  return;
}


// Reference entry 10c99820; body size 53 bytes.
#line 1 "ENTRY_10c99820"

void __fastcall FUN_10c99820(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_114575a0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_114575a0(uVar1);
    return;
  }
  thunk_FUN_114575a0(0);
  return;
}


// Reference entry 10c99870; body size 53 bytes.
#line 1 "ENTRY_10c99870"

void __fastcall FUN_10c99870(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11457630(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11457630(uVar1);
    return;
  }
  thunk_FUN_11457630(0);
  return;
}


// Reference entry 10c998c0; body size 53 bytes.
#line 1 "ENTRY_10c998c0"

void __fastcall FUN_10c998c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11457670(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11457670(uVar1);
    return;
  }
  thunk_FUN_11457670(0);
  return;
}


// Reference entry 10c99dc0; body size 53 bytes.
#line 1 "ENTRY_10c99dc0"

void __fastcall FUN_10c99dc0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_114576b0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_114576b0(uVar1);
    return;
  }
  thunk_FUN_114576b0(0);
  return;
}


// Reference entry 10c9a420; body size 53 bytes.
#line 1 "ENTRY_10c9a420"

void __fastcall FUN_10c9a420(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_114576f0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_114576f0(uVar1);
    return;
  }
  thunk_FUN_114576f0(0);
  return;
}


// Reference entry 10c9b060; body size 53 bytes.
#line 1 "ENTRY_10c9b060"

void __fastcall FUN_10c9b060(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_114577b0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_114577b0(uVar1);
    return;
  }
  thunk_FUN_114577b0(0);
  return;
}


// Reference entry 10c9b1e0; body size 45 bytes.
#line 1 "ENTRY_10c9b1e0"

undefined4 __fastcall FUN_10c9b1e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6c));
  if (iVar1 != 0) {
    return (undefined4)(((uint)((int3)((uint)iVar1 >> 8)) << 8 | (uint)(*(undefined1 *)(iVar1 + 0x17))));
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar2 = (undefined4)(thunk_FUN_1034d200());
    uVar2 = (undefined4)(thunk_FUN_114577f0(uVar2));
    return (undefined4)(uVar2);
  }
  uVar2 = (undefined4)(thunk_FUN_114577f0(0));
  return (undefined4)(uVar2);
}


// Reference entry 10c9c3f0; body size 53 bytes.
#line 1 "ENTRY_10c9c3f0"

void __fastcall FUN_10c9c3f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11457d80(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11457d80(uVar1);
    return;
  }
  thunk_FUN_11457d80(0);
  return;
}


// Reference entry 10c9c4d0; body size 59 bytes.
#line 1 "ENTRY_10c9c4d0"

undefined4 __fastcall FUN_10c9c4d0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x24));
  if (iVar1 < 0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      return (undefined4)(0);
    }
    iVar1 = (int)(thunk_FUN_1034dc70());
  }
  if (0x16 < iVar1) {
    iVar1 = (int)(*(int *)(param_1 + 0x24));
    if (iVar1 < 0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        return (undefined4)(1);
      }
      iVar1 = (int)(thunk_FUN_1034dc70());
    }
    if (iVar1 != 0x18) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c9c640; body size 36 bytes.
#line 1 "ENTRY_10c9c640"

bool __fastcall FUN_10c9c640(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x24));
  if (iVar1 < 0) {
    if (*(int *)(param_1 + 0x70) != 0) {
      iVar1 = (int)(thunk_FUN_1034dc70());
      return (bool)(0x20 < iVar1);
    }
    iVar1 = (int)(-1);
  }
  return (bool)(0x20 < iVar1);
}


// Reference entry 10c9c6e0; body size 53 bytes.
#line 1 "ENTRY_10c9c6e0"

void __fastcall FUN_10c9c6e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11457f10(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11457f10(uVar1);
    return;
  }
  thunk_FUN_11457f10(0);
  return;
}


// Reference entry 10c9c980; body size 53 bytes.
#line 1 "ENTRY_10c9c980"

void __fastcall FUN_10c9c980(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11457fd0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11457fd0(uVar1);
    return;
  }
  thunk_FUN_11457fd0(0);
  return;
}


// Reference entry 10c9c9d0; body size 53 bytes.
#line 1 "ENTRY_10c9c9d0"

void __fastcall FUN_10c9c9d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11458020(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11458020(uVar1);
    return;
  }
  thunk_FUN_11458020(0);
  return;
}


// Reference entry 10c9ca20; body size 53 bytes.
#line 1 "ENTRY_10c9ca20"

void __fastcall FUN_10c9ca20(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_11458060(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_11458060(uVar1);
    return;
  }
  thunk_FUN_11458060(0);
  return;
}


// Reference entry 10c9cc60; body size 53 bytes.
#line 1 "ENTRY_10c9cc60"

void __fastcall FUN_10c9cc60(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    thunk_FUN_114580e0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200());
    thunk_FUN_114580e0(uVar1);
    return;
  }
  thunk_FUN_114580e0(0);
  return;
}


// Reference entry 10ca3b90; body size 37 bytes.
#line 1 "ENTRY_10ca3b90"

void __thiscall FUN_10ca3b90(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x28) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x28) + 0x20))());
  }
  if (iVar1 == param_2) {
    thunk_FUN_10cb1110();
  }
  return;
}


// Reference entry 10ca3ee0; body size 37 bytes.
#line 1 "ENTRY_10ca3ee0"

undefined1 __fastcall FUN_10ca3ee0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10ca3ff0; body size 37 bytes.
#line 1 "ENTRY_10ca3ff0"

undefined1 __fastcall FUN_10ca3ff0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10ca4250; body size 45 bytes.
#line 1 "ENTRY_10ca4250"

void __fastcall FUN_10ca4250(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_10c83fc0();
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
                    
                    
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  return;
}


// Reference entry 10ca42b0; body size 33 bytes.
#line 1 "ENTRY_10ca42b0"

void __fastcall FUN_10ca42b0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x54) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x50) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10ca4b50; body size 42 bytes.
#line 1 "ENTRY_10ca4b50"

undefined4 * __fastcall FUN_10ca4b50(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateWizCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca4d90; body size 42 bytes.
#line 1 "ENTRY_10ca4d90"

undefined4 * __fastcall FUN_10ca4d90(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca4dd0; body size 45 bytes.
#line 1 "ENTRY_10ca4dd0"

undefined4 * __fastcall FUN_10ca4dd0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca4e10; body size 45 bytes.
#line 1 "ENTRY_10ca4e10"

undefined4 * __fastcall FUN_10ca4e10(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca5270; body size 45 bytes.
#line 1 "ENTRY_10ca5270"

undefined4 * __fastcall FUN_10ca5270(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca5370; body size 45 bytes.
#line 1 "ENTRY_10ca5370"

undefined4 * __fastcall FUN_10ca5370(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca5ac0; body size 45 bytes.
#line 1 "ENTRY_10ca5ac0"

undefined4 * __fastcall FUN_10ca5ac0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca5b00; body size 45 bytes.
#line 1 "ENTRY_10ca5b00"

undefined4 * __fastcall FUN_10ca5b00(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca5e80; body size 45 bytes.
#line 1 "ENTRY_10ca5e80"

undefined4 * __fastcall FUN_10ca5e80(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateErrorState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca6210; body size 45 bytes.
#line 1 "ENTRY_10ca6210"

undefined4 * __fastcall FUN_10ca6210(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca67f0; body size 45 bytes.
#line 1 "ENTRY_10ca67f0"

undefined4 * __fastcall FUN_10ca67f0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca7710; body size 59 bytes.
#line 1 "ENTRY_10ca7710"

void FUN_10ca7710(int param_1,int param_2)

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


// Reference entry 10ca7ef0; body size 34 bytes.
#line 1 "ENTRY_10ca7ef0"

uint FUN_10ca7ef0(void)

{
  SCLibrary *pSVar1;
  uint uVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar2 = (uint)(0);
  if ((SCLibrary *)(pSVar1) != (SCLibrary *)0x0) {
    pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar2 = (uint)((**(code **)(*(int *)pSVar1 + 0xf4))());
    if (uVar2 == 0) {
      return (uint)(1);
    }
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 10ca8b40; body size 34 bytes.
#line 1 "ENTRY_10ca8b40"

undefined4 __fastcall FUN_10ca8b40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ca92f0; body size 30 bytes.
#line 1 "ENTRY_10ca92f0"

undefined4 __fastcall FUN_10ca92f0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ca9450; body size 26 bytes.
#line 1 "ENTRY_10ca9450"

undefined4 __thiscall FUN_10ca9450(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10ca9a70; body size 23 bytes.
#line 1 "ENTRY_10ca9a70"

undefined4 __thiscall FUN_10ca9a70(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cb1020; body size 45 bytes.
#line 1 "ENTRY_10cb1020"

void __fastcall FUN_10cb1020(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_10c83fc0();
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
                    
                    
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  return;
}


// Reference entry 10cb1ab0; body size 24 bytes.
#line 1 "ENTRY_10cb1ab0"

undefined4 __fastcall FUN_10cb1ab0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10cb1c70; body size 39 bytes.
#line 1 "ENTRY_10cb1c70"

undefined4 __fastcall FUN_10cb1c70(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10cb2250; body size 63 bytes.
#line 1 "ENTRY_10cb2250"

undefined1 FUN_10cb2250(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10cb2f70; body size 40 bytes.
#line 1 "ENTRY_10cb2f70"

void __fastcall FUN_10cb2f70(int param_1)

{
  thunk_FUN_104dec20();
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  thunk_FUN_10cb1110();
  return;
}


// Reference entry 10cb3780; body size 61 bytes.
#line 1 "ENTRY_10cb3780"

void __fastcall FUN_10cb3780(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10ca7a80();
        return;
      }
    }
  }
  return;
}


// Reference entry 10cb3800; body size 45 bytes.
#line 1 "ENTRY_10cb3800"

void __fastcall FUN_10cb3800(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_10c83fc0();
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
                    
                    
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  return;
}


// Reference entry 10cb5cc0; body size 37 bytes.
#line 1 "ENTRY_10cb5cc0"

void __fastcall FUN_10cb5cc0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_111004d0());
  (**(code **)(**(int **)(param_1 + 8) + 0x228))(uVar1);
  return;
}


// Reference entry 10cb6550; body size 21 bytes.
#line 1 "ENTRY_10cb6550"

void __fastcall FUN_10cb6550(int param_1)

{
  if (*(int *)(param_1 + 0xd0) != 2) {
    thunk_FUN_110fa660();
    return;
  }
  return;
}


// Reference entry 10cb68f0; body size 50 bytes.
#line 1 "ENTRY_10cb68f0"

void __thiscall FUN_10cb68f0(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_1006aac8();
    return;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x230))(0x44e);
  (**(code **)(**(int **)(param_1 + 8) + 0xb4))();
  return;
}


// Reference entry 10cb6c40; body size 18 bytes.
#line 1 "ENTRY_10cb6c40"

void FUN_10cb6c40(int param_1)

{
  if (param_1 == 0) {
    thunk_FUN_10dd4b80();
  }
  return;
}


// Reference entry 10cb6c60; body size 18 bytes.
#line 1 "ENTRY_10cb6c60"

void FUN_10cb6c60(int param_1)

{
  if (param_1 == 0) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10cb7580; body size 30 bytes.
#line 1 "ENTRY_10cb7580"

undefined4 FUN_10cb7580(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_10ca43c0());
  if ((iVar1 != 1) && (iVar1 != 0x12)) {
    uVar2 = (undefined4)(thunk_FUN_10ca8700());
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10cb8b30; body size 60 bytes.
#line 1 "ENTRY_10cb8b30"

int __thiscall FUN_10cb8b30(int *param_1,SCStr *param_2)

{
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10cb8b80(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10cbd350; body size 19 bytes.
#line 1 "ENTRY_10cbd350"

void __thiscall FUN_10cbd350(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cbd390; body size 21 bytes.
#line 1 "ENTRY_10cbd390"

void FUN_10cbd390(undefined4 *param_1,undefined4 param_2)

{
  FUN_10cbcff0(*param_1,param_2);
  return;
}


// Reference entry 10cbd3c0; body size 19 bytes.
#line 1 "ENTRY_10cbd3c0"

void __thiscall FUN_10cbd3c0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cbd9d0; body size 45 bytes.
#line 1 "ENTRY_10cbd9d0"

int * __thiscall FUN_10cbd9d0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 != 0) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x54));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cbda80; body size 18 bytes.
#line 1 "ENTRY_10cbda80"

bool __thiscall FUN_10cbda80(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(false);
  if (param_2 != 5) {
    bVar1 = (bool)(*(int *)(param_1 + 0x5c) != 0);
  }
  return (bool)(bVar1);
}


// Reference entry 10ccf340; body size 47 bytes.
#line 1 "ENTRY_10ccf340"

void __fastcall FUN_10ccf340(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1c));
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
  if ((undefined4 *)(puVar2) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)(*(int *)*puVar2 + 0x18))();
      puVar2 = (undefined4 *)(puVar2 + 1);
    } while ((undefined4 *)(puVar2) != (undefined4 *)(puVar1));
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    return;
  }
  *(undefined4 **)(param_1 + 0x20) = puVar2;
  return;
}


// Reference entry 10cd4010; body size 57 bytes.
#line 1 "ENTRY_10cd4010"

int * __thiscall FUN_10cd4010(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 < *(int *)(*(int *)(param_1 + 0x18) + 0x617c)) {
    piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x18) + 0x6164 + param_3 * 8));
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 10cd7cb0; body size 31 bytes.
#line 1 "ENTRY_10cd7cb0"

void __thiscall FUN_10cd7cb0(int param_1,int *param_2)

{
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x38))(*(undefined4 *)(param_1 + 4));
  }
  thunk_FUN_10cd9930();
  return;
}


// Reference entry 10cd9af0; body size 43 bytes.
#line 1 "ENTRY_10cd9af0"

void __thiscall FUN_10cd9af0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x34) = param_2;
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 4))(param_1 + 8,param_2));
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  (**(code **)(*(int *)(param_1 + 0x44) + 0x14))();
  return;
}


// Reference entry 10cdaa70; body size 44 bytes.
#line 1 "ENTRY_10cdaa70"

void __thiscall FUN_10cdaa70(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1c));
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
  if ((undefined4 *)(puVar2) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)(*(int *)*puVar2 + 4))(param_1 + 8,param_2);
      puVar2 = (undefined4 *)(puVar2 + 1);
    } while ((undefined4 *)(puVar2) != (undefined4 *)(puVar1));
  }
  return;
}


// Reference entry 10cdc070; body size 33 bytes.
#line 1 "ENTRY_10cdc070"

void __fastcall FUN_10cdc070(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10cdc0a0; body size 33 bytes.
#line 1 "ENTRY_10cdc0a0"

void __fastcall FUN_10cdc0a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10cdc3e0; body size 37 bytes.
#line 1 "ENTRY_10cdc3e0"

int * __fastcall FUN_10cdc3e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10cdcc40; body size 33 bytes.
#line 1 "ENTRY_10cdcc40"

void __fastcall FUN_10cdcc40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10cdd550; body size 28 bytes.
#line 1 "ENTRY_10cdd550"

void __fastcall FUN_10cdd550(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 0x1c))());
  if (cVar1 != '\0') {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x24) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10cddc50; body size 19 bytes.
#line 1 "ENTRY_10cddc50"

void __fastcall FUN_10cddc50(undefined4 param_1)

{
  thunk_FUN_11128910();
  FUN_10070892(param_1);
  return;
}


// Reference entry 10cddc70; body size 19 bytes.
#line 1 "ENTRY_10cddc70"

void __fastcall FUN_10cddc70(undefined4 param_1)

{
  thunk_FUN_11128910();
  FUN_10065348(param_1);
  return;
}


// Reference entry 10cdf040; body size 39 bytes.
#line 1 "ENTRY_10cdf040"

int __fastcall FUN_10cdf040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(9);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("CurrentDailyIndexRefreshTime");
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 10cdf070; body size 38 bytes.
#line 1 "ENTRY_10cdf070"

undefined4 __thiscall FUN_10cdf070(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredDailyIndexRefreshTime",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10cdf0a0; body size 38 bytes.
#line 1 "ENTRY_10cdf0a0"

undefined4 __thiscall FUN_10cdf0a0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("AlbumArtistDisplayOption",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10cdf0d0; body size 35 bytes.
#line 1 "ENTRY_10cdf0d0"

void __fastcall FUN_10cdf0d0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x3d) = 1;
  iStack_14 = (int)(param_1);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIIndexManager:onIndexEvent");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10cdf240; body size 61 bytes.
#line 1 "ENTRY_10cdf240"

void __fastcall FUN_10cdf240(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(param_1 + -4);
  uVar1 = (undefined4)(thunk_FUN_110b2900(param_1 + -4,"RINCON_AssociatedZPUDN",&DAT_1189bdd4,0));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}


// Reference entry 10cdfa20; body size 61 bytes.
#line 1 "ENTRY_10cdfa20"

void FUN_10cdfa20(void)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  thunk_FUN_111a36f0(DAT_12126b84 );

  return;

 } catch (...) { }
}


// Reference entry 10cdfcc0; body size 25 bytes.
#line 1 "ENTRY_10cdfcc0"

undefined4 FUN_10cdfcc0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_111a3630());
  if (iVar1 == 6) {
    uVar2 = (undefined4)(thunk_FUN_111a2ec0());
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10cdfce0; body size 25 bytes.
#line 1 "ENTRY_10cdfce0"

undefined4 FUN_10cdfce0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_111a3630());
  if (iVar1 == 2) {
    uVar2 = (undefined4)(thunk_FUN_111a32a0());
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10cdfda0; body size 59 bytes.
#line 1 "ENTRY_10cdfda0"

void __thiscall FUN_10cdfda0(int *param_1,int param_2)

{
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
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 10cdffe0; body size 33 bytes.
#line 1 "ENTRY_10cdffe0"

void FUN_10cdffe0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (bVar1) {
    thunk_FUN_10ce04e0();
  }
  return;
}


// Reference entry 10ce0060; body size 18 bytes.
#line 1 "ENTRY_10ce0060"

undefined4 __fastcall FUN_10ce0060(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1113f590(0));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10ce0ad0; body size 46 bytes.
#line 1 "ENTRY_10ce0ad0"

void __thiscall FUN_10ce0ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x34));
  if (iVar1 != 0) {
    iVar2 = (int)(thunk_FUN_1113f590(0));
    if (iVar2 != 0) {
      thunk_FUN_10ce00f0(iVar1,iVar2,1,param_2,1);
    }
  }
  return;
}


// Reference entry 10ce3280; body size 59 bytes.
#line 1 "ENTRY_10ce3280"

void __thiscall FUN_10ce3280(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10ce2d60(puVar1,param_2);
  return;
}


// Reference entry 10ce3d50; body size 60 bytes.
#line 1 "ENTRY_10ce3d50"

void FUN_10ce3d50(int param_1,int param_2)

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


// Reference entry 10ce4000; body size 63 bytes.
#line 1 "ENTRY_10ce4000"

int * __thiscall FUN_10ce4000(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x84) + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10ce4570; body size 28 bytes.
#line 1 "ENTRY_10ce4570"

void __fastcall FUN_10ce4570(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x84));
  thunk_FUN_10ce2c30(*puVar1,*(undefined4 *)(param_1 + 0x88),puVar1);
  *(undefined4 *)(param_1 + 0x88) = *puVar1;
  return;
}


// Reference entry 10ce4c60; body size 59 bytes.
#line 1 "ENTRY_10ce4c60"

void __thiscall FUN_10ce4c60(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10ce2d60(puVar1,param_2);
  return;
}


// Reference entry 10ce5cd0; body size 40 bytes.
#line 1 "ENTRY_10ce5cd0"

int __thiscall FUN_10ce5cd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10ce5d10(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10ce64d0; body size 55 bytes.
#line 1 "ENTRY_10ce64d0"

void __thiscall FUN_10ce64d0(int param_1,int *param_2,SCStr *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (uint)(((SCStr *)(param_3))->hash());
  iVar2 = (int)(thunk_FUN_10ce5d10(local_8,param_3,uVar1));
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 10ce6a80; body size 39 bytes.
#line 1 "ENTRY_10ce6a80"

undefined4 * __fastcall FUN_10ce6a80(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce71c0; body size 33 bytes.
#line 1 "ENTRY_10ce71c0"

void __fastcall FUN_10ce71c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce71f0; body size 33 bytes.
#line 1 "ENTRY_10ce71f0"

void __fastcall FUN_10ce71f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce73c0; body size 33 bytes.
#line 1 "ENTRY_10ce73c0"

void __fastcall FUN_10ce73c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce73f0; body size 33 bytes.
#line 1 "ENTRY_10ce73f0"

void __fastcall FUN_10ce73f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce7740; body size 37 bytes.
#line 1 "ENTRY_10ce7740"

int * __fastcall FUN_10ce7740(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10ce7770; body size 37 bytes.
#line 1 "ENTRY_10ce7770"

int * __fastcall FUN_10ce7770(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10ce7820; body size 27 bytes.
#line 1 "ENTRY_10ce7820"

int FUN_10ce7820(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10ce5f30(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10ce83a0; body size 33 bytes.
#line 1 "ENTRY_10ce83a0"

void __fastcall FUN_10ce83a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce83d0; body size 33 bytes.
#line 1 "ENTRY_10ce83d0"

void __fastcall FUN_10ce83d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce9420; body size 60 bytes.
#line 1 "ENTRY_10ce9420"

int FUN_10ce9420(SCStr *param_1)

{
  uint uVar1;
  undefined1 local_8 [4];
  int local_4;
  
  uVar1 = (uint)(((SCStr *)(param_1))->hash());
  thunk_FUN_10ce5d10(local_8,param_1,uVar1);
  if (local_4 != 0) {
    return (int)(local_4 + 0xc);
  }
                    
  std::_Xout_of_range("invalid unordered_map<K, T> key");
}


// Reference entry 10cee1c0; body size 59 bytes.
#line 1 "ENTRY_10cee1c0"

void __thiscall FUN_10cee1c0(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10cede00(puVar1,param_2);
  return;
}


// Reference entry 10cee720; body size 60 bytes.
#line 1 "ENTRY_10cee720"

void __fastcall FUN_10cee720(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_10c21f70(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_10c24160();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cee8d0; body size 33 bytes.
#line 1 "ENTRY_10cee8d0"

void __fastcall FUN_10cee8d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10cee900; body size 33 bytes.
#line 1 "ENTRY_10cee900"

void __fastcall FUN_10cee900(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ceeb90; body size 37 bytes.
#line 1 "ENTRY_10ceeb90"

int * __fastcall FUN_10ceeb90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10ceee20; body size 59 bytes.
#line 1 "ENTRY_10ceee20"

void __thiscall FUN_10ceee20(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_102a3ea0(param_1,*(undefined4 *)(iVar1 + 4));
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


// Reference entry 10ceeea0; body size 33 bytes.
#line 1 "ENTRY_10ceeea0"

void __fastcall FUN_10ceeea0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10cf0930; body size 59 bytes.
#line 1 "ENTRY_10cf0930"

void __thiscall FUN_10cf0930(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10cede00(puVar1,param_2);
  return;
}


// Reference entry 10cf1010; body size 22 bytes.
#line 1 "ENTRY_10cf1010"

void FUN_10cf1010(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 10cf1030; body size 23 bytes.
#line 1 "ENTRY_10cf1030"

void FUN_10cf1030(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10cf3370; body size 19 bytes.
#line 1 "ENTRY_10cf3370"

void __thiscall FUN_10cf3370(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cf3390; body size 19 bytes.
#line 1 "ENTRY_10cf3390"

void __thiscall FUN_10cf3390(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cf33f0; body size 17 bytes.
#line 1 "ENTRY_10cf33f0"

void FUN_10cf33f0(undefined4 *param_1)

{
  FUN_10cf1ee0(*param_1);
  return;
}


// Reference entry 10cf3410; body size 17 bytes.
#line 1 "ENTRY_10cf3410"

void FUN_10cf3410(undefined4 *param_1)

{
  FUN_10cf2340(*param_1);
  return;
}


// Reference entry 10cf3450; body size 19 bytes.
#line 1 "ENTRY_10cf3450"

void __thiscall FUN_10cf3450(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cf3470; body size 19 bytes.
#line 1 "ENTRY_10cf3470"

void __thiscall FUN_10cf3470(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cf3940; body size 31 bytes.
#line 1 "ENTRY_10cf3940"

void __thiscall FUN_10cf3940(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2);
  if (*param_1 + 8U != param_2) {
    param_2 = (uint)(param_2 & 0xffffff00);
    thunk_FUN_1065a700(uVar1,param_2);
  }
  return;
}


// Reference entry 10cf4ac0; body size 22 bytes.
#line 1 "ENTRY_10cf4ac0"

void FUN_10cf4ac0(undefined4 *param_1)

{
  thunk_FUN_10cf3e20(*(undefined4 *)*param_1,(undefined4 *)*param_1);
  return;
}


// Reference entry 10cf4ae0; body size 29 bytes.
#line 1 "ENTRY_10cf4ae0"

void FUN_10cf4ae0(void)

{
 try {
  undefined1 local_8 [8];
  
  thunk_FUN_10cf3d20(local_8,&stack0x00000004);
  return;

 } catch (...) { }
}


// Reference entry 10cf5110; body size 29 bytes.
#line 1 "ENTRY_10cf5110"

void FUN_10cf5110(void)

{
 try {
  undefined1 local_8 [8];
  
  thunk_FUN_10cf3d20(local_8,&stack0x00000004);
  return;

 } catch (...) { }
}


// Reference entry 10cf53c0; body size 18 bytes.
#line 1 "ENTRY_10cf53c0"

void FUN_10cf53c0(void)

{
 try {
  thunk_FUN_10cf4bb0(&stack0x00000004);
  return;

 } catch (...) { }
}


// Reference entry 10cf6150; body size 35 bytes.
#line 1 "ENTRY_10cf6150"

SCStr * __thiscall FUN_10cf6150(int param_1,SCStr *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)((char *)(**(code **)(**(int **)(param_1 + 0x18) + 0x2c))());
  pcVar2 = (char *)("");
  if ((char *)(pcVar1) != (char *)0x0) {
    pcVar2 = (char *)(pcVar1);
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10cf7f50; body size 50 bytes.
#line 1 "ENTRY_10cf7f50"

SCStr * __thiscall FUN_10cf7f50(int *param_1,SCStr *param_2)

{
  if (((char *)(char *)(param_1[0x10]) != (char *)0x0) && (*(char *)param_1[0x10] != '\0')) {
    ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x10));
    return (SCStr *)(param_2);
  }
  (**(code **)(*param_1 + 0x38))(param_2);
  return (SCStr *)(param_2);
}


// Reference entry 10cf8b00; body size 19 bytes.
#line 1 "ENTRY_10cf8b00"

uint __fastcall FUN_10cf8b00(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x10))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10cf9070; body size 23 bytes.
#line 1 "ENTRY_10cf9070"

void FUN_10cf9070(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10cf9740; body size 20 bytes.
#line 1 "ENTRY_10cf9740"

undefined4 __fastcall FUN_10cf9740(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10cf9c70; body size 17 bytes.
#line 1 "ENTRY_10cf9c70"

undefined4 __fastcall FUN_10cf9c70(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10cf9c90; body size 63 bytes.
#line 1 "ENTRY_10cf9c90"

int * __thiscall FUN_10cf9c90(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x88) + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cfa090; body size 17 bytes.
#line 1 "ENTRY_10cfa090"

undefined4 __fastcall FUN_10cfa090(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10cfa2c0; body size 19 bytes.
#line 1 "ENTRY_10cfa2c0"

undefined4 __fastcall FUN_10cfa2c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10cfb1d0; body size 19 bytes.
#line 1 "ENTRY_10cfb1d0"

uint __fastcall FUN_10cfb1d0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x18) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10cfbe60; body size 23 bytes.
#line 1 "ENTRY_10cfbe60"

undefined4 __thiscall FUN_10cfbe60(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x60))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfc100; body size 63 bytes.
#line 1 "ENTRY_10cfc100"

int * __thiscall FUN_10cfc100(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x8c) + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cfc1c0; body size 23 bytes.
#line 1 "ENTRY_10cfc1c0"

undefined4 __thiscall FUN_10cfc1c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x6c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfc400; body size 23 bytes.
#line 1 "ENTRY_10cfc400"

undefined4 __thiscall FUN_10cfc400(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x48))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfc440; body size 26 bytes.
#line 1 "ENTRY_10cfc440"

undefined4 __thiscall FUN_10cfc440(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfc4e0; body size 23 bytes.
#line 1 "ENTRY_10cfc4e0"

undefined4 __thiscall FUN_10cfc4e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x54))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfc510; body size 23 bytes.
#line 1 "ENTRY_10cfc510"

undefined4 __thiscall FUN_10cfc510(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfe140; body size 29 bytes.
#line 1 "ENTRY_10cfe140"

void __thiscall FUN_10cfe140(int param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 10d017b0; body size 60 bytes.
#line 1 "ENTRY_10d017b0"

void __fastcall FUN_10d017b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_10ce2c30(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_10ce3510();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d03040; body size 16 bytes.
#line 1 "ENTRY_10d03040"

void __fastcall FUN_10d03040(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 0x124));
  return;
}


// Reference entry 10d03130; body size 59 bytes.
#line 1 "ENTRY_10d03130"

void __thiscall FUN_10d03130(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10ce2d60(puVar1,param_2);
  return;
}


// Reference entry 10d03290; body size 33 bytes.
#line 1 "ENTRY_10d03290"

undefined4 __fastcall FUN_10d03290(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10208940());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x24))());
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10d04bc0; body size 53 bytes.
#line 1 "ENTRY_10d04bc0"

SCStr * FUN_10d04bc0(SCStr *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  cVar1 = (char)(thunk_FUN_10bb46d0());
  if (cVar1 == '\0') {
    uVar3 = (undefined4)(0x20bd);
  }
  else {
    uVar3 = (undefined4)(0x20be);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar2);
  return (SCStr *)(param_1);
}


// Reference entry 10d05e30; body size 42 bytes.
#line 1 "ENTRY_10d05e30"

void __thiscall FUN_10d05e30(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  thunk_FUN_1021d0d0(param_2);
  cVar1 = (char)((**(code **)(*param_1 + 0x90))());
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x94))();
  }
  return;
}


// Reference entry 10d05f30; body size 46 bytes.
#line 1 "ENTRY_10d05f30"

void __fastcall FUN_10d05f30(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0x94);
  *(undefined1 *)(param_1 + -0x54) = 1;
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10d05f80; body size 35 bytes.
#line 1 "ENTRY_10d05f80"

void __fastcall FUN_10d05f80(int param_1)

{
  (**(code **)(*(int *)(param_1 + -0x90) + 0x164))();
  (**(code **)(*(int *)(param_1 + -0x90) + 0x110))(0);
  return;
}


// Reference entry 10d09f30; body size 19 bytes.
#line 1 "ENTRY_10d09f30"

void __thiscall FUN_10d09f30(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d09f50; body size 19 bytes.
#line 1 "ENTRY_10d09f50"

void __thiscall FUN_10d09f50(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d0a1e0; body size 19 bytes.
#line 1 "ENTRY_10d0a1e0"

void __thiscall FUN_10d0a1e0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d0a200; body size 19 bytes.
#line 1 "ENTRY_10d0a200"

void __thiscall FUN_10d0a200(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d0f480; body size 42 bytes.
#line 1 "ENTRY_10d0f480"

void __thiscall FUN_10d0f480(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  thunk_FUN_1021d0d0(param_2);
  cVar1 = (char)((**(code **)(*param_1 + 0x90))());
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x94))();
  }
  return;
}


// Reference entry 10d113e0; body size 23 bytes.
#line 1 "ENTRY_10d113e0"

void FUN_10d113e0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d130b0; body size 20 bytes.
#line 1 "ENTRY_10d130b0"

undefined4 __fastcall FUN_10d130b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d13700; body size 17 bytes.
#line 1 "ENTRY_10d13700"

undefined4 __fastcall FUN_10d13700(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d13740; body size 63 bytes.
#line 1 "ENTRY_10d13740"

int * __thiscall FUN_10d13740(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x94) + 8));
  if ((uint)(*(int *)(*(int *)(param_1 + 0x94) + 0xc) - iVar1 >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar2 = (int *)(*(int **)(iVar1 + param_3 * 8));
  *param_2 = (int)((int)piVar2);
  if ((int *)(piVar2) != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d13d50; body size 17 bytes.
#line 1 "ENTRY_10d13d50"

undefined4 __fastcall FUN_10d13d50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d13fd0; body size 19 bytes.
#line 1 "ENTRY_10d13fd0"

undefined4 __fastcall FUN_10d13fd0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d14290; body size 25 bytes.
#line 1 "ENTRY_10d14290"

void __fastcall FUN_10d14290(int param_1)

{
  thunk_FUN_10d142b0();
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  return;
}


// Reference entry 10d15320; body size 19 bytes.
#line 1 "ENTRY_10d15320"

uint __fastcall FUN_10d15320(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x24) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d16980; body size 49 bytes.
#line 1 "ENTRY_10d16980"

void __fastcall FUN_10d16980(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_10202e00();
      iVar2 = (int)(iVar2 + 0x9c);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 10d17d40; body size 25 bytes.
#line 1 "ENTRY_10d17d40"

int __fastcall FUN_10d17d40(int *param_1)

{
 try {
  int iVar1;
  bool bVar2;
  char cVar3;
  SCLibrary *pSVar4;
  int iVar5;
  uint uVar6;
  SCStr aSStack_4c [4];
  int *piStack_48;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  SCStr aSStack_20 [4];
  undefined4 uStack_1c;
  uint uStack_18;
  char cStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  if (((char)param_1[0xa6] != '\0') || (*(char *)((int)param_1 + 0x299) == '\0')) {
    return (int)(0);
  }


  if (param_1[0x18] == 0) {
    return (int)(0);
  }

  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  (**(code **)(*(int *)pSVar4 + 0x88))();

  piStack_48 = (int *)((int *)0x1020fece);
  thunk_FUN_101e7e50();
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  if ((int *)(piStack_24) != (int *)0x0) {
    (**(code **)(*piStack_24 + 8))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  piStack_48 = (int *)((int *)0x1020fef2);
  bVar2 = (bool)(((SCStr *)((SCStr *)(param_1 + 0x2d)))->beginsWith("R:0"));
  piStack_48 = (int *)((int *)0x1020ff04);
  cStack_11 = (char)(((SCStr *)((SCStr *)(param_1 + 0x2d)))->beginsWith("SQ:"));
  uVar6 = (uint)(uStack_18);
  if (bVar2) {
    piStack_48 = (int *)((int *)0x1020ff1b);
    ((SCStr *)(aSStack_20))->int_allocRep("Feature-MyRadioStations");
    uVar6 = (uint)(1);
    *(unsigned char *)((char *)&uStack_8 + 0) = 4;

    piStack_48 = (int *)((int *)0x1020ff34);
    cVar3 = (char)((**(code **)(*piStack_2c + 0x14))());
    if (cVar3 != '\0') goto LAB_1020ff3b;
LAB_1020ff6a:
    cStack_11 = (char)('\x01');
  }
  else {
LAB_1020ff3b:
    if (cStack_11 != '\0') {
      piStack_48 = (int *)((int *)0x1020ff4c);
      ((SCStr *)((SCStr *)&uStack_1c))->int_allocRep("Feature-Playlists");
      uVar6 = (uint)(uVar6 | 2);

      piStack_48 = (int *)((int *)0x1020ff66);
      uStack_18 = (uint)(uVar6);
      cVar3 = (char)((**(code **)(*piStack_2c + 0x14))());
      if (cVar3 == '\0') goto LAB_1020ff6a;
    }
    cStack_11 = (char)('\0');
  }
  if ((uVar6 & 2) != 0) {
    uVar6 = (uint)(uVar6 & 0xfffffffd);

    uStack_18 = (uint)(uVar6);
    ((SCStr *)((SCStr *)&uStack_1c))->int_release();

  }

  if ((uVar6 & 1) != 0) {
    *(unsigned char *)((char *)&uStack_8 + 0) = 7;
    *(unsigned short *)((char *)&uStack_8 + 1) = 0;
    ((SCStr *)(aSStack_20))->int_release();
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  }
  if (cStack_11 == '\0') {
    if (*(char *)((int)param_1 + 0xc5) != '\0') {
      (**(code **)(*param_1 + 0x94))();
      piStack_48 = (int *)(param_1);
      ((SCStr *)(aSStack_4c))->int_allocRep("SCIBrowseDataSource:onInvalidation");
      thunk_FUN_103d63d0();
      *(undefined1 *)((int)param_1 + 0x41) = 0;
    }
    cVar3 = (char)((**(code **)(*param_1 + 0x13c))());
    if (cVar3 == '\0') {
      iVar5 = (int)(param_1[0x32]);
    }
    else {
      iVar5 = (int)((**(code **)(*param_1 + 0xbc))());
      iVar5 = (int)(iVar5 + param_1[0x32]);
    }
    iVar1 = (int)(param_1[0x18]);
    if ((0 < iVar1) && (iVar1 < iVar5)) {
      iVar5 = (int)(iVar1);
    }
  }
  else {
    iVar5 = (int)(0);
  }

  if ((int *)(piStack_28) != (int *)0x0) {
    (**(code **)(*piStack_28 + 8))();
  }

  return (int)(iVar5);

 } catch (...) { }
}


// Reference entry 10d17e80; body size 47 bytes.
#line 1 "ENTRY_10d17e80"

undefined4 __thiscall FUN_10d17e80(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x298) == '\0') && (*(char *)(param_1 + 0x299) != '\0')) {
    uVar1 = (undefined4)(7);
    if (param_2 == 2) {
      uVar1 = (undefined4)(4);
    }
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d18640; body size 37 bytes.
#line 1 "ENTRY_10d18640"

undefined1 __fastcall FUN_10d18640(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x299) == '\0') {
    cVar1 = (char)(thunk_FUN_104d8570(&DAT_121a5e80,1));
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10d18670; body size 44 bytes.
#line 1 "ENTRY_10d18670"

void __fastcall FUN_10d18670(int *param_1)

{
  char cVar1;
  
  thunk_FUN_1059d800();
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))());
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x100))(0);
  }
  return;
}


// Reference entry 10d187d0; body size 37 bytes.
#line 1 "ENTRY_10d187d0"

undefined1 __fastcall FUN_10d187d0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x299) == '\0') {
    cVar1 = (char)(thunk_FUN_104d8570(&DAT_121a5e80,1));
    if (cVar1 != '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10d18800; body size 17 bytes.
#line 1 "ENTRY_10d18800"

void FUN_10d18800(void)

{
  thunk_FUN_104d8570(&DAT_121a5e80,1);
  return;
}


// Reference entry 10d189f0; body size 25 bytes.
#line 1 "ENTRY_10d189f0"

undefined1 __fastcall FUN_10d189f0(int *param_1)

{
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
  if ((*(char *)((int)param_1 + 0x299) != '\0') && ((char)param_1[0xa6] == '\0')) {
    if (*(char *)((int)param_1 + 0xc5) != '\0') {
      uStack_c = (undefined4)(0x1021b215);
      (**(code **)(*param_1 + 0x94))();
      uStack_c = (undefined4)(0);
      piStack_10 = (int *)(param_1);
      ((SCStr *)(aSStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
      thunk_FUN_103d63d0();
      *(undefined1 *)((int)param_1 + 0x41) = 0;
    }
    return (undefined1)((char)param_1[0x31]);
  }
  return (undefined1)(1);
}


// Reference entry 10d18a30; body size 53 bytes.
#line 1 "ENTRY_10d18a30"

void __fastcall FUN_10d18a30(int param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(*(int *)(param_1 + 0x34) == 0);
  if ((bool)*(char *)(param_1 + 0x30) != (char)(bVar1)) {
    *(bool *)(param_1 + 0x30) = bVar1;
    (**(code **)(*(int *)(param_1 + -0x268) + 0x110))(0);
    thunk_FUN_1020a5b0(0);
  }
  return;
}


// Reference entry 10d18e50; body size 53 bytes.
#line 1 "ENTRY_10d18e50"

void __fastcall FUN_10d18e50(int param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(*(int *)(param_1 + 0x34) == 0);
  if ((bool)*(char *)(param_1 + 0x30) != (char)(bVar1)) {
    *(bool *)(param_1 + 0x30) = bVar1;
    (**(code **)(*(int *)(param_1 + -0x268) + 0x110))(0);
    thunk_FUN_1020a5b0(0);
  }
  return;
}


// Reference entry 10d19370; body size 48 bytes.
#line 1 "ENTRY_10d19370"

void __fastcall FUN_10d19370(int param_1)

{
  char cVar1;
  
  thunk_FUN_1059d800();
  cVar1 = (char)((**(code **)(*(int *)(param_1 + -0x90) + 0xfc))());
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(param_1 + -0x90) + 0x100))(0);
  }
  return;
}


// Reference entry 10d193b0; body size 50 bytes.
#line 1 "ENTRY_10d193b0"

void __fastcall FUN_10d193b0(int param_1)

{
  char cVar1;
  
  thunk_FUN_1059d800();
  cVar1 = (char)((**(code **)(*(int *)(param_1 + -0x278) + 0xfc))());
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(param_1 + -0x278) + 0x100))(0);
  }
  return;
}


// Reference entry 10d194d0; body size 16 bytes.
#line 1 "ENTRY_10d194d0"

undefined4 __fastcall FUN_10d194d0(int *param_1)

{
  (**(code **)(*param_1 + 0x16c))(0x191);
  return (undefined4)(1);
}


// Reference entry 10d19730; body size 42 bytes.
#line 1 "ENTRY_10d19730"

undefined2 FUN_10d19730(short param_1,int param_2)

{
  if ((param_1 != 0x3ea) && ((param_1 != 0x403 || (param_2 < 1)))) {
    return (undefined2)(0);
  }
  return (undefined2)(1);
}


// Reference entry 10d197a0; body size 52 bytes.
#line 1 "ENTRY_10d197a0"

void __thiscall FUN_10d197a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10221640(param_2,param_3);
  if (param_1[8] != 0) {
    *(byte *)(param_1 + 0x18) = (byte)param_3 ^ 1;
    (**(code **)(*param_1 + 0xe0))(param_1 + 0x47);
  }
  return;
}


// Reference entry 10d19b20; body size 59 bytes.
#line 1 "ENTRY_10d19b20"

void __thiscall FUN_10d19b20(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10d19820(puVar1,param_2);
  return;
}


// Reference entry 10d1a530; body size 60 bytes.
#line 1 "ENTRY_10d1a530"

void __fastcall FUN_10d1a530(int *param_1)

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


// Reference entry 10d1c3f0; body size 49 bytes.
#line 1 "ENTRY_10d1c3f0"

undefined4 * __thiscall FUN_10d1c3f0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)__RTDynamicCast(*(undefined4 *)(param_1 + 8),0,
                                  &SCActionOnGroupDescriptorImpl::RTTI_Type_Descriptor,
                                  &SCPlayMenuPlayNowDescriptor::RTTI_Type_Descriptor,0));
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10d1c4c0; body size 63 bytes.
#line 1 "ENTRY_10d1c4c0"

int * __thiscall FUN_10d1c4c0(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x88) + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d1ce70; body size 25 bytes.
#line 1 "ENTRY_10d1ce70"

void __fastcall FUN_10d1ce70(int param_1)

{
  thunk_FUN_10d1cf80();
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  return;
}


// Reference entry 10d1cf60; body size 25 bytes.
#line 1 "ENTRY_10d1cf60"

void __fastcall FUN_10d1cf60(int param_1)

{
  thunk_FUN_10d1cf80();
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  return;
}


// Reference entry 10d1d4a0; body size 59 bytes.
#line 1 "ENTRY_10d1d4a0"

void __thiscall FUN_10d1d4a0(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10d19820(puVar1,param_2);
  return;
}


// Reference entry 10d1d940; body size 23 bytes.
#line 1 "ENTRY_10d1d940"

void FUN_10d1d940(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d1eb10; body size 46 bytes.
#line 1 "ENTRY_10d1eb10"

void __thiscall FUN_10d1eb10(int param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x40) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10d1f920; body size 19 bytes.
#line 1 "ENTRY_10d1f920"

void __thiscall FUN_10d1f920(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d1f940; body size 19 bytes.
#line 1 "ENTRY_10d1f940"

void __thiscall FUN_10d1f940(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d1fb00; body size 19 bytes.
#line 1 "ENTRY_10d1fb00"

void __thiscall FUN_10d1fb00(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d1fb20; body size 19 bytes.
#line 1 "ENTRY_10d1fb20"

void __thiscall FUN_10d1fb20(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d20520; body size 63 bytes.
#line 1 "ENTRY_10d20520"

int * __thiscall FUN_10d20520(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0xb4) + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d205d0; body size 28 bytes.
#line 1 "ENTRY_10d205d0"

undefined4 FUN_10d205d0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 2) {
    uVar1 = (undefined4)(thunk_FUN_104d8ab0());
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 10d20600; body size 55 bytes.
#line 1 "ENTRY_10d20600"

SCStr * FUN_10d20600(SCStr *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 2) {
    thunk_FUN_104d8ba0(param_1,param_2,param_3);
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("emptylinein");
  return (SCStr *)(param_1);
}


// Reference entry 10d20690; body size 53 bytes.
#line 1 "ENTRY_10d20690"

SCStr * __thiscall FUN_10d20690(int param_1,SCStr *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uVar2 = (undefined4)(0x2298);
  }
  else {
    uVar2 = (undefined4)(0x2297);
  }
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(uVar2,&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d23140; body size 61 bytes.
#line 1 "ENTRY_10d23140"

int __fastcall FUN_10d23140(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xad) == '\0') {
    return (int)(0);
  }
  iVar1 = (int)(thunk_FUN_1109f7f0());
  uVar2 = (uint)((uint)(*(char *)(iVar1 + 0x30) == '\0'));
  if (*(char *)(param_1 + 0xac) == '\0') {
    uVar2 = (uint)((*(char *)(iVar1 + 0x30) == '\0') + 1);
  }
  iVar1 = (int)(thunk_FUN_10cf7dd0());
  return (int)(iVar1 - uVar2);
}


// Reference entry 10d23440; body size 61 bytes.
#line 1 "ENTRY_10d23440"

void __thiscall FUN_10d23440(int param_1,int param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x11) == '\0')) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + -0x9c) + 0x110))();
      return;
    }
  }
  return;
}


// Reference entry 10d234b0; body size 37 bytes.
#line 1 "ENTRY_10d234b0"

void __fastcall FUN_10d234b0(int param_1)

{
  thunk_FUN_104d9cc0();
  thunk_FUN_104dec20();
  if (*(undefined4 **)(param_1 + 0xbc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xbc))(1);
  }
  return;
}


// Reference entry 10d24420; body size 57 bytes.
#line 1 "ENTRY_10d24420"

void FUN_10d24420(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10d24420(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10d24470; body size 49 bytes.
#line 1 "ENTRY_10d24470"

int __thiscall FUN_10d24470(int *param_1,uint *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10d244b0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10d26320; body size 48 bytes.
#line 1 "ENTRY_10d26320"

undefined4 * __fastcall FUN_10d26320(undefined4 *param_1)

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


// Reference entry 10d28920; body size 19 bytes.
#line 1 "ENTRY_10d28920"

void __thiscall FUN_10d28920(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d28940; body size 19 bytes.
#line 1 "ENTRY_10d28940"

void __thiscall FUN_10d28940(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d28960; body size 19 bytes.
#line 1 "ENTRY_10d28960"

void __thiscall FUN_10d28960(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d28980; body size 19 bytes.
#line 1 "ENTRY_10d28980"

void __thiscall FUN_10d28980(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d289a0; body size 19 bytes.
#line 1 "ENTRY_10d289a0"

void __thiscall FUN_10d289a0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d289c0; body size 19 bytes.
#line 1 "ENTRY_10d289c0"

void __thiscall FUN_10d289c0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d289e0; body size 19 bytes.
#line 1 "ENTRY_10d289e0"

void __thiscall FUN_10d289e0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d28a00; body size 19 bytes.
#line 1 "ENTRY_10d28a00"

void __thiscall FUN_10d28a00(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29210; body size 19 bytes.
#line 1 "ENTRY_10d29210"

void __thiscall FUN_10d29210(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29230; body size 19 bytes.
#line 1 "ENTRY_10d29230"

void __thiscall FUN_10d29230(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29250; body size 19 bytes.
#line 1 "ENTRY_10d29250"

void __thiscall FUN_10d29250(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29270; body size 19 bytes.
#line 1 "ENTRY_10d29270"

void __thiscall FUN_10d29270(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29290; body size 19 bytes.
#line 1 "ENTRY_10d29290"

void __thiscall FUN_10d29290(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d292b0; body size 19 bytes.
#line 1 "ENTRY_10d292b0"

void __thiscall FUN_10d292b0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d292d0; body size 19 bytes.
#line 1 "ENTRY_10d292d0"

void __thiscall FUN_10d292d0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d292f0; body size 19 bytes.
#line 1 "ENTRY_10d292f0"

void __thiscall FUN_10d292f0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29c20; body size 25 bytes.
#line 1 "ENTRY_10d29c20"

SCStr * __thiscall FUN_10d29c20(int param_1,SCStr *param_2)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 0x18) + 0x18))());
  ((SCStr *)(param_2))->op_ctor(pSVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d29f40; body size 63 bytes.
#line 1 "ENTRY_10d29f40"

int * __thiscall FUN_10d29f40(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0xb0) + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d2a180; body size 25 bytes.
#line 1 "ENTRY_10d2a180"

SCStr * FUN_10d2a180(SCStr *param_1)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)thunk_FUN_106964d0());
  ((SCStr *)(param_1))->op_ctor(pSVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d2a1e0; body size 25 bytes.
#line 1 "ENTRY_10d2a1e0"

SCStr * FUN_10d2a1e0(SCStr *param_1)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)thunk_FUN_106964d0());
  ((SCStr *)(param_1))->op_ctor(pSVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d2a200; body size 25 bytes.
#line 1 "ENTRY_10d2a200"

SCStr * __thiscall FUN_10d2a200(int param_1,SCStr *param_2)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 0x18) + 0x1c))());
  ((SCStr *)(param_2))->op_ctor(pSVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d2a8f0; body size 25 bytes.
#line 1 "ENTRY_10d2a8f0"

SCStr * __thiscall FUN_10d2a8f0(int param_1,SCStr *param_2)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 0x18) + 0x20))());
  ((SCStr *)(param_2))->op_ctor(pSVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d2ae00; body size 53 bytes.
#line 1 "ENTRY_10d2ae00"

void __fastcall FUN_10d2ae00(int param_1)

{
  undefined4 *puVar1;
  
  thunk_FUN_104d9cc0();
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x18))(param_1 + 0x80);
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0xb0));
  thunk_FUN_10ce2c30(*puVar1,*(undefined4 *)(param_1 + 0xb4),puVar1);
  *(undefined4 *)(param_1 + 0xb4) = *puVar1;
  return;
}


// Reference entry 10d2be50; body size 23 bytes.
#line 1 "ENTRY_10d2be50"

void FUN_10d2be50(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d2be70; body size 23 bytes.
#line 1 "ENTRY_10d2be70"

void FUN_10d2be70(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d30a60; body size 19 bytes.
#line 1 "ENTRY_10d30a60"

void __thiscall FUN_10d30a60(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d30a80; body size 19 bytes.
#line 1 "ENTRY_10d30a80"

void __thiscall FUN_10d30a80(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d30aa0; body size 19 bytes.
#line 1 "ENTRY_10d30aa0"

void __thiscall FUN_10d30aa0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d30b40; body size 27 bytes.
#line 1 "ENTRY_10d30b40"

void __fastcall FUN_10d30b40(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  thunk_FUN_10d38af0();
  (**(code **)(*piVar1 + 0x110))(0);
  return;
}


// Reference entry 10d30b70; body size 45 bytes.
#line 1 "ENTRY_10d30b70"

void __thiscall FUN_10d30b70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_102d65b0(param_3));
  if (cVar2 != '\0') {
    piVar1 = (int *)(*(int **)(param_1 + 4));
    thunk_FUN_10d38af0();
    (**(code **)(*piVar1 + 0x110))(0);
  }
  return;
}


// Reference entry 10d30bb0; body size 27 bytes.
#line 1 "ENTRY_10d30bb0"

void __fastcall FUN_10d30bb0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  thunk_FUN_10d38af0();
  (**(code **)(*piVar1 + 0x110))(0);
  return;
}


// Reference entry 10d30c10; body size 19 bytes.
#line 1 "ENTRY_10d30c10"

void __thiscall FUN_10d30c10(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d30c30; body size 19 bytes.
#line 1 "ENTRY_10d30c30"

void __thiscall FUN_10d30c30(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d30c50; body size 19 bytes.
#line 1 "ENTRY_10d30c50"

void __thiscall FUN_10d30c50(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d35680; body size 30 bytes.
#line 1 "ENTRY_10d35680"

SCStr * __thiscall FUN_10d35680(int param_1,SCStr *param_2)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x68));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x6c);
  return (SCStr *)(param_2);
}


// Reference entry 10d356b0; body size 30 bytes.
#line 1 "ENTRY_10d356b0"

SCStr * __thiscall FUN_10d356b0(int param_1,SCStr *param_2)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x68));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x6c);
  return (SCStr *)(param_2);
}


// Reference entry 10d356e0; body size 30 bytes.
#line 1 "ENTRY_10d356e0"

SCStr * __thiscall FUN_10d356e0(int param_1,SCStr *param_2)

{
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x78));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x7c);
  return (SCStr *)(param_2);
}


// Reference entry 10d35830; body size 23 bytes.
#line 1 "ENTRY_10d35830"

undefined4 __fastcall FUN_10d35830(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc0) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d360e0; body size 20 bytes.
#line 1 "ENTRY_10d360e0"

undefined4 __fastcall FUN_10d360e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc0) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d370c0; body size 18 bytes.
#line 1 "ENTRY_10d370c0"

undefined4 __fastcall FUN_10d370c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc0) + 0x14))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d37d60; body size 20 bytes.
#line 1 "ENTRY_10d37d60"

undefined4 __fastcall FUN_10d37d60(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc0) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d37fa0; body size 22 bytes.
#line 1 "ENTRY_10d37fa0"

undefined4 __fastcall FUN_10d37fa0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc0) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d381f0; body size 40 bytes.
#line 1 "ENTRY_10d381f0"

bool __fastcall FUN_10d381f0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x80))());
  if (cVar1 != '\0') {
    return (bool)(true);
  }
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))());
  return (bool)(cVar1 == '\0');
}


// Reference entry 10d38420; body size 39 bytes.
#line 1 "ENTRY_10d38420"

void __fastcall FUN_10d38420(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10d34fd0());
  if (cVar1 != '\0') {
    thunk_FUN_10d38af0();
    (**(code **)(*(int *)(param_1 + -0x88) + 0x110))(0);
  }
  return;
}


// Reference entry 10d38450; body size 27 bytes.
#line 1 "ENTRY_10d38450"

void __fastcall FUN_10d38450(int param_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x28) + 0x110))(0);
  return;
}


// Reference entry 10d38510; body size 30 bytes.
#line 1 "ENTRY_10d38510"

void __fastcall FUN_10d38510(int param_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x98) + 0x110))(0);
  return;
}


// Reference entry 10d386f0; body size 30 bytes.
#line 1 "ENTRY_10d386f0"

void __fastcall FUN_10d386f0(int param_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x8c) + 0x110))(0);
  return;
}


// Reference entry 10d389c0; body size 62 bytes.
#line 1 "ENTRY_10d389c0"

void __fastcall FUN_10d389c0(int param_1)

{
  *(undefined1 *)(param_1 + 0x7a) = 1;
  if ((*(char *)(param_1 + 0x7a) != '\0') && (*(char *)(param_1 + 0x79) != '\0')) {
    (**(code **)(*(int *)(param_1 + -0x88) + 0x100))(0);
  }
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x88) + 0x110))(0);
  return;
}


// Reference entry 10d38a40; body size 30 bytes.
#line 1 "ENTRY_10d38a40"

void __fastcall FUN_10d38a40(int param_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x8c) + 0x110))(0);
  return;
}


// Reference entry 10d38a70; body size 30 bytes.
#line 1 "ENTRY_10d38a70"

void __fastcall FUN_10d38a70(int param_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x8c) + 0x110))(0);
  return;
}


// Reference entry 10d38aa0; body size 59 bytes.
#line 1 "ENTRY_10d38aa0"

void __fastcall FUN_10d38aa0(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar1 = (char)(thunk_FUN_10d352a0());
  cVar2 = (char)(thunk_FUN_10d34fd0());
  cVar3 = (char)(thunk_FUN_10d34dd0());
  if (cVar3 != '\0' || (cVar1 != '\0' || cVar2 != '\0')) {
    thunk_FUN_10d38af0();
    (**(code **)(*(int *)(param_1 + -0x88) + 0x110))(0);
  }
  return;
}


// Reference entry 10d39fa0; body size 24 bytes.
#line 1 "ENTRY_10d39fa0"

undefined4 __fastcall FUN_10d39fa0(int *param_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*param_1 + 0x110))(0);
  return (undefined4)(1);
}


// Reference entry 10d3a8f0; body size 22 bytes.
#line 1 "ENTRY_10d3a8f0"

uint __fastcall FUN_10d3a8f0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0xc0) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d3b670; body size 30 bytes.
#line 1 "ENTRY_10d3b670"

void __thiscall FUN_10d3b670(int param_1)

{
  undefined2 in_stack_00000014;
  
  *(undefined2 *)(param_1 + 0x20) = in_stack_00000014;
  *(undefined1 *)(param_1 + 0x18) = 1;
  (**(code **)(*(int *)(param_1 + -0x80) + 0x114))(0);
  return;
}


// Reference entry 10d3b6a0; body size 18 bytes.
#line 1 "ENTRY_10d3b6a0"

void __thiscall FUN_10d3b6a0(int param_1)

{
  undefined4 in_stack_00000014;
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0x128))(in_stack_00000014);
  return;
}


// Reference entry 10d3c3a0; body size 20 bytes.
#line 1 "ENTRY_10d3c3a0"

undefined2 __fastcall FUN_10d3c3a0(int param_1)

{
  if (*(char *)(param_1 + 0x84) != '\0') {
    return (undefined2)(*(undefined2 *)(param_1 + 0xa0));
  }
  return (undefined2)(0);
}


// Reference entry 10d3c470; body size 59 bytes.
#line 1 "ENTRY_10d3c470"

undefined4 __fastcall FUN_10d3c470(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (*(char *)(param_1 + 0x84) == '\0') {
    thunk_FUN_110828b0();
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x90) != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x90));
    }
    piVar1 = (int *)((int *)thunk_FUN_11093530(puVar3,0));
                    
                    
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x78))());
    return (undefined4)(uVar2);
  }
  return (undefined4)(*(undefined4 *)(param_1 + 0x9c));
}


// Reference entry 10d3c4f0; body size 30 bytes.
#line 1 "ENTRY_10d3c4f0"

SCStr * __thiscall FUN_10d3c4f0(int param_1,SCStr *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)("");
  if (*(char **)(param_1 + 0x54) != (char *)0x0) {
    pcVar1 = (char *)(*(char **)(param_1 + 0x54));
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d3c540; body size 44 bytes.
#line 1 "ENTRY_10d3c540"

SCStr * __thiscall FUN_10d3c540(int param_1,SCStr *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x80));
  if ((((char *)(pcVar1) == (char *)0x0) || (*pcVar1 == '\0')) &&
     (pcVar1 = *(char **)(param_1 + 0x54), (char *)(pcVar1) == (char *)0x0)) {
    pcVar1 = (char *)("");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d3c9b0; body size 47 bytes.
#line 1 "ENTRY_10d3c9b0"

void __fastcall FUN_10d3c9b0(int param_1)

{
  thunk_FUN_104d9cc0();
  if (*(char *)(param_1 + 0x84) != '\0') {
    thunk_FUN_110b0460(1);
    thunk_FUN_110adac0(param_1 + 0x80);
  }
  return;
}


// Reference entry 10d3ccf0; body size 23 bytes.
#line 1 "ENTRY_10d3ccf0"

void FUN_10d3ccf0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d3cd10; body size 59 bytes.
#line 1 "ENTRY_10d3cd10"

void __thiscall FUN_10d3cd10(int param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    thunk_FUN_110b0460(1);
    thunk_FUN_110adac0();
    return;
  }
  return;
}


// Reference entry 10d3f250; body size 20 bytes.
#line 1 "ENTRY_10d3f250"

undefined4 __fastcall FUN_10d3f250(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x28) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d3f7a0; body size 17 bytes.
#line 1 "ENTRY_10d3f7a0"

undefined4 __fastcall FUN_10d3f7a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x28) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d3f800; body size 63 bytes.
#line 1 "ENTRY_10d3f800"

int * __thiscall FUN_10d3f800(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x9c) + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d3fd00; body size 17 bytes.
#line 1 "ENTRY_10d3fd00"

undefined4 __fastcall FUN_10d3fd00(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x28) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d3ff90; body size 19 bytes.
#line 1 "ENTRY_10d3ff90"

undefined4 __fastcall FUN_10d3ff90(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x28) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d40010; body size 19 bytes.
#line 1 "ENTRY_10d40010"

uint __fastcall FUN_10d40010(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x1c))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d40090; body size 37 bytes.
#line 1 "ENTRY_10d40090"

void __thiscall FUN_10d40090(int param_1,int param_2)

{
  thunk_FUN_10d40300();
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_1 + -0x8c) + 0x110))(0);
  }
  return;
}


// Reference entry 10d40250; body size 34 bytes.
#line 1 "ENTRY_10d40250"

void __thiscall FUN_10d40250(int param_1,int param_2)

{
  thunk_FUN_10d40300();
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  return;
}


// Reference entry 10d40290; body size 34 bytes.
#line 1 "ENTRY_10d40290"

void __thiscall FUN_10d40290(int param_1,int param_2)

{
  thunk_FUN_10d40300();
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  return;
}


// Reference entry 10d402c0; body size 34 bytes.
#line 1 "ENTRY_10d402c0"

void __thiscall FUN_10d402c0(int param_1,int param_2)

{
  thunk_FUN_10d40300();
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  return;
}


// Reference entry 10d422d0; body size 19 bytes.
#line 1 "ENTRY_10d422d0"

uint __fastcall FUN_10d422d0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x28) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d440e0; body size 51 bytes.
#line 1 "ENTRY_10d440e0"

void __thiscall FUN_10d440e0(int param_1,undefined4 param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAlarmManager:onAlarmsChanged"));
  if (bVar1) {
    (**(code **)(*(int *)(param_1 + -0x80) + 0x16c))();
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  return;
}


// Reference entry 10d44fa0; body size 20 bytes.
#line 1 "ENTRY_10d44fa0"

undefined4 __fastcall FUN_10d44fa0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d44fc0; body size 20 bytes.
#line 1 "ENTRY_10d44fc0"

undefined4 __fastcall FUN_10d44fc0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d44fe0; body size 20 bytes.
#line 1 "ENTRY_10d44fe0"

undefined4 __fastcall FUN_10d44fe0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d45e50; body size 17 bytes.
#line 1 "ENTRY_10d45e50"

undefined4 __fastcall FUN_10d45e50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d45e70; body size 17 bytes.
#line 1 "ENTRY_10d45e70"

undefined4 __fastcall FUN_10d45e70(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d45e90; body size 17 bytes.
#line 1 "ENTRY_10d45e90"

undefined4 __fastcall FUN_10d45e90(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d45eb0; body size 63 bytes.
#line 1 "ENTRY_10d45eb0"

int * __thiscall FUN_10d45eb0(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x84) + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d462d0; body size 17 bytes.
#line 1 "ENTRY_10d462d0"

undefined4 __fastcall FUN_10d462d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d462f0; body size 17 bytes.
#line 1 "ENTRY_10d462f0"

undefined4 __fastcall FUN_10d462f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d46310; body size 17 bytes.
#line 1 "ENTRY_10d46310"

undefined4 __fastcall FUN_10d46310(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d46760; body size 19 bytes.
#line 1 "ENTRY_10d46760"

undefined4 __fastcall FUN_10d46760(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d46780; body size 19 bytes.
#line 1 "ENTRY_10d46780"

undefined4 __fastcall FUN_10d46780(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d467a0; body size 19 bytes.
#line 1 "ENTRY_10d467a0"

undefined4 __fastcall FUN_10d467a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d46830; body size 60 bytes.
#line 1 "ENTRY_10d46830"

void __fastcall FUN_10d46830(int param_1)

{
  int iVar1;
  
  thunk_FUN_104d98f0();
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0xb8) + 0x1c))());
  if (iVar1 == 5) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0xb8) + 100))();
    return;
  }
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x14))(param_1 + 0x80);
  }
  return;
}


// Reference entry 10d468e0; body size 37 bytes.
#line 1 "ENTRY_10d468e0"

void __fastcall FUN_10d468e0(int param_1)

{
  (**(code **)(*(int *)(param_1 + -0xac) + 0x16c))();
  (**(code **)(*(int *)(param_1 + -0xac) + 0x110))(0);
  return;
}


// Reference entry 10d49e60; body size 35 bytes.
#line 1 "ENTRY_10d49e60"

void __fastcall FUN_10d49e60(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x40) = 1;
  iStack_14 = (int)(param_1);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
  thunk_FUN_103d63d0();
  return;
}


// Reference entry 10d49e90; body size 19 bytes.
#line 1 "ENTRY_10d49e90"

uint __fastcall FUN_10d49e90(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x18) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d49eb0; body size 19 bytes.
#line 1 "ENTRY_10d49eb0"

uint __fastcall FUN_10d49eb0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x10) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d49ed0; body size 19 bytes.
#line 1 "ENTRY_10d49ed0"

uint __fastcall FUN_10d49ed0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x18) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d4b930; body size 60 bytes.
#line 1 "ENTRY_10d4b930"

void __fastcall FUN_10d4b930(int *param_1)

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


// Reference entry 10d4f3a0; body size 33 bytes.
#line 1 "ENTRY_10d4f3a0"

undefined4 FUN_10d4f3a0(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 1) && (param_1 != 2)) {
    uVar1 = (undefined4)(thunk_FUN_102105a0());
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 10d4f570; body size 62 bytes.
#line 1 "ENTRY_10d4f570"

SCStr * __thiscall FUN_10d4f570(int param_1,SCStr *param_2)

{
  char *pcVar1;
  
  if (*(char *)(param_1 + 0x299) != '\0') {
    thunk_FUN_10211340(param_2);
    return (SCStr *)(param_2);
  }
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2292,&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d507d0; body size 22 bytes.
#line 1 "ENTRY_10d507d0"

undefined1 __fastcall FUN_10d507d0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x28))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10d50800; body size 27 bytes.
#line 1 "ENTRY_10d50800"

undefined4 __fastcall FUN_10d50800(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x288) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x288) + 0x24))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10d50d00; body size 56 bytes.
#line 1 "ENTRY_10d50d00"

void __thiscall FUN_10d50d00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x288));
  if ((iVar1 != 0) || (iVar1 = *(int *)(param_1 + 0x290), iVar1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 8) + 0x14))(0);
  }
  *(undefined1 *)(param_1 + 0x298) = 0;
  thunk_FUN_1021b750(param_2);
  return;
}


// Reference entry 10d515e0; body size 39 bytes.
#line 1 "ENTRY_10d515e0"

void __thiscall FUN_10d515e0(int param_1,undefined4 param_2)

{
  thunk_FUN_104da1b0(param_2);
  if (*(int **)(param_1 + 0x288) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x288) + 0x2c))();
    return;
  }
  return;
}


// Reference entry 10d51bf0; body size 62 bytes.
#line 1 "ENTRY_10d51bf0"

SCStr * __thiscall FUN_10d51bf0(int param_1,SCStr *param_2)

{
  char *pcVar1;
  
  if (*(char *)(param_1 + 0x280) == '\0') {
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x229d,&DAT_11882ff0));
    ((SCStr *)(param_2))->int_allocRep(pcVar1);
    return (SCStr *)(param_2);
  }
  thunk_FUN_10211340(param_2);
  return (SCStr *)(param_2);
}


// Reference entry 10d53b70; body size 33 bytes.
#line 1 "ENTRY_10d53b70"

void __fastcall FUN_10d53b70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x30) {
    thunk_FUN_10d53f30();
  }
  return;
}


// Reference entry 10d540a0; body size 37 bytes.
#line 1 "ENTRY_10d540a0"

void __thiscall FUN_10d540a0(undefined4 *param_1,undefined4 param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIController:onConnectivityStateChanged"));
  if (bVar1) {
    (**(code **)(*(int *)*param_1 + 0x110))(0);
  }
  return;
}


// Reference entry 10d54390; body size 19 bytes.
#line 1 "ENTRY_10d54390"

void __thiscall FUN_10d54390(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d543b0; body size 19 bytes.
#line 1 "ENTRY_10d543b0"

void __thiscall FUN_10d543b0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d54410; body size 35 bytes.
#line 1 "ENTRY_10d54410"

void FUN_10d54410(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    thunk_FUN_10d53f30();
  }
  return;
}


// Reference entry 10d54440; body size 38 bytes.
#line 1 "ENTRY_10d54440"

void __thiscall FUN_10d54440(int param_1,undefined4 param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIController:onConnectivityStateChanged"));
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 4) + 0x110))(0);
  }
  return;
}


// Reference entry 10d545a0; body size 19 bytes.
#line 1 "ENTRY_10d545a0"

void __thiscall FUN_10d545a0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d545c0; body size 19 bytes.
#line 1 "ENTRY_10d545c0"

void __thiscall FUN_10d545c0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d54a10; body size 46 bytes.
#line 1 "ENTRY_10d54a10"

void __fastcall FUN_10d54a10(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_10d53f30();
      iVar2 = (int)(iVar2 + 0x30);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 10d54a50; body size 59 bytes.
#line 1 "ENTRY_10d54a50"

void FUN_10d54a50(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x30);
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


// Reference entry 10d54d40; body size 20 bytes.
#line 1 "ENTRY_10d54d40"

undefined4 __fastcall FUN_10d54d40(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d553a0; body size 17 bytes.
#line 1 "ENTRY_10d553a0"

undefined4 __fastcall FUN_10d553a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d554c0; body size 28 bytes.
#line 1 "ENTRY_10d554c0"

undefined4 FUN_10d554c0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 2) {
    uVar1 = (undefined4)(thunk_FUN_104d8ab0());
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 10d554f0; body size 55 bytes.
#line 1 "ENTRY_10d554f0"

SCStr * FUN_10d554f0(SCStr *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 2) {
    thunk_FUN_104d8ba0(param_1,param_2,param_3);
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("emptysearch");
  return (SCStr *)(param_1);
}


// Reference entry 10d55ac0; body size 17 bytes.
#line 1 "ENTRY_10d55ac0"

undefined4 __fastcall FUN_10d55ac0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d56df0; body size 19 bytes.
#line 1 "ENTRY_10d56df0"

undefined4 __fastcall FUN_10d56df0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d57bf0; body size 42 bytes.
#line 1 "ENTRY_10d57bf0"

void __fastcall FUN_10d57bf0(int param_1)

{
  (**(code **)(*(int *)(param_1 + -0x94) + 0x160))();
  thunk_FUN_10d55d20();
  (**(code **)(*(int *)(param_1 + -0x94) + 0x15c))();
  return;
}


// Reference entry 10d58c00; body size 19 bytes.
#line 1 "ENTRY_10d58c00"

uint __fastcall FUN_10d58c00(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x20) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d59ad0; body size 19 bytes.
#line 1 "ENTRY_10d59ad0"

void __thiscall FUN_10d59ad0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d59be0; body size 19 bytes.
#line 1 "ENTRY_10d59be0"

void __thiscall FUN_10d59be0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d59c40; body size 23 bytes.
#line 1 "ENTRY_10d59c40"

uint __fastcall FUN_10d59c40(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0xd8))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d59e20; body size 21 bytes.
#line 1 "ENTRY_10d59e20"

void __fastcall FUN_10d59e20(int param_1)

{
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x88) + 0xc4))();
    return;
  }
  return;
}


// Reference entry 10d59ee0; body size 44 bytes.
#line 1 "ENTRY_10d59ee0"

undefined4 __thiscall FUN_10d59ee0(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0xe8))(param_2);
    return (undefined4)(param_2);
  }
  createPropertyBag();
  return (undefined4)(param_2);
}


// Reference entry 10d59f20; body size 23 bytes.
#line 1 "ENTRY_10d59f20"

undefined4 __fastcall FUN_10d59f20(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x50))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d59f40; body size 18 bytes.
#line 1 "ENTRY_10d59f40"

undefined4 __fastcall FUN_10d59f40(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x54))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a0c0; body size 18 bytes.
#line 1 "ENTRY_10d5a0c0"

undefined4 __fastcall FUN_10d5a0c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 100))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a1b0; body size 20 bytes.
#line 1 "ENTRY_10d5a1b0"

undefined4 __fastcall FUN_10d5a1b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x30))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a1e0; body size 21 bytes.
#line 1 "ENTRY_10d5a1e0"

undefined4 __fastcall FUN_10d5a1e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0xb8))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a200; body size 21 bytes.
#line 1 "ENTRY_10d5a200"

undefined4 __fastcall FUN_10d5a200(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0xbc))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a220; body size 23 bytes.
#line 1 "ENTRY_10d5a220"

undefined4 __fastcall FUN_10d5a220(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x40))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d5a240; body size 57 bytes.
#line 1 "ENTRY_10d5a240"

SCStr * __thiscall FUN_10d5a240(int param_1,SCStr *param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0x38))(param_2,param_3,param_4);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10d5a300; body size 20 bytes.
#line 1 "ENTRY_10d5a300"

undefined4 __fastcall FUN_10d5a300(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x4c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a320; body size 20 bytes.
#line 1 "ENTRY_10d5a320"

undefined4 __fastcall FUN_10d5a320(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x48))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a340; body size 53 bytes.
#line 1 "ENTRY_10d5a340"

SCStr * __thiscall FUN_10d5a340(int param_1,SCStr *param_2,undefined4 param_3)

{
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0x24))(param_2,param_3);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10d5a3b0; body size 49 bytes.
#line 1 "ENTRY_10d5a3b0"

SCStr * __thiscall FUN_10d5a3b0(int param_1,SCStr *param_2)

{
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0x1c))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10d5a430; body size 61 bytes.
#line 1 "ENTRY_10d5a430"

SCStr * __thiscall FUN_10d5a430(int param_1,SCStr *param_2,undefined4 param_3)

{
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0xe4))(param_2,param_3);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4 *)(param_2 + 4) = DAT_121a07b4;
  return (SCStr *)(param_2);
}


// Reference entry 10d5a4e0; body size 22 bytes.
#line 1 "ENTRY_10d5a4e0"

uint __fastcall FUN_10d5a4e0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x44))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a700; body size 23 bytes.
#line 1 "ENTRY_10d5a700"

uint __fastcall FUN_10d5a700(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x84))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a720; body size 23 bytes.
#line 1 "ENTRY_10d5a720"

uint __fastcall FUN_10d5a720(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x90))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a740; body size 20 bytes.
#line 1 "ENTRY_10d5a740"

uint __fastcall FUN_10d5a740(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x6c))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a760; body size 20 bytes.
#line 1 "ENTRY_10d5a760"

uint __fastcall FUN_10d5a760(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x60))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a780; body size 48 bytes.
#line 1 "ENTRY_10d5a780"

uint __fastcall FUN_10d5a780(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_10d5a820());
  if ((char)uVar1 == '\0') {
    uVar1 = (uint)(thunk_FUN_10d5a520());
    if (((char)uVar1 == '\0') && (*(int **)(param_1 + 0x88) != (int *)0x0)) {
                    
                    
      uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x80))());
      return (uint)(uVar1);
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10d5a7e0; body size 22 bytes.
#line 1 "ENTRY_10d5a7e0"

uint __fastcall FUN_10d5a7e0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a800; body size 20 bytes.
#line 1 "ENTRY_10d5a800"

uint __fastcall FUN_10d5a800(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x70))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a910; body size 49 bytes.
#line 1 "ENTRY_10d5a910"

undefined4 __fastcall FUN_10d5a910(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_10d5a520());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10d5a820());
    if (cVar1 == '\0') {
      if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
        uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x5c))());
        return (undefined4)(uVar2);
      }
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 10d5a960; body size 22 bytes.
#line 1 "ENTRY_10d5a960"

void __fastcall FUN_10d5a960(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
                    
                    
    (**(code **)(*(int *)(*(int *)(param_1 + 8) + 0x80) + 0x14))();
    return;
  }
  return;
}


// Reference entry 10d5aa70; body size 23 bytes.
#line 1 "ENTRY_10d5aa70"

uint __fastcall FUN_10d5aa70(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x94))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5add0; body size 21 bytes.
#line 1 "ENTRY_10d5add0"

void __fastcall FUN_10d5add0(int param_1)

{
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x88) + 0xdc))();
    return;
  }
  return;
}


// Reference entry 10d5adf0; body size 21 bytes.
#line 1 "ENTRY_10d5adf0"

void __fastcall FUN_10d5adf0(int param_1)

{
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x88) + 200))();
    return;
  }
  return;
}


// Reference entry 10d5ae10; body size 23 bytes.
#line 1 "ENTRY_10d5ae10"

uint __fastcall FUN_10d5ae10(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0xcc))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5ae30; body size 23 bytes.
#line 1 "ENTRY_10d5ae30"

uint __fastcall FUN_10d5ae30(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0xd0))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5b120; body size 23 bytes.
#line 1 "ENTRY_10d5b120"

uint __fastcall FUN_10d5b120(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0xc0))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5e1b0; body size 33 bytes.
#line 1 "ENTRY_10d5e1b0"

void __fastcall FUN_10d5e1b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x20) {
    thunk_FUN_10d5e270();
  }
  return;
}


// Reference entry 10d5e990; body size 35 bytes.
#line 1 "ENTRY_10d5e990"

void FUN_10d5e990(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    thunk_FUN_10d5e270();
  }
  return;
}


// Reference entry 10d5ed90; body size 21 bytes.
#line 1 "ENTRY_10d5ed90"

void FUN_10d5ed90(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_10d5f7c0();
  }
  return;
}


// Reference entry 10d5efd0; body size 56 bytes.
#line 1 "ENTRY_10d5efd0"

void FUN_10d5efd0(int param_1,int param_2)

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


// Reference entry 10d5f020; body size 36 bytes.
#line 1 "ENTRY_10d5f020"

void FUN_10d5f020(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq(":onFavoritesChanged"));
  if (bVar1) {
    thunk_FUN_10d5f7c0();
  }
  return;
}


// Reference entry 10d5f4d0; body size 35 bytes.
#line 1 "ENTRY_10d5f4d0"

int __fastcall FUN_10d5f4d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x60));
  if (iVar1 == 0) {
    return (int)(0);
  }
  iVar2 = (int)(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac) >> 3);
  if ((0 < iVar1) && (iVar1 < iVar2)) {
    iVar2 = (int)(iVar1);
  }
  return (int)(iVar2);
}


// Reference entry 10d5f500; body size 20 bytes.
#line 1 "ENTRY_10d5f500"

undefined4 FUN_10d5f500(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(7);
  if (param_1 == 2) {
    uVar1 = (undefined4)(4);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10d5f520; body size 48 bytes.
#line 1 "ENTRY_10d5f520"

SCStr * FUN_10d5f520(SCStr *param_1,int param_2)

{
  if (param_2 == 2) {
    ((SCStr *)(param_1))->int_allocRep("emptyplaylists");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d5fc00; body size 29 bytes.
#line 1 "ENTRY_10d5fc00"

undefined4 FUN_10d5fc00(int param_1)

{
  if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 4)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10d61910; body size 20 bytes.
#line 1 "ENTRY_10d61910"

undefined4 __fastcall FUN_10d61910(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 0x38))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d61e50; body size 17 bytes.
#line 1 "ENTRY_10d61e50"

undefined4 __fastcall FUN_10d61e50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 0x18))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d61e70; body size 60 bytes.
#line 1 "ENTRY_10d61e70"

int * __thiscall FUN_10d61e70(int *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)((**(code **)(*param_1 + 0x58))());
  if (uVar2 <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(param_1[0x27] + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d62490; body size 17 bytes.
#line 1 "ENTRY_10d62490"

undefined4 __fastcall FUN_10d62490(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d63300; body size 19 bytes.
#line 1 "ENTRY_10d63300"

undefined4 __fastcall FUN_10d63300(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 0x24))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d634d0; body size 30 bytes.
#line 1 "ENTRY_10d634d0"

void __fastcall FUN_10d634d0(int param_1)

{
  thunk_FUN_10d62720();
  (**(code **)(*(int *)(param_1 + -0x84) + 0x114))(0);
  return;
}


// Reference entry 10d638e0; body size 19 bytes.
#line 1 "ENTRY_10d638e0"

uint __fastcall FUN_10d638e0(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x2c) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d652f0; body size 19 bytes.
#line 1 "ENTRY_10d652f0"

void __thiscall FUN_10d652f0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d65310; body size 19 bytes.
#line 1 "ENTRY_10d65310"

void __thiscall FUN_10d65310(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d653c0; body size 19 bytes.
#line 1 "ENTRY_10d653c0"

void __thiscall FUN_10d653c0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d653e0; body size 19 bytes.
#line 1 "ENTRY_10d653e0"

void __thiscall FUN_10d653e0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d666f0; body size 55 bytes.
#line 1 "ENTRY_10d666f0"

int * __thiscall FUN_10d666f0(int *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)((**(code **)(*param_1 + 0x58))());
  if (uVar2 <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)((int *)param_1[0x22]);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d668e0; body size 59 bytes.
#line 1 "ENTRY_10d668e0"

SCStr * FUN_10d668e0(SCStr *param_1,int param_2)

{
  if ((param_2 != 6) && (param_2 != 7)) {
    ((SCStr *)(param_1))->int_allocRep("Search History");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d67100; body size 22 bytes.
#line 1 "ENTRY_10d67100"

undefined4 __fastcall FUN_10d67100(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x24) + 0x58))());
    if (iVar1 != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10d67eb0; body size 23 bytes.
#line 1 "ENTRY_10d67eb0"

void FUN_10d67eb0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d685b0; body size 49 bytes.
#line 1 "ENTRY_10d685b0"

int __thiscall FUN_10d685b0(int *param_1,uint *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10d685f0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10d68a40; body size 48 bytes.
#line 1 "ENTRY_10d68a40"

undefined4 * __fastcall FUN_10d68a40(undefined4 *param_1)

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


// Reference entry 10d6d4c0; body size 43 bytes.
#line 1 "ENTRY_10d6d4c0"

int __fastcall FUN_10d6d4c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)((**(code **)(*(int *)(param_1 + -0x10) + 0x38))());
  if (cVar1 != '\0') {
    return (int)(*(int *)(param_1 + 0x280) - *(int *)(param_1 + 0x27c) >> 3);
  }
  iVar2 = (int)(thunk_FUN_1020fe60());
  return (int)(iVar2);
}


// Reference entry 10d6d850; body size 35 bytes.
#line 1 "ENTRY_10d6d850"

undefined4 __thiscall FUN_10d6d850(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x260) != '\0') && (param_2 == 3)) {
    return (undefined4)(4);
  }
  uVar1 = (undefined4)(thunk_FUN_102105a0());
  return (undefined4)(uVar1);
}


// Reference entry 10d6d880; body size 62 bytes.
#line 1 "ENTRY_10d6d880"

SCStr * __thiscall FUN_10d6d880(int param_1,SCStr *param_2,int param_3,undefined4 param_4)

{
  if ((*(char *)(param_1 + 0x260) != '\0') && (param_3 == 3)) {
    ((SCStr *)(param_2))->int_allocRep("icon_search_error");
    return (SCStr *)(param_2);
  }
  thunk_FUN_10210700(param_2,param_3,param_4);
  return (SCStr *)(param_2);
}


// Reference entry 10d70fc0; body size 42 bytes.
#line 1 "ENTRY_10d70fc0"

void __thiscall FUN_10d70fc0(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  thunk_FUN_1021d0d0(param_2);
  cVar1 = (char)((**(code **)(*param_1 + 0x90))());
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x94))();
  }
  return;
}


// Reference entry 10d71000; body size 26 bytes.
#line 1 "ENTRY_10d71000"

void __thiscall FUN_10d71000(int *param_1,undefined4 param_2)

{
  thunk_FUN_1021d0d0(param_2);
  (**(code **)(*param_1 + 0x94))();
  return;
}


// Reference entry 10d71620; body size 28 bytes.
#line 1 "ENTRY_10d71620"

undefined4 __fastcall FUN_10d71620(int param_1)

{
  if (*(int *)(param_1 + -8) == 0) {
    return (undefined4)(0);
  }
  *(undefined1 *)(param_1 + 0xc5) = 0;
  (**(code **)(*(int *)(param_1 + -0x10) + 0x1c))();
  return (undefined4)(1);
}


// Reference entry 10d73f00; body size 23 bytes.
#line 1 "ENTRY_10d73f00"

void FUN_10d73f00(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d755b0; body size 33 bytes.
#line 1 "ENTRY_10d755b0"

void __fastcall FUN_10d755b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d755e0; body size 33 bytes.
#line 1 "ENTRY_10d755e0"

void __fastcall FUN_10d755e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d75610; body size 33 bytes.
#line 1 "ENTRY_10d75610"

void __fastcall FUN_10d75610(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d75640; body size 33 bytes.
#line 1 "ENTRY_10d75640"

void __fastcall FUN_10d75640(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d75670; body size 33 bytes.
#line 1 "ENTRY_10d75670"

void __fastcall FUN_10d75670(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d756a0; body size 33 bytes.
#line 1 "ENTRY_10d756a0"

void __fastcall FUN_10d756a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d75dc0; body size 37 bytes.
#line 1 "ENTRY_10d75dc0"

int * __fastcall FUN_10d75dc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10d75df0; body size 37 bytes.
#line 1 "ENTRY_10d75df0"

int * __fastcall FUN_10d75df0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10d75e20; body size 37 bytes.
#line 1 "ENTRY_10d75e20"

int * __fastcall FUN_10d75e20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10d766e0; body size 33 bytes.
#line 1 "ENTRY_10d766e0"

void __fastcall FUN_10d766e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d76710; body size 33 bytes.
#line 1 "ENTRY_10d76710"

void __fastcall FUN_10d76710(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d76740; body size 33 bytes.
#line 1 "ENTRY_10d76740"

void __fastcall FUN_10d76740(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10d774f0; body size 63 bytes.
#line 1 "ENTRY_10d774f0"

char __fastcall FUN_10d774f0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x30) + 0x30))());
    if (cVar1 != '\0') {
      cVar1 = (char)('\x01');
      goto LAB_10d7750b;
    }
  }
  cVar1 = (char)('\0');
LAB_10d7750b:
  if ((*(int *)(param_1 + 0x38) != 0) && (*(int **)(param_1 + 0x28) != (int *)0x0)) {
    if (cVar1 != '\0') {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x28) + 0x30))());
      if (cVar1 != '\0') {
        return (char)('\x01');
      }
    }
    cVar1 = (char)('\0');
  }
  return (char)(cVar1);
}


// Reference entry 10d77940; body size 41 bytes.
#line 1 "ENTRY_10d77940"

void __fastcall FUN_10d77940(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x44) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x40) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10d77b40; body size 28 bytes.
#line 1 "ENTRY_10d77b40"

void FUN_10d77b40(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)(aSStack_c))->int_allocRep("acct_sign_in.complete");
  thunk_FUN_10d798f0();
  return;
}


// Reference entry 10d79fc0; body size 19 bytes.
#line 1 "ENTRY_10d79fc0"

bool __fastcall FUN_10d79fc0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xf8))());
  return (bool)(cVar1 == '\0');
}


// Reference entry 10d7a4a0; body size 27 bytes.
#line 1 "ENTRY_10d7a4a0"

void FUN_10d7a4a0(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)(aSStack_c))->int_allocRep("no_descriptor");
  thunk_FUN_10545740();
  return;
}


// Reference entry 10d87c20; body size 51 bytes.
#line 1 "ENTRY_10d87c20"

undefined4 * __thiscall FUN_10d87c20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_111a4bc0(0,"SCSwfObjACInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjSysInternalListener);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10d893e0; body size 22 bytes.
#line 1 "ENTRY_10d893e0"

int __fastcall FUN_10d893e0(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x28) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x58))(), iVar1 != 0)) {
    return (int)(iVar1);
  }
  return (int)(1);
}


// Reference entry 10d8ce00; body size 19 bytes.
#line 1 "ENTRY_10d8ce00"

void FUN_10d8ce00(void)

{
  thunk_FUN_101f4930();
  thunk_FUN_105d3a20();
  return;
}


// Reference entry 10d8d4f0; body size 42 bytes.
#line 1 "ENTRY_10d8d4f0"

undefined4 __thiscall FUN_10d8d4f0(undefined4 param_1,byte param_2)

{
  thunk_FUN_101f4930();
  thunk_FUN_105d3a20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x54);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d97510; body size 60 bytes.
#line 1 "ENTRY_10d97510"

void __fastcall FUN_10d97510(int *param_1)

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


// Reference entry 10d9bb70; body size 60 bytes.
#line 1 "ENTRY_10d9bb70"

void __fastcall FUN_10d9bb70(int *param_1)

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


// Reference entry 10d9c780; body size 43 bytes.
#line 1 "ENTRY_10d9c780"

int __thiscall FUN_10d9c780(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 0x5c) = 0;
    uVar1 = (uint)((uint)(*(char *)(param_1 + 0x6c) == '\0'));
    thunk_FUN_1109f7f0(uVar1);
    thunk_FUN_110a3e90(uVar1);
  }
  return (int)(param_2);
}


// Reference entry 10d9ed50; body size 49 bytes.
#line 1 "ENTRY_10d9ed50"

int __thiscall FUN_10d9ed50(int *param_1,int *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10d9efd0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10d9f530; body size 48 bytes.
#line 1 "ENTRY_10d9f530"

undefined4 * __fastcall FUN_10d9f530(undefined4 *param_1)

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


// Reference entry 10da1830; body size 31 bytes.
#line 1 "ENTRY_10da1830"

undefined4 FUN_10da1830(void)

{
  SCLibrary *pSVar1;
  int iVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  iVar2 = (int)((**(code **)(*(int *)pSVar1 + 0x124))());
  if ((iVar2 != 1) && (iVar2 != 3)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10da1e80; body size 21 bytes.
#line 1 "ENTRY_10da1e80"

bool FUN_10da1e80(void)

{
  SCLibrary *pSVar1;
  int iVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  iVar2 = (int)((**(code **)(*(int *)pSVar1 + 0xf4))());
  return (bool)(iVar2 == 0);
}


// Reference entry 10da4720; body size 27 bytes.
#line 1 "ENTRY_10da4720"

undefined4 * __fastcall FUN_10da4720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10da5040; body size 33 bytes.
#line 1 "ENTRY_10da5040"

void __fastcall FUN_10da5040(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10da50a0; body size 33 bytes.
#line 1 "ENTRY_10da50a0"

void __fastcall FUN_10da50a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10da5810; body size 60 bytes.
#line 1 "ENTRY_10da5810"

int __thiscall FUN_10da5810(int param_1,byte param_2)

{
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


// Reference entry 10da5bf0; body size 58 bytes.
#line 1 "ENTRY_10da5bf0"

void __thiscall FUN_10da5bf0(int param_1,char param_2)

{
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


// Reference entry 10da5c40; body size 39 bytes.
#line 1 "ENTRY_10da5c40"

void __thiscall FUN_10da5c40(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10da5d90; body size 33 bytes.
#line 1 "ENTRY_10da5d90"

void __fastcall FUN_10da5d90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10da6880; body size 35 bytes.
#line 1 "ENTRY_10da6880"

void __thiscall FUN_10da6880(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10da6b80; body size 20 bytes.
#line 1 "ENTRY_10da6b80"

uint __fastcall FUN_10da6b80(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = (uint)(thunk_FUN_11111e40());
    return (uint)(uVar1 & 0xff);
  }
  return (uint)(0xffffffff);
}


// Reference entry 10da6c80; body size 20 bytes.
#line 1 "ENTRY_10da6c80"

undefined4 __thiscall FUN_10da6c80(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  (**(code **)(*param_1 + 0x4c))(param_2,0,1);
  return (undefined4)(uVar1);
}


// Reference entry 10da7060; body size 20 bytes.
#line 1 "ENTRY_10da7060"

uint __fastcall FUN_10da7060(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = (uint)(thunk_FUN_111135f0());
    return (uint)(uVar1 & 0xff);
  }
  return (uint)(0xffffffff);
}


// Reference entry 10da7080; body size 19 bytes.
#line 1 "ENTRY_10da7080"

undefined4 __fastcall FUN_10da7080(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(FUN_111138d0());
  return (undefined4)(uVar1);
}


// Reference entry 10da71e0; body size 40 bytes.
#line 1 "ENTRY_10da71e0"

undefined4 __fastcall FUN_10da71e0(int param_1)

{
  undefined1 local_5;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return (undefined4)(0xffffffff);
  }
  thunk_FUN_11113bb0(&local_4,&local_5);
  return (undefined4)(local_4);
}


// Reference entry 10da73d0; body size 21 bytes.
#line 1 "ENTRY_10da73d0"

undefined4 __fastcall FUN_10da73d0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x1c))());
  if ((iVar1 != 2) && (iVar1 != 4)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10da73f0; body size 34 bytes.
#line 1 "ENTRY_10da73f0"

void __fastcall FUN_10da73f0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onDateFormatChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da7430; body size 34 bytes.
#line 1 "ENTRY_10da7430"

void __fastcall FUN_10da7430(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onTimeFormatChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da7460; body size 34 bytes.
#line 1 "ENTRY_10da7460"

void __fastcall FUN_10da7460(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onTimeGenerationChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da7490; body size 36 bytes.
#line 1 "ENTRY_10da7490"

void __fastcall FUN_10da7490(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onTimeServerChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da74c0; body size 34 bytes.
#line 1 "ENTRY_10da74c0"

void __fastcall FUN_10da74c0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onTimeStatusChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da74f0; body size 34 bytes.
#line 1 "ENTRY_10da74f0"

void __fastcall FUN_10da74f0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -8);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDateTimeManager:onTimeZoneChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10da7930; body size 38 bytes.
#line 1 "ENTRY_10da7930"

undefined4 __thiscall FUN_10da7930(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredTimeServer",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10da7e10; body size 43 bytes.
#line 1 "ENTRY_10da7e10"

void FUN_10da7e10(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930(param_1);
    thunk_FUN_112af4e0("SCDateTimeManager",3,"Remove Event Sink %p",param_1);
  }
  return;
}


// Reference entry 10da9750; body size 40 bytes.
#line 1 "ENTRY_10da9750"

undefined4 __fastcall FUN_10da9750(int param_1)

{
  switch(*(undefined1 *)(param_1 + 300)) {
  case 0:
  case 1:
    return (undefined4)(3);
  case 2:
    return (undefined4)(1);
  case 3:
  case 4:
    return (undefined4)(2);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 10db2270; body size 62 bytes.
#line 1 "ENTRY_10db2270"

void __fastcall FUN_10db2270(int *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  
  bVar1 = (byte)((**(code **)(*param_1 + 4))());
  uVar3 = (uint)((1 << (bVar1 & 0x1f)) - 1);
  param_1[1] = (int)(uVar3);
  if (((char *)(char *)(param_1[2]) == (char *)0x0) || (*(char *)param_1[2] == '\0')) {
    param_1[1] = (int)(uVar3 & 0xfffffff9);
  }
  else {
    cVar2 = (char)(thunk_FUN_1050e5b0());
    if (cVar2 != '\0') {
      param_1[1] = (int)(param_1[1] & 0xfffffffb);
      return;
    }
  }
  return;
}


// Reference entry 10db22c0; body size 23 bytes.
#line 1 "ENTRY_10db22c0"

void __fastcall FUN_10db22c0(int *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((**(code **)(*param_1 + 4))());
  param_1[1] = (int)((1 << (bVar1 & 0x1f)) + -1);
  return;
}


// Reference entry 10db2460; body size 23 bytes.
#line 1 "ENTRY_10db2460"

void __fastcall FUN_10db2460(int *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((**(code **)(*param_1 + 4))());
  param_1[1] = (int)((1 << (bVar1 & 0x1f)) + -1);
  return;
}


// Reference entry 10db9020; body size 45 bytes.
#line 1 "ENTRY_10db9020"

undefined4 * __thiscall FUN_10db9020(undefined4 *param_1,byte param_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewViewBuilder_HeaderMapping);
  free((void *)param_1[3]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10db9060; body size 54 bytes.
#line 1 "ENTRY_10db9060"

undefined4 * __thiscall FUN_10db9060(undefined4 *param_1,byte param_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewViewBuilder_MenuItemMapping);
  free((void *)param_1[4]);
  free((void *)param_1[2]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10db92a0; body size 41 bytes.
#line 1 "ENTRY_10db92a0"

undefined4 * __thiscall FUN_10db92a0(undefined4 *param_1,byte param_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoviewMenuInfo);
  thunk_FUN_10db8010();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10dbb680; body size 45 bytes.
#line 1 "ENTRY_10dbb680"

void __thiscall FUN_10dbb680(int *param_1,int param_2)

{
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


// Reference entry 10dbd9b0; body size 59 bytes.
#line 1 "ENTRY_10dbd9b0"

void FUN_10dbd9b0(int param_1,int param_2)

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


// Reference entry 10dc3e30; body size 61 bytes.
#line 1 "ENTRY_10dc3e30"

undefined4 __fastcall FUN_10dc3e30(int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = (undefined4)(0);
  iVar1 = (int)(FUN_10dc6500(param_1 + 0x2c0));
  if (iVar1 != 0) {
    thunk_FUN_110dde00(&local_4,param_1 + 4,param_1 + 0x29c);
  }
  return (undefined4)(local_4);
}


// Reference entry 10dcb000; body size 50 bytes.
#line 1 "ENTRY_10dcb000"

undefined4 * __thiscall FUN_10dcb000(undefined4 *param_1,byte param_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xac);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10dcb040; body size 50 bytes.
#line 1 "ENTRY_10dcb040"

undefined4 * __thiscall FUN_10dcb040(undefined4 *param_1,byte param_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCPInfoListDataSource);
  thunk_FUN_10202e00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDataSource);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xac);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10dcdda0; body size 23 bytes.
#line 1 "ENTRY_10dcdda0"

void __fastcall FUN_10dcdda0(int *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((**(code **)(*param_1 + 4))());
  param_1[1] = (int)((1 << (bVar1 & 0x1f)) + -1);
  return;
}


// Reference entry 10dd2230; body size 50 bytes.
#line 1 "ENTRY_10dd2230"

void __thiscall FUN_10dd2230(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    uVar2 = (undefined4)(param_2[1]);
    *puVar1 = (undefined4)(*param_2);
    puVar1[1] = (undefined4)(uVar2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
    return;
  }
  thunk_FUN_10dcfdb0(puVar1,param_2);
  return;
}


// Reference entry 10dd2280; body size 43 bytes.
#line 1 "ENTRY_10dd2280"

int __fastcall FUN_10dd2280(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 3) * 4);
}


// Reference entry 10dd2780; body size 55 bytes.
#line 1 "ENTRY_10dd2780"

SCStr * __thiscall FUN_10dd2780(int *param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  cVar1 = (char)((**(code **)(*param_1 + 100))());
  if (cVar1 == '\0') {
    uVar3 = (undefined4)(0x2091);
  }
  else {
    uVar3 = (undefined4)(0x209e);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10dd2b90; body size 23 bytes.
#line 1 "ENTRY_10dd2b90"

undefined4 __thiscall FUN_10dd2b90(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x44))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10dd3040; body size 22 bytes.
#line 1 "ENTRY_10dd3040"

undefined4 FUN_10dd3040(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_102f5770());
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
                    
                    
    uVar2 = (undefined4)((**(code **)*puVar1)());
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10dd44c0; body size 41 bytes.
#line 1 "ENTRY_10dd44c0"

void __fastcall FUN_10dd44c0(int param_1)

{
  if (*(int *)(param_1 + 0xa8) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xa8));
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined1 *)(param_1 + 0xad) = 0;
  }
  return;
}


// Reference entry 10dd5c80; body size 52 bytes.
#line 1 "ENTRY_10dd5c80"

void __thiscall FUN_10dd5c80(int param_1,uint param_2)

{
  void *_Src;
  void *_Dst;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3)) {
    _Dst = (void *)((void *)(*(int *)(param_1 + 8) + param_2 * 8));
    _Src = (void *)((void *)((int)_Dst + 8));
    memmove(_Dst,_Src,*(int *)(param_1 + 0xc) - (int)_Src);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
  }
  return;
}


// Reference entry 10dd5d50; body size 39 bytes.
#line 1 "ENTRY_10dd5d50"

void __thiscall FUN_10dd5d50(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != -1) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 4) + 0x58))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
    }
  }
  return;
}


// Reference entry 10dd5e60; body size 43 bytes.
#line 1 "ENTRY_10dd5e60"

int __fastcall FUN_10dd5e60(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 3) * 4);
}


// Reference entry 10dd5ea0; body size 43 bytes.
#line 1 "ENTRY_10dd5ea0"

int __fastcall FUN_10dd5ea0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) +
         (uVar1 & 3) * 4);
}


// Reference entry 10dd6680; body size 33 bytes.
#line 1 "ENTRY_10dd6680"

void __thiscall FUN_10dd6680(int *param_1,undefined4 param_2)

{
  thunk_FUN_10dd66e0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd66b0; body size 33 bytes.
#line 1 "ENTRY_10dd66b0"

void __thiscall FUN_10dd66b0(int *param_1,undefined4 param_2)

{
  thunk_FUN_10dd6740(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd67a0; body size 49 bytes.
#line 1 "ENTRY_10dd67a0"

int __thiscall FUN_10dd67a0(int *param_1,uint *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10dd6820(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10dd67e0; body size 49 bytes.
#line 1 "ENTRY_10dd67e0"

int __thiscall FUN_10dd67e0(int *param_1,uint *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10dd6880(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10dd7220; body size 48 bytes.
#line 1 "ENTRY_10dd7220"

undefined4 * __fastcall FUN_10dd7220(undefined4 *param_1)

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


// Reference entry 10dd7260; body size 48 bytes.
#line 1 "ENTRY_10dd7260"

undefined4 * __fastcall FUN_10dd7260(undefined4 *param_1)

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


// Reference entry 10dd7f00; body size 28 bytes.
#line 1 "ENTRY_10dd7f00"

void __fastcall FUN_10dd7f00(int *param_1)

{
  thunk_FUN_10dd66e0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd7f30; body size 28 bytes.
#line 1 "ENTRY_10dd7f30"

void __fastcall FUN_10dd7f30(int *param_1)

{
  thunk_FUN_10dd6740(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd7f90; body size 38 bytes.
#line 1 "ENTRY_10dd7f90"

void __fastcall FUN_10dd7f90(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_101a33f0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x20);
  }
  return;
}


// Reference entry 10dd8000; body size 28 bytes.
#line 1 "ENTRY_10dd8000"

void __fastcall FUN_10dd8000(int *param_1)

{
  thunk_FUN_10dd66e0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd8030; body size 28 bytes.
#line 1 "ENTRY_10dd8030"

void __fastcall FUN_10dd8030(int *param_1)

{
  thunk_FUN_10dd6740(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10dd8a80; body size 35 bytes.
#line 1 "ENTRY_10dd8a80"

undefined4 __thiscall FUN_10dd8a80(undefined4 param_1,byte param_2)

{
  thunk_FUN_101a33f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 10de5f80; body size 60 bytes.
#line 1 "ENTRY_10de5f80"

void __thiscall
FUN_10de5f80(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            short param_6)

{
  if ((param_6 == 0x403) && (param_4 == 0)) {
    thunk_FUN_10de84c0(1);
    return;
  }
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(short *)(param_1 + 0xb4) = param_6;
  thunk_FUN_10de7a90();
  return;
}


// Reference entry 10de9cd0; body size 49 bytes.
#line 1 "ENTRY_10de9cd0"

undefined4 * __fastcall FUN_10de9cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10de9dd0; body size 19 bytes.
#line 1 "ENTRY_10de9dd0"

void FUN_10de9dd0(void)

{
  thunk_FUN_10595470();
  thunk_FUN_10595510();
  return;
}


// Reference entry 10dec700; body size 62 bytes.
#line 1 "ENTRY_10dec700"

int __thiscall FUN_10dec700(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10dec7c0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_10defa10(param_2,local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10dee260; body size 48 bytes.
#line 1 "ENTRY_10dee260"

undefined4 * __fastcall FUN_10dee260(undefined4 *param_1)

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


// Reference entry 10deef20; body size 35 bytes.
#line 1 "ENTRY_10deef20"

undefined4 * __fastcall FUN_10deef20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizEventSource);
  param_1[1] = (undefined4)(0xffffffff);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10deefc0; body size 36 bytes.
#line 1 "ENTRY_10deefc0"

void __fastcall FUN_10deefc0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    thunk_FUN_10dec580(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x1c);
  }
  return;
}


// Reference entry 10deeff0; body size 38 bytes.
#line 1 "ENTRY_10deeff0"

void __fastcall FUN_10deeff0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10def0d0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x2c);
  }
  return;
}


// Reference entry 10def6f0; body size 18 bytes.
#line 1 "ENTRY_10def6f0"

bool __fastcall FUN_10def6f0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10def4a0(param_1));
  return (bool)(cVar1 == '\0');
}


// Reference entry 10def940; body size 23 bytes.
#line 1 "ENTRY_10def940"

undefined4 __thiscall FUN_10def940(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10deeca0(0,param_1,param_3);
  return (undefined4)(param_2);
}


// Reference entry 10defb40; body size 23 bytes.
#line 1 "ENTRY_10defb40"

undefined4 __thiscall FUN_10defb40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10deeca0(1,param_1,param_3);
  return (undefined4)(param_2);
}


// Reference entry 10df0700; body size 22 bytes.
#line 1 "ENTRY_10df0700"

bool __fastcall FUN_10df0700(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10df0720(param_1));
  return (bool)(0 < iVar1);
}


// Reference entry 10df1160; body size 18 bytes.
#line 1 "ENTRY_10df1160"

bool __fastcall FUN_10df1160(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10df0720(param_1));
  return (bool)(0 < iVar1);
}


// Reference entry 10df15a0; body size 27 bytes.
#line 1 "ENTRY_10df15a0"

void __thiscall FUN_10df15a0(int param_1,undefined4 param_2)

{
 try {
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 auStack_bc [36];
  undefined1 auStack_98 [8];
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  void *pvStack_80;
  undefined1 *puStack_7c;
  int iStack_78;
  undefined4 auStack_74 [9];
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  int iStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  uint uStack_20;
  int *piStack_1c;
  uint *puStack_18;
  int *piStack_14;
  int *piStack_10;
  uint uStack_c;
  char cStack_6;
  char cStack_5;
  
  piVar1 = (int *)(*(int **)(param_1 + 8));
  if (((int *)(piVar1) == (int *)0x0) || ((*(uint *)(param_1 + 4) & piVar1[0x36]) == 0)) {
    return;
  }
  iStack_78 = (int)(0xffffffff);

  piStack_10 = (int *)((int *)0x0);
  piStack_14 = (int *)((int *)0x0);
  piStack_30 = (int *)((int *)0x0);
  piStack_34 = (int *)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    piStack_30 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)auStack_74));
    (**(code **)(*piStack_30 + 4))();
  }
  iStack_78 = (int)(0);
  cVar3 = (char)(thunk_FUN_106dc570());
  if (cVar3 == '\0') {
    auStack_74[0] = (undefined4)(1);
    thunk_FUN_10deea50(param_2);

    piStack_4c = (int *)((int *)0x0);

    piStack_44 = (int *)((int *)0x0);
    iStack_78 = (int)(((uint)(*(unsigned short *)((char *)&iStack_78 + 1)) << 8 | (uint)(1)));
    piStack_14 = (int *)((int *)0x1);
    piStack_10 = (int *)((int *)0x1);
    cVar3 = (char)(thunk_FUN_105af2b0(auStack_74));
    if (cVar3 != '\0') {
      bVar2 = (bool)(false);
      goto LAB_105ad9e2;
    }
  }
  bVar2 = (bool)(true);
LAB_105ad9e2:
  piVar6 = (int *)(piStack_44);
  iStack_78 = (int)(0);
  if (((uint)piStack_14 & 1) != 0) {
    piStack_14 = (int *)((int *)((uint)piStack_14 & 0xfffffffe));
    *(unsigned char *)((char *)&iStack_78 + 0) = 2;
    *(unsigned short *)((char *)&iStack_78 + 1) = 0;
    if ((int *)(piStack_44) != (int *)0x0) {

      piStack_44 = (int *)((int *)0x0);
      (**(code **)(*piVar6 + 8))();
    }
    piVar6 = (int *)(piStack_4c);
    *(unsigned char *)((char *)&iStack_78 + 0) = 3;
    if ((int *)(piStack_4c) != (int *)0x0) {

      piStack_4c = (int *)((int *)0x0);
      (**(code **)(*piVar6 + 8))();
    }
    iStack_78 = (int)((uint)*(unsigned short *)((char *)&iStack_78 + 1) << 8);
    thunk_FUN_10def0d0();
  }
  if (!bVar2) {
    piStack_1c = (int *)((int *)thunk_FUN_10288040());
    cVar3 = (char)(thunk_FUN_10df3e90());
    if ((cVar3 == '\0') || (cVar3 = thunk_FUN_106dc570(), cVar3 != '\0')) {
      bVar2 = (bool)(false);
    }
    else {
      bVar2 = (bool)(true);
    }
    thunk_FUN_10df2e40(auStack_bc);
    uVar5 = (undefined4)(param_2);
    *(unsigned char *)((char *)&iStack_78 + 0) = 5;
    if (bVar2) {
      thunk_FUN_10df2460(0,param_2);
      *(unsigned char *)((char *)&iStack_78 + 0) = 6;
      thunk_FUN_106dc6c0(auStack_74,uVar5);
      thunk_FUN_10df3190(uVar5);
      FUN_100517a8();
    }
    else {
      cVar3 = (char)(thunk_FUN_106dc540());
      uVar5 = (undefined4)(param_2);
      if (cVar3 == '\0') {
        uVar4 = (undefined4)(thunk_FUN_10dfd3a0());
        uVar5 = (undefined4)(param_2);
        *(unsigned char *)((char *)&iStack_78 + 0) = 8;
        thunk_FUN_10def6b0(uVar4);
        *(unsigned char *)((char *)&iStack_78 + 0) = 5;
        thunk_FUN_10def0d0();
        uVar5 = (undefined4)(thunk_FUN_10df2460(2,uVar5));
        *(unsigned char *)((char *)&iStack_78 + 0) = 9;
        thunk_FUN_105a8c20(uVar5);
        iStack_78 = (int)(((uint)(*(unsigned short *)((char *)&iStack_78 + 1)) << 8 | (uint)(5)));
        FUN_100517a8();
        thunk_FUN_106dc650(piVar1 + 0x1c,piVar1 + 2);
      }
      else {
        uVar4 = (undefined4)(thunk_FUN_10df2460(1,param_2));
        *(unsigned char *)((char *)&iStack_78 + 0) = 10;
        thunk_FUN_105a8c20(uVar4);
        iStack_78 = (int)(((uint)(*(unsigned short *)((char *)&iStack_78 + 1)) << 8 | (uint)(5)));
        FUN_100517a8();
        thunk_FUN_106dc6c0(piVar1 + 0x1c,uVar5);
      }
      cVar3 = (char)(thunk_FUN_10df3ed0());
      if (cVar3 != '\0') {
        piVar1[0x36] = (int)(0);
      }
      thunk_FUN_10e01790(&puStack_40);
      *(unsigned char *)((char *)&iStack_78 + 0) = 0xb;
      puStack_18 = (uint *)(puStack_3c);
      puVar14 = (uint *)(puStack_40);
      if ((uint *)(puStack_40) != (uint *)(puStack_3c)) {
        do {
          uStack_20 = (uint)(*puVar14);
          uStack_c = (uint)(uStack_20);
          thunk_FUN_105a5630(auStack_98,&uStack_c);
          if (*(char *)(iStack_90 + 0xd) == '\0') {
            uVar11 = (uint)(uStack_20);
            if ((int)uStack_20 < *(int *)(iStack_90 + 0x10)) goto LAB_105adbb7;
            iStack_24 = (int)(piVar1[0x34]);
            iVar7 = (int)(iStack_90);
          }
          else {
            uVar11 = (uint)(*puVar14);
LAB_105adbb7:
            iStack_24 = (int)(piVar1[0x34]);
            iVar7 = (int)(iStack_24);
          }
          if ((uVar11 & piVar1[0x36]) == 0) {
            if (iVar7 != iStack_24) {
              if (*(int **)(iVar7 + 0x14) != (int *)0x0) {
                (**(code **)(**(int **)(iVar7 + 0x14) + 0x14))(1);
              }
              uVar5 = (undefined4)(thunk_FUN_105aa0f0(iVar7));
              thunk_FUN_1148a50e(uVar5,0x18);
            }
          }
          else if (iVar7 == iStack_24) {
            thunk_FUN_105a5630(&uStack_8c,&uStack_c);
            piStack_10 = (int *)(piStack_84);
            if ((*(char *)((int)piStack_84 + 0xd) != '\0') ||
               (uVar11 = uStack_20, (int)uStack_20 < piStack_84[4])) {
              if (piVar1[0x35] == 0xaaaaaaa) {
                    
                thunk_FUN_101d7220();
              }
              *(unsigned char *)((char *)&iStack_78 + 0) = 0xc;
              piStack_28 = (int *)((int *)0x0);
              piStack_2c = (int *)(piVar1 + 0x34);
              piVar6 = (int *)(operator_new(0x18));
              *(unsigned char *)((char *)&iStack_78 + 0) = 0xb;
              piStack_28 = (int *)((int *)0x0);
              piVar6[4] = (int)(uStack_c);
              piVar6[5] = (int)(0);
              *piVar6 = (int)(iStack_24);
              piVar6[1] = (int)(iStack_24);
              piVar6[2] = (int)(iStack_24);
              *(undefined2 *)(piVar6 + 3) = 0;
              piStack_10 = (int *)((int *)thunk_FUN_105aa9d0(uStack_8c,uStack_88,piVar6));
              uVar11 = (uint)(uStack_c);
            }
            iVar7 = (int)(thunk_FUN_10e00af0(uVar11,piVar1));
            piStack_10[5] = (int)(iVar7);
          }
          puVar14 = (uint *)(puVar14 + 1);
        } while ((uint *)(puVar14) != (uint *)(puStack_18));
      }
      *(unsigned char *)((char *)&iStack_78 + 0) = 5;
      if ((uint *)(puStack_40) != (uint *)0x0) {
        uVar11 = (uint)((iStack_38 - (int)puStack_40 >> 2) * 4);
        puVar14 = (uint *)(puStack_40);
        if (0xfff < uVar11) {
          puVar14 = (uint *)((uint *)puStack_40[-1]);
          uVar11 = (uint)(uVar11 + 0x23);
          if (0x1f < (uint)((int)puStack_40 + (-4 - (int)puVar14))) {
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(puVar14,uVar11);
      }
      cStack_5 = (char)('\0');
      cStack_6 = (char)('\0');
      thunk_FUN_10df31d0(piVar1 + 0x1b,&cStack_5,&cStack_6);
      if ((cStack_5 == '\0') && (cVar3 = thunk_FUN_10def6b0(auStack_bc), cVar3 == '\0')) {
        piVar1[0x29] = (int)(piVar1[0x29] + 1);
      }
      else {
        iVar7 = (int)(thunk_FUN_10df2e20());
        if ((0 < piVar1[0x29]) && (iVar7 != 0)) {
          puVar9 = (undefined4 *)((undefined4 *)thunk_FUN_10df0ea0(&puStack_18));
          *(unsigned char *)((char *)&iStack_78 + 0) = 0xd;
          puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_106dfa00(&param_2));
          *(unsigned char *)((char *)&iStack_78 + 0) = 0xe;
          puVar12 = (undefined1 *)(&DAT_1186d2ee);
          if ((undefined1 *)*(undefined1 *)(puVar9) != (undefined1 *)0x0) {
            puVar12 = (undefined1 *)((undefined1 *)*puVar9);
          }
          puVar13 = (undefined1 *)(&DAT_1186d2ee);
          if ((undefined1 *)*(undefined1 *)(puVar8) != (undefined1 *)0x0) {
            puVar13 = (undefined1 *)((undefined1 *)*puVar8);
          }
          thunk_FUN_10302280(piVar1 + 6,"%s ignored duplicate events (%s x%i)",puVar13,puVar12,
                             piVar1[0x29]);
          *(unsigned char *)((char *)&iStack_78 + 0) = 0xf;
          ((SCStr *)((SCStr *)&param_2))->int_release();
          param_2 = (undefined4)(0);
          *(unsigned char *)((char *)&iStack_78 + 0) = 0x10;
          ((SCStr *)((SCStr *)&puStack_18))->int_release();
          *(unsigned char *)((char *)&iStack_78 + 0) = 5;
        }
        piVar1[0x29] = (int)(0);
      }
      if (cStack_6 != '\0') {
        uVar5 = (undefined4)(thunk_FUN_10df3fd0(&param_2));
        *(unsigned char *)((char *)&iStack_78 + 0) = 0x11;
        thunk_FUN_10302310(uVar5);
        *(unsigned char *)((char *)&iStack_78 + 0) = 0x12;
        ((SCStr *)((SCStr *)&param_2))->int_release();
        *(unsigned char *)((char *)&iStack_78 + 0) = 5;
      }
      if (cStack_5 != '\0') {
        cVar3 = (char)(thunk_FUN_10df3ed0());
        if (cVar3 == '\0') {
          if (piVar1[0x25] == 0) {
            iVar7 = (int)(-1);
          }
          else {
            ((SCStr *)((SCStr *)&param_2))->int_allocRep("style");
            piStack_14 = (int *)((int *)((uint)piStack_14 | 2));
            iStack_78 = (int)(((uint)(*(unsigned short *)((char *)&iStack_78 + 1)) << 8 | (uint)(0x13)));
            piStack_10 = (int *)(piStack_14);
            iVar7 = (int)((**(code **)(*(int *)piVar1[0x25] + 0x24))(&param_2));
          }
          *(unsigned short *)((char *)&iStack_78 + 1) = 0;
          if (((uint)piStack_14 & 2) != 0) {
            iStack_78 = (int)(0x14);
            ((SCStr *)((SCStr *)&param_2))->int_release();
          }
          *(unsigned char *)((char *)&iStack_78 + 0) = 5;
          if ((int *)(int *)(piVar1[0x16]) == (int *)0x0) {
            if (iVar7 == 0) {
              thunk_FUN_105b02b0(1);
            }
          }
          else if (iVar7 == 1) {
            ((SCStr *)((SCStr *)&param_2))->int_allocRep("{}");
            *(unsigned char *)((char *)&iStack_78 + 0) = 0x15;
            (**(code **)(*(int *)piVar1[0x16] + 0x14))(&param_2,piVar1);
            *(unsigned char *)((char *)&iStack_78 + 0) = 0x16;
            ((SCStr *)((SCStr *)&param_2))->int_release();
          }
          else {
            (**(code **)(*(int *)piVar1[0x16] + 0x14))(piVar1 + 0x1b,piVar1);
          }
        }
        else {
          thunk_FUN_1028a000(piVar1);
          ((SCStr *)((SCStr *)&uStack_c))->int_allocRep("postTerminationAction");
          *(unsigned char *)((char *)&iStack_78 + 0) = 0x17;
          puVar9 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)piVar1[0x27] + 0x6c))(&piStack_10,&uStack_c));
          piVar6 = (int *)((int *)*puVar9);
          *(unsigned char *)((char *)&iStack_78 + 0) = 0x18;
          *puVar9 = (undefined4)(0);
          piStack_2c = (int *)(piVar6);
          if ((int *)(piVar6) == (int *)0x0) {
            piVar10 = (int *)((int *)0x0);
          }
          else {
            piVar10 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
          }
          *(unsigned char *)((char *)&iStack_78 + 0) = 0x19;
          piStack_28 = (int *)(piVar10);
          if ((int *)(piVar6) == (int *)0x0) {
            puVar14 = (uint *)((uint *)0x0);
            puStack_18 = (uint *)((uint *)0x0);
          }
          else {
            ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIActionContext");
            *(unsigned char *)((char *)&iStack_78 + 0) = 0x1a;
            puVar9 = (undefined4 *)((undefined4 *)(**(code **)*piVar6)(&piStack_1c,&param_2));
            puVar14 = (uint *)((uint *)*puVar9);
            *puVar9 = (undefined4)(0);
            *(unsigned char *)((char *)&iStack_78 + 0) = 0x1c;
            puStack_18 = (uint *)(puVar14);
            if ((int *)(piStack_1c) != (int *)0x0) {
              (**(code **)(*piStack_1c + 8))();
            }
            *(unsigned char *)((char *)&iStack_78 + 0) = 0x1d;
            ((SCStr *)((SCStr *)&param_2))->int_release();
            param_2 = (undefined4)(0);
          }
          *(unsigned char *)((char *)&iStack_78 + 0) = 0x1e;
          if ((int *)(piVar10) != (int *)0x0) {
            (**(code **)(*piVar10 + 8))();
          }
          *(unsigned char *)((char *)&iStack_78 + 0) = 0x21;
          if ((int *)(piStack_10) != (int *)0x0) {
            (**(code **)(*piStack_10 + 8))();
          }
          *(unsigned char *)((char *)&iStack_78 + 0) = 0x23;
          ((SCStr *)((SCStr *)&uStack_c))->int_release();

          *(unsigned char *)((char *)&iStack_78 + 0) = 0x22;
          if ((uint *)(puVar14) != (uint *)0x0) {
            (**(code **)(*puVar14 + 0x14))();
          }
          if (piVar1[0x16] != 0) {
            ((SCStr *)((SCStr *)&param_2))->int_allocRep("{}");
            *(unsigned char *)((char *)&iStack_78 + 0) = 0x24;
            (**(code **)(*(int *)piVar1[0x16] + 0x14))(&param_2,piVar1);
            *(unsigned char *)((char *)&iStack_78 + 0) = 0x25;
            ((SCStr *)((SCStr *)&param_2))->int_release();
            *(unsigned char *)((char *)&iStack_78 + 0) = 0x22;
          }
          if (piVar1[0x32] == 0) {
            (**(code **)(*(int *)piVar1[0x15] + 0x3c))();
          }
          *(unsigned char *)((char *)&iStack_78 + 0) = 0x26;
          if ((uint *)(puVar14) != (uint *)0x0) {
            (**(code **)(*puVar14 + 8))();
          }
        }
      }
    }
    thunk_FUN_10def0d0();
  }
  iStack_78 = (int)(0x27);
  if ((int *)(piStack_30) != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10df16f0; body size 46 bytes.
#line 1 "ENTRY_10df16f0"

uint FUN_10df16f0(undefined4 param_1,int param_2)

{
  undefined2 extraout_var;
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (param_2 != 0) {
    thunk_FUN_10df1180(&param_2,param_1,param_2);
    uVar1 = (uint)(((uint)(extraout_var) << 16 | (uint)((undefined2)param_2)));
    if (((char)param_2 != '\0') && ((char)((uint)param_2 >> 8) != '\0')) {
      return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10df2dc0; body size 31 bytes.
#line 1 "ENTRY_10df2dc0"

undefined4 __fastcall FUN_10df2dc0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1[2] - param_1[1] >> 4);
  if ((iVar1 != 0) && (*param_1 == 2)) {
    return (undefined4)(*(undefined4 *)(param_1[1] + -0x10 + iVar1 * 0x10));
  }
  return (undefined4)(0);
}


// Reference entry 10df2df0; body size 39 bytes.
#line 1 "ENTRY_10df2df0"

undefined4 __fastcall FUN_10df2df0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  uVar2 = (uint)(*(int *)(param_1 + 8) - iVar1 >> 4);
  if ((1 < uVar2) && (*(int *)(iVar1 + -4 + uVar2 * 0x10) == 0)) {
    return (undefined4)(*(undefined4 *)(iVar1 + (uVar2 - 2) * 0x10));
  }
  return (undefined4)(0);
}


// Reference entry 10df2e20; body size 22 bytes.
#line 1 "ENTRY_10df2e20"

undefined4 __fastcall FUN_10df2e20(int param_1)

{
  if (*(int *)(param_1 + 8) - (int)*(undefined4 **)(param_1 + 4) >> 4 == 0) {
    return (undefined4)(0);
  }
  return (undefined4)(**(undefined4 **)(param_1 + 4));
}


// Reference entry 10df3190; body size 43 bytes.
#line 1 "ENTRY_10df3190"

void __thiscall FUN_10df3190(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    thunk_FUN_10deea50(param_2);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0x18;
    return;
  }
  thunk_FUN_10dec1c0(*(int *)(param_1 + 0x14),param_2);
  return;
}


// Reference entry 10df3eb0; body size 23 bytes.
#line 1 "ENTRY_10df3eb0"

uint __fastcall FUN_10df3eb0(uint *param_1)

{
  uint in_EAX;
  
  if (((param_1[9] == 0) && (in_EAX = *param_1, in_EAX != 0)) && (in_EAX != 1)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10df3ed0; body size 23 bytes.
#line 1 "ENTRY_10df3ed0"

uint __fastcall FUN_10df3ed0(uint *param_1)

{
  uint in_EAX;
  
  if (((param_1[7] == 0) && (in_EAX = *param_1, in_EAX != 0)) && (in_EAX != 1)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10dfe620; body size 60 bytes.
#line 1 "ENTRY_10dfe620"

void __fastcall FUN_10dfe620(int *param_1)

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


// Reference entry 10e00af0; body size 38 bytes.
#line 1 "ENTRY_10e00af0"

int FUN_10e00af0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)(FUN_10e06bc0(param_1));
  if (iVar1 != 0) {
    thunk_FUN_10df1530(param_1,param_2);
  }
  return (int)(iVar1);
}


// Reference entry 10e01da0; body size 63 bytes.
#line 1 "ENTRY_10e01da0"

undefined1 FUN_10e01da0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onSecureSettingsChanged"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIHousehold:onFinishedConnectingToZPs"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e0bf10; body size 48 bytes.
#line 1 "ENTRY_10e0bf10"

undefined4 * __fastcall FUN_10e0bf10(undefined4 *param_1)

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


// Reference entry 10e0bf50; body size 48 bytes.
#line 1 "ENTRY_10e0bf50"

undefined4 * __fastcall FUN_10e0bf50(undefined4 *param_1)

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


// Reference entry 10e0d650; body size 56 bytes.
#line 1 "ENTRY_10e0d650"

int FUN_10e0d650(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10e0b690(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_1)) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10e0eb00; body size 55 bytes.
#line 1 "ENTRY_10e0eb00"

undefined4 FUN_10e0eb00(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_10e0b690(local_c,param_1));
  if ((*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= *param_1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10e0eb50; body size 61 bytes.
#line 1 "ENTRY_10e0eb50"

undefined4 FUN_10e0eb50(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10e0b6f0(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e10e20; body size 61 bytes.
#line 1 "ENTRY_10e10e20"

undefined4 FUN_10e10e20(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10e0b6f0(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e10e70; body size 32 bytes.
#line 1 "ENTRY_10e10e70"

undefined4 __thiscall FUN_10e10e70(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x28) + 0x74))(param_2));
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e11fa0; body size 21 bytes.
#line 1 "ENTRY_10e11fa0"

void FUN_10e11fa0(undefined4 param_1)

{
  thunk_FUN_10e0f0d0(param_1,0);
  thunk_FUN_10e0d700();
  return;
}


// Reference entry 10e120a0; body size 17 bytes.
#line 1 "ENTRY_10e120a0"

void FUN_10e120a0(undefined4 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)((undefined1 *)thunk_FUN_10e0f0d0(param_1,0));
  *puVar1 = (undefined1)(1);
  return;
}


// Reference entry 10e15150; body size 24 bytes.
#line 1 "ENTRY_10e15150"

undefined4 __fastcall FUN_10e15150(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x30))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e151c0; body size 37 bytes.
#line 1 "ENTRY_10e151c0"

undefined1 __fastcall FUN_10e151c0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e15210; body size 37 bytes.
#line 1 "ENTRY_10e15210"

undefined1 __fastcall FUN_10e15210(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e15650; body size 48 bytes.
#line 1 "ENTRY_10e15650"

void __fastcall FUN_10e15650(int param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x94) = 0;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x1c) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e158c0; body size 33 bytes.
#line 1 "ENTRY_10e158c0"

void __fastcall FUN_10e158c0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x10) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e16b00; body size 42 bytes.
#line 1 "ENTRY_10e16b00"

undefined4 * __fastcall FUN_10e16b00(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e16b40; body size 46 bytes.
#line 1 "ENTRY_10e16b40"

undefined4 * __fastcall FUN_10e16b40(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureExistingInitState);
    *(undefined1 *)(puVar1 + 3) = 0;
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e16b80; body size 28 bytes.
#line 1 "ENTRY_10e16b80"

void FUN_10e16b80(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)(aSStack_c))->int_allocRep("sec_existing.launch_cust_reg_orphan_noaccess");
  thunk_FUN_10e1dfc0();
  return;
}


// Reference entry 10e19980; body size 34 bytes.
#line 1 "ENTRY_10e19980"

undefined4 __fastcall FUN_10e19980(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e19c70; body size 30 bytes.
#line 1 "ENTRY_10e19c70"

undefined4 __fastcall FUN_10e19c70(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e19ca0; body size 26 bytes.
#line 1 "ENTRY_10e19ca0"

undefined4 __thiscall FUN_10e19ca0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e19cf0; body size 23 bytes.
#line 1 "ENTRY_10e19cf0"

undefined4 __thiscall FUN_10e19cf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e1eb40; body size 37 bytes.
#line 1 "ENTRY_10e1eb40"

void __fastcall FUN_10e1eb40(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10e1eb70; body size 37 bytes.
#line 1 "ENTRY_10e1eb70"

void __fastcall FUN_10e1eb70(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10e1eba0; body size 37 bytes.
#line 1 "ENTRY_10e1eba0"

void __fastcall FUN_10e1eba0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10e1ef50; body size 24 bytes.
#line 1 "ENTRY_10e1ef50"

undefined4 __fastcall FUN_10e1ef50(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e1f010; body size 39 bytes.
#line 1 "ENTRY_10e1f010"

undefined4 __fastcall FUN_10e1f010(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e1f040; body size 63 bytes.
#line 1 "ENTRY_10e1f040"

undefined1 FUN_10e1f040(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e1f6f0; body size 61 bytes.
#line 1 "ENTRY_10e1f6f0"

void __fastcall FUN_10e1f6f0(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10e19870();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e1f770; body size 46 bytes.
#line 1 "ENTRY_10e1f770"

void __fastcall FUN_10e1f770(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10e1f7b0; body size 46 bytes.
#line 1 "ENTRY_10e1f7b0"

void __fastcall FUN_10e1f7b0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10e1fd00; body size 38 bytes.
#line 1 "ENTRY_10e1fd00"

void __fastcall FUN_10e1fd00(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 4) + 0x34))());
  if (iVar1 == 4) {
    (**(code **)(**(int **)(param_1 + 4) + 0x40))();
                    
                    
    (**(code **)(**(int **)(param_1 + -0x10) + 0x88))();
    return;
  }
  return;
}


// Reference entry 10e23140; body size 58 bytes.
#line 1 "ENTRY_10e23140"

undefined4 * __thiscall FUN_10e23140(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10dd0610(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  param_1[0x13] = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizard);
  return (undefined4 *)(param_1);
}


// Reference entry 10e238b0; body size 37 bytes.
#line 1 "ENTRY_10e238b0"

undefined1 __fastcall FUN_10e238b0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e238e0; body size 37 bytes.
#line 1 "ENTRY_10e238e0"

undefined1 __fastcall FUN_10e238e0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e239c0; body size 42 bytes.
#line 1 "ENTRY_10e239c0"

undefined4 * __fastcall FUN_10e239c0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyWelcomeLoginWizardInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e24220; body size 34 bytes.
#line 1 "ENTRY_10e24220"

undefined4 __fastcall FUN_10e24220(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e24300; body size 30 bytes.
#line 1 "ENTRY_10e24300"

undefined4 __fastcall FUN_10e24300(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e24330; body size 26 bytes.
#line 1 "ENTRY_10e24330"

undefined4 __thiscall FUN_10e24330(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e24380; body size 23 bytes.
#line 1 "ENTRY_10e24380"

undefined4 __thiscall FUN_10e24380(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e24930; body size 24 bytes.
#line 1 "ENTRY_10e24930"

undefined4 __fastcall FUN_10e24930(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e24960; body size 39 bytes.
#line 1 "ENTRY_10e24960"

undefined4 __fastcall FUN_10e24960(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e24990; body size 63 bytes.
#line 1 "ENTRY_10e24990"

undefined1 FUN_10e24990(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e24a70; body size 61 bytes.
#line 1 "ENTRY_10e24a70"

void __fastcall FUN_10e24a70(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10e23ff0();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e27410; body size 33 bytes.
#line 1 "ENTRY_10e27410"

void __fastcall FUN_10e27410(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e27440; body size 33 bytes.
#line 1 "ENTRY_10e27440"

void __fastcall FUN_10e27440(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e27470; body size 33 bytes.
#line 1 "ENTRY_10e27470"

void __fastcall FUN_10e27470(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e274a0; body size 33 bytes.
#line 1 "ENTRY_10e274a0"

void __fastcall FUN_10e274a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e274d0; body size 33 bytes.
#line 1 "ENTRY_10e274d0"

void __fastcall FUN_10e274d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e27500; body size 33 bytes.
#line 1 "ENTRY_10e27500"

void __fastcall FUN_10e27500(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e27530; body size 33 bytes.
#line 1 "ENTRY_10e27530"

void __fastcall FUN_10e27530(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e27560; body size 33 bytes.
#line 1 "ENTRY_10e27560"

void __fastcall FUN_10e27560(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e28c10; body size 37 bytes.
#line 1 "ENTRY_10e28c10"

int * __fastcall FUN_10e28c10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e28c40; body size 37 bytes.
#line 1 "ENTRY_10e28c40"

int * __fastcall FUN_10e28c40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e28c70; body size 37 bytes.
#line 1 "ENTRY_10e28c70"

int * __fastcall FUN_10e28c70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e28ca0; body size 37 bytes.
#line 1 "ENTRY_10e28ca0"

int * __fastcall FUN_10e28ca0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e2aae0; body size 33 bytes.
#line 1 "ENTRY_10e2aae0"

void __fastcall FUN_10e2aae0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e2ab10; body size 33 bytes.
#line 1 "ENTRY_10e2ab10"

void __fastcall FUN_10e2ab10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e2ab40; body size 33 bytes.
#line 1 "ENTRY_10e2ab40"

void __fastcall FUN_10e2ab40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e2ab70; body size 33 bytes.
#line 1 "ENTRY_10e2ab70"

void __fastcall FUN_10e2ab70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e2b430; body size 60 bytes.
#line 1 "ENTRY_10e2b430"

void __thiscall FUN_10e2b430(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    pcStack_8 = (char *)((char *)0x10e2b43f);
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 0x20))());
  }
  if (param_2 == iVar1) {
    pcStack_8 = (char *)((char *)0x10e2b455);
    uVar2 = (undefined4)(thunk_FUN_103eb620());
    switch(uVar2) {
    case 0:
    case 2:
      ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep("login_account");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 1:
      ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep("need_password");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 3:
      pcStack_8 = (char *)("Email check failed: Not Match, should never get");
      break;
    case 4:
      ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep("create_account");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 0xfffffffe:
      pcStack_8 = (char *)("Email check failed: network error");
      break;
    default:
      goto LAB_10e2b4ee;
    }
    thunk_FUN_112af4e0("sec_reg",1);
    ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep("network_error");
    (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
  }
LAB_10e2b4ee:
  return;
}


// Reference entry 10e2b550; body size 56 bytes.
#line 1 "ENTRY_10e2b550"

void __thiscall FUN_10e2b550(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    uStack_8 = (undefined4)(0x10e2b55f);
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 0x20))());
  }
  if (param_2 == iVar1) {
    uStack_8 = (undefined4)(0x10e2b575);
    uVar2 = (undefined4)(thunk_FUN_103eb620());
    switch(uVar2) {
    case 0:
    case 2:
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("password_set");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 1:
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("password_unset");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 0xfffffffe:
    case 3:
    case 4:
      uStack_8 = (undefined4)(0x10e2b5c4);
      uStack_8 = (undefined4)(thunk_FUN_103eb620());
      thunk_FUN_112af4e0("sec_reg",1,"Password Check failed: %d");
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("network_error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
  }
  return;
}


// Reference entry 10e2bfe0; body size 60 bytes.
#line 1 "ENTRY_10e2bfe0"

void __thiscall FUN_10e2bfe0(int param_1,int param_2,ushort param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    uStack_8 = (uint)(0x10e2bfef);
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 0x20))());
  }
  if (param_2 == iVar1) {
    uStack_8 = (uint)(0x10e2c005);
    uVar2 = (undefined4)(thunk_FUN_103eb560());
    switch(uVar2) {
    case 0:
      uStack_8 = (uint)(1);
      thunk_FUN_10e44d70();
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("login.success");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 1:
      uStack_8 = (uint)(0);
      thunk_FUN_10e44d70();
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("login.verify");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
      return;
    case 0xfffffffe:
    case 2:
    case 3:
      uStack_8 = (uint)((uint)param_3);
      thunk_FUN_112af4e0("sec_reg",1,"Error in login %d");
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("network_error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
  }
  return;
}


// Reference entry 10e2ccf0; body size 47 bytes.
#line 1 "ENTRY_10e2ccf0"

undefined4 __fastcall FUN_10e2ccf0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x30))());
    if ((cVar1 != '\0') && (*(int **)(param_1 + 0x24) != (int *)0x0)) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 0x30))());
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e2d310; body size 41 bytes.
#line 1 "ENTRY_10e2d310"

void __fastcall FUN_10e2d310(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x10) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d350; body size 41 bytes.
#line 1 "ENTRY_10e2d350"

void __fastcall FUN_10e2d350(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d390; body size 41 bytes.
#line 1 "ENTRY_10e2d390"

void __fastcall FUN_10e2d390(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d510; body size 41 bytes.
#line 1 "ENTRY_10e2d510"

void __fastcall FUN_10e2d510(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x38) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x34) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d550; body size 41 bytes.
#line 1 "ENTRY_10e2d550"

void __fastcall FUN_10e2d550(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d600; body size 41 bytes.
#line 1 "ENTRY_10e2d600"

void __fastcall FUN_10e2d600(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x14) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d640; body size 41 bytes.
#line 1 "ENTRY_10e2d640"

void __fastcall FUN_10e2d640(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x14) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d680; body size 41 bytes.
#line 1 "ENTRY_10e2d680"

void __fastcall FUN_10e2d680(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e2d6c0; body size 42 bytes.
#line 1 "ENTRY_10e2d6c0"

undefined4 * __fastcall FUN_10e2d6c0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e2d700; body size 42 bytes.
#line 1 "ENTRY_10e2d700"

undefined4 * __fastcall FUN_10e2d700(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureRegistrationInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e2e8a0; body size 28 bytes.
#line 1 "ENTRY_10e2e8a0"

void FUN_10e2e8a0(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)(aSStack_c))->int_allocRep("sec_registration.complete");
  thunk_FUN_10e3cae0();
  return;
}


// Reference entry 10e2e8d0; body size 28 bytes.
#line 1 "ENTRY_10e2e8d0"

void FUN_10e2e8d0(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)(aSStack_c))->int_allocRep("sec_registration.data_opt_in_submit");
  thunk_FUN_10e3cae0();
  return;
}


// Reference entry 10e302d0; body size 21 bytes.
#line 1 "ENTRY_10e302d0"

undefined4 __fastcall FUN_10e302d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0x11);
  if (*(char *)(param_1 + 0x108) != '\0') {
    uVar1 = (undefined4)(10);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10e30410; body size 21 bytes.
#line 1 "ENTRY_10e30410"

undefined4 __fastcall FUN_10e30410(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0xb);
  if (*(char *)(param_1 + 0x88) != '\0') {
    uVar1 = (undefined4)(8);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10e30430; body size 21 bytes.
#line 1 "ENTRY_10e30430"

undefined4 __fastcall FUN_10e30430(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0xc);
  if (*(char *)(param_1 + 0x80) != '\0') {
    uVar1 = (undefined4)(9);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10e3e500; body size 19 bytes.
#line 1 "ENTRY_10e3e500"

bool __fastcall FUN_10e3e500(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xf8))());
  return (bool)(cVar1 == '\0');
}


// Reference entry 10e3e990; body size 20 bytes.
#line 1 "ENTRY_10e3e990"

void __fastcall FUN_10e3e990(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))();
                    
                    
  (**(code **)(**(int **)(param_1 + 0x24) + 0x44))();
  return;
}


// Reference entry 10e3f460; body size 23 bytes.
#line 1 "ENTRY_10e3f460"

void __fastcall FUN_10e3f460(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x7c) + 0x40))();
                    
                    
  (**(code **)(**(int **)(param_1 + -4) + 0x88))();
  return;
}


// Reference entry 10e3f480; body size 38 bytes.
#line 1 "ENTRY_10e3f480"

void __fastcall FUN_10e3f480(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 4) + 0x34))());
  if (iVar1 == 4) {
    (**(code **)(**(int **)(param_1 + 4) + 0x40))();
                    
                    
    (**(code **)(**(int **)(param_1 + -0x10) + 0x88))();
    return;
  }
  return;
}


// Reference entry 10e46b00; body size 59 bytes.
#line 1 "ENTRY_10e46b00"

void __thiscall FUN_10e46b00(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10e46300(puVar1,param_2);
  return;
}


// Reference entry 10e48ba0; body size 37 bytes.
#line 1 "ENTRY_10e48ba0"

undefined1 __fastcall FUN_10e48ba0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e48c10; body size 37 bytes.
#line 1 "ENTRY_10e48c10"

undefined1 __fastcall FUN_10e48c10(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e48e80; body size 42 bytes.
#line 1 "ENTRY_10e48e80"

undefined4 * __fastcall FUN_10e48e80(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e48ec0; body size 42 bytes.
#line 1 "ENTRY_10e48ec0"

undefined4 * __fastcall FUN_10e48ec0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecurePlayerInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e49720; body size 28 bytes.
#line 1 "ENTRY_10e49720"

void FUN_10e49720(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)(aSStack_c))->int_allocRep("sec_player.complete");
  thunk_FUN_10e4ddb0();
  return;
}


// Reference entry 10e4a2e0; body size 28 bytes.
#line 1 "ENTRY_10e4a2e0"

void FUN_10e4a2e0(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)(aSStack_c))->int_allocRep("sec_player.complete");
  thunk_FUN_10e4ddb0();
  return;
}


// Reference entry 10e4a310; body size 28 bytes.
#line 1 "ENTRY_10e4a310"

void FUN_10e4a310(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)(aSStack_c))->int_allocRep("sec_player.complete");
  thunk_FUN_10e4ddb0();
  return;
}


// Reference entry 10e4a6b0; body size 60 bytes.
#line 1 "ENTRY_10e4a6b0"

void FUN_10e4a6b0(int param_1,int param_2)

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


// Reference entry 10e4a700; body size 60 bytes.
#line 1 "ENTRY_10e4a700"

void FUN_10e4a700(int param_1,int param_2)

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


// Reference entry 10e4ad50; body size 34 bytes.
#line 1 "ENTRY_10e4ad50"

undefined4 __fastcall FUN_10e4ad50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e4afb0; body size 30 bytes.
#line 1 "ENTRY_10e4afb0"

undefined4 __fastcall FUN_10e4afb0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e4afe0; body size 26 bytes.
#line 1 "ENTRY_10e4afe0"

undefined4 __thiscall FUN_10e4afe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e4b030; body size 23 bytes.
#line 1 "ENTRY_10e4b030"

undefined4 __thiscall FUN_10e4b030(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e4e2d0; body size 24 bytes.
#line 1 "ENTRY_10e4e2d0"

undefined4 __fastcall FUN_10e4e2d0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e4e380; body size 39 bytes.
#line 1 "ENTRY_10e4e380"

undefined4 __fastcall FUN_10e4e380(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e4e410; body size 63 bytes.
#line 1 "ENTRY_10e4e410"

undefined1 FUN_10e4e410(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e4e530; body size 61 bytes.
#line 1 "ENTRY_10e4e530"

void __fastcall FUN_10e4e530(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10e4a9e0();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e4e590; body size 59 bytes.
#line 1 "ENTRY_10e4e590"

void __thiscall FUN_10e4e590(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10e46300(puVar1,param_2);
  return;
}


// Reference entry 10e523e0; body size 37 bytes.
#line 1 "ENTRY_10e523e0"

undefined1 __fastcall FUN_10e523e0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e52450; body size 37 bytes.
#line 1 "ENTRY_10e52450"

undefined1 __fastcall FUN_10e52450(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e52740; body size 33 bytes.
#line 1 "ENTRY_10e52740"

void __fastcall FUN_10e52740(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x10) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e53580; body size 42 bytes.
#line 1 "ENTRY_10e53580"

undefined4 * __fastcall FUN_10e53580(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e535c0; body size 42 bytes.
#line 1 "ENTRY_10e535c0"

undefined4 * __fastcall FUN_10e535c0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e53d00; body size 45 bytes.
#line 1 "ENTRY_10e53d00"

undefined4 * __fastcall FUN_10e53d00(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e54630; body size 45 bytes.
#line 1 "ENTRY_10e54630"

undefined4 * __fastcall FUN_10e54630(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e54940; body size 45 bytes.
#line 1 "ENTRY_10e54940"

undefined4 * __fastcall FUN_10e54940(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizIntroState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e55520; body size 34 bytes.
#line 1 "ENTRY_10e55520"

undefined4 __fastcall FUN_10e55520(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e55750; body size 30 bytes.
#line 1 "ENTRY_10e55750"

undefined4 __fastcall FUN_10e55750(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e55780; body size 26 bytes.
#line 1 "ENTRY_10e55780"

undefined4 __thiscall FUN_10e55780(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e557d0; body size 23 bytes.
#line 1 "ENTRY_10e557d0"

undefined4 __thiscall FUN_10e557d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e58620; body size 60 bytes.
#line 1 "ENTRY_10e58620"

void __fastcall FUN_10e58620(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x38))(1);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


// Reference entry 10e58670; body size 37 bytes.
#line 1 "ENTRY_10e58670"

void __fastcall FUN_10e58670(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10e586a0; body size 37 bytes.
#line 1 "ENTRY_10e586a0"

void __fastcall FUN_10e586a0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10e586d0; body size 16 bytes.
#line 1 "ENTRY_10e586d0"

uint __fastcall FUN_10e586d0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x14))());
  if (iVar1 - 2U != 0) {
    return (uint)(iVar1 - 2U & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 10e587e0; body size 24 bytes.
#line 1 "ENTRY_10e587e0"

undefined4 __fastcall FUN_10e587e0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e588a0; body size 39 bytes.
#line 1 "ENTRY_10e588a0"

undefined4 __fastcall FUN_10e588a0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e588f0; body size 63 bytes.
#line 1 "ENTRY_10e588f0"

undefined1 FUN_10e588f0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e590b0; body size 61 bytes.
#line 1 "ENTRY_10e590b0"

void __fastcall FUN_10e590b0(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10e55410();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e59100; body size 46 bytes.
#line 1 "ENTRY_10e59100"

void __fastcall FUN_10e59100(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10e59140; body size 46 bytes.
#line 1 "ENTRY_10e59140"

void __fastcall FUN_10e59140(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 10e5acb0; body size 49 bytes.
#line 1 "ENTRY_10e5acb0"

int __thiscall FUN_10e5acb0(int *param_1,uint *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10e5acf0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10e5c000; body size 48 bytes.
#line 1 "ENTRY_10e5c000"

undefined4 * __fastcall FUN_10e5c000(undefined4 *param_1)

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


// Reference entry 10e5e320; body size 33 bytes.
#line 1 "ENTRY_10e5e320"

void __fastcall FUN_10e5e320(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e350; body size 33 bytes.
#line 1 "ENTRY_10e5e350"

void __fastcall FUN_10e5e350(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e380; body size 33 bytes.
#line 1 "ENTRY_10e5e380"

void __fastcall FUN_10e5e380(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e3b0; body size 33 bytes.
#line 1 "ENTRY_10e5e3b0"

void __fastcall FUN_10e5e3b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e3e0; body size 33 bytes.
#line 1 "ENTRY_10e5e3e0"

void __fastcall FUN_10e5e3e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e520; body size 33 bytes.
#line 1 "ENTRY_10e5e520"

void __fastcall FUN_10e5e520(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e550; body size 33 bytes.
#line 1 "ENTRY_10e5e550"

void __fastcall FUN_10e5e550(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e580; body size 33 bytes.
#line 1 "ENTRY_10e5e580"

void __fastcall FUN_10e5e580(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e5b0; body size 33 bytes.
#line 1 "ENTRY_10e5e5b0"

void __fastcall FUN_10e5e5b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5e5e0; body size 33 bytes.
#line 1 "ENTRY_10e5e5e0"

void __fastcall FUN_10e5e5e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e5f6b0; body size 37 bytes.
#line 1 "ENTRY_10e5f6b0"

int * __fastcall FUN_10e5f6b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e5f6e0; body size 37 bytes.
#line 1 "ENTRY_10e5f6e0"

int * __fastcall FUN_10e5f6e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e5f710; body size 37 bytes.
#line 1 "ENTRY_10e5f710"

int * __fastcall FUN_10e5f710(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e5f740; body size 37 bytes.
#line 1 "ENTRY_10e5f740"

int * __fastcall FUN_10e5f740(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e5f770; body size 37 bytes.
#line 1 "ENTRY_10e5f770"

int * __fastcall FUN_10e5f770(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e61cf0; body size 33 bytes.
#line 1 "ENTRY_10e61cf0"

void __fastcall FUN_10e61cf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e61d20; body size 33 bytes.
#line 1 "ENTRY_10e61d20"

void __fastcall FUN_10e61d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e61d50; body size 33 bytes.
#line 1 "ENTRY_10e61d50"

void __fastcall FUN_10e61d50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e61d80; body size 33 bytes.
#line 1 "ENTRY_10e61d80"

void __fastcall FUN_10e61d80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e61db0; body size 33 bytes.
#line 1 "ENTRY_10e61db0"

void __fastcall FUN_10e61db0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e62aa0; body size 33 bytes.
#line 1 "ENTRY_10e62aa0"

void __thiscall FUN_10e62aa0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x24) + 0x20))());
  }
  if (param_2 == iVar1) {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}


// Reference entry 10e65ed0; body size 37 bytes.
#line 1 "ENTRY_10e65ed0"

undefined1 __fastcall FUN_10e65ed0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e66010; body size 37 bytes.
#line 1 "ENTRY_10e66010"

undefined1 __fastcall FUN_10e66010(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e66420; body size 33 bytes.
#line 1 "ENTRY_10e66420"

void __fastcall FUN_10e66420(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x14) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e66450; body size 33 bytes.
#line 1 "ENTRY_10e66450"

void __fastcall FUN_10e66450(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x20) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e667a0; body size 60 bytes.
#line 1 "ENTRY_10e667a0"

void __fastcall FUN_10e667a0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x78) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x74) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e66930; body size 33 bytes.
#line 1 "ENTRY_10e66930"

void __fastcall FUN_10e66930(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x10) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e66ae0; body size 61 bytes.
#line 1 "ENTRY_10e66ae0"

void __fastcall FUN_10e66ae0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x84) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x84) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x80) + 4))();
      thunk_FUN_112af4e0("AlexaAuthWizard",2,
                         "SCAlexaAuthReminderState:cancelTimeout() - Canceling polling timeout");
    }
  }
  return;
}


// Reference entry 10e66bc0; body size 42 bytes.
#line 1 "ENTRY_10e66bc0"

undefined4 * __fastcall FUN_10e66bc0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e66ec0; body size 45 bytes.
#line 1 "ENTRY_10e66ec0"

undefined4 * __fastcall FUN_10e66ec0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e68250; body size 49 bytes.
#line 1 "ENTRY_10e68250"

undefined4 * __fastcall FUN_10e68250(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCAlexaAuthEnableAckChimeState);
    *(undefined1 *)(puVar2 + 3) = 0;
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e685c0; body size 43 bytes.
#line 1 "ENTRY_10e685c0"

undefined4 __fastcall FUN_10e685c0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = (void *)(operator_new(0x490));
  if ((void *)(pvVar1) != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10e5ca20(*(undefined4 *)(param_1 + 8)));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10e69350; body size 59 bytes.
#line 1 "ENTRY_10e69350"

void FUN_10e69350(int param_1,int param_2)

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


// Reference entry 10e698c0; body size 34 bytes.
#line 1 "ENTRY_10e698c0"

undefined4 __fastcall FUN_10e698c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e69cd0; body size 30 bytes.
#line 1 "ENTRY_10e69cd0"

undefined4 __fastcall FUN_10e69cd0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e69d50; body size 26 bytes.
#line 1 "ENTRY_10e69d50"

undefined4 __thiscall FUN_10e69d50(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e69dd0; body size 23 bytes.
#line 1 "ENTRY_10e69dd0"

undefined4 __thiscall FUN_10e69dd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e714a0; body size 24 bytes.
#line 1 "ENTRY_10e714a0"

undefined4 __fastcall FUN_10e714a0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e71570; body size 39 bytes.
#line 1 "ENTRY_10e71570"

undefined4 __fastcall FUN_10e71570(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e71680; body size 63 bytes.
#line 1 "ENTRY_10e71680"

undefined1 FUN_10e71680(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e71f60; body size 61 bytes.
#line 1 "ENTRY_10e71f60"

void __fastcall FUN_10e71f60(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10e697b0();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e72180; body size 24 bytes.
#line 1 "ENTRY_10e72180"

undefined4 __fastcall FUN_10e72180(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))
              (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  return (undefined4)(0);
}


// Reference entry 10e755c0; body size 25 bytes.
#line 1 "ENTRY_10e755c0"

void FUN_10e755c0(int param_1)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e755e0; body size 18 bytes.
#line 1 "ENTRY_10e755e0"

void FUN_10e755e0(int param_1)

{
  if (param_1 == 0) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e75600; body size 18 bytes.
#line 1 "ENTRY_10e75600"

void FUN_10e75600(int param_1)

{
  if (param_1 == 0) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e75620; body size 25 bytes.
#line 1 "ENTRY_10e75620"

void FUN_10e75620(int param_1)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e75640; body size 25 bytes.
#line 1 "ENTRY_10e75640"

void FUN_10e75640(int param_1)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e78060; body size 37 bytes.
#line 1 "ENTRY_10e78060"

undefined1 __fastcall FUN_10e78060(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e78090; body size 37 bytes.
#line 1 "ENTRY_10e78090"

undefined1 __fastcall FUN_10e78090(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e780f0; body size 33 bytes.
#line 1 "ENTRY_10e780f0"

void __fastcall FUN_10e780f0(int param_1)

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


// Reference entry 10e78120; body size 60 bytes.
#line 1 "ENTRY_10e78120"

void __fastcall FUN_10e78120(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x78) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x74) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e78740; body size 42 bytes.
#line 1 "ENTRY_10e78740"

undefined4 * __fastcall FUN_10e78740(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e78cf0; body size 45 bytes.
#line 1 "ENTRY_10e78cf0"

undefined4 * __fastcall FUN_10e78cf0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSonanceDetectionIntroState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e795c0; body size 34 bytes.
#line 1 "ENTRY_10e795c0"

undefined4 __fastcall FUN_10e795c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e79730; body size 30 bytes.
#line 1 "ENTRY_10e79730"

undefined4 __fastcall FUN_10e79730(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e79760; body size 26 bytes.
#line 1 "ENTRY_10e79760"

undefined4 __thiscall FUN_10e79760(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e79a40; body size 23 bytes.
#line 1 "ENTRY_10e79a40"

undefined4 __thiscall FUN_10e79a40(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e7b410; body size 24 bytes.
#line 1 "ENTRY_10e7b410"

undefined4 __fastcall FUN_10e7b410(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e7b460; body size 39 bytes.
#line 1 "ENTRY_10e7b460"

undefined4 __fastcall FUN_10e7b460(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e7b490; body size 63 bytes.
#line 1 "ENTRY_10e7b490"

undefined1 FUN_10e7b490(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e7b570; body size 61 bytes.
#line 1 "ENTRY_10e7b570"

void __fastcall FUN_10e7b570(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10e79390();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e80b00; body size 24 bytes.
#line 1 "ENTRY_10e80b00"

undefined4 __fastcall FUN_10e80b00(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x28) + 0x30))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e80b60; body size 41 bytes.
#line 1 "ENTRY_10e80b60"

void __fastcall FUN_10e80b60(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x38) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x34) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e80ba0; body size 41 bytes.
#line 1 "ENTRY_10e80ba0"

void __fastcall FUN_10e80ba0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x1c) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10e80be0; body size 42 bytes.
#line 1 "ENTRY_10e80be0"

undefined4 * __fastcall FUN_10e80be0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e80c20; body size 42 bytes.
#line 1 "ENTRY_10e80c20"

undefined4 * __fastcall FUN_10e80c20(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCChangeEmailWizInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e80e00; body size 28 bytes.
#line 1 "ENTRY_10e80e00"

void FUN_10e80e00(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)(aSStack_c))->int_allocRep("change_email.complete");
  thunk_FUN_10e82310();
  return;
}


// Reference entry 10e80e30; body size 28 bytes.
#line 1 "ENTRY_10e80e30"

void FUN_10e80e30(void)

{
  SCStr aSStack_c [4];
  
  ((SCStr *)(aSStack_c))->int_allocRep("change_email.complete");
  thunk_FUN_10e82310();
  return;
}


// Reference entry 10e82e70; body size 18 bytes.
#line 1 "ENTRY_10e82e70"

void FUN_10e82e70(int param_1)

{
  if (param_1 == 0) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e83fe0; body size 37 bytes.
#line 1 "ENTRY_10e83fe0"

undefined1 __fastcall FUN_10e83fe0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e84010; body size 37 bytes.
#line 1 "ENTRY_10e84010"

undefined1 __fastcall FUN_10e84010(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e84090; body size 42 bytes.
#line 1 "ENTRY_10e84090"

undefined4 * __fastcall FUN_10e84090(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleModernCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e840d0; body size 42 bytes.
#line 1 "ENTRY_10e840d0"

undefined4 * __fastcall FUN_10e840d0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleWizardModernInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e84ce0; body size 34 bytes.
#line 1 "ENTRY_10e84ce0"

undefined4 __fastcall FUN_10e84ce0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e84e40; body size 30 bytes.
#line 1 "ENTRY_10e84e40"

undefined4 __fastcall FUN_10e84e40(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e84e70; body size 26 bytes.
#line 1 "ENTRY_10e84e70"

undefined4 __thiscall FUN_10e84e70(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e84ec0; body size 23 bytes.
#line 1 "ENTRY_10e84ec0"

undefined4 __thiscall FUN_10e84ec0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e86660; body size 24 bytes.
#line 1 "ENTRY_10e86660"

undefined4 __fastcall FUN_10e86660(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e866e0; body size 39 bytes.
#line 1 "ENTRY_10e866e0"

undefined4 __fastcall FUN_10e866e0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e86710; body size 63 bytes.
#line 1 "ENTRY_10e86710"

undefined1 FUN_10e86710(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10e867f0; body size 61 bytes.
#line 1 "ENTRY_10e867f0"

void __fastcall FUN_10e867f0(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10e84bd0();
        return;
      }
    }
  }
  return;
}


// Reference entry 10e86e40; body size 60 bytes.
#line 1 "ENTRY_10e86e40"

undefined4 * __thiscall FUN_10e86e40(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_10dd0b60(param_2,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  param_1[0x13] = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyWizard);
  return (undefined4 *)(param_1);
}


// Reference entry 10e871a0; body size 42 bytes.
#line 1 "ENTRY_10e871a0"

undefined4 * __fastcall FUN_10e871a0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e871e0; body size 42 bytes.
#line 1 "ENTRY_10e871e0"

undefined4 * __fastcall FUN_10e871e0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleWizardMixedLegacyInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e87520; body size 45 bytes.
#line 1 "ENTRY_10e87520"

undefined4 * __fastcall FUN_10e87520(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e87720; body size 45 bytes.
#line 1 "ENTRY_10e87720"

undefined4 * __fastcall FUN_10e87720(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLifecycleMixedLegacyIncompatPlayersState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e89cd0; body size 42 bytes.
#line 1 "ENTRY_10e89cd0"

undefined4 * __fastcall FUN_10e89cd0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e89d10; body size 42 bytes.
#line 1 "ENTRY_10e89d10"

undefined4 * __fastcall FUN_10e89d10(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e89d50; body size 45 bytes.
#line 1 "ENTRY_10e89d50"

undefined4 * __fastcall FUN_10e89d50(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardSubwizardState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e89d90; body size 45 bytes.
#line 1 "ENTRY_10e89d90"

undefined4 * __fastcall FUN_10e89d90(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacyMusicLibrarySetupWizardCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10e940b0; body size 33 bytes.
#line 1 "ENTRY_10e940b0"

void __fastcall FUN_10e940b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e940e0; body size 33 bytes.
#line 1 "ENTRY_10e940e0"

void __fastcall FUN_10e940e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94110; body size 33 bytes.
#line 1 "ENTRY_10e94110"

void __fastcall FUN_10e94110(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94140; body size 33 bytes.
#line 1 "ENTRY_10e94140"

void __fastcall FUN_10e94140(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94170; body size 33 bytes.
#line 1 "ENTRY_10e94170"

void __fastcall FUN_10e94170(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e941a0; body size 33 bytes.
#line 1 "ENTRY_10e941a0"

void __fastcall FUN_10e941a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e941d0; body size 33 bytes.
#line 1 "ENTRY_10e941d0"

void __fastcall FUN_10e941d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94200; body size 33 bytes.
#line 1 "ENTRY_10e94200"

void __fastcall FUN_10e94200(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94230; body size 33 bytes.
#line 1 "ENTRY_10e94230"

void __fastcall FUN_10e94230(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94260; body size 33 bytes.
#line 1 "ENTRY_10e94260"

void __fastcall FUN_10e94260(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e94290; body size 33 bytes.
#line 1 "ENTRY_10e94290"

void __fastcall FUN_10e94290(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e942c0; body size 33 bytes.
#line 1 "ENTRY_10e942c0"

void __fastcall FUN_10e942c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e96720; body size 37 bytes.
#line 1 "ENTRY_10e96720"

int * __fastcall FUN_10e96720(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e96750; body size 37 bytes.
#line 1 "ENTRY_10e96750"

int * __fastcall FUN_10e96750(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e96780; body size 37 bytes.
#line 1 "ENTRY_10e96780"

int * __fastcall FUN_10e96780(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e967b0; body size 37 bytes.
#line 1 "ENTRY_10e967b0"

int * __fastcall FUN_10e967b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e967e0; body size 37 bytes.
#line 1 "ENTRY_10e967e0"

int * __fastcall FUN_10e967e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e96810; body size 37 bytes.
#line 1 "ENTRY_10e96810"

int * __fastcall FUN_10e96810(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10e99bb0; body size 33 bytes.
#line 1 "ENTRY_10e99bb0"

void __fastcall FUN_10e99bb0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e99be0; body size 33 bytes.
#line 1 "ENTRY_10e99be0"

void __fastcall FUN_10e99be0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e99c10; body size 33 bytes.
#line 1 "ENTRY_10e99c10"

void __fastcall FUN_10e99c10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e99c40; body size 33 bytes.
#line 1 "ENTRY_10e99c40"

void __fastcall FUN_10e99c40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e99c70; body size 33 bytes.
#line 1 "ENTRY_10e99c70"

void __fastcall FUN_10e99c70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e99ca0; body size 33 bytes.
#line 1 "ENTRY_10e99ca0"

void __fastcall FUN_10e99ca0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10e9c020; body size 43 bytes.
#line 1 "ENTRY_10e9c020"

void __thiscall FUN_10e9c020(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x18) + 0x20))());
  }
  if (iVar1 == param_2) {
    (**(code **)(*(int *)(param_1 + -0x7c) + 0xe8))(0);
  }
  return;
}


// Reference entry 10e9deb0; body size 39 bytes.
#line 1 "ENTRY_10e9deb0"

undefined4 * __thiscall FUN_10e9deb0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)0x0);
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
    piVar1 = (int *)(*(int **)(param_1 + 0x18));
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10e9dee0; body size 39 bytes.
#line 1 "ENTRY_10e9dee0"

undefined4 * __thiscall FUN_10e9dee0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)0x0);
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
    piVar1 = (int *)(*(int **)(param_1 + 0x1c));
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10ea1c30; body size 56 bytes.
#line 1 "ENTRY_10ea1c30"

SCStr * __thiscall FUN_10ea1c30(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x80) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1dd0; body size 53 bytes.
#line 1 "ENTRY_10ea1dd0"

SCStr * __thiscall FUN_10ea1dd0(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1ec0; body size 53 bytes.
#line 1 "ENTRY_10ea1ec0"

SCStr * __thiscall FUN_10ea1ec0(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1f80; body size 56 bytes.
#line 1 "ENTRY_10ea1f80"

SCStr * __thiscall FUN_10ea1f80(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1fd0; body size 53 bytes.
#line 1 "ENTRY_10ea1fd0"

SCStr * __thiscall FUN_10ea1fd0(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea2020; body size 56 bytes.
#line 1 "ENTRY_10ea2020"

SCStr * __thiscall FUN_10ea2020(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea4530; body size 31 bytes.
#line 1 "ENTRY_10ea4530"

void FUN_10ea4530(void)

{
  SCStr aSStack_14 [8];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  ((SCStr *)(aSStack_14))->int_allocRep("SCIBrowseItem:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10ea6c00; body size 39 bytes.
#line 1 "ENTRY_10ea6c00"

int __fastcall FUN_10ea6c00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(4);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("LEDFeedbackState");
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 10ea6f20; body size 55 bytes.
#line 1 "ENTRY_10ea6f20"

void __fastcall FUN_10ea6f20(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))());
      if (cVar1 != '\0') {
        (**(code **)(*(int *)(param_1 + 0x18) + 4))();
      }
    }
    (**(code **)(*(int *)(param_1 + -0x78) + 0xe8))(0);
  }
  return;
}


// Reference entry 10ea8130; body size 57 bytes.
#line 1 "ENTRY_10ea8130"

void FUN_10ea8130(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10ea8130(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10eab2c0; body size 36 bytes.
#line 1 "ENTRY_10eab2c0"

void __fastcall FUN_10eab2c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    thunk_FUN_102a3ea0(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x14);
  }
  return;
}


// Reference entry 10eab2f0; body size 17 bytes.
#line 1 "ENTRY_10eab2f0"

void __fastcall FUN_10eab2f0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    thunk_FUN_1086f290(*param_1);
  }
  return;
}


// Reference entry 10eab310; body size 33 bytes.
#line 1 "ENTRY_10eab310"

void __fastcall FUN_10eab310(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x4c) {
    thunk_FUN_108754f0();
  }
  return;
}


// Reference entry 10eabdb0; body size 19 bytes.
#line 1 "ENTRY_10eabdb0"

void __thiscall FUN_10eabdb0(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10eabdf0; body size 35 bytes.
#line 1 "ENTRY_10eabdf0"

void FUN_10eabdf0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    thunk_FUN_108754f0();
  }
  return;
}


// Reference entry 10eabe20; body size 17 bytes.
#line 1 "ENTRY_10eabe20"

void FUN_10eabe20(undefined4 *param_1)

{
  FUN_10ea7290(*param_1);
  return;
}


// Reference entry 10eabf30; body size 19 bytes.
#line 1 "ENTRY_10eabf30"

void __thiscall FUN_10eabf30(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10eac550; body size 46 bytes.
#line 1 "ENTRY_10eac550"

void __fastcall FUN_10eac550(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_108754f0();
      iVar2 = (int)(iVar2 + 0x4c);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 10eac590; body size 47 bytes.
#line 1 "ENTRY_10eac590"

void __fastcall FUN_10eac590(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(*param_1);
  iVar2 = (int)(*(int *)(iVar1 + 0x10));
  iVar3 = (int)(*(int *)(iVar1 + 0xc));
  if (iVar3 != iVar2) {
    do {
      thunk_FUN_108754f0();
      iVar3 = (int)(iVar3 + 0x4c);
    } while (iVar3 != iVar2);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
    return;
  }
  *(int *)(iVar1 + 0x10) = iVar3;
  return;
}


// Reference entry 10eac620; body size 54 bytes.
#line 1 "ENTRY_10eac620"

void FUN_10eac620(int param_1,int param_2)

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


// Reference entry 10eacd00; body size 26 bytes.
#line 1 "ENTRY_10eacd00"

int __fastcall FUN_10eacd00(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(*param_1 + 0x10));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if (((iVar1 != 4) && (iVar1 != 5)) && (iVar1 != 6)) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 10eacd20; body size 20 bytes.
#line 1 "ENTRY_10eacd20"

int __fastcall FUN_10eacd20(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*param_1);
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((*(int *)(iVar1 + 0x10) == 1) && (*(int *)(iVar1 + 0x18) == 1)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10eace20; body size 32 bytes.
#line 1 "ENTRY_10eace20"

int __fastcall FUN_10eace20(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*param_1);
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((*(char *)(iVar1 + 0x39) == '\0') &&
     ((*(int *)(iVar1 + 0x10) == 2 ||
      ((*(int *)(iVar1 + 0x10) == 1 && (*(int *)(iVar1 + 0x18) != 1)))))) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10eae0a0; body size 57 bytes.
#line 1 "ENTRY_10eae0a0"

undefined4 * __thiscall FUN_10eae0a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_106dc520());
  param_1[2] = (undefined4)(uVar1);
  param_1[1] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizParams);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb25f0; body size 20 bytes.
#line 1 "ENTRY_10eb25f0"

undefined4 __fastcall FUN_10eb25f0(undefined4 param_1)

{
  thunk_FUN_106d8310(0);
  return (undefined4)(param_1);
}


// Reference entry 10eb2610; body size 26 bytes.
#line 1 "ENTRY_10eb2610"

undefined4 __thiscall FUN_10eb2610(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10eb27e0(2,param_2);
  return (undefined4)(param_1);
}


// Reference entry 10eb26d0; body size 31 bytes.
#line 1 "ENTRY_10eb26d0"

undefined4 * __fastcall FUN_10eb26d0(undefined4 *param_1)

{
  thunk_FUN_10eb2520(1,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStayPut);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb3a60; body size 23 bytes.
#line 1 "ENTRY_10eb3a60"

uint __fastcall FUN_10eb3a60(uint *param_1)

{
  uint in_EAX;
  
  if (((param_1[2] == 0) && (in_EAX = *param_1, in_EAX != 0)) && (in_EAX != 1)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10eb3a80; body size 58 bytes.
#line 1 "ENTRY_10eb3a80"

void __thiscall FUN_10eb3a80(int *param_1,uint param_2)

{
  if ((uint)((param_1[2] - *param_1) / 0x34) < param_2) {
    if (0x4ec4ec4 < param_2) {
                    
      thunk_FUN_10604c90();
    }
    thunk_FUN_10eb29d0(param_2);
  }
  return;
}


// Reference entry 10eb3b50; body size 17 bytes.
#line 1 "ENTRY_10eb3b50"

int __fastcall FUN_10eb3b50(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*param_1);
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10eb4160; body size 19 bytes.
#line 1 "ENTRY_10eb4160"

undefined4 FUN_10eb4160(undefined4 param_1)

{
  thunk_FUN_106dfa00(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10eb4f60; body size 60 bytes.
#line 1 "ENTRY_10eb4f60"

int __thiscall FUN_10eb4f60(int *param_1,SCStr *param_2)

{
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10eb5050(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10eb4fb0; body size 60 bytes.
#line 1 "ENTRY_10eb4fb0"

int __thiscall FUN_10eb4fb0(int *param_1,SCStr *param_2)

{
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10eb50c0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10eb5000; body size 60 bytes.
#line 1 "ENTRY_10eb5000"

int __thiscall FUN_10eb5000(int *param_1,SCStr *param_2)

{
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10eb5130(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10eb6040; body size 48 bytes.
#line 1 "ENTRY_10eb6040"

undefined4 * __fastcall FUN_10eb6040(undefined4 *param_1)

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


// Reference entry 10eb6080; body size 48 bytes.
#line 1 "ENTRY_10eb6080"

undefined4 * __fastcall FUN_10eb6080(undefined4 *param_1)

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


// Reference entry 10eb60c0; body size 48 bytes.
#line 1 "ENTRY_10eb60c0"

undefined4 * __fastcall FUN_10eb60c0(undefined4 *param_1)

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


// Reference entry 10eb9540; body size 27 bytes.
#line 1 "ENTRY_10eb9540"

undefined4 __thiscall FUN_10eb9540(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2);
  (**(code **)(*param_1 + 8))(param_2,param_3);
  thunk_FUN_105ae230(uVar1,param_3);
  return (undefined4)(param_2);
}


// Reference entry 10eba5f0; body size 19 bytes.
#line 1 "ENTRY_10eba5f0"

void __thiscall FUN_10eba5f0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 8))(param_2);
  thunk_FUN_105ae450(param_2);
  return;
}


// Reference entry 10ebb360; body size 46 bytes.
#line 1 "ENTRY_10ebb360"

void __thiscall FUN_10ebb360(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  uVar1 = (undefined4)(0);
  (**(code **)(*param_1 + 0xc))(param_2,param_3,0);
  thunk_FUN_105ae560(param_2,param_3,uVar1);
  return;
}


// Reference entry 10ebb790; body size 40 bytes.
#line 1 "ENTRY_10ebb790"

void __thiscall FUN_10ebb790(int *param_1,undefined4 param_2)

{
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2);
  thunk_FUN_105ad940(param_2);
  return;
}


// Reference entry 10ebb7d0; body size 40 bytes.
#line 1 "ENTRY_10ebb7d0"

void __thiscall FUN_10ebb7d0(int *param_1,undefined4 param_2)

{
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2);
  thunk_FUN_105ae900(param_2);
  return;
}


// Reference entry 10ebb810; body size 48 bytes.
#line 1 "ENTRY_10ebb810"

void __thiscall FUN_10ebb810(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4);
  thunk_FUN_105aeb50(param_2,param_3,param_4);
  return;
}


// Reference entry 10ebb850; body size 50 bytes.
#line 1 "ENTRY_10ebb850"

void __thiscall FUN_10ebb850(int *param_1,int param_2)

{
  int iVar1;
  
  thunk_FUN_105a26b0();
  iVar1 = (int)(thunk_FUN_10df2ea0());
  if ((iVar1 != 0) && (0 < param_2)) {
    iVar1 = (int)(param_2);
    (**(code **)(*param_1 + 0xc))(param_2,param_2);
    thunk_FUN_105aef50(param_2,iVar1);
  }
  return;
}


// Reference entry 10ebb890; body size 58 bytes.
#line 1 "ENTRY_10ebb890"

void __thiscall FUN_10ebb890(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  thunk_FUN_105a26b0();
  iVar1 = (int)(thunk_FUN_10df2ea0());
  if (((iVar1 != 0) && (0 < param_2)) && (0 < param_3)) {
    (**(code **)(*param_1 + 0xc))(param_2,param_3);
    thunk_FUN_105aef50(param_2,param_3);
  }
  return;
}


// Reference entry 10ebb8e0; body size 44 bytes.
#line 1 "ENTRY_10ebb8e0"

void __thiscall FUN_10ebb8e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2,param_3);
  thunk_FUN_105aefc0(param_2,param_3);
  return;
}


// Reference entry 10ebba40; body size 33 bytes.
#line 1 "ENTRY_10ebba40"

void __fastcall FUN_10ebba40(int *param_1)

{
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))();
  thunk_FUN_105af180();
  return;
}


// Reference entry 10ebba70; body size 40 bytes.
#line 1 "ENTRY_10ebba70"

void __thiscall FUN_10ebba70(int *param_1,undefined4 param_2)

{
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2);
  thunk_FUN_105af1c0(param_2);
  return;
}


// Reference entry 10ebbab0; body size 41 bytes.
#line 1 "ENTRY_10ebbab0"

void __thiscall FUN_10ebbab0(int *param_1,uint param_2)

{
  int iVar1;
  
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  iVar1 = (int)((**(code **)(*param_1 + 0xc))());
  *(uint *)(iVar1 + 0xd8) = *(uint *)(iVar1 + 0xd8) | param_2;
  return;
}


// Reference entry 10ebbaf0; body size 43 bytes.
#line 1 "ENTRY_10ebbaf0"

void __thiscall FUN_10ebbaf0(int *param_1,uint param_2)

{
  int iVar1;
  
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  iVar1 = (int)((**(code **)(*param_1 + 0xc))());
  *(uint *)(iVar1 + 0xd8) = *(uint *)(iVar1 + 0xd8) & ~param_2;
  return;
}


// Reference entry 10ebc210; body size 53 bytes.
#line 1 "ENTRY_10ebc210"

void __thiscall FUN_10ebc210(int *param_1,undefined4 param_2)

{
  thunk_FUN_105a2cd0(param_2);
  thunk_FUN_105a2cd0(param_2);
  (**(code **)(*param_1 + 0x3c))();
  thunk_FUN_106dc650(param_2,param_1);
  return;
}


// Reference entry 10ebc260; body size 50 bytes.
#line 1 "ENTRY_10ebc260"

void FUN_10ebc260(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10df15d0(param_2);
  thunk_FUN_105a2e60(param_2);
  thunk_FUN_106dc6c0(param_1,param_2);
  return;
}


// Reference entry 10ebc2a0; body size 63 bytes.
#line 1 "ENTRY_10ebc2a0"

void __thiscall FUN_10ebc2a0(int *param_1,undefined4 param_2,int *param_3)

{
  thunk_FUN_10df3040(param_1);
  thunk_FUN_105a3010(param_2);
  (**(code **)(*param_1 + 0x40))();
  thunk_FUN_10df3a40(param_1,param_1[0x2f]);
  *param_3 = (int)(param_1[0x2f]);
  return;
}


// Reference entry 10ebc5d0; body size 42 bytes.
#line 1 "ENTRY_10ebc5d0"

void __thiscall FUN_10ebc5d0(int param_1,SCStr *param_2)

{
  ((SCStr *)(*(SCStr **)(param_1 + 4)))->op_ctor(param_2);
  thunk_FUN_105f6050(param_2 + 4);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x24;
  return;
}


// Reference entry 10ebfa70; body size 59 bytes.
#line 1 "ENTRY_10ebfa70"

void __thiscall FUN_10ebfa70(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10ebc8e0(puVar1,param_2);
  return;
}


// Reference entry 10ec0fb0; body size 28 bytes.
#line 1 "ENTRY_10ec0fb0"

undefined4 * __fastcall FUN_10ec0fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ec1d20; body size 18 bytes.
#line 1 "ENTRY_10ec1d20"

undefined4 __fastcall FUN_10ec1d20(undefined4 param_1)

{
  thunk_FUN_106d8350();
  return (undefined4)(param_1);
}


// Reference entry 10ec35e0; body size 30 bytes.
#line 1 "ENTRY_10ec35e0"

int __thiscall FUN_10ec35e0(int param_1,undefined4 *param_2)

{
  thunk_FUN_10ebd6e0(*(undefined4 *)(param_1 + 4),*param_2,param_2[1],param_2);
  return (int)(param_1);
}


// Reference entry 10ec3610; body size 63 bytes.
#line 1 "ENTRY_10ec3610"

int __thiscall FUN_10ec3610(int param_1,undefined4 *param_2)

{
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
    return (int)(param_1);
  }
  thunk_FUN_10ebc8e0(puVar1,param_2);
  return (int)(param_1);
}


// Reference entry 10ec67a0; body size 61 bytes.
#line 1 "ENTRY_10ec67a0"

undefined4 FUN_10ec67a0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10eb5130(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ec7200; body size 19 bytes.
#line 1 "ENTRY_10ec7200"

undefined4 FUN_10ec7200(undefined4 param_1)

{
  thunk_FUN_106d83f0(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10ec99c0; body size 59 bytes.
#line 1 "ENTRY_10ec99c0"

void __thiscall FUN_10ec99c0(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10ebc8e0(puVar1,param_2);
  return;
}


// Reference entry 10ec9a10; body size 57 bytes.
#line 1 "ENTRY_10ec9a10"

void __thiscall FUN_10ec9a10(int *param_1,uint param_2)

{
  if ((uint)((param_1[2] - *param_1) / 0xc) < param_2) {
    if (0x15555555 < param_2) {
                    
      thunk_FUN_10604cd0();
    }
    thunk_FUN_10ec2f90(param_2);
  }
  return;
}


// Reference entry 10ed09d0; body size 48 bytes.
#line 1 "ENTRY_10ed09d0"

undefined4 * __fastcall FUN_10ed09d0(undefined4 *param_1)

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


// Reference entry 10ed4080; body size 58 bytes.
#line 1 "ENTRY_10ed4080"

undefined4 FUN_10ed4080(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x15));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x15);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed4340; body size 58 bytes.
#line 1 "ENTRY_10ed4340"

undefined4 FUN_10ed4340(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0xd));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0xd);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed4390; body size 58 bytes.
#line 1 "ENTRY_10ed4390"

undefined4 FUN_10ed4390(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0xc));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0xc);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed43e0; body size 58 bytes.
#line 1 "ENTRY_10ed43e0"

undefined4 FUN_10ed43e0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0xb));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0xb);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed4740; body size 58 bytes.
#line 1 "ENTRY_10ed4740"

undefined4 FUN_10ed4740(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x2d));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x2d);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed4790; body size 58 bytes.
#line 1 "ENTRY_10ed4790"

undefined4 FUN_10ed4790(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x2c));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x2c);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed47e0; body size 58 bytes.
#line 1 "ENTRY_10ed47e0"

undefined4 FUN_10ed47e0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x13));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x13);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed4830; body size 58 bytes.
#line 1 "ENTRY_10ed4830"

undefined4 FUN_10ed4830(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x14));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x14);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed5e70; body size 58 bytes.
#line 1 "ENTRY_10ed5e70"

undefined4 FUN_10ed5e70(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0xe));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0xe);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed5ec0; body size 58 bytes.
#line 1 "ENTRY_10ed5ec0"

undefined4 FUN_10ed5ec0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x11));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x11);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed5f10; body size 58 bytes.
#line 1 "ENTRY_10ed5f10"

undefined4 FUN_10ed5f10(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(1));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,1);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed8e20; body size 58 bytes.
#line 1 "ENTRY_10ed8e20"

undefined4 FUN_10ed8e20(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x16));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x16);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed8f80; body size 58 bytes.
#line 1 "ENTRY_10ed8f80"

undefined4 FUN_10ed8f80(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x10));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x10);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed8fd0; body size 58 bytes.
#line 1 "ENTRY_10ed8fd0"

undefined4 FUN_10ed8fd0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0x12));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0x12);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10ed9020; body size 58 bytes.
#line 1 "ENTRY_10ed9020"

undefined4 FUN_10ed9020(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_10e10dc0(0xf));
    if (cVar1 != '\0') {
      thunk_FUN_10e0f500(param_1,0xf);
      return (undefined4)(param_1);
    }
  }
  thunk_FUN_10ec1d20();
  return (undefined4)(param_1);
}


// Reference entry 10edf8f0; body size 33 bytes.
#line 1 "ENTRY_10edf8f0"

void __fastcall FUN_10edf8f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10edf920; body size 33 bytes.
#line 1 "ENTRY_10edf920"

void __fastcall FUN_10edf920(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10edfac0; body size 37 bytes.
#line 1 "ENTRY_10edfac0"

int * __fastcall FUN_10edfac0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10edfdf0; body size 33 bytes.
#line 1 "ENTRY_10edfdf0"

void __fastcall FUN_10edfdf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ee1160; body size 31 bytes.
#line 1 "ENTRY_10ee1160"

void __fastcall FUN_10ee1160(int param_1)

{
  thunk_FUN_1033c720(*(undefined4 *)(param_1 + 0x100));
  thunk_FUN_10ee15b0(2);
  return;
}


// Reference entry 10ee16d0; body size 41 bytes.
#line 1 "ENTRY_10ee16d0"

void __thiscall FUN_10ee16d0(int param_1,int param_2,int param_3)

{
  if (((param_2 != 0) && ((int)(param_2) == *(int *)(param_1 + 0xfc))) &&
     ((int)(param_3) == *(int *)(param_1 + 0xf8))) {
    thunk_FUN_10ee15b0(3);
  }
  return;
}


// Reference entry 10ee1710; body size 41 bytes.
#line 1 "ENTRY_10ee1710"

void __thiscall FUN_10ee1710(int param_1,int param_2,int param_3)

{
  if (((param_2 != 0) && ((int)(param_2) == *(int *)(param_1 + 0xfc))) &&
     ((int)(param_3) == *(int *)(param_1 + 0xf8))) {
    thunk_FUN_10ee15b0(4);
  }
  return;
}


// Reference entry 10ee1750; body size 41 bytes.
#line 1 "ENTRY_10ee1750"

void __thiscall FUN_10ee1750(int param_1,int param_2,int param_3)

{
  if (((param_2 != 0) && ((int)(param_2) == *(int *)(param_1 + 0xfc))) &&
     ((int)(param_3) == *(int *)(param_1 + 0xf8))) {
    thunk_FUN_10ee15b0(6);
  }
  return;
}


// Reference entry 10ee2d60; body size 62 bytes.
#line 1 "ENTRY_10ee2d60"

void __fastcall FUN_10ee2d60(int param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  thunk_FUN_10302280(param_1 + 4,"Stop the KeepAlive timer");
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  thunk_FUN_111bd6b0();
  return;
}


// Reference entry 10ee2fa0; body size 35 bytes.
#line 1 "ENTRY_10ee2fa0"

void __fastcall FUN_10ee2fa0(int param_1)

{
  thunk_FUN_103021f0(param_1 + 4,5,"Cancel connection timer");
  *(undefined8 *)(param_1 + 0x9c) = 0;
  return;
}


// Reference entry 10ee2fd0; body size 33 bytes.
#line 1 "ENTRY_10ee2fd0"

void __fastcall FUN_10ee2fd0(int param_1)

{
  thunk_FUN_10302280(param_1 + 4,"Cancel retransmit timer");
  *(undefined8 *)(param_1 + 0x94) = 0;
  return;
}


// Reference entry 10ee4150; body size 58 bytes.
#line 1 "ENTRY_10ee4150"

void __fastcall FUN_10ee4150(int param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  thunk_FUN_111bd050(*(undefined1 *)(param_1 + 0x358c));
  *(undefined1 *)(param_1 + 0x358c) = 0;
  thunk_FUN_10302280(param_1 + 4,"Close notify sent");
  return;
}


// Reference entry 10ee42f0; body size 57 bytes.
#line 1 "ENTRY_10ee42f0"

int __fastcall FUN_10ee42f0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x90) < 1) {
    iVar2 = (int)(60000);
  }
  else {
    iVar2 = (int)(*(int *)(param_1 + 0x90) * 1000);
  }
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x2c);
  }
  return (int)(iVar2);
}


// Reference entry 10ee49c0; body size 50 bytes.
#line 1 "ENTRY_10ee49c0"

undefined4 __fastcall FUN_10ee49c0(int param_1)

{
  thunk_FUN_111bd050(*(undefined1 *)(param_1 + 0x358c));
  *(undefined1 *)(param_1 + 0x358c) = 0;
  thunk_FUN_10302280(param_1 + 4,"Close notify sent");
  return (undefined4)(0);
}


// Reference entry 10ee7150; body size 32 bytes.
#line 1 "ENTRY_10ee7150"

void __fastcall FUN_10ee7150(int param_1)

{
  thunk_FUN_10302280(param_1 + 4,"Stop the KeepAlive timer");
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}


// Reference entry 10ee7510; body size 50 bytes.
#line 1 "ENTRY_10ee7510"

undefined4 __fastcall FUN_10ee7510(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(param_1 + 0xb8) != 0)) {
    iVar1 = (int)(thunk_FUN_111be2e0());
    if (0 < iVar1) {
      thunk_FUN_111bd6b0();
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ee7f70; body size 46 bytes.
#line 1 "ENTRY_10ee7f70"

bool __fastcall FUN_10ee7f70(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x2c));
  iVar1 = (int)(*(int *)(param_1 + 0xb8));
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x2c);
  }
  return (bool)(iVar1 == 2);
}


// Reference entry 10eebd30; body size 33 bytes.
#line 1 "ENTRY_10eebd30"

void __fastcall FUN_10eebd30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eebd60; body size 33 bytes.
#line 1 "ENTRY_10eebd60"

void __fastcall FUN_10eebd60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eebd90; body size 33 bytes.
#line 1 "ENTRY_10eebd90"

void __fastcall FUN_10eebd90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eebdc0; body size 33 bytes.
#line 1 "ENTRY_10eebdc0"

void __fastcall FUN_10eebdc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eebed0; body size 37 bytes.
#line 1 "ENTRY_10eebed0"

int * __fastcall FUN_10eebed0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10eebf00; body size 37 bytes.
#line 1 "ENTRY_10eebf00"

int * __fastcall FUN_10eebf00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10eec2f0; body size 33 bytes.
#line 1 "ENTRY_10eec2f0"

void __fastcall FUN_10eec2f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eec320; body size 33 bytes.
#line 1 "ENTRY_10eec320"

void __fastcall FUN_10eec320(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10eee200; body size 61 bytes.
#line 1 "ENTRY_10eee200"

undefined4 FUN_10eee200(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10eed870(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10eee9f0; body size 61 bytes.
#line 1 "ENTRY_10eee9f0"

undefined4 FUN_10eee9f0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10eed870(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10eefae0; body size 56 bytes.
#line 1 "ENTRY_10eefae0"

int FUN_10eefae0(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10c5e5a0(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_1)) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10eefdc0; body size 55 bytes.
#line 1 "ENTRY_10eefdc0"

undefined4 FUN_10eefdc0(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_10c5e5a0(local_c,param_1));
  if ((*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= *param_1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10eefe10; body size 61 bytes.
#line 1 "ENTRY_10eefe10"

undefined4 FUN_10eefe10(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10eeee80(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ef0990; body size 61 bytes.
#line 1 "ENTRY_10ef0990"

undefined4 FUN_10ef0990(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10eeee80(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ef3110; body size 41 bytes.
#line 1 "ENTRY_10ef3110"

char * FUN_10ef3110(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((char *)(param_1) != (char *)0x0) {
    pcVar1 = (char *)(strrchr(param_1,0x2f));
    if ((char *)(pcVar1) != (char *)0x0) {
      pcVar2 = (char *)(pcVar1 + 1);
      if (pcVar1[1] == '\0') {
        pcVar2 = (char *)(param_1);
      }
      return (char *)(pcVar2);
    }
  }
  return (char *)(param_1);
}


// Reference entry 10ef4180; body size 51 bytes.
#line 1 "ENTRY_10ef4180"

int FUN_10ef4180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(param_1,param_2,param_3,0,&stack0x00000010));
  iVar2 = (int)(__stdio_common_vsprintf(*puVar1 | 1,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (int)(iVar2);

 } catch (...) { }
}


// Reference entry 10ef4da0; body size 36 bytes.
#line 1 "ENTRY_10ef4da0"

void FUN_10ef4da0(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  if ((int *)(param_2) != (int *)(param_3)) {
    do {
      if (*param_2 == *param_4) break;
      param_2 = (int *)(param_2 + 1);
    } while ((int *)(param_2) != (int *)(param_3));
  }
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef64b0; body size 23 bytes.
#line 1 "ENTRY_10ef64b0"

void __fastcall FUN_10ef64b0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  thunk_FUN_10e0f790(uVar2);
  uVar1 = (undefined1)(thunk_FUN_10ef70c0(uVar2));
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}


// Reference entry 10ef9850; body size 49 bytes.
#line 1 "ENTRY_10ef9850"

int __thiscall FUN_10ef9850(int *param_1,int *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10ef9890(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10efdbb0; body size 41 bytes.
#line 1 "ENTRY_10efdbb0"

undefined4 * __thiscall FUN_10efdbb0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)0x0);
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_10c9b9b0(1);
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f00a60; body size 52 bytes.
#line 1 "ENTRY_10f00a60"

undefined4 __fastcall FUN_10f00a60(int param_1)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0x10) != 0) ||
      ((*(char **)(param_1 + 8) != (char *)0x0 && (**(char **)(param_1 + 8) != '\0')))) &&
     ((*(int *)(param_1 + 0x30) != 0 ||
      (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 3 != 0)))) {
    cVar1 = (char)(thunk_FUN_10f00850());
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f01c60; body size 33 bytes.
#line 1 "ENTRY_10f01c60"

void __thiscall FUN_10f01c60(int *param_1,undefined4 param_2)

{
  thunk_FUN_10f01c90(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x74);
  return;
}


// Reference entry 10f01ee0; body size 43 bytes.
#line 1 "ENTRY_10f01ee0"

void FUN_10f01ee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  undefined1 local_4;
  
  thunk_FUN_10f01a30(&local_8,param_2,param_3);
  *param_1 = (undefined4)(local_8);
  *(undefined1 *)(param_1 + 1) = local_4;
  return;
}


// Reference entry 10f02150; body size 48 bytes.
#line 1 "ENTRY_10f02150"

undefined4 * __fastcall FUN_10f02150(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x74));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f021f0; body size 48 bytes.
#line 1 "ENTRY_10f021f0"

undefined4 * __fastcall FUN_10f021f0(undefined4 *param_1)

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


// Reference entry 10f02df0; body size 28 bytes.
#line 1 "ENTRY_10f02df0"

void __fastcall FUN_10f02df0(int *param_1)

{
  thunk_FUN_10f01c90(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x74);
  return;
}


// Reference entry 10f02e20; body size 44 bytes.
#line 1 "ENTRY_10f02e20"

void __fastcall FUN_10f02e20(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_10f01e70(*param_1,param_1[1] + 0x10);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x74);
  }
  return;
}


// Reference entry 10f02ec0; body size 28 bytes.
#line 1 "ENTRY_10f02ec0"

void __fastcall FUN_10f02ec0(int *param_1)

{
  thunk_FUN_10f01c90(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x74);
  return;
}


// Reference entry 10f04f60; body size 44 bytes.
#line 1 "ENTRY_10f04f60"

undefined4 __fastcall FUN_10f04f60(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1cd0());
  if ((cVar1 == '\0') && (cVar1 = thunk_FUN_10da15c0(), cVar1 == '\0')) {
    return (undefined4)(0);
  }
  cVar1 = (char)((**(code **)(*param_1 + 0x24))());
  if (cVar1 == '\0') {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10f04fa0; body size 31 bytes.
#line 1 "ENTRY_10f04fa0"

undefined1 FUN_10f04fa0(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1cd0());
  if (cVar1 != '\0') {
    cVar1 = (char)(thunk_FUN_10da1650());
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f04fe0; body size 50 bytes.
#line 1 "ENTRY_10f04fe0"

undefined4 __fastcall FUN_10f04fe0(int *param_1)

{
  char cVar1;
  
  if ((char)param_1[6] != '\0') {
    cVar1 = (char)(thunk_FUN_10da1cd0());
    if (cVar1 != '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x24))());
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10da1650());
        if (cVar1 == '\0') {
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f05120; body size 37 bytes.
#line 1 "ENTRY_10f05120"

undefined1 FUN_10f05120(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_106cf0e0());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da1650());
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f05160; body size 56 bytes.
#line 1 "ENTRY_10f05160"

undefined4 __fastcall FUN_10f05160(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(thunk_FUN_10da1cd0());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x24))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(*param_1 + 0x18))());
      if (iVar2 != 0x10) {
        cVar1 = (char)(thunk_FUN_10da1650());
        if (cVar1 == '\0') {
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f05290; body size 37 bytes.
#line 1 "ENTRY_10f05290"

undefined1 FUN_10f05290(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_106cf0e0());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da1650());
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f052d0; body size 52 bytes.
#line 1 "ENTRY_10f052d0"

undefined1 FUN_10f052d0(void)

{
  char cVar1;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(1);
  thunk_FUN_10c98710(auStack_10);
  cVar1 = (char)(thunk_FUN_106c9eb0());
  if (cVar1 != '\0') {
    uStack_c = (undefined4)(0x10f052f6);
    cVar1 = (char)(thunk_FUN_10da1650());
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f05330; body size 44 bytes.
#line 1 "ENTRY_10f05330"

undefined4 __fastcall FUN_10f05330(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1cd0());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x24))());
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_10da1650());
      if (cVar1 == '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f054a0; body size 53 bytes.
#line 1 "ENTRY_10f054a0"

undefined1 FUN_10f054a0(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1740());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da15c0());
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_10da1370());
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10da1e80());
        if (cVar1 != '\0') {
          return (undefined1)(1);
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f05830; body size 53 bytes.
#line 1 "ENTRY_10f05830"

undefined1 FUN_10f05830(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da15c0());
  if (cVar1 != '\0') {
    cVar1 = (char)(thunk_FUN_10da1830());
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_10da1530());
      if (cVar1 == '\0') {
        cVar1 = (char)(thunk_FUN_10da1450());
        if (cVar1 == '\0') {
          return (undefined1)(1);
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f058f0; body size 62 bytes.
#line 1 "ENTRY_10f058f0"

undefined1 __fastcall FUN_10f058f0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    cVar1 = (char)(thunk_FUN_10da1cd0());
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_10da15c0());
      if (cVar1 == '\0') {
        cVar1 = (char)(thunk_FUN_10da1370());
        if (cVar1 != '\0') {
          cVar1 = (char)(thunk_FUN_10da1c70(*(undefined4 *)(param_1 + 0x18)));
          if (cVar1 != '\0') {
            return (undefined1)(1);
          }
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f060e0; body size 32 bytes.
#line 1 "ENTRY_10f060e0"

undefined4 __fastcall FUN_10f060e0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_106c9af0(param_1,1));
  uVar2 = (undefined4)(3);
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(8);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10f06350; body size 35 bytes.
#line 1 "ENTRY_10f06350"

undefined4 FUN_10f06350(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1830());
  if ((cVar1 == '\0') && (cVar1 = thunk_FUN_10f0b5e0(), cVar1 != '\0')) {
    return (undefined4)(1);
  }
  return (undefined4)(4);
}


// Reference entry 10f06390; body size 57 bytes.
#line 1 "ENTRY_10f06390"

char FUN_10f06390(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_c [12];
  
  puVar4 = (undefined1 *)(local_c);
  uVar6 = (undefined4)(1);
  uVar5 = (undefined4)(3);
  thunk_FUN_10be4f80(local_c,3,1);
  piVar3 = (int *)((int *)thunk_FUN_10be2e40(puVar4,uVar5,uVar6));
  iVar1 = (int)(piVar3[1]);
  iVar2 = (int)(*piVar3);
  thunk_FUN_1036e480();
  return (char)((iVar1 - iVar2 >> 3 != 0) + '\a');
}


// Reference entry 10f063e0; body size 32 bytes.
#line 1 "ENTRY_10f063e0"

undefined4 __fastcall FUN_10f063e0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_106c9af0(param_1,1));
  uVar2 = (undefined4)(3);
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(6);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10f067b0; body size 46 bytes.
#line 1 "ENTRY_10f067b0"

undefined4 FUN_10f067b0(void)

{
  int iVar1;
  
  thunk_FUN_105ad900();
  iVar1 = (int)(thunk_FUN_10799310());
  if (iVar1 == 1) {
    return (undefined4)(2);
  }
  if ((iVar1 != 7) && (iVar1 != 8)) {
    return (undefined4)(0xffffffff);
  }
  return (undefined4)(1);
}


// Reference entry 10f06840; body size 32 bytes.
#line 1 "ENTRY_10f06840"

undefined4 FUN_10f06840(void)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(3);
  thunk_FUN_10be4f80(3);
  cVar1 = (char)(thunk_FUN_10be6f80(uVar2));
  uVar2 = (undefined4)(8);
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(5);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10f09a10; body size 38 bytes.
#line 1 "ENTRY_10f09a10"

undefined4 FUN_10f09a10(void)

{
  char cVar1;
  undefined4 uVar2;
  
  thunk_FUN_105ad900();
  uVar2 = (undefined4)(thunk_FUN_10799310());
  switch(uVar2) {
  case 1:
    break;
  default:
    return (undefined4)(0x1a);
  case 3:
    return (undefined4)(7);
  case 4:
    return (undefined4)(9);
  case 7:
    return (undefined4)(6);
  case 8:
    return (undefined4)(8);
  }
  thunk_FUN_105ad900();
  cVar1 = (char)(thunk_FUN_107cccd0());
  uVar2 = (undefined4)(5);
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(0x10);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10f0b840; body size 41 bytes.
#line 1 "ENTRY_10f0b840"

undefined4 FUN_10f0b840(void)

{
  char cVar1;
  
  thunk_FUN_105ad900();
  cVar1 = (char)(thunk_FUN_106dc570());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da1ea0());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f0b9a0; body size 53 bytes.
#line 1 "ENTRY_10f0b9a0"

undefined1 FUN_10f0b9a0(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1740());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da15c0());
    if (cVar1 == '\0') {
      cVar1 = (char)(thunk_FUN_10da1370());
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_10da1e80());
        if (cVar1 != '\0') {
          return (undefined1)(1);
        }
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 10f0bd80; body size 31 bytes.
#line 1 "ENTRY_10f0bd80"

undefined4 __fastcall FUN_10f0bd80(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = (int)(thunk_FUN_10c96760());
    if ((iVar1 == 0x15) || (iVar1 == 0x22)) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xe);
}


// Reference entry 10f11b90; body size 19 bytes.
#line 1 "ENTRY_10f11b90"

undefined4 FUN_10f11b90(undefined4 param_1)

{
  thunk_FUN_10f11890(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10f163a0; body size 60 bytes.
#line 1 "ENTRY_10f163a0"

int __thiscall FUN_10f163a0(int *param_1,SCStr *param_2)

{
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f163f0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = ((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10f16c50; body size 63 bytes.
#line 1 "ENTRY_10f16c50"

void __thiscall FUN_10f16c50(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(*param_2);
    uVar3 = (undefined4)(param_2[1]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    *puVar1 = (undefined4)(uVar2);
    puVar1[1] = (undefined4)(uVar3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10f15f70(puVar1,param_2);
  return;
}


// Reference entry 10f16f30; body size 48 bytes.
#line 1 "ENTRY_10f16f30"

undefined4 * __fastcall FUN_10f16f30(undefined4 *param_1)

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


// Reference entry 10f18020; body size 55 bytes.
#line 1 "ENTRY_10f18020"

int * __thiscall FUN_10f18020(int *param_1,byte param_2)

{
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


// Reference entry 10f19500; body size 56 bytes.
#line 1 "ENTRY_10f19500"

void FUN_10f19500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  for (; (undefined4 *)(param_1) != (undefined4 *)(param_2); param_1 = param_1 + 2) {
    uVar1 = (undefined4)(*param_1);
    uVar2 = (undefined4)(param_1[1]);
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    *param_3 = (undefined4)(uVar1);
    param_3[1] = (undefined4)(uVar2);
    param_3 = (undefined4 *)(param_3 + 2);
  }
  return;
}


// Reference entry 10f1aa30; body size 63 bytes.
#line 1 "ENTRY_10f1aa30"

void __thiscall FUN_10f1aa30(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(*param_2);
    uVar3 = (undefined4)(param_2[1]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    *puVar1 = (undefined4)(uVar2);
    puVar1[1] = (undefined4)(uVar3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    return;
  }
  thunk_FUN_10f15f70(puVar1,param_2);
  return;
}


// Reference entry 10f1bf40; body size 48 bytes.
#line 1 "ENTRY_10f1bf40"

undefined4 * __fastcall FUN_10f1bf40(undefined4 *param_1)

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


// Reference entry 10f1bf80; body size 48 bytes.
#line 1 "ENTRY_10f1bf80"

undefined4 * __fastcall FUN_10f1bf80(undefined4 *param_1)

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


// Reference entry 10f1df20; body size 56 bytes.
#line 1 "ENTRY_10f1df20"

int FUN_10f1df20(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f1b420(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_1)) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10f1df70; body size 56 bytes.
#line 1 "ENTRY_10f1df70"

int FUN_10f1df70(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f1b480(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_1)) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10f1f800; body size 55 bytes.
#line 1 "ENTRY_10f1f800"

undefined4 FUN_10f1f800(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_10f1b420(local_c,param_1));
  if ((*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= *param_1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10f1f850; body size 55 bytes.
#line 1 "ENTRY_10f1f850"

undefined4 FUN_10f1f850(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_10f1b480(local_c,param_1));
  if ((*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= *param_1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10f1f8a0; body size 61 bytes.
#line 1 "ENTRY_10f1f8a0"

undefined4 FUN_10f1f8a0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10f1b4e0(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f209a0; body size 61 bytes.
#line 1 "ENTRY_10f209a0"

undefined4 FUN_10f209a0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10f1b4e0(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f209f0; body size 60 bytes.
#line 1 "ENTRY_10f209f0"

uint __fastcall FUN_10f209f0(int param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 local_10;
  undefined1 local_c [12];
  
  if (*(int *)(param_1 + 0x28) != 0) {
    local_10 = (undefined4)(0x13);
    iVar1 = (int)(thunk_FUN_10f1b480(local_c,&local_10));
    in_EAX = (uint)(*(uint *)(iVar1 + 8));
    if ((*(char *)(in_EAX + 0xd) == '\0') && (*(int *)(in_EAX + 0x10) < 0x14)) {
      return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f228a0; body size 36 bytes.
#line 1 "ENTRY_10f228a0"

void __thiscall FUN_10f228a0(int param_1,int param_2)

{
  if ((int)(param_2) == *(int *)(param_1 + 0x34)) {
    thunk_FUN_10f220c0();
    return;
  }
  if ((int)(param_2) == *(int *)(param_1 + 0x38)) {
    thunk_FUN_10f22380();
  }
  return;
}


// Reference entry 10f24a40; body size 48 bytes.
#line 1 "ENTRY_10f24a40"

undefined4 * __fastcall FUN_10f24a40(undefined4 *param_1)

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


// Reference entry 10f25bc0; body size 36 bytes.
#line 1 "ENTRY_10f25bc0"

void __fastcall FUN_10f25bc0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    thunk_FUN_10f23a20(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x1c);
  }
  return;
}


// Reference entry 10f25bf0; body size 36 bytes.
#line 1 "ENTRY_10f25bf0"

void __fastcall FUN_10f25bf0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    thunk_FUN_10785c60(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x1c);
  }
  return;
}


// Reference entry 10f2a8e0; body size 19 bytes.
#line 1 "ENTRY_10f2a8e0"

undefined4 FUN_10f2a8e0(undefined4 param_1)

{
  thunk_FUN_10f29d90(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10f2a900; body size 19 bytes.
#line 1 "ENTRY_10f2a900"

undefined4 FUN_10f2a900(undefined4 param_1)

{
  thunk_FUN_10f29d90(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10f2ce50; body size 38 bytes.
#line 1 "ENTRY_10f2ce50"

undefined4 __thiscall FUN_10f2ce50(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("ChannelMapSet",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10f2f730; body size 46 bytes.
#line 1 "ENTRY_10f2f730"

void __fastcall FUN_10f2f730(int param_1)

{
  if (*(int *)(param_1 + 0x538) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x538) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x538))(1);
    }
    *(undefined4 *)(param_1 + 0x538) = 0;
  }
  return;
}


// Reference entry 10f372e0; body size 21 bytes.
#line 1 "ENTRY_10f372e0"

undefined4 __thiscall FUN_10f372e0(int param_1,char *param_2,uint param_3)

{
  ((SCStr *)((SCStr *)(param_1 + 0x20)))->append(param_2,param_3);
  return (undefined4)(1);
}


// Reference entry 10f37e60; body size 48 bytes.
#line 1 "ENTRY_10f37e60"

undefined4 * __fastcall FUN_10f37e60(undefined4 *param_1)

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


// Reference entry 10f392b0; body size 56 bytes.
#line 1 "ENTRY_10f392b0"

int FUN_10f392b0(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f377b0(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_1)) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10f39910; body size 55 bytes.
#line 1 "ENTRY_10f39910"

undefined4 FUN_10f39910(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_10f377b0(local_c,param_1));
  if ((*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') &&
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= *param_1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10f39960; body size 61 bytes.
#line 1 "ENTRY_10f39960"

undefined4 FUN_10f39960(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10f37810(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f3bdb0; body size 61 bytes.
#line 1 "ENTRY_10f3bdb0"

undefined4 FUN_10f3bdb0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10f37810(local_c,param_1));
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)));
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f3d660; body size 37 bytes.
#line 1 "ENTRY_10f3d660"

void __thiscall FUN_10f3d660(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x3c) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x3c) + 0x20))());
  }
  if (param_2 == iVar1) {
    thunk_FUN_10f3da70();
  }
  return;
}


// Reference entry 10f3d690; body size 37 bytes.
#line 1 "ENTRY_10f3d690"

void __thiscall FUN_10f3d690(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x34) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x34) + 0x20))());
  }
  if (param_2 == iVar1) {
    thunk_FUN_10f3e260();
  }
  return;
}


// Reference entry 10f3d8d0; body size 42 bytes.
#line 1 "ENTRY_10f3d8d0"

void __fastcall FUN_10f3d8d0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x38) + 4))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x38) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10f3d910; body size 42 bytes.
#line 1 "ENTRY_10f3d910"

void __fastcall FUN_10f3d910(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x34) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x30) + 4))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x30) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10f3f550; body size 46 bytes.
#line 1 "ENTRY_10f3f550"

void __fastcall FUN_10f3f550(int param_1)

{
  if (*(int **)(param_1 + 0x120) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x120) + 0x14))();
    if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  return;
}


// Reference entry 10f3fb40; body size 37 bytes.
#line 1 "ENTRY_10f3fb40"

void __thiscall FUN_10f3fb40(undefined4 *param_1,undefined4 param_2)

{
  if ((int *)(int *)(param_1[2]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 8))(param_2);
  }
  if (*(char *)(param_1 + 3) != '\0') {
    (**(code **)*param_1)(1);
  }
  return;
}


// Reference entry 10f41490; body size 60 bytes.
#line 1 "ENTRY_10f41490"

void __fastcall FUN_10f41490(int *param_1)

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


// Reference entry 10f414f0; body size 60 bytes.
#line 1 "ENTRY_10f414f0"

void __fastcall FUN_10f414f0(int *param_1)

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


// Reference entry 10f41550; body size 60 bytes.
#line 1 "ENTRY_10f41550"

void __fastcall FUN_10f41550(int *param_1)

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


// Reference entry 10f415b0; body size 60 bytes.
#line 1 "ENTRY_10f415b0"

void __fastcall FUN_10f415b0(int *param_1)

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


// Reference entry 10f41ba0; body size 48 bytes.
#line 1 "ENTRY_10f41ba0"

int __fastcall FUN_10f41ba0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x28))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10f41d20; body size 45 bytes.
#line 1 "ENTRY_10f41d20"

void __thiscall FUN_10f41d20(int *param_1,int param_2)

{
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


// Reference entry 10f420a0; body size 43 bytes.
#line 1 "ENTRY_10f420a0"

void __fastcall FUN_10f420a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 10f42da0; body size 33 bytes.
#line 1 "ENTRY_10f42da0"

undefined4 __fastcall FUN_10f42da0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x28))());
  if (iVar1 != 0) {
    iVar1 = (int)((**(code **)(*param_1 + 0x28))());
    if (*(int *)(iVar1 + 8) != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10f42dd0; body size 36 bytes.
#line 1 "ENTRY_10f42dd0"

void __fastcall FUN_10f42dd0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0xc);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCINowPlaying:onMusicChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10f437a0; body size 22 bytes.
#line 1 "ENTRY_10f437a0"

void __fastcall FUN_10f437a0(int param_1)

{
  __time64_t _Var1;
  
  _Var1 = (__time64_t)(_time64((__time64_t *)0x0));
  *(__time64_t *)(param_1 + 0x68) = _Var1;
  return;
}


// Reference entry 10f44930; body size 60 bytes.
#line 1 "ENTRY_10f44930"

void __fastcall FUN_10f44930(int *param_1)

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


// Reference entry 10f450f0; body size 48 bytes.
#line 1 "ENTRY_10f450f0"

int __fastcall FUN_10f450f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x38))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10f46d90; body size 57 bytes.
#line 1 "ENTRY_10f46d90"

uint __fastcall FUN_10f46d90(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x38))());
  pcVar2 = (char *)((char *)0x0);
  if (iVar1 != 0) {
    pcVar2 = (char *)((char *)(**(code **)(*param_1 + 0x38))());
    if ((((*(int *)(pcVar2 + 8) != 0) && (pcVar2 = (char *)param_1[0x13], (char *)(pcVar2) != (char *)0x0)) &&
        (*pcVar2 != '\0')) && ((param_1[0xe] == 0 || (param_1[0x10] != 0)))) {
      return (uint)(((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)((uint)pcVar2 & 0xffffff00);
}


// Reference entry 10f47170; body size 58 bytes.
#line 1 "ENTRY_10f47170"

void __fastcall FUN_10f47170(int *param_1)

{
  undefined4 unaff_ESI;
  
  (**(code **)(*(int *)(param_1[0xb9] + 8) + 0x14))(0);
  (**(code **)(*param_1 + 0x100))(0);
  thunk_FUN_1021b750(unaff_ESI);
  param_1[0xb4] = (int)(param_1[0xb3]);
  return;
}


// Reference entry 10f47850; body size 31 bytes.
#line 1 "ENTRY_10f47850"

void __fastcall FUN_10f47850(int param_1)

{
  (**(code **)(*(int *)(*(int *)(param_1 + 0x2e4) + 8) + 0x14))(*(undefined4 *)(param_1 + 200));
  thunk_FUN_10f45a10();
  return;
}


// Reference entry 10f47f80; body size 16 bytes.
#line 1 "ENTRY_10f47f80"

undefined4 FUN_10f47f80(short param_1)

{
  return (undefined4)(((uint)(3) << 8 | (uint)(param_1 != 0x3ec)));
}


// Reference entry 10f47fa0; body size 37 bytes.
#line 1 "ENTRY_10f47fa0"

void __thiscall FUN_10f47fa0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x20));
  thunk_FUN_103d61d0(param_2,0);
  if (iVar1 == 0) {
    thunk_FUN_10f463a0();
  }
  return;
}


// Reference entry 10f499d0; body size 59 bytes.
#line 1 "ENTRY_10f499d0"

void __thiscall FUN_10f499d0(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10f494b0(puVar1,param_2);
  return;
}


// Reference entry 10f4b4a0; body size 48 bytes.
#line 1 "ENTRY_10f4b4a0"

int __fastcall FUN_10f4b4a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x4c))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10f4b4e0; body size 48 bytes.
#line 1 "ENTRY_10f4b4e0"

int __fastcall FUN_10f4b4e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1));
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x4c))());
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10f4b5c0; body size 19 bytes.
#line 1 "ENTRY_10f4b5c0"

void __fastcall FUN_10f4b5c0(int param_1)

{
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    thunk_FUN_11161d90();
    return;
  }
  return;
}


// Reference entry 10f4b990; body size 21 bytes.
#line 1 "ENTRY_10f4b990"

undefined4 __fastcall FUN_10f4b990(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(FUN_10f4b5e0());
  return (undefined4)(uVar1);
}


// Reference entry 10f4b9c0; body size 60 bytes.
#line 1 "ENTRY_10f4b9c0"

void FUN_10f4b9c0(int param_1,int param_2)

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


// Reference entry 10f4be50; body size 34 bytes.
#line 1 "ENTRY_10f4be50"

int __fastcall FUN_10f4be50(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(char *)(*(int *)(param_1 + 0x3c) + 0x15) == '\0')) {
    cVar1 = (char)(thunk_FUN_1115f360(0));
    return (int)(2 - (uint)(cVar1 != '\0'));
  }
  return (int)(0);
}


// Reference entry 10f4c190; body size 32 bytes.
#line 1 "ENTRY_10f4c190"

undefined4 __fastcall FUN_10f4c190(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    uVar1 = (undefined4)(thunk_FUN_1115f570(puVar2));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10f4c1d0; body size 52 bytes.
#line 1 "ENTRY_10f4c1d0"

void __fastcall FUN_10f4c1d0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x4c))());
  if ((iVar1 != 0) && (param_1[0x10] != 0)) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(undefined1 *)(param_1[0xc]) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)((undefined1 *)param_1[0xc]);
    }
    iVar1 = (int)((**(code **)(*(int *)(param_1[0x10] + 0x1c) + 0xc))(puVar2));
    if (iVar1 != 0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}


// Reference entry 10f4c720; body size 32 bytes.
#line 1 "ENTRY_10f4c720"

uint __fastcall FUN_10f4c720(int param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    uVar1 = (uint)(thunk_FUN_1115f360(puVar2));
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f4c770; body size 32 bytes.
#line 1 "ENTRY_10f4c770"

uint __fastcall FUN_10f4c770(int param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    uVar1 = (uint)(thunk_FUN_1115f330(puVar2));
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f4c7a0; body size 32 bytes.
#line 1 "ENTRY_10f4c7a0"

undefined4 __fastcall FUN_10f4c7a0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    uVar1 = (undefined4)(thunk_FUN_1115f390(puVar2));
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10f4c970; body size 59 bytes.
#line 1 "ENTRY_10f4c970"

void __thiscall FUN_10f4c970(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10f494b0(puVar1,param_2);
  return;
}


// Reference entry 10f4e130; body size 39 bytes.
#line 1 "ENTRY_10f4e130"

undefined4 * __fastcall FUN_10f4e130(undefined4 *param_1)

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


// Reference entry 10f4e590; body size 60 bytes.
#line 1 "ENTRY_10f4e590"

void __fastcall FUN_10f4e590(int *param_1)

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


// Reference entry 10f4e6f0; body size 38 bytes.
#line 1 "ENTRY_10f4e6f0"

void __fastcall FUN_10f4e6f0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10f4e790();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x14);
  }
  return;
}


// Reference entry 10f4ec90; body size 27 bytes.
#line 1 "ENTRY_10f4ec90"

int FUN_10f4ec90(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10f4da00(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10f4fa50; body size 33 bytes.
#line 1 "ENTRY_10f4fa50"

void FUN_10f4fa50(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (bVar1) {
    thunk_FUN_10f50770();
  }
  return;
}


// Reference entry 10f50750; body size 26 bytes.
#line 1 "ENTRY_10f50750"

undefined4 __thiscall FUN_10f50750(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x20) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10f518c0; body size 29 bytes.
#line 1 "ENTRY_10f518c0"

void __thiscall FUN_10f518c0(int param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x20) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 10f52370; body size 33 bytes.
#line 1 "ENTRY_10f52370"

void __fastcall FUN_10f52370(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f523a0; body size 33 bytes.
#line 1 "ENTRY_10f523a0"

void __fastcall FUN_10f523a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f52570; body size 37 bytes.
#line 1 "ENTRY_10f52570"

int * __fastcall FUN_10f52570(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10f52840; body size 33 bytes.
#line 1 "ENTRY_10f52840"

void __fastcall FUN_10f52840(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f637f0; body size 39 bytes.
#line 1 "ENTRY_10f637f0"

int __fastcall FUN_10f637f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(9);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("CurrentIRRepeaterState");
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 10f63e00; body size 39 bytes.
#line 1 "ENTRY_10f63e00"

void __thiscall FUN_10f63e00(int param_1,SCStr *param_2,undefined1 param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("voice.confirmationTone"));
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x1c) = param_3;
    thunk_FUN_10f63480();
  }
  return;
}


// Reference entry 10f65ed0; body size 33 bytes.
#line 1 "ENTRY_10f65ed0"

void __fastcall FUN_10f65ed0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f65f00; body size 33 bytes.
#line 1 "ENTRY_10f65f00"

void __fastcall FUN_10f65f00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f661c0; body size 37 bytes.
#line 1 "ENTRY_10f661c0"

int * __fastcall FUN_10f661c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10f66710; body size 33 bytes.
#line 1 "ENTRY_10f66710"

void __fastcall FUN_10f66710(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f67600; body size 26 bytes.
#line 1 "ENTRY_10f67600"

undefined4 __thiscall FUN_10f67600(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10f67a70; body size 23 bytes.
#line 1 "ENTRY_10f67a70"

void FUN_10f67a70(void)

{
  thunk_FUN_10f67e60();
  thunk_FUN_10f67a90();
  thunk_FUN_10f68190();
  return;
}


// Reference entry 10f685d0; body size 42 bytes.
#line 1 "ENTRY_10f685d0"

int __fastcall FUN_10f685d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0x400);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("AlbumArtistDisplayOption");
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 10f68ab0; body size 29 bytes.
#line 1 "ENTRY_10f68ab0"

void __thiscall FUN_10f68ab0(int param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 10f6b450; body size 49 bytes.
#line 1 "ENTRY_10f6b450"

int __thiscall FUN_10f6b450(int *param_1,uint *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f6b490(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10f6b980; body size 48 bytes.
#line 1 "ENTRY_10f6b980"

undefined4 * __fastcall FUN_10f6b980(undefined4 *param_1)

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


// Reference entry 10f70bd0; body size 33 bytes.
#line 1 "ENTRY_10f70bd0"

void __fastcall FUN_10f70bd0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f70c00; body size 33 bytes.
#line 1 "ENTRY_10f70c00"

void __fastcall FUN_10f70c00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f70cd0; body size 33 bytes.
#line 1 "ENTRY_10f70cd0"

void __fastcall FUN_10f70cd0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f70d00; body size 33 bytes.
#line 1 "ENTRY_10f70d00"

void __fastcall FUN_10f70d00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f71110; body size 37 bytes.
#line 1 "ENTRY_10f71110"

int * __fastcall FUN_10f71110(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10f713b0; body size 60 bytes.
#line 1 "ENTRY_10f713b0"

int __thiscall FUN_10f713b0(int param_1,byte param_2)

{
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


// Reference entry 10f717d0; body size 58 bytes.
#line 1 "ENTRY_10f717d0"

void __thiscall FUN_10f717d0(int param_1,char param_2)

{
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


// Reference entry 10f71980; body size 51 bytes.
#line 1 "ENTRY_10f71980"

void __thiscall FUN_10f71980(int param_1,undefined4 *param_2,ushort *param_3)

{
  param_3 = (ushort *)((ushort *)(uint)*param_3);
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,&param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10f71d20; body size 33 bytes.
#line 1 "ENTRY_10f71d20"

void __fastcall FUN_10f71d20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f71d50; body size 33 bytes.
#line 1 "ENTRY_10f71d50"

void __fastcall FUN_10f71d50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f734d0; body size 33 bytes.
#line 1 "ENTRY_10f734d0"

void __thiscall FUN_10f734d0(int param_1,int param_2)

{
  if ((int)(param_2) == *(int *)(param_1 + 0x90)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    thunk_FUN_10f73060();
  }
  return;
}


// Reference entry 10f74070; body size 26 bytes.
#line 1 "ENTRY_10f74070"

undefined4 __thiscall FUN_10f74070(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10f74150; body size 29 bytes.
#line 1 "ENTRY_10f74150"

void __thiscall FUN_10f74150(int param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 10f74de0; body size 52 bytes.
#line 1 "ENTRY_10f74de0"

void __fastcall FUN_10f74de0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacyBitmapLoadAsyncIOOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCLegacyBitmapLoadAsyncIOOperation);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCLegacyBitmapLoadAsyncIOOperation);
  param_1[0x302f] = (undefined4)((uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory);
  thunk_FUN_10f74a60();
  thunk_FUN_111fc270();
  return;
}


// Reference entry 10f756a0; body size 44 bytes.
#line 1 "ENTRY_10f756a0"

void __fastcall FUN_10f756a0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_10f75720();
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 8))(1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 10f756e0; body size 44 bytes.
#line 1 "ENTRY_10f756e0"

void __fastcall FUN_10f756e0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_10f75720();
    if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x10))(1);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


// Reference entry 10f76d30; body size 51 bytes.
#line 1 "ENTRY_10f76d30"

undefined4 * __thiscall FUN_10f76d30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_111a4bc0(0,"SCSwfObjACInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjACInternalListener);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10f76f60; body size 37 bytes.
#line 1 "ENTRY_10f76f60"

undefined4 __fastcall FUN_10f76f60(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_111a2bd0());
  (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(iVar1 != 0);
  return (undefined4)(0);
}


// Reference entry 10f782a0; body size 43 bytes.
#line 1 "ENTRY_10f782a0"

int __fastcall FUN_10f782a0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(SCThreadSafeInc((long *)(param_1 + 4)));
  if (iVar1 == 2) {
    thunk_FUN_1123fce0(*(int *)(param_1 + 8) + 4);
  }
  return (int)(iVar1);
}


// Reference entry 10f782e0; body size 58 bytes.
#line 1 "ENTRY_10f782e0"

void __fastcall FUN_10f782e0(int param_1)

{
  char *pcStack_14;
  int iStack_10;
  char *pcStack_c;
  
  pcStack_c = (char *)("Fire onItemChanged event.");
  iStack_10 = (int)(2);
  pcStack_14 = (char *)("SCAlarm");
  *(undefined1 *)(param_1 + 4) = 1;
  thunk_FUN_112af4e0();
  iStack_10 = (int)(param_1 + -0xc);
  pcStack_c = (char *)((char *)0x0);
  ((SCStr *)((SCStr *)&pcStack_14))->int_allocRep("SCIAlarm:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10f79110; body size 53 bytes.
#line 1 "ENTRY_10f79110"

SCStr * __thiscall FUN_10f79110(int param_1,SCStr *param_2)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    pcVar1 = (char *)((char *)thunk_FUN_11113190());
    ((SCStr *)(param_2))->int_allocRep(pcVar1);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10f79860; body size 50 bytes.
#line 1 "ENTRY_10f79860"

SCStr * __thiscall FUN_10f79860(int param_1,SCStr *param_2)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    pcVar1 = (char *)((char *)thunk_FUN_111123b0());
    ((SCStr *)(param_2))->int_allocRep(pcVar1);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep((char *)0x0);
  return (SCStr *)(param_2);
}


// Reference entry 10f79a70; body size 18 bytes.
#line 1 "ENTRY_10f79a70"

undefined4 __thiscall FUN_10f79a70(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x68))(param_2);
  return (undefined4)(0);
}


// Reference entry 10f79c00; body size 25 bytes.
#line 1 "ENTRY_10f79c00"

uint __fastcall FUN_10f79c00(int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return (uint)(in_EAX & 0xffffff00);
  }
  uVar1 = (undefined4)(thunk_FUN_111123c0());
  uVar2 = (uint)(thunk_FUN_110b9840(uVar1));
  return (uint)(uVar2);
}


// Reference entry 10f79c20; body size 38 bytes.
#line 1 "ENTRY_10f79c20"

bool __fastcall FUN_10f79c20(int param_1)

{
  char *_Str1;
  int iVar1;
  char *_Str2;
  size_t _MaxCount;
  
  if (*(int *)(param_1 + 8) != 0) {
    _MaxCount = (size_t)(7);
    _Str2 = (char *)("SHUFFLE");
    _Str1 = (char *)((char *)thunk_FUN_111123b0());
    iVar1 = (int)(strncmp(_Str1,_Str2,_MaxCount));
    return (bool)(iVar1 == 0);
  }
  return (bool)(false);
}


// Reference entry 10f79d40; body size 19 bytes.
#line 1 "ENTRY_10f79d40"

undefined2 __fastcall FUN_10f79d40(int param_1)

{
  undefined2 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = (undefined2)(thunk_FUN_11113cb0());
    return (undefined2)(uVar1);
  }
  return (undefined2)(0);
}


// Reference entry 10f7ad60; body size 19 bytes.
#line 1 "ENTRY_10f7ad60"

void __fastcall FUN_10f7ad60(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1111b230();
  return;
}


// Reference entry 10f7ada0; body size 53 bytes.
#line 1 "ENTRY_10f7ada0"

void __thiscall FUN_10f7ada0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2);
  if ((*(int *)(param_1 + 8) != 0) && (param_2 != 0)) {
    param_2 = (uint)(param_2 & 0xffff0000);
    thunk_FUN_1029e960(uVar1,&param_2);
    thunk_FUN_1111bc60(&param_2);
  }
  return;
}


// Reference entry 10f7adf0; body size 37 bytes.
#line 1 "ENTRY_10f7adf0"

void __fastcall FUN_10f7adf0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_1111b630();
    return;
  }
  return;
}


// Reference entry 10f7af60; body size 19 bytes.
#line 1 "ENTRY_10f7af60"

void __fastcall FUN_10f7af60(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1111c680();
  return;
}


// Reference entry 10f7b0c0; body size 43 bytes.
#line 1 "ENTRY_10f7b0c0"

void FUN_10f7b0c0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930(param_1);
    thunk_FUN_112af4e0("SCAlarm",3,"Remove Event Sink %p",param_1);
  }
  return;
}


// Reference entry 10f7b130; body size 44 bytes.
#line 1 "ENTRY_10f7b130"

undefined4 * __thiscall FUN_10f7b130(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_111a4bc0(0,"SCSwfObjDDInternalListener");
  param_1[6] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjDDInternalListener);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10f7b5a0; body size 32 bytes.
#line 1 "ENTRY_10f7b5a0"

void __fastcall FUN_10f7b5a0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar1 = (int)(thunk_FUN_1112be50());
    if (iVar1 != 0) {
      thunk_FUN_1112b9e0(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// Reference entry 10f7b5d0; body size 32 bytes.
#line 1 "ENTRY_10f7b5d0"

void __fastcall FUN_10f7b5d0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar1 = (int)(thunk_FUN_1112be50());
    if (iVar1 != 0) {
      thunk_FUN_1112c280(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


// Reference entry 10f7b600; body size 51 bytes.
#line 1 "ENTRY_10f7b600"

undefined4 * __thiscall FUN_10f7b600(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_111a4bc0(0,"SCSwfObjSPInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjSPInternalListener);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10f7b900; body size 56 bytes.
#line 1 "ENTRY_10f7b900"

void __fastcall FUN_10f7b900(int param_1)

{
  if ((*(char *)(param_1 + 0x14) == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_112af4e0("SCSwfObjSPListener",2,"Subscribe to SwfObjSP events");
      thunk_FUN_11162290(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// Reference entry 10f7b950; body size 56 bytes.
#line 1 "ENTRY_10f7b950"

void __fastcall FUN_10f7b950(int param_1)

{
  if ((*(char *)(param_1 + 0x14) != '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_112af4e0("SCSwfObjSPListener",2,"Unsubscribe from SwfObjSP events");
      thunk_FUN_11162620(param_1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


// Reference entry 10f7c290; body size 39 bytes.
#line 1 "ENTRY_10f7c290"

void FUN_10f7c290(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_8;
  undefined1 local_4;
  
  thunk_FUN_10f7bb60(&local_8,param_2);
  *param_1 = (undefined4)(local_8);
  *(undefined1 *)(param_1 + 1) = local_4;
  return;
}


// Reference entry 10f7c6c0; body size 48 bytes.
#line 1 "ENTRY_10f7c6c0"

undefined4 * __fastcall FUN_10f7c6c0(undefined4 *param_1)

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


// Reference entry 10f82a00; body size 33 bytes.
#line 1 "ENTRY_10f82a00"

void __fastcall FUN_10f82a00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f82ad0; body size 33 bytes.
#line 1 "ENTRY_10f82ad0"

void __fastcall FUN_10f82ad0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f82c80; body size 22 bytes.
#line 1 "ENTRY_10f82c80"

void FUN_10f82c80(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_112624a0();
  return;
}


// Reference entry 10f82ca0; body size 22 bytes.
#line 1 "ENTRY_10f82ca0"

void FUN_10f82ca0(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f110();
  return;
}


// Reference entry 10f82cc0; body size 22 bytes.
#line 1 "ENTRY_10f82cc0"

void FUN_10f82cc0(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f0a0();
  return;
}


// Reference entry 10f82cf0; body size 22 bytes.
#line 1 "ENTRY_10f82cf0"

void FUN_10f82cf0(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f160();
  return;
}


// Reference entry 10f82d20; body size 22 bytes.
#line 1 "ENTRY_10f82d20"

void FUN_10f82d20(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f0f0();
  return;
}


// Reference entry 10f82d40; body size 22 bytes.
#line 1 "ENTRY_10f82d40"

void FUN_10f82d40(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f1b0();
  return;
}


// Reference entry 10f82d60; body size 22 bytes.
#line 1 "ENTRY_10f82d60"

void FUN_10f82d60(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f200();
  return;
}


// Reference entry 10f82e10; body size 22 bytes.
#line 1 "ENTRY_10f82e10"

void __fastcall FUN_10f82e10(undefined4 *param_1)

{
  thunk_FUN_11203e10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTControl);
  return;
}


// Reference entry 10f82e40; body size 22 bytes.
#line 1 "ENTRY_10f82e40"

void __fastcall FUN_10f82e40(undefined4 *param_1)

{
  thunk_FUN_11203e10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServicesDirectory);
  return;
}


// Reference entry 10f82e90; body size 22 bytes.
#line 1 "ENTRY_10f82e90"

void FUN_10f82e90(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f250();
  return;
}


// Reference entry 10f82eb0; body size 22 bytes.
#line 1 "ENTRY_10f82eb0"

void FUN_10f82eb0(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f080();
  return;
}


// Reference entry 10f83140; body size 37 bytes.
#line 1 "ENTRY_10f83140"

int * __fastcall FUN_10f83140(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10f832d0; body size 22 bytes.
#line 1 "ENTRY_10f832d0"

void FUN_10f832d0(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_112624a0();
  return;
}


// Reference entry 10f832f0; body size 22 bytes.
#line 1 "ENTRY_10f832f0"

void FUN_10f832f0(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f110();
  return;
}


// Reference entry 10f83310; body size 22 bytes.
#line 1 "ENTRY_10f83310"

void FUN_10f83310(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f0a0();
  return;
}


// Reference entry 10f83340; body size 22 bytes.
#line 1 "ENTRY_10f83340"

void FUN_10f83340(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f160();
  return;
}


// Reference entry 10f83360; body size 22 bytes.
#line 1 "ENTRY_10f83360"

void FUN_10f83360(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f0f0();
  return;
}


// Reference entry 10f83380; body size 22 bytes.
#line 1 "ENTRY_10f83380"

void FUN_10f83380(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f1b0();
  return;
}


// Reference entry 10f833a0; body size 22 bytes.
#line 1 "ENTRY_10f833a0"

void FUN_10f833a0(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f200();
  return;
}


// Reference entry 10f833c0; body size 22 bytes.
#line 1 "ENTRY_10f833c0"

void __fastcall FUN_10f833c0(undefined4 *param_1)

{
  thunk_FUN_11203e10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTControl);
  return;
}


// Reference entry 10f833e0; body size 22 bytes.
#line 1 "ENTRY_10f833e0"

void __fastcall FUN_10f833e0(undefined4 *param_1)

{
  thunk_FUN_11203e10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServicesDirectory);
  return;
}


// Reference entry 10f83410; body size 22 bytes.
#line 1 "ENTRY_10f83410"

void FUN_10f83410(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f250();
  return;
}


// Reference entry 10f83430; body size 22 bytes.
#line 1 "ENTRY_10f83430"

void FUN_10f83430(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_1128f080();
  return;
}


// Reference entry 10f839d0; body size 33 bytes.
#line 1 "ENTRY_10f839d0"

void __fastcall FUN_10f839d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10f84040; body size 41 bytes.
#line 1 "ENTRY_10f84040"

void __fastcall FUN_10f84040(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x14) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10f86b30; body size 40 bytes.
#line 1 "ENTRY_10f86b30"

int __thiscall FUN_10f86b30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10f86b70(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10f87ac0; body size 39 bytes.
#line 1 "ENTRY_10f87ac0"

undefined4 * __fastcall FUN_10f87ac0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f887f0; body size 44 bytes.
#line 1 "ENTRY_10f887f0"

void __fastcall FUN_10f887f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_10f87140(*param_1,param_1[1] + 8);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x24);
  }
  return;
}


// Reference entry 10f8c8e0; body size 47 bytes.
#line 1 "ENTRY_10f8c8e0"

void __fastcall FUN_10f8c8e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1c));
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
  if ((undefined4 *)(puVar2) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)(*(int *)*puVar2 + 0x18))();
      puVar2 = (undefined4 *)(puVar2 + 1);
    } while ((undefined4 *)(puVar2) != (undefined4 *)(puVar1));
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    return;
  }
  *(undefined4 **)(param_1 + 0x20) = puVar2;
  return;
}


// Reference entry 10f8ed40; body size 44 bytes.
#line 1 "ENTRY_10f8ed40"

void __thiscall FUN_10f8ed40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1c));
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
  if ((undefined4 *)(puVar2) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)(*(int *)*puVar2 + 4))(param_1 + 8,param_2);
      puVar2 = (undefined4 *)(puVar2 + 1);
    } while ((undefined4 *)(puVar2) != (undefined4 *)(puVar1));
  }
  return;
}


// Reference entry 10f8ed80; body size 21 bytes.
#line 1 "ENTRY_10f8ed80"

undefined4 __thiscall FUN_10f8ed80(int param_1,char *param_2,uint param_3)

{
  ((SCStr *)((SCStr *)(param_1 + 0x14)))->append(param_2,param_3);
  return (undefined4)(1);
}


// Reference entry 10f8f7d0; body size 37 bytes.
#line 1 "ENTRY_10f8f7d0"

void __thiscall FUN_10f8f7d0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 0x20))());
  }
  if (param_2 == iVar1) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10f8fa20; body size 33 bytes.
#line 1 "ENTRY_10f8fa20"

void __fastcall FUN_10f8fa20(int param_1)

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


// Reference entry 10f8fa50; body size 37 bytes.
#line 1 "ENTRY_10f8fa50"

void __fastcall FUN_10f8fa50(int param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x74) = 1;
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10f8fa80; body size 33 bytes.
#line 1 "ENTRY_10f8fa80"

void __fastcall FUN_10f8fa80(int param_1)

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


// Reference entry 10f8fab0; body size 42 bytes.
#line 1 "ENTRY_10f8fab0"

undefined4 * __fastcall FUN_10f8fab0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCUsageDataCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f8faf0; body size 42 bytes.
#line 1 "ENTRY_10f8faf0"

undefined4 * __fastcall FUN_10f8faf0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCUsageDataInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f8fcb0; body size 45 bytes.
#line 1 "ENTRY_10f8fcb0"

undefined4 * __fastcall FUN_10f8fcb0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCUsageDataCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f8fec0; body size 45 bytes.
#line 1 "ENTRY_10f8fec0"

undefined4 * __fastcall FUN_10f8fec0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCUsageDataOptInState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f90020; body size 31 bytes.
#line 1 "ENTRY_10f90020"

undefined1 __thiscall FUN_10f90020(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    uVar1 = (undefined1)((**(code **)(**(int **)(param_1 + 8) + 0x1d4))());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 10f912e0; body size 33 bytes.
#line 1 "ENTRY_10f912e0"

void __thiscall FUN_10f912e0(int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1d0))(param_3 != 0);
  }
  return;
}


// Reference entry 10f91cd0; body size 56 bytes.
#line 1 "ENTRY_10f91cd0"

void __fastcall FUN_10f91cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonarWizard);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSonarWizard);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSonarWizard);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCSonarWizard);
  param_1[0x13] = (undefined4)((uint)&ghidra_vftable_SCSonarWizard);
  thunk_FUN_101a2bf0();
  thunk_FUN_10dd1440();
  return;
}


// Reference entry 10f924f0; body size 37 bytes.
#line 1 "ENTRY_10f924f0"

void __thiscall FUN_10f924f0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x1c) + 0x20))());
  }
  if (param_2 == iVar1) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10f925a0; body size 33 bytes.
#line 1 "ENTRY_10f925a0"

void __fastcall FUN_10f925a0(int param_1)

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


// Reference entry 10f92ab0; body size 42 bytes.
#line 1 "ENTRY_10f92ab0"

undefined4 * __fastcall FUN_10f92ab0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonarCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f92af0; body size 42 bytes.
#line 1 "ENTRY_10f92af0"

undefined4 * __fastcall FUN_10f92af0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCSonarInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f92b30; body size 45 bytes.
#line 1 "ENTRY_10f92b30"

undefined4 * __fastcall FUN_10f92b30(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSonarCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f92cf0; body size 45 bytes.
#line 1 "ENTRY_10f92cf0"

undefined4 * __fastcall FUN_10f92cf0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSonarCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f92d40; body size 45 bytes.
#line 1 "ENTRY_10f92d40"

undefined4 * __fastcall FUN_10f92d40(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSonarCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f92d80; body size 59 bytes.
#line 1 "ENTRY_10f92d80"

undefined4 * __fastcall FUN_10f92d80(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0x14));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSonarIntroState);
    puVar2[3] = (undefined4)(0);
    puVar2[4] = (undefined4)(0);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f977c0; body size 41 bytes.
#line 1 "ENTRY_10f977c0"

void __fastcall FUN_10f977c0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x1c) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10f97800; body size 42 bytes.
#line 1 "ENTRY_10f97800"

undefined4 * __fastcall FUN_10f97800(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f97840; body size 42 bytes.
#line 1 "ENTRY_10f97840"

undefined4 * __fastcall FUN_10f97840(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f97890; body size 45 bytes.
#line 1 "ENTRY_10f97890"

undefined4 * __fastcall FUN_10f97890(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f978d0; body size 45 bytes.
#line 1 "ENTRY_10f978d0"

undefined4 * __fastcall FUN_10f978d0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f97910; body size 45 bytes.
#line 1 "ENTRY_10f97910"

undefined4 * __fastcall FUN_10f97910(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizIntroState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f98e90; body size 16 bytes.
#line 1 "ENTRY_10f98e90"

uint __fastcall FUN_10f98e90(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x14))());
  if (iVar1 - 2U != 0) {
    return (uint)(iVar1 - 2U & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 10f99360; body size 28 bytes.
#line 1 "ENTRY_10f99360"

void FUN_10f99360(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_10dd5d50();
    return;
  }
  thunk_FUN_10dd4b80();
  return;
}


// Reference entry 10f99b60; body size 49 bytes.
#line 1 "ENTRY_10f99b60"

int __thiscall FUN_10f99b60(int *param_1,uint *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f99ba0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10f9a6f0; body size 48 bytes.
#line 1 "ENTRY_10f9a6f0"

undefined4 * __fastcall FUN_10f9a6f0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a730; body size 48 bytes.
#line 1 "ENTRY_10f9a730"

undefined4 * __fastcall FUN_10f9a730(undefined4 *param_1)

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


// Reference entry 10f9dbf0; body size 37 bytes.
#line 1 "ENTRY_10f9dbf0"

undefined1 __fastcall FUN_10f9dbf0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10f9dc40; body size 37 bytes.
#line 1 "ENTRY_10f9dc40"

undefined1 __fastcall FUN_10f9dc40(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10f9def0; body size 42 bytes.
#line 1 "ENTRY_10f9def0"

undefined4 * __fastcall FUN_10f9def0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f9df30; body size 42 bytes.
#line 1 "ENTRY_10f9df30"

undefined4 * __fastcall FUN_10f9df30(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f9df70; body size 45 bytes.
#line 1 "ENTRY_10f9df70"

undefined4 * __fastcall FUN_10f9df70(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f9e070; body size 49 bytes.
#line 1 "ENTRY_10f9e070"

undefined4 * __fastcall FUN_10f9e070(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardIntroState);
    *(undefined1 *)(puVar2 + 3) = 0;
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f9e360; body size 45 bytes.
#line 1 "ENTRY_10f9e360"

undefined4 * __fastcall FUN_10f9e360(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fa01c0; body size 34 bytes.
#line 1 "ENTRY_10fa01c0"

undefined4 __fastcall FUN_10fa01c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fa0410; body size 30 bytes.
#line 1 "ENTRY_10fa0410"

undefined4 __fastcall FUN_10fa0410(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fa0450; body size 26 bytes.
#line 1 "ENTRY_10fa0450"

undefined4 __thiscall FUN_10fa0450(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fa04b0; body size 23 bytes.
#line 1 "ENTRY_10fa04b0"

undefined4 __thiscall FUN_10fa04b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fa3450; body size 24 bytes.
#line 1 "ENTRY_10fa3450"

undefined4 __fastcall FUN_10fa3450(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fa34a0; body size 39 bytes.
#line 1 "ENTRY_10fa34a0"

undefined4 __fastcall FUN_10fa34a0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fa34d0; body size 63 bytes.
#line 1 "ENTRY_10fa34d0"

undefined1 FUN_10fa34d0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10fa3670; body size 61 bytes.
#line 1 "ENTRY_10fa3670"

void __fastcall FUN_10fa3670(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10fa0090();
        return;
      }
    }
  }
  return;
}


// Reference entry 10fa3e60; body size 27 bytes.
#line 1 "ENTRY_10fa3e60"

void __fastcall FUN_10fa3e60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(60000));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  thunk_FUN_10fa4480();
  return;
}


// Reference entry 10fa5c20; body size 37 bytes.
#line 1 "ENTRY_10fa5c20"

undefined1 __fastcall FUN_10fa5c20(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10fa5c50; body size 37 bytes.
#line 1 "ENTRY_10fa5c50"

undefined1 __fastcall FUN_10fa5c50(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10fa5cc0; body size 33 bytes.
#line 1 "ENTRY_10fa5cc0"

void __fastcall FUN_10fa5cc0(int param_1)

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


// Reference entry 10fa5d10; body size 42 bytes.
#line 1 "ENTRY_10fa5d10"

undefined4 * __fastcall FUN_10fa5d10(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleLauncherWizardCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fa5d50; body size 42 bytes.
#line 1 "ENTRY_10fa5d50"

undefined4 * __fastcall FUN_10fa5d50(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleLauncherWizardInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fa6870; body size 45 bytes.
#line 1 "ENTRY_10fa6870"

undefined4 * __fastcall FUN_10fa6870(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLifecycleLauncherWizardCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fa68b0; body size 45 bytes.
#line 1 "ENTRY_10fa68b0"

undefined4 * __fastcall FUN_10fa68b0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLifecycleLauncherWizardCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fa7690; body size 34 bytes.
#line 1 "ENTRY_10fa7690"

undefined4 __fastcall FUN_10fa7690(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fa7840; body size 30 bytes.
#line 1 "ENTRY_10fa7840"

undefined4 __fastcall FUN_10fa7840(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fa7880; body size 26 bytes.
#line 1 "ENTRY_10fa7880"

undefined4 __thiscall FUN_10fa7880(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fa7ba0; body size 23 bytes.
#line 1 "ENTRY_10fa7ba0"

undefined4 __thiscall FUN_10fa7ba0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fa9a40; body size 24 bytes.
#line 1 "ENTRY_10fa9a40"

undefined4 __fastcall FUN_10fa9a40(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fa9a90; body size 39 bytes.
#line 1 "ENTRY_10fa9a90"

undefined4 __fastcall FUN_10fa9a90(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fa9ac0; body size 63 bytes.
#line 1 "ENTRY_10fa9ac0"

undefined1 FUN_10fa9ac0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10fa9dc0; body size 61 bytes.
#line 1 "ENTRY_10fa9dc0"

void __fastcall FUN_10fa9dc0(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10fa7300();
        return;
      }
    }
  }
  return;
}


// Reference entry 10fab430; body size 40 bytes.
#line 1 "ENTRY_10fab430"

int __thiscall FUN_10fab430(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10fab530(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
  }
  return (int)(iVar1);
}


// Reference entry 10fab470; body size 40 bytes.
#line 1 "ENTRY_10fab470"

int __thiscall FUN_10fab470(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10fab5b0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
  }
  return (int)(iVar1);
}


// Reference entry 10fab4b0; body size 40 bytes.
#line 1 "ENTRY_10fab4b0"

int __thiscall FUN_10fab4b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10fab630(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
  }
  return (int)(iVar1);
}


// Reference entry 10fab4f0; body size 40 bytes.
#line 1 "ENTRY_10fab4f0"

int __thiscall FUN_10fab4f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10fab6b0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
  }
  return (int)(iVar1);
}


// Reference entry 10fae4c0; body size 39 bytes.
#line 1 "ENTRY_10fae4c0"

undefined4 * __fastcall FUN_10fae4c0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae4f0; body size 39 bytes.
#line 1 "ENTRY_10fae4f0"

undefined4 * __fastcall FUN_10fae4f0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae520; body size 39 bytes.
#line 1 "ENTRY_10fae520"

undefined4 * __fastcall FUN_10fae520(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fafca0; body size 38 bytes.
#line 1 "ENTRY_10fafca0"

void __fastcall FUN_10fafca0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10fb01d0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x20);
  }
  return;
}


// Reference entry 10fb1100; body size 27 bytes.
#line 1 "ENTRY_10fb1100"

int FUN_10fb1100(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10fabd40(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10fb1130; body size 27 bytes.
#line 1 "ENTRY_10fb1130"

int FUN_10fb1130(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10fabfe0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10fb1160; body size 27 bytes.
#line 1 "ENTRY_10fb1160"

int FUN_10fb1160(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10fac280(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10fb1190; body size 27 bytes.
#line 1 "ENTRY_10fb1190"

int FUN_10fb1190(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10fac550(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10fb11c0; body size 27 bytes.
#line 1 "ENTRY_10fb11c0"

int FUN_10fb11c0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10fac7f0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10fb1730; body size 35 bytes.
#line 1 "ENTRY_10fb1730"

undefined4 __thiscall FUN_10fb1730(undefined4 param_1,byte param_2)

{
  thunk_FUN_10fb01d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4)(param_1);
}


// Reference entry 10fb6aa0; body size 21 bytes.
#line 1 "ENTRY_10fb6aa0"

void __fastcall FUN_10fb6aa0(int param_1)

{
  thunk_FUN_1059d800();
                    
                    
  (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  return;
}


// Reference entry 10fb6ef0; body size 32 bytes.
#line 1 "ENTRY_10fb6ef0"

void __fastcall FUN_10fb6ef0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x1c))());
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
      return;
    }
  }
  return;
}


// Reference entry 10fb74d0; body size 49 bytes.
#line 1 "ENTRY_10fb74d0"

undefined4 * __fastcall FUN_10fb74d0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestInitState);
    puVar1[3] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fb8f00; body size 48 bytes.
#line 1 "ENTRY_10fb8f00"

SCStr * FUN_10fb8f00(SCStr *param_1,int param_2)

{
  if (param_2 != 0) {
    ((SCStr *)(param_1))->int_allocRep("invalid");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("default");
  return (SCStr *)(param_1);
}


// Reference entry 10fb94a0; body size 45 bytes.
#line 1 "ENTRY_10fb94a0"

int * __thiscall FUN_10fb94a0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 != 1) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xc));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10fbfe40; body size 18 bytes.
#line 1 "ENTRY_10fbfe40"

void FUN_10fbfe40(int param_1)

{
  if (param_1 == 2) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10fc0bc0; body size 49 bytes.
#line 1 "ENTRY_10fc0bc0"

int __thiscall FUN_10fc0bc0(int *param_1,uint *param_2)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10fc0c00(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10fc12c0; body size 48 bytes.
#line 1 "ENTRY_10fc12c0"

undefined4 * __fastcall FUN_10fc12c0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc3d60; body size 37 bytes.
#line 1 "ENTRY_10fc3d60"

undefined1 __fastcall FUN_10fc3d60(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10fc3db0; body size 37 bytes.
#line 1 "ENTRY_10fc3db0"

undefined1 __fastcall FUN_10fc3db0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10fc4020; body size 42 bytes.
#line 1 "ENTRY_10fc4020"

undefined4 * __fastcall FUN_10fc4020(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fc4060; body size 42 bytes.
#line 1 "ENTRY_10fc4060"

undefined4 * __fastcall FUN_10fc4060(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fc4340; body size 49 bytes.
#line 1 "ENTRY_10fc4340"

undefined4 * __fastcall FUN_10fc4340(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0x10));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardIntroState);
    *(undefined1 *)(puVar2 + 3) = 0;
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fc4660; body size 45 bytes.
#line 1 "ENTRY_10fc4660"

undefined4 * __fastcall FUN_10fc4660(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc));
  if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fc5b40; body size 34 bytes.
#line 1 "ENTRY_10fc5b40"

undefined4 __fastcall FUN_10fc5b40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))());
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fc5dc0; body size 30 bytes.
#line 1 "ENTRY_10fc5dc0"

undefined4 __fastcall FUN_10fc5dc0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fc5e00; body size 26 bytes.
#line 1 "ENTRY_10fc5e00"

undefined4 __thiscall FUN_10fc5e00(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fc5e60; body size 23 bytes.
#line 1 "ENTRY_10fc5e60"

undefined4 __thiscall FUN_10fc5e60(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fc9370; body size 24 bytes.
#line 1 "ENTRY_10fc9370"

undefined4 __fastcall FUN_10fc9370(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fc93c0; body size 39 bytes.
#line 1 "ENTRY_10fc93c0"

undefined4 __fastcall FUN_10fc93c0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))());
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fc93f0; body size 63 bytes.
#line 1 "ENTRY_10fc93f0"

undefined1 FUN_10fc93f0(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"));
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10fc9570; body size 61 bytes.
#line 1 "ENTRY_10fc9570"

void __fastcall FUN_10fc9570(int *param_1)

{
  char cVar1;
  
  if ((int *)(int *)(param_1[3]) != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))());
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))());
      if (cVar1 == '\0') {
        thunk_FUN_10fc5a10();
        return;
      }
    }
  }
  return;
}


// Reference entry 10fc9ce0; body size 27 bytes.
#line 1 "ENTRY_10fc9ce0"

void __fastcall FUN_10fc9ce0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(60000));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  thunk_FUN_10fca310();
  return;
}


// Reference entry 10fcbac0; body size 18 bytes.
#line 1 "ENTRY_10fcbac0"

void __fastcall FUN_10fcbac0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xcc))());
  thunk_FUN_114577b0(uVar1);
  return;
}


// Reference entry 10fccee0; body size 33 bytes.
#line 1 "ENTRY_10fccee0"

undefined4 * __thiscall FUN_10fccee0(undefined4 *param_1,undefined4 param_2)

{
  thunk_FUN_11164710();
  param_1[5] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjIndexListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10fcd4b0; body size 63 bytes.
#line 1 "ENTRY_10fcd4b0"

int * __thiscall FUN_10fcd4b0(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x80) + param_3 * 8));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10fcdd50; body size 59 bytes.
#line 1 "ENTRY_10fcdd50"

void __thiscall FUN_10fcdd50(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10fcd830(puVar1,param_2);
  return;
}


// Reference entry 10fce530; body size 37 bytes.
#line 1 "ENTRY_10fce530"

void __fastcall FUN_10fce530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLoadingBrowseDatasource);
  thunk_FUN_10fce4b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10fce700; body size 59 bytes.
#line 1 "ENTRY_10fce700"

undefined4 * __thiscall FUN_10fce700(undefined4 *param_1,byte param_2)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLoadingBrowseDatasource);
  thunk_FUN_10fce4b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10fcec60; body size 60 bytes.
#line 1 "ENTRY_10fcec60"

void FUN_10fcec60(int param_1,int param_2)

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


// Reference entry 10fced10; body size 32 bytes.
#line 1 "ENTRY_10fced10"

SCStr * FUN_10fced10(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4 *)(param_1 + 4) = DAT_121a07b4;
  return (SCStr *)(param_1);
}


// Reference entry 10fced40; body size 32 bytes.
#line 1 "ENTRY_10fced40"

SCStr * FUN_10fced40(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4 *)(param_1 + 4) = DAT_121a07b4;
  return (SCStr *)(param_1);
}


// Reference entry 10fcee40; body size 19 bytes.
#line 1 "ENTRY_10fcee40"

undefined4 FUN_10fcee40(undefined4 param_1)

{
  createPropertyBag();
  return (undefined4)(param_1);
}


// Reference entry 10fcee60; body size 19 bytes.
#line 1 "ENTRY_10fcee60"

undefined4 FUN_10fcee60(undefined4 param_1)

{
  createPropertyBag();
  return (undefined4)(param_1);
}


// Reference entry 10fcf010; body size 32 bytes.
#line 1 "ENTRY_10fcf010"

SCStr * FUN_10fcf010(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4 *)(param_1 + 4) = DAT_121a07b4;
  return (SCStr *)(param_1);
}


// Reference entry 10fcf040; body size 32 bytes.
#line 1 "ENTRY_10fcf040"

SCStr * FUN_10fcf040(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4 *)(param_1 + 4) = DAT_121a07b4;
  return (SCStr *)(param_1);
}


// Reference entry 10fcf0d0; body size 19 bytes.
#line 1 "ENTRY_10fcf0d0"

undefined4 FUN_10fcf0d0(undefined4 param_1)

{
  createPropertyBag();
  return (undefined4)(param_1);
}


// Reference entry 10fcf1f0; body size 32 bytes.
#line 1 "ENTRY_10fcf1f0"

SCStr * FUN_10fcf1f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4 *)(param_1 + 4) = DAT_121a07b4;
  return (SCStr *)(param_1);
}


// Reference entry 10fcf220; body size 32 bytes.
#line 1 "ENTRY_10fcf220"

SCStr * FUN_10fcf220(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4 *)(param_1 + 4) = DAT_121a07b4;
  return (SCStr *)(param_1);
}


// Reference entry 10fcf250; body size 19 bytes.
#line 1 "ENTRY_10fcf250"

undefined4 FUN_10fcf250(undefined4 param_1)

{
  createSCStringArray();
  return (undefined4)(param_1);
}


// Reference entry 10fcf420; body size 59 bytes.
#line 1 "ENTRY_10fcf420"

void __thiscall FUN_10fcf420(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10fcd830(puVar1,param_2);
  return;
}


// Reference entry 10fdd050; body size 40 bytes.
#line 1 "ENTRY_10fdd050"

undefined4 * __thiscall FUN_10fdd050(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x10));
  if (param_1 == 0x90) {
    piVar1 = (int *)((int *)0x0);
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10fdd090; body size 40 bytes.
#line 1 "ENTRY_10fdd090"

undefined4 * __thiscall FUN_10fdd090(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x10));
  if (param_1 == 0x90) {
    piVar1 = (int *)((int *)0x0);
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10fdd0d0; body size 40 bytes.
#line 1 "ENTRY_10fdd0d0"

undefined4 * __thiscall FUN_10fdd0d0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x10));
  if (param_1 == 0x90) {
    piVar1 = (int *)((int *)0x0);
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10fdd110; body size 40 bytes.
#line 1 "ENTRY_10fdd110"

undefined4 * __thiscall FUN_10fdd110(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x10));
  if (param_1 == 0x90) {
    piVar1 = (int *)((int *)0x0);
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10fdd150; body size 40 bytes.
#line 1 "ENTRY_10fdd150"

undefined4 * __thiscall FUN_10fdd150(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x10));
  if (param_1 == 0x90) {
    piVar1 = (int *)((int *)0x0);
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10fdd190; body size 40 bytes.
#line 1 "ENTRY_10fdd190"

undefined4 * __thiscall FUN_10fdd190(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(param_1 + 0x10));
  if (param_1 == 0x90) {
    piVar1 = (int *)((int *)0x0);
  }
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10fdd210; body size 53 bytes.
#line 1 "ENTRY_10fdd210"

SCStr * __thiscall FUN_10fdd210(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd260; body size 53 bytes.
#line 1 "ENTRY_10fdd260"

SCStr * __thiscall FUN_10fdd260(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd2d0; body size 53 bytes.
#line 1 "ENTRY_10fdd2d0"

SCStr * __thiscall FUN_10fdd2d0(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd320; body size 53 bytes.
#line 1 "ENTRY_10fdd320"

SCStr * __thiscall FUN_10fdd320(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd390; body size 53 bytes.
#line 1 "ENTRY_10fdd390"

SCStr * __thiscall FUN_10fdd390(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd490; body size 53 bytes.
#line 1 "ENTRY_10fdd490"

SCStr * __thiscall FUN_10fdd490(int param_1,SCStr *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd8d0; body size 60 bytes.
#line 1 "ENTRY_10fdd8d0"

void __fastcall FUN_10fdd8d0(int param_1)

{
  undefined1 uVar1;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0x10fdd8de);
  uVar1 = (undefined1)((**(code **)(**(int **)(param_1 + -0xc) + 0x48))());
  uStack_c = (undefined4)(0);
  *(undefined1 *)(*(int *)(param_1 + 0xb8) + 0x10) = uVar1;
  if (param_1 == 0x18) {
    param_1 = (int)(0);
  }
  uStack_14 = (undefined4)(0);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&uStack_14))->int_allocRep("SCIBrowseItem:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10fddaa0; body size 63 bytes.
#line 1 "ENTRY_10fddaa0"

void __fastcall FUN_10fddaa0(int param_1)

{
  undefined1 uVar1;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0x10fddab1);
  uVar1 = (undefined1)((**(code **)(**(int **)(param_1 + -0xc) + 0x90))());
  uStack_c = (undefined4)(0);
  *(undefined1 *)(*(int *)(param_1 + 0xb8) + 0x10) = uVar1;
  if (param_1 == 0x18) {
    param_1 = (int)(0);
  }
  uStack_14 = (undefined4)(0);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&uStack_14))->int_allocRep("SCIBrowseItem:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10fddea0; body size 41 bytes.
#line 1 "ENTRY_10fddea0"

void __fastcall FUN_10fddea0(int param_1)

{
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  if (param_1 == 0x18) {
    param_1 = (int)(0);
  }
  uStack_14 = (undefined4)(0);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&uStack_14))->int_allocRep("SCIBrowseItem:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10fde830; body size 45 bytes.
#line 1 "ENTRY_10fde830"

void __thiscall FUN_10fde830(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x84))(param_2);
  *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x10) = param_2;
  (**(code **)(*(int *)(param_1 + 0x18) + 0xe4))();
  return;
}


// Reference entry 10fe0020; body size 59 bytes.
#line 1 "ENTRY_10fe0020"

void __thiscall FUN_10fe0020(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10fdea70(puVar1,param_2);
  return;
}


// Reference entry 10fe0720; body size 60 bytes.
#line 1 "ENTRY_10fe0720"

void __fastcall FUN_10fe0720(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_10fde940(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_10fe0880();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10fe1610; body size 60 bytes.
#line 1 "ENTRY_10fe1610"

void FUN_10fe1610(int param_1,int param_2)

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


// Reference entry 10fe3320; body size 33 bytes.
#line 1 "ENTRY_10fe3320"

void __fastcall FUN_10fe3320(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xac) == '\0') {
    uVar1 = (undefined4)(thunk_FUN_1059d5a0(300000));
    *(undefined4 *)(param_1 + 0xa8) = uVar1;
  }
  return;
}


// Reference entry 10fe3350; body size 43 bytes.
#line 1 "ENTRY_10fe3350"

void __fastcall FUN_10fe3350(int param_1)

{
  if ((*(char *)(param_1 + 0xac) == '\0') && (*(int *)(param_1 + 0xa8) != 0)) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xa8));
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}


// Reference entry 10fe34f0; body size 39 bytes.
#line 1 "ENTRY_10fe34f0"

void __fastcall FUN_10fe34f0(int param_1)

{
  undefined4 uStack00000004;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    *(undefined4 *)(param_1 + 0x84) = 0;
    uStack00000004 = (undefined4)(1);
                    
                    
    (**(code **)(*(int *)(param_1 + -0x24) + 0x2c))();
    return;
  }
  return;
}


// Reference entry 10fe3520; body size 59 bytes.
#line 1 "ENTRY_10fe3520"

void __thiscall FUN_10fe3520(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10fdea70(puVar1,param_2);
  return;
}


// Reference entry 10fe3720; body size 52 bytes.
#line 1 "ENTRY_10fe3720"

void __thiscall FUN_10fe3720(int param_1,uint param_2)

{
  void *_Src;
  void *_Dst;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
    _Dst = (void *)((void *)(*(int *)(param_1 + 8) + param_2 * 4));
    _Src = (void *)((void *)((int)_Dst + 4));
    memmove(_Dst,_Src,*(int *)(param_1 + 0xc) - (int)_Src);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -4;
  }
  return;
}


// Reference entry 10fe6d40; body size 58 bytes.
#line 1 "ENTRY_10fe6d40"

undefined4 __fastcall FUN_10fe6d40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    return (undefined4)(0);
  }
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  if (-1 < iVar1) {
    iVar2 = (int)(*(int *)(param_1 + 8));
    iVar3 = (int)(iVar2 + 1);
    if (iVar2 <= iVar1) {
      iVar3 = (int)(iVar2);
    }
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(iVar1,iVar3);
    return (undefined4)(0);
  }
  return (undefined4)(0);
}


// Reference entry 10fe84e0; body size 27 bytes.
#line 1 "ENTRY_10fe84e0"

undefined4 __fastcall FUN_10fe84e0(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    thunk_FUN_10d4d500(*(int *)(param_1 + 0x1c));
  }
  return (undefined4)(0);
}


// Reference entry 10fe8510; body size 17 bytes.
#line 1 "ENTRY_10fe8510"

undefined4 __fastcall FUN_10fe8510(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_10d4d580();
  }
  return (undefined4)(0);
}


// Reference entry 10fe8530; body size 22 bytes.
#line 1 "ENTRY_10fe8530"

undefined4 __fastcall FUN_10fe8530(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_10d50930(*(undefined4 *)(param_1 + 8));
  }
  return (undefined4)(0);
}


// Reference entry 10fe9cb0; body size 57 bytes.
#line 1 "ENTRY_10fe9cb0"

void FUN_10fe9cb0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10fe9cb0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10febc00; body size 59 bytes.
#line 1 "ENTRY_10febc00"

void __thiscall FUN_10febc00(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10fe96d0(puVar1,param_2);
  return;
}


// Reference entry 10febc50; body size 59 bytes.
#line 1 "ENTRY_10febc50"

void __thiscall FUN_10febc50(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10fe9990(puVar1,param_2);
  return;
}


// Reference entry 10fec290; body size 48 bytes.
#line 1 "ENTRY_10fec290"

undefined4 * __fastcall FUN_10fec290(undefined4 *param_1)

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


// Reference entry 10fef110; body size 19 bytes.
#line 1 "ENTRY_10fef110"

void __thiscall FUN_10fef110(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef130; body size 19 bytes.
#line 1 "ENTRY_10fef130"

void __thiscall FUN_10fef130(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef150; body size 19 bytes.
#line 1 "ENTRY_10fef150"

void __thiscall FUN_10fef150(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef170; body size 19 bytes.
#line 1 "ENTRY_10fef170"

void __thiscall FUN_10fef170(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef250; body size 31 bytes.
#line 1 "ENTRY_10fef250"

void FUN_10fef250(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_10ff3f10();
  }
  return;
}


// Reference entry 10fef280; body size 31 bytes.
#line 1 "ENTRY_10fef280"

void FUN_10fef280(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_10ff4670();
  }
  return;
}


// Reference entry 10fef730; body size 19 bytes.
#line 1 "ENTRY_10fef730"

void __thiscall FUN_10fef730(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef750; body size 19 bytes.
#line 1 "ENTRY_10fef750"

void __thiscall FUN_10fef750(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef770; body size 19 bytes.
#line 1 "ENTRY_10fef770"

void __thiscall FUN_10fef770(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef790; body size 19 bytes.
#line 1 "ENTRY_10fef790"

void __thiscall FUN_10fef790(int param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ff0d00; body size 60 bytes.
#line 1 "ENTRY_10ff0d00"

void FUN_10ff0d00(int param_1,int param_2)

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

void FUN_10ff0d50(int param_1,int param_2)

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

void __thiscall FUN_10ff0dc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(param_3,param_2);
  }
  return;
}


// Reference entry 10ff15e0; body size 52 bytes.
#line 1 "ENTRY_10ff15e0"

SCStr * __thiscall FUN_10ff15e0(int param_1,SCStr *param_2,int param_3,undefined4 param_4)

{
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
  for (pbVar2 = (byte *)((byte *)(param_1 + 0x128)); (byte *)(pbVar2) != (byte *)(param_1 + 0x138); pbVar2 = pbVar2 + 1)
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

undefined4 FUN_10ff1ce0(int param_1)

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

undefined4 FUN_10ff1d00(int param_1)

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

SCStr * __thiscall FUN_10ff20b0(int param_1,SCStr *param_2)

{
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x24))(param_2,0);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ff2b20; body size 46 bytes.
#line 1 "ENTRY_10ff2b20"

SCStr * __thiscall FUN_10ff2b20(int param_1,SCStr *param_2)

{
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
  if ((int *)(piVar2) != (int *)0x0) {
    cVar1 = (char)((**(code **)(*piVar2 + 0x3c))());
    if (cVar1 != '\0') {
      cVar1 = (char)('\x01');
      goto LAB_10ff820f;
    }
  }
  cVar1 = (char)('\0');
LAB_10ff820f:
  if (*(char *)(param_1 + 0x88) != (char)(cVar1)) {
    *(char *)(param_1 + 0x88) = cVar1;
    thunk_FUN_10ff3290();
  }
  return;
}


// Reference entry 10ff8430; body size 59 bytes.
#line 1 "ENTRY_10ff8430"

void __thiscall FUN_10ff8430(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10fe96d0(puVar1,param_2);
  return;
}


// Reference entry 10ff8480; body size 59 bytes.
#line 1 "ENTRY_10ff8480"

void __thiscall FUN_10ff8480(int param_1,undefined4 *param_2)

{
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
  thunk_FUN_10fe9990(puVar1,param_2);
  return;
}


// Reference entry 10ff8cb0; body size 48 bytes.
#line 1 "ENTRY_10ff8cb0"

void __thiscall FUN_10ff8cb0(int param_1,undefined4 param_2)

{
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

void __thiscall FUN_10ff8cf0(int param_1,undefined4 param_2)

{
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

undefined4 * __thiscall FUN_10ffb2b0(undefined4 *param_1,byte param_2)

{
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


// Reference entry 10ffb490; body size 46 bytes.
#line 1 "ENTRY_10ffb490"

void __fastcall FUN_10ffb490(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_10d5e270();
      iVar2 = (int)(iVar2 + 0x20);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 10ffb670; body size 30 bytes.
#line 1 "ENTRY_10ffb670"

void __thiscall FUN_10ffb670(int param_1,undefined4 *param_2)

{
  if ((undefined4 *)(param_2) != (undefined4 *)(param_1 + 8)) {
    thunk_FUN_10ff8fb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2);
  }
  return;
}


// Reference entry 10ffbc50; body size 59 bytes.
#line 1 "ENTRY_10ffbc50"

void __fastcall FUN_10ffbc50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x24))();
  iVar1 = (int)(param_1[3]);
  iVar2 = (int)(param_1[2]);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_10d5e270();
      iVar2 = (int)(iVar2 + 0x20);
    } while (iVar2 != iVar1);
    param_1[3] = (int)(param_1[2]);
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
  param_1[3] = (int)(iVar2);
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}


// Reference entry 10ffc070; body size 54 bytes.
#line 1 "ENTRY_10ffc070"

void __thiscall FUN_10ffc070(int param_1,undefined4 param_2,undefined4 param_3)

{
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

SCStr * __thiscall FUN_10ffcdc0(int param_1,SCStr *param_2)

{
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ffce10; body size 46 bytes.
#line 1 "ENTRY_10ffce10"

SCStr * __thiscall FUN_10ffce10(int param_1,SCStr *param_2)

{
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

void __thiscall FUN_10ffd210(int param_1,int param_2)

{
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

void __thiscall FUN_10ffd290(int param_1,int param_2)

{
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


  if ((int *)*(int *)(param_1) != (int *)0x0) {
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

undefined4 * __thiscall FUN_10fffbb0(undefined4 *param_1,byte param_2)

{
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

SCStr * __thiscall FUN_11002ae0(int param_1,SCStr *param_2)

{
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

undefined1 __thiscall FUN_11005070(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_111c1530(param_2));
  if ((*(int *)(param_1 + 0x442c) == 0xca) || (*(int *)(param_1 + 0x442c) == 0xcc)) {
    uVar1 = (undefined1)(1);
  }
  return (undefined1)(uVar1);
}


// Reference entry 110050a0; body size 52 bytes.
#line 1 "ENTRY_110050a0"

undefined1 __thiscall FUN_110050a0(int param_1,undefined4 param_2)

{
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

undefined1 __thiscall FUN_110051f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = (undefined1)(thunk_FUN_111c1530(param_2));
  iVar1 = (int)(*(int *)(param_1 + 0x442c));
  if (((iVar1 == 0xc9) || (iVar1 == 0xca)) || (iVar1 == 0xcc)) {
    uVar2 = (undefined1)(1);
  }
  return (undefined1)(uVar2);
}


// Reference entry 11007ed0; body size 33 bytes.
#line 1 "ENTRY_11007ed0"

void __fastcall FUN_11007ed0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 11007f00; body size 33 bytes.
#line 1 "ENTRY_11007f00"

void __fastcall FUN_11007f00(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 11008010; body size 37 bytes.
#line 1 "ENTRY_11008010"

int * __fastcall FUN_11008010(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 110082c0; body size 33 bytes.
#line 1 "ENTRY_110082c0"

void __fastcall FUN_110082c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1100bf00; body size 22 bytes.
#line 1 "ENTRY_1100bf00"

void FUN_1100bf00(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 1100bf20; body size 23 bytes.
#line 1 "ENTRY_1100bf20"

void FUN_1100bf20(int param_1)

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


  if ((int *)*(int *)(param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


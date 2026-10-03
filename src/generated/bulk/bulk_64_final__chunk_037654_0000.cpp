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
extern int FUN_1005ef7a(...);
extern int FUN_1008d97e(...);
extern int FUN_11312ea0(...);
extern int FUN_11313060(...);
extern int FUN_1131dfc0(...);
extern int FUN_113229d0(...);
extern int FUN_11322a10(...);
extern int FUN_1132c340(...);
extern int FUN_11341510(...);
extern int FUN_11348900(...);
extern int FUN_113532f0(...);
extern int FUN_11353ad0(...);
extern int FUN_1135a6a0(...);
extern int FUN_1136cfd0(...);
extern int FUN_11371b50(...);
extern int FUN_11372200(...);
extern int FUN_1137ed50(...);
extern int FUN_1139ecf0(...);
extern int FUN_1139f790(...);
extern int FUN_113a10f0(...);
extern int FUN_113a2d10(...);
extern int FUN_113d34a0(...);
extern int FUN_113da450(...);
extern int FUN_113dee90(...);
extern int FUN_113f1560(...);
extern int FUN_113f5cf0(...);
extern int FUN_113fab90(...);
extern int FUN_113fee60(...);
extern int FUN_113fef30(...);
extern int FUN_11408600(...);
extern int FUN_11408c80(...);
extern int FUN_1140bcb0(...);
extern int __alldiv(...);
extern int __allmul(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int abort(...);
extern int func_0x100892a2(...);
extern int func_0x1008ed7e(...);
extern int func_0x1140bdc0(...);
extern __declspec(dllimport) int inet_pton(...);
extern __declspec(dllimport) int isdigit(...);
extern __declspec(dllimport) int islower(...);
extern __declspec(dllimport) int isupper(...);
extern __declspec(dllimport) int libm_sse2_log_precise(...);
extern __declspec(dllimport) int memmove(...);
extern __declspec(dllimport) int strchr(...);
extern __declspec(dllimport) int strtoll(...);
extern int thunk_FUN_111c0480(...);
extern int thunk_FUN_11395910(...);
extern int thunk_FUN_11395f90(...);
extern int thunk_FUN_113975a0(...);
extern int thunk_FUN_11397c20(...);
extern int thunk_FUN_11397d20(...);
extern int thunk_FUN_11397ee0(...);
extern int thunk_FUN_1139b8e0(...);
extern int thunk_FUN_113b9f60(...);
extern int thunk_FUN_113ba080(...);
extern int thunk_FUN_113bcb10(...);
extern int thunk_FUN_113bcb40(...);
extern int thunk_FUN_113bed30(...);
extern int thunk_FUN_113c08f0(...);
extern int thunk_FUN_113c0a40(...);
extern int thunk_FUN_113c0b30(...);
extern int thunk_FUN_113c0ca0(...);
extern int thunk_FUN_113c0f70(...);
extern int thunk_FUN_113c10e0(...);
extern int thunk_FUN_113c1240(...);
extern int thunk_FUN_113c13a0(...);
extern int thunk_FUN_113c14f0(...);
extern int thunk_FUN_113c15d0(...);
extern int thunk_FUN_113c1650(...);
extern int thunk_FUN_113c1760(...);
extern int thunk_FUN_113c17d0(...);
extern int thunk_FUN_113c1880(...);
extern int thunk_FUN_113c1a30(...);
extern int thunk_FUN_113c1ab0(...);
extern int thunk_FUN_113c1b00(...);
extern int thunk_FUN_113c1b50(...);
extern int thunk_FUN_113c1ba0(...);
extern int thunk_FUN_113c1c50(...);
extern int thunk_FUN_113ca100(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113cfe50(...);
extern int thunk_FUN_113d0a10(...);
extern int thunk_FUN_113d17e0(...);
extern int thunk_FUN_113d1a60(...);
extern int thunk_FUN_113d1ae0(...);
extern int thunk_FUN_113d1d90(...);
extern int thunk_FUN_113d1de0(...);
extern int thunk_FUN_113d1e70(...);
extern int thunk_FUN_113d1f20(...);
extern int thunk_FUN_113d20d0(...);
extern int thunk_FUN_113d2300(...);
extern int thunk_FUN_113d23c0(...);
extern int thunk_FUN_113d2490(...);
extern int thunk_FUN_113d2860(...);
extern int thunk_FUN_113d2fb0(...);
extern int thunk_FUN_113d3560(...);
extern int thunk_FUN_113d3590(...);
extern int thunk_FUN_113d35c0(...);
extern int thunk_FUN_113d3600(...);
extern int thunk_FUN_113d36c0(...);
extern int thunk_FUN_113d3700(...);
extern int thunk_FUN_113d39f0(...);
extern int thunk_FUN_113d3ba0(...);
extern int thunk_FUN_113d3bb0(...);
extern int thunk_FUN_113d3c80(...);
extern int thunk_FUN_113d3e30(...);
extern int thunk_FUN_113d47d0(...);
extern int thunk_FUN_113d4970(...);
extern int thunk_FUN_113d49c0(...);
extern int thunk_FUN_113d4be0(...);
extern int thunk_FUN_113d4d70(...);
extern int thunk_FUN_113d5570(...);
extern int thunk_FUN_113d62b0(...);
extern int thunk_FUN_113d6c90(...);
extern int thunk_FUN_113d75c0(...);
extern int thunk_FUN_113d7ca0(...);
extern int thunk_FUN_113d8610(...);
extern int thunk_FUN_113d8ef0(...);
extern int thunk_FUN_113d91d0(...);
extern int thunk_FUN_113d9630(...);
extern int thunk_FUN_113d9670(...);
extern int thunk_FUN_113da210(...);
extern int thunk_FUN_113da280(...);
extern int thunk_FUN_113da480(...);
extern int thunk_FUN_113da960(...);
extern int thunk_FUN_113db890(...);
extern int thunk_FUN_113db910(...);
extern int thunk_FUN_113dbb30(...);
extern int thunk_FUN_113dbe10(...);
extern int thunk_FUN_113dc210(...);
extern int thunk_FUN_113dc4b0(...);
extern int thunk_FUN_113dc610(...);
extern int thunk_FUN_113dca30(...);
extern int thunk_FUN_113dcfc0(...);
extern int thunk_FUN_113dd7b0(...);
extern int thunk_FUN_113dd980(...);
extern int thunk_FUN_113ddae0(...);
extern int thunk_FUN_113dde70(...);
extern int thunk_FUN_113def50(...);
extern int thunk_FUN_113df6a0(...);
extern int thunk_FUN_113dfb10(...);
extern int thunk_FUN_113dff50(...);
extern int thunk_FUN_113e2cc0(...);
extern int thunk_FUN_113e3a50(...);
extern int thunk_FUN_113e45a0(...);
extern int thunk_FUN_113e4820(...);
extern int thunk_FUN_113e4be0(...);
extern int thunk_FUN_113e50f0(...);
extern int thunk_FUN_113e56d0(...);
extern int thunk_FUN_113e5bd0(...);
extern int thunk_FUN_113e5d40(...);
extern int thunk_FUN_113e5db0(...);
extern int thunk_FUN_113e5e30(...);
extern int thunk_FUN_113e5f90(...);
extern int thunk_FUN_113e5fb0(...);
extern int thunk_FUN_113e5fd0(...);
extern int thunk_FUN_113e6000(...);
extern int thunk_FUN_113e6050(...);
extern int thunk_FUN_113e6260(...);
extern int thunk_FUN_113e6740(...);
extern int thunk_FUN_113e9f00(...);
extern int thunk_FUN_113e9fd0(...);
extern int thunk_FUN_113ea020(...);
extern int thunk_FUN_113ea140(...);
extern int thunk_FUN_113ea1b0(...);
extern int thunk_FUN_113fbdf0(...);
extern int thunk_FUN_113fc530(...);
extern int thunk_FUN_113fc780(...);
extern int thunk_FUN_113fc9e0(...);
extern int thunk_FUN_113fcc00(...);
extern int thunk_FUN_113fd000(...);
extern int thunk_FUN_113fd220(...);
extern int thunk_FUN_113fd670(...);
extern int thunk_FUN_113fd880(...);
extern int thunk_FUN_113fdc10(...);
extern int thunk_FUN_113ff170(...);
extern int thunk_FUN_113ff1d0(...);
extern int thunk_FUN_113ff370(...);
extern int thunk_FUN_113ffef0(...);
extern int thunk_FUN_11400690(...);
extern int thunk_FUN_11401680(...);
extern int thunk_FUN_11401f20(...);
extern int thunk_FUN_11401ff0(...);
extern int thunk_FUN_114069b0(...);
extern int thunk_FUN_114096a0(...);
extern int thunk_FUN_1140abd0(...);
extern int thunk_FUN_1140ad90(...);
extern int thunk_FUN_1140add0(...);
extern int thunk_FUN_1140b1f0(...);
extern int thunk_FUN_1140b600(...);
extern int thunk_FUN_1140b690(...);
extern int thunk_FUN_1140ba40(...);
extern int thunk_FUN_1140c060(...);
extern int thunk_FUN_1140c090(...);
extern int thunk_FUN_1140c1d0(...);
extern int thunk_FUN_1140c340(...);
extern int thunk_FUN_1140c3e0(...);
extern int thunk_FUN_1140c500(...);
extern int thunk_FUN_1140c520(...);
extern int thunk_FUN_1140c750(...);
extern int thunk_FUN_1140c7a0(...);
extern int thunk_FUN_1140c8e0(...);
extern int thunk_FUN_1140c9f0(...);
extern int thunk_FUN_1140ccc0(...);
extern int thunk_FUN_1140cd70(...);
extern int thunk_FUN_1140ce80(...);
extern int thunk_FUN_1140d1a0(...);
extern int thunk_FUN_1140d2d0(...);
extern int thunk_FUN_1140d440(...);
extern int thunk_FUN_1140d470(...);
extern int thunk_FUN_1140d570(...);
extern int thunk_FUN_1140d5f0(...);
extern int thunk_FUN_1140d620(...);
extern int thunk_FUN_1140d850(...);
extern int thunk_FUN_1140dbf0(...);
extern int thunk_FUN_1140e540(...);
extern int thunk_FUN_1140e740(...);
extern int thunk_FUN_1140e790(...);
extern int thunk_FUN_1140e870(...);
extern int thunk_FUN_1140e890(...);
extern int thunk_FUN_1140e8b0(...);
extern int thunk_FUN_1140e8f0(...);
extern int thunk_FUN_1140e9e0(...);
extern int thunk_FUN_1140ffb0(...);
extern int thunk_FUN_114101c0(...);
extern int thunk_FUN_114101e0(...);
extern int thunk_FUN_114102d0(...);
extern int thunk_FUN_114102f0(...);
extern int thunk_FUN_11410310(...);
extern int thunk_FUN_11410360(...);
extern int thunk_FUN_11410440(...);
extern int thunk_FUN_11411380(...);
extern int thunk_FUN_114116a0(...);
extern int thunk_FUN_114116c0(...);
extern int thunk_FUN_114117e0(...);
extern int thunk_FUN_11411800(...);
extern int thunk_FUN_11411820(...);
extern int thunk_FUN_11411940(...);
extern int thunk_FUN_11412700(...);
extern int thunk_FUN_11412800(...);
extern int thunk_FUN_114128a0(...);
extern int thunk_FUN_11412a10(...);
extern int thunk_FUN_11412a80(...);
extern int thunk_FUN_11412b80(...);
extern int thunk_FUN_11413030(...);
extern int thunk_FUN_11416950(...);
extern int thunk_FUN_11417910(...);
extern int thunk_FUN_11417c00(...);
extern int thunk_FUN_11419540(...);
extern int thunk_FUN_11419700(...);
extern int thunk_FUN_11419f70(...);
extern int thunk_FUN_1141a4c0(...);
extern int thunk_FUN_1141a680(...);
extern int thunk_FUN_1141abb0(...);
extern int thunk_FUN_1141c360(...);
extern int thunk_FUN_1141c4e0(...);
extern int thunk_FUN_1141c570(...);
extern int thunk_FUN_1141c860(...);
extern int thunk_FUN_1141fa30(...);
extern int thunk_FUN_11420a50(...);
extern int thunk_FUN_11420a70(...);
extern int thunk_FUN_11420aa0(...);
extern int thunk_FUN_11423e60(...);
extern int thunk_FUN_11423ea0(...);
extern int thunk_FUN_11423ed0(...);
extern int thunk_FUN_11423f00(...);
extern int thunk_FUN_11424fd0(...);
extern int thunk_FUN_114252f0(...);
extern int thunk_FUN_114299f0(...);
extern int thunk_FUN_1142b060(...);
extern int thunk_FUN_1142b900(...);
extern int thunk_FUN_1142c5a0(...);
extern int thunk_FUN_1142d1f0(...);
extern int thunk_FUN_1142ddf0(...);
extern int thunk_FUN_1142e3f0(...);
extern int thunk_FUN_1142ea40(...);
extern int thunk_FUN_1142f4c0(...);
extern int thunk_FUN_114305f0(...);
extern int thunk_FUN_11434a60(...);
extern int thunk_FUN_11434c90(...);
extern int thunk_FUN_114351b0(...);
extern int thunk_FUN_11435b70(...);
extern int thunk_FUN_11436230(...);
extern int thunk_FUN_114365f0(...);
extern int thunk_FUN_11436930(...);
extern int thunk_FUN_11436a00(...);
extern int thunk_FUN_11437010(...);
extern int thunk_FUN_11437050(...);
extern int thunk_FUN_11441ea0(...);
extern int thunk_FUN_11442340(...);
extern int thunk_FUN_11442360(...);
extern int thunk_FUN_11442510(...);
extern int thunk_FUN_11442550(...);
extern int thunk_FUN_11442750(...);
extern int thunk_FUN_114437c0(...);
extern int thunk_FUN_11443880(...);
extern int thunk_FUN_114446b0(...);
extern int thunk_FUN_11444780(...);
extern int thunk_FUN_11445ca0(...);
extern int thunk_FUN_11445e20(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148af70(...);
extern int thunk_FUN_1148b0c0(...);
extern __declspec(dllimport) int tolower(...);
extern int DAT_1186d2ee;
extern int DAT_11881ac8;
extern int DAT_118823e0;
extern int DAT_11884554;
extern int DAT_11889d24;
extern int DAT_1188a014;
extern int DAT_1188bc94;
extern int DAT_1188e99c;
extern int DAT_118a1c50;
extern int DAT_118f97f8;
extern int DAT_119106ac;
extern int DAT_119f7f98;
extern int DAT_119fac60;
extern int DAT_119faddc;
extern int DAT_119fb1ea;
extern int DAT_119fb300;
extern int DAT_119fb400;
extern int DAT_119fbfb0;
extern int DAT_119fc0cc;
extern int DAT_119fc0d0;
extern int DAT_119fc120;
extern int DAT_119fc140;
extern int DAT_11a00d30;
extern int DAT_11a02e60;
extern int DAT_11a03108;
extern int DAT_11a03110;
extern int DAT_11a03118;
extern int DAT_11a03120;
extern int DAT_11a03128;
extern int DAT_11a03130;
extern int DAT_11a03228;
extern int DAT_11a03230;
extern int DAT_11a03238;
extern int DAT_11a03240;
extern int DAT_11a03248;
extern int DAT_11a03250;
extern int DAT_11a03258;
extern int DAT_11a03260;
extern int DAT_11a03268;
extern int DAT_11a03270;
extern int DAT_11a03278;
extern int DAT_11a03280;
extern int DAT_11a03288;
extern int DAT_11a03290;
extern int DAT_11a03298;
extern int DAT_11a032a0;
extern int DAT_11a032a8;
extern int DAT_11a032b0;
extern int DAT_11a032b8;
extern int DAT_11a032c0;
extern int DAT_11a032c8;
extern int DAT_11a032d0;
extern int DAT_11a032d8;
extern int DAT_11a032e0;
extern int DAT_11a032e8;
extern int DAT_11a032f0;
extern int DAT_11a032f8;
extern int DAT_11a03300;
extern int DAT_11a03308;
extern int DAT_11a03310;
extern int DAT_11a03318;
extern int DAT_11a03320;
extern int DAT_11a046a8;
extern int DAT_11a04ea8;
extern int DAT_11a052a8;
extern int DAT_11a056a8;
extern int DAT_11a05aa8;
extern int DAT_11a07748;
extern int DAT_11a07847;
extern int DAT_11a07948;
extern int DAT_11a07a48;
extern int DAT_11a07abc;
extern int DAT_11a07ad0;
extern int DAT_11a08090;
extern int DAT_11a08108;
extern int DAT_11bf2148;
extern int DAT_11bf2510;
extern int DAT_11bf28d8;
extern int DAT_11bf2ca0;
extern int DAT_11bf3068;
extern int DAT_11bf3430;
extern int DAT_11bf37f8;
extern int DAT_11bf3bc0;
extern int DAT_11bf3f88;
extern int DAT_11bf4350;
extern int DAT_11bf4718;
extern int DAT_11bf4ae0;
extern int DAT_11bf4ea8;
extern int DAT_11bf5270;
extern int DAT_11bf5638;
extern int DAT_11bf5a00;
extern int DAT_11bf5dc8;
extern int DAT_11bf6190;
extern int DAT_11bf6558;
extern int DAT_11bf6920;
extern int DAT_11bf6ce8;
extern int DAT_11bf70b0;
extern int DAT_11bf7478;
extern int DAT_11bf7840;
extern int DAT_11bf7c08;
extern int DAT_11bf7fd0;
extern int DAT_11bf8398;
extern int DAT_11bf8760;
extern int DAT_11bf8b28;
extern int DAT_11bf8ef0;
extern int DAT_11bf92b8;
extern int DAT_11bfccc8;
extern int DAT_11bfccd4;
extern int DAT_11bfccdc;
extern int DAT_11bfcce0;
extern int DAT_11bfcce4;
extern int DAT_11bfcd00;
extern int DAT_11bfcd08;
extern int DAT_11bfcd10;
extern int DAT_11bfcd18;
extern int DAT_11bfcd20;
extern int DAT_11bfcd6c;
extern int DAT_11bfcd74;
extern int DAT_11bfcd80;
extern int DAT_11bfcd94;
extern int DAT_11bfcda8;
extern int DAT_11bfcdb0;
extern int DAT_11bfcdb8;
extern int DAT_11bfd9b8;
extern int DAT_11bfd9bc;
extern int DAT_11bfda24;
extern int DAT_11bfda44;
extern int DAT_11bfe044;
extern int DAT_11bfe2f0;
extern int DAT_11bfe6f0;
extern int DAT_11bfe6f4;
extern int DAT_11bfe6f8;
extern int DAT_11bfe6fc;
extern int DAT_11bfe700;
extern int DAT_11bfe704;
extern int DAT_11bfe708;
extern int DAT_11bfe70c;
extern int DAT_11bfec68;
extern int DAT_12121fa0;
extern int DAT_12122250;
extern int DAT_12122620;
extern int DAT_12122624;
extern int DAT_12126b84;
extern int DAT_122f6eac;
extern int DAT_122f7130;
extern int DAT_122f7134;
extern int DAT_122f7138;
extern int DAT_122f73fc;
extern int DAT_122fa560;
extern int _DAT_11880f98;
extern int _DAT_11bf1308;
extern int _DAT_122f747c;
extern int in_XMM0_Qa;
extern int unaff_ESI;
extern undefined1 LAB_100409da[];
extern undefined1 LAB_1005bacd[];
extern undefined1 LAB_1005c4aa[];
extern undefined1 LAB_1008a9ea[];
extern undefined1 LAB_112f5970[];
extern undefined1 LAB_112f5980[];
extern undefined1 LAB_11308ae8[];
extern undefined1 LAB_11317c90[];
extern undefined1 LAB_1132461b[];
extern undefined1 LAB_11327f1e[];
extern undefined1 LAB_1132cc96[];
extern undefined1 LAB_11358966[];
extern undefined1 LAB_1139d2b2[];
extern undefined1 LAB_1139d312[];
extern undefined1 LAB_1139d35a[];
extern undefined1 LAB_113a6dc1[];
extern undefined1 LAB_113af47d[];
extern undefined1 LAB_113b9d42[];
extern undefined1 LAB_113ba82d[];
extern undefined1 LAB_113bb88f[];
extern undefined1 LAB_113bca78[];
extern undefined1 LAB_113bd897[];
extern undefined1 LAB_113ca218[];
extern undefined1 LAB_113d00e6[];
extern undefined1 LAB_113d0184[];
extern undefined1 LAB_113d1740[];
extern undefined1 LAB_113d1ce9[];
extern undefined1 LAB_113d2231[];
extern undefined1 LAB_113d33aa[];
extern undefined1 LAB_113d3b0c[];
extern undefined1 LAB_113d3b2e[];
extern undefined1 LAB_113d4e34[];
extern undefined1 LAB_113d4e73[];
extern undefined1 LAB_113d5110[];
extern undefined1 LAB_113d5116[];
extern undefined1 LAB_113d5450[];
extern undefined1 LAB_113d5c26[];
extern undefined1 LAB_113d6210[];
extern undefined1 LAB_113d7359[];
extern undefined1 LAB_113d7373[];
extern undefined1 LAB_113dc486[];
extern undefined1 LAB_113dd18a[];
extern undefined1 LAB_113dd21d[];
extern undefined1 LAB_113dd8d0[];
extern undefined1 LAB_113dd903[];
extern undefined1 LAB_113e0790[];
extern undefined1 LAB_113e07a0[];
extern undefined1 LAB_113e80f9[];
extern undefined1 LAB_113f0075[];
extern undefined1 LAB_113f2f06[];
extern undefined1 LAB_113f952a[];
extern undefined1 LAB_11401556[];
extern undefined1 LAB_11401f86[];
extern undefined1 LAB_11402ff6[];
extern undefined1 LAB_1140303f[];
extern undefined1 LAB_114030d6[];
extern undefined1 LAB_11406bb9[];
extern undefined1 LAB_11406cbb[];
extern undefined1 LAB_114081e3[];
extern undefined1 LAB_1140e69c[];
extern undefined1 LAB_1140e6ab[];
extern undefined1 LAB_11410124[];
extern undefined1 LAB_11410133[];
extern undefined1 LAB_11411532[];
extern undefined1 LAB_114115d2[];
extern undefined1 LAB_1141178d[];
extern int *PTR_GetFileAttributesA_12122354;
extern int *PTR_GetFileAttributesExW_1212236c;
extern int *PTR_GetLastError_1212239c;
extern int *PTR_GetSystemTimeAsFileTime_121223cc;
extern int *PTR_GetVersionExA_121223fc;
extern int *PTR_LockFileEx_121224a4;
extern int *PTR_LockFile_12122498;
extern int *PTR_OutputDebugStringA_121225c4;
extern int *PTR_Sleep_121224f8;
extern int *PTR_UnlockFileEx_1212251c;
extern int *PTR_UnlockFile_12122510;
extern int *PTR_s_match_119fc13c;
extern int *stack0x0000000c;
extern int *stack0x00000010;
extern int *stack0xfffffeb4;
extern int *stack0xfffffeb8;
extern int *stack0xfffffebc;
extern int *stack0xfffffec0;
extern int *stack0xffffffe0;
extern char s_finishedresumptiontraffic_updexp_11bfd8c8[];
typedef void *A;
typedef void *ABCDEFGHIJKLMNOPQRSTUVWXYZ234567;
typedef void *B;
typedef void *BL;
typedef void *BOOTSOUND;
typedef void *CA;
typedef void *FIRMWARE;
typedef void *G;
typedef void *H;
typedef void *J;
typedef void *JFFS_TARBALL;
typedef void *K;
typedef void *L;
typedef void *LOCK;
typedef void *M;
typedef void *MGF1;
typedef void *N;
typedef void *O;
typedef void *ROOT_CERTS;
typedef void *S;
typedef void *T;
typedef void *U;
typedef void *UNLOCK;
typedef void *V;
typedef void *WARNING;
typedef void *X;
typedef void *Y;
typedef void *Z;
struct Agreement { char _pad; Agreement(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Boot { char _pad; Boot(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Cert { char _pad; Cert(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CertificateVerify { char _pad; CertificateVerify(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CertificateVerifyTLS { char _pad; CertificateVerifyTLS(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Client { char _pad; Client(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Combined { char _pad; Combined(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Encipherment { char _pad; Encipherment(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Kernel { char _pad; Kernel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Only { char _pad; Only(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Repudiation { char _pad; Repudiation(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Server { char _pad; Server(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sign { char _pad; Sign(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Signature { char _pad; Signature(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Signing { char _pad; Signing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Type { char _pad; Type(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
using namespace std;
char * FUN_112f58d0(undefined4 param_1);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void FUN_112f5990(int param_1,int param_2,int *param_3);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void FUN_112f5ad0(int param_1,int param_2,int *param_3);
void FUN_112fea20(int *param_1);
undefined4 FUN_112ff210(longlong *param_1);
undefined4 FUN_112ff270(double *param_1);
void FUN_11305c60(int *param_1,uint param_2,int param_3);
undefined4 FUN_11308880(int param_1);
undefined4 FUN_113089c0(int param_1);
int FUN_11309310(int *param_1,int param_2,int *param_3,undefined4 param_4);
void FUN_11309de0(int param_1,short param_2,int param_3);
byte * FUN_1130a770(int param_1,int param_2);
void FUN_1130a8f0(int param_1,undefined4 param_2);
void FUN_1130d630(int param_1,int param_2,undefined4 param_3);
void FUN_11312ce0(int *param_1,int *param_2);
void FUN_11312ef0(int param_1,int param_2,int param_3,int *param_4);
int FUN_113130f0(int param_1,uint param_2);
void FUN_113135b0(int param_1);
void FUN_11317720(undefined1 *param_1,undefined4 param_2);
uint FUN_11317c10(int param_1,uint param_2,int param_3);
undefined4 FUN_11319870(int param_1,int param_2,int param_3,int param_4);
undefined4 FUN_1131bab0(int param_1,uint param_2,uint param_3);
int FUN_1131ced0(byte *param_1,char *param_2);
int * FUN_1131df50(int *param_1);
int FUN_1131f4c0(int param_1);
void FUN_1131f630(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_1131f720(int *param_1,int param_2);
int FUN_1131f9b0(undefined4 param_1,char *param_2,undefined1 *param_3,undefined4 *param_4,
                int *param_5);
int FUN_11324590(int param_1,int param_2,undefined4 *param_3);
int FUN_11324700(int param_1,int param_2,int param_3,int param_4);
int FUN_11325130(int param_1);
bool FUN_11325270(int param_1,int param_2);
int FUN_113253f0(int param_1,int param_2);
int FUN_11326740(int param_1,int param_2);
int FUN_11327ee0(int param_1,int param_2);
int * FUN_1132ad60(int param_1,undefined4 param_2,undefined4 *param_3);
int FUN_1132b900(int param_1,uint param_2);
void FUN_1132c1f0(byte *param_1,uint param_2,uint param_3);
void FUN_1132c7e0(int *param_1,undefined1 *param_2,uint param_3);
undefined4 FUN_1132cae0(int param_1,int param_2,int param_3,int param_4);
void FUN_1132cd30(int param_1);
int FUN_113326b0(int param_1);
int FUN_11332780(int *param_1,int param_2);
void FUN_11332800(int param_1,int *param_2,int *param_3);
void FUN_11334f70(int param_1);
void FUN_113351c0(undefined4 *param_1,byte param_2);
void FUN_11335620(int param_1);
bool FUN_1133a070(uint *param_1,int param_2);
int FUN_1133db60(int param_1,int param_2);
void FUN_1133de80(int *param_1,int param_2);
void FUN_11343b10(int param_1);
void FUN_11346e30(int param_1,int param_2,int param_3);
void FUN_11348880(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_1134a890(undefined1 *param_1);
bool FUN_1134b760(char *param_1);
bool FUN_1134bfb0(char *param_1,char param_2);
int FUN_1134c5b0(int param_1,int param_2);
int FUN_11353240(int param_1,int param_2);
undefined4 FUN_11353b00(byte *param_1,uint *param_2);
undefined1 FUN_11353d10(byte *param_1,uint *param_2);
undefined4 FUN_113577e0(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4,int param_5);
short FUN_11358910(uint param_1,uint param_2);
uint FUN_113589e0(ushort param_1,ushort param_2);
int FUN_11358ad0(int param_1,int *param_2);
void FUN_11359bf0(int param_1);
undefined4 FUN_1135a2c0(int *param_1,undefined8 *param_2);
void FUN_1135ca00(int param_1,uint param_2);
int FUN_1135d480(int param_1,undefined4 param_2);
void FUN_1135e780(int param_1);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_11363db0(int param_1,int param_2,undefined8 param_3);
short FUN_1136d300(int param_1,short param_2);
int FUN_113718c0(byte *param_1,int param_2);
uint FUN_11371920(int *param_1);
int FUN_11372190(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_11372280(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5);
void FUN_11373170(int param_1,undefined4 param_2);
int FUN_1137d7b0(int param_1,undefined4 param_2);
undefined8 FUN_1137dee0(undefined8 *param_1);
undefined4 FUN_1137e670(undefined4 param_1,int param_2,int param_3);
undefined4 FUN_1137e890(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_1137ecb0(undefined8 *param_1);
undefined4 FUN_1137ef40(double *param_1);
void FUN_1137f560(undefined4 *param_1,undefined4 *param_2,ushort param_3);
char * FUN_11381c20(char *param_1,int param_2);
void FUN_11384290(int param_1);
undefined4 FUN_1138fbf0(int param_1,char *param_2);
void FUN_113968b0(int *param_1,ulonglong param_2);
void FUN_11396a50(int *param_1);
int FUN_11397320(int param_1,int param_2,undefined4 param_3);
void FUN_11397540(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4);
int FUN_1139aa70(int *param_1);
float10 FUN_1139ab30(double *param_1);
undefined4 FUN_1139ade0(undefined8 *param_1);
undefined8 FUN_1139ae50(undefined8 *param_1);
void FUN_1139b8e0(void);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void FUN_1139bd50(undefined1 *param_1,size_t param_2);
undefined4 FUN_1139d270(int param_1,undefined4 *param_2);
void FUN_113a1250(undefined4 param_1,int param_2,undefined8 *param_3);
void FUN_113a3590(int param_1,int *param_2,uint param_3,int param_4);
undefined4 FUN_113a3ce0(int param_1,undefined4 *param_2,undefined4 *param_3);
int FUN_113a41a0(int param_1,undefined4 *param_2);
void FUN_113a5dc0(int param_1,uint *param_2,int param_3,int *param_4,int *param_5);
void FUN_113a6c30(int param_1,undefined4 *param_2);
void FUN_113a6e50(int param_1);
void FUN_113a7490(int param_1,void *param_2,int param_3,int *param_4,int *param_5,void *param_6);
void FUN_113a7890(int param_1,undefined4 param_2);
undefined4 FUN_113abb10(int param_1,int param_2);
void FUN_113af3c0(undefined4 param_1);
void FUN_113af540(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
undefined4 FUN_113b0050(int *param_1,int *param_2);
void FUN_113b0590(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
int FUN_113b96c0(int param_1,int param_2);
uint FUN_113b9ce0(char *param_1,uint param_2,byte *param_3);
byte * FUN_113b9e10(byte *param_1,byte *param_2);
int FUN_113b9ec0(byte *param_1,byte *param_2);
int FUN_113b9f60(byte *param_1,byte *param_2,int param_3);
uint FUN_113ba080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_113ba180(undefined4 param_1,undefined4 param_2,int param_3);
uint FUN_113ba290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5);
uint FUN_113ba400(undefined4 param_1,undefined4 param_2);
int FUN_113ba460(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
uint FUN_113ba590(undefined4 param_1,undefined4 param_2);
uint FUN_113ba5f0(undefined4 param_1,undefined4 param_2);
uint FUN_113ba650(undefined4 param_1,undefined4 param_2);
void FUN_113ba6b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
uint FUN_113ba8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_113ba9e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,uint *param_7,int *param_8);
uint FUN_113bb3c0(undefined4 param_1,undefined4 param_2,int param_3);
uint FUN_113bb7b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
uint FUN_113bb920(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4);
uint FUN_113bc770(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_113bc870(undefined4 param_1,undefined4 param_2);
uint FUN_113bc8d0(undefined4 param_1,undefined4 param_2);
uint FUN_113bc930(undefined4 param_1,undefined4 param_2);
uint FUN_113bc990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5);
void FUN_113bcb40(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void FUN_113bcbd0(undefined4 param_1,undefined4 *param_2,int param_3);
void FUN_113bcc60(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void FUN_113bcd70(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
void FUN_113bceb0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
void FUN_113bcfd0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void FUN_113bd060(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,uint param_5
                 ,uint *param_6);
void FUN_113bd170(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5,uint param_6,uint *param_7);
void FUN_113bd290(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8,undefined4 param_9,int param_10,
                 undefined4 param_11,int param_12);
void FUN_113bd4c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11);
void FUN_113bd6c0(undefined4 param_1,undefined4 *param_2,int param_3);
void FUN_113bd750(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,char *param_8);
void FUN_113bd910(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void FUN_113bd990(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void FUN_113be080(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
void FUN_113be1c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4);
void FUN_113be400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5);
void FUN_113be5d0(int param_1,int param_2,undefined4 param_3);
uint FUN_113bf160(int param_1,int *param_2);
void FUN_113bf210(int param_1,uint param_2,undefined4 param_3,int *param_4);
void FUN_113bf7d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_113bfb20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint *param_6);
void FUN_113bfc20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,uint param_6);
char FUN_113c14f0(char *param_1);
undefined4
FUN_113c15d0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6);
undefined4 FUN_113c1760(char *param_1,undefined4 param_2,void *param_3,uint param_4);
undefined4 FUN_113c1a30(char *param_1,undefined4 param_2,char *param_3);
char FUN_113c1ba0(char *param_1,int *param_2);
undefined4
FUN_113c1c50(undefined1 *param_1,undefined1 *param_2,int param_3,uint param_4,undefined4 param_5,
            undefined4 param_6);
undefined4 FUN_113c1e40(int param_1,int param_2,undefined1 *param_3,uint *param_4);
void FUN_113c58b0(int param_1);
void FUN_113c5cc0(int param_1);
undefined4 FUN_113c8a40(int param_1,int param_2,uint param_3);
uint FUN_113c8c50(uint param_1,uint *param_2,uint param_3);
void FUN_113c9800(int param_1);
void FUN_113c9ec0(int param_1,void *param_2,size_t param_3,ushort param_4);
void FUN_113ca100(int param_1);
void FUN_113ca1d0(int param_1);
void FUN_113ca6b0(int param_1,int param_2,int param_3);
void FUN_113cac80(int param_1,int *param_2);
void FUN_113caf30(int param_1,int param_2,int param_3);
void FUN_113cb000(int param_1);
void FUN_113cb0b0(int param_1,int param_2,int param_3);
void FUN_113cb1b0(int param_1,ushort *param_2,int param_3);
void FUN_113cb2e0(int param_1,int param_2,int param_3,int param_4);
void FUN_113cb5e0(int param_1,int param_2,int param_3);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_113cca00(int *param_1,int *param_2,int param_3);
byte FUN_113ccae0(byte *param_1,int param_2);
byte * FUN_113ccbd0(byte param_1,byte *param_2,uint param_3,int param_4);
void FUN_113ccf90(int param_1,int *param_2,byte *param_3);
float10 FUN_113cf510(int param_1,int param_2);
undefined4 FUN_113cf950(undefined4 *param_1,uint *param_2);
undefined4 FUN_113cf9c0(undefined4 *param_1,uint *param_2);
char FUN_113cfa80(int param_1,code *param_2);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ bool FUN_113cfb00(void);
undefined4 FUN_113cfd10(char *param_1,undefined4 *param_2);
undefined4
FUN_113cffc0(int *param_1,int *param_2,uint param_3,undefined4 param_4,undefined4 *param_5);
void * FUN_113d0a10(undefined4 param_1,undefined4 param_2);
undefined4
FUN_113d13f0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,int param_5,
            undefined4 param_6);
undefined4
FUN_113d14c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 *param_5,int param_6,undefined4 param_7);
byte FUN_113d1560(int param_1,byte *param_2,int param_3);
void FUN_113d15c0(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_113d1a60(char *param_1,undefined4 param_2);
undefined4 FUN_113d1ae0(char *param_1,char param_2);
void FUN_113d1b80(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint *param_5);
undefined4
FUN_113d1de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6);
void FUN_113d20d0(int param_1,void *param_2,size_t param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int *param_9,int param_10);
undefined4 FUN_113d2300(undefined4 param_1,uint param_2,int *param_3);
undefined4 FUN_113d23c0(undefined4 param_1,uint param_2,int *param_3);
undefined4
FUN_113d2660(int *param_1,int param_2,void *param_3,size_t param_4,int param_5,int param_6,
            int param_7);
int FUN_113d2750(undefined4 *param_1,uint param_2,uint *param_3);
undefined4 FUN_113d2fe0(int param_1,uint param_2,int param_3,int param_4);
undefined4 FUN_113d3240(uint *param_1,uint param_2,uint param_3);
undefined4 FUN_113d3300(int *param_1,uint param_2);
char FUN_113d39f0(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,uint param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10);
undefined4 FUN_113d3c80(undefined4 param_1,int param_2,uint param_3,int *param_4,int param_5);
void FUN_113d4110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
bool FUN_113d4d70(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,undefined4 *param_6);
void FUN_113d4ee0(undefined4 *param_1,void *param_2,uint param_3,int param_4);
void FUN_113d5240(undefined4 *param_1,void *param_2,int param_3);
bool FUN_113d5570(undefined4 *param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,uint param_7);
bool FUN_113d5650(undefined4 *param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,uint param_7);
undefined4 FUN_113d5730(undefined4 param_1);
void FUN_113d5b60(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,uint param_7,int param_8,uint *param_9,int param_10);
void FUN_113d6050(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,void *param_7,uint param_8,undefined4 param_9
                 ,undefined4 param_10);
int FUN_113d6700(int param_1,int param_2,int param_3);
bool FUN_113d6a20(undefined4 param_1,undefined4 param_2,uint param_3);
void FUN_113d6a90(undefined4 *param_1,char param_2,int *param_3,int param_4);
bool FUN_113d6b60(int param_1,int param_2,uint param_3);
bool FUN_113d6bc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8);
void FUN_113d7200(int *param_1,int *param_2,int param_3,code *param_4,undefined4 param_5,
                 code *param_6);
int FUN_113d7960(void *param_1,int param_2,int param_3);
undefined4 * __fastcall FUN_113d8fd0(undefined4 *param_1);
void FUN_113d9d40(uint param_1);
undefined4 FUN_113d9e40(uint param_1,uint *param_2,uint param_3,uint *param_4);
void FUN_113da210(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4);
undefined4
FUN_113da480(undefined4 param_1,uint param_2,uint *param_3,undefined2 *param_4,undefined4 *param_5);
undefined4 FUN_113daab0(int param_1,void *param_2,uint param_3,void *param_4,uint param_5);
undefined4 FUN_113dadc0(int *param_1,int param_2,int param_3,int param_4);
void FUN_113daf30(int param_1);
void FUN_113db5a0(int param_1);
ushort FUN_113db890(int *param_1);
undefined4 FUN_113dbb30(undefined4 param_1);
int FUN_113dbe10(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 *param_5);
int FUN_113dc080(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6);
int FUN_113dc3c0(int param_1,int param_2);
int FUN_113dc430(int param_1);
void FUN_113dca30(int param_1);
void FUN_113dce80(int param_1);
undefined4 FUN_113dd090(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_113dd4d0(int *param_1);
undefined4 FUN_113dd7b0(int *param_1,undefined2 *param_2,undefined2 *param_3);
int FUN_113dd9b0(int *param_1,int param_2);
void FUN_113ddae0(int param_1);
void FUN_113dde70(int param_1);
void FUN_113de340(int param_1,int param_2);
undefined4 FUN_113de610(int param_1,char *param_2);
undefined4 FUN_113de6d0(int param_1,char *param_2);
undefined4 FUN_113dea50(int param_1,void *param_2,uint param_3);
ushort FUN_113df0d0(int param_1,uint param_2);
undefined4 FUN_113df6a0(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 FUN_113dfb10(int param_1,undefined2 *param_2,undefined2 *param_3,uint *param_4);
int FUN_113e0200(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6);
int FUN_113e03b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4);
void FUN_113e04f0(char *param_1,undefined4 param_2,undefined4 param_3);
int FUN_113e07b0(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4);
int FUN_113e0870(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4);
int FUN_113e2b40(uint param_1,uint param_2);
void FUN_113e2cc0(int param_1);
undefined4 FUN_113e2f30(int *param_1);
int FUN_113e4cb0(int param_1);
void FUN_113e5bd0(int param_1);
void FUN_113e5f20(int *param_1);
void FUN_113e6ac0(undefined2 *param_1,int param_2,int param_3);
uint FUN_113e8030(int param_1);
undefined4 FUN_113e8530(int param_1);
uint FUN_113e9120(int *param_1,void *param_2,uint param_3);
undefined4 FUN_113edf30(undefined4 *param_1,short *param_2);
undefined4 FUN_113eff60(int *param_1,undefined4 param_2);
undefined1 FUN_113f29a0(int *param_1);
int FUN_113f2db0(int param_1,byte *param_2,byte *param_3);
int FUN_113f3560(int param_1,uint *param_2,undefined2 *param_3,undefined4 *param_4,
                undefined4 *param_5);
undefined4 FUN_113f5210(int param_1);
undefined4 FUN_113f5340(int *param_1,uint *param_2,int *param_3,uint *param_4);
void FUN_113f53d0(undefined4 param_1,byte *param_2,byte *param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,uint *param_8);
undefined4
FUN_113f57e0(undefined4 param_1,undefined2 *param_2,undefined2 *param_3,void *param_4,uint param_5,
            uint param_6,uint *param_7);
void FUN_113f6f60(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5);
uint FUN_113f81d0(int *param_1,undefined2 *param_2,undefined4 param_3);
int FUN_113f9440(int param_1);
int FUN_113f97a0(int *param_1);
int FUN_113f99a0(int param_1);
int FUN_113fa100(int *param_1,uint *param_2,uint *param_3,int *param_4,void *param_5,size_t param_6);
undefined4
FUN_113fb960(int *param_1,undefined2 *param_2,undefined4 param_3,uint *param_4,int *param_5);
undefined4
FUN_113fbb80(int *param_1,undefined2 *param_2,undefined4 param_3,uint param_4,int *param_5);
void FUN_113fc330(int param_1);
void FUN_113fc780(uint param_1,undefined4 param_2,void *param_3,uint param_4,int param_5);
void FUN_113fc9e0(uint param_1,undefined4 param_2,void *param_3,uint param_4,int param_5);
void FUN_113fcc00(uint param_1,undefined4 param_2,void *param_3,uint param_4,int param_5);
void FUN_113fce20(uint param_1,undefined4 param_2,void *param_3,uint param_4,int param_5);
void FUN_113fd000(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,void *param_6,uint param_7,int param_8,undefined4 param_9,
                 undefined4 param_10);
void FUN_113fd6b0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9);
void FUN_113fd880(uint param_1,undefined4 param_2,undefined4 param_3,void *param_4,uint param_5,
                 void *param_6,uint param_7,undefined4 param_8,uint param_9);
undefined4 FUN_113fdba0(int param_1);
int FUN_113fdd50(int *param_1,int param_2,undefined4 param_3,int param_4);
void FUN_113fdfc0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
void FUN_113fe280(int param_1,undefined4 param_2);
void FUN_113fe540(int param_1,int param_2);
void FUN_113fe800(int param_1,undefined4 param_2);
undefined4 FUN_113fea90(int param_1,uint *param_2,undefined4 *param_3);
undefined4 FUN_113fef60(uint param_1,int *param_2,int *param_3);
void FUN_113ff070(int param_1);
undefined4 FUN_113ff170(int param_1,uint param_2);
undefined4 FUN_113ff1d0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
bool FUN_113ff290(short param_1,undefined4 param_2);
int FUN_113ff370(int param_1,uint param_2,int *param_3,int *param_4);
/* WARNING: Type propagation algorithm not settling */ void FUN_113ff3f0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5);
void FUN_113ff5d0(int param_1);
undefined4 FUN_113ff630(undefined4 param_1,int param_2,int param_3,int *param_4,uint *param_5);
int FUN_113ffdd0(int *param_1);
undefined4 FUN_113ffef0(int param_1,undefined2 *param_2,int param_3);
int FUN_11400610(int param_1);
undefined4
FUN_11400690(int *param_1,int param_2,undefined2 *param_3,undefined4 param_4,int *param_5);
int FUN_11400740(int *param_1);
void FUN_11400900(void *param_1,size_t param_2,void *param_3,int *param_4,int param_5);
undefined4 FUN_11401500(int param_1,int *param_2,uint param_3);
undefined4 FUN_11401620(int param_1,uint param_2);
void FUN_11401680(int *param_1);
undefined4 FUN_11401f40(int param_1,int param_2);
void FUN_11402f60(undefined4 param_1,char *param_2);
undefined4 FUN_11403090(byte *param_1,int *param_2,uint param_3);
void FUN_11403140(int param_1,int param_2);
undefined4 FUN_11405b00(int *param_1,uint *param_2,undefined *param_3);
undefined4 FUN_11405bb0(int *param_1,uint *param_2,undefined *param_3);
undefined4 FUN_11405c60(byte *param_1,int param_2,uint param_3);
undefined4 FUN_11405e60(int param_1,undefined4 *param_2);
int FUN_11406650(undefined4 param_1,undefined4 param_2,uint *param_3);
int FUN_11406920(undefined4 param_1,undefined4 param_2,undefined1 *param_3);
int FUN_114069b0(byte *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
int FUN_11406e30(uint *param_1,int param_2,uint *param_3);
int FUN_11406ea0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,int *param_5);
int FUN_11407360(int *param_1,int param_2,undefined4 param_3);
undefined4 FUN_11407420(int *param_1,uint *param_2,byte param_3);
undefined4 FUN_11407610(int *param_1,uint *param_2,uint param_3);
int FUN_11408150(int param_1,uint param_2,int param_3);
int FUN_11408230(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 *param_6);
int FUN_11408330(int *param_1,int *param_2);
void FUN_11408390(undefined4 param_1,undefined4 param_2,int *param_3);
void FUN_11408430(void);
void FUN_11408520(void);
void FUN_114088d0(int *param_1);
int FUN_11408980(byte *param_1,undefined4 param_2);
void FUN_1140a1c0(int param_1,int param_2,uint *param_3,uint param_4);
undefined4 FUN_1140ae40(int *param_1,uint param_2,ushort *param_3);
undefined4
FUN_1140b6e0(int *param_1,int param_2,int param_3,uint param_4,undefined4 param_5,undefined4 param_6
            ,undefined4 param_7,undefined4 param_8,undefined4 param_9);
int FUN_1140b780(int param_1,int *param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
                uint param_7,undefined4 *param_8,undefined4 param_9,undefined4 param_10);
uint FUN_1140ba40(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5,uint param_6,
                 undefined4 param_7,uint param_8);
undefined4
FUN_1140bc20(int *param_1,int param_2,int param_3,uint param_4,undefined4 param_5,undefined4 param_6);
int FUN_1140c3e0(int *param_1,int param_2,int *param_3);
int FUN_1140c460(int *param_1,int param_2,uint *param_3);
undefined4 FUN_1140c520(int *param_1,int param_2,uint *param_3);
int FUN_1140c5c0(int *param_1,int param_2,undefined4 param_3);
int FUN_1140c630(uint *param_1,char *param_2,uint *param_3,char param_4);
undefined4
FUN_1140c8e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_1140c9f0(int *param_1,int *param_2);
undefined4 FUN_1140ccc0(int *param_1,undefined4 param_2);
void FUN_1140cd70(int *param_1);
void FUN_1140d1a0(int *param_1,undefined4 param_2);
undefined4 FUN_1140d850(int *param_1);
undefined4 FUN_1140d920(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_1140da00(int param_1,int param_2,uint *param_3,uint param_4);
void FUN_1140dbf0(int param_1,int *param_2);
void FUN_1140e540(void *param_1,uint param_2,undefined4 *param_3);
int FUN_1140e8f0(uint *param_1,void *param_2,uint param_3);
void FUN_1140e9e0(int param_1,uint *param_2);
void FUN_1140ffb0(void *param_1,uint param_2,uint *param_3);
int FUN_11410360(uint *param_1,void *param_2,uint param_3);
void FUN_11410440(int param_1,int param_2);
int FUN_11411310(undefined4 param_1,int param_2,uint param_3);
void FUN_11411380(void *param_1,uint param_2,uint *param_3,int param_4);
int FUN_114116c0(void *param_1,uint *param_2);
undefined4 FUN_11411820(int param_1,int param_2);
int FUN_11411940(int param_1,void *param_2,uint param_3);
int FUN_11411d40(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                int param_6,uint param_7,undefined4 param_8,uint param_9,uint *param_10,
                uint param_11);
undefined4
FUN_11411ee0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,uint param_9,int *param_10,int param_11);
// Reference entry 112f58d0; body size 82 bytes.
#line 1 "ENTRY_112f58d0"

char * FUN_112f58d0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (char *)("okay");
  case 1:
    return (char *)("general error");
  case 2:
    return (char *)("tampered bundle");
  case 3:
    return (char *)("bad magic number");
  case 4:
    return (char *)("too many certs");
  case 5:
    return (char *)("bad memory access");
  case 6:
    return (char *)("no memory");
  case 7:
    return (char *)("incompatible bundle version");
  case 8:
    return (char *)("bad bundle format");
  case 9:
    return (char *)("no signature");
  default:
    return (char *)("");
  }
}


// Reference entry 112f5990; body size 252 bytes.
#line 1 "ENTRY_112f5990"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_112f5990(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 local_22c4 [8896];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_22c4);
  iVar1 = (int)(thunk_FUN_113d7ca0(local_22c4,param_1,param_2));
  *param_3 = (int)(iVar1);
  if (iVar1 == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  iVar1 = (int)(thunk_FUN_113d8610(local_22c4,LAB_1005bacd,LAB_1008a9ea,LAB_112f5980,0,LAB_1005c4aa,
                             iVar1 + param_1,param_2 - iVar1,0xf));
  if (iVar1 == 0) {
    iVar1 = (int)(thunk_FUN_113d8610(local_22c4,LAB_1005bacd,LAB_1008a9ea,LAB_112f5970,0,LAB_1005c4aa,
                               *param_3 + param_1,param_2 - *param_3,0xf));
    if (iVar1 == 0) {
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112f5ad0; body size 175 bytes.
#line 1 "ENTRY_112f5ad0"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_112f5ad0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 local_22c4 [8896];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_22c4);
  iVar1 = (int)(thunk_FUN_113d7ca0(local_22c4,param_1,param_2));
  *param_3 = (int)(iVar1);
  if (iVar1 == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_113d8610(local_22c4,LAB_1005bacd,LAB_1008a9ea,LAB_112f5980,0,LAB_1005c4aa,
                     iVar1 + param_1,param_2 - iVar1,0xf);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112fea20; body size 104 bytes.
#line 1 "ENTRY_112fea20"

void FUN_112fea20(int *param_1)

{
  bool bVar1;
  int local_8;
  uint local_4;
  
  thunk_FUN_11395f90(8,&local_8);
  if (((int)local_4 < 1) && ((int)local_4 < 0)) {
    bVar1 = (bool)(local_8 != 0);
    local_8 = (int)(-local_8);
    local_4 = (uint)(-((local_4 & 0x7fffffff) + (uint)bVar1));
  }
  param_1 = (int *)((int *)*param_1);
  if ((*(ushort *)(param_1 + 2) & 0x2400) != 0) {
    FUN_113a2d10();
    return;
  }
  param_1[1] = (int)(local_4);
  *param_1 = (int)(local_8);
  *(undefined2 *)(param_1 + 2) = 4;
  return;
}


// Reference entry 112ff210; body size 65 bytes.
#line 1 "ENTRY_112ff210"

undefined4 FUN_112ff210(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_8 [2];
  
  puVar2 = (undefined4 *)(local_8);
  (*(code *)PTR_GetSystemTimeAsFileTime_121223cc)(local_8);
  lVar1 = (longlong)(__alldiv(puVar2,local_8[0],10000,0));
  *param_1 = (longlong)(lVar1 + 0xb5310d9cba00);
  return (undefined4)(0);
}


// Reference entry 112ff270; body size 79 bytes.
#line 1 "ENTRY_112ff270"

undefined4 FUN_112ff270(double *param_1)

{
  double in_XMM0_Qa;
  undefined4 *puVar1;
  undefined4 local_8 [2];
  
  puVar1 = (undefined4 *)(local_8);
  (*(code *)PTR_GetSystemTimeAsFileTime_121223cc)(local_8);
  __alldiv(puVar1,local_8[0],10000,0);
  thunk_FUN_1148b0c0();
  *param_1 = (double)(in_XMM0_Qa / DAT_11a02e60);
  return (undefined4)(0);
}


// Reference entry 11305c60; body size 67 bytes.
#line 1 "ENTRY_11305c60"

void FUN_11305c60(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint local_8;
  int iStack_4;
  
  iVar1 = (int)((**(code **)(*param_1 + 0x18))(param_1,&local_8));
  if (iVar1 == 0) {
    if ((param_3 <= iStack_4) && ((param_3 < iStack_4 || (param_2 < local_8)))) {
      (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
    }
  }
  return;
}


// Reference entry 11308880; body size 227 bytes.
#line 1 "ENTRY_11308880"

undefined4 FUN_11308880(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  
  uVar2 = (ushort)(*(ushort *)(param_1 + 0x18));
  uVar3 = (ushort)(*(ushort *)(param_1 + 0x12));
  iVar4 = (int)(*(int *)(param_1 + 0x38));
  iVar5 = (int)(*(int *)(*(int *)(param_1 + 0x34) + 0x28));
  cVar1 = (char)(*(char *)(param_1 + 8));
  iVar9 = (int)(0);
  if (uVar2 != 0) {
    puVar8 = (undefined2 *)((undefined2 *)(iVar4 + (uint)uVar3));
    do {
      uVar7 = (uint)((uint)((uint)((char)*puVar8) << 8 | (uint)((char)((ushort)*puVar8 >> 8))));
      if ((uVar7 < (uint)uVar3 + (uint)uVar2 * 2) ||
         ((int)(iVar5 - ((cVar1 == '\0') + 4)) < (int)uVar7)) {
        thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x10228,
                           "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
        return (undefined4)(0xb);
      }
      uVar6 = (uint)((**(code **)(param_1 + 0x4c))(param_1,iVar4 + uVar7));
      if (iVar5 < (int)((uVar6 & 0xffff) + uVar7)) {
        thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x1022d,
                           "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
        return (undefined4)(0xb);
      }
      iVar9 = (int)(iVar9 + 1);
      puVar8 = (undefined2 *)(puVar8 + 1);
    } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x18));
  }
  return (undefined4)(0);
}


// Reference entry 113089c0; body size 329 bytes.
#line 1 "ENTRY_113089c0"

undefined4 FUN_113089c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar4 = (uint)((uint)*(byte *)(param_1 + 9));
  iVar2 = (int)(*(int *)(param_1 + 0x38));
  uVar3 = (uint)(*(uint *)(*(int *)(param_1 + 0x34) + 0x28));
  uVar6 = (uint)(((uint)(*(undefined1 *)(uVar4 + 5 + iVar2)) << 8 | (uint)(*(undefined1 *)(uVar4 + 6 + iVar2))) - 1 &
          0xffff);
  iVar1 = (int)(*(byte *)(param_1 + 10) + uVar4 + (*(ushort *)(param_1 + 0x18) + 4) * 2);
  uVar5 = (uint)((uint)((uint)(*(undefined1 *)(uVar4 + 1 + iVar2)) << 8 | (uint)(*(undefined1 *)(uVar4 + 2 + iVar2))));
  iVar7 = (int)(uVar6 + 1 + (uint)*(byte *)(uVar4 + 7 + iVar2));
  if (uVar5 != 0) {
    if (uVar5 < uVar6 + 1) {
      uVar8 = (undefined4)(0x101ea);
      goto LAB_11308ae8;
    }
    do {
      if ((int)(uVar3 - 4) < (int)uVar5) {
        uVar8 = (undefined4)(0x101ef);
        goto LAB_11308ae8;
      }
      uVar4 = (uint)((uint)((uint)(*(undefined1 *)(uVar5 + iVar2)) << 8 | (uint)(*(undefined1 *)(uVar5 + 1 + iVar2))));
      uVar6 = (uint)((uint)((uint)(*(undefined1 *)(uVar5 + 2 + iVar2)) << 8 | (uint)(*(undefined1 *)(uVar5 + 3 + iVar2))));
      iVar7 = (int)(iVar7 + uVar6);
      uVar6 = (uint)(uVar6 + uVar5);
      uVar5 = (uint)(uVar4);
    } while (uVar6 + 3 < uVar4);
    if (uVar4 != 0) {
      uVar8 = (undefined4)(0x101f9);
      goto LAB_11308ae8;
    }
    if (uVar3 < uVar6) {
      uVar8 = (undefined4)(FUN_11341510());
      return (undefined4)(uVar8);
    }
  }
  if ((iVar7 <= (int)uVar3) && (iVar1 <= iVar7)) {
    *(uint *)(param_1 + 0x14) = iVar7 - iVar1 & 0xffff;
    return (undefined4)(0);
  }
  uVar8 = (undefined4)(0x10209);
LAB_11308ae8:
  thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",uVar8,
                     "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
  return (undefined4)(0xb);
}


// Reference entry 11309310; body size 89 bytes.
#line 1 "ENTRY_11309310"

int FUN_11309310(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(param_2);
  piVar1 = (int *)(param_1);
  iVar3 = (int)((**(code **)(*param_1 + 0xcc))(*param_1,param_2,&param_1,param_4));
  if (iVar3 == 0) {
    iVar3 = (int)(param_1[2]);
    if (iVar2 != *(int *)(iVar3 + 4)) {
      *(int *)(iVar3 + 0x38) = param_1[1];
      *(int **)(iVar3 + 0x48) = param_1;
      *(int **)(iVar3 + 0x34) = piVar1;
      *(int *)(iVar3 + 4) = iVar2;
      *(byte *)(iVar3 + 9) = (iVar2 != 1) - 1U & 100;
    }
    *param_3 = (int)(iVar3);
    iVar3 = (int)(0);
  }
  return (int)(iVar3);
}


// Reference entry 11309de0; body size 86 bytes.
#line 1 "ENTRY_11309de0"

void FUN_11309de0(int param_1,short param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 0x10));
  iVar2 = (int)((*(int *)(param_3 + 0xc) - (uint)uVar1) % (*(int *)(*(int *)(param_1 + 0x34) + 0x28) - 4U)
          + (uint)uVar1);
  uVar3 = (ushort)((ushort)iVar2);
  if ((int)(uint)*(ushort *)(param_1 + 0xe) < iVar2) {
    uVar3 = (ushort)(uVar1);
  }
  *(ushort *)(param_3 + 0x10) = uVar3;
  *(ushort *)(param_3 + 0x12) = (*(short *)(param_3 + 8) - param_2) + 4 + uVar3;
  return;
}


// Reference entry 1130a770; body size 151 bytes.
#line 1 "ENTRY_1130a770"

byte * FUN_1130a770(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)((byte *)((uint)*(byte *)(param_1 + 10) + param_2));
  uVar3 = (uint)((uint)*pbVar5);
  if (0x7f < uVar3) {
    pbVar6 = (byte *)(pbVar5 + 8);
    uVar3 = (uint)(uVar3 & 0x7f);
    do {
      pbVar1 = (byte *)(pbVar5 + 1);
      pbVar5 = (byte *)(pbVar5 + 1);
      uVar3 = (uint)(uVar3 << 7 | *pbVar1 & 0x7f);
      if (*pbVar5 < 0x80) break;
    } while (pbVar5 < pbVar6);
  }
  pbVar6 = (byte *)(pbVar5 + 1);
  if (*(char *)(param_1 + 2) != '\0') {
    do {
      bVar2 = (byte)(*pbVar6);
      pbVar6 = (byte *)(pbVar6 + 1);
      if (-1 < (char)bVar2) break;
    } while (pbVar6 < pbVar5 + 10);
  }
  if (*(ushort *)(param_1 + 0xe) < uVar3) {
    uVar4 = (uint)((uint)*(ushort *)(param_1 + 0x10));
    uVar3 = (uint)((uVar3 - uVar4) % (*(int *)(*(int *)(param_1 + 0x34) + 0x28) - 4U) + uVar4);
    if (*(ushort *)(param_1 + 0xe) < uVar3) {
      uVar3 = (uint)(uVar4);
    }
    pbVar6 = (byte *)((byte *)(((int)pbVar6 - param_2 & 0xffffU) + uVar3 + 4));
  }
  else {
    pbVar6 = (byte *)(pbVar6 + (uVar3 - param_2));
    if (pbVar6 < (byte *)0x4) {
      return (byte *)((byte *)0x4);
    }
  }
  return (byte *)(pbVar6);
}


// Reference entry 1130a8f0; body size 102 bytes.
#line 1 "ENTRY_1130a8f0"

void FUN_1130a8f0(int param_1,undefined4 param_2)

{
 try {
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    iVar1 = (int)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x38) != 0) {
      thunk_FUN_11397c20(iVar1,&DAT_11881ac8,1);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_11397d20(iVar1,*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x24));
    }
    thunk_FUN_11397ee0(iVar1,param_2,&stack0x0000000c);
    if (*(char *)(param_1 + 0x3c) == '\a') {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  }
  return;

 } catch (...) { }
}


// Reference entry 1130d630; body size 91 bytes.
#line 1 "ENTRY_1130d630"

void FUN_1130d630(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_2) {
    iVar1 = (int)(*(int *)(param_1 + 0x6c));
    if (*(int *)(param_1 + 0x70) <= iVar1) {
      FUN_1131dfc0(param_1,0x30,param_2,param_3,1);
      return;
    }
    *(int *)(param_1 + 0x6c) = iVar1 + 1;
    iVar2 = (int)(*(int *)(param_1 + 0x68));
    *(undefined4 *)(iVar2 + iVar1 * 0x14) = 0x30;
    *(int *)(iVar2 + 4 + iVar1 * 0x14) = param_2;
    *(undefined4 *)(iVar2 + 0xc + iVar1 * 0x14) = 1;
    iVar2 = (int)(iVar2 + iVar1 * 0x14);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 8) = param_3;
  }
  return;
}


// Reference entry 11312ce0; body size 115 bytes.
#line 1 "ENTRY_11312ce0"

void FUN_11312ce0(int *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = (int)(0);
  if ((*(byte *)((int)param_2 + 10) & 4) == 0) {
    while (((*param_1 == 0 || ((*(byte *)(*param_2 + 4) & 1) != 0)) &&
           ((param_1[0x12] & param_2[10]) == 0 && (param_1[0x13] & param_2[0xb]) == 0))) {
      if ((iVar2 == 0) || ((*(ushort *)((int)param_2 + 10) & 0x400) == 0)) {
        *(ushort *)((int)param_2 + 10) = *(ushort *)((int)param_2 + 10) | 4;
      }
      else {
        *(ushort *)((int)param_2 + 10) = *(ushort *)((int)param_2 + 10) | 0x200;
      }
      if (param_2[4] < 0) {
        return;
      }
      param_2 = (int *)((int *)(param_2[4] * 0x30 + *(int *)(param_2[1] + 0x14)));
      pcVar1 = (char *)((char *)((int)param_2 + 0xe));
      *pcVar1 = (char)(*pcVar1 + -1);
      if (*pcVar1 != '\0') {
        return;
      }
      iVar2 = (int)(iVar2 + 1);
      if ((*(byte *)((int)param_2 + 10) & 4) != 0) {
        return;
      }
    }
  }
  return;
}


// Reference entry 11312ef0; body size 286 bytes.
#line 1 "ENTRY_11312ef0"

void FUN_11312ef0(int param_1,int param_2,int param_3,int *param_4)

{
  short *psVar1;
  void *_Dst;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*param_4 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 0x38));
    _Dst = (void *)((void *)(*(int *)(param_1 + 0x40) + param_2 * 2));
    uVar5 = (uint)((uint)((uint)(*(undefined1 *)(*(int *)(param_1 + 0x40) + param_2 * 2)) << 8 | (uint)(*(undefined1 *)((int)_Dst + 1))));
    uVar3 = (uint)((uint)*(byte *)(param_1 + 9));
    if (*(uint *)(*(int *)(param_1 + 0x34) + 0x28) < uVar5 + param_3) {
      thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x11474,
                         "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
      *param_4 = (int)(0xb);
      return;
    }
    iVar4 = (int)(FUN_1131bab0(param_1,uVar5,param_3));
    if (iVar4 != 0) {
      *param_4 = (int)(iVar4);
      return;
    }
    psVar1 = (short *)((short *)(param_1 + 0x18));
    *psVar1 = (short)(*psVar1 + -1);
    if (*psVar1 == 0) {
      *(undefined4 *)(uVar3 + 1 + iVar2) = 0;
      *(undefined1 *)(uVar3 + 7 + iVar2) = 0;
      *(char *)(uVar3 + 5 + iVar2) =
           (char)((uint)*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x28) >> 8);
      *(undefined1 *)(uVar3 + 6 + iVar2) = *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x28);
      *(uint *)(param_1 + 0x14) =
           ((*(int *)(*(int *)(param_1 + 0x34) + 0x28) - (uint)*(byte *)(param_1 + 10)) -
           (uint)*(byte *)(param_1 + 9)) + -8;
      return;
    }
    memmove(_Dst,(void *)((int)_Dst + 2),((uint)*(ushort *)(param_1 + 0x18) - param_2) * 2);
    *(undefined1 *)(uVar3 + 3 + iVar2) = *(undefined1 *)(param_1 + 0x19);
    *(undefined1 *)(uVar3 + 4 + iVar2) = *(undefined1 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 2;
  }
  return;
}


// Reference entry 113130f0; body size 69 bytes.
#line 1 "ENTRY_113130f0"

int FUN_113130f0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = (int)(FUN_11313060(param_1,param_2));
    if ((param_2 & 1) != 0) {
      iVar2 = (int)(FUN_113130f0(*(undefined4 *)(param_1 + 0x10),param_2));
      iVar3 = (int)(FUN_113130f0(*(undefined4 *)(param_1 + 0xc),param_2));
      iVar1 = (int)(iVar3 + iVar1 + iVar2);
    }
    return (int)(iVar1);
  }
  return (int)(0);
}


// Reference entry 113135b0; body size 209 bytes.
#line 1 "ENTRY_113135b0"

void FUN_113135b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = (int)(0);
  iVar3 = (int)(0);
  if (*(ushort *)(param_1 + 0x34) != 0) {
    do {
      sVar4 = (short)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 2));
      if (sVar4 < 0) {
        uVar1 = (uint)(1);
      }
      else {
        uVar1 = (uint)((uint)*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0xe + sVar4 * 0x14));
      }
      iVar3 = (int)(iVar3 + 1);
      iVar5 = (int)(iVar5 + uVar1);
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x34));
  }
  uVar1 = (uint)(iVar5 * 4);
  sVar4 = (short)(0x28);
  if (uVar1 < 8) {
    uVar2 = (uint)(uVar1);
    if (uVar1 < 2) {
      *(undefined2 *)(param_1 + 0x30) = 0;
      return;
    }
    do {
      sVar4 = (short)(sVar4 + -10);
      uVar1 = (uint)(uVar2 * 2);
      if ((int)uVar2 < 0) break;
      uVar2 = (uint)(uVar1);
    } while (uVar1 < 8);
  }
  else {
    for (; 0xff < uVar1; uVar1 = uVar1 >> 4) {
      sVar4 = (short)(sVar4 + 0x28);
    }
    for (; 0xf < uVar1; uVar1 = uVar1 >> 1) {
      sVar4 = (short)(sVar4 + 10);
    }
  }
  *(short *)(param_1 + 0x30) = (&DAT_12122250)[uVar1 & 7] + -10 + sVar4;
  return;
}


// Reference entry 11317720; body size 73 bytes.
#line 1 "ENTRY_11317720"

void FUN_11317720(undefined1 *param_1,undefined4 param_2)

{
  while ((param_1 != (undefined1 *)0x0 && ((*(uint *)(param_1 + 4) & 0x41000) != 0))) {
    if ((*(uint *)(param_1 + 4) & 0x40000) == 0) {
      param_1 = (undefined1 *)(*(undefined1 **)(param_1 + 0xc));
    }
    else {
      param_1 = (undefined1 *)(*(undefined1 **)(*(int *)(param_1 + 0x14) + 4));
    }
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffefff;
  param_1[2] = (undefined1)(*param_1);
  *param_1 = (undefined1)(0xad);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}


// Reference entry 11317c10; body size 180 bytes.
#line 1 "ENTRY_11317c10"

uint FUN_11317c10(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = (int)(0);
  uVar4 = (uint)(*(uint *)(param_1 + 0x28) / 5);
  if (1 < param_2) {
    iVar3 = (int)((param_2 - 2) - (param_2 - 2) % (uVar4 + 1));
    iVar3 = (int)((iVar3 == DAT_12121fa0 / *(uint *)(param_1 + 0x24) - 1) + 2 + iVar3);
  }
  uVar5 = (uint)((param_2 - ((iVar3 - param_2) + uVar4 + param_3) / uVar4) - param_3);
  uVar1 = (uint)(DAT_12121fa0 / *(uint *)(param_1 + 0x24) + 1);
  if (param_2 <= uVar1) goto LAB_11317c90;
  if (uVar1 <= uVar5) goto LAB_11317c90;
  do {
    uVar5 = (uint)(uVar5 - 1);
LAB_11317c90:
    if (uVar5 < 2) {
      uVar2 = (uint)(0);
    }
    else {
      iVar3 = (int)((uVar5 - 2) - (uVar5 - 2) % (uVar4 + 1));
      uVar2 = (uint)((3 - (uint)(iVar3 + 2U != uVar1)) + iVar3);
    }
  } while ((uVar2 == uVar5) || (uVar5 == uVar1));
  return (uint)(uVar5);
}


// Reference entry 11319870; body size 82 bytes.
#line 1 "ENTRY_11319870"

undefined4 FUN_11319870(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(0);
  if (0 < *(int *)(param_2 + 0x14)) {
    piVar2 = (int *)((int *)(param_2 + 0x24));
    do {
      if ((-1 < *(int *)(param_3 + *piVar2 * 4)) ||
         ((*piVar2 == (int)*(short *)(param_1 + 0x28) && (param_4 != 0)))) {
        return (undefined4)(1);
      }
      iVar1 = (int)(iVar1 + 1);
      piVar2 = (int *)(piVar2 + 2);
    } while (iVar1 < *(int *)(param_2 + 0x14));
  }
  return (undefined4)(0);
}


// Reference entry 1131bab0; body size 801 bytes.
#line 1 "ENTRY_1131bab0"

undefined4 FUN_1131bab0(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  byte local_12;
  uint local_10;
  uint local_c;
  
  uVar5 = (uint)(param_3 & 0xffff);
  uVar9 = (uint)(param_2 & 0xffff);
  local_c = (uint)(uVar5 + uVar9);
  bVar1 = (byte)(*(byte *)(param_1 + 9));
  local_12 = (byte)(0);
  local_10 = (uint)((uint)(ushort)(bVar1 + 1));
  iVar4 = (int)(*(int *)(param_1 + 0x38));
  cVar2 = (char)(*(char *)(local_10 + 1 + iVar4));
  if ((cVar2 == '\0') && (*(char *)(local_10 + iVar4) == '\0')) {
    uVar7 = (ushort)(0);
  }
  else {
    uVar7 = (ushort)(((uint)(*(undefined1 *)(local_10 + iVar4)) << 8 | (uint)(cVar2)));
    while (uVar12 = (uint)uVar7, uVar7 < (ushort)param_2) {
      if (uVar12 < local_10 + 4) {
        if (uVar7 != 0) {
          thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x1013e,
                             "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
          return (undefined4)(0xb);
        }
        break;
      }
      local_10 = (uint)(uVar12);
      uVar7 = (ushort)(((uint)(*(undefined1 *)(uVar12 + iVar4)) << 8 | (uint)(*(undefined1 *)(uVar12 + 1 + iVar4))));
    }
    uVar10 = (uint)(*(uint *)(*(int *)(param_1 + 0x34) + 0x28));
    if (uVar10 - 4 < uVar12) {
      thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x10143,
                         "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
      return (undefined4)(0xb);
    }
    if ((uVar7 != 0) && (uVar12 <= local_c + 3)) {
      local_12 = (byte)((char)uVar7 - (char)local_c);
      if (uVar12 < local_c) {
        uVar6 = (undefined4)(FUN_11341510(0x1014f));
        return (undefined4)(uVar6);
      }
      local_c = (uint)(((uint)(*(undefined1 *)(iVar4 + 2 + uVar12)) << 8 | (uint)(*(undefined1 *)(iVar4 + 3 + uVar12))) +
                uVar12);
      if (uVar10 < local_c) {
        uVar6 = (undefined4)(FUN_11341510(0x10152));
        return (undefined4)(uVar6);
      }
      param_3 = (uint)(local_c - param_2 & 0xffff);
      uVar7 = (ushort)(((uint)(*(undefined1 *)(iVar4 + uVar12)) << 8 | (uint)(*(undefined1 *)(iVar4 + 1 + uVar12))));
    }
    uVar12 = (uint)((uint)bVar1);
    if ((uVar12 + 1 < local_10) &&
       (uVar10 = ((uint)(*(undefined1 *)(local_10 + 2 + iVar4)) << 8 | (uint)(*(undefined1 *)(local_10 + 3 + iVar4))) + local_10, uVar9 <= uVar10 + 3)) {
      if (uVar9 < uVar10) {
        uVar6 = (undefined4)(FUN_11341510(0x1015f));
        return (undefined4)(uVar6);
      }
      local_12 = (byte)(local_12 + ((char)param_2 - (char)uVar10));
      param_3 = (uint)(local_c - local_10 & 0xffff);
      param_2 = (uint)(local_10);
    }
    bVar3 = (byte)(*(byte *)(iVar4 + 7 + uVar12));
    if (bVar3 < local_12) {
      thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x10165,
                         "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
      return (undefined4)(0xb);
    }
    *(byte *)(iVar4 + 7 + uVar12) = bVar3 - local_12;
  }
  uVar9 = (uint)((uint)bVar1);
  uVar8 = (ushort)(((uint)(*(undefined1 *)(iVar4 + 5 + uVar9)) << 8 | (uint)(*(undefined1 *)(iVar4 + 6 + uVar9))));
  uVar11 = (undefined1)((undefined1)(uVar7 >> 8));
  if (uVar8 < (ushort)param_2) {
    *(char *)(local_10 + iVar4) = (char)(param_2 >> 8);
    *(char *)(local_10 + 1 + iVar4) = (char)param_2;
  }
  else {
    if ((ushort)param_2 < uVar8) {
      thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x1016d,
                         "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
      return (undefined4)(0xb);
    }
    if (local_10 != uVar9 + 1) {
      uVar6 = (undefined4)(FUN_11341510(0x1016e));
      return (undefined4)(uVar6);
    }
    *(undefined1 *)(iVar4 + 1 + uVar9) = uVar11;
    *(char *)(iVar4 + 2 + uVar9) = (char)uVar7;
    *(char *)(iVar4 + 5 + uVar9) = (char)(local_c >> 8);
    *(char *)(iVar4 + 6 + uVar9) = (char)local_c;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x34) + 0x18) & 0xc) != 0) {
    memset((void *)((param_2 & 0xffff) + iVar4),0,param_3 & 0xffff);
  }
  param_2 = (uint)(param_2 & 0xffff);
  *(char *)(param_2 + 1 + iVar4) = (char)uVar7;
  *(char *)(param_2 + 2 + iVar4) = (char)(param_3 >> 8);
  *(undefined1 *)(param_2 + iVar4) = uVar11;
  *(char *)(param_2 + 3 + iVar4) = (char)param_3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar5;
  return (undefined4)(0);
}


// Reference entry 1131ced0; body size 162 bytes.
#line 1 "ENTRY_1131ced0"

int FUN_1131ced0(byte *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar5;
  int iVar6;
  undefined4 *local_8;
  uint uVar4;
  
  local_8 = (undefined4 *)(&param_2);
  iVar6 = (int)(0);
  while( true ) {
    iVar5 = (int)(0);
    bVar1 = (byte)(param_2[3]);
    cVar3 = (char)(*param_2 + -0x30);
    uVar4 = (uint)((uint)((uint)(param_2[1] + -0x30) << 8 | (uint)(cVar3)));
    while (cVar3 != '\0') {
      bVar2 = (byte)(*param_1);
      cVar3 = (char)((char)uVar4 + -1);
      uVar4 = (uint)(((uint)((int3)(uVar4 >> 8)) << 8 | (uint)(cVar3)));
      if (((&DAT_119fb400)[bVar2] & 4) == 0) {
        return (int)(iVar6);
      }
      param_1 = (byte *)(param_1 + 1);
      iVar5 = (int)((int)(char)bVar2 + (iVar5 * 5 + -0x18) * 2);
    }
    if (iVar5 < (char)(uVar4 >> 8)) {
      return (int)(iVar6);
    }
    if ((int)(uint)*(ushort *)(&DAT_119fb1ea + param_2[2] * 2) < iVar5) {
      return (int)(iVar6);
    }
    if ((bVar1 != 0) && (bVar1 != *param_1)) break;
    param_2 = (char *)(param_2 + 4);
    local_8 = (undefined4 *)(local_8 + 1);
    param_1 = (byte *)(param_1 + 1);
    iVar6 = (int)(iVar6 + 1);
    *(int *)*local_8 = (undefined4)(iVar5);
    if (bVar1 == 0) {
      return (int)(iVar6);
    }
  }
  return (int)(iVar6);
}


// Reference entry 1131df50; body size 85 bytes.
#line 1 "ENTRY_1131df50"

int * FUN_1131df50(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1);
  iVar3 = (int)(*param_1);
  do {
    iVar2 = (int)(FUN_113532f0(iVar3,&param_1));
    iVar3 = (int)(iVar3 + iVar2);
  } while (param_1 == (int *)0xb3);
  if ((((param_1 == (int *)0x3b) || (param_1 == (int *)0x73)) || (param_1 == (int *)0x74)) ||
     (((param_1 == (int *)0xa1 || (param_1 == (int *)0xa2)) ||
      (*(short *)(&DAT_119fac60 + (int)param_1 * 2) == 0x3b)))) {
    param_1 = (int *)((int *)0x3b);
  }
  *piVar1 = (int)(iVar3);
  return (int *)(param_1);
}


// Reference entry 1131f4c0; body size 250 bytes.
#line 1 "ENTRY_1131f4c0"

int FUN_1131f4c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(*(int *)(param_1 + 0x6c));
  if (iVar3 < *(int *)(param_1 + 0x70)) {
    *(int *)(param_1 + 0x6c) = iVar3 + 1;
    iVar1 = (int)(*(int *)(param_1 + 0x68));
    *(undefined4 *)(iVar1 + iVar3 * 0x14) = 0x50;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 0x14) = 3;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 0x14) = 1;
    *(undefined4 *)(iVar1 + 0xc + iVar3 * 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x10 + iVar3 * 0x14) = 0;
  }
  else {
    FUN_1131dfc0(param_1,0x50,3,1,0);
  }
  iVar3 = (int)(*(int *)(param_1 + 0x6c));
  if (iVar3 < *(int *)(param_1 + 0x70)) {
    *(int *)(param_1 + 0x6c) = iVar3 + 1;
    iVar1 = (int)(*(int *)(param_1 + 0x68));
    *(undefined4 *)(iVar1 + iVar3 * 0x14) = 0x30;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 0x14) = 1;
    *(int *)(iVar1 + 8 + iVar3 * 0x14) = iVar3 + 2;
    *(undefined4 *)(iVar1 + 0xc + iVar3 * 0x14) = 1;
    *(undefined4 *)(iVar1 + 0x10 + iVar3 * 0x14) = 0;
  }
  else {
    iVar3 = (int)(FUN_1131dfc0(param_1,0x30,1,iVar3 + 2,1));
  }
  iVar1 = (int)(*(int *)(param_1 + 0x6c));
  if (*(int *)(param_1 + 0x70) <= iVar1) {
    FUN_1131dfc0(param_1,0x44,0,0,0);
    return (int)(iVar3);
  }
  *(int *)(param_1 + 0x6c) = iVar1 + 1;
  iVar2 = (int)(*(int *)(param_1 + 0x68));
  *(undefined4 *)(iVar2 + iVar1 * 0x14) = 0x44;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 0x14) = 0;
  *(undefined4 *)(iVar2 + 8 + iVar1 * 0x14) = 0;
  *(undefined4 *)(iVar2 + 0xc + iVar1 * 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x10 + iVar1 * 0x14) = 0;
  return (int)(iVar3);
}


// Reference entry 1131f630; body size 91 bytes.
#line 1 "ENTRY_1131f630"

void FUN_1131f630(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  
  if (*(char *)(param_1 + 0xb) != '\0') {
    *(undefined1 *)(param_1 + 0xb) = 0;
    for (puVar1 = (undefined1 *)(*(undefined1 **)(*(int *)(param_1 + 4) + 8)); puVar1 != (undefined1 *)0x0;
        puVar1 = *(undefined1 **)(puVar1 + 0x18)) {
      if ((((puVar1[1] & 0x10) != 0) &&
          (*(undefined1 *)(param_1 + 0xb) = 1, *(int *)(puVar1 + 0x40) == param_2)) &&
         ((param_5 != 0 ||
          ((*(int *)(puVar1 + 0x20) == param_3 && (*(int *)(puVar1 + 0x24) == param_4)))))) {
        *puVar1 = (undefined1)(1);
      }
    }
  }
  return;
}


// Reference entry 1131f720; body size 180 bytes.
#line 1 "ENTRY_1131f720"

void FUN_1131f720(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)*param_1);
  if ((*piVar1 < 2) || ((code *)piVar1[0x12] == (code *)0x0)) {
    (*(code *)piVar1[0x10])(piVar1,local_8);
    uVar5 = (undefined8)(thunk_FUN_1148af70());
  }
  else {
    (*(code *)piVar1[0x12])(piVar1,&local_18);
    uVar5 = (undefined8)(((unsigned long long)(*(uint *)((char *)&local_18 + 4)) << 32 | (unsigned long long)((uint)local_18)));
  }
  *(uint *)((char *)&local_18 + 4) = (int)((ulonglong)uVar5 >> 0x20);
  *(uint *)((char *)&local_18 + 0) = (uint)uVar5;
  bVar4 = (bool)((uint)local_18 < *(uint *)(param_2 + 0x88));
  iVar3 = (int)((uint)local_18 - *(uint *)(param_2 + 0x88));
  iVar2 = (int)(*(uint *)((char *)&local_18 + 4) - *(int *)(param_2 + 0x8c));
  local_18 = (undefined8)(uVar5);
  uStack_10 = (undefined8)(__allmul(iVar3,iVar2 - (uint)bVar4,1000000,0));
  if ((*(byte *)(param_1 + 0x16) & 2) != 0) {
    (*(code *)param_1[0x33])(2,param_1[0x34],param_2,&uStack_10);
  }
  *(undefined4 *)(param_2 + 0x8c) = 0;
  *(undefined4 *)(param_2 + 0x88) = 0;
  return;
}


// Reference entry 1131f9b0; body size 398 bytes.
#line 1 "ENTRY_1131f9b0"

int FUN_1131f9b0(undefined4 param_1,char *param_2,undefined1 *param_3,undefined4 *param_4,
                int *param_5)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_4 [4];
  
  pcVar9 = (char *)(param_2);
  cVar5 = (char)(*param_2);
  if (cVar5 == -0x57) {
    piVar1 = (int *)(*(int **)(param_2 + 0x14));
    if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
      pcVar2 = (char *)((char *)piVar1[6]);
      if ((*pcVar2 == -0x5c) &&
         ((*(int *)(pcVar2 + 0x28) != 0 && (*(int *)(*(int *)(pcVar2 + 0x28) + 0x38) != 0)))) {
        uVar3 = (undefined4)(*(undefined4 *)(param_2 + 8));
        iVar8 = (int)(0);
        param_2 = (char *)(pcVar2);
        do {
          iVar6 = (int)(FUN_1136cfd0(uVar3,(&PTR_s_match_119fc13c)[iVar8 * 2]));
          if (iVar6 == 0) {
            *param_3 = (undefined1)((&DAT_119fc140)[iVar8 * 8]);
            *param_5 = (int)(piVar1[1]);
            *param_4 = (undefined4)(param_2);
            return (int)(1);
          }
          iVar8 = (int)(iVar8 + 1);
          pcVar2 = (char *)(param_2);
        } while (iVar8 < 4);
      }
      param_2 = (char *)(pcVar2);
      pcVar2 = (char *)((char *)piVar1[1]);
      if (((*pcVar2 == -0x5c) && (iVar8 = *(int *)(pcVar2 + 0x28), iVar8 != 0)) &&
         (*(int *)(iVar8 + 0x38) != 0)) {
        iVar8 = (int)(FUN_11353ad0(param_1,iVar8));
        pcVar4 = (code *)(*(code **)(**(int **)(iVar8 + 8) + 0x48));
        if (pcVar4 != (code *)0x0) {
          iVar8 = (int)((*pcVar4)(*(int **)(iVar8 + 8),2,*(undefined4 *)(pcVar9 + 8),local_4,&param_2));
          if (0x95 < iVar8) {
            *param_3 = (undefined1)((char)iVar8);
            *param_5 = (int)(piVar1[6]);
            *param_4 = (undefined4)(pcVar2);
            return (int)(1);
          }
        }
      }
    }
  }
  else if (((cVar5 == '4') || (cVar5 == -0x58)) || (cVar5 == '3')) {
    pcVar9 = (char *)(*(char **)(param_2 + 0xc));
    iVar8 = (int)(0);
    pcVar2 = (char *)(*(char **)(param_2 + 0x10));
    if (((*pcVar9 == -0x5c) && (*(int *)(pcVar9 + 0x28) != 0)) &&
       (*(int *)(*(int *)(pcVar9 + 0x28) + 0x38) != 0)) {
      iVar8 = (int)(1);
    }
    pcVar7 = (char *)(pcVar2);
    if (((pcVar2 != (char *)0x0) && (*pcVar2 == -0x5c)) &&
       ((*(int *)(pcVar2 + 0x28) != 0 && (*(int *)(*(int *)(pcVar2 + 0x28) + 0x38) != 0)))) {
      iVar8 = (int)(iVar8 + 1);
      pcVar7 = (char *)(pcVar9);
      pcVar9 = (char *)(pcVar2);
    }
    *param_4 = (undefined4)(pcVar9);
    *param_5 = (int)((int)pcVar7);
    cVar5 = (char)(*param_2);
    if (cVar5 == '4') {
      *param_3 = (undefined1)(0x44);
      cVar5 = (char)(*param_2);
    }
    if (cVar5 == -0x58) {
      *param_3 = (undefined1)(0x45);
      cVar5 = (char)(*param_2);
    }
    if (cVar5 == '3') {
      *param_3 = (undefined1)(0x46);
    }
    return (int)(iVar8);
  }
  return (int)(0);
}


// Reference entry 11324590; body size 284 bytes.
#line 1 "ENTRY_11324590"

int FUN_11324590(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  
  uVar7 = (uint)((uint)*(byte *)(param_1 + 9));
  iVar3 = (int)(*(int *)(param_1 + 0x38));
  iVar4 = (int)(*(int *)(*(int *)(param_1 + 0x34) + 0x28));
  iVar10 = (int)(iVar4 - param_2);
  uVar5 = (uint)(uVar7 + 1);
  uVar6 = (uint)((uint)((uint)(*(undefined1 *)(uVar7 + 1 + iVar3)) << 8 | (uint)(*(undefined1 *)(uVar7 + 2 + iVar3))));
  while( true ) {
    if (iVar10 < (int)uVar6) {
      if ((int)uVar6 <= iVar4 + -4) {
        return (int)(0);
      }
      uVar12 = (undefined4)(0x100af);
      goto LAB_1132461b;
    }
    puVar1 = (undefined1 *)((undefined1 *)(uVar6 + iVar3));
    uVar11 = (uint)((uint)((uint)(*(undefined1 *)(uVar6 + 2 + iVar3)) << 8 | (uint)(puVar1[3])));
    iVar8 = (int)(uVar11 - param_2);
    if (-1 < iVar8) break;
    uVar9 = (uint)((uint)((uint)(*puVar1) << 8 | (uint)(puVar1[1])));
    uVar11 = (uint)(uVar11 + uVar6);
    uVar5 = (uint)(uVar6);
    uVar6 = (uint)(uVar9);
    if (uVar9 <= uVar11) {
      if (uVar9 != 0) {
        uVar12 = (undefined4)(0x100a8);
LAB_1132461b:
        thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",uVar12,
                           "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
        *param_3 = (undefined4)(0xb);
      }
      return (int)(0);
    }
  }
  if (iVar8 < 4) {
    if (0x39 < *(byte *)(iVar3 + 7 + uVar7)) {
      return (int)(0);
    }
    *(undefined2 *)(uVar5 + iVar3) = *(undefined2 *)(uVar6 + iVar3);
    pcVar2 = (char *)((char *)(iVar3 + 7 + uVar7));
    *pcVar2 = (char)(*pcVar2 + (char)iVar8);
    return (int)(iVar8 + uVar6 + iVar3);
  }
  if ((int)(iVar8 + uVar6) <= iVar10) {
    *(char *)(uVar6 + 3 + iVar3) = (char)iVar8;
    *(char *)(uVar6 + 2 + iVar3) = (char)((uint)iVar8 >> 8);
    return (int)(iVar8 + uVar6 + iVar3);
  }
  uVar12 = (undefined4)(0x1009a);
  goto LAB_1132461b;
}


// Reference entry 11324700; body size 1072 bytes.
#line 1 "ENTRY_11324700"

int FUN_11324700(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  iVar4 = (int)(*(int *)(param_1 + 0x38));
  bVar7 = (byte)(*(byte *)(param_1 + 10));
  bVar1 = (byte)(*(byte *)(param_1 + 9));
  uVar13 = (uint)(*(int *)(*(int *)(param_1 + 0x34) + 0x28) + iVar4);
  uVar10 = (uint)(0);
  uVar11 = (uint)(0);
  param_3 = (int)(param_3 + param_2);
  local_18 = (int)(0);
  iVar15 = (int)(0);
  if (param_2 < param_3) {
    do {
      uVar5 = (uint)(*(uint *)(*(int *)(param_4 + 8) + param_2 * 4));
      uVar14 = (uint)(uVar11);
      if ((bVar1 + 8 + (uint)bVar7 + iVar4 <= uVar5) && (uVar5 < uVar13)) {
        uVar14 = (uint)((uint)*(ushort *)(*(int *)(param_4 + 0xc) + param_2 * 2));
        if (uVar10 == uVar14 + uVar5) {
          uVar14 = (uint)(uVar11 + uVar14);
        }
        else {
          if (uVar10 != 0) {
            FUN_1131bab0(param_1,uVar10 - iVar4,uVar11);
          }
          if (uVar13 < uVar14 + uVar5) {
            return (int)(0);
          }
        }
        local_18 = (int)(local_18 + 1);
        uVar10 = (uint)(uVar5);
      }
      param_2 = (int)(param_2 + 1);
      uVar11 = (uint)(uVar14);
    } while (param_2 < param_3);
    iVar15 = (int)(local_18);
    if (uVar10 != 0) {
      uVar14 = (uint)(uVar14 & 0xffff);
      uVar11 = (uint)(uVar10 - iVar4 & 0xffff);
      local_10 = (uint)(uVar14 + uVar11);
      bVar7 = (byte)(0);
      bVar1 = (byte)(*(byte *)(param_1 + 9));
      iVar6 = (int)(*(int *)(param_1 + 0x38));
      local_14 = (uint)((uint)(ushort)(bVar1 + 1));
      cVar2 = (char)(*(char *)(local_14 + 1 + iVar6));
      local_c = (uint)(uVar14);
      if ((cVar2 == '\0') && (*(char *)(local_14 + iVar6) == '\0')) {
        uVar8 = (ushort)(0);
      }
      else {
        uVar8 = (ushort)(((uint)(*(undefined1 *)(local_14 + iVar6)) << 8 | (uint)(cVar2)));
        while (uVar13 = (uint)uVar8, uVar8 < (ushort)(uVar10 - iVar4)) {
          if (uVar13 < local_14 + 4) {
            if (uVar8 != 0) {
              thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x1013e,
                                 "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2")
              ;
              return (int)(local_18);
            }
            break;
          }
          local_14 = (uint)(uVar13);
          uVar8 = (ushort)(((uint)(*(undefined1 *)(uVar13 + iVar6)) << 8 | (uint)(*(undefined1 *)(uVar13 + 1 + iVar6))));
        }
        uVar10 = (uint)(*(uint *)(*(int *)(param_1 + 0x34) + 0x28));
        if (uVar10 - 4 < uVar13) {
          thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x10143,
                             "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
          return (int)(local_18);
        }
        if ((uVar8 != 0) && (uVar13 <= local_10 + 3)) {
          bVar7 = (byte)((char)uVar8 - (char)local_10);
          if (uVar13 < local_10) {
            thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x1014f,
                               "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
            return (int)(local_18);
          }
          local_10 = (uint)(((uint)(*(undefined1 *)(uVar13 + 2 + iVar6)) << 8 | (uint)(*(undefined1 *)(uVar13 + 3 + iVar6))) + uVar13);
          if (uVar10 < local_10) {
            FUN_11341510(0x10152);
            return (int)(local_18);
          }
          local_c = (uint)(local_10 - uVar11 & 0xffff);
          uVar8 = (ushort)(((uint)(*(undefined1 *)(uVar13 + iVar6)) << 8 | (uint)(*(undefined1 *)(uVar13 + 1 + iVar6))));
        }
        uVar10 = (uint)((uint)bVar1);
        if ((uVar10 + 1 < local_14) &&
           (uVar13 = ((uint)(*(undefined1 *)(local_14 + 2 + iVar6)) << 8 | (uint)(*(undefined1 *)(local_14 + 3 + iVar6))) + local_14,
           uVar11 <= uVar13 + 3)) {
          if (uVar11 < uVar13) {
            FUN_11341510(0x1015f);
            return (int)(local_18);
          }
          bVar7 = (byte)(bVar7 + ((char)uVar11 - (char)uVar13));
          local_c = (uint)(local_10 - local_14 & 0xffff);
          uVar11 = (uint)(local_14);
        }
        bVar3 = (byte)(*(byte *)(uVar10 + 7 + iVar6));
        if (bVar3 < bVar7) {
          thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x10165,
                             "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
          return (int)(local_18);
        }
        *(byte *)(uVar10 + 7 + iVar6) = bVar3 - bVar7;
      }
      uVar10 = (uint)((uint)bVar1);
      uVar9 = (ushort)(((uint)(*(undefined1 *)(uVar10 + 5 + iVar6)) << 8 | (uint)(*(undefined1 *)(uVar10 + 6 + iVar6))));
      uVar12 = (undefined1)((undefined1)(uVar8 >> 8));
      if (uVar9 < (ushort)uVar11) {
        *(char *)(local_14 + iVar6) = (char)(uVar11 >> 8);
        *(char *)(local_14 + 1 + iVar6) = (char)uVar11;
      }
      else {
        if ((ushort)uVar11 < uVar9) {
          thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x1016d,
                             "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
          return (int)(local_18);
        }
        if (local_14 != uVar10 + 1) {
          thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",0x1016e,
                             "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
          return (int)(local_18);
        }
        *(undefined1 *)(uVar10 + 1 + iVar6) = uVar12;
        *(char *)(uVar10 + 2 + iVar6) = (char)uVar8;
        *(char *)(uVar10 + 5 + iVar6) = (char)(local_10 >> 8);
        *(char *)(uVar10 + 6 + iVar6) = (char)local_10;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x34) + 0x18) & 0xc) != 0) {
        memset((void *)(uVar11 + iVar6),0,local_c);
      }
      *(char *)(uVar11 + 1 + iVar6) = (char)uVar8;
      *(char *)(uVar11 + 3 + iVar6) = (char)local_c;
      *(char *)(uVar11 + 2 + iVar6) = (char)(local_c >> 8);
      *(undefined1 *)(uVar11 + iVar6) = uVar12;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar14;
    }
  }
  return (int)(iVar15);
}


// Reference entry 11325130; body size 109 bytes.
#line 1 "ENTRY_11325130"

int FUN_11325130(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x11) < 4) || (*(byte *)(param_1 + 0x11) == 5)) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),4));
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x11) = 4;
        return (int)(0);
      }
      iVar1 = (int)(**(int **)(param_1 + 0x3c));
      if (iVar1 != 0) {
        if (*(char *)(param_1 + 0xd) == '\0') {
          (**(code **)(iVar1 + 0x20))(*(int **)(param_1 + 0x3c),1);
        }
        if (*(char *)(param_1 + 0x11) != '\x05') {
          *(undefined1 *)(param_1 + 0x11) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0xc);
      return (int)(iVar2);
    }
    *(undefined1 *)(param_1 + 0x11) = 4;
  }
  return (int)(0);
}


// Reference entry 11325270; body size 166 bytes.
#line 1 "ENTRY_11325270"

bool FUN_11325270(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    return (bool)(true);
  }
  if ((param_2 != 0) && (**(int **)(param_1 + 0x3c) != 0)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xe4));
    iVar4 = (int)(0);
    iVar3 = (int)(piVar1[4]);
    if (iVar3 < 0) {
      iVar3 = (int)(__alldiv((longlong)iVar3 * -0x400,piVar1[7] + piVar1[6],piVar1[7] + piVar1[6] >> 0x1f));
    }
    for (iVar2 = (int)(*piVar1); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      iVar4 = (int)(iVar4 + 1);
    }
    if (iVar3 == 0) {
      return (bool)(false);
    }
    iVar3 = (int)(__alldiv((longlong)iVar4 * 100,iVar3,iVar3 >> 0x1f));
    return (bool)(0x18 < iVar3);
  }
  return (bool)(false);
}


// Reference entry 113253f0; body size 76 bytes.
#line 1 "ENTRY_113253f0"

int FUN_113253f0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 <= (int)(uint)*(byte *)(param_1 + 0x11)) && (*(byte *)(param_1 + 0x11) != 5)) {
    return (int)(0);
  }
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),param_2),
     iVar1 != 0)) {
    return (int)(iVar1);
  }
  if ((*(char *)(param_1 + 0x11) != '\x05') || (param_2 == 4)) {
    *(char *)(param_1 + 0x11) = (char)param_2;
  }
  return (int)(0);
}


// Reference entry 11326740; body size 103 bytes.
#line 1 "ENTRY_11326740"

int FUN_11326740(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)(*(int *)(param_1 + 0x30));
  iVar4 = (int)(0);
  iVar5 = (int)(0);
  iVar2 = (int)(*(int *)(param_1 + 0x98) + -200);
  if (0 < iVar2) {
    if (399 < *(int *)(param_1 + 0x98) + -1) {
      do {
        iVar4 = (int)(iVar4 + (uint)*(byte *)(iVar2 + param_2));
        iVar1 = (int)(iVar2 + -200);
        iVar2 = (int)(iVar2 + -400);
        iVar5 = (int)(iVar5 + (uint)*(byte *)(iVar1 + param_2));
      } while (200 < iVar2);
    }
    if (0 < iVar2) {
      iVar3 = (int)(iVar3 + (uint)*(byte *)(iVar2 + param_2));
    }
    return (int)(iVar5 + iVar4 + iVar3);
  }
  return (int)(iVar3);
}


// Reference entry 11327ee0; body size 114 bytes.
#line 1 "ENTRY_11327ee0"

int FUN_11327ee0(int param_1,int param_2)

{
  int iVar1;
  
  do {
    if ((param_2 <= (int)(uint)*(byte *)(param_1 + 0x11)) && (*(byte *)(param_1 + 0x11) != 5)) {
      return (int)(0);
    }
    if (*(char *)(param_1 + 0xd) == '\0') {
      iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),param_2));
      if (iVar1 == 0) goto LAB_11327f1e;
    }
    else {
      iVar1 = (int)(0);
LAB_11327f1e:
      if ((*(char *)(param_1 + 0x11) != '\x05') || (param_2 == 4)) {
        *(char *)(param_1 + 0x11) = (char)param_2;
      }
    }
    if (iVar1 != 5) {
      return (int)(iVar1);
    }
    iVar1 = (int)((**(code **)(param_1 + 0xb0))(*(undefined4 *)(param_1 + 0xb4)));
    if (iVar1 == 0) {
      return (int)(5);
    }
  } while( true );
}


// Reference entry 1132ad60; body size 95 bytes.
#line 1 "ENTRY_1132ad60"

int * FUN_1132ad60(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)param_3[1]);
  puVar1[4] = (undefined4)(0);
  puVar1[5] = (undefined4)(0);
  puVar1[6] = (undefined4)(0);
  puVar1[7] = (undefined4)(0);
  *(undefined8 *)(puVar1 + 8) = 0;
  *puVar1 = (undefined4)(param_3);
  puVar1[1] = (undefined4)(*param_3);
  puVar1[2] = (undefined4)(puVar1 + 10);
  *(undefined8 *)(puVar1 + 10) = 0;
  puVar1[3] = (undefined4)(param_1);
  puVar1[6] = (undefined4)(param_2);
  *(undefined2 *)(puVar1 + 7) = 1;
  piVar2 = (int *)((int *)param_3[1]);
  if (*piVar2 == 0) {
    piVar2 = (int *)((int *)FUN_1132ad60(param_1,param_2,param_3));
    return (int *)(piVar2);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(short *)((int)piVar2 + 0x1e) = *(short *)((int)piVar2 + 0x1e) + 1;
  return (int *)(piVar2);
}


// Reference entry 1132b900; body size 70 bytes.
#line 1 "ENTRY_1132b900"

int FUN_1132b900(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 2) {
    return (int)(0);
  }
  iVar1 = (int)((param_2 - 2) - (param_2 - 2) % (*(uint *)(param_1 + 0x28) / 5 + 1));
  return (int)(iVar1 + 2 + (uint)(iVar1 == DAT_12121fa0 / *(uint *)(param_1 + 0x24) - 1));
}


// Reference entry 1132c1f0; body size 261 bytes.
#line 1 "ENTRY_1132c1f0"

void FUN_1132c1f0(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte local_10 [12];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_10);
  if ((param_3 & 0xff000000) == 0) {
    iVar4 = (int)(0);
    do {
      iVar6 = (int)(iVar4);
      bVar3 = (byte)((byte)param_2);
      param_2 = (uint)(param_2 >> 7 | param_3 << 0x19);
      local_10[iVar6] = (byte)(bVar3 | 0x80);
      param_3 = (uint)(param_3 >> 7);
      iVar4 = (int)(iVar6 + 1);
    } while (param_2 != 0 || param_3 != 0);
    local_10[0] = (byte)(local_10[0] & 0x7f);
    for (; -1 < iVar6; iVar6 = iVar6 + -1) {
      *param_1 = (byte)(local_10[iVar6]);
      param_1 = (byte *)(param_1 + 1);
    }
    thunk_FUN_1148ac28();
    return;
  }
  param_1[8] = (byte)((byte)param_2);
  uVar1 = (uint)((param_2 >> 8 | param_3 << 0x18) >> 7);
  param_1[7] = (byte)((byte)(param_2 >> 8) | 0x80);
  uVar2 = (uint)((uVar1 | (param_3 >> 8) << 0x19) >> 7);
  param_1[6] = (byte)((byte)uVar1 | 0x80);
  uVar1 = (uint)((uVar2 | (param_3 >> 0xf) << 0x19) >> 7);
  param_1[5] = (byte)((byte)uVar2 | 0x80);
  uVar2 = (uint)((uVar1 | (param_3 >> 0x16) << 0x19) >> 7);
  uVar5 = (uint)(uVar2 | (param_3 >> 0x1d) << 0x19);
  param_1[4] = (byte)((byte)uVar1 | 0x80);
  param_1[3] = (byte)((byte)uVar2 | 0x80);
  param_1[2] = (byte)((byte)(uVar5 >> 7) | 0x80);
  param_1[1] = (byte)((byte)(uVar5 >> 0xe) | 0x80);
  *param_1 = (byte)((byte)(uVar5 >> 0x15) | 0x80);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1132c7e0; body size 398 bytes.
#line 1 "ENTRY_1132c7e0"

void FUN_1132c7e0(int *param_1,undefined1 *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_1c;
  uint local_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_1c);
  *param_2 = (undefined1)(0);
  iVar2 = (int)((**(code **)(*param_1 + 0x18))(param_1,&local_18));
  if (((iVar2 == 0) && (-1 < iStack_14)) && ((0 < iStack_14 || (0xf < local_18)))) {
    uVar3 = (uint)((**(code **)(*param_1 + 8))
                      (param_1,&uStack_1c,4,local_18 - 0x10,iStack_14 - (uint)(local_18 < 0x10)));
    if (uVar3 == 0) {
      uVar5 = (uint)(uStack_1c >> 0x18 | (uStack_1c & 0xff0000) >> 8 | (uStack_1c & 0xff00) << 8 |
              uStack_1c << 0x18);
      if (uVar5 < param_3) {
        uStack_10 = (uint)(local_18 - 0x10);
        iVar2 = (int)(iStack_14 - (uint)(local_18 < 0x10));
        uStack_1c = (uint)(uVar3);
        if ((-1 < iVar2) && (((0 < iVar2 || (uVar5 <= uStack_10)) && (uVar5 != 0)))) {
          iVar2 = (int)(FUN_1132c340(param_1,local_18 - 0xc,iStack_14 - (uint)(local_18 < 0xc),&uStack_1c));
          if (iVar2 == 0) {
            iVar2 = (int)(FUN_1135a6a0(param_1,&iStack_c,8,local_18 - 8,iStack_14 - (uint)(local_18 < 8)));
            if (((iVar2 == 0) && (iStack_c == DAT_119fc0cc)) && (iStack_8 == DAT_119fc0d0)) {
              iVar2 = (int)(FUN_1135a6a0(param_1,param_2,uVar5,(local_18 - uVar5) - 0x10,
                                   (iStack_14 - (uint)(local_18 < uVar5)) -
                                   (uint)(local_18 - uVar5 < 0x10)));
              if (iVar2 == 0) {
                uVar3 = (uint)(0);
                uVar4 = (uint)(uStack_1c);
                if (uVar5 != 0) {
                  do {
                    pcVar1 = (char *)(param_2 + uVar3);
                    uVar3 = (uint)(uVar3 + 1);
                    uVar4 = (uint)(uVar4 - (int)*pcVar1);
                  } while (uVar3 < uVar5);
                }
                if (uVar4 != 0) {
                  uVar5 = (uint)(0);
                }
                *(undefined2 *)(param_2 + uVar5) = 0;
                thunk_FUN_1148ac28();
                return;
              }
            }
          }
        }
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1132cae0; body size 471 bytes.
#line 1 "ENTRY_1132cae0"

undefined4 FUN_1132cae0(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *_Src;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  char local_20;
  undefined1 *local_14;
  undefined1 *local_10;
  
  puVar3 = (undefined1 *)(*(undefined1 **)(param_4 + 0x38));
  bVar2 = (byte)(*(byte *)(param_4 + 9));
  puVar12 = (undefined1 *)(*(undefined1 **)(param_4 + 0x40));
  uVar8 = (uint)((*(int **)(param_4 + 0x34))[10]);
  puVar1 = (undefined1 *)(puVar3 + uVar8);
  iVar4 = (int)(*(int *)(**(int **)(param_4 + 0x34) + 0xe0));
  iVar9 = (int)(param_3 + param_2);
  uVar10 = (uint)(0);
  if (((uint)(puVar3[bVar2 + 5]) << 8 | (uint)(puVar3[bVar2 + 6])) <= uVar8) {
    uVar10 = (uint)((uint)((uint)(puVar3[bVar2 + 5]) << 8 | (uint)(puVar3[bVar2 + 6])));
  }
  memcpy((void *)(iVar4 + uVar10),puVar3 + uVar10,uVar8 - uVar10);
  piVar7 = (int *)((int *)(param_1 + 0x28));
  iVar5 = (int)(*piVar7);
  for (iVar6 = (int)(0); (iVar5 <= param_2 && (iVar6 < 6)); iVar6 = iVar6 + 1) {
    piVar7 = (int *)(piVar7 + 1);
    iVar5 = (int)(*piVar7);
  }
  puVar13 = (undefined4 *)((undefined4 *)(param_1 + (iVar6 + 4) * 4));
  local_10 = (undefined1 *)((undefined1 *)*puVar13);
  local_14 = (undefined1 *)(puVar1);
  while( true ) {
    _Src = (undefined1 *)(*(undefined1 **)(*(int *)(param_1 + 8) + param_2 * 4));
    uVar8 = (uint)((uint)*(ushort *)(*(int *)(param_1 + 0xc) + param_2 * 2));
    if ((_Src < puVar3) || (puVar1 <= _Src)) {
      if ((local_10 < _Src + uVar8) && (_Src < local_10)) {
        uVar14 = (undefined4)(0x115a6);
        goto LAB_1132cc96;
      }
    }
    else {
      if (puVar1 < _Src + uVar8) {
        uVar14 = (undefined4)(0x115a1);
        goto LAB_1132cc96;
      }
      _Src = (undefined1 *)(_Src + (iVar4 - (int)puVar3));
    }
    local_14 = (undefined1 *)(local_14 + -uVar8);
    uVar11 = (undefined1)((undefined1)((uint)((int)local_14 - (int)puVar3) >> 8));
    *puVar12 = (undefined1)(uVar11);
    local_20 = (char)((char)puVar3);
    local_20 = (char)((char)local_14 - local_20);
    puVar12[1] = (undefined1)(local_20);
    puVar12 = (undefined1 *)(puVar12 + 2);
    if (local_14 < puVar12) break;
    memcpy(local_14,_Src,uVar8);
    param_2 = (int)(param_2 + 1);
    if (iVar9 <= param_2) {
      *(short *)(param_4 + 0x18) = (short)param_3;
      *(undefined1 *)(param_4 + 0xc) = 0;
      *(undefined2 *)(puVar3 + bVar2 + 1) = 0;
      puVar3[bVar2 + 3] = (undefined1)(*(undefined1 *)(param_4 + 0x19));
      puVar3[bVar2 + 4] = (undefined1)(*(undefined1 *)(param_4 + 0x18));
      puVar3[bVar2 + 5] = (undefined1)(uVar11);
      puVar3[bVar2 + 6] = (undefined1)(local_20);
      puVar3[bVar2 + 7] = (undefined1)(0);
      return (undefined4)(0);
    }
    if ((int)puVar13[6] <= param_2) {
      local_10 = (undefined1 *)((undefined1 *)puVar13[1]);
      puVar13 = (undefined4 *)(puVar13 + 1);
    }
  }
  uVar14 = (undefined4)(0x115ac);
LAB_1132cc96:
  thunk_FUN_11395910(0xb,"%s at line %d of [%.10s]","database corruption",uVar14,
                     "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837balt2");
  return (undefined4)(0xb);
}


// Reference entry 1132cd30; body size 134 bytes.
#line 1 "ENTRY_1132cd30"

void FUN_1132cd30(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  uint local_8;
  uint uStack_4;
  
  iVar4 = (int)(*(ushort *)(param_1 + 0x34) - 1);
  uStack_4 = (uint)(0);
  local_8 = (uint)(0);
  if (-1 < iVar4) {
    psVar5 = (short *)((short *)(*(int *)(param_1 + 4) + iVar4 * 2));
    do {
      uVar1 = (uint)((uint)*psVar5);
      if (((-1 < (int)uVar1) &&
          ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x10 + uVar1 * 0x14) & 0x20) == 0)) &&
         ((int)uVar1 < 0x3f)) {
        uVar2 = (uint)(1 << (uVar1 & 0x1f));
        uVar3 = (uint)(0);
        if (0x1f < uVar1) {
          uVar3 = (uint)(uVar2);
        }
        uVar2 = (uint)(uVar2 ^ uVar3);
        if (0x3f < uVar1) {
          uVar3 = (uint)(uVar2);
        }
        local_8 = (uint)(local_8 | uVar2);
        uStack_4 = (uint)(uStack_4 | uVar3);
      }
      psVar5 = (short *)(psVar5 + -1);
      iVar4 = (int)(iVar4 + -1);
    } while (-1 < iVar4);
  }
  *(uint *)(param_1 + 0x40) = ~local_8;
  *(uint *)(param_1 + 0x44) = ~uStack_4;
  return;
}


// Reference entry 113326b0; body size 164 bytes.
#line 1 "ENTRY_113326b0"

int FUN_113326b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = (int)(param_1);
  if (iVar1 != 0) {
    iVar4 = (int)(0);
    iVar2 = (int)(param_1);
    do {
      iVar3 = (int)(iVar1);
      param_1 = (int)(*(int *)(iVar3 + 8));
      *(int *)(iVar3 + 0xc) = iVar2;
      if (param_1 == 0) {
        iVar2 = (int)(0);
      }
      else if (iVar4 + 1 < 2) {
        iVar1 = (int)(*(int *)(param_1 + 8));
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        iVar2 = (int)(param_1);
        param_1 = (int)(iVar1);
      }
      else {
        iVar2 = (int)(FUN_11332780(&param_1,iVar4));
        if (param_1 != 0) {
          *(int *)(param_1 + 0xc) = iVar2;
          param_1 = (int)(*(int *)(param_1 + 8));
          uVar5 = (undefined8)(FUN_11332780(&param_1,iVar4));
          iVar2 = (int)((int)((ulonglong)uVar5 >> 0x20));
          *(int *)(iVar2 + 8) = (int)uVar5;
        }
      }
      *(int *)(iVar3 + 8) = iVar2;
      iVar4 = (int)(iVar4 + 1);
      iVar2 = (int)(iVar3);
      iVar1 = (int)(param_1);
    } while (param_1 != 0);
  }
  return (int)(iVar3);
}


// Reference entry 11332780; body size 98 bytes.
#line 1 "ENTRY_11332780"

int FUN_11332780(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 == 0) {
    return (int)(0);
  }
  if (param_2 < 2) {
    *param_1 = (int)(*(int *)(iVar2 + 8));
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  else {
    iVar2 = (int)(FUN_11332780(param_1,param_2 + -1));
    iVar1 = (int)(*param_1);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc) = iVar2;
      *param_1 = (int)(*(int *)(iVar1 + 8));
      uVar3 = (undefined4)(FUN_11332780(param_1,param_2 + -1));
      *(undefined4 *)(iVar1 + 8) = uVar3;
      return (int)(iVar1);
    }
  }
  return (int)(iVar2);
}


// Reference entry 11332800; body size 71 bytes.
#line 1 "ENTRY_11332800"

void FUN_11332800(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_2);
  iVar1 = (int)(param_1);
  do {
    iVar3 = (int)(iVar1);
    if (*(int *)(iVar3 + 0xc) == 0) {
      *piVar2 = (int)(iVar3);
    }
    else {
      FUN_11332800(*(int *)(iVar3 + 0xc),piVar2,&param_1);
      *(int *)(param_1 + 8) = iVar3;
    }
    piVar2 = (int *)((int *)(iVar3 + 8));
    iVar1 = (int)(*(int *)(iVar3 + 8));
  } while (*(int *)(iVar3 + 8) != 0);
  *param_3 = (int)(iVar3);
  return;
}


// Reference entry 11334f70; body size 76 bytes.
#line 1 "ENTRY_11334f70"

void FUN_11334f70(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x4f) != '\0') {
    iVar2 = (int)(*(int *)(param_1 + 0x14));
    if (0 < iVar2) {
      pbVar1 = (byte *)((byte *)(*(int *)(param_1 + 0x10) + 8));
      do {
        iVar2 = (int)(iVar2 + -1);
        if (*(int *)(pbVar1 + -4) != 0) {
          FUN_1135ca00(**(undefined4 **)(*(int *)(pbVar1 + -4) + 4),
                       *(uint *)(param_1 + 0x20) & 0x38 | (uint)*pbVar1);
        }
        pbVar1 = (byte *)(pbVar1 + 0x10);
      } while (0 < iVar2);
    }
  }
  return;
}


// Reference entry 113351c0; body size 91 bytes.
#line 1 "ENTRY_113351c0"

void FUN_113351c0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_1[1]);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x10), iVar3 = iVar2, iVar2 != 0)) {
    while ((*(int *)(iVar3 + 4) == 0 || (*(undefined4 **)(*(int *)(iVar3 + 4) + 4) != param_1))) {
      iVar3 = (int)(iVar3 + 0x10);
    }
    if (((*(char *)(iVar3 + 9) == '\0') && (*(byte *)(iVar3 + 8) != param_2)) &&
       (iVar3 != iVar2 + 0x10)) {
      *(byte *)(iVar3 + 8) = param_2;
      FUN_1135ca00(*param_1,*(uint *)(iVar1 + 0x20) & 0x38 | (uint)param_2);
    }
  }
  return;
}


// Reference entry 11335620; body size 111 bytes.
#line 1 "ENTRY_11335620"

void FUN_11335620(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar2 = (uint)((**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c)));
    if ((uVar2 & 0x1000) == 0) {
      pcVar1 = (code *)(*(code **)(**(int **)(param_1 + 0x3c) + 0x2c));
      if (pcVar1 == (code *)0x0) {
        *(undefined4 *)(param_1 + 0x94) = 0x1000;
        return;
      }
      iVar3 = (int)((*pcVar1)(*(int **)(param_1 + 0x3c)));
      if (iVar3 < 0x20) {
        *(undefined4 *)(param_1 + 0x94) = 0x200;
        return;
      }
      if (0x10000 < iVar3) {
        iVar3 = (int)(0x10000);
      }
      *(int *)(param_1 + 0x94) = iVar3;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x94) = 0x200;
  return;
}


// Reference entry 1133a070; body size 149 bytes.
#line 1 "ENTRY_1133a070"

bool FUN_1133a070(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 - 1);
  uVar1 = (uint)(*param_1);
  if (uVar3 < uVar1) {
    uVar2 = (uint)(param_1[2]);
    if (uVar2 != 0) {
      do {
        uVar1 = (uint)(uVar3 / uVar2);
        uVar3 = (uint)(uVar3 % uVar2);
        param_1 = (uint *)((uint *)param_1[uVar1 + 3]);
        if (param_1 == (uint *)0x0) {
          return (bool)(false);
        }
        uVar2 = (uint)(param_1[2]);
      } while (uVar2 != 0);
      uVar1 = (uint)(*param_1);
    }
    if (uVar1 < 0xfa1) {
      return (bool)((*(byte *)((uVar3 >> 3) + 0xc + (int)param_1) & (byte)(1 << ((byte)uVar3 & 7))) != 0);
    }
    uVar2 = (uint)(uVar3 % 0x7d);
    uVar1 = (uint)(param_1[uVar2 + 3]);
    while (uVar1 != 0) {
      if (uVar1 == uVar3 + 1) {
        return (bool)(true);
      }
      uVar2 = (uint)((uVar2 + 1) % 0x7d);
      uVar1 = (uint)(param_1[uVar2 + 3]);
    }
  }
  return (bool)(false);
}


// Reference entry 1133db60; body size 114 bytes.
#line 1 "ENTRY_1133db60"

int FUN_1133db60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(**(int **)(param_1 + 4) + 0xe4));
  if (param_2 == 0) {
    param_2 = (int)(*(int *)(iVar2 + 0x14));
  }
  else {
    if (param_2 < 0) {
      iVar1 = (int)(*(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x18));
      param_2 = (int)(__alldiv((longlong)param_2 * -0x400,iVar1,iVar1 >> 0x1f));
    }
    *(int *)(iVar2 + 0x14) = param_2;
  }
  iVar1 = (int)(*(int *)(iVar2 + 0x10));
  if (iVar1 < 0) {
    iVar2 = (int)(*(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x18));
    iVar1 = (int)(__alldiv((longlong)iVar1 * -0x400,iVar2,iVar2 >> 0x1f));
  }
  if (param_2 <= iVar1) {
    param_2 = (int)(iVar1);
  }
  return (int)(param_2);
}


// Reference entry 1133de80; body size 101 bytes.
#line 1 "ENTRY_1133de80"

void FUN_1133de80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_1[2]);
  iVar2 = (int)(*(int *)(iVar1 + 0x6c));
  iVar3 = (int)(**(int **)(*(int *)(*param_1 + 0x10) + 0xc + param_2 * 0x10) + 1);
  if (*(int *)(iVar1 + 0x70) <= iVar2) {
    FUN_1131dfc0(iVar1,0x5e,param_2,1,iVar3);
    return;
  }
  *(int *)(iVar1 + 0x6c) = iVar2 + 1;
  iVar1 = (int)(*(int *)(iVar1 + 0x68));
  *(int *)(iVar1 + 4 + iVar2 * 0x14) = param_2;
  *(int *)(iVar1 + 0xc + iVar2 * 0x14) = iVar3;
  *(undefined4 *)(iVar1 + iVar2 * 0x14) = 0x5e;
  *(undefined4 *)(iVar1 + 8 + iVar2 * 0x14) = 1;
  *(undefined4 *)(iVar1 + 0x10 + iVar2 * 0x14) = 0;
  return;
}


// Reference entry 11343b10; body size 179 bytes.
#line 1 "ENTRY_11343b10"

void FUN_11343b10(int param_1)

{
  short sVar1;
  short *psVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  local_4 = (undefined2)(0x1a);
  local_c = (undefined4)(0x200021);
  local_8 = (undefined4)(0x1c001e);
  psVar2 = (short *)(*(short **)(param_1 + 8));
  uVar5 = (uint)(5);
  if (*(ushort *)(param_1 + 0x32) < 6) {
    uVar5 = (uint)((uint)*(ushort *)(param_1 + 0x32));
  }
  sVar1 = (short)(*(short *)(*(int *)(param_1 + 0xc) + 0x2e));
  *psVar2 = (short)(sVar1);
  sVar3 = (short)(sVar1);
  if (*(int *)(param_1 + 0x24) != 0) {
    sVar3 = (short)(sVar1 + -10);
    *psVar2 = (short)(sVar1 + -10);
  }
  if (sVar3 < 0x21) {
    *psVar2 = (short)(0x21);
  }
  memcpy(psVar2 + 1,&local_c,uVar5 * 2);
  uVar4 = (uint)((uint)*(ushort *)(param_1 + 0x32));
  uVar5 = (uint)(uVar5 + 1);
  if (uVar5 <= uVar4) {
    do {
      psVar2[uVar5] = (short)(0x17);
      uVar5 = (uint)(uVar5 + 1);
      uVar4 = (uint)((uint)*(ushort *)(param_1 + 0x32));
    } while ((int)uVar5 <= (int)uVar4);
  }
  if (*(char *)(param_1 + 0x36) != '\0') {
    psVar2[uVar4] = (short)(0);
  }
  return;
}


// Reference entry 11346e30; body size 68 bytes.
#line 1 "ENTRY_11346e30"

void FUN_11346e30(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)(FUN_11348900(param_1,param_2,param_3));
  if ((iVar1 != param_3) && (*(int *)(param_1 + 8) != 0)) {
    FUN_11372200(*(int *)(param_1 + 8),0x4e - (uint)((*(uint *)(param_2 + 4) & 0x200000) != 0),iVar1
                 ,param_3);
  }
  return;
}


// Reference entry 11348880; body size 91 bytes.
#line 1 "ENTRY_11348880"

void FUN_11348880(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  iVar2 = (int)(*(int *)(iVar1 + 0x6c));
  if (*(int *)(iVar1 + 0x70) <= iVar2) {
    FUN_1131dfc0(iVar1,0x4c,param_2,param_3,param_4);
    return;
  }
  *(int *)(iVar1 + 0x6c) = iVar2 + 1;
  iVar1 = (int)(*(int *)(iVar1 + 0x68));
  *(undefined4 *)(iVar1 + iVar2 * 0x14) = 0x4c;
  *(undefined4 *)(iVar1 + 0x10 + iVar2 * 0x14) = 0;
  iVar1 = (int)(iVar1 + iVar2 * 0x14);
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0xc) = param_4;
  return;
}


// Reference entry 1134a890; body size 104 bytes.
#line 1 "ENTRY_1134a890"

undefined4 FUN_1134a890(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 4));
  if ((uVar1 & 0x4000000) == 0) {
    iVar2 = (int)(FUN_1136cfd0(*(undefined4 *)(param_1 + 8),&DAT_11889d24));
    if (iVar2 == 0) {
      *param_1 = (undefined1)(0xa7);
      *(uint *)(param_1 + 4) = uVar1 | 0x10000000;
      return (undefined4)(1);
    }
    iVar2 = (int)(FUN_1136cfd0(*(undefined4 *)(param_1 + 8),"false"));
    if (iVar2 == 0) {
      *param_1 = (undefined1)(0xa7);
      *(uint *)(param_1 + 4) = uVar1 | 0x20000000;
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1134b760; body size 65 bytes.
#line 1 "ENTRY_1134b760"

bool FUN_1134b760(char *param_1)

{
  char cVar1;
  
  cVar1 = (char)(*param_1);
  if (cVar1 == -0x53) {
    cVar1 = (char)(param_1[2]);
  }
  if (cVar1 == -0x52) {
    return (bool)(1 < **(int **)(param_1 + 0x14));
  }
  if (cVar1 == -0x78) {
    return (bool)(1 < **(int **)(*(int *)(param_1 + 0x14) + 0x1c));
  }
  return (bool)(false);
}


// Reference entry 1134bfb0; body size 119 bytes.
#line 1 "ENTRY_1134bfb0"

bool FUN_1134bfb0(char *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (bool)(false);
  if (param_2 == 'A') {
    return (bool)(true);
  }
  do {
    cVar2 = (char)(*param_1);
    if (cVar2 != -0x55) {
      if (cVar2 != -0x56) {
        if (cVar2 == -0x53) {
          cVar2 = (char)(param_1[2]);
        }
        switch(cVar2) {
        case 's':
          if ((!bVar1) && (param_2 == 'B')) {
            return (bool)(true);
          }
          break;
        case -0x6a:
        case -0x68:
          return (bool)('B' < param_2);
        case -0x69:
          return (bool)(!bVar1);
        case -0x5c:
          if (('B' < param_2) && (*(short *)(param_1 + 0x1c) < 0)) {
            return (bool)(true);
          }
        }
        return (bool)(false);
      }
      bVar1 = (bool)(true);
    }
    param_1 = (char *)(*(char **)(param_1 + 0xc));
  } while( true );
}


// Reference entry 1134c5b0; body size 93 bytes.
#line 1 "ENTRY_1134c5b0"

int FUN_1134c5b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    iVar2 = (int)(*(int *)(param_1 + 0x14) + -1);
    piVar3 = (int *)((int *)(iVar2 * 0x10 + *(int *)(param_1 + 0x10)));
    while (((-1 < iVar2 && ((*piVar3 == 0 || (iVar1 = FUN_1136cfd0(*piVar3,param_2), iVar1 != 0))))
           && ((iVar2 != 0 || (iVar1 = FUN_1136cfd0(&DAT_1188a014,param_2), iVar1 != 0))))) {
      piVar3 = (int *)(piVar3 + -4);
      iVar2 = (int)(iVar2 + -1);
    }
    return (int)(iVar2);
  }
  return (int)(-1);
}


// Reference entry 11353240; body size 91 bytes.
#line 1 "ENTRY_11353240"

int FUN_11353240(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (param_2 != 1) {
    iVar1 = (int)(*(int *)(param_1 + 0x20));
    if (param_2 <= *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x20) = iVar1 + param_2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - param_2;
      return (int)(iVar1);
    }
    iVar1 = (int)(*(int *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x2c) = iVar1 + param_2;
    return (int)(iVar1 + 1);
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    return (int)(*(int *)(param_1 + 0x2c));
  }
  bVar2 = (byte)(*(char *)(param_1 + 0x13) - 1);
  *(byte *)(param_1 + 0x13) = bVar2;
  return (int)(*(int *)(param_1 + 0x8c + (uint)bVar2 * 4));
}


// Reference entry 11353b00; body size 414 bytes.
#line 1 "ENTRY_11353b00"

undefined4 FUN_11353b00(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = (byte)(*param_1);
  if (-1 < (char)bVar1) {
    *param_2 = (uint)((uint)bVar1);
    param_2[1] = (uint)(0);
    return (undefined4)(1);
  }
  uVar2 = (uint)((uint)param_1[1]);
  if (-1 < (char)param_1[1]) {
    param_2[1] = (uint)(0);
    *param_2 = (uint)((uint)(bVar1 & 0x7f) << 7 | uVar2);
    return (undefined4)(2);
  }
  uVar4 = (uint)(((uint)bVar1 << 0xe | (uint)param_1[2]) & 0x1fc07f);
  if (-1 < (char)param_1[2]) {
    *param_2 = (uint)((uVar2 & 0x7f) << 7 | uVar4);
    param_2[1] = (uint)(0);
    return (undefined4)(3);
  }
  uVar2 = (uint)((uVar2 << 0xe | (uint)param_1[3]) & 0x1fc07f);
  if (-1 < (char)param_1[3]) {
    *param_2 = (uint)(uVar4 << 7 | uVar2);
    param_2[1] = (uint)(0);
    return (undefined4)(4);
  }
  bVar1 = (byte)(param_1[4]);
  uVar3 = (uint)(uVar4 << 0xe | (uint)bVar1);
  if (-1 < (char)bVar1) {
    *param_2 = (uint)(uVar2 << 7 | uVar3);
    param_2[1] = (uint)(uVar4 >> 0x12);
    return (undefined4)(5);
  }
  uVar4 = (uint)(uVar4 << 7 | uVar2);
  uVar2 = (uint)(uVar2 << 0xe | (uint)param_1[5]);
  if (-1 < (char)param_1[5]) {
    *param_2 = (uint)((uVar3 & 0x1fc07f) << 7 | uVar2);
    param_2[1] = (uint)(uVar4 >> 0x12);
    return (undefined4)(6);
  }
  uVar3 = (uint)(uVar3 << 0xe | (uint)param_1[6]);
  if (-1 < (char)param_1[6]) {
    *param_2 = (uint)((uVar2 << 7 ^ uVar3) & 0xfe03f80 ^ uVar3);
    param_2[1] = (uint)(uVar4 >> 0xb);
    return (undefined4)(7);
  }
  uVar2 = (uint)(uVar2 << 0xe | (uint)param_1[7]);
  uVar3 = (uint)((uVar3 & 0x1fc07f) << 7);
  if (-1 < (char)param_1[7]) {
    *param_2 = (uint)(uVar2 & 0xf01fc07f | uVar3);
    param_2[1] = (uint)(uVar4 >> 4);
    return (undefined4)(8);
  }
  *param_2 = (uint)((uVar2 & 0x1fc07f | uVar3) << 8 | (uint)param_1[8]);
  param_2[1] = (uint)(bVar1 >> 3 & 0xf | uVar4 << 4);
  return (undefined4)(9);
}


// Reference entry 11353d10; body size 135 bytes.
#line 1 "ENTRY_11353d10"

undefined1 FUN_11353d10(byte *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint local_8;
  int local_4;
  
  bVar1 = (byte)(param_1[1]);
  if (-1 < (char)bVar1) {
    *param_2 = (uint)((*param_1 & 0x7f) << 7 | (uint)bVar1);
    return (undefined1)(2);
  }
  if (-1 < (char)param_1[2]) {
    *param_2 = (uint)((bVar1 & 0x7f) << 7 | ((uint)param_1[2] | (uint)*param_1 << 0xe) & 0x1fc07f);
    return (undefined1)(3);
  }
  uVar2 = (undefined1)(FUN_11353b00(param_1,&local_8));
  if (local_4 == 0) {
    *param_2 = (uint)(local_8);
    return (undefined1)(uVar2);
  }
  *param_2 = (uint)(0xffffffff);
  return (undefined1)(uVar2);
}


// Reference entry 113577e0; body size 106 bytes.
#line 1 "ENTRY_113577e0"

undefined4 FUN_113577e0(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  memset(param_3,0,0x48);
  if (param_5 == 0) {
    uVar1 = (undefined4)((**(code **)(param_1 + 0x18))(param_1,param_2,param_3,param_4 & 0x1087f7f,0));
    return (undefined4)(uVar1);
  }
  iVar2 = (int)(param_5);
  if (param_5 < 1) {
    iVar2 = (int)(0x3fc);
  }
  param_3[1] = (undefined4)(iVar2);
  param_3[0xe] = (undefined4)(param_4);
  param_3[0x10] = (undefined4)(param_2);
  param_3[0xf] = (undefined4)(param_1);
  *param_3 = (undefined4)(&DAT_119fbfb0);
  param_3[2] = (undefined4)(param_5);
  return (undefined4)(0);
}


// Reference entry 11358910; body size 157 bytes.
#line 1 "ENTRY_11358910"

short FUN_11358910(uint param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  
  sVar2 = (short)(0x28);
  if (param_2 != 0) goto LAB_11358966;
  if (param_1 < 8) {
    uVar1 = (uint)(param_1);
    if (param_1 < 2) {
      return (short)(0);
    }
    while( true ) {
      sVar2 = (short)(sVar2 + -10);
      param_1 = (uint)(uVar1 * 2);
      if ((int)uVar1 < 0) break;
      uVar1 = (uint)(param_1);
      if (7 < param_1) {
        return (short)((&DAT_12122250)[param_1 & 7] + -10 + sVar2);
      }
    }
  }
  else {
    while (0xff < param_1) {
LAB_11358966:
      do {
        param_1 = (uint)(param_1 >> 4 | param_2 << 0x1c);
        sVar2 = (short)(sVar2 + 0x28);
        param_2 = (uint)(param_2 >> 4);
      } while (param_2 != 0);
    }
    for (; (param_2 != 0 || (0xf < param_1)); param_1 = param_1 >> 1 | uVar1) {
      uVar1 = (uint)(param_2 << 0x1f);
      sVar2 = (short)(sVar2 + 10);
      param_2 = (uint)(param_2 >> 1);
    }
  }
  return (short)((&DAT_12122250)[param_1 & 7] + -10 + sVar2);
}


// Reference entry 113589e0; body size 103 bytes.
#line 1 "ENTRY_113589e0"

uint FUN_113589e0(ushort param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)((int)(short)param_1);
  iVar2 = (int)((int)(short)param_2);
  if ((short)param_1 < (short)param_2) {
    if (iVar1 + 0x31 < iVar2) {
      return (uint)((uint)param_2);
    }
    if (iVar1 + 0x1f < iVar2) {
      return (uint)(iVar2 + 1);
    }
    param_1 = (ushort)((byte)(&DAT_119faddc)[iVar2 - iVar1] + param_2);
  }
  else if (iVar1 <= iVar2 + 0x31) {
    if (iVar2 + 0x1f < iVar1) {
      return (uint)(iVar1 + 1);
    }
    return (uint)((uint)(ushort)((byte)(&DAT_119faddc)[iVar1 - iVar2] + param_1));
  }
  return (uint)((uint)param_1);
}


// Reference entry 11358ad0; body size 120 bytes.
#line 1 "ENTRY_11358ad0"

int FUN_11358ad0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (int)(0);
  for (puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 300)); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = (int)(iVar2 + 1);
  }
  iVar4 = (int)(0);
  for (puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x130)); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar4 = (int)(iVar4 + 1);
  }
  iVar5 = (int)(0);
  for (puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x134)); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar5 = (int)(iVar5 + 1);
  }
  iVar3 = (int)(0);
  for (puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x138)); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar3 = (int)(iVar3 + 1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(*(int *)(param_1 + 0x11c) - (iVar5 + iVar2));
  }
  return (int)((*(int *)(param_1 + 0x11c) - (iVar4 + iVar3)) - (iVar5 + iVar2));
}


// Reference entry 11359bf0; body size 67 bytes.
#line 1 "ENTRY_11359bf0"

void FUN_11359bf0(int param_1)

{
  int *piVar1;
  
  if ((*(char *)(param_1 + 0x51) != '\0') && (*(int *)(param_1 + 0xbc) == 0)) {
    piVar1 = (int *)((int *)(param_1 + 0x110));
    *piVar1 = (int)(*piVar1 + -1);
    *(undefined1 *)(param_1 + 0x51) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (*piVar1 != 0) {
      *(undefined2 *)(param_1 + 0x114) = 0;
      return;
    }
    *(undefined2 *)(param_1 + 0x114) = *(undefined2 *)(param_1 + 0x116);
  }
  return;
}


// Reference entry 1135a2c0; body size 80 bytes.
#line 1 "ENTRY_1135a2c0"

undefined4 FUN_1135a2c0(int *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_8 [8];
  
  if ((1 < *param_1) && ((code *)param_1[0x12] != (code *)0x0)) {
                    
                    
    uVar1 = (undefined4)((*(code *)param_1[0x12])());
    return (undefined4)(uVar1);
  }
  uVar1 = (undefined4)((*(code *)param_1[0x10])(param_1,local_8));
  uVar2 = (undefined8)(thunk_FUN_1148af70());
  *param_2 = (undefined8)(uVar2);
  return (undefined4)(uVar1);
}


// Reference entry 1135ca00; body size 158 bytes.
#line 1 "ENTRY_1135ca00"

void FUN_1135ca00(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)(param_2 & 7);
  if (*(char *)(param_1 + 0xc) == '\0') {
    bVar4 = (bool)(uVar3 == 1);
    *(bool *)(param_1 + 7) = bVar4;
    *(bool *)(param_1 + 8) = 2 < uVar3;
    *(bool *)(param_1 + 9) = uVar3 == 4;
    if (bVar4) {
      *(undefined1 *)(param_1 + 10) = 0;
      bVar2 = (byte)(0);
    }
    else if ((param_2 & 8) == 0) {
      *(undefined1 *)(param_1 + 10) = 2;
      bVar2 = (byte)(2);
    }
    else {
      *(undefined1 *)(param_1 + 10) = 3;
      bVar2 = (byte)(3);
    }
  }
  else {
    *(undefined2 *)(param_1 + 7) = 1;
    bVar4 = (bool)(true);
    *(undefined1 *)(param_1 + 9) = 0;
    bVar2 = (byte)(0);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  bVar1 = (byte)(bVar2 << 2);
  *(byte *)(param_1 + 0xb) = bVar1;
  if (*(char *)(param_1 + 8) != '\0') {
    bVar1 = (byte)(bVar1 | bVar2);
    *(byte *)(param_1 + 0xb) = bVar1;
  }
  if (((param_2 & 0x10) != 0) && (!bVar4)) {
    *(byte *)(param_1 + 0xb) = bVar1 | 0xc;
  }
  bVar2 = (byte)(*(byte *)(param_1 + 0x14) & 0xfe);
  if ((param_2 & 0x20) == 0) {
    bVar2 = (byte)(*(byte *)(param_1 + 0x14) | 1);
  }
  *(byte *)(param_1 + 0x14) = bVar2;
  return;
}


// Reference entry 1135d480; body size 82 bytes.
#line 1 "ENTRY_1135d480"

int FUN_1135d480(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(**(int **)(param_1 + 0x3c));
  if (iVar2 != 0) {
    iVar1 = (int)((**(code **)(iVar2 + 0x28))(*(int **)(param_1 + 0x3c),0x15,param_2));
    iVar2 = (int)(0);
    if (iVar1 != 0xc) {
      iVar2 = (int)(iVar1);
    }
    if (iVar2 != 0) {
      return (int)(iVar2);
    }
  }
  if (*(char *)(param_1 + 7) == '\0') {
    if (*(char *)(param_1 + 10) != '\0') {
                    
                    
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x3c) + 0x14))());
      return (int)(iVar2);
    }
  }
  return (int)(0);
}


// Reference entry 1135e780; body size 90 bytes.
#line 1 "ENTRY_1135e780"

void FUN_1135e780(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 0x1c));
  if ((uVar1 & 0x11) != 0) {
    *(ushort *)(param_1 + 0x1c) = uVar1 & 0xffef;
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(ushort *)(param_1 + 0x1c) = uVar1 & 0xffef ^ 3;
      piVar2 = (int *)(*(int **)(param_1 + 0xc));
      iVar3 = (int)(*piVar2);
      *(int *)(param_1 + 0x20) = iVar3;
      if (iVar3 == 0) {
        piVar2[1] = (int)(param_1);
        if ((char)piVar2[8] != '\0') {
          *(undefined1 *)((int)piVar2 + 0x21) = 1;
        }
      }
      else {
        *(int *)(iVar3 + 0x24) = param_1;
      }
      *piVar2 = (int)(param_1);
      if ((piVar2[2] == 0) && ((*(byte *)(param_1 + 0x1c) & 8) == 0)) {
        piVar2[2] = (int)(param_1);
      }
    }
  }
  return;
}


// Reference entry 11363db0; body size 108 bytes.
#line 1 "ENTRY_11363db0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_11363db0(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 in_XMM0_Qa;
  
  iVar1 = (int)(*(uint *)((char *)&param_3 + 4));
  thunk_FUN_1148b0c0();
  if (((double)((unsigned long long)(param_2) << 32 | (unsigned long long)(param_1)) != _DAT_11880f98) &&
     ((((*(uint *)((char *)&param_3 + 0) = (int)in_XMM0_Qa, param_1 != (int)param_3 ||
        (*(uint *)((char *)&param_3 + 4) = (int)((ulonglong)in_XMM0_Qa >> 0x20), param_2 != *(uint *)((char *)&param_3 + 4))) ||
       (iVar1 < -0x80000)) || (0x7ffff < iVar1)))) {
    return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4)(0);
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4)(1);
}


// Reference entry 1136d300; body size 117 bytes.
#line 1 "ENTRY_1136d300"

short FUN_1136d300(int param_1,short param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  if (((*(byte *)(param_1 + 0x24) & 0x20) != 0) && (-1 < param_2)) {
    iVar5 = (int)((int)param_2);
    param_2 = (short)(0);
    iVar3 = (int)(0);
    if (iVar5 != 0) {
      pbVar4 = (byte *)((byte *)(*(int *)(param_1 + 4) + 0x10));
      iVar6 = (int)(iVar5);
      sVar2 = (short)(0);
      do {
        bVar1 = (byte)(*pbVar4);
        pbVar4 = (byte *)(pbVar4 + 0x14);
        param_2 = (short)(sVar2 + 1);
        if ((bVar1 & 0x20) != 0) {
          param_2 = (short)(sVar2);
        }
        iVar6 = (int)(iVar6 + -1);
        iVar3 = (int)(iVar5);
        sVar2 = (short)(param_2);
      } while (iVar6 != 0);
    }
    if ((*(byte *)(*(int *)(param_1 + 4) + 0x10 + iVar3 * 0x14) & 0x20) != 0) {
      return (short)((*(short *)(param_1 + 0x2c) - param_2) + (short)iVar3);
    }
  }
  return (short)(param_2);
}


// Reference entry 113718c0; body size 76 bytes.
#line 1 "ENTRY_113718c0"

int FUN_113718c0(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = (int)(0);
  if (param_2 < 0) {
    pbVar4 = (byte *)((byte *)0xffffffff);
  }
  else {
    pbVar4 = (byte *)(param_1 + param_2);
  }
  bVar2 = (byte)(*param_1);
  while ((bVar2 != 0 && (param_1 < pbVar4))) {
    bVar2 = (byte)(*param_1);
    param_1 = (byte *)(param_1 + 1);
    if (0xbf < bVar2) {
      bVar2 = (byte)(*param_1);
      while ((bVar2 & 0xc0) == 0x80) {
        pbVar1 = (byte *)(param_1 + 1);
        param_1 = (byte *)(param_1 + 1);
        bVar2 = (byte)(*pbVar1);
      }
    }
    iVar3 = (int)(iVar3 + 1);
    bVar2 = (byte)(*param_1);
  }
  return (int)(iVar3);
}


// Reference entry 11371920; body size 118 bytes.
#line 1 "ENTRY_11371920"

uint FUN_11371920(int *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)((uint)*(byte *)*param_1);
  pbVar3 = (byte *)((byte *)*param_1 + 1);
  *param_1 = (int)((int)pbVar3);
  if (0xbf < uVar2) {
    uVar2 = (uint)((uint)(byte)(&DAT_119f7f98)[uVar2]);
    bVar1 = (byte)(*pbVar3);
    while ((bVar1 & 0xc0) == 0x80) {
      pbVar3 = (byte *)(pbVar3 + 1);
      uVar2 = (uint)(uVar2 * 0x40 + (bVar1 & 0x3f));
      *param_1 = (int)((int)pbVar3);
      bVar1 = (byte)(*pbVar3);
    }
    if (((uVar2 < 0x80) || ((uVar2 & 0xfffff800) == 0xd800)) || ((uVar2 & 0xfffffffe) == 0xfffe)) {
      return (uint)(0xfffd);
    }
  }
  return (uint)(uVar2);
}


// Reference entry 11372190; body size 86 bytes.
#line 1 "ENTRY_11372190"

int FUN_11372190(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(param_1 + 0x6c));
  if (*(int *)(param_1 + 0x70) <= iVar2) {
    iVar2 = (int)(FUN_1131dfc0(param_1,param_2,param_3,0,0));
    return (int)(iVar2);
  }
  *(int *)(param_1 + 0x6c) = iVar2 + 1;
  puVar1 = (undefined1 *)((undefined1 *)(*(int *)(param_1 + 0x68) + iVar2 * 0x14));
  *puVar1 = (undefined1)((undefined1)param_2);
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = (undefined1)(0);
  *(undefined4 *)(puVar1 + 4) = param_3;
  return (int)(iVar2);
}


// Reference entry 11372280; body size 81 bytes.
#line 1 "ENTRY_11372280"

int FUN_11372280(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(param_1 + 0x6c));
  if (*(int *)(param_1 + 0x70) <= iVar2) {
    iVar2 = (int)(FUN_1131dfc0());
    return (int)(iVar2);
  }
  *(int *)(param_1 + 0x6c) = iVar2 + 1;
  puVar1 = (undefined1 *)((undefined1 *)(*(int *)(param_1 + 0x68) + iVar2 * 0x14));
  *puVar1 = (undefined1)(param_2);
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined4 *)(puVar1 + 8) = param_4;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = (undefined1)(0);
  *(undefined4 *)(puVar1 + 0xc) = param_5;
  return (int)(iVar2);
}


// Reference entry 11373170; body size 122 bytes.
#line 1 "ENTRY_11373170"

void FUN_11373170(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6c));
  if (*(int *)(param_1 + 0x70) <= iVar1) {
    FUN_1131dfc0(param_1,0x42,param_2,0,0);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0;
    return;
  }
  *(int *)(param_1 + 0x6c) = iVar1 + 1;
  iVar2 = (int)(*(int *)(param_1 + 0x68));
  *(undefined4 *)(iVar2 + iVar1 * 0x14) = 0x42;
  *(undefined4 *)(iVar2 + 8 + iVar1 * 0x14) = 0;
  *(undefined4 *)(iVar2 + 0xc + iVar1 * 0x14) = 0;
  iVar2 = (int)(iVar2 + iVar1 * 0x14);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 4) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0;
  return;
}


// Reference entry 1137d7b0; body size 90 bytes.
#line 1 "ENTRY_1137d7b0"

int FUN_1137d7b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(param_1 + 0x6c));
  if (*(int *)(param_1 + 0x70) <= iVar2) {
    iVar2 = (int)(FUN_1131dfc0(param_1,0xb,0,param_2,0));
    return (int)(iVar2);
  }
  *(int *)(param_1 + 0x6c) = iVar2 + 1;
  iVar1 = (int)(*(int *)(param_1 + 0x68));
  *(undefined4 *)(iVar1 + iVar2 * 0x14) = 0xb;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 0x14) = 0;
  *(undefined4 *)(iVar1 + 0xc + iVar2 * 0x14) = 0;
  iVar1 = (int)(iVar1 + iVar2 * 0x14);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 8) = param_2;
  return (int)(iVar2);
}


// Reference entry 1137dee0; body size 67 bytes.
#line 1 "ENTRY_1137dee0"

undefined8 FUN_1137dee0(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 1));
  if ((uVar1 & 0x24) != 0) {
    return (undefined8)(*param_1);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = (undefined8)(FUN_11312ea0(*param_1));
    return (undefined8)(uVar2);
  }
  if (((uVar1 & 0x12) != 0) && (*(int *)(param_1 + 2) != 0)) {
    uVar2 = (undefined8)(FUN_113229d0());
    return (undefined8)(uVar2);
  }
  return (undefined8)(0);
}


// Reference entry 1137e670; body size 104 bytes.
#line 1 "ENTRY_1137e670"

undefined4 FUN_1137e670(undefined4 param_1,int param_2,int param_3)

{
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined8 local_14;
  undefined8 local_c;
  undefined4 local_4;
  
  local_14 = (undefined8)(0);
  local_c = (undefined8)(0);
  local_4 = (undefined4)(0);
  if ((*(ushort *)(param_2 + 8) & 0x2400) == 0) {
    *(undefined2 *)(param_2 + 8) = 1;
  }
  else {
    FUN_113a10f0(param_2);
  }
  local_18 = (undefined4)(param_1);
  local_1c = (int)(param_3);
  local_20 = (int)(param_2);
  (**(code **)(param_3 + 0x18))(&local_20);
  return (undefined4)((undefined4)local_c);
}


// Reference entry 1137e890; body size 109 bytes.
#line 1 "ENTRY_1137e890"

undefined4 FUN_1137e890(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  
  if ((*(ushort *)(param_1 + 2) & 0x2400) != 0) {
    FUN_113a10f0(param_1);
  }
  uVar5 = (undefined4)(param_2[1]);
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[3]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar5);
  param_1[2] = (undefined4)(uVar2);
  param_1[3] = (undefined4)(uVar3);
  param_1[4] = (undefined4)(param_2[4]);
  uVar1 = (ushort)(*(ushort *)(param_1 + 2));
  uVar4 = (ushort)(uVar1 & 0xfbff);
  *(ushort *)(param_1 + 2) = uVar4;
  if (((uVar1 & 0x12) != 0) && ((*(ushort *)(param_2 + 2) & 0x800) == 0)) {
    *(ushort *)(param_1 + 2) = uVar4 | 0x1000;
    uVar5 = (undefined4)(FUN_1137ed50(param_1));
    return (undefined4)(uVar5);
  }
  return (undefined4)(0);
}


// Reference entry 1137ecb0; body size 125 bytes.
#line 1 "ENTRY_1137ecb0"

undefined4 FUN_1137ecb0(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 1));
  if ((uVar1 & 0x24) == 0) {
    if ((uVar1 & 8) == 0) {
      if (((uVar1 & 0x12) == 0) || (*(int *)(param_1 + 2) == 0)) {
        uVar2 = (undefined8)(0);
      }
      else {
        uVar2 = (undefined8)(FUN_113229d0());
        uVar1 = (ushort)(*(ushort *)(param_1 + 1));
      }
    }
    else {
      uVar2 = (undefined8)(FUN_11312ea0(*param_1));
    }
  }
  else {
    uVar2 = (undefined8)(*param_1);
  }
  *param_1 = (undefined8)(uVar2);
  *(ushort *)(param_1 + 1) = uVar1 & 0x3e40 | 4;
  return (undefined4)(0);
}


// Reference entry 1137ef40; body size 100 bytes.
#line 1 "ENTRY_1137ef40"

undefined4 FUN_1137ef40(double *param_1)

{
  ushort uVar1;
  float10 fVar2;
  double in_XMM0_Qa;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 1));
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x24) == 0) {
      if ((uVar1 & 0x12) == 0) {
        in_XMM0_Qa = (double)(0.0);
      }
      else {
        fVar2 = (float10)((float10)FUN_11322a10(param_1));
        uVar1 = (ushort)(*(ushort *)(param_1 + 1));
        in_XMM0_Qa = (double)((double)fVar2);
      }
    }
    else {
      thunk_FUN_1148b0c0();
    }
  }
  else {
    in_XMM0_Qa = (double)(*param_1);
  }
  *param_1 = (double)(in_XMM0_Qa);
  *(ushort *)(param_1 + 1) = uVar1 & 0x3e40 | 8;
  return (undefined4)(0);
}


// Reference entry 1137f560; body size 73 bytes.
#line 1 "ENTRY_1137f560"

void FUN_1137f560(undefined4 *param_1,undefined4 *param_2,ushort param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(ushort *)(param_1 + 2) & 0x2400) != 0) {
    FUN_1139f790();
    return;
  }
  uVar1 = (undefined4)(param_2[1]);
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[3]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  param_1[2] = (undefined4)(uVar2);
  param_1[3] = (undefined4)(uVar3);
  param_1[4] = (undefined4)(param_2[4]);
  if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xe3ff | param_3;
  }
  return;
}


// Reference entry 11381c20; body size 85 bytes.
#line 1 "ENTRY_11381c20"

char * FUN_11381c20(char *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  cVar1 = (char)(*param_1);
  cVar2 = (char)(cVar1);
  if (cVar1 == -0x53) {
    cVar2 = (char)(param_1[2]);
  }
  if (cVar2 == -0x52) {
    piVar3 = (int *)(*(int **)(param_1 + 0x14));
    piVar4 = (int *)(piVar3);
  }
  else {
    if (cVar2 != -0x78) {
      return (char *)(param_1);
    }
    piVar4 = (int *)(*(int **)(param_1 + 0x14));
    piVar3 = (int *)((int *)piVar4[7]);
  }
  if (1 < *piVar3) {
    if ((cVar1 != -0x78) && (param_1[2] != -0x78)) {
      return (char *)((char *)piVar4[param_2 * 5 + 1]);
    }
    param_1 = (char *)(*(char **)(piVar4[7] + 4 + param_2 * 0x14));
  }
  return (char *)(param_1);
}


// Reference entry 11384290; body size 99 bytes.
#line 1 "ENTRY_11384290"

void FUN_11384290(int param_1)

{
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  if (-1 < *(short *)(param_1 + 0x28)) {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))
                (*(int **)(param_1 + 4),*(short *)(param_1 + 0x28) + 3,1,5);
    }
    *(undefined2 *)(param_1 + 0x28) = 0xffff;
  }
  return;
}


// Reference entry 1138fbf0; body size 66 bytes.
#line 1 "ENTRY_1138fbf0"

undefined4 FUN_1138fbf0(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    uVar3 = (uint)(0);
  }
  else {
    pcVar4 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar4);
      pcVar4 = (char *)(pcVar4 + 1);
    } while (cVar1 != '\0');
    uVar3 = (uint)((int)pcVar4 - (int)(param_2 + 1) & 0x3fffffff);
  }
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    uVar2 = (undefined4)(FUN_11371b50(*(undefined4 *)(param_1 + 0x80),param_2,uVar3));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 113968b0; body size 97 bytes.
#line 1 "ENTRY_113968b0"

void FUN_113968b0(int *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)((ulonglong *)*param_1);
  if ((puVar1[1] & 0x2400) == 0) {
    *(undefined2 *)(puVar1 + 1) = 1;
  }
  else {
    FUN_113a10f0(puVar1);
  }
  if (((*(uint *)((char *)&param_2 + 4) & 0x7ff00000) != 0x7ff00000) ||
     ((int)param_2 == 0 && (param_2 & 0xfffff00000000) == 0)) {
    *puVar1 = (ulonglong)(param_2);
    *(undefined2 *)(puVar1 + 1) = 8;
  }
  return;
}


// Reference entry 11396a50; body size 119 bytes.
#line 1 "ENTRY_11396a50"

void FUN_11396a50(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  if ((*(ushort *)(iVar1 + 8) & 0x2400) == 0) {
    *(undefined2 *)(iVar1 + 8) = 1;
  }
  else {
    FUN_113a10f0(iVar1);
  }
  param_1[5] = (int)(7);
  iVar1 = (int)(*(int *)(*param_1 + 0x20));
  if ((*(char *)(iVar1 + 0x51) == '\0') && (*(char *)(iVar1 + 0x52) == '\0')) {
    *(undefined1 *)(iVar1 + 0x51) = 1;
    if (0 < *(int *)(iVar1 + 0xbc)) {
      *(undefined4 *)(iVar1 + 0x108) = 1;
    }
    *(int *)(iVar1 + 0x110) = *(int *)(iVar1 + 0x110) + 1;
    *(undefined2 *)(iVar1 + 0x114) = 0;
    if (*(int *)(iVar1 + 0xec) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0xec) + 0xc) = 7;
    }
  }
  return;
}


// Reference entry 11397320; body size 100 bytes.
#line 1 "ENTRY_11397320"

int FUN_11397320(int param_1,int param_2,undefined4 param_3)

{
 try {
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined2 local_4;
  
  if (0 < param_1) {
    local_10 = (int)(param_1);
    local_14 = (int)(param_2);




    thunk_FUN_11397ee0(&local_18,param_3,&stack0x00000010);
    *(undefined1 *)(local_8 + param_2) = 0;
    return (int)(param_2);
  }
  return (int)(param_2);

 } catch (...) { }
}


// Reference entry 11397540; body size 71 bytes.
#line 1 "ENTRY_11397540"

void FUN_11397540(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = (undefined8)(0);
  local_8 = (undefined8)(0);
  iVar1 = (int)(thunk_FUN_113975a0(param_1,&local_10,&local_8,param_4));
  if (iVar1 == 0) {
    *param_2 = (undefined4)((undefined4)local_10);
    *param_3 = (undefined4)((undefined4)local_8);
  }
  return;
}


// Reference entry 1139aa70; body size 67 bytes.
#line 1 "ENTRY_1139aa70"

int FUN_1139aa70(int *param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 2));
  if (((uVar1 & 2) != 0) && (*(char *)((int)param_1 + 10) == '\x01')) {
    return (int)(param_1[3]);
  }
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 1) != 0) {
      return (int)(0);
    }
    iVar2 = (int)(FUN_1139ecf0(param_1,1));
    return (int)(iVar2);
  }
  if ((uVar1 & 0x4000) != 0) {
    return (int)(*param_1 + param_1[3]);
  }
  return (int)(param_1[3]);
}


// Reference entry 1139ab30; body size 91 bytes.
#line 1 "ENTRY_1139ab30"

float10 FUN_1139ab30(double *param_1)

{
  double dVar1;
  float10 fVar2;
  double in_XMM0_Qa;
  
  dVar1 = (double)(param_1[1]);
  if (((ulonglong)dVar1 & 8) != 0) {
    return (float10)((float10)*param_1);
  }
  if (((ulonglong)dVar1 & 0x24) != 0) {
    thunk_FUN_1148b0c0();
    return (float10)((float10)in_XMM0_Qa);
  }
  if (((ulonglong)dVar1 & 0x12) != 0) {
    fVar2 = (float10)((float10)FUN_11322a10());
    return (float10)(fVar2);
  }
  return (float10)((float10)0.0);
}


// Reference entry 1139ade0; body size 90 bytes.
#line 1 "ENTRY_1139ade0"

undefined4 FUN_1139ade0(undefined8 *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 1));
  if ((uVar1 & 0x24) != 0) {
    return (undefined4)(*(undefined4 *)param_1);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = (undefined4)(FUN_11312ea0(*param_1));
    return (undefined4)(uVar2);
  }
  if (((uVar1 & 0x12) != 0) && (*(int *)(param_1 + 2) != 0)) {
    uVar2 = (undefined4)(FUN_113229d0());
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 1139ae50; body size 93 bytes.
#line 1 "ENTRY_1139ae50"

undefined8 FUN_1139ae50(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 1));
  if ((uVar1 & 0x24) != 0) {
    return (undefined8)(*param_1);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = (undefined8)(FUN_11312ea0(*param_1));
    return (undefined8)(uVar2);
  }
  if (((uVar1 & 0x12) != 0) && (*(int *)(param_1 + 2) != 0)) {
    uVar2 = (undefined8)(FUN_113229d0());
    return (undefined8)(uVar2);
  }
  return (undefined8)(0);
}


// Reference entry 1139b8e0; body size 117 bytes.
#line 1 "ENTRY_1139b8e0"

void FUN_1139b8e0(void)

{
  int iVar1;
  undefined4 local_98 [4];
  int iStack_88;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_98);
  LOCK();
  if (DAT_122f6eac == 0) {
    DAT_122f6eac = (int)(0);
  }
  UNLOCK();
  if (DAT_122f6eac == 0) {
    local_98[0] = (undefined4)(0x94);
    (*(code *)PTR_GetVersionExA_121223fc)(local_98);
    LOCK();
    iVar1 = (int)((iStack_88 == 2) + 1);
    if (DAT_122f6eac != 0) {
      iVar1 = (int)(DAT_122f6eac);
    }
    DAT_122f6eac = (int)(iVar1);
    UNLOCK();
  }
  LOCK();
  if (DAT_122f6eac == 2) {
    DAT_122f6eac = (int)(2);
  }
  UNLOCK();
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1139bd50; body size 131 bytes.
#line 1 "ENTRY_1139bd50"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1139bd50(undefined1 *param_1,size_t param_2)

{
  size_t _Size;
  undefined1 local_1000 [4092];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_1000);
  _Size = (size_t)(0xffb);
  if ((int)param_2 < 0xffb) {
    _Size = (size_t)(param_2);
  }
  if ((-2 < (int)_Size) && (0 < (int)_Size)) {
    memset(local_1000,0,0xffc);
    memcpy(local_1000,param_1,_Size);
    param_1 = (undefined1 *)(local_1000);
  }
  (*(code *)PTR_OutputDebugStringA_121225c4)(param_1);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1139d270; body size 323 bytes.
#line 1 "ENTRY_1139d270"

undefined4 FUN_1139d270(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  
  pbVar5 = (byte *)((byte *)*param_2);
  if (pbVar5 != (byte *)0x0) {
    pcVar6 = (char *)("sqlite_");
    iVar1 = (int)(7);
    pbVar4 = (byte *)(pbVar5);
    do {
      iVar2 = (int)(iVar1);
      iVar1 = (int)(iVar2 + -1);
      if ((*pbVar4 == 0) || ((&DAT_119fb300)[*pbVar4] != (&DAT_119fb300)[(byte)*pcVar6]))
      goto LAB_1139d2b2;
      pbVar4 = (byte *)(pbVar4 + 1);
      pcVar6 = (char *)(pcVar6 + 1);
    } while (0 < iVar1);
    iVar1 = (int)(iVar2 + -2);
LAB_1139d2b2:
    if ((iVar1 < 0) || ((&DAT_119fb300)[*pbVar4] == (&DAT_119fb300)[(byte)*pcVar6])) {
      pbVar5 = (byte *)(pbVar5 + 7);
      if (pbVar5 == (byte *)0x0) {
        return (undefined4)(1);
      }
      pbVar3 = (byte *)(&DAT_11a00d30);
      iVar1 = (int)(4);
      pbVar4 = (byte *)(pbVar5);
      do {
        iVar2 = (int)(iVar1);
        iVar1 = (int)(iVar2 + -1);
        if ((*pbVar4 == 0) || ((&DAT_119fb300)[*pbVar4] != (&DAT_119fb300)[*pbVar3]))
        goto LAB_1139d312;
        pbVar4 = (byte *)(pbVar4 + 1);
        pbVar3 = (byte *)(pbVar3 + 1);
      } while (0 < iVar1);
      iVar1 = (int)(iVar2 + -2);
LAB_1139d312:
      if (iVar1 < 0) {
        return (undefined4)(0);
      }
      if ((&DAT_119fb300)[*pbVar4] == (&DAT_119fb300)[*pbVar3]) {
        return (undefined4)(0);
      }
      pcVar6 = (char *)("parameters");
      iVar1 = (int)(10);
      do {
        iVar2 = (int)(iVar1);
        iVar1 = (int)(iVar2 + -1);
        if ((*pbVar5 == 0) || ((&DAT_119fb300)[*pbVar5] != (&DAT_119fb300)[(byte)*pcVar6]))
        goto LAB_1139d35a;
        pbVar5 = (byte *)(pbVar5 + 1);
        pcVar6 = (char *)(pcVar6 + 1);
      } while (0 < iVar1);
      iVar1 = (int)(iVar2 + -2);
LAB_1139d35a:
      if (iVar1 < 0) {
        return (undefined4)(0);
      }
      if ((&DAT_119fb300)[*pbVar5] == (&DAT_119fb300)[(byte)*pcVar6]) {
        return (undefined4)(0);
      }
      return (undefined4)(1);
    }
  }
  if (((((param_2[9] & 0x1000) != 0) && ((*(uint *)(param_1 + 0x20) & 0x10000000) != 0)) &&
      (*(int *)(param_1 + 0x164) == 0)) && (*(int *)(param_1 + 0xbc) == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 113a1250; body size 136 bytes.
#line 1 "ENTRY_113a1250"

void FUN_113a1250(undefined4 param_1,int param_2,undefined8 *param_3)

{
  undefined8 in_XMM0_Qa;
  char *pcVar1;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined2 local_4;
  
  local_10 = (undefined4)(param_1);
  local_14 = (int)(param_2);
  local_18 = (undefined4)(0);
  local_c = (undefined4)(0);
  local_8 = (int)(0);
  local_4 = (undefined2)(0);
  if ((*(ushort *)(param_3 + 1) & 4) == 0) {
    if ((*(ushort *)(param_3 + 1) & 0x20) == 0) {
      in_XMM0_Qa = (undefined8)(*param_3);
    }
    else {
      thunk_FUN_1148b0c0();
    }
    pcVar1 = (char *)("%!.15g");
  }
  else {
    in_XMM0_Qa = (undefined8)(*param_3);
    pcVar1 = (char *)("%lld");
  }
  thunk_FUN_11397d20(&local_18,pcVar1,in_XMM0_Qa);
  *(undefined1 *)(local_8 + param_2) = 0;
  return;
}


// Reference entry 113a3590; body size 135 bytes.
#line 1 "ENTRY_113a3590"

void FUN_113a3590(int param_1,int *param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 local_4;
  
  piVar1 = (int *)(param_2);
  iVar2 = (int)((int)*(uint *)(param_1 + 0x9c) >> 0x1f);
  if ((param_4 <= iVar2) &&
     (((param_4 < iVar2 || (param_3 <= *(uint *)(param_1 + 0x9c))) && (2 < *(int *)*param_2)))) {
    param_1 = (int)(0);
    local_4 = (undefined4)(0x1000);
    (*(code *)((int *)*param_2)[10])(param_2,6,&local_4);
    iVar2 = (int)(0);
    if (*piVar1 != 0) {
      (**(code **)(*piVar1 + 0x28))(piVar1,5,&param_3);
      iVar2 = (int)(*piVar1);
    }
    (**(code **)(iVar2 + 0x44))(piVar1,0,0,param_3,&param_1);
    (**(code **)(*piVar1 + 0x48))(piVar1,0,0,param_1);
  }
  return;
}


// Reference entry 113a3ce0; body size 127 bytes.
#line 1 "ENTRY_113a3ce0"

undefined4 FUN_113a3ce0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)(&local_8);
  local_8 = (undefined4)(0);
  local_4 = (undefined4)(0);
  do {
    while( true ) {
      iVar1 = (int)((**(code **)(param_1 + 0x20))
                        (param_1,&local_4,param_2 + 2,*param_2,param_3 + 2,*param_3));
      if (iVar1 < 1) break;
      *puVar2 = (undefined4)(param_3);
      puVar2 = (undefined4 *)(param_3 + 1);
      param_3 = (undefined4 *)((undefined4 *)*puVar2);
      local_4 = (undefined4)(0);
      if (param_3 == (undefined4 *)0x0) {
        *puVar2 = (undefined4)(param_2);
        return (undefined4)(local_8);
      }
    }
    *puVar2 = (undefined4)(param_2);
    puVar2 = (undefined4 *)(param_2 + 1);
    param_2 = (undefined4 *)((undefined4 *)*puVar2);
  } while (param_2 != (undefined4 *)0x0);
  *puVar2 = (undefined4)(param_3);
  return (undefined4)(local_8);
}


// Reference entry 113a41a0; body size 87 bytes.
#line 1 "ENTRY_113a41a0"

int FUN_113a41a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0x24));
    return (int)(*(int *)(param_1 + 0x24) + 8);
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    iVar1 = (int)(*(int *)(param_1 + 0x10));
    *param_2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    return (int)(*(int *)(iVar1 + 0x20));
  }
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) +
          *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 8) + 4) * 0x38);
  *param_2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
  return (int)(*(int *)(iVar1 + 0x20));
}


// Reference entry 113a5dc0; body size 186 bytes.
#line 1 "ENTRY_113a5dc0"

void FUN_113a5dc0(int param_1,uint *param_2,int param_3,int *param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = (uint *)((uint *)(param_3 + (int)param_2));
  if (param_4 == (int *)0x0) {
    iVar3 = (int)(0);
    iVar5 = (int)(0);
  }
  else {
    iVar5 = (int)(*param_4);
    iVar3 = (int)(param_4[1]);
  }
  if (param_1 == 0) {
    do {
      uVar2 = (uint)(*param_2);
      iVar5 = (int)(iVar5 + (uVar2 >> 0x18) +
                      (uVar2 >> 8 & 0xff00) + iVar3 + (uVar2 * 0x10000 + (uVar2 & 0xff00)) * 0x100);
      uVar2 = (uint)(param_2[1]);
      param_2 = (uint *)(param_2 + 2);
      iVar3 = (int)(iVar3 + (uVar2 >> 0x18) +
                      (uVar2 >> 8 & 0xff00) + iVar5 + (uVar2 * 0x10000 + (uVar2 & 0xff00)) * 0x100);
    } while (param_2 < puVar4);
    *param_5 = (int)(iVar5);
    param_5[1] = (int)(iVar3);
    return;
  }
  do {
    iVar5 = (int)(iVar5 + *param_2 + iVar3);
    puVar1 = (uint *)(param_2 + 1);
    param_2 = (uint *)(param_2 + 2);
    iVar3 = (int)(iVar3 + *puVar1 + iVar5);
  } while (param_2 < puVar4);
  *param_5 = (int)(iVar5);
  param_5[1] = (int)(iVar3);
  return;
}


// Reference entry 113a6c30; body size 430 bytes.
#line 1 "ENTRY_113a6c30"

void FUN_113a6c30(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_64 [11];
  int iStack_38;
  int local_34 [4];
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_94);
  piVar2 = (int *)((int *)**(int **)(param_1 + 0x20));
  local_84 = (int)(*piVar2);
  iStack_80 = (int)(piVar2[1]);
  iStack_7c = (int)(piVar2[2]);
  iStack_78 = (int)(piVar2[3]);
  local_74 = (int)(piVar2[4]);
  iStack_70 = (int)(piVar2[5]);
  iStack_6c = (int)(piVar2[6]);
  iStack_68 = (int)(piVar2[7]);
  local_94 = (int)(piVar2[8]);
  iStack_90 = (int)(piVar2[9]);
  iStack_8c = (int)(piVar2[10]);
  iStack_88 = (int)(piVar2[0xb]);
  local_64[0] = (int)(local_84);
  local_64[1] = (int)(iStack_80);
  local_64[2] = (int)(iStack_7c);
  local_64[3] = (int)(iStack_78);
  local_64[4] = (int)(local_74);
  local_64[5] = (int)(iStack_70);
  local_64[6] = (int)(iStack_6c);
  local_64[7] = (int)(iStack_68);
  local_64[8] = (int)(local_94);
  local_64[9] = (int)(iStack_90);
  local_64[10] = (int)(iStack_8c);
  iStack_38 = (int)(iStack_88);
  if (*(char *)(param_1 + 0x2b) != '\x02') {
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4));
  }
  piVar1 = (int *)(local_64);
  piVar3 = (int *)(local_34);
  local_34[0] = (int)(piVar2[0xc]);
  local_34[1] = (int)(piVar2[0xd]);
  local_34[2] = (int)(piVar2[0xe]);
  local_34[3] = (int)(piVar2[0xf]);
  local_24 = (int)(piVar2[0x10]);
  iStack_20 = (int)(piVar2[0x11]);
  iStack_1c = (int)(piVar2[0x12]);
  iStack_18 = (int)(piVar2[0x13]);
  uVar5 = (uint)(0x2c);
  local_14 = (int)(piVar2[0x14]);
  iStack_10 = (int)(piVar2[0x15]);
  iStack_c = (int)(piVar2[0x16]);
  iStack_8 = (int)(piVar2[0x17]);
  do {
    if (*piVar1 != *piVar3) goto LAB_113a6dc1;
    piVar1 = (int *)(piVar1 + 1);
    piVar3 = (int *)(piVar3 + 1);
    bVar7 = (bool)(3 < uVar5);
    uVar5 = (uint)(uVar5 - 4);
  } while (bVar7);
  if ((char)iStack_78 != '\0') {
    iVar6 = (int)(0);
    piVar2 = (int *)(local_64);
    iVar4 = (int)(0);
    do {
      iVar4 = (int)(iVar4 + *piVar2 + iVar6);
      piVar1 = (int *)(piVar2 + 1);
      piVar2 = (int *)(piVar2 + 2);
      iVar6 = (int)(iVar6 + *piVar1 + iVar4);
    } while (piVar2 < local_64 + 10);
    if ((iVar4 == iStack_8c) && (iVar6 == iStack_88)) {
      piVar2 = (int *)((int *)(param_1 + 0x34));
      uVar5 = (uint)(0x2c);
      piVar1 = (int *)(local_64);
      do {
        if (*piVar2 != *piVar1) {
          *param_2 = (undefined4)(1);
          *(int *)(param_1 + 0x34) = local_84;
          *(int *)(param_1 + 0x38) = iStack_80;
          *(int *)(param_1 + 0x3c) = iStack_7c;
          *(int *)(param_1 + 0x40) = iStack_78;
          *(int *)(param_1 + 0x44) = local_74;
          *(int *)(param_1 + 0x48) = iStack_70;
          *(int *)(param_1 + 0x4c) = iStack_6c;
          *(int *)(param_1 + 0x50) = iStack_68;
          *(int *)(param_1 + 0x54) = local_94;
          *(int *)(param_1 + 0x58) = iStack_90;
          *(int *)(param_1 + 0x5c) = iStack_8c;
          *(int *)(param_1 + 0x60) = iStack_88;
          *(uint *)(param_1 + 0x24) =
               (*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00);
          thunk_FUN_1148ac28();
          return;
        }
        piVar2 = (int *)(piVar2 + 1);
        piVar1 = (int *)(piVar1 + 1);
        bVar7 = (bool)(3 < uVar5);
        uVar5 = (uint)(uVar5 - 4);
      } while (bVar7);
      thunk_FUN_1148ac28();
      return;
    }
  }
LAB_113a6dc1:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113a6e50; body size 135 bytes.
#line 1 "ENTRY_113a6e50"

void FUN_113a6e50(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)(0);
  piVar1 = (int *)((int *)(param_1 + 0x34));
  iVar7 = (int)(0);
  piVar3 = (int *)((int *)**(int **)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x40) = 1;
  *piVar1 = (int)(0x2de218);
  piVar5 = (int *)(piVar1);
  do {
    iVar7 = (int)(iVar7 + *piVar5 + iVar6);
    piVar2 = (int *)(piVar5 + 1);
    piVar5 = (int *)(piVar5 + 2);
    iVar6 = (int)(iVar6 + *piVar2 + iVar7);
  } while (piVar5 < (int *)(param_1 + 0x5c));
  *(int *)(param_1 + 0x5c) = iVar7;
  *(int *)(param_1 + 0x60) = iVar6;
  iVar6 = (int)(*(int *)(param_1 + 0x38));
  iVar7 = (int)(*(int *)(param_1 + 0x3c));
  iVar4 = (int)(*(int *)(param_1 + 0x40));
  piVar3[0xc] = (int)(*piVar1);
  piVar3[0xd] = (int)(iVar6);
  piVar3[0xe] = (int)(iVar7);
  piVar3[0xf] = (int)(iVar4);
  iVar6 = (int)(*(int *)(param_1 + 0x48));
  iVar7 = (int)(*(int *)(param_1 + 0x4c));
  iVar4 = (int)(*(int *)(param_1 + 0x50));
  piVar3[0x10] = (int)(*(int *)(param_1 + 0x44));
  piVar3[0x11] = (int)(iVar6);
  piVar3[0x12] = (int)(iVar7);
  piVar3[0x13] = (int)(iVar4);
  iVar6 = (int)(*(int *)(param_1 + 0x58));
  iVar7 = (int)(*(int *)(param_1 + 0x5c));
  iVar4 = (int)(*(int *)(param_1 + 0x60));
  piVar3[0x14] = (int)(*(int *)(param_1 + 0x54));
  piVar3[0x15] = (int)(iVar6);
  piVar3[0x16] = (int)(iVar7);
  piVar3[0x17] = (int)(iVar4);
  if (*(char *)(param_1 + 0x2b) != '\x02') {
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4));
  }
  iVar6 = (int)(*(int *)(param_1 + 0x38));
  iVar7 = (int)(*(int *)(param_1 + 0x3c));
  iVar4 = (int)(*(int *)(param_1 + 0x40));
  *piVar3 = (int)(*piVar1);
  piVar3[1] = (int)(iVar6);
  piVar3[2] = (int)(iVar7);
  piVar3[3] = (int)(iVar4);
  iVar6 = (int)(*(int *)(param_1 + 0x48));
  iVar7 = (int)(*(int *)(param_1 + 0x4c));
  iVar4 = (int)(*(int *)(param_1 + 0x50));
  piVar3[4] = (int)(*(int *)(param_1 + 0x44));
  piVar3[5] = (int)(iVar6);
  piVar3[6] = (int)(iVar7);
  piVar3[7] = (int)(iVar4);
  iVar6 = (int)(*(int *)(param_1 + 0x58));
  iVar7 = (int)(*(int *)(param_1 + 0x5c));
  iVar4 = (int)(*(int *)(param_1 + 0x60));
  piVar3[8] = (int)(*(int *)(param_1 + 0x54));
  piVar3[9] = (int)(iVar6);
  piVar3[10] = (int)(iVar7);
  piVar3[0xb] = (int)(iVar4);
  return;
}


// Reference entry 113a7490; body size 212 bytes.
#line 1 "ENTRY_113a7490"

void FUN_113a7490(int param_1,void *param_2,int param_3,int *param_4,int *param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int local_4;
  
  iVar4 = (int)(0);
  iVar1 = (int)(*param_5);
  iVar6 = (int)(0);
  local_4 = (int)(0);
  iVar2 = (int)(*param_4);
  do {
    if (iVar6 < iVar1) {
      if ((iVar4 < param_3) &&
         (*(uint *)(param_1 + (uint)*(ushort *)((int)param_2 + iVar4 * 2) * 4) <
          *(uint *)(param_1 + (uint)*(ushort *)(iVar2 + iVar6 * 2) * 4))) {
        uVar5 = (ushort)(*(ushort *)((int)param_2 + iVar4 * 2));
        iVar4 = (int)(iVar4 + 1);
      }
      else {
        uVar5 = (ushort)(*(ushort *)(iVar2 + iVar6 * 2));
        iVar6 = (int)(iVar6 + 1);
      }
    }
    else {
      if (param_3 <= iVar4) {
        *param_4 = (int)((int)param_2);
        *param_5 = (int)(local_4);
        memcpy(param_2,param_6,local_4 * 2);
        return;
      }
      uVar5 = (ushort)(*(ushort *)((int)param_2 + iVar4 * 2));
      iVar4 = (int)(iVar4 + 1);
    }
    iVar3 = (int)(*(int *)(param_1 + (uint)uVar5 * 4));
    *(ushort *)((int)param_6 + local_4 * 2) = uVar5;
    local_4 = (int)(local_4 + 1);
    if ((iVar4 < param_3) &&
       (*(int *)(param_1 + (uint)*(ushort *)((int)param_2 + iVar4 * 2) * 4) == iVar3)) {
      iVar4 = (int)(iVar4 + 1);
    }
  } while( true );
}


// Reference entry 113a7890; body size 95 bytes.
#line 1 "ENTRY_113a7890"

void FUN_113a7890(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = (int)(**(int **)(param_1 + 0x20));
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar1 = (uint)(*(uint *)(param_1 + 0x54));
  uVar1 = (uint)((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) + 1);
  *(uint *)(param_1 + 0x54) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 * 0x1000000;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  FUN_113a6e50(param_1);
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 0x80) = 0;
  puVar2 = (undefined4 *)((undefined4 *)(iVar3 + 0x6c));
  *(undefined4 *)(iVar3 + 0x68) = 0;
  iVar3 = (int)(3);
  do {
    *puVar2 = (undefined4)(0xffffffff);
    puVar2 = (undefined4 *)(puVar2 + 1);
    iVar3 = (int)(iVar3 + -1);
  } while (iVar3 != 0);
  return;
}


// Reference entry 113abb10; body size 168 bytes.
#line 1 "ENTRY_113abb10"

undefined4 FUN_113abb10(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (((int)((uint)*(ushort *)(param_1 + 0x28) - (uint)*(ushort *)(param_1 + 0x2a)) <
       (int)((uint)*(ushort *)(param_2 + 0x28) - (uint)*(ushort *)(param_2 + 0x2a))) &&
     (*(ushort *)(param_2 + 0x2a) <= *(ushort *)(param_1 + 0x2a))) {
    if ((*(short *)(param_1 + 0x14) < *(short *)(param_2 + 0x14)) ||
       ((*(short *)(param_1 + 0x14) <= *(short *)(param_2 + 0x14) &&
        (*(short *)(param_1 + 0x16) <= *(short *)(param_2 + 0x16))))) {
      iVar3 = (int)(*(ushort *)(param_1 + 0x28) - 1);
      if (-1 < iVar3) {
        piVar4 = (int *)((int *)(*(int *)(param_1 + 0x30) + iVar3 * 4));
        do {
          if (*piVar4 != 0) {
            iVar1 = (int)(*(ushort *)(param_2 + 0x28) - 1);
            if (iVar1 < 0) {
              return (undefined4)(0);
            }
            piVar2 = (int *)((int *)(*(int *)(param_2 + 0x30) + iVar1 * 4));
            while (*piVar2 != *piVar4) {
              piVar2 = (int *)(piVar2 + -1);
              iVar1 = (int)(iVar1 + -1);
              if (iVar1 < 0) {
                return (undefined4)(0);
              }
            }
          }
          piVar4 = (int *)(piVar4 + -1);
          iVar3 = (int)(iVar3 + -1);
        } while (-1 < iVar3);
      }
      if (((*(byte *)(param_1 + 0x24) & 0x40) == 0) || ((*(byte *)(param_2 + 0x24) & 0x40) != 0)) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 113af3c0; body size 208 bytes.
#line 1 "ENTRY_113af3c0"

void FUN_113af3c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint unaff_ESI;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_28);
  if ((DAT_122f6eac == 2) || (iVar1 = thunk_FUN_1139b8e0(), iVar1 != 0)) {
    iVar1 = (int)(0);
    local_28 = (undefined4)(0);
    uStack_24 = (undefined4)(0);
    uStack_20 = (undefined4)(0);
    uStack_1c = (undefined4)(0);
    local_8 = (undefined4)(0);
    local_18 = (undefined4)(0);
    uStack_14 = (undefined4)(0);
    uStack_10 = (undefined4)(0);
    uStack_c = (undefined4)(0);
    while (iVar2 = (*(code *)PTR_GetFileAttributesExW_1212236c)(param_1,0,&local_28), iVar2 == 0) {
      iVar2 = (int)((*(code *)PTR_GetLastError_1212239c)());
      if ((DAT_12122620 <= iVar1) ||
         ((((iVar2 != 5 && (iVar2 != 0x20)) && (iVar2 != 0x21)) &&
          (((iVar2 != 0x37 && (iVar2 != 0x40)) && ((iVar2 != 0x79 && (iVar2 != 0x4cf))))))))
      goto LAB_113af47d;
      iVar1 = (int)(iVar1 + 1);
      (*(code *)PTR_Sleep_121224f8)(iVar1 * DAT_12122624);
    }
  }
  else {
    unaff_ESI = (uint)((*(code *)PTR_GetFileAttributesA_12122354)(param_1));
  }
  if ((unaff_ESI != 0xffffffff) && ((unaff_ESI & 0x10) != 0)) {
    thunk_FUN_1148ac28();
    return;
  }
LAB_113af47d:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113af540; body size 120 bytes.
#line 1 "ENTRY_113af540"

void FUN_113af540(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_122f6eac != 2) {
    iVar1 = (int)(thunk_FUN_1139b8e0());
    if (iVar1 == 0) {
      (*(code *)PTR_LockFile_12122498)(*param_1,param_3,param_4,param_5,param_6);
      return;
    }
  }
  local_c = (undefined4)(param_3);
  local_8 = (undefined4)(param_4);
  local_14 = (undefined8)(0);
  local_4 = (undefined4)(0);
  (*(code *)PTR_LockFileEx_121224a4)(*param_1,param_2,0,param_5,param_6,&local_14);
  return;
}


// Reference entry 113b0050; body size 98 bytes.
#line 1 "ENTRY_113b0050"

undefined4 FUN_113b0050(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)((*(code *)PTR_GetLastError_1212239c)());
  if ((*param_1 < DAT_12122620) &&
     ((((iVar1 == 5 || (iVar1 == 0x20)) || (iVar1 == 0x21)) ||
      (((iVar1 == 0x37 || (iVar1 == 0x40)) || ((iVar1 == 0x79 || (iVar1 == 0x4cf)))))))) {
    (*(code *)PTR_Sleep_121224f8)((*param_1 + 1) * DAT_12122624);
    *param_1 = (int)(*param_1 + 1);
    return (undefined4)(1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(iVar1);
  }
  return (undefined4)(0);
}


// Reference entry 113b0590; body size 116 bytes.
#line 1 "ENTRY_113b0590"

void FUN_113b0590(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_122f6eac != 2) {
    iVar1 = (int)(thunk_FUN_1139b8e0());
    if (iVar1 == 0) {
      (*(code *)PTR_UnlockFile_12122510)(*param_1,param_2,param_3,param_4,param_5);
      return;
    }
  }
  local_c = (undefined4)(param_2);
  local_8 = (undefined4)(param_3);
  local_14 = (undefined8)(0);
  local_4 = (undefined4)(0);
  (*(code *)PTR_UnlockFileEx_1212251c)(*param_1,0,param_4,param_5,&local_14);
  return;
}


// Reference entry 113b96c0; body size 208 bytes.
#line 1 "ENTRY_113b96c0"

int FUN_113b96c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uStack_8;
  int iStack_4;
  
  iVar3 = (int)(0);
  if (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x4c) != 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xa4));
    uVar2 = (uint)(*(uint *)(param_1 + 0xa0));
    if ((param_2 == 0) && (uVar2 != 0 || iVar1 != 0)) {
      iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                        (*(int **)(param_1 + 0x40),&DAT_119fc120,0x1c,0,0));
    }
    else {
      iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x40) + 0x10))(*(int **)(param_1 + 0x40),0,0));
    }
    if ((((iVar3 == 0) &&
         ((((*(char *)(param_1 + 7) != '\0' ||
            (iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                               (*(int **)(param_1 + 0x40),*(byte *)(param_1 + 10) | 0x10),
            iVar3 == 0)) && (-1 < iVar1)) && ((0 < iVar1 || (uVar2 != 0)))))) &&
        (iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))
                           (*(int **)(param_1 + 0x40),&uStack_8), iVar3 == 0)) &&
       ((iVar1 <= iStack_4 && ((iVar1 < iStack_4 || (uVar2 < uStack_8)))))) {
      iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x40) + 0x10))
                        (*(int **)(param_1 + 0x40),uVar2,iVar1));
    }
  }
  return (int)(iVar3);
}


// Reference entry 113b9ce0; body size 233 bytes.
#line 1 "ENTRY_113b9ce0"

uint FUN_113b9ce0(char *param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = (int)(0);
  if (param_2 < 4) {
    if (param_2 == 0) {
      return (uint)(0);
    }
  }
  else if (((*param_1 == 'H') && (param_1[1] == -0x2c)) && (param_1[2] == -0x41)) {
    iVar4 = (int)(3);
  }
  bVar1 = (byte)(param_1[iVar4]);
  *param_3 = (byte)(bVar1);
  if (bVar1 == 1) {
    if (param_2 == 0x10) goto LAB_113b9d42;
  }
  else {
    if (bVar1 == 2) {
      bVar5 = (bool)(param_2 == 0x11);
    }
    else {
      if (bVar1 != 3) {
        return (uint)(0);
      }
      bVar5 = (bool)(param_2 == 0xe);
    }
    if (bVar5) {
LAB_113b9d42:
      param_3[1] = (byte)(param_1[iVar4 + 1]);
      param_3[2] = (byte)(param_1[iVar4 + 2]);
      param_3[3] = (byte)(param_1[iVar4 + 3]);
      param_3[4] = (byte)(param_1[iVar4 + 4]);
      param_3[5] = (byte)(param_1[iVar4 + 5]);
      bVar2 = (byte)(param_1[iVar4 + 6]);
      bVar3 = (byte)(0);
      if (bVar1 < 3) {
        bVar2 = (byte)((bVar1 == 2) + 9);
        bVar3 = (byte)(param_1[iVar4 + 6]);
      }
      param_3[0xd] = (byte)(bVar2);
      *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + iVar4 + 7);
      *(undefined2 *)(param_3 + 10) = *(undefined2 *)(param_1 + iVar4 + 0xb);
      if (bVar1 < 2) {
        param_3[0xc] = (byte)(-(bVar3 != 0) & 2);
        return (uint)(param_2);
      }
      param_3[0xc] = (byte)(-(bVar3 != 0) & 2U | param_1[iVar4 + 0xd]);
      return (uint)(param_2);
    }
  }
  return (uint)(0);
}


// Reference entry 113b9e10; body size 134 bytes.
#line 1 "ENTRY_113b9e10"

byte * FUN_113b9e10(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (*param_2 == 0) {
    return (byte *)(param_1);
  }
  iVar2 = (int)(tolower((uint)*param_2));
  pbVar4 = (byte *)(param_2 + 1);
  do {
    bVar1 = (byte)(*pbVar4);
    pbVar4 = (byte *)(pbVar4 + 1);
  } while (bVar1 != 0);
  do {
    do {
      pbVar5 = (byte *)(param_1);
      param_1 = (byte *)(pbVar5 + 1);
      if (*pbVar5 == 0) {
        return (byte *)((byte *)0x0);
      }
      iVar3 = (int)(tolower((uint)*pbVar5));
    } while ((char)iVar3 != (char)iVar2);
    iVar3 = (int)(thunk_FUN_113b9f60(param_1,param_2 + 1,(int)pbVar4 - (int)(param_2 + 2)));
  } while (iVar3 != 0);
  return (byte *)(pbVar5);
}


// Reference entry 113b9ec0; body size 118 bytes.
#line 1 "ENTRY_113b9ec0"

int FUN_113b9ec0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = (byte)(*param_2);
  iVar2 = (int)(tolower((uint)*param_1));
  iVar3 = (int)(tolower((uint)bVar1));
  if (iVar2 == iVar3) {
    do {
      bVar1 = (byte)(*param_1);
      param_2 = (byte *)(param_2 + 1);
      param_1 = (byte *)(param_1 + 1);
      if (bVar1 == 0) {
        return (int)(0);
      }
      bVar1 = (byte)(*param_2);
      iVar2 = (int)(tolower((uint)*param_1));
      iVar3 = (int)(tolower((uint)bVar1));
    } while (iVar2 == iVar3);
  }
  bVar1 = (byte)(*param_2);
  iVar2 = (int)(tolower((uint)*param_1));
  iVar3 = (int)(tolower((uint)bVar1));
  return (int)(iVar2 - iVar3);
}


// Reference entry 113b9f60; body size 113 bytes.
#line 1 "ENTRY_113b9f60"

int FUN_113b9f60(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    if (param_3 == 0) {
      return (int)(0);
    }
    bVar1 = (byte)(*param_2);
    iVar2 = (int)(tolower((uint)*param_1));
    iVar3 = (int)(tolower((uint)bVar1));
    if (iVar2 != iVar3) break;
    bVar1 = (byte)(*param_1);
    param_1 = (byte *)(param_1 + 1);
    if (bVar1 == 0) {
      return (int)(0);
    }
    param_3 = (int)(param_3 + -1);
    param_2 = (byte *)(param_2 + 1);
  }
  iVar2 = (int)(tolower((uint)*param_2));
  iVar3 = (int)(tolower((uint)*param_1));
  return (int)(iVar3 - iVar2);
}


// Reference entry 113ba080; body size 202 bytes.
#line 1 "ENTRY_113ba080"

uint FUN_113ba080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  undefined1 local_38 [28];
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_18 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_1c = (undefined *)(&DAT_11a03108);
  local_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  uStack_c = (undefined4)(0);
  uStack_8 = (undefined4)(0);
  uVar2 = (uint)(thunk_FUN_113c15d0(local_38,param_1,param_2,&local_3c,&local_1c,1));
  if (((char)uVar2 != '\0') && (local_3c == 1)) {
    cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    while (cVar1 != '\0') {
      if (local_40 == 0x1a) {
        thunk_FUN_113c0b30(local_38,0x1a,param_3,param_4);
      }
      else {
        thunk_FUN_113c0a40(local_38);
      }
      cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    }
    uVar2 = (uint)(thunk_FUN_113c14f0(local_38));
    return (uint)(uVar2);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 113ba180; body size 208 bytes.
#line 1 "ENTRY_113ba180"

uint FUN_113ba180(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  undefined1 local_38 [28];
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int local_4;
  
  local_18 = (undefined4)(0);
  local_1c = (undefined *)(&DAT_11a03308);
  local_4 = (int)(param_3);
  local_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  uStack_c = (undefined4)(0);
  uStack_8 = (undefined4)(0);
  uVar2 = (uint)(thunk_FUN_113c15d0(local_38,param_1,param_2,&local_3c,&local_1c,1));
  if (((char)uVar2 != '\0') && (local_3c == 0x11)) {
    cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    while (cVar1 != '\0') {
      if ((local_40 == 2) && (param_3 != 0)) {
        thunk_FUN_113c1240(local_38,2,param_3);
      }
      else {
        thunk_FUN_113c0a40(local_38);
      }
      cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    }
    uVar2 = (uint)(thunk_FUN_113c14f0(local_38));
    return (uint)(uVar2);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 113ba290; body size 294 bytes.
#line 1 "ENTRY_113ba290"

uint FUN_113ba290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5)

{
  char cVar1;
  uint uVar2;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  undefined1 local_54 [28];
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  ulonglong local_c;
  undefined4 local_4;
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_38 = (undefined *)(&DAT_11a03230);
  local_1c = (undefined *)(&DAT_11a03238);
  local_c = (ulonglong)((unsigned long long)(param_5));
  uVar2 = (uint)(thunk_FUN_113c15d0(local_54,param_1,param_2,&local_58,&local_38,2));
  if (((char)uVar2 == '\0') || (local_58 != 6)) {
    uVar2 = (uint)(uVar2 & 0xffffff00);
  }
  else {
    cVar1 = (char)(thunk_FUN_113c1650(local_54,&local_5c,local_60));
    while (cVar1 != '\0') {
      if (local_5c == 10) {
        thunk_FUN_113c0f70(local_54,10,param_3,param_4);
      }
      else if ((local_5c == 0x18) && (param_5 != (char *)0x0)) {
        thunk_FUN_113c13a0(local_54,0x18,param_5);
      }
      else {
        thunk_FUN_113c0a40(local_54);
      }
      cVar1 = (char)(thunk_FUN_113c1650(local_54,&local_5c,local_60));
    }
    uVar2 = (uint)(thunk_FUN_113c14f0(local_54));
    if ((((char)uVar2 != '\0') && (param_5 != (char *)0x0)) && (*param_5 == '\0')) {
      *param_5 = (char)('\x01');
      return (uint)(uVar2);
    }
  }
  return (uint)(uVar2);
}


// Reference entry 113ba400; body size 65 bytes.
#line 1 "ENTRY_113ba400"

uint FUN_113ba400(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int local_20;
  undefined1 local_1c [28];
  
  uVar1 = (uint)(thunk_FUN_113c15d0(local_1c,param_1,param_2,&local_20,0,0));
  if (((char)uVar1 != '\0') && (local_20 == 0x13)) {
    uVar1 = (uint)(thunk_FUN_113c14f0(local_1c));
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 113ba460; body size 239 bytes.
#line 1 "ENTRY_113ba460"

int FUN_113ba460(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char extraout_AL;
  char cVar1;
  char extraout_AL_00;
  uint3 extraout_var;
  uint3 extraout_var_00;
  int iVar2;
  uint3 uVar3;
  char local_45;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  undefined1 local_38 [28];
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_18 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_1c = (undefined *)(&DAT_11a032d8);
  local_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  uStack_c = (undefined4)(0);
  uStack_8 = (undefined4)(0);
  thunk_FUN_113c15d0(local_38,param_1,param_2,&local_3c,&local_1c,1);
  uVar3 = (uint3)(extraout_var);
  if ((extraout_AL != '\0') && (local_3c == 0xd)) {
    local_45 = (char)('\0');
    cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    do {
      if (cVar1 == '\0') {
        iVar2 = (int)(thunk_FUN_113c14f0(local_38));
        return (int)(iVar2);
      }
      if (local_40 == 0x13) {
        thunk_FUN_113c13a0(local_38,0x13,&local_45);
        uVar3 = (uint3)(extraout_var_00);
        if ((extraout_AL_00 == '\0') || (local_45 != '\0')) break;
        *param_3 = (undefined4)(0);
      }
      else {
        thunk_FUN_113c0a40(local_38);
      }
      cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    } while( true );
  }
  return (int)((uint)uVar3 << 8);
}


// Reference entry 113ba590; body size 65 bytes.
#line 1 "ENTRY_113ba590"

uint FUN_113ba590(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int local_20;
  undefined1 local_1c [28];
  
  uVar1 = (uint)(thunk_FUN_113c15d0(local_1c,param_1,param_2,&local_20,0,0));
  if (((char)uVar1 != '\0') && (local_20 == 10)) {
    uVar1 = (uint)(thunk_FUN_113c14f0(local_1c));
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 113ba5f0; body size 65 bytes.
#line 1 "ENTRY_113ba5f0"

uint FUN_113ba5f0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int local_20;
  undefined1 local_1c [28];
  
  uVar1 = (uint)(thunk_FUN_113c15d0(local_1c,param_1,param_2,&local_20,0,0));
  if (((char)uVar1 != '\0') && (local_20 == 0)) {
    uVar1 = (uint)(thunk_FUN_113c14f0(local_1c));
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 113ba650; body size 65 bytes.
#line 1 "ENTRY_113ba650"

uint FUN_113ba650(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int local_20;
  undefined1 local_1c [28];
  
  uVar1 = (uint)(thunk_FUN_113c15d0(local_1c,param_1,param_2,&local_20,0,0));
  if (((char)uVar1 != '\0') && (local_20 == 0x16)) {
    uVar1 = (uint)(thunk_FUN_113c14f0(local_1c));
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 113ba6b0; body size 406 bytes.
#line 1 "ENTRY_113ba6b0"

void FUN_113ba6b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined1 auStack_88 [3];
  char local_85;
  undefined1 local_84 [4];
  int local_80;
  int local_7c;
  undefined4 *local_78;
  undefined1 local_74 [28];
  undefined *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined *local_3c [7];
  undefined *local_20;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_88);
  local_78 = (undefined4 *)(param_3);
  local_54 = (undefined4)(0);
  local_50 = (undefined4)(0);
  uStack_4c = (undefined4)(0);
  uStack_48 = (undefined4)(0);
  uStack_44 = (undefined4)(0);
  local_40 = (undefined4)(0);
  memset(local_3c,0,0x38);
  local_58 = (undefined *)(&DAT_11a032e0);
  local_3c[0] = (undefined *)(&DAT_11a032e8);
  local_20 = (undefined *)(&DAT_11a032f0);
  cVar1 = (char)(thunk_FUN_113c15d0(local_74,param_1,param_2,&local_7c,&local_58,3));
  if ((cVar1 != '\0') && (local_7c == 0xe)) {
    local_85 = (char)('\0');
    cVar1 = (char)(thunk_FUN_113c1650(local_74,&local_80,local_84));
    while (cVar1 != '\0') {
      if (local_80 == 0x13) {
        cVar1 = (char)(thunk_FUN_113c13a0(local_74,0x13,&local_85));
        if ((cVar1 == '\0') || (local_85 != '\0')) goto LAB_113ba82d;
        *local_78 = (undefined4)(0);
      }
      else if (local_80 == 0x14) {
        thunk_FUN_113c0f70(local_74,0x14,param_4,param_5);
      }
      else if (local_80 == 0x15) {
        thunk_FUN_113c0b30(local_74,0x15,param_6,param_7);
      }
      else {
        thunk_FUN_113c0a40(local_74);
      }
      cVar1 = (char)(thunk_FUN_113c1650(local_74,&local_80,local_84));
    }
    thunk_FUN_113c14f0(local_74);
  }
LAB_113ba82d:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113ba8b0; body size 202 bytes.
#line 1 "ENTRY_113ba8b0"

uint FUN_113ba8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  undefined1 local_38 [28];
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_18 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_1c = (undefined *)(&DAT_11a03320);
  local_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  uStack_c = (undefined4)(0);
  uStack_8 = (undefined4)(0);
  uVar2 = (uint)(thunk_FUN_113c15d0(local_38,param_1,param_2,&local_3c,&local_1c,1));
  if (((char)uVar2 != '\0') && (local_3c == 0x17)) {
    cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    while (cVar1 != '\0') {
      if (local_40 == 0x25) {
        thunk_FUN_113c0b30(local_38,0x25,param_3,param_4);
      }
      else {
        thunk_FUN_113c0a40(local_38);
      }
      cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    }
    uVar2 = (uint)(thunk_FUN_113c14f0(local_38));
    return (uint)(uVar2);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 113ba9e0; body size 334 bytes.
#line 1 "ENTRY_113ba9e0"

uint FUN_113ba9e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,uint *param_7,int *param_8)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  undefined1 local_54 [28];
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  undefined4 local_4;
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_c = (undefined8)(0);
  uStack_18 = (undefined4)(0);
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_38 = (undefined *)(&DAT_11a03290);
  local_1c = (undefined *)(&DAT_11a03298);
  uVar2 = (uint)(thunk_FUN_113c15d0(local_54,param_3,param_4,&local_58,&local_38,2));
  if (((char)uVar2 != '\0') && (local_58 == 0xb)) {
    uVar2 = (uint)(0);
    iVar4 = (int)(0);
    cVar1 = (char)(thunk_FUN_113c1650(local_54,&local_5c,local_60));
    while (cVar1 != '\0') {
      if (local_5c == 0x10) {
        thunk_FUN_113c1240(local_54,0x10,param_5);
      }
      else if (local_5c == 0x17) {
        if (uVar2 < *param_7) {
          thunk_FUN_113c0ca0(param_1,local_54,0x17,param_6);
          uVar2 = (uint)(uVar2 + 1);
          param_6 = (int)(param_6 + param_2);
        }
        else {
          thunk_FUN_113c0a40(local_54);
          iVar4 = (int)(iVar4 + 1);
        }
      }
      else {
        thunk_FUN_113c0a40(local_54);
      }
      cVar1 = (char)(thunk_FUN_113c1650(local_54,&local_5c,local_60));
    }
    uVar3 = (uint)(thunk_FUN_113c14f0(local_54));
    *param_7 = (uint)(uVar2);
    if (param_8 != (int *)0x0) {
      *param_8 = (int)(iVar4 + uVar2);
    }
    return (uint)(uVar3);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 113bb3c0; body size 208 bytes.
#line 1 "ENTRY_113bb3c0"

uint FUN_113bb3c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  undefined1 local_38 [28];
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int local_4;
  
  local_18 = (undefined4)(0);
  local_1c = (undefined *)(&DAT_11a03228);
  local_4 = (int)(param_3);
  local_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  uStack_c = (undefined4)(0);
  uStack_8 = (undefined4)(0);
  uVar2 = (uint)(thunk_FUN_113c15d0(local_38,param_1,param_2,&local_3c,&local_1c,1));
  if (((char)uVar2 != '\0') && (local_3c == 5)) {
    cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    while (cVar1 != '\0') {
      if ((local_40 == 2) && (param_3 != 0)) {
        thunk_FUN_113c1240(local_38,2,param_3);
      }
      else {
        thunk_FUN_113c0a40(local_38);
      }
      cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    }
    uVar2 = (uint)(thunk_FUN_113c14f0(local_38));
    return (uint)(uVar2);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 113bb7b0; body size 286 bytes.
#line 1 "ENTRY_113bb7b0"

uint FUN_113bb7b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  undefined1 local_54 [28];
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_34 = (undefined4)(0);
  local_30 = (undefined4)(0);
  local_20 = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  uStack_14 = (undefined4)(0);
  local_10 = (undefined4)(0);
  uStack_8 = (undefined4)(0);
  uStack_4 = (undefined4)(0);
  local_2c = (undefined4)(0);
  local_24 = (undefined4)(0);
  local_38 = (undefined *)(&DAT_11a03278);
  local_28 = (int)(param_3);
  puStack_1c = (undefined *)(&DAT_11a03280);
  iStack_c = (int)(param_4);
  uVar2 = (uint)(thunk_FUN_113c15d0(local_54,param_1,param_2,&local_58,&local_38,2));
  if (((char)uVar2 == '\0') || (local_58 != 8)) {
    return (uint)(uVar2 & 0xffffff00);
  }
  cVar1 = (char)(thunk_FUN_113c1650(local_54,&local_5c,local_60));
  do {
    if (cVar1 == '\0') {
      uVar2 = (uint)(thunk_FUN_113c14f0(local_54));
      return (uint)(uVar2);
    }
    if (local_5c == 0x1b) {
      if (param_3 == 0) goto LAB_113bb88f;
      thunk_FUN_113c13a0(local_54,0x1b,param_3);
    }
    else if ((local_5c == 0x27) && (param_4 != 0)) {
      thunk_FUN_113c13a0(local_54,0x27,param_4);
    }
    else {
LAB_113bb88f:
      thunk_FUN_113c0a40(local_54);
    }
    cVar1 = (char)(thunk_FUN_113c1650(local_54,&local_5c,local_60));
  } while( true );
}


// Reference entry 113bb920; body size 273 bytes.
#line 1 "ENTRY_113bb920"

uint FUN_113bb920(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  undefined1 local_54 [28];
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  ulonglong local_c;
  undefined4 local_4;
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_38 = (undefined *)(&DAT_11a03310);
  local_1c = (undefined *)(&DAT_11a03318);
  local_c = (ulonglong)((ulonglong)param_4);
  uVar2 = (uint)(thunk_FUN_113c15d0(local_54,param_1,param_2,&local_58,&local_38,2));
  if (((char)uVar2 != '\0') && (local_58 == 0x12)) {
    cVar1 = (char)(thunk_FUN_113c1650(local_54,&local_5c,local_60));
    while (cVar1 != '\0') {
      if (local_5c == 2) {
        thunk_FUN_113c1240(local_54,2,param_3);
      }
      else if ((local_5c == 0x1b) && (param_4 != 0)) {
        thunk_FUN_113c13a0(local_54,0x1b,param_4);
      }
      else {
        thunk_FUN_113c0a40(local_54);
      }
      cVar1 = (char)(thunk_FUN_113c1650(local_54,&local_5c,local_60));
    }
    uVar2 = (uint)(thunk_FUN_113c14f0(local_54));
    return (uint)(uVar2);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 113bc770; body size 197 bytes.
#line 1 "ENTRY_113bc770"

uint FUN_113bc770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  undefined1 local_38 [28];
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_18 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_1c = (undefined *)(&DAT_11a03288);
  local_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  uStack_c = (undefined4)(0);
  uStack_8 = (undefined4)(0);
  uVar2 = (uint)(thunk_FUN_113c15d0(local_38,param_1,param_2,&local_3c,&local_1c,1));
  if (((char)uVar2 != '\0') && (local_3c == 9)) {
    cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    while (cVar1 != '\0') {
      if (local_40 == 0xd) {
        thunk_FUN_113c10e0(local_38,0xd,param_3);
      }
      else {
        thunk_FUN_113c0a40(local_38);
      }
      cVar1 = (char)(thunk_FUN_113c1650(local_38,&local_40,local_44));
    }
    uVar2 = (uint)(thunk_FUN_113c14f0(local_38));
    return (uint)(uVar2);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 113bc870; body size 65 bytes.
#line 1 "ENTRY_113bc870"

uint FUN_113bc870(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int local_20;
  undefined1 local_1c [28];
  
  uVar1 = (uint)(thunk_FUN_113c15d0(local_1c,param_1,param_2,&local_20,0,0));
  if (((char)uVar1 != '\0') && (local_20 == 0x14)) {
    uVar1 = (uint)(thunk_FUN_113c14f0(local_1c));
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 113bc8d0; body size 65 bytes.
#line 1 "ENTRY_113bc8d0"

uint FUN_113bc8d0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int local_20;
  undefined1 local_1c [28];
  
  uVar1 = (uint)(thunk_FUN_113c15d0(local_1c,param_1,param_2,&local_20,0,0));
  if (((char)uVar1 != '\0') && (local_20 == 0x10)) {
    uVar1 = (uint)(thunk_FUN_113c14f0(local_1c));
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 113bc930; body size 65 bytes.
#line 1 "ENTRY_113bc930"

uint FUN_113bc930(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int local_20;
  undefined1 local_1c [28];
  
  uVar1 = (uint)(thunk_FUN_113c15d0(local_1c,param_1,param_2,&local_20,0,0));
  if (((char)uVar1 != '\0') && (local_20 == 0x15)) {
    uVar1 = (uint)(thunk_FUN_113c14f0(local_1c));
    return (uint)(uVar1);
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 113bc990; body size 300 bytes.
#line 1 "ENTRY_113bc990"

uint FUN_113bc990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  undefined1 local_54 [28];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  undefined4 local_4;
  
  puVar3 = (undefined4 *)(&local_38);
  local_34 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_20 = (undefined4)(0);
  piVar4 = (int *)(&DAT_11a032f8);
  local_1c = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  iVar5 = (int)(2);
  local_4 = (undefined4)(0);
  local_c = (undefined8)(0);
  do {
    *puVar3 = (undefined4)(piVar4);
    if (*piVar4 == 2) {
      puVar3[6] = (undefined4)(param_5);
    }
    puVar3 = (undefined4 *)(puVar3 + 7);
    piVar4 = (int *)(piVar4 + 2);
    iVar5 = (int)(iVar5 + -1);
  } while (iVar5 != 0);
  uVar2 = (uint)(thunk_FUN_113c15d0(local_54,param_1,param_2,&local_58,&local_38,2));
  if (((char)uVar2 == '\0') || (local_58 != 0xf)) {
    return (uint)(uVar2 & 0xffffff00);
  }
  cVar1 = (char)(thunk_FUN_113c1650(local_54,&local_5c,local_60));
  do {
    if (cVar1 == '\0') {
      uVar2 = (uint)(thunk_FUN_113c14f0(local_54));
      return (uint)(uVar2);
    }
    if (local_5c == 2) {
      if (param_5 == 0) goto LAB_113bca78;
      thunk_FUN_113c1240(local_54,2,param_5);
    }
    else if (local_5c == 0x16) {
      thunk_FUN_113c0f70(local_54,0x16,param_3,param_4);
    }
    else {
LAB_113bca78:
      thunk_FUN_113c0a40(local_54);
    }
    cVar1 = (char)(thunk_FUN_113c1650(local_54,&local_5c,local_60));
  } while( true );
}


// Reference entry 113bcb40; body size 104 bytes.
#line 1 "ENTRY_113bcb40"

void FUN_113bcb40(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c [28];
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_38 = (undefined *)(&DAT_11a03108);
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,1,&local_38,1);
  thunk_FUN_113c1760(local_1c,0x1a,param_3,param_4);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113bcbd0; body size 111 bytes.
#line 1 "ENTRY_113bcbd0"

void FUN_113bcbd0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c [28];
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_38 = (undefined *)(&DAT_11a03308);
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,0x11,&local_38,1);
  if (param_3 != 0) {
    thunk_FUN_113c1b00(local_1c,2,param_3);
  }
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113bcc60; body size 157 bytes.
#line 1 "ENTRY_113bcc60"

void FUN_113bcc60(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_54 [28];
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  undefined4 local_4;
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_c = (undefined8)(0);
  local_38 = (undefined *)(&DAT_11a03230);
  local_1c = (undefined *)(&DAT_11a03238);
  thunk_FUN_113c1c50(local_54,param_1,*param_2,6,&local_38,2);
  thunk_FUN_113c1a30(local_54,10,param_3);
  if ((char)param_4 != '\0') {
    thunk_FUN_113c1b50(local_54,0x18,param_4);
  }
  thunk_FUN_113c1ba0(local_54,param_2);
  return;
}


// Reference entry 113bcd70; body size 100 bytes.
#line 1 "ENTRY_113bcd70"

void FUN_113bcd70(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c [28];
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_38 = (undefined *)(&DAT_11a032d8);
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,0xd,&local_38,1);
  thunk_FUN_113c1b50(local_1c,0x13,param_3);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113bceb0; body size 225 bytes.
#line 1 "ENTRY_113bceb0"

void FUN_113bceb0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 local_74 [28];
  undefined *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined *local_3c [7];
  undefined *local_20;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_74);
  local_54 = (undefined4)(0);
  local_50 = (undefined4)(0);
  uStack_4c = (undefined4)(0);
  uStack_48 = (undefined4)(0);
  uStack_44 = (undefined4)(0);
  local_40 = (undefined4)(0);
  memset(local_3c,0,0x38);
  local_58 = (undefined *)(&DAT_11a032e0);
  local_3c[0] = (undefined *)(&DAT_11a032e8);
  local_20 = (undefined *)(&DAT_11a032f0);
  thunk_FUN_113c1c50(local_74,param_1,*param_2,0xe,&local_58,3);
  thunk_FUN_113c1b50(local_74,0x13,param_3);
  thunk_FUN_113c1a30(local_74,0x14,param_4);
  thunk_FUN_113c1760(local_74,0x15,param_5,param_6);
  thunk_FUN_113c1ba0(local_74,param_2);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113bcfd0; body size 104 bytes.
#line 1 "ENTRY_113bcfd0"

void FUN_113bcfd0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c [28];
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_38 = (undefined *)(&DAT_11a03320);
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,0x17,&local_38,1);
  thunk_FUN_113c1760(local_1c,0x25,param_3,param_4);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113bd060; body size 213 bytes.
#line 1 "ENTRY_113bd060"

void FUN_113bd060(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,uint param_5
                 ,uint *param_6)

{
  char cVar1;
  uint uVar2;
  undefined1 local_54 [28];
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  undefined4 local_4;
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_c = (undefined8)(0);
  local_38 = (undefined *)(&DAT_11a03290);
  local_1c = (undefined *)(&DAT_11a03298);
  thunk_FUN_113c1c50(local_54,param_1,*param_2,0xb,&local_38,2);
  thunk_FUN_113c1b00(local_54,0x10,param_3);
  uVar2 = (uint)(0);
  if (param_5 != 0) {
    do {
      cVar1 = (char)(thunk_FUN_113c08f0(1,local_54,param_4));
      if (cVar1 == '\0') break;
      thunk_FUN_113c1880(1,local_54,0x17,param_4);
      uVar2 = (uint)(uVar2 + 1);
      param_4 = (int)(param_4 + 0x34);
    } while (uVar2 < param_5);
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = (uint)(uVar2);
  }
  thunk_FUN_113c1ba0(local_54,param_2);
  return;
}


// Reference entry 113bd170; body size 224 bytes.
#line 1 "ENTRY_113bd170"

void FUN_113bd170(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5,uint param_6,uint *param_7)

{
  char cVar1;
  uint uVar2;
  undefined1 local_54 [28];
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  undefined4 local_4;
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_c = (undefined8)(0);
  local_38 = (undefined *)(&DAT_11a03290);
  local_1c = (undefined *)(&DAT_11a03298);
  thunk_FUN_113c1c50(local_54,param_2,*param_3,0xb,&local_38,2);
  thunk_FUN_113c1b00(local_54,0x10,param_4);
  uVar2 = (uint)(0);
  if (param_6 != 0) {
    do {
      cVar1 = (char)(thunk_FUN_113c08f0(param_1,local_54,param_5));
      if (cVar1 == '\0') break;
      thunk_FUN_113c1880(param_1,local_54,0x17,param_5);
      uVar2 = (uint)(uVar2 + 1);
      param_5 = (int)(param_5 + 0x34);
    } while (uVar2 < param_6);
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = (uint)(uVar2);
  }
  thunk_FUN_113c1ba0(local_54,param_3);
  return;
}


// Reference entry 113bd290; body size 441 bytes.
#line 1 "ENTRY_113bd290"

void FUN_113bd290(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8,undefined4 param_9,int param_10,
                 undefined4 param_11,int param_12)

{
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4 [28];
  undefined *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined *local_ac [7];
  undefined *local_90;
  undefined *local_74;
  undefined *local_58;
  undefined *local_3c;
  undefined *local_20;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_f0);
  local_f0 = (undefined4)(param_6);
  local_ec = (undefined4)(param_9);
  local_e8 = (undefined4)(param_11);
  local_c4 = (undefined4)(0);
  local_c0 = (undefined4)(0);
  uStack_bc = (undefined4)(0);
  uStack_b8 = (undefined4)(0);
  uStack_b4 = (undefined4)(0);
  local_b0 = (undefined4)(0);
  memset(local_ac,0,0xa8);
  local_c8 = (undefined *)(&DAT_11a032a0);
  local_ac[0] = (undefined *)(&DAT_11a032a8);
  local_90 = (undefined *)(&DAT_11a032b0);
  local_74 = (undefined *)(&DAT_11a032b8);
  local_58 = (undefined *)(&DAT_11a032c0);
  local_3c = (undefined *)(&DAT_11a032c8);
  local_20 = (undefined *)(&DAT_11a032d0);
  thunk_FUN_113c1c50(local_e4,param_1,*param_2,0xc,&local_c8,7);
  thunk_FUN_113c1b00(local_e4,2,param_3);
  if (param_4 != 0) {
    thunk_FUN_113c1a30(local_e4,9,param_4);
  }
  if (param_5 != 0) {
    thunk_FUN_113c1a30(local_e4,0x26,param_5);
  }
  if (param_7 != 0) {
    thunk_FUN_113c1760(local_e4,0xf,local_f0,param_7);
  }
  if (param_8 != 0) {
    thunk_FUN_113c1b00(local_e4,0x10,param_8);
  }
  if (param_10 != 0) {
    thunk_FUN_113c1760(local_e4,0x11,local_ec,param_10);
  }
  if (param_12 != 0) {
    thunk_FUN_113c1760(local_e4,0x12,local_e8,param_12);
  }
  thunk_FUN_113c1ba0(local_e4,param_2);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113bd4c0; body size 403 bytes.
#line 1 "ENTRY_113bd4c0"

void FUN_113bd4c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined1 local_e4 [28];
  undefined *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined *local_ac [7];
  undefined *local_90;
  undefined *local_74;
  undefined *local_58;
  undefined *local_3c;
  undefined *local_20;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_e4);
  local_c4 = (undefined4)(0);
  local_c0 = (undefined4)(0);
  uStack_bc = (undefined4)(0);
  uStack_b8 = (undefined4)(0);
  uStack_b4 = (undefined4)(0);
  local_b0 = (undefined4)(0);
  memset(local_ac,0,0xa8);
  local_c8 = (undefined *)(&DAT_11a03240);
  local_ac[0] = (undefined *)(&DAT_11a03248);
  local_90 = (undefined *)(&DAT_11a03250);
  local_74 = (undefined *)(&DAT_11a03258);
  local_58 = (undefined *)(&DAT_11a03260);
  local_3c = (undefined *)(&DAT_11a03268);
  local_20 = (undefined *)(&DAT_11a03270);
  thunk_FUN_113c1c50(local_e4,param_1,*param_2,7,&local_c8,7);
  thunk_FUN_113c1b50(local_e4,0xb,param_3);
  thunk_FUN_113c1760(local_e4,0xc,param_4,param_5);
  if (param_7 != 0) {
    thunk_FUN_113c1760(local_e4,0xe,param_6,param_7);
  }
  if ((char)param_8 != '\0') {
    thunk_FUN_113c1b50(local_e4,0x1b,param_8);
  }
  if ((char)param_9 != '\0') {
    thunk_FUN_113c1b50(local_e4,0x1c,param_9);
  }
  if ((char)param_10 != '\0') {
    thunk_FUN_113c1b50(local_e4,0x1d,param_10);
  }
  if ((char)param_11 != '\0') {
    thunk_FUN_113c1b50(local_e4,0x1e,param_11);
  }
  thunk_FUN_113c1ba0(local_e4,param_2);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113bd6c0; body size 111 bytes.
#line 1 "ENTRY_113bd6c0"

void FUN_113bd6c0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c [28];
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_38 = (undefined *)(&DAT_11a03228);
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,5,&local_38,1);
  if (param_3 != 0) {
    thunk_FUN_113c1b00(local_1c,2,param_3);
  }
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113bd750; body size 352 bytes.
#line 1 "ENTRY_113bd750"

void FUN_113bd750(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,char *param_8)

{
  char cVar1;
  char *pcVar2;
  undefined4 *local_b0;
  undefined1 local_ac [28];
  undefined *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined *local_74 [7];
  undefined *local_58;
  undefined *local_3c;
  undefined *local_20;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_b0);
  local_b0 = (undefined4 *)(param_2);
  local_8c = (undefined4)(0);
  local_88 = (undefined4)(0);
  uStack_84 = (undefined4)(0);
  uStack_80 = (undefined4)(0);
  uStack_7c = (undefined4)(0);
  local_78 = (undefined4)(0);
  memset(local_74,0,0x70);
  local_90 = (undefined *)(&DAT_11a03110);
  local_74[0] = (undefined *)(&DAT_11a03118);
  local_58 = (undefined *)(&DAT_11a03120);
  local_3c = (undefined *)(&DAT_11a03128);
  local_20 = (undefined *)(&DAT_11a03130);
  thunk_FUN_113c1c50(local_ac,param_1,*local_b0,2,&local_90,5);
  thunk_FUN_113c1ab0(local_ac,0,param_3);
  thunk_FUN_113c1a30(local_ac,1,param_4);
  thunk_FUN_113c1b00(local_ac,2,param_5);
  if (param_7 != 0) {
    thunk_FUN_113c1760(local_ac,8,param_6,param_7);
  }
  if (param_8 != (char *)0x0) {
    pcVar2 = (char *)(param_8);
    do {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)(pcVar2 + 1);
    } while (cVar1 != '\0');
    if (0x32 < (uint)((int)pcVar2 - (int)(param_8 + 1))) goto LAB_113bd897;
    if (pcVar2 != (char *)(param_8) + 1) {
      thunk_FUN_113c1a30(local_ac,0x1f,param_8);
    }
  }
  thunk_FUN_113c1ba0(local_ac,local_b0);
LAB_113bd897:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113bd910; body size 99 bytes.
#line 1 "ENTRY_113bd910"

void FUN_113bd910(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_1c [28];
  
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,8,0,0);
  if ((char)param_3 != '\0') {
    thunk_FUN_113c1b50(local_1c,0x1b,param_3);
  }
  if ((char)param_4 != '\0') {
    thunk_FUN_113c1b50(local_1c,0x27,param_4);
  }
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113bd990; body size 157 bytes.
#line 1 "ENTRY_113bd990"

void FUN_113bd990(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_54 [28];
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  undefined4 local_4;
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_c = (undefined8)(0);
  local_38 = (undefined *)(&DAT_11a03310);
  local_1c = (undefined *)(&DAT_11a03318);
  thunk_FUN_113c1c50(local_54,param_1,*param_2,0x12,&local_38,2);
  thunk_FUN_113c1b00(local_54,2,param_3);
  if ((char)param_4 != '\0') {
    thunk_FUN_113c1b50(local_54,0x1b,param_4);
  }
  thunk_FUN_113c1ba0(local_54,param_2);
  return;
}


// Reference entry 113be080; body size 100 bytes.
#line 1 "ENTRY_113be080"

void FUN_113be080(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c [28];
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_38 = (undefined *)(&DAT_11a03288);
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,9,&local_38,1);
  thunk_FUN_113c1ab0(local_1c,0xd,param_3);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113be1c0; body size 157 bytes.
#line 1 "ENTRY_113be1c0"

void FUN_113be1c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined1 local_54 [28];
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  undefined4 local_4;
  
  local_34 = (undefined4)(0);
  local_20 = (undefined4)(0);
  uStack_18 = (undefined4)(0);
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(0);
  local_30 = (undefined4)(0);
  uStack_2c = (undefined4)(0);
  uStack_28 = (undefined4)(0);
  uStack_24 = (undefined4)(0);
  local_4 = (undefined4)(0);
  local_c = (undefined8)(0);
  local_38 = (undefined4 *)(&DAT_11a032f8);
  local_1c = (undefined4 *)(&DAT_11a03300);
  thunk_FUN_113c1c50(local_54,param_1,*param_2,0xf,&local_38,2);
  thunk_FUN_113c1a30(local_54,0x16,param_3);
  if (param_4 != 0) {
    thunk_FUN_113c1b00(local_54,2,param_4);
  }
  thunk_FUN_113c1ba0(local_54,param_2);
  return;
}


// Reference entry 113be400; body size 233 bytes.
#line 1 "ENTRY_113be400"

void FUN_113be400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  char cVar1;
  void *_Dst;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_10);
  local_10 = (int)(8);
  cVar1 = (char)(thunk_FUN_113ba080(param_2,param_3,&local_c,&local_10));
  if ((cVar1 != '\0') && (local_10 == 8)) {
    uVar2 = (uint)(0);
    _Dst = (void *)((void *)(param_1 + 0x5ec));
    do {
      if ((*(int *)((int)_Dst + 10) == local_c) && (*(int *)((int)_Dst + 0xe) == local_8)) {
        if ((param_4 != (undefined4 *)0x0) && (param_5 != (undefined4 *)0x0)) {
          *param_4 = (undefined4)(*(undefined4 *)((int)_Dst + 0x614));
          *param_5 = (undefined4)(*(undefined4 *)((int)_Dst + 0x618));
        }
        if (*(void **)(param_1 + 0x1844) == _Dst) {
          *(undefined4 *)(param_1 + 0x1844) = 0;
        }
        if (*(void **)(param_1 + 0x1840) == _Dst) {
          *(undefined4 *)(param_1 + 0x1840) = 0;
        }
        memset(_Dst,0,0x61c);
        thunk_FUN_1148ac28();
        return;
      }
      uVar2 = (uint)(uVar2 + 1);
      _Dst = (void *)((void *)((int)_Dst + 0x61c));
    } while (uVar2 < 3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113be5d0; body size 208 bytes.
#line 1 "ENTRY_113be5d0"

void FUN_113be5d0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined1 local_10 [12];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_14);
  iVar3 = (int)(thunk_FUN_113bed30(param_1,param_3));
  if (iVar3 != 0) {
    uVar1 = (undefined4)((*(undefined4 **)(param_2 + 100))[1]);
    *(undefined4 *)(iVar3 + 2) = **(undefined4 **)(param_2 + 100);
    *(undefined4 *)(iVar3 + 6) = uVar1;
    local_14 = (undefined4)(0xc);
    cVar2 = (char)(thunk_FUN_113bcb40(local_10,&local_14,(undefined4 *)(iVar3 + 2),8));
    if (cVar2 != '\0') {
      *(undefined1 *)(iVar3 + 0x5f4) = 1;
      iVar4 = (int)(thunk_FUN_113e6260(param_2,local_10,local_14));
      if (0 < iVar4) {
        *(undefined4 *)(param_1 + 0x5e4) = local_14;
        memcpy((void *)(iVar3 + 0x18),(void *)(param_1 + 8),*(size_t *)(param_1 + 4));
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_1 + 4);
      }
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113bf160; body size 133 bytes.
#line 1 "ENTRY_113bf160"

uint FUN_113bf160(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x5fc));
  if (uVar1 <= *(uint *)(param_1 + 0x600)) {
    return (uint)(uVar1 & 0xffffff00);
  }
  uVar5 = (uint)(*(uint *)(param_1 + 0x600) * 2);
  if (uVar1 <= uVar5) {
    uVar5 = (uint)(uVar1);
  }
  *(uint *)(param_1 + 0x600) = uVar5;
  iVar3 = (int)(*param_2);
  *(int *)(param_1 + 0x610) = param_2[1];
  iVar3 = (int)(iVar3 + uVar5 / 1000);
  *(int *)(param_1 + 0x60c) = iVar3;
  *(int *)(param_1 + 0x610) = *(int *)(param_1 + 0x610) + (uVar5 % 1000) * 1000;
  iVar2 = (int)(*(int *)(param_1 + 0x610));
  if (999999 < iVar2) {
    iVar4 = (int)(iVar2 % 1000000);
    iVar2 = (int)(iVar2 / 1000000 + iVar3);
    *(int *)(param_1 + 0x610) = iVar4;
    *(int *)(param_1 + 0x60c) = iVar2;
  }
  return (uint)(((uint)((int3)((uint)iVar2 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 113bf210; body size 123 bytes.
#line 1 "ENTRY_113bf210"

void FUN_113bf210(int param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x5fc) = param_3;
  *(uint *)(param_1 + 0x5f8) = param_2;
  *(uint *)(param_1 + 0x600) = param_2;
  iVar2 = (int)(*param_4);
  *(int *)(param_1 + 0x610) = param_4[1];
  iVar2 = (int)(iVar2 + param_2 / 1000);
  *(int *)(param_1 + 0x60c) = iVar2;
  *(int *)(param_1 + 0x610) = *(int *)(param_1 + 0x610) + (param_2 % 1000) * 1000;
  iVar1 = (int)(*(int *)(param_1 + 0x610));
  if (999999 < iVar1) {
    *(int *)(param_1 + 0x610) = iVar1 % 1000000;
    *(int *)(param_1 + 0x60c) = iVar1 / 1000000 + iVar2;
  }
  return;
}


// Reference entry 113bf7d0; body size 185 bytes.
#line 1 "ENTRY_113bf7d0"

void FUN_113bf7d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 local_84 [112];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_84);
  thunk_FUN_113d1ae0(local_84,2);
  if (param_2 != 0) {
    thunk_FUN_113d1d90(local_84,param_1,param_2);
  }
  thunk_FUN_113d1d90(local_84,param_3,param_4);
  thunk_FUN_113d1a60(local_84,auStack_14);
  thunk_FUN_113d5570(param_5,1,2,auStack_14,0x10,param_6,param_7);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113bfb20; body size 164 bytes.
#line 1 "ENTRY_113bfb20"

void FUN_113bfb20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint *param_6)

{
  int iVar1;
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_24);
  if (0x1f < *param_6) {
    iVar1 = (int)(thunk_FUN_113d1f20(param_1,param_2,"handshake_signature",0,0,local_24,0x20));
    if (iVar1 == 0) {
      iVar1 = (int)(thunk_FUN_113d1de0(1,local_24,0x20,param_3,param_4,param_5));
      if (iVar1 != 0) {
        *param_6 = (uint)(0x20);
      }
      thunk_FUN_113cfb70(local_24,0x20);
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113bfc20; body size 482 bytes.
#line 1 "ENTRY_113bfc20"

void FUN_113bfc20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,uint param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  char local_64 [96];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_78);
  local_64[0x20] = (char)('\x0e');
  local_64[0x21] = (char)(-0x7a);
  local_64[0x22] = (char)(-0x23);
  local_64[0x23] = (char)('1');
  local_64[0x24] = (char)('.');
  local_64[0x25] = (char)(-0x55);
  local_64[0x26] = (char)(-0x33);
  local_64[0x27] = (char)('J');
  local_64[0x28] = (char)(-0xb);
  local_64[0x29] = (char)('\x11');
  local_64[0x2a] = (char)('A');
  local_64[0x2b] = (char)('6');
  local_64[0x2c] = (char)(-0x44);
  local_64[0x2d] = (char)(-0x49);
  local_64[0x2e] = (char)('K');
  local_64[0x2f] = (char)(-0x41);
  local_64[0x30] = (char)('T');
  local_64[0x31] = (char)(-0x72);
  local_64[0x32] = (char)(-0x5a);
  local_64[0x33] = (char)(-0x41);
  local_64[0x34] = (char)(-0x3b);
  local_64[0x35] = (char)('(');
  local_64[0x36] = (char)(-0x18);
  local_64[0x37] = (char)('l');
  local_64[0x38] = (char)(-0x5a);
  local_64[0x39] = (char)(')');
  local_64[0x3a] = (char)('V');
  local_64[0x3b] = (char)('*');
  local_64[0x3c] = (char)('8');
  local_64[0x3d] = (char)('G');
  local_64[0x3e] = (char)('\x16');
  local_64[0x3f] = (char)('\f');
  local_64[0x40] = (char)('g');
  local_64[0x41] = (char)(-0x38);
  local_64[0x42] = (char)('1');
  local_64[0x43] = (char)('\x06');
  local_64[0x44] = (char)(-0x5f);
  local_64[0x45] = (char)('A');
  local_64[0x46] = (char)(']');
  local_64[0x47] = (char)(-0x7c);
  local_64[0x48] = (char)('B');
  local_64[0x49] = (char)(-0x78);
  local_64[0x4a] = (char)('2');
  local_64[0x4b] = (char)('%');
  local_64[0x4c] = (char)('+');
  local_64[0x4d] = (char)(-0x4d);
  local_64[0x4e] = (char)('\x18');
  local_64[0x4f] = (char)('h');
  local_64[0x50] = (char)(-2);
  local_64[0x51] = (char)('J');
  local_64[0x52] = (char)('\b');
  local_64[0x53] = (char)('\r');
  local_64[0x54] = (char)(-0x32);
  local_64[0x55] = (char)(-0x4a);
  local_64[0x56] = (char)('#');
  local_64[0x57] = (char)('O');
  local_64[0x58] = (char)(-9);
  local_64[0x59] = (char)(-0x70);
  local_64[0x5a] = (char)('<');
  local_64[0x5b] = (char)('f');
  local_64[0x5c] = (char)('L');
  local_64[0x5d] = (char)('.');
  local_64[0x5e] = (char)(-0x4a);
  local_64[0x5f] = (char)('S');
  local_64[0] = (char)(-0x3f);
  local_64[1] = (char)(-0x62);
  local_64[2] = (char)(-0x7d);
  local_64[3] = (char)('Z');
  local_64[4] = (char)(-10);
  local_64[5] = (char)('\x04');
  local_64[6] = (char)(-99);
  local_64[7] = (char)(-0x36);
  local_64[8] = (char)(-0x6b);
  local_64[9] = (char)('f');
  local_64[10] = (char)('w');
  local_64[0xb] = (char)(-6);
  local_64[0xc] = (char)(-0x27);
  local_64[0xd] = (char)('\x1a');
  local_64[0xe] = (char)('*');
  local_64[0xf] = (char)(']');
  local_64[0x10] = (char)(-0x29);
  local_64[0x11] = (char)(-0x3e);
  local_64[0x12] = (char)('Y');
  local_64[0x13] = (char)('6');
  local_64[0x14] = (char)('\x14');
  local_64[0x15] = (char)('M');
  local_64[0x16] = (char)('N');
  local_64[0x17] = (char)('2');
  local_64[0x18] = (char)('3');
  local_64[0x19] = (char)('X');
  local_64[0x1a] = (char)(-7);
  local_64[0x1b] = (char)('\v');
  local_64[0x1c] = (char)('\r');
  local_64[0x1d] = (char)(-0x5c);
  local_64[0x1e] = (char)('#');
  local_64[0x1f] = (char)(-0x3f);
  local_78 = (undefined4)(0x693da70c);
  uStack_74 = (undefined4)(0xe111edd2);
  uStack_70 = (undefined4)(0x3c42eb32);
  uStack_6c = (undefined4)(0xc61ac147);
  local_68 = (undefined2)(0xb633);
  if (param_6 < 0x12) {
    thunk_FUN_1148ac28();
    return;
  }
  uVar2 = (uint)(0);
  do {
    local_64[uVar2] = (char)(local_64[uVar2 + 0x20] + local_64[uVar2]);
    local_64[uVar2 + 1] = (char)(local_64[uVar2 + 0x21] + local_64[uVar2 + 1]);
    local_64[uVar2 + 2] = (char)(local_64[uVar2 + 0x22] + local_64[uVar2 + 2]);
    local_64[uVar2 + 3] = (char)(local_64[uVar2 + 0x23] + local_64[uVar2 + 3]);
    local_64[uVar2 + 4] = (char)(local_64[uVar2 + 0x24] + local_64[uVar2 + 4]);
    local_64[uVar2 + 5] = (char)(local_64[uVar2 + 0x25] + local_64[uVar2 + 5]);
    local_64[uVar2 + 6] = (char)(local_64[uVar2 + 0x26] + local_64[uVar2 + 6]);
    local_64[uVar2 + 7] = (char)(local_64[uVar2 + 0x27] + local_64[uVar2 + 7]);
    local_64[uVar2 + 8] = (char)(local_64[uVar2 + 0x28] + local_64[uVar2 + 8]);
    local_64[uVar2 + 9] = (char)(local_64[uVar2 + 0x29] + local_64[uVar2 + 9]);
    local_64[uVar2 + 10] = (char)(local_64[uVar2 + 0x2a] + local_64[uVar2 + 10]);
    local_64[uVar2 + 0xb] = (char)(local_64[uVar2 + 0x2b] + local_64[uVar2 + 0xb]);
    local_64[uVar2 + 0xc] = (char)(local_64[uVar2 + 0x2c] + local_64[uVar2 + 0xc]);
    local_64[uVar2 + 0xd] = (char)(local_64[uVar2 + 0x2d] + local_64[uVar2 + 0xd]);
    local_64[uVar2 + 0xe] = (char)(local_64[uVar2 + 0x2e] + local_64[uVar2 + 0xe]);
    local_64[uVar2 + 0xf] = (char)(local_64[uVar2 + 0x2f] + local_64[uVar2 + 0xf]);
    uVar2 = (uint)(uVar2 + 0x10);
  } while (uVar2 < 0x20);
  local_78 = (undefined4)(0x6f6e6f73);
  uStack_74 = (undefined4)(0x656e2e73);
  uStack_70 = (undefined4)(0x61747374);
  uStack_6c = (undefined4)(0x2e327472);
  uVar2 = (uint)(0x10);
  do {
    uVar4 = (uint)(uVar2);
    *(char *)((int)&local_78 + uVar4) = *(char *)((int)&local_78 + uVar4) + local_64[uVar4 + 0x40];
    uVar2 = (uint)(uVar4 + 1);
  } while (uVar4 + 1 < 0x12);
  uVar1 = (undefined4)(*param_4);
  *(undefined1 *)((int)&local_78 + uVar4) = 0;
  iVar3 = (int)(thunk_FUN_113d1f20(local_64,0x20,&local_78,param_1,param_2,param_3,uVar1));
  if (iVar3 == 0) {
    *param_5 = (undefined4)(local_78);
    param_5[1] = (undefined4)(uStack_74);
    param_5[2] = (undefined4)(uStack_70);
    param_5[3] = (undefined4)(uStack_6c);
    *(undefined2 *)(param_5 + 4) = local_68;
  }
  thunk_FUN_113cfb70(local_64,0x20);
  thunk_FUN_113cfb70(&local_78,0x12);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113c14f0; body size 173 bytes.
#line 1 "ENTRY_113c14f0"

char FUN_113c14f0(char *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  cVar5 = (char)(*param_1);
  if (((cVar5 != '\0') && (*(int *)(param_1 + 0x14) != 0)) &&
     (uVar7 = 0, *(int *)(param_1 + 0x18) != 0)) {
    iVar8 = (int)(0);
    do {
      iVar6 = (int)(*(int *)(param_1 + 0x14));
      iVar1 = (int)(iVar8 + iVar6);
      if (*(int *)(*(int *)(iVar8 + iVar6) + 4) == 1) {
        if (*(int *)(iVar1 + 4) == 0) {
          *param_1 = (char)('\0');
          return (char)('\0');
        }
      }
      else if (*(int *)(iVar1 + 4) == 0) {
        if (*(undefined4 **)(iVar1 + 8) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar1 + 8) = 0;
          iVar6 = (int)(*(int *)(param_1 + 0x14));
        }
        puVar2 = (undefined1 *)(*(undefined1 **)(iVar8 + 0xc + iVar6));
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = (undefined1)(0);
          iVar6 = (int)(*(int *)(param_1 + 0x14));
        }
        puVar2 = (undefined1 *)(*(undefined1 **)(iVar8 + 0x10 + iVar6));
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = (undefined1)(0);
          iVar6 = (int)(*(int *)(param_1 + 0x14));
        }
        puVar3 = (undefined2 *)(*(undefined2 **)(iVar8 + 0x14 + iVar6));
        if (puVar3 != (undefined2 *)0x0) {
          *puVar3 = (undefined2)(0);
          iVar6 = (int)(*(int *)(param_1 + 0x14));
        }
        puVar4 = (undefined4 *)(*(undefined4 **)(iVar8 + 0x18 + iVar6));
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = (undefined4)(0);
        }
      }
      uVar7 = (uint)(uVar7 + 1);
      iVar8 = (int)(iVar8 + 0x1c);
    } while (uVar7 < *(uint *)(param_1 + 0x18));
    cVar5 = (char)(*param_1);
  }
  return (char)(cVar5);
}


// Reference entry 113c15d0; body size 100 bytes.
#line 1 "ENTRY_113c15d0"

undefined4
FUN_113c15d0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6)

{
  char cVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = (undefined1)(0);
  *param_1 = (undefined1)(1);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x14) = param_5;
  *(int *)(param_1 + 0x18) = param_6;
  cVar1 = (char)(thunk_FUN_113bcb10(param_2,param_3,param_4));
  if ((cVar1 != '\0') && ((param_6 == 0 || (param_5 != 0)))) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    return (undefined4)(1);
  }
  *param_1 = (undefined1)(0);
  return (undefined4)(0);
}


// Reference entry 113c1760; body size 85 bytes.
#line 1 "ENTRY_113c1760"

undefined4 FUN_113c1760(char *param_1,undefined4 param_2,void *param_3,uint param_4)

{
  char cVar1;
  uint _Size;
  
  if (param_4 < 0x10000) {
    _Size = (uint)(param_4 & 0xffff);
    if (*param_1 != '\0') {
      cVar1 = (char)(thunk_FUN_113c17d0(param_1,param_2,_Size));
      if (cVar1 != '\0') {
        if ((short)param_4 != 0) {
          memcpy(*(void **)(param_1 + 0xc),param_3,_Size);
        }
        *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + _Size;
        *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - _Size;
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 113c1a30; body size 94 bytes.
#line 1 "ENTRY_113c1a30"

undefined4 FUN_113c1a30(char *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)(param_3);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  uVar3 = (uint)((int)pcVar2 - (int)(param_3 + 1));
  if ((uVar3 < 0x10000) && (*param_1 != '\0')) {
    cVar1 = (char)(thunk_FUN_113c17d0(param_1,param_2,uVar3));
    if (cVar1 != '\0') {
      uVar3 = (uint)(uVar3 & 0xffff);
      memcpy(*(void **)(param_1 + 0xc),param_3,uVar3);
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar3;
      *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar3;
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 113c1ba0; body size 86 bytes.
#line 1 "ENTRY_113c1ba0"

char FUN_113c1ba0(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if (*param_1 != '\0') {
    piVar3 = (int *)(*(int **)(param_1 + 0x14));
    if (piVar3 != (int *)0x0) {
      uVar4 = (uint)(0);
      if (*(uint *)(param_1 + 0x18) != 0) {
        do {
          if ((*(int *)(*piVar3 + 4) == 1) && (piVar3[1] == 0)) {
            *param_1 = (char)('\0');
            return (char)('\0');
          }
          uVar4 = (uint)(uVar4 + 1);
          piVar3 = (int *)(piVar3 + 7);
        } while (uVar4 < *(uint *)(param_1 + 0x18));
      }
    }
    iVar1 = (int)(*(int *)(param_1 + 0xc));
    iVar2 = (int)(*(int *)(param_1 + 4));
    param_1[0x10] = (char)('\0');
    param_1[0x11] = (char)('\0');
    param_1[0x12] = (char)('\0');
    param_1[0x13] = (char)('\0');
    *param_2 = (int)(iVar1 - iVar2);
  }
  return (char)(*param_1);
}


// Reference entry 113c1c50; body size 84 bytes.
#line 1 "ENTRY_113c1c50"

undefined4
FUN_113c1c50(undefined1 *param_1,undefined1 *param_2,int param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = (undefined1)(0);
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *param_1 = (undefined1)(1);
  *(undefined1 **)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  *(undefined1 **)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  if ((param_3 != 0) && (param_4 < 0x18)) {
    *param_2 = (undefined1)((char)param_4);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    return (undefined4)(1);
  }
  *param_1 = (undefined1)(0);
  return (undefined4)(0);
}


// Reference entry 113c1e40; body size 218 bytes.
#line 1 "ENTRY_113c1e40"

undefined4 FUN_113c1e40(int param_1,int param_2,undefined1 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = (uint)(0);
  uVar1 = (uint)(param_2 * 8);
  *param_3 = (undefined1)(0);
  if ((uVar1 + 4) / 5 + 1 <= *param_4) {
    uVar5 = (uint)(0);
    if (uVar1 != 0) {
      do {
        uVar3 = (uint)(uVar5 >> 3);
        cVar4 = (char)((char)(uVar5 & 7));
        if ((uVar5 & 7) < 4) {
          uVar2 = (uint)((uint)(*(byte *)(uVar3 + param_1) >> (3U - cVar4 & 0x1f)));
        }
        else {
          uVar2 = (uint)((uint)*(byte *)(uVar3 + param_1) << (cVar4 - 3U & 0x1f));
          if ((int)(uVar3 + 1) < param_2) {
            uVar2 = (uint)(uVar2 | *(byte *)(uVar3 + 1 + param_1) >> (0xbU - cVar4 & 0x1f));
          }
        }
        uVar2 = (uint)(uVar2 & 0x1f);
        if (uVar1 - uVar5 < 5) {
          uVar2 = (uint)(uVar2 & 0x1f << ((char)param_2 * -8 + '\x05' + (char)uVar5 & 0x1fU));
        }
        uVar5 = (uint)(uVar5 + 5);
        param_3[uVar6] = (undefined1)("ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"[uVar2]);
        uVar6 = (uint)(uVar6 + 1);
      } while (uVar5 < uVar1);
    }
    param_3[uVar6] = (undefined1)(0);
    *param_4 = (uint)(uVar6);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 113c58b0; body size 75 bytes.
#line 1 "ENTRY_113c58b0"

void FUN_113c58b0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint _Size;
  
  iVar2 = (int)(*(int *)(param_1 + 0x1c));
  thunk_FUN_113ca100(iVar2);
  _Size = (uint)(*(uint *)(param_1 + 0x10));
  if (*(uint *)(iVar2 + 0x14) <= *(uint *)(param_1 + 0x10)) {
    _Size = (uint)(*(size_t *)(iVar2 + 0x14));
  }
  if (_Size != 0) {
    memcpy(*(void **)(param_1 + 0xc),*(void **)(iVar2 + 0x10),_Size);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + _Size;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + _Size;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + _Size;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - _Size;
    piVar1 = (int *)((int *)(iVar2 + 0x14));
    *piVar1 = (int)(*piVar1 - _Size);
    if (*piVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return;
}


// Reference entry 113c5cc0; body size 97 bytes.
#line 1 "ENTRY_113c5cc0"

void FUN_113c5cc0(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (int)(*(int *)(param_1 + 0x4c));
  uVar2 = (uint)(*(uint *)(param_1 + 0x2c));
  psVar4 = (short *)((short *)(*(int *)(param_1 + 0x44) + iVar5 * 2));
  do {
    puVar1 = (ushort *)((ushort *)(psVar4 + -1));
    psVar4 = (short *)(psVar4 + -1);
    sVar3 = (short)(*puVar1 - (short)uVar2);
    if (*puVar1 < uVar2) {
      sVar3 = (short)(0);
    }
    *psVar4 = (short)(sVar3);
    iVar5 = (int)(iVar5 + -1);
  } while (iVar5 != 0);
  psVar4 = (short *)((short *)(*(int *)(param_1 + 0x40) + uVar2 * 2));
  uVar6 = (uint)(uVar2);
  do {
    puVar1 = (ushort *)((ushort *)(psVar4 + -1));
    psVar4 = (short *)(psVar4 + -1);
    sVar3 = (short)(*puVar1 - (short)uVar2);
    if (*puVar1 < uVar2) {
      sVar3 = (short)(0);
    }
    *psVar4 = (short)(sVar3);
    uVar6 = (uint)(uVar6 - 1);
  } while (uVar6 != 0);
  return;
}


// Reference entry 113c8a40; body size 239 bytes.
#line 1 "ENTRY_113c8a40"

undefined4 FUN_113c8a40(int param_1,int param_2,uint param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  size_t _Size;
  uint uVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 0x1c));
  _Dst = (void *)(*(void **)(iVar1 + 0x38));
  if (_Dst == (void *)0x0) {
    _Dst = (void *)((void *)(**(code **)(param_1 + 0x20))
                             (*(undefined4 *)(param_1 + 0x28),
                              1 << ((byte)*(undefined4 *)(iVar1 + 0x28) & 0x1f),1));
    *(void **)(iVar1 + 0x38) = _Dst;
    if (_Dst == (void *)0x0) {
      return (undefined4)(1);
    }
  }
  uVar3 = (uint)(*(uint *)(iVar1 + 0x2c));
  if (uVar3 == 0) {
    uVar3 = (uint)(1 << ((byte)*(undefined4 *)(iVar1 + 0x28) & 0x1f));
    *(uint *)(iVar1 + 0x2c) = uVar3;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (uVar3 <= param_3) {
    memcpy(_Dst,(void *)(param_2 - uVar3),uVar3);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
    *(undefined4 *)(iVar1 + 0x34) = 0;
    return (undefined4)(0);
  }
  uVar3 = (uint)(uVar3 - *(int *)(iVar1 + 0x34));
  if (param_3 < uVar3) {
    uVar3 = (uint)(param_3);
  }
  memcpy((void *)(*(int *)(iVar1 + 0x34) + (int)_Dst),(void *)(param_2 - param_3),uVar3);
  _Size = (size_t)(param_3 - uVar3);
  if (_Size != 0) {
    memcpy(*(void **)(iVar1 + 0x38),(void *)(param_2 - _Size),_Size);
    *(size_t *)(iVar1 + 0x34) = _Size;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
    return (undefined4)(0);
  }
  *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + uVar3;
  iVar2 = (int)(*(int *)(iVar1 + 0x34));
  if (iVar2 == *(int *)(iVar1 + 0x2c)) {
    iVar2 = (int)(0);
  }
  *(int *)(iVar1 + 0x34) = iVar2;
  if (*(uint *)(iVar1 + 0x30) < *(uint *)(iVar1 + 0x2c)) {
    *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) + uVar3;
  }
  return (undefined4)(0);
}


// Reference entry 113c8c50; body size 1044 bytes.
#line 1 "ENTRY_113c8c50"

uint FUN_113c8c50(uint param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (param_2 == (uint *)0x0) {
    return (uint)(0);
  }
  param_1 = (uint)(~param_1);
  if (0x16 < param_3) {
    do {
      if (((uint)param_2 & 3) == 0) break;
      uVar5 = (uint)(*param_2);
      param_2 = (uint *)((uint *)((int)param_2 + 1));
      param_1 = (uint)(param_1 >> 8 ^ *(uint *)(&DAT_11a046a8 + (((byte)uVar5 ^ param_1) & 0xff) * 4));
      param_3 = (uint)(param_3 - 1);
    } while (param_3 != 0);
    uVar3 = (uint)(param_3 / 0x14);
    uVar5 = (uint)(0);
    local_1c = (uint)(0);
    local_18 = (uint)(0);
    param_3 = (uint)(param_3 % 0x14);
    local_14 = (uint)(0);
    iVar4 = (int)(uVar3 - 1);
    if (iVar4 != 0) {
      uVar5 = (uint)(0);
      do {
        param_1 = (uint)(*param_2 ^ param_1);
        uVar5 = (uint)(param_2[1] ^ uVar5);
        local_1c = (uint)(param_2[2] ^ local_1c);
        local_18 = (uint)(param_2[3] ^ local_18);
        puVar1 = (uint *)(param_2 + 4);
        param_2 = (uint *)(param_2 + 5);
        local_14 = (uint)(*puVar1 ^ local_14);
        param_1 = (uint)(*(uint *)(&DAT_11a04ea8 + (param_1 & 0xff) * 4) ^
                  *(uint *)(&DAT_11a056a8 + (param_1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_11a052a8 + (param_1 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_11a05aa8 + (param_1 >> 0x18) * 4));
        uVar5 = (uint)(*(uint *)(&DAT_11a04ea8 + (uVar5 & 0xff) * 4) ^
                *(uint *)(&DAT_11a056a8 + (uVar5 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_11a052a8 + (uVar5 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_11a05aa8 + (uVar5 >> 0x18) * 4));
        local_1c = (uint)(*(uint *)(&DAT_11a04ea8 + (local_1c & 0xff) * 4) ^
                   *(uint *)(&DAT_11a056a8 + (local_1c >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_11a052a8 + (local_1c >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_11a05aa8 + (local_1c >> 0x18) * 4));
        local_18 = (uint)(*(uint *)(&DAT_11a04ea8 + (local_18 & 0xff) * 4) ^
                   *(uint *)(&DAT_11a056a8 + (local_18 >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_11a052a8 + (local_18 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_11a05aa8 + (local_18 >> 0x18) * 4));
        local_14 = (uint)(*(uint *)(&DAT_11a04ea8 + (local_14 & 0xff) * 4) ^
                   *(uint *)(&DAT_11a056a8 + (local_14 >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_11a052a8 + (local_14 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_11a05aa8 + (local_14 >> 0x18) * 4));
        iVar4 = (int)(iVar4 + -1);
      } while (iVar4 != 0);
    }
    uVar3 = (uint)((*param_2 ^ param_1) >> 8 ^ *(uint *)(&DAT_11a046a8 + ((*param_2 ^ param_1) & 0xff) * 4));
    uVar3 = (uint)(uVar3 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar3 & 0xff) * 4));
    uVar3 = (uint)(uVar3 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar3 & 0xff) * 4));
    uVar5 = (uint)(param_2[1] ^ uVar3 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar3 & 0xff) * 4) ^ uVar5);
    uVar5 = (uint)(uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4));
    uVar5 = (uint)(uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4));
    uVar5 = (uint)(uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4));
    local_1c = (uint)(param_2[2] ^ uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4) ^ local_1c);
    uVar5 = (uint)(local_1c >> 8 ^ *(uint *)(&DAT_11a046a8 + (local_1c & 0xff) * 4));
    uVar5 = (uint)(uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4));
    uVar5 = (uint)(uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4));
    local_18 = (uint)(param_2[3] ^ uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4) ^ local_18);
    uVar5 = (uint)(local_18 >> 8 ^ *(uint *)(&DAT_11a046a8 + (local_18 & 0xff) * 4));
    uVar5 = (uint)(uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4));
    uVar5 = (uint)(uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4));
    local_14 = (uint)(param_2[4] ^ uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4) ^ local_14);
    uVar5 = (uint)(local_14 >> 8 ^ *(uint *)(&DAT_11a046a8 + (local_14 & 0xff) * 4));
    uVar5 = (uint)(uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4));
    uVar5 = (uint)(uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4));
    param_1 = (uint)(uVar5 >> 8 ^ *(uint *)(&DAT_11a046a8 + (uVar5 & 0xff) * 4));
    param_2 = (uint *)(param_2 + 5);
  }
  if (7 < param_3) {
    uVar5 = (uint)(param_3 >> 3);
    do {
      param_3 = (uint)(param_3 - 8);
      uVar3 = (uint)(param_1 >> 8 ^ *(uint *)(&DAT_11a046a8 + (((byte)*param_2 ^ param_1) & 0xff) * 4));
      uVar3 = (uint)(uVar3 >> 8 ^
              *(uint *)(&DAT_11a046a8 + ((*(byte *)((int)param_2 + 1) ^ uVar3) & 0xff) * 4));
      uVar3 = (uint)(uVar3 >> 8 ^
              *(uint *)(&DAT_11a046a8 + ((*(byte *)((int)param_2 + 2) ^ uVar3) & 0xff) * 4));
      uVar3 = (uint)(uVar3 >> 8 ^
              *(uint *)(&DAT_11a046a8 + ((*(byte *)((int)param_2 + 3) ^ uVar3) & 0xff) * 4));
      uVar3 = (uint)(uVar3 >> 8 ^ *(uint *)(&DAT_11a046a8 + (((byte)param_2[1] ^ uVar3) & 0xff) * 4));
      uVar3 = (uint)(uVar3 >> 8 ^
              *(uint *)(&DAT_11a046a8 + ((*(byte *)((int)param_2 + 5) ^ uVar3) & 0xff) * 4));
      uVar3 = (uint)(uVar3 >> 8 ^
              *(uint *)(&DAT_11a046a8 + ((*(byte *)((int)param_2 + 6) ^ uVar3) & 0xff) * 4));
      pbVar2 = (byte *)((byte *)((int)param_2 + 7));
      param_2 = (uint *)(param_2 + 2);
      param_1 = (uint)(uVar3 >> 8 ^ *(uint *)(&DAT_11a046a8 + ((*pbVar2 ^ uVar3) & 0xff) * 4));
      uVar5 = (uint)(uVar5 - 1);
    } while (uVar5 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar5 = (uint)(*param_2);
    param_2 = (uint *)((uint *)((int)param_2 + 1));
    param_1 = (uint)(param_1 >> 8 ^ *(uint *)(&DAT_11a046a8 + (((byte)uVar5 ^ param_1) & 0xff) * 4));
  }
  return (uint)(~param_1);
}


// Reference entry 113c9800; body size 223 bytes.
#line 1 "ENTRY_113c9800"

void FUN_113c9800(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = (int)(*(int *)(param_1 + 0x16bc));
  uVar2 = (ushort)(2 << ((byte)iVar3 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
  if (iVar3 < 0xe) {
    iVar3 = (int)(iVar3 + 3);
    *(int *)(param_1 + 0x16bc) = iVar3;
  }
  else {
    *(ushort *)(param_1 + 0x16b8) = uVar2;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b9);
    uVar1 = (undefined2)(*(undefined2 *)(param_1 + 0x16bc));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar3 = (int)(*(int *)(param_1 + 0x16bc));
    uVar2 = (ushort)(2 >> (0x10U - (char)uVar1 & 0x1f));
  }
  *(ushort *)(param_1 + 0x16b8) = uVar2;
  if (9 < iVar3) {
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b9);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -9;
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    FUN_113ca100(param_1);
    return;
  }
  *(int *)(param_1 + 0x16bc) = iVar3 + 7;
  *(ushort *)(param_1 + 0x16b8) = uVar2;
  FUN_113ca100(param_1);
  return;
}


// Reference entry 113c9ec0; body size 259 bytes.
#line 1 "ENTRY_113c9ec0"

void FUN_113c9ec0(int param_1,void *param_2,size_t param_3,ushort param_4)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  
  iVar3 = (int)(*(int *)(param_1 + 0x16bc));
  if (iVar3 < 0xe) {
    *(int *)(param_1 + 0x16bc) = iVar3 + 3;
    param_4 = (ushort)(param_4 << ((byte)iVar3 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
  }
  else {
    uVar4 = (ushort)(param_4 << ((byte)iVar3 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
    *(ushort *)(param_1 + 0x16b8) = uVar4;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b9);
    uVar1 = (undefined2)(*(undefined2 *)(param_1 + 0x16bc));
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
    param_4 = (ushort)(param_4 >> (0x10U - (char)uVar1 & 0x1f));
  }
  *(ushort *)(param_1 + 0x16b8) = param_4;
  FUN_113ca1d0(param_1);
  *(byte *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (byte)param_3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  bVar2 = (byte)((byte)(param_3 >> 8));
  *(byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = bVar2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = ~(byte)param_3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(byte *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = ~bVar2;
  iVar3 = (int)(*(int *)(param_1 + 0x14) + 1);
  *(int *)(param_1 + 0x14) = iVar3;
  if (param_3 != 0) {
    memcpy((void *)(*(int *)(param_1 + 8) + iVar3),param_2,param_3);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
    return;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}


// Reference entry 113ca100; body size 117 bytes.
#line 1 "ENTRY_113ca100"

void FUN_113ca100(int param_1)

{
  if (*(int *)(param_1 + 0x16bc) == 0x10) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b9);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined4 *)(param_1 + 0x16bc) = 0;
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    return;
  }
  if (7 < *(int *)(param_1 + 0x16bc)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -8;
    *(ushort *)(param_1 + 0x16b8) = (ushort)*(byte *)(param_1 + 0x16b9);
  }
  return;
}


// Reference entry 113ca1d0; body size 89 bytes.
#line 1 "ENTRY_113ca1d0"

void FUN_113ca1d0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x16bc) < 9) {
    if (*(int *)(param_1 + 0x16bc) < 1) goto LAB_113ca218;
    iVar3 = (int)(*(int *)(param_1 + 8));
    iVar2 = (int)(*(int *)(param_1 + 0x14));
    uVar1 = (undefined1)(*(undefined1 *)(param_1 + 0x16b8));
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar3 = (int)(*(int *)(param_1 + 0x14));
    iVar2 = (int)(*(int *)(param_1 + 8));
    uVar1 = (undefined1)(*(undefined1 *)(param_1 + 0x16b9));
  }
  *(undefined1 *)(iVar3 + iVar2) = uVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
LAB_113ca218:
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  return;
}


// Reference entry 113ca6b0; body size 1071 bytes.
#line 1 "ENTRY_113ca6b0"

void FUN_113ca6b0(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  
  uVar9 = (uint)(0);
  if (*(int *)(param_1 + 0x16a0) != 0) {
    do {
      iVar5 = (int)(*(int *)(param_1 + 0x1698));
      puVar2 = (undefined1 *)((undefined1 *)(iVar5 + 1 + uVar9));
      puVar1 = (undefined1 *)((undefined1 *)(iVar5 + uVar9));
      bVar3 = (byte)(*(byte *)(iVar5 + 2 + uVar9));
      uVar12 = (uint)((uint)bVar3);
      uVar9 = (uint)(uVar9 + 3);
      uVar10 = (uint)((uint)((uint)(*puVar2) << 8 | (uint)(*puVar1)));
      if (uVar10 == 0) {
        iVar5 = (int)(*(int *)(param_1 + 0x16bc));
        uVar10 = (uint)((uint)*(ushort *)(param_2 + 2 + uVar12 * 4));
        uVar11 = (ushort)(*(ushort *)(param_2 + uVar12 * 4));
        if ((int)(0x10 - uVar10) < iVar5) {
          uVar8 = (ushort)(uVar11 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
          *(ushort *)(param_1 + 0x16b8) = uVar8;
          *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar8;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
               *(undefined1 *)(param_1 + 0x16b9);
          iVar5 = (int)(*(int *)(param_1 + 0x16bc) + -0x10);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          uVar11 = (ushort)(uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f));
        }
        else {
          uVar11 = (ushort)(uVar11 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
        }
        *(ushort *)(param_1 + 0x16b8) = uVar11;
        *(uint *)(param_1 + 0x16bc) = iVar5 + uVar10;
      }
      else {
        iVar5 = (int)((uint)(byte)(&DAT_11a07748)[uVar12] * 4);
        uVar6 = (uint)((uint)*(ushort *)(iVar5 + 0x406 + param_2));
        uVar11 = (ushort)(*(ushort *)(param_2 + 0x404 + (uint)(byte)(&DAT_11a07748)[uVar12] * 4));
        uVar8 = (ushort)(uVar11 << ((byte)*(undefined4 *)(param_1 + 0x16bc) & 0x1f) |
                *(ushort *)(param_1 + 0x16b8));
        if ((int)(0x10 - uVar6) < *(int *)(param_1 + 0x16bc)) {
          *(ushort *)(param_1 + 0x16b8) = uVar8;
          *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar8;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
               *(undefined1 *)(param_1 + 0x16b9);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          uVar8 = (ushort)(uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f));
          iVar7 = (int)((uVar6 - 0x10) + *(int *)(param_1 + 0x16bc));
        }
        else {
          iVar7 = (int)(*(int *)(param_1 + 0x16bc) + uVar6);
        }
        *(int *)(param_1 + 0x16bc) = iVar7;
        *(ushort *)(param_1 + 0x16b8) = uVar8;
        iVar7 = (int)(*(int *)(&DAT_11a07a48 + iVar5));
        if (iVar7 != 0) {
          uVar11 = (ushort)((ushort)bVar3 - (short)*(undefined4 *)(&DAT_11a08090 + iVar5));
          iVar5 = (int)(*(int *)(param_1 + 0x16bc));
          if (0x10 - iVar7 < iVar5) {
            uVar8 = (ushort)(uVar11 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
            *(ushort *)(param_1 + 0x16b8) = uVar8;
            *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar8;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                 *(undefined1 *)(param_1 + 0x16b9);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(ushort *)(param_1 + 0x16b8) = uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f);
            *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + iVar7 + -0x10;
          }
          else {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) | uVar11 << ((byte)iVar5 & 0x1f);
            *(int *)(param_1 + 0x16bc) = iVar5 + iVar7;
          }
        }
        uVar12 = (uint)(uVar10 - 1);
        if (uVar12 < 0x100) {
          bVar3 = (byte)((&DAT_11a07847)[uVar10]);
        }
        else {
          bVar3 = (byte)((&DAT_11a07948)[uVar12 >> 7]);
        }
        iVar5 = (int)(*(int *)(param_1 + 0x16bc));
        uVar6 = (uint)((uint)bVar3);
        uVar10 = (uint)((uint)*(ushort *)(param_3 + 2 + uVar6 * 4));
        uVar11 = (ushort)(*(ushort *)(param_3 + uVar6 * 4));
        uVar8 = (ushort)(uVar11 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
        if ((int)(0x10 - uVar10) < iVar5) {
          *(ushort *)(param_1 + 0x16b8) = uVar8;
          *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar8;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
               *(undefined1 *)(param_1 + 0x16b9);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          uVar8 = (ushort)(uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f));
          iVar5 = (int)((uVar10 - 0x10) + *(int *)(param_1 + 0x16bc));
        }
        else {
          iVar5 = (int)(uVar10 + iVar5);
        }
        *(int *)(param_1 + 0x16bc) = iVar5;
        *(ushort *)(param_1 + 0x16b8) = uVar8;
        iVar5 = (int)(*(int *)(&DAT_11a07ad0 + uVar6 * 4));
        if (iVar5 != 0) {
          uVar11 = (ushort)((short)uVar12 - (short)*(undefined4 *)(&DAT_11a08108 + uVar6 * 4));
          iVar7 = (int)(*(int *)(param_1 + 0x16bc));
          if (0x10 - iVar5 < iVar7) {
            uVar8 = (ushort)(uVar11 << ((byte)iVar7 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
            *(ushort *)(param_1 + 0x16b8) = uVar8;
            *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar8;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                 *(undefined1 *)(param_1 + 0x16b9);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(ushort *)(param_1 + 0x16b8) = uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f);
            *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + iVar5 + -0x10;
          }
          else {
            *(ushort *)(param_1 + 0x16b8) =
                 *(ushort *)(param_1 + 0x16b8) | uVar11 << ((byte)iVar7 & 0x1f);
            *(int *)(param_1 + 0x16bc) = iVar7 + iVar5;
          }
        }
      }
    } while (uVar9 < *(uint *)(param_1 + 0x16a0));
  }
  uVar11 = (ushort)(*(ushort *)(param_2 + 0x402));
  uVar8 = (ushort)(*(ushort *)(param_2 + 0x400));
  iVar5 = (int)(*(int *)(param_1 + 0x16bc));
  uVar4 = (ushort)(uVar8 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
  if ((int)(0x10 - (uint)uVar11) < iVar5) {
    *(ushort *)(param_1 + 0x16b8) = uVar4;
    *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b9);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar4 = (ushort)(uVar8 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f));
    iVar5 = (int)(*(int *)(param_1 + 0x16bc) + -0x10);
  }
  *(uint *)(param_1 + 0x16bc) = iVar5 + (uint)uVar11;
  *(ushort *)(param_1 + 0x16b8) = uVar4;
  return;
}


// Reference entry 113cac80; body size 543 bytes.
#line 1 "ENTRY_113cac80"

void FUN_113cac80(int param_1,int *param_2)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int local_18;
  
  iVar4 = (int)(*param_2);
  iVar5 = (int)(param_2[1]);
  piVar10 = (int *)((int *)param_2[2]);
  iVar14 = (int)(*piVar10);
  uVar15 = (uint)(piVar10[4]);
  iVar13 = (int)(piVar10[1]);
  iVar6 = (int)(piVar10[2]);
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  *(undefined4 *)(param_1 + 0xb50) = 0;
  *(undefined4 *)(param_1 + 0xb54) = 0;
  *(undefined4 *)(param_1 + 0xb58) = 0;
  *(undefined2 *)(iVar4 + 2 + *(int *)(param_1 + 0xb5c + *(int *)(param_1 + 0x1454) * 4) * 4) = 0;
  local_18 = (int)(*(int *)(param_1 + 0x1454) + 1);
  if (local_18 < 0x23d) {
    piVar10 = (int *)((int *)(param_1 + 0xb5c + local_18 * 4));
    local_18 = (int)(0x23d - local_18);
    iVar12 = (int)(0);
    do {
      iVar7 = (int)(*piVar10);
      puVar8 = (ushort *)((ushort *)(iVar7 * 4 + iVar4));
      uVar11 = (uint)(*(ushort *)(iVar4 + 2 + (uint)puVar8[1] * 4) + 1);
      iVar16 = (int)(iVar12 + 1);
      uVar9 = (uint)(uVar15);
      if ((int)uVar11 <= (int)uVar15) {
        iVar16 = (int)(iVar12);
        uVar9 = (uint)(uVar11);
      }
      puVar8[1] = (ushort)((ushort)uVar9);
      if (iVar7 <= iVar5) {
        psVar1 = (short *)((short *)(param_1 + 0xb3c + uVar9 * 2));
        *psVar1 = (short)(*psVar1 + 1);
        iVar12 = (int)(0);
        if (iVar6 <= iVar7) {
          iVar12 = (int)(*(int *)(iVar13 + (iVar7 - iVar6) * 4));
        }
        uVar2 = (ushort)(*puVar8);
        *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + (uVar9 + iVar12) * (uint)uVar2;
        if (iVar14 != 0) {
          *(int *)(param_1 + 0x16ac) =
               *(int *)(param_1 + 0x16ac) +
               ((uint)*(ushort *)(iVar7 * 4 + 2 + iVar14) + iVar12) * (uint)uVar2;
        }
      }
      piVar10 = (int *)(piVar10 + 1);
      local_18 = (int)(local_18 + -1);
      iVar12 = (int)(iVar16);
    } while (local_18 != 0);
    if (iVar16 != 0) {
      iVar14 = (int)(uVar15 - 1);
      puVar8 = (ushort *)((ushort *)(param_1 + (uVar15 + 0x59e) * 2));
      do {
        psVar1 = (short *)((short *)(param_1 + 0xb3c + iVar14 * 2));
        sVar3 = (short)(*(short *)(param_1 + 0xb3c + iVar14 * 2));
        iVar13 = (int)(iVar14);
        while (sVar3 == 0) {
          psVar1 = (short *)(psVar1 + -1);
          iVar13 = (int)(iVar13 + -1);
          sVar3 = (short)(*psVar1);
        }
        psVar1 = (short *)((short *)(param_1 + 0xb3c + iVar13 * 2));
        *psVar1 = (short)(*psVar1 + -1);
        iVar16 = (int)(iVar16 + -2);
        psVar1 = (short *)((short *)(param_1 + 0xb3e + iVar13 * 2));
        *psVar1 = (short)(*psVar1 + 2);
        *puVar8 = (ushort)(*puVar8 - 1);
      } while (0 < iVar16);
      iVar14 = (int)(0x23d);
      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
        uVar9 = (uint)((uint)*puVar8);
        if (uVar9 != 0) {
          iVar13 = (int)(param_1 + 0xb5c + iVar14 * 4);
          do {
            iVar6 = (int)(*(int *)(iVar13 + -4));
            iVar13 = (int)(iVar13 + -4);
            iVar14 = (int)(iVar14 + -1);
            if (iVar6 <= iVar5) {
              uVar11 = (uint)((uint)*(ushort *)(iVar4 + 2 + iVar6 * 4));
              if (uVar11 != uVar15) {
                *(int *)(param_1 + 0x16a8) =
                     *(int *)(param_1 + 0x16a8) +
                     (uVar15 - uVar11) * (uint)*(ushort *)(iVar4 + iVar6 * 4);
                *(short *)(iVar4 + 2 + iVar6 * 4) = (short)uVar15;
              }
              uVar9 = (uint)(uVar9 - 1);
            }
          } while (uVar9 != 0);
        }
        puVar8 = (ushort *)(puVar8 + -1);
      }
    }
  }
  return;
}


// Reference entry 113caf30; body size 158 bytes.
#line 1 "ENTRY_113caf30"

void FUN_113caf30(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ushort auStack_24 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_24);
  uVar6 = (ushort)(0);
  iVar4 = (int)(1);
  do {
    uVar6 = (ushort)((uVar6 + *(short *)(param_3 + iVar4 * 2 + -2)) * 2);
    auStack_24[iVar4] = (ushort)(uVar6);
    iVar4 = (int)(iVar4 + 1);
  } while (iVar4 < 0x10);
  iVar4 = (int)(0);
  if (-1 < param_2) {
    do {
      uVar7 = (uint)((uint)*(ushort *)(param_1 + 2 + iVar4 * 4));
      if (uVar7 != 0) {
        uVar2 = (uint)((uint)auStack_24[uVar7]);
        auStack_24[uVar7] = (ushort)(auStack_24[uVar7] + 1);
        uVar1 = (uint)(0);
        do {
          uVar3 = (uint)(uVar1);
          uVar7 = (uint)(uVar7 - 1);
          uVar5 = (uint)(uVar2 & 1);
          uVar2 = (uint)(uVar2 >> 1);
          uVar1 = (uint)((uVar3 | uVar5) * 2);
        } while (0 < (int)uVar7);
        *(ushort *)(param_1 + iVar4 * 4) = (ushort)uVar3 | (ushort)uVar5;
      }
      iVar4 = (int)(iVar4 + 1);
    } while (iVar4 <= param_2);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113cb000; body size 132 bytes.
#line 1 "ENTRY_113cb000"

void FUN_113cb000(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = (int)(0x11e);
  puVar1 = (undefined2 *)((undefined2 *)(param_1 + 0x94));
  do {
    *puVar1 = (undefined2)(0);
    iVar2 = (int)(iVar2 + -1);
    puVar1 = (undefined2 *)(puVar1 + 2);
  } while (iVar2 != 0);
  iVar2 = (int)(0x1e);
  puVar1 = (undefined2 *)((undefined2 *)(param_1 + 0x988));
  do {
    *puVar1 = (undefined2)(0);
    iVar2 = (int)(iVar2 + -1);
    puVar1 = (undefined2 *)(puVar1 + 2);
  } while (iVar2 != 0);
  iVar2 = (int)(0x13);
  puVar1 = (undefined2 *)((undefined2 *)(param_1 + 0xa7c));
  do {
    *puVar1 = (undefined2)(0);
    iVar2 = (int)(iVar2 + -1);
    puVar1 = (undefined2 *)(puVar1 + 2);
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x16ac) = 0;
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  *(undefined2 *)(param_1 + 0x494) = 1;
  return;
}


// Reference entry 113cb0b0; body size 199 bytes.
#line 1 "ENTRY_113cb0b0"

void FUN_113cb0b0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = (int)(*(int *)(param_1 + 0x1450));
  iVar3 = (int)(*(int *)(param_1 + 0xb5c + param_3 * 4));
  iVar6 = (int)(param_3 * 2);
  if (iVar5 < iVar6) {
    *(int *)(param_1 + 0xb5c + param_3 * 4) = iVar3;
    return;
  }
  do {
    iVar7 = (int)(iVar6);
    if (iVar6 < iVar5) {
      iVar5 = (int)(*(int *)(param_1 + 0xb60 + iVar6 * 4));
      iVar4 = (int)(*(int *)(param_1 + 0xb5c + iVar6 * 4));
      uVar1 = (ushort)(*(ushort *)(param_2 + iVar5 * 4));
      uVar2 = (ushort)(*(ushort *)(param_2 + iVar4 * 4));
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar5 + 0x1458 + param_1) <= *(byte *)(param_1 + 0x1458 + iVar4))))) {
        iVar7 = (int)(iVar6 + 1);
      }
    }
    iVar5 = (int)(*(int *)(param_1 + 0xb5c + iVar7 * 4));
    uVar1 = (ushort)(*(ushort *)(param_2 + iVar3 * 4));
    uVar2 = (ushort)(*(ushort *)(param_2 + iVar5 * 4));
    if ((uVar1 < uVar2) ||
       ((uVar1 == uVar2 &&
        (*(byte *)(param_1 + 0x1458 + iVar3) <= *(byte *)(iVar5 + 0x1458 + param_1))))) break;
    *(int *)(param_1 + 0xb5c + param_3 * 4) = iVar5;
    iVar5 = (int)(*(int *)(param_1 + 0x1450));
    iVar6 = (int)(iVar7 * 2);
    param_3 = (int)(iVar7);
  } while (iVar6 <= iVar5);
  *(int *)(param_1 + 0xb5c + param_3 * 4) = iVar3;
  return;
}


// Reference entry 113cb1b0; body size 242 bytes.
#line 1 "ENTRY_113cb1b0"

void FUN_113cb1b0(int param_1,ushort *param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_4;
  
  iVar3 = (int)(0);
  local_4 = (uint)(0xffffffff);
  uVar2 = (ushort)(*(ushort *)((int)param_2 + 2));
  *(undefined2 *)((int)param_2 + 6 + param_3 * 4) = 0xffff;
  if (-1 < param_3) {
    iVar7 = (int)(0x8a);
    if (uVar2 != 0) {
      iVar7 = (int)(7);
    }
    param_2 = (ushort *)((ushort *)((int)param_2 + 6));
    iVar4 = (int)((uVar2 != 0) + 3);
    param_3 = (int)(param_3 + 1);
    uVar5 = (uint)((uint)uVar2);
    do {
      iVar3 = (int)(iVar3 + 1);
      uVar6 = (uint)((uint)*param_2);
      if ((iVar7 <= iVar3) || (uVar5 != uVar6)) {
        if (iVar3 < iVar4) {
          psVar1 = (short *)((short *)(param_1 + 0xa7c + uVar5 * 4));
          *psVar1 = (short)(*psVar1 + (short)iVar3);
        }
        else if (uVar5 == 0) {
          if (iVar3 < 0xb) {
            *(short *)(param_1 + 0xac0) = *(short *)(param_1 + 0xac0) + 1;
          }
          else {
            *(short *)(param_1 + 0xac4) = *(short *)(param_1 + 0xac4) + 1;
          }
        }
        else {
          if (uVar5 != local_4) {
            psVar1 = (short *)((short *)(param_1 + 0xa7c + uVar5 * 4));
            *psVar1 = (short)(*psVar1 + 1);
          }
          *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
        }
        iVar3 = (int)(0);
        local_4 = (uint)(uVar5);
        if (uVar6 == 0) {
          iVar7 = (int)(0x8a);
          iVar4 = (int)(3);
        }
        else if (uVar5 == uVar6) {
          iVar7 = (int)(6);
          iVar4 = (int)(3);
        }
        else {
          iVar7 = (int)(7);
          iVar4 = (int)(4);
        }
      }
      param_2 = (ushort *)(param_2 + 2);
      param_3 = (int)(param_3 + -1);
      uVar5 = (uint)(uVar6);
    } while (param_3 != 0);
  }
  return;
}


// Reference entry 113cb2e0; body size 604 bytes.
#line 1 "ENTRY_113cb2e0"

void FUN_113cb2e0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  
  iVar6 = (int)(*(int *)(param_1 + 0x16bc));
  if (iVar6 < 0xc) {
    iVar5 = (int)(iVar6 + 5);
    *(int *)(param_1 + 0x16bc) = iVar5;
    uVar7 = (ushort)((short)param_2 + -0x101 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
  }
  else {
    uVar7 = (ushort)((short)param_2 - 0x101);
    uVar4 = (ushort)(uVar7 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
    *(ushort *)(param_1 + 0x16b8) = uVar4;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b9);
    uVar3 = (undefined2)(*(undefined2 *)(param_1 + 0x16bc));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xb;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar5 = (int)(*(int *)(param_1 + 0x16bc));
    uVar7 = (ushort)(uVar7 >> (0x10U - (char)uVar3 & 0x1f));
  }
  *(ushort *)(param_1 + 0x16b8) = uVar7;
  if (iVar5 < 0xc) {
    iVar6 = (int)(iVar5 + 5);
    *(int *)(param_1 + 0x16bc) = iVar6;
    uVar4 = (ushort)((short)param_3 + -1 << ((byte)iVar5 & 0x1f) | uVar7);
  }
  else {
    uVar4 = (ushort)((short)param_3 - 1);
    uVar7 = (ushort)(uVar4 << ((byte)iVar5 & 0x1f) | uVar7);
    *(ushort *)(param_1 + 0x16b8) = uVar7;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar7;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b9);
    uVar3 = (undefined2)(*(undefined2 *)(param_1 + 0x16bc));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xb;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar6 = (int)(*(int *)(param_1 + 0x16bc));
    uVar4 = (ushort)(uVar4 >> (0x10U - (char)uVar3 & 0x1f));
  }
  *(ushort *)(param_1 + 0x16b8) = uVar4;
  if (iVar6 < 0xd) {
    iVar5 = (int)(iVar6 + 4);
    uVar7 = (ushort)((short)param_4 + -4 << ((byte)iVar6 & 0x1f) | uVar4);
    *(int *)(param_1 + 0x16bc) = iVar5;
  }
  else {
    uVar7 = (ushort)((short)param_4 - 4);
    uVar4 = (ushort)(uVar7 << ((byte)iVar6 & 0x1f) | uVar4);
    *(ushort *)(param_1 + 0x16b8) = uVar4;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
         *(undefined1 *)(param_1 + 0x16b9);
    uVar3 = (undefined2)(*(undefined2 *)(param_1 + 0x16bc));
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xc;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar5 = (int)(*(int *)(param_1 + 0x16bc));
    uVar7 = (ushort)(uVar7 >> (0x10U - (char)uVar3 & 0x1f));
  }
  iVar6 = (int)(0);
  *(ushort *)(param_1 + 0x16b8) = uVar7;
  if (0 < param_4) {
    do {
      iVar1 = (int)(param_1 + (uint)(byte)(&DAT_11a07abc)[iVar6] * 4);
      if (iVar5 < 0xe) {
        *(ushort *)(param_1 + 0x16b8) =
             *(ushort *)(param_1 + 0x16b8) | *(short *)(iVar1 + 0xa7e) << ((byte)iVar5 & 0x1f);
        iVar5 = (int)(iVar5 + 3);
        *(int *)(param_1 + 0x16bc) = iVar5;
      }
      else {
        uVar7 = (ushort)(*(ushort *)(iVar1 + 0xa7e));
        *(ushort *)(param_1 + 0x16b8) =
             *(ushort *)(param_1 + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
        *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
             (char)*(undefined2 *)(param_1 + 0x16b8);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
             *(undefined1 *)(param_1 + 0x16b9);
        cVar2 = (char)(*(char *)(param_1 + 0x16bc));
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
        iVar5 = (int)(*(int *)(param_1 + 0x16bc));
        *(ushort *)(param_1 + 0x16b8) = uVar7 >> (0x10U - cVar2 & 0x1f);
      }
      iVar6 = (int)(iVar6 + 1);
    } while (iVar6 < param_4);
  }
  FUN_113cb5e0(param_1,param_1 + 0x94,param_2 + -1);
  FUN_113cb5e0(param_1,param_1 + 0x988,param_3 + -1);
  return;
}


// Reference entry 113cb5e0; body size 1332 bytes.
#line 1 "ENTRY_113cb5e0"

void FUN_113cb5e0(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  ushort *puVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  int local_c;
  
  uVar8 = (uint)((uint)*(ushort *)(param_2 + 2));
  uVar10 = (uint)(0xffffffff);
  if (-1 < param_3) {
    iVar7 = (int)(0x8a);
    if (uVar8 != 0) {
      iVar7 = (int)(7);
    }
    iVar4 = (int)((uVar8 != 0) + 3);
    puVar3 = (ushort *)((ushort *)(param_2 + 6));
    local_c = (int)(param_3 + 1);
    iVar12 = (int)(0);
    do {
      uVar9 = (uint)((uint)*puVar3);
      iVar13 = (int)(iVar12 + 1);
      if ((iVar7 <= iVar13) || (uVar8 != uVar9)) {
        if (iVar13 < iVar4) {
          do {
            iVar7 = (int)(*(int *)(param_1 + 0x16bc));
            uVar10 = (uint)((uint)*(ushort *)(param_1 + 0xa7e + uVar8 * 4));
            uVar11 = (ushort)(*(ushort *)(param_1 + (uVar8 + 0x29f) * 4));
            uVar5 = (ushort)(uVar11 << ((byte)iVar7 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
            if ((int)(0x10 - uVar10) < iVar7) {
              *(ushort *)(param_1 + 0x16b8) = uVar5;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar5;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                   *(undefined1 *)(param_1 + 0x16b9);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              uVar5 = (ushort)(uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f));
              iVar7 = (int)(*(int *)(param_1 + 0x16bc) + -0x10);
            }
            *(uint *)(param_1 + 0x16bc) = iVar7 + uVar10;
            *(ushort *)(param_1 + 0x16b8) = uVar5;
            iVar13 = (int)(iVar13 + -1);
          } while (iVar13 != 0);
        }
        else if (uVar8 == 0) {
          iVar7 = (int)(*(int *)(param_1 + 0x16bc));
          if (iVar13 < 0xb) {
            uVar11 = (ushort)(*(ushort *)(param_1 + 0xac0));
            uVar5 = (ushort)(*(ushort *)(param_1 + 0xac2));
            uVar6 = (ushort)(uVar11 << ((byte)iVar7 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
            if ((int)(0x10 - (uint)uVar5) < iVar7) {
              *(ushort *)(param_1 + 0x16b8) = uVar6;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar6;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                   *(undefined1 *)(param_1 + 0x16b9);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              uVar6 = (ushort)(uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f));
              iVar7 = (int)(*(int *)(param_1 + 0x16bc) + -0x10);
            }
            iVar7 = (int)(iVar7 + (uint)uVar5);
            *(int *)(param_1 + 0x16bc) = iVar7;
            *(ushort *)(param_1 + 0x16b8) = uVar6;
            if (iVar7 < 0xe) {
              *(int *)(param_1 + 0x16bc) = iVar7 + 3;
              *(ushort *)(param_1 + 0x16b8) = (short)iVar12 + -2 << ((byte)iVar7 & 0x1f) | uVar6;
            }
            else {
              uVar11 = (ushort)((ushort)(iVar12 + -2));
              uVar6 = (ushort)(uVar11 << ((byte)iVar7 & 0x1f) | uVar6);
              *(ushort *)(param_1 + 0x16b8) = uVar6;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar6;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                   *(undefined1 *)(param_1 + 0x16b9);
              uVar2 = (undefined2)(*(undefined2 *)(param_1 + 0x16bc));
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xd;
              *(ushort *)(param_1 + 0x16b8) = uVar11 >> (0x10U - (char)uVar2 & 0x1f);
            }
          }
          else {
            uVar11 = (ushort)(*(ushort *)(param_1 + 0xac4));
            uVar5 = (ushort)(*(ushort *)(param_1 + 0xac6));
            uVar6 = (ushort)(uVar11 << ((byte)iVar7 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
            if ((int)(0x10 - (uint)uVar5) < iVar7) {
              *(ushort *)(param_1 + 0x16b8) = uVar6;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar6;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                   *(undefined1 *)(param_1 + 0x16b9);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              uVar6 = (ushort)(uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f));
              iVar7 = (int)(*(int *)(param_1 + 0x16bc) + -0x10);
            }
            iVar7 = (int)(iVar7 + (uint)uVar5);
            *(int *)(param_1 + 0x16bc) = iVar7;
            *(ushort *)(param_1 + 0x16b8) = uVar6;
            if (iVar7 < 10) {
              *(ushort *)(param_1 + 0x16b8) = (short)iVar12 + -10 << ((byte)iVar7 & 0x1f) | uVar6;
              *(int *)(param_1 + 0x16bc) = iVar7 + 7;
            }
            else {
              uVar11 = (ushort)((ushort)(iVar12 + -10));
              uVar6 = (ushort)(uVar11 << ((byte)iVar7 & 0x1f) | uVar6);
              *(ushort *)(param_1 + 0x16b8) = uVar6;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar6;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                   *(undefined1 *)(param_1 + 0x16b9);
              cVar1 = (char)(*(char *)(param_1 + 0x16bc));
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -9;
              *(ushort *)(param_1 + 0x16b8) = uVar11 >> (0x10U - cVar1 & 0x1f);
            }
          }
        }
        else {
          if (uVar8 != uVar10) {
            uVar10 = (uint)((uint)*(ushort *)(param_1 + 0xa7e + uVar8 * 4));
            uVar11 = (ushort)(*(ushort *)(param_1 + 0xa7c + uVar8 * 4));
            iVar7 = (int)(*(int *)(param_1 + 0x16bc));
            uVar5 = (ushort)(uVar11 << ((byte)iVar7 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
            if ((int)(0x10 - uVar10) < iVar7) {
              *(ushort *)(param_1 + 0x16b8) = uVar5;
              *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar5;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                   *(undefined1 *)(param_1 + 0x16b9);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              uVar5 = (ushort)(uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f));
              iVar7 = (int)(*(int *)(param_1 + 0x16bc) + -0x10);
            }
            *(uint *)(param_1 + 0x16bc) = iVar7 + uVar10;
            *(ushort *)(param_1 + 0x16b8) = uVar5;
            iVar13 = (int)(iVar12);
          }
          uVar11 = (ushort)(*(ushort *)(param_1 + 0xabc));
          iVar7 = (int)(*(int *)(param_1 + 0x16bc));
          uVar5 = (ushort)(*(ushort *)(param_1 + 0xabe));
          uVar6 = (ushort)(uVar11 << ((byte)iVar7 & 0x1f) | *(ushort *)(param_1 + 0x16b8));
          if ((int)(0x10 - (uint)uVar5) < iVar7) {
            *(ushort *)(param_1 + 0x16b8) = uVar6;
            *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar6;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                 *(undefined1 *)(param_1 + 0x16b9);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            uVar6 = (ushort)(uVar11 >> (0x10U - *(char *)(param_1 + 0x16bc) & 0x1f));
            iVar7 = (int)(*(int *)(param_1 + 0x16bc) + -0x10);
          }
          iVar7 = (int)(iVar7 + (uint)uVar5);
          *(int *)(param_1 + 0x16bc) = iVar7;
          *(ushort *)(param_1 + 0x16b8) = uVar6;
          if (iVar7 < 0xf) {
            *(int *)(param_1 + 0x16bc) = iVar7 + 2;
            *(ushort *)(param_1 + 0x16b8) = (short)iVar13 + -3 << ((byte)iVar7 & 0x1f) | uVar6;
          }
          else {
            uVar11 = (ushort)((ushort)(iVar13 + -3));
            uVar6 = (ushort)(uVar11 << ((byte)iVar7 & 0x1f) | uVar6);
            *(ushort *)(param_1 + 0x16b8) = uVar6;
            *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar6;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
                 *(undefined1 *)(param_1 + 0x16b9);
            uVar2 = (undefined2)(*(undefined2 *)(param_1 + 0x16bc));
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -0xe;
            *(ushort *)(param_1 + 0x16b8) = uVar11 >> (0x10U - (char)uVar2 & 0x1f);
          }
        }
        iVar13 = (int)(0);
        uVar10 = (uint)(uVar8);
        if (uVar9 == 0) {
          iVar7 = (int)(0x8a);
          iVar4 = (int)(3);
        }
        else if (uVar8 == uVar9) {
          iVar7 = (int)(6);
          iVar4 = (int)(3);
        }
        else {
          iVar7 = (int)(7);
          iVar4 = (int)(4);
        }
      }
      puVar3 = (ushort *)(puVar3 + 2);
      local_c = (int)(local_c + -1);
      uVar8 = (uint)(uVar9);
      iVar12 = (int)(iVar13);
    } while (local_c != 0);
  }
  return;
}


// Reference entry 113cca00; body size 154 bytes.
#line 1 "ENTRY_113cca00"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_113cca00(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if (*param_2 == 0) {
    dVar3 = (double)(*(double *)(param_2 + 2));
  }
  else {
    dVar3 = (double)(DAT_118f97f8);
    libm_sse2_log_precise();
    if (param_2[1] < param_3) {
      dVar3 = (double)(dVar3 * _DAT_11bf1308);
    }
    dVar3 = (double)(dVar3 + *(double *)(param_2 + 2));
  }
  *(double *)(param_2 + 4) = dVar3;
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    do {
      if (param_2[1] <= *(int *)(iVar2 + 4)) {
        if (*(int *)(iVar2 + 4) == param_2[1]) {
          if (*(double *)(iVar2 + 0x10) <= dVar3) {
            free(param_2);
            return;
          }
          param_2[7] = (int)(*(int *)(iVar2 + 0x1c));
          free((void *)*param_1);
          *param_1 = (int)((int)param_2);
          return;
        }
        break;
      }
      iVar1 = (int)(*(int *)(iVar2 + 0x1c));
      param_1 = (int *)((int *)(iVar2 + 0x1c));
      iVar2 = (int)(iVar1);
    } while (iVar1 != 0);
  }
  param_2[7] = (int)(iVar2);
  *param_1 = (int)((int)param_2);
  return;
}


// Reference entry 113ccae0; body size 183 bytes.
#line 1 "ENTRY_113ccae0"

byte FUN_113ccae0(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint _C;
  
  bVar5 = (byte)(0);
  bVar4 = (byte)(0);
  for (; 0 < param_2; param_2 = param_2 + -1) {
    bVar2 = (byte)(*param_1);
    param_1 = (byte *)(param_1 + 1);
    _C = (uint)((uint)bVar2);
    if (bVar2 == 0) break;
    iVar3 = (int)(islower(_C));
    if (iVar3 == 0) {
      iVar3 = (int)(isupper(_C));
      if (iVar3 == 0) {
        iVar3 = (int)(isdigit(_C));
        if (iVar3 == 0) {
          bVar1 = (byte)((-(0x7f < bVar2) & 8U) + 8);
          bVar2 = (byte)(0);
        }
        else {
          bVar1 = (byte)(4);
          bVar2 = (byte)(0);
        }
      }
      else {
        bVar1 = (byte)(2);
        bVar2 = (byte)(0);
      }
    }
    else {
      bVar1 = (byte)(0);
      bVar2 = (byte)(1);
    }
    bVar5 = (byte)(bVar5 | bVar1);
    bVar4 = (byte)(bVar4 | bVar2);
  }
  bVar2 = (byte)((-bVar4 & 0x1a) + 0x1a);
  if ((bVar5 & 2) == 0) {
    bVar2 = (byte)(-bVar4 & 0x1a);
  }
  bVar4 = (byte)(bVar2 + 10);
  if ((bVar5 & 4) == 0) {
    bVar4 = (byte)(bVar2);
  }
  bVar2 = (byte)(bVar4 + 0x21);
  if ((bVar5 & 8) == 0) {
    bVar2 = (byte)(bVar4);
  }
  return (byte)(bVar2);
}


// Reference entry 113ccbd0; body size 80 bytes.
#line 1 "ENTRY_113ccbd0"

byte * FUN_113ccbd0(byte param_1,byte *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    uVar4 = (uint)((uint)param_1);
    do {
      pbVar1 = (byte *)(param_2 + (param_3 >> 1) * param_4);
      uVar2 = (uint)((uint)*pbVar1);
      if (uVar4 == uVar2) {
        return (byte *)(pbVar1);
      }
      uVar3 = (uint)(param_3 - 1);
      if (uVar4 == uVar2 || (int)(uVar4 - uVar2) < 0) {
        uVar3 = (uint)(param_3);
      }
      pbVar1 = (byte *)(pbVar1 + param_4);
      if (uVar4 == uVar2 || (int)(uVar4 - uVar2) < 0) {
        pbVar1 = (byte *)(param_2);
      }
      param_3 = (uint)(uVar3 >> 1);
      param_2 = (byte *)(pbVar1);
    } while (param_3 != 0);
  }
  return (byte *)((byte *)0x0);
}


// Reference entry 113ccf90; body size 477 bytes.
#line 1 "ENTRY_113ccf90"

void FUN_113ccf90(int param_1,int *param_2,byte *param_3)

{
  float10 fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double local_18;
  double local_10;
  double local_8;
  
  iVar2 = (int)(param_2[1]);
  local_18 = (double)(0.0);
  if (iVar2 != 0) {
    if (iVar2 == *(int *)(param_1 + 4)) {
      local_18 = (double)(DAT_118f97f8);
      libm_sse2_log_precise();
      local_18 = (double)(local_18 + 0.0);
    }
    else if ((iVar2 == 1) &&
            ((iVar2 = isupper((uint)*param_3), iVar2 != 0 ||
             (iVar2 = isupper((uint)param_3[*(int *)(param_1 + 4) + -1]), iVar2 != 0)))) {
      local_18 = (double)(DAT_118f97f8);
      libm_sse2_log_precise();
      local_18 = (double)(local_18 + 0.0);
    }
    else {
      uVar12 = (undefined4)(0);
      uVar11 = (undefined4)(0);
      iVar2 = (int)(param_2[1]);
      iVar6 = (int)(param_2[2]);
      iVar7 = (int)(iVar6);
      if (iVar2 <= iVar6) {
        iVar7 = (int)(iVar2);
      }
      if (-1 < iVar7) {
        local_10 = (double)(0.0);
        do {
          fVar9 = (float10)((float10)FUN_113cf510(iVar6 + iVar2,iVar7));
          fVar1 = (float10)((float10)local_10);
          iVar7 = (int)(iVar7 + -1);
          local_10 = (double)((double)(fVar9 + fVar1));
          local_18 = (double)((double)(fVar9 + fVar1));
        } while (-1 < iVar7);
        if ((double)((unsigned long long)(uVar12) << 32 | (unsigned long long)(uVar11)) <= local_18 &&
            local_18 != (double)((unsigned long long)(uVar12) << 32 | (unsigned long long)(uVar11))) {
          libm_sse2_log_precise();
        }
      }
    }
  }
  uVar12 = (undefined4)(0);
  uVar11 = (undefined4)(0);
  iVar2 = (int)(param_2[3]);
  if (iVar2 != 0) {
    local_10 = (double)(0.0);
    pbVar5 = (byte *)((byte *)((int)param_2 + 0x29));
    local_8 = (double)(0.0);
    iVar6 = (int)(0xd);
    do {
      uVar3 = (uint)((uint)pbVar5[-0xd]);
      if (uVar3 != 0) {
        uVar4 = (uint)(*(int *)(param_1 + 4) - iVar2);
        uVar8 = (uint)((uint)*pbVar5);
        if ((-1 < (int)uVar4) && ((int)uVar4 < (int)uVar8)) {
          uVar8 = (uint)(uVar4);
        }
        uVar4 = (uint)(uVar8);
        if ((int)uVar3 <= (int)uVar8) {
          uVar4 = (uint)(uVar3);
        }
        for (; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
          fVar9 = (float10)((float10)FUN_113cf510(uVar8 + uVar3,uVar4));
          fVar1 = (float10)((float10)local_8);
          local_8 = (double)((double)(fVar9 + fVar1));
          local_10 = (double)((double)(fVar9 + fVar1));
        }
      }
      pbVar5 = (byte *)(pbVar5 + -1);
      iVar6 = (int)(iVar6 + -1);
    } while (iVar6 != 0);
    if ((double)((unsigned long long)(uVar12) << 32 | (unsigned long long)(uVar11)) <= local_10 && local_10 != (double)((unsigned long long)(uVar12) << 32 | (unsigned long long)(uVar11)))
    {
      libm_sse2_log_precise();
    }
    dVar10 = (double)(DAT_118f97f8);
    libm_sse2_log_precise();
    if (dVar10 <= local_10) {
      dVar10 = (double)(local_10);
    }
    local_18 = (double)(dVar10 + local_18);
  }
  dVar10 = (double)((double)*param_2);
  libm_sse2_log_precise();
  *(double *)(param_1 + 8) = dVar10 + local_18;
  return;
}


// Reference entry 113cf510; body size 386 bytes.
#line 1 "ENTRY_113cf510"

float10 FUN_113cf510(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  if (param_1 < param_2) {
    return (float10)((float10)0);
  }
  if (param_2 != 0) {
    iVar13 = (int)(1);
    dVar20 = (double)(DAT_118a1c50);
    if (7 < param_2) {
      iVar15 = (int)(3);
      iVar14 = (int)(param_1 + -2);
      do {
        iVar1 = (int)(iVar14 + 1);
        dVar19 = (double)((double)param_1);
        param_1 = (int)(param_1 + -8);
        dVar16 = (double)((double)iVar13);
        iVar13 = (int)(iVar13 + 8);
        iVar2 = (int)(iVar15 + -1);
        iVar3 = (int)(iVar14 + -1);
        dVar17 = (double)((double)iVar14);
        dVar18 = (double)((double)iVar15);
        iVar4 = (int)(iVar15 + 1);
        iVar5 = (int)(iVar14 + -2);
        iVar6 = (int)(iVar15 + 2);
        iVar7 = (int)(iVar14 + -3);
        iVar8 = (int)(iVar15 + 3);
        iVar9 = (int)(iVar14 + -4);
        iVar10 = (int)(iVar15 + 4);
        iVar11 = (int)(iVar14 + -5);
        iVar14 = (int)(iVar14 + -8);
        iVar12 = (int)(iVar15 + 5);
        iVar15 = (int)(iVar15 + 8);
        dVar20 = (double)((((((((((((((((dVar19 * dVar20) / dVar16) * (double)iVar1) / (double)iVar2) *
                           dVar17) / dVar18) * (double)iVar3) / (double)iVar4) * (double)iVar5) /
                      (double)iVar6) * (double)iVar7) / (double)iVar8) * (double)iVar9) /
                  (double)iVar10) * (double)iVar11) / (double)iVar12);
      } while (iVar13 <= param_2 + -7);
    }
    for (; iVar13 <= param_2; iVar13 = iVar13 + 1) {
      dVar17 = (double)((double)param_1);
      dVar16 = (double)((double)iVar13);
      param_1 = (int)(param_1 + -1);
      dVar20 = (double)((dVar17 * dVar20) / dVar16);
    }
    return (float10)((float10)dVar20);
  }
  return (float10)((float10)1);
}


// Reference entry 113cf950; body size 85 bytes.
#line 1 "ENTRY_113cf950"

undefined4 FUN_113cf950(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((0x2c3 < *param_2) && (DAT_122f7134 != '\0')) {
    if (DAT_122f7138 != 0) {
      puVar2 = (undefined4 *)(&DAT_122f7138);
      for (iVar1 = (int)(0xb1); iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_1 = (undefined4)(*puVar2);
        puVar2 = (undefined4 *)(puVar2 + 1);
        param_1 = (undefined4 *)(param_1 + 1);
      }
      *param_2 = (uint)(0x2c4);
      return (undefined4)(1);
    }
  }
  *param_2 = (uint)(0);
  return (undefined4)(0);
}


// Reference entry 113cf9c0; body size 85 bytes.
#line 1 "ENTRY_113cf9c0"

undefined4 FUN_113cf9c0(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((0x103 < *param_2) && (DAT_122f7134 != '\0')) {
    if (DAT_122f7138 != 0) {
      puVar2 = (undefined4 *)(&DAT_122f7138);
      for (iVar1 = (int)(0x41); iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_1 = (undefined4)(*puVar2);
        puVar2 = (undefined4 *)(puVar2 + 1);
        param_1 = (undefined4 *)(param_1 + 1);
      }
      *param_2 = (uint)(0x104);
      return (undefined4)(1);
    }
  }
  *param_2 = (uint)(0);
  return (undefined4)(0);
}


// Reference entry 113cfa80; body size 94 bytes.
#line 1 "ENTRY_113cfa80"

char FUN_113cfa80(int param_1,code *param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  
  iVar1 = (int)(DAT_122f7130);
  cVar3 = (char)('\0');
  if (param_1 != 0) {
    LOCK();
    DAT_122f7130 = (int)(1);
    UNLOCK();
    if (iVar1 == 0) {
      if (DAT_122f7134 == '\0') {
        if (param_2 != (code *)0x0) {
          cVar2 = (char)((*param_2)(param_1,&DAT_122f7138));
          if (cVar2 != '\0') {
            cVar3 = (char)('\x01');
          }
        }
        LOCK();
        UNLOCK();
        DAT_122f7134 = (int)(cVar3);
      }
      else {
        cVar3 = (char)('\x01');
      }
      LOCK();
      DAT_122f7130 = (int)(0);
      UNLOCK();
    }
    return (char)(cVar3);
  }
  return (char)('\0');
}


// Reference entry 113cfb00; body size 90 bytes.
#line 1 "ENTRY_113cfb00"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_113cfb00(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (int)(DAT_122f7130);
  bVar2 = (bool)(false);
  LOCK();
  DAT_122f7130 = (int)(1);
  UNLOCK();
  if (iVar1 == 0) {
    bVar2 = (bool)(DAT_122f7134 != '\0');
    if (bVar2) {
      LOCK();
      DAT_122f7134 = (int)('\0');
      UNLOCK();
      thunk_FUN_113cfb70(&DAT_122f7138,0x2c4);
      thunk_FUN_113cfb70(&DAT_122f73fc,0x80);
      _DAT_122f747c = (int)(0);
    }
    LOCK();
    DAT_122f7130 = (int)(0);
    UNLOCK();
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ bool)(bVar2);
}


// Reference entry 113cfd10; body size 126 bytes.
#line 1 "ENTRY_113cfd10"

undefined4 FUN_113cfd10(char *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  char *local_4;
  
  *param_2 = (undefined4)(0);
  local_4 = (char *)((char *)0x0);
  piVar1 = (int *)(_errno());
  *piVar1 = (int)(0);
  lVar2 = (longlong)(strtoll(param_1,&local_4,10));
  piVar1 = (int *)(_errno());
  if ((((*piVar1 == 0) && (*param_1 != '\0')) && (*local_4 == '\0')) &&
     (((-1 < lVar2 && (lVar2 < 0x100000000)) && (lVar2 < 0x100000000)))) {
    *param_2 = (undefined4)((int)lVar2);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 113cffc0; body size 508 bytes.
#line 1 "ENTRY_113cffc0"

undefined4
FUN_113cffc0(int *param_1,int *param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  undefined4 local_18;
  uint local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  char *local_4;
  
  piVar6 = (int *)((int *)(*(int *)((int)param_1 + 0xf0) + (int)*(int **)((int)param_1 + 0xf4)));
  local_24 = (undefined4)(0x30);
  local_18 = (undefined4)(6);
  local_14 = (uint)(0);
  local_10 = (int *)((int *)0x0);
  local_c = (undefined4)(4);
  local_8 = (int)(0);
  local_4 = (char *)((char *)0x0);
  local_28 = (undefined4)(0);
  param_1 = (int *)(*(int **)((int)param_1 + 0xf4));
  iVar5 = (int)(thunk_FUN_1140c750(&param_1,piVar6,&local_28,0x30));
  if (iVar5 == 0) {
    while (param_1 < piVar6) {
      local_20 = (int)(0);
      local_1c = (int *)(param_1);
      local_14 = (uint)(thunk_FUN_1140c750(&local_1c,piVar6,&local_20,local_24));
      if (local_14 != 0) {
        return (undefined4)(1);
      }
      local_10 = (int *)(local_1c);
      iVar5 = (int)(thunk_FUN_1140c750(&local_10,(char *)(local_20 + (int)local_1c),&local_14,local_18));
      if (iVar5 != 0) {
        return (undefined4)(1);
      }
      piVar2 = (int *)(param_2);
      piVar3 = (int *)(local_10);
      uVar4 = (uint)(local_14);
      if (param_3 == local_14) {
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*piVar3 != *piVar2) goto LAB_113d00e6;
          piVar2 = (int *)(piVar2 + 1);
          piVar3 = (int *)(piVar3 + 1);
          uVar4 = (uint)(uVar1);
        }
        if (uVar1 != 0xfffffffc) {
LAB_113d00e6:
          if (((char)*piVar3 != (char)*piVar2) ||
             ((uVar1 != 0xfffffffd &&
              ((*(char *)((int)piVar3 + 1) != *(char *)((int)piVar2 + 1) ||
               ((uVar1 != 0xfffffffe &&
                ((*(char *)((int)piVar3 + 2) != *(char *)((int)piVar2 + 2) ||
                 ((uVar1 != 0xffffffff && (*(char *)((int)piVar3 + 3) != *(char *)((int)piVar2 + 3))
                  ))))))))))) goto LAB_113d0184;
        }
        local_4 = (char *)((char *)(local_14 + (int)local_10));
        local_8 = (int)(0);
        iVar5 = (int)(thunk_FUN_1140c750(&local_4,(char *)((int)local_1c + local_20),&local_8,local_c));
        if (iVar5 == 0) {
          param_5[1] = (undefined4)(0);
          *param_5 = (undefined4)(param_4);
          param_5[2] = (undefined4)(local_4);
          iVar5 = (int)(thunk_FUN_1140c750(param_5 + 2,local_4 + local_8,param_5 + 1,param_4));
          if (iVar5 == 0) {
            return (undefined4)(0);
          }
          if (iVar5 == -0x62) {
            return (undefined4)(2);
          }
        }
      }
LAB_113d0184:
      param_1 = (int *)((int *)((int)local_1c + local_20));
    }
  }
  return (undefined4)(1);
}


// Reference entry 113d0a10; body size 93 bytes.
#line 1 "ENTRY_113d0a10"

void * FUN_113d0a10(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)(malloc(0x1a0));
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((int)pvVar1 + 0x198) = 1;
    *(undefined4 *)((int)pvVar1 + 0x19c) = 0;
    thunk_FUN_11401f20(pvVar1);
    iVar2 = (int)(thunk_FUN_11401ff0(pvVar1,param_1,param_2));
    if ((iVar2 == 0) && (*(int *)((int)pvVar1 + 0x194) == 0)) {
      return (void *)(pvVar1);
    }
  }
  thunk_FUN_113cfe50(pvVar1);
  return (void *)((void *)0x0);
}


// Reference entry 113d13f0; body size 165 bytes.
#line 1 "ENTRY_113d13f0"

undefined4
FUN_113d13f0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined1 local_c [12];
  
  thunk_FUN_1140d5f0(local_c);
  iVar1 = (int)(thunk_FUN_1140d570(9));
  if (iVar1 != 0) {
    iVar1 = (int)(thunk_FUN_1140d620(local_c,iVar1,1));
    if ((iVar1 == 0) && (iVar1 = thunk_FUN_1140d2d0(local_c,param_1,param_2), iVar1 == 0)) {
      if (param_3 != 0) {
        param_5 = (int)(param_5 - (int)param_4);
        do {
          thunk_FUN_1140d440(local_c,*param_4,*(undefined4 *)(param_5 + (int)param_4));
          param_4 = (undefined4 *)(param_4 + 1);
          param_3 = (int)(param_3 + -1);
        } while (param_3 != 0);
      }
      thunk_FUN_1140d1a0(local_c,param_6);
      thunk_FUN_1140cd70(local_c);
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 113d14c0; body size 121 bytes.
#line 1 "ENTRY_113d14c0"

undefined4
FUN_113d14c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 *param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_113d1e70(local_c,param_1,param_2,param_3));
  if (iVar1 == 0) {
    return (undefined4)(0xffffffff);
  }
  if (param_4 != 0) {
    param_6 = (int)(param_6 - (int)param_5);
    do {
      thunk_FUN_1140d440(local_c,*param_5,*(undefined4 *)(param_6 + (int)param_5));
      param_5 = (undefined4 *)(param_5 + 1);
      param_4 = (int)(param_4 + -1);
    } while (param_4 != 0);
  }
  thunk_FUN_1140d1a0(local_c,param_7);
  thunk_FUN_1140cd70(local_c);
  return (undefined4)(0);
}


// Reference entry 113d1560; body size 65 bytes.
#line 1 "ENTRY_113d1560"

byte FUN_113d1560(int param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte local_1;
  
  local_1 = (byte)(0);
  if (param_3 != 0) {
    pbVar1 = (byte *)(param_2);
    local_1 = (byte)(0);
    do {
      local_1 = (byte)(*pbVar1 ^ pbVar1[param_1 - (int)param_2] | local_1);
      param_3 = (int)(param_3 + -1);
      pbVar1 = (byte *)(pbVar1 + 1);
    } while (param_3 != 0);
  }
  return (byte)(local_1);
}


// Reference entry 113d15c0; body size 409 bytes.
#line 1 "ENTRY_113d15c0"

void FUN_113d15c0(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char local_74;
  undefined1 local_73 [3];
  undefined1 local_70 [108];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_74);
  memset(local_73,0,0x6f);
  local_74 = (char)(param_1);
  if (param_1 == '\x02') {
    thunk_FUN_1140e890(local_70);
    thunk_FUN_1140e8b0(local_70);
  }
  else if (param_1 == '\x03') {
    thunk_FUN_114102f0(local_70);
    thunk_FUN_11410310(local_70);
  }
  else {
    if (param_1 != '\x01') {
      thunk_FUN_1148ac28();
      return;
    }
    thunk_FUN_11411800(local_70);
    thunk_FUN_11411820(local_70,0);
  }
  if (local_74 == '\x02') {
    thunk_FUN_1140e8f0(local_70,param_2,param_3);
  }
  else if (local_74 == '\x03') {
    thunk_FUN_11410360(local_70,param_2,param_3);
  }
  else {
    if (local_74 != '\x01') goto LAB_113d1740;
    thunk_FUN_11411940(local_70,param_2,param_3);
  }
  if (local_74 == '\x02') {
    thunk_FUN_1140e790(local_70,param_4);
    thunk_FUN_1140e870(local_70);
    thunk_FUN_1148ac28();
    return;
  }
  if (local_74 == '\x03') {
    thunk_FUN_114101e0(local_70,param_4);
    thunk_FUN_114102d0(local_70);
    thunk_FUN_1148ac28();
    return;
  }
  if (local_74 == '\x01') {
    thunk_FUN_114116c0(local_70,param_4);
    thunk_FUN_114117e0(local_70);
    thunk_FUN_1148ac28();
    return;
  }
LAB_113d1740:
                    
  abort();
}


// Reference entry 113d1a60; body size 97 bytes.
#line 1 "ENTRY_113d1a60"

void FUN_113d1a60(char *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(*param_1);
  if (cVar1 == '\x02') {
    thunk_FUN_1140e790(param_1 + 4,param_2);
    thunk_FUN_1140e870(param_1 + 4);
    return;
  }
  if (cVar1 == '\x03') {
    thunk_FUN_114101e0(param_1 + 4,param_2);
    thunk_FUN_114102d0(param_1 + 4);
    return;
  }
  if (cVar1 == '\x01') {
    thunk_FUN_114116c0(param_1 + 4,param_2);
    thunk_FUN_114117e0(param_1 + 4);
    return;
  }
                    
  abort();
}


// Reference entry 113d1ae0; body size 123 bytes.
#line 1 "ENTRY_113d1ae0"

undefined4 FUN_113d1ae0(char *param_1,char param_2)

{
  memset(param_1 + 1,0,0x6f);
  *param_1 = (char)(param_2);
  if (param_2 == '\x02') {
    thunk_FUN_1140e890(param_1 + 4);
    thunk_FUN_1140e8b0(param_1 + 4);
    return (undefined4)(1);
  }
  if (param_2 == '\x03') {
    thunk_FUN_114102f0(param_1 + 4);
    thunk_FUN_11410310(param_1 + 4);
    return (undefined4)(1);
  }
  if (param_2 == '\x01') {
    thunk_FUN_11411800(param_1 + 4);
    thunk_FUN_11411820(param_1 + 4,0);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 113d1b80; body size 411 bytes.
#line 1 "ENTRY_113d1b80"

void FUN_113d1b80(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint *param_5)

{
  char local_74;
  undefined1 local_73 [3];
  undefined1 local_70 [108];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_74);
  if (param_1 != '\x01') {
    thunk_FUN_1148ac28();
    return;
  }
  if (*param_5 < 0x20) {
    *param_5 = (uint)(0);
    thunk_FUN_1148ac28();
    return;
  }
  memset(local_73,0,0x6f);
  local_74 = (char)('\x01');
  thunk_FUN_11411800(local_70);
  thunk_FUN_11411820(local_70,0);
  if (local_74 == '\x02') {
    thunk_FUN_1140e8f0(local_70,param_2,param_3);
  }
  else if (local_74 == '\x03') {
    thunk_FUN_11410360(local_70,param_2,param_3);
  }
  else {
    if (local_74 != '\x01') goto LAB_113d1ce9;
    thunk_FUN_11411940(local_70,param_2,param_3);
  }
  if (local_74 == '\x02') {
    thunk_FUN_1140e790(local_70,param_4);
    thunk_FUN_1140e870(local_70);
    *param_5 = (uint)(0x20);
    thunk_FUN_1148ac28();
    return;
  }
  if (local_74 == '\x03') {
    thunk_FUN_114101e0(local_70,param_4);
    thunk_FUN_114102d0(local_70);
    *param_5 = (uint)(0x20);
    thunk_FUN_1148ac28();
    return;
  }
  if (local_74 == '\x01') {
    thunk_FUN_114116c0(local_70,param_4);
    thunk_FUN_114117e0(local_70);
    *param_5 = (uint)(0x20);
    thunk_FUN_1148ac28();
    return;
  }
LAB_113d1ce9:
                    
  abort();
}


// Reference entry 113d1de0; body size 89 bytes.
#line 1 "ENTRY_113d1de0"

undefined4
FUN_113d1de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = (int)(thunk_FUN_113d1e70(local_c,param_1,param_2,param_3));
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  thunk_FUN_1140d440(local_c,param_4,param_5);
  thunk_FUN_1140d1a0(local_c,param_6);
  thunk_FUN_1140cd70(local_c);
  return (undefined4)(1);
}


// Reference entry 113d20d0; body size 378 bytes.
#line 1 "ENTRY_113d20d0"

void FUN_113d20d0(int param_1,void *param_2,size_t param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int *param_9,int param_10)

{
  void *pvVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  void *local_d0;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_c0 [96];
  undefined1 local_60 [32];
  size_t local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  char local_30;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_d0);
  local_d0 = (void *)(param_2);
  local_c8 = (undefined4)(param_6);
  local_cc = (int)(param_8);
  sVar2 = (size_t)(thunk_FUN_113d35c0(param_1));
  if (((sVar2 != 0) && (param_3 == sVar2)) &&
     ((param_5 == 0 || (((param_1 == 2 || (param_1 == 6)) || (param_1 == 4)))))) {
    memset(local_c0,0,0xbc);
    local_c4 = (int)(param_1);
    thunk_FUN_113d3ba0(local_c0);
    memcpy(local_60,local_d0,param_3);
    local_40 = (size_t)(param_3);
    local_3c = (undefined4)(thunk_FUN_113d3590(param_1));
    iVar4 = (int)(local_cc);
    local_34 = (int)(param_5);
    local_30 = (char)((param_10 != 0) * '\x04' + '\x01');
    local_38 = (undefined4)(param_4);
    local_d0 = (void *)((void *)*param_9);
    iVar3 = (int)(thunk_FUN_113d2860(&local_c4,local_c8,param_7,local_cc,&local_d0));
    pvVar1 = (void *)(local_d0);
    if (iVar3 == 0) {
      iVar4 = (int)(iVar4 + (int)local_d0);
      local_d0 = (void *)((void *)(*param_9 - (int)local_d0));
      iVar4 = (int)(thunk_FUN_113d2490(&local_c4,iVar4,&local_d0));
      if (iVar4 == 0) {
        *param_9 = (int)((int)local_d0 + (int)pvVar1);
        goto LAB_113d2231;
      }
    }
  }
  *param_9 = (int)(0);
LAB_113d2231:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d2300; body size 117 bytes.
#line 1 "ENTRY_113d2300"

undefined4 FUN_113d2300(undefined4 param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(thunk_FUN_113d3560(param_1));
  iVar2 = (int)(thunk_FUN_113d3590(param_1));
  iVar3 = (int)(thunk_FUN_113d3600(param_1));
  if (iVar1 != 0) {
    switch(param_1) {
    case 1:
    case 5:
      if ((uint)(iVar1 * 2) <= param_2) {
        *param_3 = (int)(param_2 - iVar1);
        return (undefined4)(0);
      }
      break;
    case 2:
    case 4:
    case 6:
      if ((uint)(iVar3 + iVar2) <= param_2) {
        *param_3 = (int)(param_2 - (iVar3 + iVar2));
        return (undefined4)(0);
      }
    }
  }
  *param_3 = (int)(0);
  return (undefined4)(3);
}


// Reference entry 113d23c0; body size 132 bytes.
#line 1 "ENTRY_113d23c0"

undefined4 FUN_113d23c0(undefined4 param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)(thunk_FUN_113d3560(param_1));
  iVar2 = (int)(thunk_FUN_113d3590(param_1));
  iVar3 = (int)(thunk_FUN_113d3600(param_1));
  if (uVar1 != 0) {
    switch(param_1) {
    case 1:
    case 5:
      if (param_2 <= ~(uVar1 * 2)) {
        *param_3 = (int)((param_2 / uVar1 + 2) * uVar1);
        return (undefined4)(0);
      }
      break;
    case 2:
    case 4:
    case 6:
      if (param_2 <= (uint)~(iVar3 + iVar2)) {
        *param_3 = (int)(iVar3 + iVar2 + param_2);
        return (undefined4)(0);
      }
    }
  }
  *param_3 = (int)(0);
  return (undefined4)(3);
}


// Reference entry 113d2660; body size 180 bytes.
#line 1 "ENTRY_113d2660"

undefined4
FUN_113d2660(int *param_1,int param_2,void *param_3,size_t param_4,int param_5,int param_6,
            int param_7)

{
  size_t sVar1;
  int iVar2;
  
  sVar1 = (size_t)(thunk_FUN_113d35c0(param_2));
  if (((sVar1 != 0) && (param_4 == sVar1)) &&
     ((param_6 == 0 || (((param_2 == 2 || (param_2 == 6)) || (param_2 == 4)))))) {
    memset(param_1 + 1,0,0xbc);
    *param_1 = (int)(param_2);
    thunk_FUN_113d3ba0(param_1 + 1);
    memcpy(param_1 + 0x19,param_3,param_4);
    param_1[0x21] = (int)(param_4);
    iVar2 = (int)(thunk_FUN_113d3590(param_2));
    param_1[0x22] = (int)(iVar2);
    param_1[0x24] = (int)(param_6);
    *(char *)(param_1 + 0x25) = (param_7 != 0) * '\x04' + '\x01';
    param_1[0x23] = (int)(param_5);
    return (undefined4)(0);
  }
  return (undefined4)(3);
}


// Reference entry 113d2750; body size 218 bytes.
#line 1 "ENTRY_113d2750"

int FUN_113d2750(undefined4 *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (uint)(param_1[0x22]);
  iVar3 = (int)(thunk_FUN_113d3600(*param_1));
  bVar1 = (byte)(*(byte *)(param_1 + 0x25));
  if ((bVar1 & 1) == 0) {
    *param_3 = (uint)(0);
    return (int)(1);
  }
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 2) == 0) {
      uVar4 = (uint)(param_2);
      if (uVar2 - param_1[0x2a] < param_2) {
        uVar4 = (uint)(uVar2 - param_1[0x2a]);
      }
      param_2 = (uint)(param_2 - uVar4);
    }
    if (iVar3 != 0) {
      uVar4 = (uint)(param_2);
      if ((uint)(iVar3 - param_1[0x2f]) < param_2) {
        uVar4 = (uint)(iVar3 - param_1[0x2f]);
      }
      param_2 = (uint)(param_2 - uVar4);
    }
  }
  if ((bVar1 & 2) == 0) {
    iVar3 = (int)(thunk_FUN_113d3c80(*param_1,bVar1 & 4,param_2,param_3,0));
  }
  else {
    iVar3 = (int)(thunk_FUN_113d3bb0(param_1 + 1,param_2,param_3));
  }
  if (iVar3 != 0) {
    *param_3 = (uint)(0);
    return (int)(iVar3);
  }
  if ((*(byte *)(param_1 + 0x25) & 6) == 4) {
    if (~uVar2 < *param_3) {
      *param_3 = (uint)(0);
      return (int)(3);
    }
    *param_3 = (uint)(*param_3 + uVar2);
  }
  return (int)(0);
}


// Reference entry 113d2fe0; body size 157 bytes.
#line 1 "ENTRY_113d2fe0"

undefined4 FUN_113d2fe0(int param_1,uint param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar2 = (int)(param_4);
  if (param_4 == 0) {
    return (undefined4)(0);
  }
  uVar8 = (uint)(0);
  if (param_2 != 0) {
    uVar7 = (uint)(param_4 - 1);
    do {
      if (iVar2 == 1) {
        uVar3 = (uint)(0);
      }
      else {
        iVar10 = (int)(1);
        uVar9 = (uint)(1);
        if (1 < uVar7) {
          do {
            iVar10 = (int)(iVar10 + 1);
            uVar9 = (uint)(uVar9 * 2 | 1);
          } while (uVar9 < uVar7);
        }
        uVar11 = (uint)(iVar10 + 7U >> 3);
        do {
          uVar4 = (undefined4)(thunk_FUN_113d8ef0(&param_4,uVar11));
          iVar10 = (int)(thunk_FUN_114096a0(uVar4));
          if (iVar10 != 0) {
            return (undefined4)(0);
          }
          uVar6 = (uint)(0);
          uVar5 = (uint)(0);
          uVar3 = (uint)(0);
          if (uVar11 != 0) {
            do {
              pbVar1 = (byte *)((byte *)((int)&param_4 + uVar6));
              uVar6 = (uint)(uVar6 + 1);
              uVar5 = (uint)(uVar5 << 8 | (uint)*pbVar1);
              uVar3 = (uint)(uVar5);
            } while (uVar6 < uVar11);
          }
          uVar3 = (uint)(uVar3 & uVar9);
        } while (uVar7 < uVar3);
      }
      *(undefined1 *)(param_1 + uVar8) = *(undefined1 *)(uVar3 + param_3);
      uVar8 = (uint)(uVar8 + 1);
    } while (uVar8 < param_2);
  }
  return (undefined4)(1);
}


// Reference entry 113d3240; body size 143 bytes.
#line 1 "ENTRY_113d3240"

undefined4 FUN_113d3240(uint *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (uint)(param_2);
  if (param_2 <= param_3) {
    if (param_2 == param_3) {
      *param_1 = (uint)(param_2);
      return (undefined4)(1);
    }
    iVar9 = (int)(1);
    uVar7 = (uint)(param_3 - param_2);
    uVar8 = (uint)(1);
    if (1 < uVar7) {
      do {
        iVar9 = (int)(iVar9 + 1);
        uVar8 = (uint)(uVar8 * 2 | 1);
      } while (uVar8 < uVar7);
    }
    uVar10 = (uint)(iVar9 + 7U >> 3);
    while( true ) {
      uVar3 = (undefined4)(thunk_FUN_113d8ef0(&param_2,uVar10));
      iVar9 = (int)(thunk_FUN_114096a0(uVar3));
      if (iVar9 != 0) break;
      uVar6 = (uint)(0);
      uVar4 = (uint)(0);
      uVar5 = (uint)(0);
      if (uVar10 != 0) {
        do {
          pbVar1 = (byte *)((byte *)((int)&param_2 + uVar6));
          uVar6 = (uint)(uVar6 + 1);
          uVar4 = (uint)(uVar4 << 8 | (uint)*pbVar1);
          uVar5 = (uint)(uVar4);
        } while (uVar6 < uVar10);
      }
      if ((uVar5 & uVar8) <= uVar7) {
        *param_1 = (uint)((uVar5 & uVar8) + uVar2);
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 113d3300; body size 262 bytes.
#line 1 "ENTRY_113d3300"

undefined4 FUN_113d3300(int *param_1,uint param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  uVar3 = (uint)(param_2);
  do {
    uVar8 = (uint)(0);
    if (uVar3 != 0) {
      do {
        uVar11 = (uint)(1);
        iVar5 = (int)(1);
        do {
          iVar12 = (int)(iVar5);
          uVar11 = (uint)(uVar11 * 2 | 1);
          iVar5 = (int)(iVar12 + 1);
        } while (uVar11 < 9);
        uVar13 = (uint)(iVar12 + 8U >> 3);
        do {
          uVar4 = (undefined4)(thunk_FUN_113d8ef0(&param_2,uVar13));
          iVar5 = (int)(thunk_FUN_114096a0(uVar4));
          if (iVar5 != 0) {
            return (undefined4)(0);
          }
          uVar7 = (uint)(0);
          uVar6 = (uint)(0);
          if (uVar13 != 0) {
            uVar6 = (uint)(0);
            do {
              pbVar1 = (byte *)((byte *)((int)&param_2 + uVar7));
              uVar7 = (uint)(uVar7 + 1);
              uVar6 = (uint)(uVar6 << 8 | (uint)*pbVar1);
            } while (uVar7 < uVar13);
          }
        } while (9 < (uVar6 & uVar11));
        *(undefined1 *)(uVar8 + (int)param_1) = (&DAT_119106ac)[uVar6 & uVar11];
        uVar8 = (uint)(uVar8 + 1);
      } while (uVar8 < uVar3);
    }
    uVar11 = (uint)(0);
    pcVar9 = (char *)("000000001111111122222222333333334444444455555555666666667777777788888888999999991234567887654321");
    piVar2 = (int *)(param_1);
    uVar8 = (uint)(uVar3);
    piVar10 = (int *)((int *)pcVar9);
    while( true ) {
      while (uVar13 = uVar8 - 4, 3 < uVar8) {
        if (*piVar2 != *(int *)pcVar9) goto LAB_113d33aa;
        pcVar9 = (char *)((char *)((int)pcVar9 + 4));
        piVar2 = (int *)(piVar2 + 1);
        uVar8 = (uint)(uVar13);
      }
      if (uVar13 == 0xfffffffc) break;
LAB_113d33aa:
      if (((char)*piVar2 == (char)*(int *)pcVar9) &&
         ((uVar13 == 0xfffffffd ||
          ((*(char *)((int)piVar2 + 1) == *(char *)((int)pcVar9 + 1) &&
           ((uVar13 == 0xfffffffe ||
            ((*(char *)((int)piVar2 + 2) == *(char *)((int)pcVar9 + 2) &&
             ((uVar13 == 0xffffffff || (*(char *)((int)piVar2 + 3) == *(char *)((int)pcVar9 + 3)))))
            )))))))) break;
      uVar11 = (uint)(uVar11 + 1);
      pcVar9 = (char *)((char *)((int)piVar10 + uVar3));
      piVar2 = (int *)(param_1);
      uVar8 = (uint)(uVar3);
      piVar10 = (int *)((int *)pcVar9);
      if (0xb < uVar11) {
        return (undefined4)(1);
      }
    }
  } while( true );
}


// Reference entry 113d39f0; body size 337 bytes.
#line 1 "ENTRY_113d39f0"

char FUN_113d39f0(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,uint param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = (int *)(param_1 + 1);
  iVar5 = (int)(-0x6100);
  thunk_FUN_11412800(piVar1);
  iVar3 = (int)(thunk_FUN_113d91d0(param_2));
  if (iVar3 == 0) {
LAB_113d3b0c:
    if (*param_1 != -0x703c1362) goto LAB_113d3b2e;
  }
  else {
    param_1[0x12] = (int)(iVar3);
    param_1[0x17] = (int)(0);
    *param_1 = (int)(-0x703c1362);
    iVar2 = (int)(*(int *)(iVar3 + 8));
    if (iVar2 == 0) {
      uVar4 = (uint)(0);
    }
    else {
      uVar4 = (uint)(*(uint *)(iVar2 + 4) >> 2 & 0x3c0);
    }
    if (param_4 == uVar4 >> 3) {
      if (iVar2 == 0) {
        uVar4 = (uint)(0);
      }
      else {
        uVar4 = (uint)(*(uint *)(iVar2 + 4) >> 3 & 0x1c);
      }
      if (param_6 == uVar4) {
        iVar5 = (int)(thunk_FUN_11412b80(piVar1,iVar2));
        if (iVar5 == 0) {
          uVar4 = (uint)(0);
          if (*(int *)(iVar3 + 8) != 0) {
            uVar4 = (uint)(*(uint *)(*(int *)(iVar3 + 8) + 4) >> 2 & 0x3c0);
          }
          iVar5 = (int)(thunk_FUN_11412a80(piVar1,param_3,uVar4,param_9 != 0));
          if (iVar5 == 0) {
            iVar5 = (int)(thunk_FUN_114128a0(piVar1,param_5,param_6));
            if (iVar5 == 0) {
              iVar3 = (int)(FUN_113d34a0(piVar1));
              if ((iVar3 == 6) || (iVar3 == 0xb)) {
                iVar5 = (int)(thunk_FUN_11413030(piVar1,param_7,param_8));
              }
              else {
                iVar5 = (int)(thunk_FUN_11412a10(piVar1,-(param_10 != 0) & 4));
              }
              if (iVar5 == 0) {
                return (char)('\0');
              }
            }
          }
        }
        goto LAB_113d3b0c;
      }
    }
  }
  *param_1 = (int)(0);
  thunk_FUN_113cfb70(param_1 + 0x13,0x10);
  FUN_1008d97e(piVar1);
LAB_113d3b2e:
  return (char)((iVar5 != -0x6180) + '\x02');
}


// Reference entry 113d3c80; body size 124 bytes.
#line 1 "ENTRY_113d3c80"

undefined4 FUN_113d3c80(undefined4 param_1,int param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113d91d0(param_1));
  if (iVar1 == 0) {
    *param_4 = (int)(0);
    return (undefined4)(3);
  }
  iVar1 = (int)(*(int *)(iVar1 + 8));
  if (iVar1 == 0) {
    *param_4 = (int)(param_3 - param_3 % 0);
    return (undefined4)(0);
  }
  if (((((*(uint *)(iVar1 + 4) & 0xf000) == 0x2000) && (param_2 == 0)) && (param_3 != 0)) &&
     (param_5 == 0)) {
    param_3 = (uint)(param_3 - 1);
  }
  *param_4 = (int)(param_3 - param_3 % (*(uint *)(iVar1 + 4) & 0x1f));
  return (undefined4)(0);
}


// Reference entry 113d4110; body size 143 bytes.
#line 1 "ENTRY_113d4110"

void FUN_113d4110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_82c [2086];
  undefined1 local_6 [2];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_82c);
  iVar1 = (int)(thunk_FUN_1141fa30(param_3,local_82c,0x826));
  if (iVar1 < 0) {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_113d17e0(param_4,local_6 + -iVar1,iVar1,param_1,param_2);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d4d70; body size 285 bytes.
#line 1 "ENTRY_113d4d70"

bool FUN_113d4d70(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 local_7c [124];
  
  bVar5 = (bool)(false);
  uVar1 = (uint)(thunk_FUN_113d4970(param_1));
  thunk_FUN_1141a680(local_7c);
  if (uVar1 < 0x201) {
    if (param_2 == 1) {
      iVar2 = (int)(thunk_FUN_1141a4c0(local_7c,param_1 + 4,param_1 + 10,param_1 + 0xc,param_1 + 8,
                                 param_1 + 6));
      if ((iVar2 == 0) && (iVar2 = thunk_FUN_11419700(local_7c), iVar2 == 0)) {
        thunk_FUN_1141c860(local_7c,1,5);
        puVar4 = (undefined1 *)(local_7c);
        goto LAB_113d4e34;
      }
    }
    else if (param_2 == 2) {
      uStack_84 = (undefined4)(*param_1);
      puStack_80 = (undefined1 *)((undefined1 *)param_1[1]);
      iVar2 = (int)(thunk_FUN_1140b1f0(&uStack_84));
      puVar4 = (undefined1 *)(puStack_80);
      if (iVar2 != 1) {
        puVar4 = (undefined1 *)((undefined1 *)0x0);
      }
LAB_113d4e34:
      if (param_4 == uVar1) {
        uVar3 = (undefined4)(thunk_FUN_113d8ef0(param_6,param_3,param_5,*param_6));
        iVar2 = (int)(thunk_FUN_1141abb0(puVar4,thunk_FUN_114096a0,uVar3));
        bVar5 = (bool)(iVar2 == 0);
        if (iVar2 == 0) goto LAB_113d4e73;
      }
    }
  }
  *param_6 = (undefined4)(0);
LAB_113d4e73:
  thunk_FUN_11419f70(local_7c);
  return (bool)(bVar5);
}


// Reference entry 113d4ee0; body size 614 bytes.
#line 1 "ENTRY_113d4ee0"

void FUN_113d4ee0(undefined4 *param_1,void *param_2,uint param_3,int param_4)

{
  uint _Size;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 local_33c;
  int local_338;
  int local_334;
  undefined1 local_330 [128];
  undefined1 local_2b0 [128];
  undefined1 local_230 [128];
  undefined1 local_1b0 [64];
  undefined1 local_170 [64];
  undefined1 local_130 [64];
  undefined1 local_f0 [64];
  undefined1 local_b0 [64];
  undefined1 *local_70 [2];
  int local_68;
  undefined1 *local_64;
  undefined4 local_60;
  int local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  int local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 *local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_33c);
  _Size = (uint)(0x2c4);
  if (param_4 != 0) {
    _Size = (uint)(0x104);
  }
  if ((_Size <= param_3) &&
     ((memcpy(&local_334,param_2,_Size), local_334 == 0x400 || (local_334 == 0x40000)))) {
    uVar1 = (undefined4)(thunk_FUN_1140b600(1));
    iVar2 = (int)(thunk_FUN_1140b690(param_1,uVar1));
    if (iVar2 == 0) {
      local_33c = (undefined4)(*param_1);
      local_338 = (int)(param_1[1]);
      iVar3 = (int)(thunk_FUN_1140b1f0(&local_33c));
      iVar2 = (int)(local_338);
      if (iVar3 != 1) {
        iVar2 = (int)(0);
      }
      local_70[0] = (undefined1 *)(local_330);
      local_70[1] = (undefined1 *)((undefined1 *)0x80);
      local_10 = (undefined4)(0);
      local_68 = (int)(iVar2 + 8);
      local_c = (undefined4)(0);
      local_64 = (undefined1 *)(local_2b0);
      local_5c = (int)(iVar2 + 0x10);
      local_58 = (undefined1 *)(local_230);
      if (param_4 != 0) {
        local_58 = (undefined1 *)((undefined1 *)0x0);
      }
      local_8 = (undefined4)(0);
      puVar4 = (undefined1 *)(local_330);
      local_60 = (undefined4)(0x80);
      local_50 = (int)(iVar2 + 0x18);
      iVar5 = (int)(0);
      local_54 = (undefined4)(0x80);
      local_4c = (undefined1 *)(local_1b0);
      local_44 = (int)(iVar2 + 0x20);
      local_40 = (undefined1 *)(local_170);
      local_38 = (int)(iVar2 + 0x28);
      local_34 = (undefined1 *)(local_130);
      local_2c = (int)(iVar2 + 0x30);
      local_28 = (undefined1 *)(local_f0);
      local_20 = (int)(iVar2 + 0x38);
      local_1c = (undefined1 *)(local_b0);
      local_14 = (int)(iVar2 + 0x40);
      iVar3 = (int)(0);
      local_48 = (undefined4)(0x40);
      local_3c = (undefined4)(0x40);
      local_30 = (undefined4)(0x40);
      local_24 = (undefined4)(0x40);
      local_18 = (undefined4)(0x40);
      do {
        iVar3 = (int)(thunk_FUN_11416950(*(undefined4 *)((int)&local_68 + iVar3),puVar4,
                                   *(undefined4 *)((int)local_70 + iVar3 + 4)));
        if (iVar3 != 0) goto LAB_113d5110;
        iVar5 = (int)(iVar5 + 1);
        iVar3 = (int)(iVar5 * 0xc);
        puVar4 = (undefined1 *)(local_70[iVar5 * 3]);
      } while (puVar4 != (undefined1 *)0x0);
      uVar1 = (undefined4)(thunk_FUN_11417910(iVar2 + 8));
      *(undefined4 *)(iVar2 + 4) = uVar1;
      goto LAB_113d5116;
    }
  }
LAB_113d5110:
  thunk_FUN_1140ad90(param_1);
LAB_113d5116:
  thunk_FUN_113cfb70(&local_334,0x2c4);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d5240; body size 572 bytes.
#line 1 "ENTRY_113d5240"

void FUN_113d5240(undefined4 *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  void *local_340;
  undefined4 local_33c;
  int local_338;
  undefined4 local_334;
  undefined1 local_330 [128];
  undefined1 local_2b0 [128];
  undefined1 local_230 [128];
  undefined1 local_1b0 [64];
  undefined1 local_170 [64];
  undefined1 local_130 [64];
  undefined1 local_f0 [64];
  undefined1 local_b0 [64];
  int local_70;
  undefined1 *local_6c [2];
  int local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 *local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 *local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_340);
  local_340 = (void *)(param_2);
  local_33c = (undefined4)(*param_1);
  local_338 = (int)(param_1[1]);
  iVar1 = (int)(thunk_FUN_1140b1f0(&local_33c));
  local_1c = (int)(local_338);
  if (iVar1 != 1) {
    local_1c = (int)(0);
  }
  local_6c[0] = (undefined1 *)(local_330);
  local_6c[1] = (undefined1 *)((undefined1 *)0x80);
  iVar1 = (int)(local_1c + 8);
  local_64 = (int)(local_1c + 0x10);
  local_60 = (undefined1 *)(local_2b0);
  local_5c = (undefined4)(0x80);
  if (param_3 == 0) {
    local_58 = (int)(local_1c + 0x18);
  }
  else {
    local_58 = (int)(0);
  }
  local_54 = (undefined1 *)(local_230);
  local_50 = (undefined4)(0x80);
  local_4c = (int)(local_1c + 0x20);
  local_48 = (undefined1 *)(local_1b0);
  local_40 = (int)(local_1c + 0x28);
  local_3c = (undefined1 *)(local_170);
  local_34 = (int)(local_1c + 0x30);
  local_30 = (undefined1 *)(local_130);
  local_28 = (int)(local_1c + 0x38);
  local_24 = (undefined1 *)(local_f0);
  local_1c = (int)(local_1c + 0x40);
  local_18 = (undefined1 *)(local_b0);
  local_44 = (undefined4)(0x40);
  local_38 = (undefined4)(0x40);
  local_2c = (undefined4)(0x40);
  local_20 = (undefined4)(0x40);
  local_14 = (undefined4)(0x40);
  local_10 = (undefined4)(0);
  local_c = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_70 = (int)(iVar1);
  iVar2 = (int)(thunk_FUN_113d4970(param_1));
  if (iVar2 == 0x80) {
    iVar2 = (int)(0);
    if (iVar1 != 0) {
      iVar3 = (int)(0);
      do {
        iVar1 = (int)(thunk_FUN_11417c00(iVar1,*(undefined4 *)((int)local_6c + iVar3),
                                   *(undefined4 *)((int)local_6c + iVar3 + 4)));
        if (iVar1 != 0) goto LAB_113d5450;
        iVar2 = (int)(iVar2 + 1);
        iVar3 = (int)(iVar2 * 0xc);
        iVar1 = (int)((&local_70)[iVar2 * 3]);
      } while (iVar1 != 0);
    }
    _Size = (size_t)(0x2c4);
    local_334 = (undefined4)(0x400);
    if (param_3 != 0) {
      _Size = (size_t)(0x104);
    }
    memcpy(local_340,&local_334,_Size);
  }
LAB_113d5450:
  thunk_FUN_113cfb70(&local_334,0x2c4);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d5570; body size 169 bytes.
#line 1 "ENTRY_113d5570"

bool FUN_113d5570(undefined4 *param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = (uint)(thunk_FUN_113d4970(param_1));
  if ((param_2 != 1) || (0x200 < uVar1)) {
    return (bool)(false);
  }
  if (param_3 == '\x01') {
    uVar4 = (undefined4)(9);
  }
  else if (param_3 == '\x02') {
    uVar4 = (undefined4)(3);
  }
  else {
    if (param_3 != '\x03') {
      return (bool)(false);
    }
    uVar4 = (undefined4)(5);
  }
  if (param_7 != uVar1) {
    return (bool)(false);
  }
  local_8 = (undefined4)(*param_1);
  local_4 = (undefined4)(param_1[1]);
  iVar2 = (int)(thunk_FUN_1140b1f0(&local_8));
  uVar3 = (undefined4)(local_4);
  if (iVar2 != 1) {
    uVar3 = (undefined4)(0);
  }
  iVar2 = (int)(thunk_FUN_1141c360(uVar3,uVar4,param_5,param_4,param_6));
  return (bool)(iVar2 == 0);
}


// Reference entry 113d5650; body size 169 bytes.
#line 1 "ENTRY_113d5650"

bool FUN_113d5650(undefined4 *param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = (uint)(thunk_FUN_113d4970(param_1));
  if ((param_2 != 1) || (0x200 < uVar1)) {
    return (bool)(false);
  }
  if (param_3 == '\x01') {
    uVar4 = (undefined4)(9);
  }
  else if (param_3 == '\x02') {
    uVar4 = (undefined4)(3);
  }
  else {
    if (param_3 != '\x03') {
      return (bool)(false);
    }
    uVar4 = (undefined4)(5);
  }
  if (param_7 != uVar1) {
    return (bool)(false);
  }
  local_8 = (undefined4)(*param_1);
  local_4 = (undefined4)(param_1[1]);
  iVar2 = (int)(thunk_FUN_1140b1f0(&local_8));
  uVar3 = (undefined4)(local_4);
  if (iVar2 != 1) {
    uVar3 = (undefined4)(0);
  }
  iVar2 = (int)(thunk_FUN_1141c360(uVar3,uVar4,param_5,param_4,param_6));
  return (bool)(iVar2 == 0);
}


// Reference entry 113d5730; body size 646 bytes.
#line 1 "ENTRY_113d5730"

undefined4 FUN_113d5730(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0xd:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf4718,0x3c8));
    return (undefined4)(uVar1);
  case 0xe:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf8760,0x3c8));
    return (undefined4)(uVar1);
  default:
    return (undefined4)(0);
  case 0x14:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf8398,0x3c8));
    return (undefined4)(uVar1);
  case 0x15:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf2510,0x3c8));
    return (undefined4)(uVar1);
  case 0x16:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf7840,0x3c8));
    return (undefined4)(uVar1);
  case 0x17:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf4350,0x3c8));
    return (undefined4)(uVar1);
  case 0x18:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf5a00,0x3c8));
    return (undefined4)(uVar1);
  case 0x19:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf3068,0x3c8));
    return (undefined4)(uVar1);
  case 0x1a:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf8ef0,0x3c8));
    return (undefined4)(uVar1);
  case 0x1b:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf2148,0x3c8));
    return (undefined4)(uVar1);
  case 0x1c:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf2ca0,0x3c8));
    return (undefined4)(uVar1);
  case 0x1d:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf6ce8,0x3c8));
    return (undefined4)(uVar1);
  case 0x1e:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf3f88,0x3c8));
    return (undefined4)(uVar1);
  case 0x20:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf92b8,0x3c8));
    return (undefined4)(uVar1);
  case 0x21:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf6920,0x3c8));
    return (undefined4)(uVar1);
  case 0x22:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf8b28,0x3c8));
    return (undefined4)(uVar1);
  case 0x23:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf28d8,0x3c8));
    return (undefined4)(uVar1);
  case 0x24:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf4ae0,0x3c8));
    return (undefined4)(uVar1);
  case 0x25:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf5638,0x3c8));
    return (undefined4)(uVar1);
  case 0x26:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf70b0,0x3c8));
    return (undefined4)(uVar1);
  case 0x28:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf7fd0,0x3c8));
    return (undefined4)(uVar1);
  case 0x29:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf6190,0x3c8));
    return (undefined4)(uVar1);
  case 0x2a:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf5dc8,0x3c8));
    return (undefined4)(uVar1);
  case 0x2b:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf7c08,0x3c8));
    return (undefined4)(uVar1);
  case 0x2c:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf3430,0x3c8));
    return (undefined4)(uVar1);
  case 0x2e:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf7478,0x3c8));
    return (undefined4)(uVar1);
  case 0x31:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf5270,0x3c8));
    return (undefined4)(uVar1);
  case 0x33:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf6558,0x3c8));
    return (undefined4)(uVar1);
  case 0x34:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf4ea8,0x3c8));
    return (undefined4)(uVar1);
  case 0x35:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf37f8,0x3c8));
    return (undefined4)(uVar1);
  case 0x38:
    uVar1 = (undefined4)(thunk_FUN_113d0a10(&DAT_11bf3bc0,0x3c8));
    return (undefined4)(uVar1);
  }
}


// Reference entry 113d5b60; body size 646 bytes.
#line 1 "ENTRY_113d5b60"

void FUN_113d5b60(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,uint param_7,int param_8,uint *param_9,int param_10)

{
  int iVar1;
  uint local_98;
  int local_94;
  size_t local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [96];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_98);
  local_84 = (undefined4)(param_2);
  local_88 = (undefined4)(param_4);
  local_8c = (int)(param_6);
  iVar1 = (int)(thunk_FUN_113d35c0(param_1));
  if ((param_3 == iVar1) && ((param_1 == 3 || (param_1 == 7)))) {
    local_18 = (undefined4)(0);
    local_20 = (undefined8)(1);
    if (param_10 == 0) {
      if (((3 < param_7) && (param_7 - 4 <= *param_9)) &&
         (iVar1 = thunk_FUN_113d39f0(local_80,param_1,local_84,param_3,&local_20,0xc,local_88,
                                     param_5,0,1), iVar1 == 0)) {
        local_98 = (uint)(*param_9);
        iVar1 = (int)(thunk_FUN_113d3e30(local_80,local_8c,param_7 - 4,param_8,&local_98));
        if (iVar1 == 0) {
          local_94 = (int)(*param_9 - local_98);
          iVar1 = (int)(thunk_FUN_113d36c0(local_80,local_98 + param_8,&local_94,local_8c + (param_7 - 4),
                                     4));
          if (iVar1 == 0) {
            *param_9 = (uint)(local_94 + local_98);
            goto LAB_113d5c26;
          }
        }
      }
    }
    else {
      local_90 = (size_t)(0x10);
      if ((param_7 < 0xfffffffc) && (param_7 + 4 <= *param_9)) {
        local_98 = (uint)(0);
        iVar1 = (int)(thunk_FUN_113d39f0(local_80,param_1,local_84,param_3,&local_20,0xc,local_88,param_5,
                                   param_10,1));
        if (iVar1 == 0) {
          local_94 = (int)(*param_9 - local_98);
          iVar1 = (int)(thunk_FUN_113d3e30(local_80,local_8c,param_7,local_98 + param_8,&local_94));
          if (iVar1 == 0) {
            local_98 = (uint)(local_98 + local_94);
            local_94 = (int)(*param_9 - local_98);
            iVar1 = (int)(thunk_FUN_113d3700(local_80,local_98 + param_8,&local_94,local_14,&local_90));
            if (iVar1 == 0) {
              local_98 = (uint)(local_98 + local_94);
              memcpy((void *)(local_98 + param_8),local_14,local_90);
              *param_9 = (uint)(local_98 + local_90);
              goto LAB_113d5c26;
            }
          }
        }
      }
    }
  }
  *param_9 = (uint)(0);
LAB_113d5c26:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d6050; body size 484 bytes.
#line 1 "ENTRY_113d6050"

void FUN_113d6050(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,void *param_7,uint param_8,undefined4 param_9
                 ,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  size_t local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c;
  undefined4 local_28;
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_38);
  local_30 = (undefined4)(param_5);
  local_2c = (void *)(param_7);
  local_28 = (undefined4)(param_9);
  local_34 = (undefined4)(thunk_FUN_113d35c0(param_4));
  local_38 = (size_t)(0);
  memset(param_1,0,0x1c78);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(0x886499ca);
  param_1[2] = (undefined4)(1);
  *(undefined1 *)(param_1 + 0x214) = 1;
  iVar1 = (int)(thunk_FUN_113d2fb0(local_24,local_34));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_113d4970(local_30));
    param_1[0x417] = (undefined4)(uVar2);
    iVar1 = (int)(thunk_FUN_113d9630(param_6));
    if ((((iVar1 != 0) && (param_8 < 0x800)) && (param_1[0x417] != 0)) &&
       ((uint)param_1[0x417] < 0x201)) {
      *(char *)(param_1 + 0x216) = (char)param_6;
      param_1[0x215] = (undefined4)(param_8);
      memcpy((void *)((int)param_1 + 0x859),local_2c,param_8);
      param_1[0x416] = (undefined4)(param_3);
      iVar1 = (int)(thunk_FUN_113d4be0(local_30,param_3,local_24,local_34,param_1 + 0x418,0));
      if ((iVar1 != 0) && (iVar1 = thunk_FUN_113d23c0(param_4,param_10,&local_38), iVar1 == 0)) {
        pvVar3 = (void *)(malloc(local_38));
        *param_2 = (undefined4)(pvVar3);
        if ((pvVar3 != (void *)0x0) &&
           (iVar1 = thunk_FUN_113d20d0(param_4,local_24,local_34,0,0,local_28,param_10,pvVar3,
                                       &local_38,1), iVar1 == 0)) {
          param_1[0x71b] = (undefined4)(param_4);
          param_1[0x71c] = (undefined4)(local_38);
          param_1[0x71d] = (undefined4)(pvVar3);
          iVar1 = (int)(thunk_FUN_113d62b0(param_1,0,0));
          param_1[1] = (undefined4)(iVar1);
          if (iVar1 != 0) goto LAB_113d6210;
        }
      }
    }
  }
  if ((void *)*param_2 != (void *)0x0) {
    free((void *)*param_2);
    *param_2 = (undefined4)(0);
  }
LAB_113d6210:
  thunk_FUN_113cfb70(local_24,0x20);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d6700; body size 101 bytes.
#line 1 "ENTRY_113d6700"

int FUN_113d6700(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  uint uVar2;
  
  iVar1 = (int)(thunk_FUN_113d62b0(param_1,param_2,param_3));
  _Dst = (void *)((void *)(param_2 + iVar1));
  if (iVar1 == 0) {
    return (int)(0);
  }
  uVar2 = (uint)(-(uint)(param_2 != 0) & param_3 + param_2);
  if (uVar2 != 0) {
    if (uVar2 < *(size_t *)(param_1 + 0x1c70) + (int)_Dst) {
      return (int)(0);
    }
    memcpy(_Dst,*(void **)(param_1 + 0x1c74),*(size_t *)(param_1 + 0x1c70));
  }
  return (int)((*(int *)(param_1 + 0x1c70) - param_2) + (int)_Dst);
}


// Reference entry 113d6a20; body size 76 bytes.
#line 1 "ENTRY_113d6a20"

bool FUN_113d6a20(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (0x1fffffff < param_3) {
    return (bool)(false);
  }
  thunk_FUN_11420a70(param_1);
  iVar1 = (int)(thunk_FUN_11420aa0(param_1,param_2,param_3 * 8));
  if (iVar1 != 0) {
    thunk_FUN_11420a50(param_1);
  }
  return (bool)(iVar1 == 0);
}


// Reference entry 113d6a90; body size 160 bytes.
#line 1 "ENTRY_113d6a90"

void FUN_113d6a90(undefined4 *param_1,char param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_1c;
  int local_18 [5];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_1c);
  iVar4 = (int)(0);
  local_1c = (undefined4)(0x14);
  if ((param_2 == '\x03') && (param_4 == 0x14)) {
    iVar4 = (int)(thunk_FUN_113d9670(*param_1));
    if (iVar4 != 0) {
      iVar1 = (int)(thunk_FUN_113d49c0(local_18,&local_1c,iVar4));
      if (iVar1 != 0) {
        piVar2 = (int *)(local_18);
        uVar3 = (uint)(0x10);
        while (*param_3 == *piVar2) {
          param_3 = (int *)(param_3 + 1);
          piVar2 = (int *)(piVar2 + 1);
          bVar5 = (bool)(uVar3 < 4);
          uVar3 = (uint)(uVar3 - 4);
          if (bVar5) {
            thunk_FUN_1148ac28();
            return;
          }
        }
      }
    }
  }
  thunk_FUN_113d47d0(iVar4);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d6b60; body size 75 bytes.
#line 1 "ENTRY_113d6b60"

bool FUN_113d6b60(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if ((uint)(param_2 * 8) <= param_3) {
    return (bool)(false);
  }
  uVar1 = (uint)(param_3 & 0x80000007);
  if ((int)uVar1 < 0) {
    uVar1 = (uint)((uVar1 - 1 | 0xfffffff8) + 1);
  }
  return (bool)((*(byte *)((param_1 - ((int)(param_3 + ((int)param_3 >> 0x1f & 7U)) >> 3)) + -1 + param_2)
         & (byte)(1 << ((byte)uVar1 & 0x1f))) != 0);
}


// Reference entry 113d6bc0; body size 165 bytes.
#line 1 "ENTRY_113d6bc0"

bool FUN_113d6bc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  int local_8;
  int local_4;
  
  local_8 = (int)(0);
  local_4 = (int)(0);
  iVar1 = (int)(thunk_FUN_113d6c90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_4,
                             &local_8,0,0));
  if (iVar1 == 0) {
    return (bool)(false);
  }
  if ((uint)(local_8 * 8) <= param_8) {
    return (bool)(false);
  }
  uVar2 = (uint)(param_8 & 0x80000007);
  if ((int)uVar2 < 0) {
    uVar2 = (uint)((uVar2 - 1 | 0xfffffff8) + 1);
  }
  return (bool)((*(byte *)((local_4 - ((int)(param_8 + ((int)param_8 >> 0x1f & 7U)) >> 3)) + local_8 + -1 +
                   param_1) & (byte)(1 << ((byte)uVar2 & 0x1f))) != 0);
}


// Reference entry 113d7200; body size 446 bytes.
#line 1 "ENTRY_113d7200"

void FUN_113d7200(int *param_1,int *param_2,int param_3,code *param_4,undefined4 param_5,
                 code *param_6)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  byte bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iStack_21c;
  undefined4 local_218;
  int *local_214;
  undefined4 local_210;
  code *local_20c;
  code *local_208;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&iStack_21c);
  bVar4 = (byte)(0);
  local_210 = (undefined4)(param_5);
  *param_1 = (int)(0);
  local_214 = (int *)(param_2);
  local_20c = (code *)(param_4);
  local_208 = (code *)(param_6);
  local_218 = (undefined4)(0x200);
  *param_2 = (int)(0);
  do {
    piVar5 = (int *)(local_214);
    if (*(byte *)(param_3 + 0x850) <= bVar4) goto LAB_113d7373;
    puVar6 = (undefined4 *)((undefined4 *)(param_3 + 0x854 + (uint)bVar4 * 0xa0c));
    iStack_21c = (int)((*local_20c)(local_210,*(undefined1 *)(puVar6 + 1),(int)puVar6 + 5,*puVar6));
    piVar5 = (int *)(local_214);
    bVar4 = (byte)(bVar4 + 1);
  } while (iStack_21c == 0);
  iVar2 = (int)(thunk_FUN_113d2300(*(undefined4 *)(param_3 + 0x1c6c),*(undefined4 *)(param_3 + 0x1c70),
                             local_214));
  iVar7 = (int)(iStack_21c);
  if (iVar2 == 0) {
    pvVar3 = (void *)(malloc(*piVar5 + 1));
    iVar7 = (int)(iStack_21c);
    *param_1 = (int)((int)pvVar3);
    if (((pvVar3 != (void *)0x0) &&
        (iVar2 = thunk_FUN_113d4d70(iStack_21c,puVar6[0x201],puVar6 + 0x203,puVar6[0x202],
                                    auStack_204,&local_218), iVar2 != 0)) &&
       (iVar2 = thunk_FUN_113d20d0(*(undefined4 *)(param_3 + 0x1c6c),auStack_204,local_218,0,0,
                                   *(undefined4 *)(param_3 + 0x1c74),
                                   *(undefined4 *)(param_3 + 0x1c70),*param_1,piVar5,0), iVar2 == 0)
       ) {
      bVar1 = (bool)(true);
      *(undefined1 *)(*piVar5 + *param_1) = 0;
      goto LAB_113d7359;
    }
  }
  bVar1 = (bool)(false);
LAB_113d7359:
  if (local_208 != (code *)0x0) {
    (*local_208)(iVar7);
  }
  if (!bVar1) {
LAB_113d7373:
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
      *param_1 = (int)(0);
    }
    *piVar5 = (int)(0);
  }
  thunk_FUN_113cfb70(auStack_204,0x200);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d7960; body size 92 bytes.
#line 1 "ENTRY_113d7960"

int FUN_113d7960(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  memset(param_1,0,0x1c78);
  iVar1 = (int)(thunk_FUN_113d75c0(param_1,param_2,param_3));
  if (iVar1 != 0) {
    iVar1 = (int)(param_2 + iVar1);
    if ((uint)(*(int *)((int)param_1 + 0x1c70) + iVar1) <= (uint)(param_2 + param_3)) {
      *(int *)((int)param_1 + 0x1c74) = iVar1;
      return (int)((*(int *)((int)param_1 + 0x1c70) - param_2) + iVar1);
    }
  }
  return (int)(0);
}


// Reference entry 113d8fd0; body size 235 bytes.
#line 1 "ENTRY_113d8fd0"

undefined4 * __fastcall FUN_113d8fd0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = (int)(7);
  puVar3 = (undefined4 *)(param_1 + 2);
  *puVar3 = (undefined4)(0);
  *param_1 = (undefined4)(1);
  param_1[1] = (undefined4)(5);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(2);
  param_1[5] = (undefined4)(0xe);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0x10);
  param_1[8] = (undefined4)(3);
  param_1[9] = (undefined4)(0xe);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(4);
  param_1[0xc] = (undefined4)(4);
  param_1[0xd] = (undefined4)(0x4d);
  param_1[0xe] = (undefined4)(0);
  param_1[0xf] = (undefined4)(0x10);
  param_1[0x10] = (undefined4)(5);
  param_1[0x11] = (undefined4)(7);
  param_1[0x12] = (undefined4)(0);
  param_1[0x13] = (undefined4)(0);
  param_1[0x14] = (undefined4)(6);
  param_1[0x15] = (undefined4)(0x10);
  param_1[0x16] = (undefined4)(0);
  param_1[0x17] = (undefined4)(0x10);
  param_1[0x18] = (undefined4)(7);
  param_1[0x19] = (undefined4)(0x10);
  param_1[0x1a] = (undefined4)(0);
  param_1[0x1b] = (undefined4)(4);
  do {
    uVar1 = (undefined4)(thunk_FUN_11412700(puVar3[-1]));
    *puVar3 = (undefined4)(uVar1);
    puVar3 = (undefined4 *)(puVar3 + 4);
    iVar2 = (int)(iVar2 + -1);
  } while (iVar2 != 0);
  return (undefined4 *)(param_1);
}


// Reference entry 113d9d40; body size 204 bytes.
#line 1 "ENTRY_113d9d40"

void FUN_113d9d40(uint param_1)

{
  char *local_4c;
  undefined *local_48;
  char *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  char *local_30;
  char *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_4c);
  local_4c = (char *)("invalid");
  local_48 = (undefined *)(&DAT_11bfccc8);
  local_44 = (char *)("Kernel");
  local_40 = (undefined *)(&DAT_11bfccd4);
  local_3c = (undefined *)(&DAT_11bfccdc);
  local_38 = (undefined *)(&DAT_11bfcce0);
  local_34 = (undefined *)(&DAT_11bfcce4);
  local_30 = (char *)("U-Boot");
  local_2c = (char *)("BL Combined");
  local_28 = (undefined *)(&DAT_11bfcd00);
  local_24 = (undefined *)(&DAT_11bfcd08);
  local_20 = (undefined *)(&DAT_11bfcd10);
  local_1c = (undefined *)(&DAT_11bfcd18);
  local_18 = (undefined *)(&DAT_11bfcd20);
  local_14 = (char *)("FIRMWARE");
  local_10 = (char *)("ROOT_CERTS");
  local_c = (char *)("JFFS_TARBALL");
  local_8 = (char *)("BOOTSOUND");
  if (param_1 < 0x12) {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113d9e40; body size 271 bytes.
#line 1 "ENTRY_113d9e40"

undefined4 FUN_113d9e40(uint param_1,uint *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_4;
  
  uVar4 = (uint)(param_1);
  local_4 = (uint)(0);
  if (param_1 != 0) {
    param_1 = (uint)(1);
    do {
      puVar1 = (uint *)(param_2);
      for (uVar2 = (uint)(param_1); uVar2 < uVar4; uVar2 = uVar2 + 1) {
        puVar1 = (uint *)(puVar1 + 0x42);
        if ((*param_2 & 0x7fffffff) == (*puVar1 & 0x7fffffff)) {
          return (undefined4)(1);
        }
      }
      uVar2 = (uint)(0);
      puVar1 = (uint *)(param_4);
      if (param_3 != 0) {
        do {
          if ((*param_2 & 0x7fffffff) == (*puVar1 & 0x7fffffff)) {
            return (undefined4)(1);
          }
          uVar2 = (uint)(uVar2 + 1);
          puVar1 = (uint *)(puVar1 + 0x42);
        } while (uVar2 < param_3);
      }
      param_2 = (uint *)(param_2 + 0x42);
      local_4 = (uint)(local_4 + 1);
      param_1 = (uint)(param_1 + 1);
    } while (local_4 < uVar4);
  }
  uVar4 = (uint)(0);
  if (param_3 != 0) {
    uVar2 = (uint)(1);
    do {
      puVar1 = (uint *)(param_4);
      for (uVar3 = (uint)(uVar2); uVar3 < param_3; uVar3 = uVar3 + 1) {
        puVar1 = (uint *)(puVar1 + 0x42);
        if ((*param_4 & 0x7fffffff) == (*puVar1 & 0x7fffffff)) {
          return (undefined4)(1);
        }
      }
      uVar4 = (uint)(uVar4 + 1);
      param_4 = (uint *)(param_4 + 0x42);
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar4 < param_3);
  }
  return (undefined4)(0);
}


// Reference entry 113da210; body size 83 bytes.
#line 1 "ENTRY_113da210"

void FUN_113da210(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  undefined1 uStack0000000b;
  
  uVar1 = (undefined4)(param_4);
  uStack00000009 = (undefined1)((undefined1)((uint)param_4 >> 0x10));
  uStack0000000a = (undefined1)((undefined1)((uint)param_4 >> 8));
  uStack0000000b = (undefined1)((undefined1)param_4);
  iVar2 = (int)((**(code **)(*(int *)(param_1 + 0x3c) + 0x14))(param_1,&param_2,4));
  if (iVar2 == 0) {
    (**(code **)(*(int *)(param_1 + 0x3c) + 0x14))(param_1,param_3,uVar1);
  }
  return;
}


// Reference entry 113da480; body size 446 bytes.
#line 1 "ENTRY_113da480"

undefined4
FUN_113da480(undefined4 param_1,uint param_2,uint *param_3,undefined2 *param_4,undefined4 *param_5)

{
  uint uVar1;
  
  switch(param_1) {
  case 1:
    *param_3 = (uint)(0x4000000);
    *param_4 = (undefined2)(0);
    *param_5 = (undefined4)(0);
    return (undefined4)(0);
  default:
    return (undefined4)(0xffffff7a);
  case 5:
    *param_3 = (uint)(0x4404000);
    *param_4 = (undefined2)(0x2400);
    *param_5 = (undefined4)(0x80);
    return (undefined4)(0);
  case 7:
    *param_3 = (uint)(0x4404000);
    *param_4 = (undefined2)(0x2400);
    *param_5 = (undefined4)(0x100);
    return (undefined4)(0);
  case 0xe:
    *param_3 = (uint)(0x5500200);
    *param_4 = (undefined2)(0x2400);
    *param_5 = (undefined4)(0x80);
    return (undefined4)(0);
  case 0xf:
    *param_3 = (uint)(0x5500200);
    *param_4 = (undefined2)(0x2400);
    *param_5 = (undefined4)(0xc0);
    return (undefined4)(0);
  case 0x10:
    *param_3 = (uint)(0x5500200);
    *param_4 = (undefined2)(0x2400);
    *param_5 = (undefined4)(0x100);
    return (undefined4)(0);
  case 0x26:
    if (param_2 == 0) {
      uVar1 = (uint)(0x5500100);
    }
    else {
      uVar1 = (uint)((param_2 & 0x3f) << 0x10 | 0x5400100);
    }
    break;
  case 0x27:
    if (param_2 == 0) {
      uVar1 = (uint)(0x5500100);
    }
    else {
      uVar1 = (uint)((param_2 & 0x3f) << 0x10 | 0x5400100);
    }
    *param_3 = (uint)(uVar1);
    *param_4 = (undefined2)(0x2400);
    *param_5 = (undefined4)(0xc0);
    return (undefined4)(0);
  case 0x28:
    if (param_2 == 0) {
      uVar1 = (uint)(0x5500100);
    }
    else {
      uVar1 = (uint)((param_2 & 0x3f) << 0x10 | 0x5400100);
    }
    *param_3 = (uint)(uVar1);
    *param_4 = (undefined2)(0x2400);
    *param_5 = (undefined4)(0x100);
    return (undefined4)(0);
  case 0x4d:
    *param_3 = (uint)(0x5100500);
    *param_4 = (undefined2)(0x2004);
    *param_5 = (undefined4)(0x100);
    return (undefined4)(0);
  }
  *param_3 = (uint)(uVar1);
  *param_4 = (undefined2)(0x2400);
  *param_5 = (undefined4)(0x80);
  return (undefined4)(0);
}


// Reference entry 113daab0; body size 322 bytes.
#line 1 "ENTRY_113daab0"

undefined4 FUN_113daab0(int param_1,void *param_2,uint param_3,void *param_4,uint param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  
  if ((((*(int *)(param_1 + 0x90) != 0) && (*(int *)(param_1 + 0x94) != 0)) &&
      (*(int *)(param_1 + 0x88) != 0)) && (*(int *)(param_1 + 0x8c) != 0)) {
    return (undefined4)(0xffff8f80);
  }
  if (((param_2 != (void *)0x0) && (param_3 != 0)) && (param_3 < 0x31)) {
    pvVar1 = (void *)(calloc(1,param_3));
    *(void **)(param_1 + 0x88) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return (undefined4)(0xffff8100);
    }
    *(uint *)(param_1 + 0x8c) = param_3;
    memcpy(pvVar1,param_2,param_3);
    if (((param_4 == (void *)0x0) || (param_5 == 0)) ||
       (((param_5 & 0xffff0000) != 0 || (0x4000 < param_5)))) {
      uVar2 = (undefined4)(0xffff8f00);
    }
    else {
      pvVar1 = (void *)(calloc(1,param_5));
      *(void **)(param_1 + 0x90) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        *(uint *)(param_1 + 0x94) = param_5;
        memcpy(pvVar1,param_4,param_5);
        return (undefined4)(0);
      }
      uVar2 = (undefined4)(0xffff8100);
    }
    if (*(int *)(param_1 + 0x88) != 0) {
      thunk_FUN_11423f00(*(int *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    if (*(void **)(param_1 + 0x90) != (void *)0x0) {
      free(*(void **)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    return (undefined4)(uVar2);
  }
  return (undefined4)(0xffff8f00);
}


// Reference entry 113dadc0; body size 295 bytes.
#line 1 "ENTRY_113dadc0"

undefined4 FUN_113dadc0(int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  
  *(char *)(param_1 + 2) = (char)param_2;
  *(char *)((int)param_1 + 9) = (char)param_3;
  if (param_2 == 0) {
    *(undefined1 *)((int)param_1 + 10) = 2;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd | 1;
  }
  *(undefined2 *)((int)param_1 + 0xd) = 0x101;
  param_1[0x16] = (int)((int)LAB_113e07a0);
  param_1[0x17] = (int)((int)LAB_113e0790);
  *(undefined1 *)((int)param_1 + 0xf) = 1;
  *(undefined4 *)((int)param_1 + 0x12) = 0x10001;
  param_1[0x2a] = (int)(1000);
  param_1[0x2b] = (int)(60000);
  param_1[0x26] = (int)(0);
  param_1[0x27] = (int)(0x400);
  param_1[7] = (int)(7);
  param_1[1] = (int)(0x303);
  *param_1 = (int)((param_3 != 1) + 0x303);
  if (param_4 != 2) {
    iVar2 = (int)(thunk_FUN_113ea1b0());
    param_1[6] = (int)(iVar2);
    param_1[0x1c] = (int)((int)&DAT_11bfda24);
    if ((param_1[1] == 0x303) && (*param_1 == 0x303)) {
      bVar1 = (bool)(true);
    }
    else {
      bVar1 = (bool)(false);
    }
    puVar3 = (undefined *)(&DAT_11bfcd80);
    if (bVar1) {
      puVar3 = (undefined *)(&DAT_11bfcd94);
    }
    param_1[0x20] = (int)((int)puVar3);
    param_1[0x21] = (int)((int)&DAT_11bfcd6c);
    return (undefined4)(0);
  }
  param_1[6] = (int)((int)&DAT_11bfcd74);
  param_1[0x1c] = (int)((int)&DAT_11bfda44);
  if ((param_1[1] == 0x303) && (*param_1 == 0x303)) {
    bVar1 = (bool)(true);
  }
  else {
    bVar1 = (bool)(false);
  }
  puVar3 = (undefined *)(&DAT_11bfcda8);
  if (bVar1) {
    puVar3 = (undefined *)(&DAT_11bfcdb0);
  }
  param_1[0x20] = (int)((int)puVar3);
  param_1[0x21] = (int)((int)&DAT_11bfcdb8);
  return (undefined4)(0);
}


// Reference entry 113daf30; body size 151 bytes.
#line 1 "ENTRY_113daf30"

void FUN_113daf30(int param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x88) != 0) {
      thunk_FUN_11423f00(*(int *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      thunk_FUN_11423f00(*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    _Memory = (void *)(*(void **)(param_1 + 0x74));
    while (_Memory != (void *)0x0) {
      pvVar1 = (void *)(*(void **)((int)_Memory + 8));
      free(_Memory);
      _Memory = (void *)(pvVar1);
    }
    thunk_FUN_11423ed0(param_1,0xc0);
  }
  return;
}


// Reference entry 113db5a0; body size 391 bytes.
#line 1 "ENTRY_113db5a0"

void FUN_113db5a0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc4) != 0) {
      thunk_FUN_11423f00(*(int *)(param_1 + 0xc4),0x414d);
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      thunk_FUN_11423f00(*(int *)(param_1 + 0x60),0x414d);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      thunk_FUN_113e6050(*(int *)(param_1 + 0x48));
      free(*(void **)(param_1 + 0x48));
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      thunk_FUN_113dca30(param_1);
      free(*(void **)(param_1 + 0x3c));
      thunk_FUN_113e6050(*(undefined4 *)(param_1 + 0x4c));
      free(*(void **)(param_1 + 0x4c));
      iVar2 = (int)(*(int *)(param_1 + 0x38));
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x68) != 0) {
          thunk_FUN_11401680(*(int *)(iVar2 + 0x68));
          free(*(void **)(iVar2 + 0x68));
          *(undefined4 *)(iVar2 + 0x68) = 0;
        }
        free(*(void **)(iVar2 + 0xc0));
        free(*(void **)(iVar2 + 0x70));
        free(*(void **)(iVar2 + 0xc4));
        thunk_FUN_11423ed0(iVar2,0x1d8);
      }
      free(*(void **)(param_1 + 0x38));
    }
    thunk_FUN_113e6050(*(undefined4 *)(param_1 + 0x50));
    free(*(void **)(param_1 + 0x50));
    iVar2 = (int)(*(int *)(param_1 + 0x34));
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x68) != 0) {
        thunk_FUN_11401680(*(int *)(iVar2 + 0x68));
        free(*(void **)(iVar2 + 0x68));
        *(undefined4 *)(iVar2 + 0x68) = 0;
      }
      free(*(void **)(iVar2 + 0xc0));
      free(*(void **)(iVar2 + 0x70));
      free(*(void **)(iVar2 + 0xc4));
      thunk_FUN_11423ed0(iVar2,0x1d8);
      free(*(void **)(param_1 + 0x34));
    }
    pcVar3 = (char *)(*(char **)(param_1 + 0xf4));
    if ((pcVar3 != (char *)0x0) && (pcVar3 != "")) {
      pcVar4 = (char *)(pcVar3);
      do {
        cVar1 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cVar1 != '\0');
      thunk_FUN_11423f00(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    }
    *(undefined4 *)(param_1 + 0xf4) = 0;
    free(*(void **)(param_1 + 0xfc));
    thunk_FUN_11423ed0(param_1,0x130);
  }
  return;
}


// Reference entry 113db890; body size 95 bytes.
#line 1 "ENTRY_113db890"

ushort FUN_113db890(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  if ((*(char *)(*param_1 + 8) == '\0') && ((param_1[1] == 1 || (param_1[1] == 2)))) {
    return (ushort)(0);
  }
  if (param_1[0xf] != 0) {
    uVar1 = (ushort)(*(ushort *)(param_1[0xf] + 0x4bc));
    if (uVar1 != 0) {
      uVar2 = (ushort)(*(ushort *)(param_1 + 0x3c));
      if (uVar2 == 0) {
        return (ushort)(uVar1);
      }
      if (uVar1 <= uVar2) {
        uVar2 = (ushort)(uVar1);
      }
      return (ushort)(uVar2);
    }
  }
  return (ushort)(*(ushort *)(param_1 + 0x3c));
}


// Reference entry 113dbb30; body size 398 bytes.
#line 1 "ENTRY_113dbb30"

undefined4 FUN_113dbb30(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (undefined4)(2);
  case 1:
    return (undefined4)(4);
  default:
    return (undefined4)(1);
  case 4:
    return (undefined4)(0x800000);
  case 5:
    return (undefined4)(8);
  case 10:
    return (undefined4)(0x10);
  case 0xb:
    return (undefined4)(0x1000000);
  case 0xd:
    return (undefined4)(0x20);
  case 0xe:
    return (undefined4)(0x40);
  case 0xf:
    return (undefined4)(0x80);
  case 0x10:
    return (undefined4)(0x100);
  case 0x12:
    return (undefined4)(0x200);
  case 0x13:
    return (undefined4)(0x400);
  case 0x14:
    return (undefined4)(0x800);
  case 0x15:
    return (undefined4)(0x1000);
  case 0x16:
    return (undefined4)(0x2000000);
  case 0x17:
    return (undefined4)(0x4000000);
  case 0x1c:
    return (undefined4)(0x10000000);
  case 0x23:
    return (undefined4)(0x8000000);
  case 0x29:
    return (undefined4)(0x2000);
  case 0x2a:
    return (undefined4)(0x4000);
  case 0x2b:
    return (undefined4)(0x8000);
  case 0x2c:
    return (undefined4)(0x10000);
  case 0x2d:
    return (undefined4)(0x20000);
  case 0x2f:
    return (undefined4)(0x40000);
  case 0x30:
    return (undefined4)(0x80000);
  case 0x31:
    return (undefined4)(0x100000);
  case 0x32:
    return (undefined4)(0x200000);
  case 0x33:
    return (undefined4)(0x400000);
  }
}


// Reference entry 113dbe10; body size 334 bytes.
#line 1 "ENTRY_113dbe10"

int FUN_113dbe10(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_c [12];
  
  if (param_2 == 9) {
    if (param_4 < 0x20) {
      return (int)(-0x6c00);
    }
    thunk_FUN_1140d5f0(local_c);
    uVar1 = (undefined4)(thunk_FUN_1140d570(9,0));
    iVar2 = (int)(thunk_FUN_1140d620(local_c,uVar1));
    if (((iVar2 == 0) &&
        (iVar2 = thunk_FUN_1140c9f0(local_c,*(int *)(param_1 + 0x3c) + 0x4c0), iVar2 == 0)) &&
       (iVar2 = thunk_FUN_1140ccc0(local_c,param_3), iVar2 == 0)) {
      *param_5 = (undefined4)(0x20);
    }
  }
  else {
    if (param_2 != 10) {
      return (int)(-0x6c00);
    }
    if (param_4 < 0x30) {
      return (int)(-0x6c00);
    }
    thunk_FUN_1140d5f0(local_c);
    uVar1 = (undefined4)(thunk_FUN_1140d570(10,0));
    iVar2 = (int)(thunk_FUN_1140d620(local_c,uVar1));
    if (((iVar2 == 0) &&
        (iVar2 = thunk_FUN_1140c9f0(local_c,*(int *)(param_1 + 0x3c) + 0x4cc), iVar2 == 0)) &&
       (iVar2 = thunk_FUN_1140ccc0(local_c,param_3), iVar2 == 0)) {
      *param_5 = (undefined4)(0x30);
      thunk_FUN_1140cd70(local_c);
      return (int)(0);
    }
  }
  thunk_FUN_1140cd70(local_c);
  return (int)(iVar2);
}


// Reference entry 113dc080; body size 200 bytes.
#line 1 "ENTRY_113dc080"

int FUN_113dc080(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_c [12];
  
  uVar1 = (undefined4)(thunk_FUN_1140d570(param_6));
  uVar2 = (uint)(thunk_FUN_1140ce80(uVar1));
  *param_3 = (uint)(uVar2 & 0xff);
  thunk_FUN_1140d5f0(local_c);
  iVar3 = (int)(thunk_FUN_1140d620(local_c,uVar1,0));
  if (iVar3 == 0) {
    iVar3 = (int)(thunk_FUN_1140d850(local_c));
    if (iVar3 == 0) {
      iVar3 = (int)(FUN_1005ef7a(local_c,*(int *)(param_1 + 0x3c) + 0x524,0x40));
      if (iVar3 == 0) {
        iVar3 = (int)(FUN_1005ef7a(local_c,param_4,param_5));
        if (iVar3 == 0) {
          iVar3 = (int)(thunk_FUN_1140ccc0(local_c,param_2));
        }
      }
    }
  }
  thunk_FUN_1140cd70(local_c);
  if (iVar3 != 0) {
    thunk_FUN_113e5e30(param_1,2,0x50);
  }
  return (int)(iVar3);
}


// Reference entry 113dc3c0; body size 88 bytes.
#line 1 "ENTRY_113dc3c0"

int FUN_113dc3c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)(0);
  iVar1 = (int)(thunk_FUN_11412700(*(undefined1 *)(param_2 + 8)));
  if (iVar1 != 0) {
    uVar2 = (uint)(*(uint *)(iVar1 + 4) >> 0xc & 0xf);
    if (uVar2 == 2) {
      iVar3 = (int)(1);
    }
    else if (((uVar2 == 6) || (uVar2 == 8)) || (uVar2 == 0xb)) {
      iVar3 = (int)(3);
    }
    else {
      iVar3 = (int)(0);
    }
  }
  if ((param_1 != 1) || (iVar1 = 2, iVar3 != 1)) {
    iVar1 = (int)(iVar3);
  }
  return (int)(iVar1);
}


// Reference entry 113dc430; body size 103 bytes.
#line 1 "ENTRY_113dc430"

int FUN_113dc430(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = (uint)(*(uint *)(*(int *)(param_1 + 0x54) + 4));
    if ((uVar1 & 0xf000) == 0x2000) {
      iVar2 = (int)(1);
      goto LAB_113dc486;
    }
    if ((((uVar1 & 0xf000) == 0x6000) || ((uVar1 & 0xf000) == 0x8000)) ||
       ((uVar1 & 0xf000) == 0xb000)) {
      iVar2 = (int)(3);
      goto LAB_113dc486;
    }
  }
  iVar2 = (int)(0);
LAB_113dc486:
  if ((*(int *)(param_1 + 0x4c) == 1) && (iVar2 == 1)) {
    iVar2 = (int)(2);
  }
  return (int)(iVar2);
}


// Reference entry 113dca30; body size 283 bytes.
#line 1 "ENTRY_113dca30"

void FUN_113dca30(int param_1)

{
  int iVar1;
  void *pvVar2;
  void *_Memory;
  
  iVar1 = (int)(*(int *)(param_1 + 0x3c));
  if (iVar1 != 0) {
    if (*(void **)(iVar1 + 0x5d8) != (void *)0x0) {
      free(*(void **)(iVar1 + 0x5d8));
    }
    thunk_FUN_1140cd70(iVar1 + 0x4c0);
    thunk_FUN_1140cd70(iVar1 + 0x4cc);
    thunk_FUN_11434c90(iVar1 + 0x54);
    thunk_FUN_114252f0(iVar1 + 0x324);
    free(*(void **)(iVar1 + 0x420));
    *(undefined4 *)(iVar1 + 0x420) = 0;
    *(undefined4 *)(iVar1 + 0x424) = 0;
    free(*(void **)(iVar1 + 0x428));
    if (*(int *)(iVar1 + 0x42c) != 0) {
      thunk_FUN_11423f00(*(int *)(iVar1 + 0x42c),*(undefined4 *)(iVar1 + 0x430));
    }
    _Memory = (void *)(*(void **)(iVar1 + 0x43c));
    while (_Memory != (void *)0x0) {
      pvVar2 = (void *)(*(void **)((int)_Memory + 8));
      free(_Memory);
      _Memory = (void *)(pvVar2);
    }
    free(*(void **)(iVar1 + 0x48c));
    thunk_FUN_113e4820(*(undefined4 *)(iVar1 + 0x4a0));
    thunk_FUN_113e2cc0(param_1);
    if (*(char *)(iVar1 + 0x10c) == '\0') {
      thunk_FUN_114299f0(*(undefined4 *)(iVar1 + 0x108));
    }
    thunk_FUN_113e6050(*(undefined4 *)(iVar1 + 0x5dc));
    free(*(void **)(iVar1 + 0x5dc));
    thunk_FUN_113e6050(*(undefined4 *)(iVar1 + 0x6a0));
    free(*(void **)(iVar1 + 0x6a0));
    thunk_FUN_11423ed0(iVar1,0x6b0);
  }
  return;
}


// Reference entry 113dce80; body size 70 bytes.
#line 1 "ENTRY_113dce80"

void FUN_113dce80(int param_1)

{
  thunk_FUN_113dca30(param_1);
  free(*(void **)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    thunk_FUN_113e6050(*(int *)(param_1 + 0x48));
    free(*(void **)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}


// Reference entry 113dd090; body size 450 bytes.
#line 1 "ENTRY_113dd090"

undefined4 FUN_113dd090(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  
  puVar10 = (undefined4 *)(*(undefined4 **)(*param_1 + 0xa0));
  if (puVar10 == (undefined4 *)0x0) {
    return (undefined4)(0);
  }
  uVar14 = (undefined8)(FUN_113da450(param_2,param_3,4));
  puVar6 = (undefined2 *)((undefined2 *)((ulonglong)uVar14 >> 0x20));
  if ((int)uVar14 == 0) {
    uVar4 = (undefined2)(*puVar6);
    uVar12 = (uint)((uint)((uint)((char)uVar4) << 8 | (uint)((char)((ushort)uVar4 >> 8))));
    uVar14 = (undefined8)(FUN_113da450(puVar6 + 1,param_3,uVar12));
    pbVar7 = (byte *)((byte *)((ulonglong)uVar14 >> 0x20));
    if ((int)uVar14 == 0) {
      pbVar2 = (byte *)(pbVar7 + uVar12);
      pbVar8 = (byte *)(pbVar7);
      do {
        if (pbVar2 <= pbVar8) {
          pcVar11 = (char *)((char *)*puVar10);
          do {
            if (pcVar11 == (char *)0x0) {
              thunk_FUN_113e50f0(param_1,0x78,0xffff8a80);
              return (undefined4)(0xffff8a80);
            }
            pcVar1 = (char *)(pcVar11 + 1);
            do {
              cVar3 = (char)(*pcVar11);
              pcVar11 = (char *)(pcVar11 + 1);
            } while (cVar3 != '\0');
            for (pbVar8 = (byte *)(pbVar7); pbVar8 < pbVar2; pbVar8 = pbVar8 + 1 + *pbVar8) {
              if ((uint)*pbVar8 == (int)pcVar11 - (int)pcVar1) {
                pbVar9 = (byte *)(pbVar8 + 1);
                pbVar13 = (byte *)((byte *)*puVar10);
                uVar12 = (uint)((int)pcVar11 - (int)pcVar1);
                while (uVar5 = uVar12 - 4, 3 < uVar12) {
                  if (*(int *)pbVar9 != *(int *)pbVar13) goto LAB_113dd18a;
                  pbVar9 = (byte *)(pbVar9 + 4);
                  pbVar13 = (byte *)(pbVar13 + 4);
                  uVar12 = (uint)(uVar5);
                }
                if (uVar5 == 0xfffffffc) {
LAB_113dd21d:
                  param_1[0x3e] = (int)((int)*puVar10);
                  return (undefined4)(0);
                }
LAB_113dd18a:
                if ((*pbVar9 == *pbVar13) &&
                   ((uVar5 == 0xfffffffd ||
                    ((pbVar9[1] == pbVar13[1] &&
                     ((uVar5 == 0xfffffffe ||
                      ((pbVar9[2] == pbVar13[2] &&
                       ((uVar5 == 0xffffffff || (pbVar9[3] == pbVar13[3]))))))))))))
                goto LAB_113dd21d;
              }
            }
            pcVar11 = (char *)((char *)puVar10[1]);
            puVar10 = (undefined4 *)(puVar10 + 1);
          } while( true );
        }
        uVar12 = (uint)((uint)*pbVar8);
        uVar14 = (undefined8)(FUN_113da450(pbVar8 + 1,pbVar2,uVar12));
        if ((int)uVar14 != 0) break;
        if (uVar12 == 0) {
          thunk_FUN_113e50f0(param_1,0x2f,0xffff9a00);
          return (undefined4)(0xffff9a00);
        }
        pbVar8 = (byte *)((byte *)((int)((ulonglong)uVar14 >> 0x20) + uVar12));
      } while( true );
    }
  }
  thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
  return (undefined4)(0xffff8d00);
}


// Reference entry 113dd4d0; body size 347 bytes.
#line 1 "ENTRY_113dd4d0"

void FUN_113dd4d0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 local_10;
  int iStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_10);
  iVar2 = (int)((**(code **)(param_1[0xf] + 0x1c))(param_1,&local_10,*(byte *)(*param_1 + 8) ^ 1));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_113e56d0(param_1,1));
    if (iVar2 == 0) {
      if ((param_1[0x1f] == 0x16) && (*(char *)param_1[0x1d] == '\x14')) {
        if (param_1[0x2a] == (uint)(*(char *)(*param_1 + 9) == '\x01') * 8 + 0x10) {
          iVar2 = (int)(thunk_FUN_114351b0((char *)param_1[0x1d] +
                                     (uint)(*(char *)(*param_1 + 9) == '\x01') * 8 + 4,&local_10,0xc
                                    ));
          if (iVar2 == 0) {
            param_1[0x42] = (int)(0xc);
            *(undefined8 *)(param_1 + 0x46) = local_10;
            param_1[0x48] = (int)(iStack_8);
            iVar2 = (int)(*param_1);
            if (*(char *)param_1[0xf] == '\0') {
              param_1[1] = (int)(param_1[1] + 1);
            }
            else {
              cVar1 = (char)(*(char *)(iVar2 + 8));
              if (cVar1 == '\0') {
                param_1[1] = (int)(10);
                cVar1 = (char)(*(char *)(iVar2 + 8));
              }
              if (cVar1 == '\x01') {
                param_1[1] = (int)(0xf);
              }
            }
            if (*(char *)(iVar2 + 9) == '\x01') {
              thunk_FUN_113e5bd0(param_1);
            }
          }
          else {
            thunk_FUN_113e5e30(param_1,2,0x33);
          }
        }
        else {
          thunk_FUN_113e5e30(param_1,2,0x32);
        }
      }
      else {
        thunk_FUN_113e5e30(param_1,2,10);
      }
    }
    thunk_FUN_11423ed0(&local_10,0xc);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113dd7b0; body size 368 bytes.
#line 1 "ENTRY_113dd7b0"

undefined4 FUN_113dd7b0(int *param_1,undefined2 *param_2,undefined2 *param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  int local_8;
  
  local_8 = (int)(0);
  iVar6 = (int)(FUN_113da450(param_2,param_3,2));
  if (iVar6 == 0) {
    uVar3 = (undefined2)(*param_2);
    puVar9 = (undefined2 *)(param_2 + 1);
    iVar6 = (int)(param_1[0xf]);
    *(undefined4 *)(iVar6 + 0x2c) = 0;
    *(undefined4 *)(iVar6 + 0x30) = 0;
    *(undefined4 *)(iVar6 + 0x34) = 0;
    *(undefined4 *)(iVar6 + 0x38) = 0;
    *(undefined4 *)(iVar6 + 0x3c) = 0;
    *(undefined4 *)(iVar6 + 0x40) = 0;
    *(undefined4 *)(iVar6 + 0x44) = 0;
    *(undefined4 *)(iVar6 + 0x48) = 0;
    *(undefined8 *)(iVar6 + 0x4c) = 0;
    uVar10 = (undefined8)(FUN_113da450(puVar9,param_3,((uint)((char)uVar3) << 8 | (uint)((char)((ushort)uVar3 >> 8)))));
    if ((int)uVar10 == 0) {
      puVar2 = (undefined2 *)((undefined2 *)((int)((ulonglong)uVar10 >> 0x20) + (int)puVar9));
      iVar6 = (int)(0);
      if (puVar9 < puVar2) {
        uVar8 = (uint)(1);
        param_2 = (undefined2 *)((undefined2 *)0x2c);
        do {
          uVar10 = (undefined8)(FUN_113da450(puVar9,puVar2,2));
          if ((int)uVar10 != 0) goto LAB_113dd903;
          uVar3 = (undefined2)(*puVar9);
          puVar9 = (undefined2 *)(puVar9 + 1);
          sVar5 = (short)(((uint)((char)uVar3) << 8 | (uint)((char)((ushort)uVar3 >> 8))));
          iVar6 = (int)((int)((ulonglong)uVar10 >> 0x20));
          if (param_1[2] == 0x303) {
            iVar6 = (int)(FUN_113dee90(param_1,sVar5));
            if ((iVar6 != 0) && (psVar7 = *(short **)(*param_1 + 0x80), psVar7 != (short *)0x0)) {
              sVar4 = (short)(*psVar7);
              while (sVar4 != 0) {
                iVar6 = (int)((int)param_2);
                if (sVar4 == sVar5) goto LAB_113dd8d0;
                psVar1 = (short *)(psVar7 + 1);
                psVar7 = (short *)(psVar7 + 1);
                sVar4 = (short)(*psVar1);
              }
            }
          }
          else {
LAB_113dd8d0:
            if (uVar8 < 0x14) {
              *(short *)(iVar6 + param_1[0xf]) = sVar5;
              param_2 = (undefined2 *)((undefined2 *)(iVar6 + 2));
              local_8 = (int)(local_8 + 1);
              uVar8 = (uint)(uVar8 + 1);
            }
          }
          iVar6 = (int)(local_8);
        } while (puVar9 < puVar2);
      }
      if (puVar9 == (undefined2 *)(param_3)) {
        if (iVar6 == 0) {
          thunk_FUN_113e50f0(param_1,0x28,0xffff9200);
          return (undefined4)(0xffff9200);
        }
        *(undefined2 *)(param_1[0xf] + 0x2c + iVar6 * 2) = 0;
        return (undefined4)(0);
      }
    }
  }
LAB_113dd903:
  thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
  return (undefined4)(0xffff8d00);
}


// Reference entry 113dd9b0; body size 232 bytes.
#line 1 "ENTRY_113dd9b0"

int FUN_113dd9b0(int *param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  uint _Size;
  undefined2 *puVar4;
  undefined2 *_Dst;
  int local_4;
  
  iVar2 = (int)(param_1[0xf]);
  _Src = (void *)(*(void **)(iVar2 + 0x42c));
  puVar1 = (undefined2 *)((undefined2 *)(iVar2 + 0x5c8));
  if ((_Src == (void *)0x0) || (_Size = *(uint *)(iVar2 + 0x430), _Size == 0)) {
    _Src = (void *)(*(void **)(*param_1 + 0x88));
    if (_Src == (void *)0x0) {
      return (int)(-0x6c00);
    }
    _Size = (uint)(*(uint *)(*param_1 + 0x8c));
    if (_Size == 0) {
      return (int)(-0x6c00);
    }
  }
  if (param_2 != 8) {
    return (int)(-0x6c00);
  }
  iVar3 = (int)(thunk_FUN_11434a60(iVar2 + 0x54,&local_4,iVar2 + 0x566,0x62,
                             *(undefined4 *)(*param_1 + 0x28),*(undefined4 *)(*param_1 + 0x2c)));
  if (iVar3 == 0) {
    *(short *)(iVar2 + 0x564) = (short)((uint)((int3)local_4) << 8 | (uint)((char)((uint)local_4 >> 8)));
    puVar4 = (undefined2 *)((undefined2 *)(iVar2 + 0x566 + local_4));
    if (1 < (int)puVar1 - (int)puVar4) {
      *puVar4 = (undefined2)((short)((uint)((int3)_Size) << 8 | (uint)((char)(_Size >> 8))));
      _Dst = (undefined2 *)(puVar4 + 1);
      if ((_Dst <= puVar1) && (_Size <= (uint)((int)puVar1 - (int)_Dst))) {
        memcpy(_Dst,_Src,_Size);
        *(uint *)(param_1[0xf] + 0x5c8) = (int)puVar4 + (_Size - param_1[0xf]) + -0x562;
        return (int)(0);
      }
    }
    return (int)(-0x7100);
  }
  return (int)(iVar3);
}


// Reference entry 113ddae0; body size 176 bytes.
#line 1 "ENTRY_113ddae0"

void FUN_113ddae0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  thunk_FUN_1140cd70(*(int *)(param_1 + 0x3c) + 0x4c0);
  thunk_FUN_1140d5f0(*(int *)(param_1 + 0x3c) + 0x4c0);
  uVar1 = (undefined4)(thunk_FUN_1140d570(9,0));
  iVar2 = (int)(thunk_FUN_1140d620(*(int *)(param_1 + 0x3c) + 0x4c0,uVar1));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_1140d850(*(int *)(param_1 + 0x3c) + 0x4c0));
    if (iVar2 == 0) {
      thunk_FUN_1140cd70(*(int *)(param_1 + 0x3c) + 0x4cc);
      thunk_FUN_1140d5f0(*(int *)(param_1 + 0x3c) + 0x4cc);
      uVar1 = (undefined4)(thunk_FUN_1140d570(10,0));
      iVar2 = (int)(thunk_FUN_1140d620(*(int *)(param_1 + 0x3c) + 0x4cc,uVar1));
      if (iVar2 == 0) {
        thunk_FUN_1140d850();
        return;
      }
    }
  }
  return;
}


// Reference entry 113dde70; body size 82 bytes.
#line 1 "ENTRY_113dde70"

void FUN_113dde70(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x68) != 0) {
      thunk_FUN_11401680(*(int *)(param_1 + 0x68));
      free(*(void **)(param_1 + 0x68));
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    free(*(void **)(param_1 + 0xc0));
    free(*(void **)(param_1 + 0x70));
    free(*(void **)(param_1 + 0xc4));
    thunk_FUN_11423ed0(param_1,0x1d8);
  }
  return;
}


// Reference entry 113de340; body size 366 bytes.
#line 1 "ENTRY_113de340"

void FUN_113de340(int param_1,int param_2)

{
  thunk_FUN_113e5fd0(param_1,0);
  thunk_FUN_113e5d40(param_1);
  thunk_FUN_113e5db0(param_1);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    memset(*(void **)(param_1 + 0x60),0,0x414d);
  }
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  memset(*(void **)(param_1 + 0xc4),0,0x414d);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  thunk_FUN_113e3a50(param_1);
  if (*(int *)(param_1 + 0x48) != 0) {
    thunk_FUN_113e6050(*(int *)(param_1 + 0x48));
    free(*(void **)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  thunk_FUN_113e6050(*(undefined4 *)(param_1 + 0x50));
  free(*(void **)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_113e6050(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x6a0));
    free(*(void **)(*(int *)(param_1 + 0x3c) + 0x6a0));
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x6a0) = 0;
    thunk_FUN_113e6050(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x5dc));
    free(*(void **)(*(int *)(param_1 + 0x3c) + 0x5dc));
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x5dc) = 0;
  }
  return;
}


// Reference entry 113de610; body size 151 bytes.
#line 1 "ENTRY_113de610"

undefined4 FUN_113de610(int param_1,char *param_2)

{
  char cVar1;
  void *_Dst;
  char *pcVar2;
  size_t _Size;
  char *pcVar3;
  
  _Size = (size_t)(0);
  if (param_2 != (char *)0x0) {
    pcVar3 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar3 - (int)(param_2 + 1));
    if (0xff < _Size) {
      return (undefined4)(0xffff8f00);
    }
  }
  pcVar3 = (char *)(*(char **)(param_1 + 0xc0));
  if (pcVar3 != (char *)0x0) {
    pcVar2 = (char *)(pcVar3);
    do {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)(pcVar2 + 1);
    } while (cVar1 != '\0');
    thunk_FUN_11423f00(pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  }
  if (param_2 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    return (undefined4)(0);
  }
  _Dst = (void *)(calloc(1,_Size + 1));
  *(void **)(param_1 + 0xc0) = _Dst;
  if (_Dst == (void *)0x0) {
    return (undefined4)(0xffff8100);
  }
  memcpy(_Dst,param_2,_Size);
  return (undefined4)(0);
}


// Reference entry 113de6d0; body size 149 bytes.
#line 1 "ENTRY_113de6d0"

undefined4 FUN_113de6d0(int param_1,char *param_2)

{
  char cVar1;
  void *_Dst;
  char *pcVar2;
  size_t _Size;
  char *pcVar3;
  
  _Size = (size_t)(0);
  if (param_2 != (char *)0x0) {
    pcVar3 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar3 - (int)(param_2 + 1));
    if (0xff < _Size) {
      return (undefined4)(0xffff8f00);
    }
  }
  pcVar3 = (char *)(*(char **)(param_1 + 0xc4));
  if (pcVar3 != (char *)0x0) {
    pcVar2 = (char *)(pcVar3);
    do {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)(pcVar2 + 1);
    } while (cVar1 != '\0');
    thunk_FUN_11423f00(pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  if (param_2 != (char *)0x0) {
    _Dst = (void *)(calloc(_Size + 1,1));
    *(void **)(param_1 + 0xc4) = _Dst;
    if (_Dst == (void *)0x0) {
      return (undefined4)(0xffff8100);
    }
    memcpy(_Dst,param_2,_Size);
  }
  return (undefined4)(0);
}


// Reference entry 113dea50; body size 170 bytes.
#line 1 "ENTRY_113dea50"

undefined4 FUN_113dea50(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  
  if (param_2 != (void *)0x0) {
    iVar1 = (int)(*(int *)(param_1 + 0x3c));
    if ((iVar1 != 0) && (param_3 < 0x31)) {
      if (*(int *)(iVar1 + 0x42c) != 0) {
        thunk_FUN_11423f00(*(int *)(iVar1 + 0x42c),*(undefined4 *)(iVar1 + 0x430));
        *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x430) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x42c) = 0;
      }
      pvVar2 = (void *)(calloc(1,param_3));
      *(void **)(*(int *)(param_1 + 0x3c) + 0x42c) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return (undefined4)(0xffff8100);
      }
      *(uint *)(*(int *)(param_1 + 0x3c) + 0x430) = param_3;
      memcpy(*(void **)(*(int *)(param_1 + 0x3c) + 0x42c),param_2,
             *(size_t *)(*(int *)(param_1 + 0x3c) + 0x430));
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffff8f00);
}


// Reference entry 113df0d0; body size 94 bytes.
#line 1 "ENTRY_113df0d0"

ushort FUN_113df0d0(int param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = (int)(0);
    uVar2 = (ushort)(*(ushort *)(*(int *)(param_1 + 0x3c) + 0x2c));
    while (uVar2 != 0) {
      switch(uVar2 >> 8) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        if (param_2 == (uVar2 & 0xff)) {
          return (ushort)(uVar2 >> 8);
        }
      }
      iVar1 = (int)(iVar3 * 2);
      iVar3 = (int)(iVar3 + 1);
      uVar2 = (ushort)(*(ushort *)(*(int *)(param_1 + 0x3c) + 0x2e + iVar1));
    }
  }
  return (ushort)(0);
}


// Reference entry 113df6a0; body size 99 bytes.
#line 1 "ENTRY_113df6a0"

undefined4 FUN_113df6a0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_2 == 0) || (param_4 < (int)(uint)*(ushort *)(param_2 + 0xc))) ||
     ((int)(uint)*(ushort *)(param_2 + 0xe) < param_3)) {
    return (undefined4)(0xffffffff);
  }
  if ((*(char *)(param_2 + 10) == '\v') &&
     (iVar1 = thunk_FUN_11424fd0(param_1[0xf] + 0x324), iVar1 != 0)) {
    return (undefined4)(0xffffffff);
  }
  iVar1 = (int)(thunk_FUN_113ea020(param_2));
  if ((iVar1 != 0) && (iVar1 = thunk_FUN_113da960(*param_1), iVar1 == 0)) {
    return (undefined4)(0xffffffff);
  }
  return (undefined4)(0);
}


// Reference entry 113dfb10; body size 151 bytes.
#line 1 "ENTRY_113dfb10"

undefined4 FUN_113dfb10(int param_1,undefined2 *param_2,undefined2 *param_3,uint *param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  size_t _Size;
  
  *param_4 = (uint)(0);
  pcVar3 = (char *)(*(char **)(param_1 + 0xf8));
  if (pcVar3 == (char *)0x0) {
    return (undefined4)(0);
  }
  pcVar1 = (char *)(pcVar3 + 1);
  do {
    cVar2 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar2 != '\0');
  _Size = (size_t)((int)pcVar3 - (int)pcVar1);
  if ((param_2 <= param_3) && (_Size + 7 <= (uint)((int)param_3 - (int)param_2))) {
    *param_2 = (undefined2)(0x1000);
    *param_4 = (uint)(_Size + 7);
    param_2[1] = (undefined2)((short)((uint)((int3)(_Size + 3)) << 8 | (uint)((char)(_Size + 3 >> 8))));
    param_2[2] = (undefined2)((short)((uint)((int3)(_Size + 1)) << 8 | (uint)((char)(_Size + 1 >> 8))));
    *(char *)(param_2 + 3) = (char)_Size;
    memcpy((void *)((int)param_2 + 7),*(void **)(param_1 + 0xf8),_Size);
    *(uint *)(*(int *)(param_1 + 0x3c) + 0x5cc) =
         *(uint *)(*(int *)(param_1 + 0x3c) + 0x5cc) | 0x100;
    return (undefined4)(0);
  }
  return (undefined4)(0xffff9600);
}


// Reference entry 113e0200; body size 189 bytes.
#line 1 "ENTRY_113e0200"

int FUN_113e0200(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 local_c [12];
  
  thunk_FUN_1140d5f0(local_c);
  iVar4 = (int)(*(int *)(param_1 + 0x38));
  if (iVar4 == 0) {
    iVar4 = (int)(*(int *)(param_1 + 0x34));
  }
  uVar1 = (undefined4)(thunk_FUN_1140d470(param_2,0));
  iVar2 = (int)(thunk_FUN_1140d620(local_c,uVar1));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_1140c9f0(local_c,param_2));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_1140ccc0(local_c,param_3));
      if (iVar2 == 0) {
        pcVar3 = (char *)("client finished");
        if (param_6 != 0) {
          pcVar3 = (char *)("server finished");
        }
        (**(code **)(*(int *)(param_1 + 0x3c) + 0x20))
                  (iVar4 + 0x38,0x30,pcVar3,param_3,param_4,param_5,0xc);
        thunk_FUN_11423ed0(param_3,param_4);
      }
    }
  }
  thunk_FUN_1140cd70(local_c);
  return (int)(iVar2);
}


// Reference entry 113e03b0; body size 140 bytes.
#line 1 "ENTRY_113e03b0"

int FUN_113e03b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_c [12];
  
  thunk_FUN_1140d5f0(local_c);
  uVar1 = (undefined4)(thunk_FUN_1140d470(param_2,0));
  iVar2 = (int)(thunk_FUN_1140d620(local_c,uVar1));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_1140c9f0(local_c,param_2));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_1140ccc0(local_c,param_3));
      if (iVar2 == 0) {
        uVar1 = (undefined4)(thunk_FUN_1140d470(param_2));
        uVar3 = (uint)(thunk_FUN_1140ce80(uVar1));
        *param_4 = (uint)(uVar3 & 0xff);
      }
    }
  }
  thunk_FUN_1140cd70(local_c);
  return (int)(iVar2);
}


// Reference entry 113e04f0; body size 181 bytes.
#line 1 "ENTRY_113e04f0"

void FUN_113e04f0(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 local_3c;
  undefined4 local_38;
  char local_34 [48];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_3c);
  pcVar2 = (char *)("master secret");
  local_38 = (undefined4)(param_2);
  local_3c = (undefined4)(0x40);
  pcVar3 = (char *)(param_1 + 0x524);
  if (*param_1 != '\0') {
    thunk_FUN_1148ac28();
    return;
  }
  if (param_1[0xc] == '\x01') {
    pcVar2 = (char *)("extended master secret");
    pcVar3 = (char *)(local_34);
    (**(code **)(param_1 + 0x18))(param_3,pcVar3,&local_3c);
  }
  iVar1 = (int)((**(code **)(param_1 + 0x20))
                    (param_1 + 0x564,*(undefined4 *)(param_1 + 0x5c8),pcVar2,pcVar3,local_3c,
                     local_38,0x30));
  if (iVar1 == 0) {
    thunk_FUN_11423ed0(param_1 + 0x564,100);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113e07b0; body size 149 bytes.
#line 1 "ENTRY_113e07b0"

int FUN_113e07b0(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_c [12];
  
  if (param_3 < 0x20) {
    return (int)(-0x6c00);
  }
  thunk_FUN_1140d5f0(local_c);
  uVar1 = (undefined4)(thunk_FUN_1140d570(9,0));
  iVar2 = (int)(thunk_FUN_1140d620(local_c,uVar1));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_1140c9f0(local_c,*(int *)(param_1 + 0x3c) + 0x4c0));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_1140ccc0(local_c,param_2));
      if (iVar2 == 0) {
        *param_4 = (undefined4)(0x20);
      }
    }
  }
  thunk_FUN_1140cd70(local_c);
  return (int)(iVar2);
}


// Reference entry 113e0870; body size 149 bytes.
#line 1 "ENTRY_113e0870"

int FUN_113e0870(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_c [12];
  
  if (param_3 < 0x30) {
    return (int)(-0x6c00);
  }
  thunk_FUN_1140d5f0(local_c);
  uVar1 = (undefined4)(thunk_FUN_1140d570(10,0));
  iVar2 = (int)(thunk_FUN_1140d620(local_c,uVar1));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_1140c9f0(local_c,*(int *)(param_1 + 0x3c) + 0x4cc));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_1140ccc0(local_c,param_2));
      if (iVar2 == 0) {
        *param_4 = (undefined4)(0x30);
      }
    }
  }
  thunk_FUN_1140cd70(local_c);
  return (int)(iVar2);
}


// Reference entry 113e2b40; body size 93 bytes.
#line 1 "ENTRY_113e2b40"

int FUN_113e2b40(uint param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = (uint)(DAT_122fa560 ^ param_2);
  uVar1 = (uint)((int)(-(DAT_122fa560 >> 1) | -((param_2 ^ DAT_122fa560 ^ param_1) >> 0x1f ^ DAT_122fa560))
          >> 0x1f);
  return (int)(-1 - ((int)(-(DAT_122fa560 >> 1) |
                    -(DAT_122fa560 ^
                     ((DAT_122fa560 ^ param_1) - param_2 & ~(DAT_122fa560 ^ uVar1) | uVar1 & param_2
                     ) >> 0x1f)) >> 0x1f));
}


// Reference entry 113e2cc0; body size 136 bytes.
#line 1 "ENTRY_113e2cc0"

void FUN_113e2cc0(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (int)(*(int *)(param_1 + 0x3c));
  if (iVar3 != 0) {
    if (*(void **)(iVar3 + 0x480) != (void *)0x0) {
      *(int *)(iVar3 + 0x448) = *(int *)(iVar3 + 0x448) - *(int *)(iVar3 + 0x484);
      free(*(void **)(iVar3 + 0x480));
      *(undefined4 *)(iVar3 + 0x480) = 0;
    }
    uVar4 = (uint)(0);
    do {
      pbVar2 = (byte *)((byte *)(*(int *)(param_1 + 0x3c) + ((uVar4 & 0xff) + 0x5c) * 0xc));
      if (((byte)uVar4 < 4) && ((*pbVar2 & 1) != 0)) {
        piVar1 = (int *)((int *)(*(int *)(param_1 + 0x3c) + 0x448));
        *piVar1 = (int)(*piVar1 - *(int *)(pbVar2 + 8));
        thunk_FUN_11423f00(*(undefined4 *)(pbVar2 + 4),*(undefined4 *)(pbVar2 + 8));
        pbVar2[0] = (byte)(0);
        pbVar2[1] = (byte)(0);
        pbVar2[2] = (byte)(0);
        pbVar2[3] = (byte)(0);
        pbVar2[4] = (byte)(0);
        pbVar2[5] = (byte)(0);
        pbVar2[6] = (byte)(0);
        pbVar2[7] = (byte)(0);
        pbVar2[8] = (byte)(0);
        pbVar2[9] = (byte)(0);
        pbVar2[10] = (byte)(0);
        pbVar2[0xb] = (byte)(0);
      }
      uVar4 = (uint)(uVar4 + 1);
    } while (uVar4 < 4);
  }
  return;
}


// Reference entry 113e2f30; body size 68 bytes.
#line 1 "ENTRY_113e2f30"

undefined4 FUN_113e2f30(int *param_1)

{
  if ((((param_1[0x2c] != 1) &&
       ((*(char *)(*param_1 + 9) != '\x01' || ((uint)param_1[0x21] <= (uint)param_1[0x23])))) &&
      ((param_1[0x2a] == 0 || ((uint)param_1[0x20] <= (uint)param_1[0x2a])))) &&
     (param_1[0x1e] == 0)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 113e4cb0; body size 95 bytes.
#line 1 "ENTRY_113e4cb0"

int FUN_113e4cb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x44));
  iVar3 = (int)(*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xcc));
  if (piVar1 == (int *)0x0) {
    return (int)(iVar3);
  }
  iVar2 = (int)(piVar1[0x15]);
  if (iVar2 != 0) {
    switch(*(uint *)(iVar2 + 4) >> 0xc & 0xf) {
    case 2:
      return (int)(piVar1[3] + (*(uint *)(iVar2 + 4) & 0x1f) * 2 + iVar3);
    case 6:
    case 7:
    case 8:
    case 0xb:
      return (int)(*piVar1 + iVar3);
    }
  }
  return (int)(-0x6c00);
}


// Reference entry 113e5bd0; body size 274 bytes.
#line 1 "ENTRY_113e5bd0"

void FUN_113e5bd0(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *_Memory;
  
  iVar4 = (int)(*(int *)(param_1 + 0x3c));
  _Memory = (undefined4 *)(*(undefined4 **)(iVar4 + 0x4a0));
  if (_Memory != (undefined4 *)0x0) {
    do {
      puVar3 = (undefined4 *)((undefined4 *)_Memory[3]);
      free((void *)*_Memory);
      free(_Memory);
      _Memory = (undefined4 *)(puVar3);
    } while (puVar3 != (undefined4 *)0x0);
    iVar4 = (int)(*(int *)(param_1 + 0x3c));
  }
  *(undefined4 *)(iVar4 + 0x4a0) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x4a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x4ac) =
       *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x498);
  *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x44c) = 0;
  iVar4 = (int)(*(int *)(param_1 + 0x3c));
  if (iVar4 != 0) {
    if (*(void **)(iVar4 + 0x480) != (void *)0x0) {
      *(int *)(iVar4 + 0x448) = *(int *)(iVar4 + 0x448) - *(int *)(iVar4 + 0x484);
      free(*(void **)(iVar4 + 0x480));
      *(undefined4 *)(iVar4 + 0x480) = 0;
    }
    uVar5 = (uint)(0);
    do {
      pbVar2 = (byte *)((byte *)(*(int *)(param_1 + 0x3c) + ((uVar5 & 0xff) + 0x5c) * 0xc));
      if (((byte)uVar5 < 4) && ((*pbVar2 & 1) != 0)) {
        piVar1 = (int *)((int *)(*(int *)(param_1 + 0x3c) + 0x448));
        *piVar1 = (int)(*piVar1 - *(int *)(pbVar2 + 8));
        thunk_FUN_11423f00(*(undefined4 *)(pbVar2 + 4),*(undefined4 *)(pbVar2 + 8));
        pbVar2[0] = (byte)(0);
        pbVar2[1] = (byte)(0);
        pbVar2[2] = (byte)(0);
        pbVar2[3] = (byte)(0);
        pbVar2[4] = (byte)(0);
        pbVar2[5] = (byte)(0);
        pbVar2[6] = (byte)(0);
        pbVar2[7] = (byte)(0);
        pbVar2[8] = (byte)(0);
        pbVar2[9] = (byte)(0);
        pbVar2[10] = (byte)(0);
        pbVar2[0xb] = (byte)(0);
      }
      uVar5 = (uint)(uVar5 + 1);
    } while (uVar5 < 4);
  }
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x54),0,0);
  }
  if ((*(int *)(param_1 + 0x7c) == 0x16) && (**(char **)(param_1 + 0x74) == '\x14')) {
    *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0xd) = 3;
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0xd) = 0;
  return;
}


// Reference entry 113e5f20; body size 83 bytes.
#line 1 "ENTRY_113e5f20"

void FUN_113e5f20(int *param_1)

{
  *(undefined4 *)(param_1[0xf] + 0x49c) = *(undefined4 *)(*param_1 + 0xa8);
  if ((code *)param_1[0x16] != (code *)0x0) {
    (*(code *)param_1[0x16])
              (param_1[0x15],*(uint *)(param_1[0xf] + 0x49c) >> 2,*(uint *)(param_1[0xf] + 0x49c));
  }
  if ((param_1[0x1f] == 0x16) && (*(char *)param_1[0x1d] == '\x14')) {
    *(undefined1 *)(param_1[0xf] + 0xd) = 3;
    return;
  }
  *(undefined1 *)(param_1[0xf] + 0xd) = 2;
  return;
}


// Reference entry 113e6ac0; body size 65 bytes.
#line 1 "ENTRY_113e6ac0"

void FUN_113e6ac0(undefined2 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  
  if (param_2 == 1) {
    uVar1 = (ushort)(~((short)param_3 - ((param_3 == 0x302) + 0x201)));
    *param_1 = (undefined2)(((uint)((char)uVar1) << 8 | (uint)((char)(uVar1 >> 8))));
    return;
  }
  *param_1 = (undefined2)((short)((uint)((int3)param_3) << 8 | (uint)((char)((uint)param_3 >> 8))));
  return;
}


// Reference entry 113e8030; body size 215 bytes.
#line 1 "ENTRY_113e8030"

uint FUN_113e8030(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = (uint)(thunk_FUN_113dc4b0(param_1));
  uVar1 = (uint)(*(uint *)(param_1 + 0xe4));
  uVar6 = (uint)(0x4000);
  if (uVar3 < 0x4000) {
    uVar6 = (uint)(uVar3);
  }
  if (uVar6 <= uVar1) {
    return (uint)(0);
  }
  uVar3 = (uint)(thunk_FUN_113db890(param_1));
  if ((uVar3 == 0) || (0x414c < uVar3)) {
    uVar3 = (uint)(0x414d);
  }
  if (uVar3 < uVar1) {
    return (uint)(0xffff9400);
  }
  uVar3 = (uint)(uVar3 - uVar1);
  if ((int)uVar3 < 0) {
    return (uint)(uVar3);
  }
  piVar2 = (int *)(*(int **)(param_1 + 0x44));
  uVar5 = (uint)(*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xcc));
  if (piVar2 != (int *)0x0) {
    iVar4 = (int)(piVar2[0x15]);
    if (iVar4 == 0) {
LAB_113e80f9:
      return (uint)(0xffff9400);
    }
    switch(*(uint *)(iVar4 + 4) >> 0xc & 0xf) {
    case 2:
      iVar4 = (int)(piVar2[3] + (*(uint *)(iVar4 + 4) & 0x1f) * 2);
      break;
    default:
      goto LAB_113e80f9;
    case 6:
    case 7:
    case 8:
    case 0xb:
      iVar4 = (int)(*piVar2);
    }
    uVar5 = (uint)(uVar5 + iVar4);
  }
  if ((int)uVar5 < 0) {
    return (uint)(uVar5);
  }
  if (uVar3 <= uVar5) {
    return (uint)(0);
  }
  uVar7 = (uint)(uVar6 - uVar1);
  if (uVar3 - uVar5 < uVar6 - uVar1) {
    uVar7 = (uint)(uVar3 - uVar5);
  }
  return (uint)(uVar7);
}


// Reference entry 113e8530; body size 66 bytes.
#line 1 "ENTRY_113e8530"

undefined4 FUN_113e8530(int param_1)

{
  int iVar1;
  
  if ((((*(uint *)(param_1 + 0xa8) <= *(uint *)(param_1 + 0x80)) &&
       (iVar1 = *(int *)(param_1 + 0x74), *(short *)(iVar1 + 6) == 0)) &&
      (*(char *)(iVar1 + 8) == '\0')) &&
     ((*(short *)(iVar1 + 9) == *(short *)(iVar1 + 1) &&
      (*(char *)(iVar1 + 0xb) == *(char *)(iVar1 + 3))))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 113e9120; body size 131 bytes.
#line 1 "ENTRY_113e9120"

uint FUN_113e9120(int *param_1,void *param_2,uint param_3)

{
  uint _Size;
  uint uVar1;
  
  _Size = (uint)(thunk_FUN_113dc210(param_1));
  if (-1 < (int)_Size) {
    if ((_Size < param_3) && (param_3 = _Size, *(char *)(*param_1 + 9) == '\x01')) {
      return (uint)(0xffff8f00);
    }
    _Size = (uint)(param_3);
    if (param_1[0x39] == 0) {
      param_1[0x38] = (int)(_Size);
      param_1[0x37] = (int)(0x17);
      if (_Size != 0) {
        memcpy((void *)param_1[0x36],param_2,_Size);
      }
      uVar1 = (uint)(thunk_FUN_113e6740(param_1,1));
      if (uVar1 != 0) {
        return (uint)(uVar1);
      }
    }
    else {
      uVar1 = (uint)(thunk_FUN_113e4be0(param_1));
      if (uVar1 != 0) {
        return (uint)(uVar1);
      }
    }
  }
  return (uint)(_Size);
}


// Reference entry 113edf30; body size 124 bytes.
#line 1 "ENTRY_113edf30"

undefined4 FUN_113edf30(undefined4 *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_8;
  int *local_4;
  
  local_8 = (undefined4)(*param_1);
  local_4 = (int *)((int *)param_1[1]);
  iVar2 = (int)(thunk_FUN_1140b1f0(&local_8));
  piVar4 = (int *)(local_4);
  if (((iVar2 != 2) && (iVar2 != 3)) && (iVar2 != 4)) {
    piVar4 = (int *)((int *)0x0);
  }
  sVar1 = (short)(*param_2);
  iVar2 = (int)(*piVar4);
  while( true ) {
    if (sVar1 == 0) {
      return (undefined4)(0xffffffff);
    }
    iVar3 = (int)(thunk_FUN_113db910(sVar1));
    if (iVar3 == iVar2) break;
    sVar1 = (short)(param_2[1]);
    param_2 = (short *)(param_2 + 1);
  }
  return (undefined4)(0);
}


// Reference entry 113eff60; body size 296 bytes.
#line 1 "ENTRY_113eff60"

undefined4 FUN_113eff60(int *param_1,undefined4 param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  int *piVar8;
  undefined4 local_c;
  undefined4 local_8;
  int *local_4;
  
  iVar3 = (int)(thunk_FUN_113ea140(param_2));
  piVar8 = (int *)(*(int **)(param_1[0xf] + 0x43c));
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)(*(int **)(*param_1 + 0x74));
  }
  if (iVar3 == 0) {
    return (undefined4)(0);
  }
  do {
    if (piVar8 == (int *)0x0) {
      return (undefined4)(0xffffffff);
    }
    local_c = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_1140abd0(*piVar8 + 0xcc,iVar3));
    if ((iVar4 != 0) && (iVar4 = thunk_FUN_113da280(*piVar8,param_2,0,0x303,&local_c), iVar4 == 0))
    {
      if (iVar3 != 4) {
LAB_113f0075:
        *(int **)(param_1[0xf] + 0x438) = piVar8;
        return (undefined4)(0);
      }
      local_8 = (undefined4)(*(undefined4 *)(*piVar8 + 0xcc));
      local_4 = (int *)(*(int **)(*piVar8 + 0xd0));
      psVar7 = (short *)(*(short **)(param_1[0xf] + 0x428));
      iVar4 = (int)(thunk_FUN_1140b1f0(&local_8));
      piVar6 = (int *)(local_4);
      if (((iVar4 != 2) && (iVar4 != 3)) && (iVar4 != 4)) {
        piVar6 = (int *)((int *)0x0);
      }
      iVar4 = (int)(*piVar6);
      sVar2 = (short)(*psVar7);
      while (sVar2 != 0) {
        iVar5 = (int)(thunk_FUN_113db910(sVar2));
        if (iVar5 == iVar4) goto LAB_113f0075;
        psVar1 = (short *)(psVar7 + 1);
        psVar7 = (short *)(psVar7 + 1);
        sVar2 = (short)(*psVar1);
      }
    }
    piVar8 = (int *)((int *)piVar8[2]);
  } while( true );
}


// Reference entry 113f29a0; body size 99 bytes.
#line 1 "ENTRY_113f29a0"

undefined1 FUN_113f29a0(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = (int)(param_1[0xe]);
  if ((((*(char *)param_1[0xf] != '\0') && (iVar1 != 0)) && (*(int *)(iVar1 + 0x70) != 0)) &&
     (((uint)*(byte *)(iVar1 + 0x8c) & *(uint *)(*param_1 + 0x1c) & 5) != 0)) {
    iVar1 = (int)(thunk_FUN_113da960(*param_1));
    uVar2 = (undefined1)(1);
    if (iVar1 != 0) {
      uVar2 = (undefined1)(2);
    }
    return (undefined1)(uVar2);
  }
  iVar1 = (int)(thunk_FUN_113da960(*param_1));
  return (undefined1)(iVar1 != 0);
}


// Reference entry 113f2db0; body size 368 bytes.
#line 1 "ENTRY_113f2db0"

int FUN_113f2db0(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 uVar8;
  
  iVar3 = (int)(*(int *)(param_1 + 0x3c));
  iVar4 = (int)(FUN_113f1560(param_2,param_3,1));
  if (iVar4 == 0) {
    uVar7 = (uint)((uint)*param_2);
    param_2 = (byte *)(param_2 + 1);
    if (uVar7 != 0) {
      iVar4 = (int)(FUN_113f1560(param_2,param_3,uVar7));
      if (iVar4 != 0) goto LAB_113f2f06;
      _Dst = (void *)(calloc(1,uVar7));
      *(void **)(iVar3 + 0x5d8) = _Dst;
      if (_Dst == (void *)0x0) {
        return (int)(-0x7f00);
      }
      memcpy(_Dst,param_2,uVar7);
      param_2 = (byte *)(param_2 + uVar7);
    }
    iVar4 = (int)(FUN_113f1560(param_2,param_3,2));
    if (iVar4 == 0) {
      pbVar5 = (byte *)(param_2 + 2);
      uVar8 = (undefined8)(FUN_113f1560(pbVar5,param_3,
                           ((uint)((char)*(undefined2 *)param_2) << 8 | (uint)((char)((ushort)*(undefined2 *)param_2 >> 8)))));
      if ((int)uVar8 == 0) {
        pbVar1 = (byte *)(pbVar5 + (int)((ulonglong)uVar8 >> 0x20));
        *(undefined4 *)(iVar3 + 0x5d0) = 0;
        while (pbVar5 < pbVar1) {
          iVar4 = (int)(FUN_113f1560(pbVar5,pbVar1,4));
          if (iVar4 != 0) goto LAB_113f2f06;
          uVar2 = (undefined2)(*(undefined2 *)pbVar5);
          pbVar6 = (byte *)(pbVar5 + 4);
          uVar7 = (uint)((uint)((uint)((char)*(undefined2 *)(pbVar5 + 2)) << 8 | (uint)((char)((ushort)*(undefined2 *)(pbVar5 + 2) >> 8))));
          uVar8 = (undefined8)(FUN_113f1560(pbVar6,pbVar1,uVar7));
          if ((int)uVar8 != 0) goto LAB_113f2f06;
          iVar4 = (int)(thunk_FUN_113ff1d0(param_1,0xd,(int)((ulonglong)uVar8 >> 0x20),0xfac0229));
          if (iVar4 != 0) {
            return (int)(iVar4);
          }
          pbVar5 = (byte *)(pbVar6 + uVar7);
          if ((((uint)((char)uVar2) << 8 | (uint)((char)((ushort)uVar2 >> 8))) == 0xd) &&
             (iVar4 = thunk_FUN_113dd7b0(param_1,pbVar6,pbVar5), iVar4 != 0)) {
            return (int)(iVar4);
          }
        }
        if ((pbVar5 == (byte *)(param_3)) && ((*(byte *)(iVar3 + 0x5d0) & 0x20) != 0)) {
          *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x4da) = 1;
          return (int)(0);
        }
      }
    }
  }
LAB_113f2f06:
  thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
  return (int)(-0x7300);
}


// Reference entry 113f3560; body size 578 bytes.
#line 1 "ENTRY_113f3560"

int FUN_113f3560(int param_1,uint *param_2,undefined2 *param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  byte *pbVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  uint *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  
  iVar6 = (int)(*(int *)(param_1 + 0x34));
  *param_4 = (undefined4)(0);
  *param_5 = (undefined4)(0);
  uVar10 = (undefined8)(FUN_113f1560(param_2,param_3,9));
  puVar7 = (uint *)((uint *)((ulonglong)uVar10 >> 0x20));
  if ((int)uVar10 == 0) {
    uVar4 = (uint)(*param_2);
    uVar4 = (uint)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
    *(uint *)(iVar6 + 0x78) = uVar4;
    if (0x93a80 < uVar4) {
      return (int)(-0x6600);
    }
    uVar4 = (uint)(param_2[1]);
    *(uint *)(iVar6 + 0x88) =
         uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar4 = (uint)(param_2[2]);
    puVar8 = (undefined2 *)((undefined2 *)((int)param_2 + 9));
    *puVar7 = (uint)((uint)(byte)uVar4);
    if ((puVar8 <= param_3) && ((uint)(byte)uVar4 <= (uint)((int)param_3 - (int)puVar8))) {
      *param_4 = (undefined4)(puVar8);
      puVar8 = (undefined2 *)((undefined2 *)((int)puVar8 + *puVar7));
      iVar5 = (int)(FUN_113f1560(puVar8,param_3,2));
      if (iVar5 == 0) {
        puVar9 = (undefined2 *)(puVar8 + 1);
        uVar4 = (uint)((uint)((uint)((char)*puVar8) << 8 | (uint)((char)((ushort)*puVar8 >> 8))));
        if ((puVar9 <= param_3) && (uVar4 <= (uint)((int)param_3 - (int)puVar9))) {
          puVar7 = (uint *)((uint *)(iVar6 + 0x74));
          if ((*(void **)(iVar6 + 0x70) != (void *)0x0) || (*puVar7 != 0)) {
            free(*(void **)(iVar6 + 0x70));
            *(undefined4 *)(iVar6 + 0x70) = 0;
            *puVar7 = (uint)(0);
          }
          _Dst = (void *)(calloc(1,uVar4));
          if (_Dst == (void *)0x0) {
            return (int)(-0x7f00);
          }
          memcpy(_Dst,puVar9,uVar4);
          puVar9 = (undefined2 *)((undefined2 *)((int)puVar9 + uVar4));
          *(byte *)(iVar6 + 0x8c) = *(byte *)(iVar6 + 0x8c) & 0xf2;
          *(void **)(iVar6 + 0x70) = _Dst;
          *puVar7 = (uint)(uVar4);
          if ((puVar9 <= param_3) && (1 < (uint)((int)param_3 - (int)puVar9))) {
            puVar8 = (undefined2 *)(puVar9 + 1);
            uVar4 = (uint)((uint)((uint)((char)*puVar9) << 8 | (uint)((char)((ushort)*puVar9 >> 8))));
            if ((puVar8 <= param_3) && (uVar4 <= (uint)((int)param_3 - (int)puVar8))) {
              puVar9 = (undefined2 *)((undefined2 *)(uVar4 + (int)puVar8));
              *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x5d0) = 0;
              while( true ) {
                if (puVar9 <= puVar8) {
                  return (int)(0);
                }
                iVar6 = (int)(FUN_113f1560(puVar8,puVar9,4));
                if (iVar6 != 0) break;
                uVar2 = (undefined2)(*puVar8);
                puVar7 = (uint *)((uint *)(puVar8 + 2));
                uVar4 = (uint)((uint)((uint)((char)puVar8[1]) << 8 | (uint)((char)((ushort)puVar8[1] >> 8))));
                uVar10 = (undefined8)(FUN_113f1560(puVar7,puVar9,uVar4));
                if ((int)uVar10 != 0) break;
                iVar6 = (int)(thunk_FUN_113ff1d0(param_1,4,(int)((ulonglong)uVar10 >> 0x20),0xf804001));
                if (iVar6 != 0) {
                  return (int)(iVar6);
                }
                if (((uint)((char)uVar2) << 8 | (uint)((char)((ushort)uVar2 >> 8))) == 0x2a) {
                  uVar10 = (undefined8)(FUN_113f1560(puVar7,(int)puVar7 + uVar4,4));
                  iVar6 = (int)((int)((ulonglong)uVar10 >> 0x20));
                  if ((int)uVar10 == 0) {
                    uVar3 = (uint)(*puVar7);
                    pbVar1 = (byte *)((byte *)(iVar6 + 0x8c));
                    *pbVar1 = (byte)(*pbVar1 | 8);
                    *(uint *)(iVar6 + 0xd0) =
                         uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                         uVar3 << 0x18;
                  }
                  else {
                    thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
                  }
                }
                puVar8 = (undefined2 *)((undefined2 *)((int)puVar7 + uVar4));
              }
            }
          }
        }
      }
    }
  }
  thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
  return (int)(-0x7300);
}


// Reference entry 113f5210; body size 121 bytes.
#line 1 "ENTRY_113f5210"

undefined4 FUN_113f5210(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  sVar1 = (short)(*(short *)(*(int *)(param_1 + 0x3c) + 0x4d8));
  if ((sVar1 != 0) &&
     ((((sVar1 == 0x1d || (sVar1 == 0x17)) || (sVar1 == 0x18)) ||
      (((sVar1 == 0x19 || (sVar1 == 0x1e)) || ((ushort)(sVar1 - 0x100U) < 5)))))) {
    iVar2 = (int)(thunk_FUN_114299f0(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x108)));
    if (iVar2 != 0) {
      uVar3 = (undefined4)(thunk_FUN_11436230(iVar2,&DAT_11bfec68,7,LAB_100409da));
      return (undefined4)(uVar3);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x108) = 0;
    return (undefined4)(0);
  }
  return (undefined4)(0xffff9400);
}


// Reference entry 113f5340; body size 112 bytes.
#line 1 "ENTRY_113f5340"

undefined4 FUN_113f5340(int *param_1,uint *param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(param_1[0xe]);
  if ((((*(char *)param_1[0xf] != '\0') && (iVar1 != 0)) && (*(int *)(iVar1 + 0x70) != 0)) &&
     (((uint)*(byte *)(iVar1 + 0x8c) & *(uint *)(*param_1 + 0x1c) & 5) != 0)) {
    iVar2 = (int)(thunk_FUN_113e9f00(*(undefined4 *)(iVar1 + 0x10)));
    if (iVar2 == 0) {
      uVar3 = (uint)(0);
    }
    else {
      uVar3 = (uint)(*(byte *)(iVar2 + 9) | 0x2000000);
    }
    *param_2 = (uint)(uVar3);
    *param_3 = (int)(iVar1 + 0x8e);
    *param_4 = (uint)((uint)*(byte *)(iVar1 + 0x8d));
    return (undefined4)(0);
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 113f53d0; body size 357 bytes.
#line 1 "ENTRY_113f53d0"

void FUN_113f53d0(undefined4 param_1,byte *param_2,byte *param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,uint *param_8)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_50);
  local_4c = (undefined4)(param_1);
  local_48 = (undefined4)(param_6);
  local_50 = (undefined4)(0);
  uVar1 = (uint)(param_5 & 0xff | 0x2000000);
  *param_8 = (uint)(0);
  if (uVar1 == 0x2000003) {
    bVar3 = (byte)(0x10);
  }
  else if (uVar1 == 0x2000004) {
    bVar3 = (byte)(0x14);
  }
  else if (uVar1 == 0x2000005) {
    bVar3 = (byte)(0x14);
  }
  else if (uVar1 == 0x2000008) {
    bVar3 = (byte)(0x1c);
  }
  else if (uVar1 == 0x2000009) {
    bVar3 = (byte)(0x20);
  }
  else if (uVar1 == 0x200000a) {
    bVar3 = (byte)(0x30);
  }
  else if (uVar1 == 0x200000b) {
    bVar3 = (byte)(0x40);
  }
  else if (uVar1 == 0x200000c) {
    bVar3 = (byte)(0x1c);
  }
  else if (uVar1 == 0x200000d) {
    bVar3 = (byte)(0x20);
  }
  else if (uVar1 == 0x2000010) {
    bVar3 = (byte)(0x1c);
  }
  else if (uVar1 == 0x2000011) {
    bVar3 = (byte)(0x20);
  }
  else if (uVar1 == 0x2000012) {
    bVar3 = (byte)(0x30);
  }
  else {
    bVar3 = (byte)((uVar1 != 0x2000013) - 1U & 0x40);
  }
  if ((param_2 <= param_3) && (bVar3 + 1 <= (uint)((int)param_3 - (int)param_2))) {
    *param_2 = (byte)(bVar3);
    iVar2 = (int)(thunk_FUN_113dbe10(param_1,param_5 & 0xff,local_44,0x40,&local_50));
    if ((iVar2 == 0) &&
       (iVar2 = thunk_FUN_113fc530(param_1,param_5,local_48,param_7,param_4,local_44,param_2 + 1),
       iVar2 == 0)) {
      *param_8 = (uint)(bVar3 + 1);
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113f57e0; body size 95 bytes.
#line 1 "ENTRY_113f57e0"

undefined4
FUN_113f57e0(undefined4 param_1,undefined2 *param_2,undefined2 *param_3,void *param_4,uint param_5,
            uint param_6,uint *param_7)

{
  *param_7 = (uint)(0);
  if (param_2 <= param_3) {
    if (param_5 + 6 <= (uint)((int)param_3 - (int)param_2)) {
      *param_2 = (undefined2)(((uint)((char)(param_5 & 0xffff)) << 8 | (uint)((char)((param_5 & 0xffff) >> 8))));
      memcpy(param_2 + 1,param_4,param_5);
      *(uint *)((int)param_2 + param_5 + 2) =
           param_6 >> 0x18 | (param_6 & 0xff0000) >> 8 | (param_6 & 0xff00) << 8 | param_6 << 0x18;
      *param_7 = (uint)(param_5 + 6);
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffff9600);
}


// Reference entry 113f6f60; body size 650 bytes.
#line 1 "ENTRY_113f6f60"

void FUN_113f6f60(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  undefined1 local_84 [64];
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_90);
  uVar3 = (uint)(param_5 & 0xff | 0x2000000);
  if (uVar3 == 0x2000003) {
    iVar1 = (int)(0x10);
  }
  else if (uVar3 == 0x2000004) {
    iVar1 = (int)(0x14);
  }
  else if (uVar3 == 0x2000005) {
    iVar1 = (int)(0x14);
  }
  else if (uVar3 == 0x2000008) {
    iVar1 = (int)(0x1c);
  }
  else if (uVar3 == 0x2000009) {
    iVar1 = (int)(0x20);
  }
  else if (uVar3 == 0x200000a) {
    iVar1 = (int)(0x30);
  }
  else if (uVar3 == 0x200000b) {
    iVar1 = (int)(0x40);
  }
  else if (uVar3 == 0x200000c) {
    iVar1 = (int)(0x1c);
  }
  else if (uVar3 == 0x200000d) {
    iVar1 = (int)(0x20);
  }
  else if (uVar3 == 0x2000010) {
    iVar1 = (int)(0x1c);
  }
  else if (uVar3 == 0x2000011) {
    iVar1 = (int)(0x20);
  }
  else if (uVar3 == 0x2000012) {
    iVar1 = (int)(0x30);
  }
  else {
    iVar1 = (int)(0);
    if (uVar3 == 0x2000013) {
      iVar1 = (int)(0x40);
    }
  }
  if ((((param_3 == iVar1) &&
       (iVar1 = thunk_FUN_113dbe10(param_1,param_5 & 0xff,local_44,0x40,local_88), iVar1 == 0)) &&
      (iVar1 = thunk_FUN_113fd670(param_1,&local_8c,&local_90), iVar1 == 0)) &&
     (iVar1 = thunk_FUN_113fc530(param_1,param_5,local_8c,local_90,param_4,local_44,local_84),
     iVar1 == 0)) {
    if (uVar3 == 0x2000003) {
      uVar2 = (undefined4)(0x10);
    }
    else if (uVar3 == 0x2000004) {
      uVar2 = (undefined4)(0x14);
    }
    else if (uVar3 == 0x2000005) {
      uVar2 = (undefined4)(0x14);
    }
    else if (uVar3 == 0x2000008) {
      uVar2 = (undefined4)(0x1c);
    }
    else if (uVar3 == 0x2000009) {
      uVar2 = (undefined4)(0x20);
    }
    else if (uVar3 == 0x200000a) {
      uVar2 = (undefined4)(0x30);
    }
    else if (uVar3 == 0x200000b) {
      uVar2 = (undefined4)(0x40);
    }
    else if (uVar3 == 0x200000c) {
      uVar2 = (undefined4)(0x1c);
    }
    else if (uVar3 == 0x200000d) {
      uVar2 = (undefined4)(0x20);
    }
    else if (uVar3 == 0x2000010) {
      uVar2 = (undefined4)(0x1c);
    }
    else if (uVar3 == 0x2000011) {
      uVar2 = (undefined4)(0x20);
    }
    else if (uVar3 == 0x2000012) {
      uVar2 = (undefined4)(0x30);
    }
    else {
      uVar2 = (undefined4)(0);
      if (uVar3 == 0x2000013) {
        uVar2 = (undefined4)(0x40);
      }
    }
    iVar1 = (int)(thunk_FUN_114351b0(local_84,param_2,uVar2));
    if (iVar1 != 0) {
      thunk_FUN_11423ed0(local_84,0x40);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113f81d0; body size 403 bytes.
#line 1 "ENTRY_113f81d0"

uint FUN_113f81d0(int *param_1,undefined2 *param_2,undefined4 param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  short sVar3;
  short sVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  
  uVar10 = (undefined8)(FUN_113f5cf0(param_2,param_3,2));
  if ((int)uVar10 == 0) {
    puVar9 = (undefined2 *)(param_2 + 1);
    uVar7 = (uint)((uint)((uint)((char)*param_2) << 8 | (uint)((char)((ushort)*param_2 >> 8))));
    iVar6 = (int)(FUN_113f5cf0(puVar9,(int)((ulonglong)uVar10 >> 0x20),uVar7));
    if (iVar6 == 0) {
      puVar2 = (undefined2 *)((undefined2 *)(uVar7 + (int)puVar9));
      *(undefined2 *)(param_1[0xf] + 0x4d8) = 0;
      do {
        puVar5 = (undefined2 *)(puVar9);
        if (puVar2 <= puVar5) {
          return (uint)((uint)(*(short *)(param_1[0xf] + 0x4d8) == 0));
        }
        iVar6 = (int)(FUN_113f5cf0(puVar5,puVar2,4));
        if (iVar6 != 0) break;
        sVar4 = (short)(((uint)((char)*puVar5) << 8 | (uint)((char)((ushort)*puVar5 >> 8))));
        uVar7 = (uint)((uint)((uint)((char)puVar5[1]) << 8 | (uint)((char)((ushort)puVar5[1] >> 8))));
        uVar10 = (undefined8)(FUN_113f5cf0(puVar5 + 2,puVar2,uVar7));
        if ((int)uVar10 != 0) break;
        puVar9 = (undefined2 *)((undefined2 *)((int)(puVar5 + 2) + (int)((ulonglong)uVar10 >> 0x20)));
        psVar8 = (short *)(*(short **)(*param_1 + 0x84));
        if (psVar8 != (short *)0x0) {
          sVar3 = (short)(*psVar8);
          while (sVar3 != 0) {
            if (sVar3 == sVar4) {
              if ((((((sVar4 == 0x1d) || (sVar4 == 0x17)) || (sVar4 == 0x18)) ||
                   ((sVar4 == 0x19 || (sVar4 == 0x1e)))) &&
                  ((iVar6 = thunk_FUN_113db910(sVar4), iVar6 != 0 &&
                   (*(short *)(param_1[0xf] + 0x4d8) == 0)))) &&
                 ((((sVar4 == 0x1d || (sVar4 == 0x17)) || (sVar4 == 0x18)) ||
                  (((sVar4 == 0x19 || (sVar4 == 0x1e)) || ((ushort)(sVar4 - 0x100U) < 5)))))) {
                uVar7 = (uint)(thunk_FUN_113ffef0(param_1,puVar5 + 1,uVar7 + 2));
                if (uVar7 != 0) {
                  return (uint)(uVar7);
                }
                *(short *)(param_1[0xf] + 0x4d8) = sVar4;
              }
              break;
            }
            psVar1 = (short *)(psVar8 + 1);
            psVar8 = (short *)(psVar8 + 1);
            sVar3 = (short)(*psVar1);
          }
        }
      } while( true );
    }
  }
  thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
  return (uint)(0xffff8d00);
}


// Reference entry 113f9440; body size 287 bytes.
#line 1 "ENTRY_113f9440"

int FUN_113f9440(int param_1)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = (int)(thunk_FUN_113e56d0(param_1,0));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    if (*(int *)(param_1 + 0x7c) == 0x16) {
      if (**(char **)(param_1 + 0x74) == '\x05') {
        iVar1 = (int)(thunk_FUN_113ff370(param_1,5,&local_4,&local_8));
        if (iVar1 != 0) {
          return (int)(iVar1);
        }
        if (local_4 == local_8 + local_4) {
          thunk_FUN_113e5f90(param_1,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x5dc));
          iVar1 = (int)(thunk_FUN_113da210(param_1,5,local_4,local_8));
          if (iVar1 != 0) {
            return (int)(iVar1);
          }
          *(uint *)(param_1 + 4) = (uint)(*(char *)(*(int *)(param_1 + 0x3c) + 3) == '\0') * 4 + 7;
          return (int)(0);
        }
        thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
        return (int)(-0x7300);
      }
    }
    else if (*(int *)(param_1 + 0x7c) == 0x17) {
      if (*(int *)(param_1 + 0x78) != 0) {
        return (int)(-0x7c00);
      }
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x74);
      iVar1 = (int)(thunk_FUN_113ff170(param_1,*(undefined4 *)(param_1 + 0x80)));
      if (iVar1 == 0) {
        return (int)(-0x7c00);
      }
      goto LAB_113f952a;
    }
    thunk_FUN_113e50f0(param_1,10,0xffff8900);
    iVar1 = (int)(-0x7700);
  }
  else {
LAB_113f952a:
    if (-1 < iVar1) {
      if (iVar1 == 1) {
        return (int)(-0x7c00);
      }
      return (int)(-0x6c00);
    }
  }
  return (int)(iVar1);
}


// Reference entry 113f97a0; body size 238 bytes.
#line 1 "ENTRY_113f97a0"

int FUN_113f97a0(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *local_8;
  int local_4;
  
  piVar3 = (int *)(param_1);
  cVar5 = (char)(*(char *)(param_1[0xf] + 2));
  if (cVar5 == '\x03') {
    cVar5 = (char)(*(char *)(*param_1 + 10));
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1[0xe] + 0x6c) = 0x80;
    param_1[1] = (int)(3);
    return (int)(0);
  }
  *(undefined1 *)(param_1[0xf] + 3) = 1;
  iVar6 = (int)(thunk_FUN_113e6000(param_1,0xd,&local_8,&local_4));
  puVar4 = (undefined1 *)(local_8);
  if (iVar6 == 0) {
    param_1 = (int *)((int *)iVar6);
    uVar7 = (undefined8)(FUN_113f5cf0(local_8,local_8 + local_4,3));
    if ((int)uVar7 != 0) {
      return (int)(-0x6a00);
    }
    *puVar4 = (undefined1)(0);
    puVar1 = (undefined1 *)(puVar4 + 3);
    iVar6 = (int)(thunk_FUN_113dff50(piVar3,puVar1,(int)((ulonglong)uVar7 >> 0x20),&param_1));
    if (iVar6 == 0) {
      iVar2 = (int)((int)param_1 - (int)puVar4);
      *(short *)(puVar4 + 1) =
           (short)((uint)((int3)(puVar1 + ((int)param_1 - (int)(puVar4 + 1)) + -2)) << 8 | (uint)((char)((uint)(puVar1 + ((int)param_1 - (int)(puVar4 + 1)) + -2) >> 8)));
      iVar6 = (int)(thunk_FUN_113da210(piVar3,0xd,local_8,puVar1 + iVar2));
      if (iVar6 == 0) {
        iVar6 = (int)(thunk_FUN_113e45a0(piVar3,local_4,puVar1 + iVar2));
        if (iVar6 == 0) {
          piVar3[1] = (int)(3);
        }
      }
    }
  }
  return (int)(iVar6);
}


// Reference entry 113f99a0; body size 235 bytes.
#line 1 "ENTRY_113f99a0"

int FUN_113f99a0(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *local_8;
  int local_4;
  
  iVar1 = (int)(param_1);
  thunk_FUN_113e5fb0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x5dc));
  iVar3 = (int)(thunk_FUN_113e6000(iVar1,8,&local_8,&local_4));
  puVar2 = (undefined2 *)(local_8);
  if (iVar3 == 0) {
    iVar4 = (int)(local_4 + (int)local_8);
    iVar3 = (int)(FUN_113f5cf0(local_8,iVar4,2));
    if (iVar3 != 0) {
      return (int)(-0x6a00);
    }
    iVar3 = (int)(thunk_FUN_113dfb10(iVar1,puVar2 + 1,iVar4,&param_1));
    if (iVar3 == 0) {
      iVar5 = (int)((int)(puVar2 + 1) + param_1);
      if (*(char *)(*(int *)(iVar1 + 0x3c) + 4) != '\0') {
        iVar3 = (int)(thunk_FUN_11400690(iVar1,0,iVar5,iVar4,&param_1));
        if (iVar3 != 0) {
          return (int)(iVar3);
        }
        iVar5 = (int)(iVar5 + param_1);
      }
      iVar5 = (int)(iVar5 - (int)puVar2);
      *puVar2 = (undefined2)((short)((uint)((int3)(iVar5 + -2)) << 8 | (uint)((char)((uint)(iVar5 + -2) >> 8))));
      iVar3 = (int)(thunk_FUN_113da210(iVar1,8,local_8,iVar5));
      if ((iVar3 == 0) && (iVar3 = thunk_FUN_113e45a0(iVar1,local_4,iVar5), iVar3 == 0)) {
        *(uint *)(iVar1 + 4) = (uint)((*(byte *)(*(int *)(iVar1 + 0x3c) + 0x24) & 5) != 0) * 8 + 5;
      }
    }
  }
  return (int)(iVar3);
}


// Reference entry 113fa100; body size 344 bytes.
#line 1 "ENTRY_113fa100"

int FUN_113fa100(int *param_1,uint *param_2,uint *param_3,int *param_4,void *param_5,size_t param_6)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  int local_4;
  
  _Size = (size_t)(param_6);
  puVar3 = (uint *)(param_3);
  puVar2 = (uint *)(param_2);
  iVar5 = (int)(param_1[0xd]);
  *param_4 = (int)(0);
  if ((param_2 <= param_3) && (param_6 + 0xb <= (uint)((int)param_3 - (int)param_2))) {
    uVar8 = (undefined8)(thunk_FUN_11423e60());
    *(undefined8 *)(iVar5 + 0x80) = uVar8;
    local_4 = (int)((int)puVar2 + _Size);
    iVar4 = (int)((**(code **)(*param_1 + 100))
                      (*(undefined4 *)(*param_1 + 0x6c),iVar5,local_4 + 0xb,puVar3,&param_3,&param_2
                       ,param_1));
    if (iVar4 != 0) {
      return (int)(iVar4);
    }
    if ((uint *)0x93a80 < param_2) {
      return (int)(-0x7100);
    }
    *puVar2 = (uint)((uint)param_2 >> 0x18 | ((uint)param_2 & 0xff0000) >> 8 |
              ((uint)param_2 & 0xff00) << 8 | (int)param_2 << 0x18);
    uVar1 = (uint)(*(uint *)(iVar5 + 0x88));
    puVar2[1] = (uint)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
    *(char *)(puVar2 + 2) = (char)_Size;
    if (_Size != 0) {
      memcpy((void *)((int)puVar2 + 9),param_5,_Size);
    }
    *(short *)(local_4 + 9) = (short)((uint)((int3)param_3) << 8 | (uint)((char)((uint)param_3 >> 8)));
    puVar6 = (undefined2 *)((undefined2 *)(local_4 + 0xb + (int)param_3));
    *(undefined4 *)(param_1[0xf] + 0x5cc) = 0;
    iVar4 = (int)(FUN_113f5cf0(puVar6,puVar3,2));
    if (iVar4 == 0) {
      puVar7 = (undefined2 *)(puVar6 + 1);
      if ((*(byte *)(iVar5 + 0x8c) & 8) != 0) {
        iVar5 = (int)(thunk_FUN_11400690(param_1,1,puVar7,puVar3,&local_4));
        if (iVar5 != 0) {
          return (int)(iVar5);
        }
        puVar7 = (undefined2 *)((undefined2 *)((int)puVar7 + local_4));
      }
      iVar5 = (int)((int)puVar7 + (-2 - (int)puVar6));
      *puVar6 = (undefined2)((short)((uint)((int3)iVar5) << 8 | (uint)((char)((uint)iVar5 >> 8))));
      *param_4 = (int)((int)puVar7 - (int)puVar2);
      return (int)(0);
    }
  }
  return (int)(-0x6a00);
}


// Reference entry 113fb960; body size 249 bytes.
#line 1 "ENTRY_113fb960"

undefined4
FUN_113fb960(int *param_1,undefined2 *param_2,undefined4 param_3,uint *param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined8 uVar8;
  
  *param_4 = (uint)(0);
  *param_5 = (int)(0);
  iVar5 = (int)(*(int *)(*param_1 + 0x18));
  uVar8 = (undefined8)(FUN_113fab90(param_2,param_3,2));
  if ((int)uVar8 == 0) {
    iVar7 = (int)(0);
    iVar1 = (int)(*(int *)((ulonglong)uVar8 >> 0x20));
    puVar6 = (undefined2 *)(param_2 + 1);
    while (iVar1 != 0) {
      uVar2 = (undefined4)(thunk_FUN_113e9f00(iVar1));
      iVar3 = (int)(thunk_FUN_113df6a0(param_1,uVar2,*(undefined4 *)(param_1[0xf] + 8),param_1[2]));
      if (iVar3 == 0) {
        uVar4 = (uint)(thunk_FUN_113e9fd0(uVar2));
        *param_4 = (uint)(*param_4 | uVar4);
        iVar3 = (int)(FUN_113fab90(puVar6,param_3,2));
        if (iVar3 != 0) {
          return (undefined4)(0xffff9600);
        }
        *puVar6 = (undefined2)((short)((uint)((int3)iVar1) << 8 | (uint)((char)((uint)iVar1 >> 8))));
        puVar6 = (undefined2 *)(puVar6 + 1);
      }
      iVar7 = (int)(iVar7 + 1);
      iVar1 = (int)(*(int *)(iVar5 + iVar7 * 4));
    }
    iVar5 = (int)(FUN_113fab90(puVar6,param_3,2));
    if (iVar5 == 0) {
      *puVar6 = (undefined2)(0xff00);
      iVar5 = (int)((int)puVar6 + (2 - (int)(param_2 + 1)));
      *param_2 = (undefined2)((short)((uint)((int3)iVar5) << 8 | (uint)((char)((uint)iVar5 >> 8))));
      *param_5 = (int)((int)puVar6 + (2 - (int)param_2));
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffff9600);
}


// Reference entry 113fbb80; body size 421 bytes.
#line 1 "ENTRY_113fbb80"

undefined4
FUN_113fbb80(int *param_1,undefined2 *param_2,undefined4 param_3,uint param_4,int *param_5)

{
  undefined2 *puVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined2 *puVar7;
  
  psVar6 = (short *)(*(short **)(*param_1 + 0x84));
  *param_5 = (int)(0);
  iVar4 = (int)(FUN_113fab90(param_2,param_3,6));
  if (iVar4 != 0) {
    return (undefined4)(0xffff9600);
  }
  puVar1 = (undefined2 *)(param_2 + 3);
  if (psVar6 == (short *)0x0) {
    return (undefined4)(0xffffa180);
  }
  sVar2 = (short)(*psVar6);
  puVar7 = (undefined2 *)(puVar1);
  if (sVar2 != 0) {
    do {
      bVar3 = (bool)(false);
      if ((((param_4 & 2) != 0) &&
          ((((sVar2 == 0x1d || (sVar2 == 0x17)) || (sVar2 == 0x18)) ||
           ((sVar2 == 0x19 || (sVar2 == 0x1e)))))) &&
         (iVar4 = thunk_FUN_113db910(sVar2), iVar4 != 0)) {
        bVar3 = (bool)(true);
      }
      if ((((param_4 & 1) != 0) &&
          ((((((sVar2 = *psVar6, sVar2 == 0x1d || (sVar2 == 0x1a)) ||
              ((sVar2 == 0x1b || (((sVar2 == 0x1c || (sVar2 == 0x1e)) || (sVar2 == 0x12)))))) ||
             ((sVar2 == 0x13 || (sVar2 == 0x14)))) ||
            ((sVar2 == 0x15 ||
             (((sVar2 == 0x16 || (sVar2 == 0x17)) || ((sVar2 == 0x18 || (sVar2 == 0x19)))))))) &&
           (iVar4 = thunk_FUN_113db910(sVar2), iVar4 != 0)))) || (bVar3)) {
        iVar4 = (int)(FUN_113fab90(puVar7,param_3,2));
        if (iVar4 != 0) {
          return (undefined4)(0xffff9600);
        }
        *puVar7 = (undefined2)(((uint)((char)*psVar6) << 8 | (uint)((char)((ushort)*psVar6 >> 8))));
        puVar7 = (undefined2 *)(puVar7 + 1);
      }
      sVar2 = (short)(psVar6[1]);
      psVar6 = (short *)(psVar6 + 1);
    } while (sVar2 != 0);
  }
  uVar5 = (uint)((int)puVar7 - (int)puVar1);
  if (uVar5 == 0) {
    return (undefined4)(0xffff9400);
  }
  *param_2 = (undefined2)(0xa00);
  iVar4 = (int)((uVar5 & 0xffff) + 2);
  param_2[1] = (undefined2)((short)((uint)((int3)iVar4) << 8 | (uint)((char)((uint)iVar4 >> 8))));
  param_2[2] = (undefined2)((short)((uint)((int3)uVar5) << 8 | (uint)((char)((uVar5 & 0xffff) >> 8))));
  *param_5 = (int)((int)puVar7 - (int)param_2);
  iVar4 = (int)(param_1[0xf]);
  uVar5 = (uint)(thunk_FUN_113dbb30(10));
  *(uint *)(iVar4 + 0x5cc) = *(uint *)(iVar4 + 0x5cc) | uVar5;
  return (undefined4)(0);
}


// Reference entry 113fc330; body size 407 bytes.
#line 1 "ENTRY_113fc330"

void FUN_113fc330(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_8c;
  int local_88;
  undefined1 local_84 [64];
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_8c);
  iVar2 = (int)(*(int *)(param_1 + 0x3c));
  uVar3 = (uint)((uint)*(byte *)(*(int *)(iVar2 + 0x10) + 9));
  iVar1 = (int)(thunk_FUN_113dbe10(param_1,uVar3,local_84,0x40,&local_8c));
  if (iVar1 == 0) {
    local_88 = (int)(*(int *)(param_1 + 0x38));
    uVar3 = (uint)(uVar3 | 0x2000000);
    if (uVar3 == 0x2000003) {
      uVar4 = (undefined4)(0x10);
    }
    else if (uVar3 == 0x2000004) {
      uVar4 = (undefined4)(0x14);
    }
    else if (uVar3 == 0x2000005) {
      uVar4 = (undefined4)(0x14);
    }
    else if (uVar3 == 0x2000008) {
      uVar4 = (undefined4)(0x1c);
    }
    else if (uVar3 == 0x2000009) {
      uVar4 = (undefined4)(0x20);
    }
    else if (uVar3 == 0x200000a) {
      uVar4 = (undefined4)(0x30);
    }
    else if (uVar3 == 0x200000b) {
      uVar4 = (undefined4)(0x40);
    }
    else if (uVar3 == 0x200000c) {
      uVar4 = (undefined4)(0x1c);
    }
    else if (uVar3 == 0x200000d) {
      uVar4 = (undefined4)(0x20);
    }
    else if (uVar3 == 0x2000010) {
      uVar4 = (undefined4)(0x1c);
    }
    else if (uVar3 == 0x2000011) {
      uVar4 = (undefined4)(0x20);
    }
    else if (uVar3 == 0x2000012) {
      uVar4 = (undefined4)(0x30);
    }
    else {
      uVar4 = (undefined4)(0);
      if (uVar3 == 0x2000013) {
        uVar4 = (undefined4)(0x40);
      }
    }
    if (local_8c < 0x41) {
      memcpy(local_44,local_84,local_8c);
      iVar2 = (int)(iVar2 + 0x5e0);
      iVar1 = (int)(thunk_FUN_113fd880(uVar3,iVar2,uVar4,
                                 "res masterexp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                                 ,10,local_44,local_8c,local_88 + 0x198,uVar4));
      if (iVar1 == 0) {
        thunk_FUN_11423ed0(iVar2,0x40);
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fc780; body size 476 bytes.
#line 1 "ENTRY_113fc780"

void FUN_113fc780(uint param_1,undefined4 param_2,void *param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_4c;
  void *local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_4c);
  local_4c = (int)(param_5);
  uVar1 = (uint)(param_1 & 0xff | 0x2000000);
  local_48 = (void *)(param_3);
  if (uVar1 == 0x2000003) {
    uVar3 = (undefined4)(0x10);
  }
  else if (uVar1 == 0x2000004) {
    uVar3 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000005) {
    uVar3 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000008) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000009) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x200000a) {
    uVar3 = (undefined4)(0x30);
  }
  else if (uVar1 == 0x200000b) {
    uVar3 = (undefined4)(0x40);
  }
  else if (uVar1 == 0x200000c) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x200000d) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000010) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000011) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000012) {
    uVar3 = (undefined4)(0x30);
  }
  else {
    uVar3 = (undefined4)(0);
    if (uVar1 == 0x2000013) {
      uVar3 = (undefined4)(0x40);
    }
  }
  if ((param_1 & 0x7f000000) != 0x2000000) {
    thunk_FUN_1148ac28();
    return;
  }
  if (0x40 < param_4) {
    thunk_FUN_1148ac28();
    return;
  }
  memcpy(local_44,param_3,param_4);
  iVar2 = (int)(thunk_FUN_113fd880(param_1,param_2,uVar3,
                             "c ap trafficc e traffics hs traffics ap traffics e traffice exp masterres masterexp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                             ,0xc,local_44,param_4,local_4c,uVar3));
  if (iVar2 == 0) {
    memcpy(local_44,local_48,param_4);
    iVar2 = (int)(thunk_FUN_113fd880(param_1,param_2,uVar3,
                               "s ap traffics e traffice exp masterres masterexp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                               ,0xc,local_44,param_4,local_4c + 0x40,uVar3));
    if (iVar2 == 0) {
      memcpy(local_44,local_48,param_4);
      thunk_FUN_113fd880(param_1,param_2,uVar3,
                         "exp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                         ,10,local_44,param_4,local_4c + 0x80,uVar3);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fc9e0; body size 428 bytes.
#line 1 "ENTRY_113fc9e0"

void FUN_113fc9e0(uint param_1,undefined4 param_2,void *param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_4c;
  void *local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_4c);
  local_4c = (int)(param_5);
  uVar1 = (uint)(param_1 & 0xff | 0x2000000);
  local_48 = (void *)(param_3);
  if (uVar1 == 0x2000003) {
    uVar3 = (undefined4)(0x10);
  }
  else if (uVar1 == 0x2000004) {
    uVar3 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000005) {
    uVar3 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000008) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000009) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x200000a) {
    uVar3 = (undefined4)(0x30);
  }
  else if (uVar1 == 0x200000b) {
    uVar3 = (undefined4)(0x40);
  }
  else if (uVar1 == 0x200000c) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x200000d) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000010) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000011) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000012) {
    uVar3 = (undefined4)(0x30);
  }
  else {
    uVar3 = (undefined4)(0);
    if (uVar1 == 0x2000013) {
      uVar3 = (undefined4)(0x40);
    }
  }
  if ((param_1 & 0x7f000000) != 0x2000000) {
    thunk_FUN_1148ac28();
    return;
  }
  if (0x40 < param_4) {
    thunk_FUN_1148ac28();
    return;
  }
  memcpy(local_44,param_3,param_4);
  iVar2 = (int)(thunk_FUN_113fd880(param_1,param_2,uVar3,
                             "c e traffics hs traffics ap traffics e traffice exp masterres masterexp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                             ,0xb,local_44,param_4,local_4c + 0x40,uVar3));
  if (iVar2 == 0) {
    memcpy(local_44,local_48,param_4);
    thunk_FUN_113fd880(param_1,param_2,uVar3,
                       "e exp masterres masterexp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                       ,0xc,local_44,param_4,local_4c + 0x80,uVar3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fcc00; body size 424 bytes.
#line 1 "ENTRY_113fcc00"

void FUN_113fcc00(uint param_1,undefined4 param_2,void *param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_4c;
  void *local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_4c);
  local_4c = (int)(param_5);
  uVar1 = (uint)(param_1 & 0xff | 0x2000000);
  local_48 = (void *)(param_3);
  if (uVar1 == 0x2000003) {
    uVar3 = (undefined4)(0x10);
  }
  else if (uVar1 == 0x2000004) {
    uVar3 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000005) {
    uVar3 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000008) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000009) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x200000a) {
    uVar3 = (undefined4)(0x30);
  }
  else if (uVar1 == 0x200000b) {
    uVar3 = (undefined4)(0x40);
  }
  else if (uVar1 == 0x200000c) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x200000d) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000010) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000011) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000012) {
    uVar3 = (undefined4)(0x30);
  }
  else {
    uVar3 = (undefined4)(0);
    if (uVar1 == 0x2000013) {
      uVar3 = (undefined4)(0x40);
    }
  }
  if ((param_1 & 0x7f000000) != 0x2000000) {
    thunk_FUN_1148ac28();
    return;
  }
  if (0x40 < param_4) {
    thunk_FUN_1148ac28();
    return;
  }
  memcpy(local_44,param_3,param_4);
  iVar2 = (int)(thunk_FUN_113fd880(param_1,param_2,uVar3,
                             "c hs trafficc ap trafficc e traffics hs traffics ap traffics e traffice exp masterres masterexp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                             ,0xc,local_44,param_4,local_4c,uVar3));
  if (iVar2 == 0) {
    memcpy(local_44,local_48,param_4);
    thunk_FUN_113fd880(param_1,param_2,uVar3,
                       "s hs traffics ap traffics e traffice exp masterres masterexp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                       ,0xc,local_44,param_4,local_4c + 0x40,uVar3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fce20; body size 378 bytes.
#line 1 "ENTRY_113fce20"

void FUN_113fce20(uint param_1,undefined4 param_2,void *param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_48);
  local_48 = (int)(param_5);
  uVar1 = (uint)(param_1 & 0xff | 0x2000000);
  if (uVar1 == 0x2000003) {
    uVar2 = (undefined4)(0x10);
  }
  else if (uVar1 == 0x2000004) {
    uVar2 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000005) {
    uVar2 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000008) {
    uVar2 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000009) {
    uVar2 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x200000a) {
    uVar2 = (undefined4)(0x30);
  }
  else if (uVar1 == 0x200000b) {
    uVar2 = (undefined4)(0x40);
  }
  else if (uVar1 == 0x200000c) {
    uVar2 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x200000d) {
    uVar2 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000010) {
    uVar2 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000011) {
    uVar2 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000012) {
    uVar2 = (undefined4)(0x30);
  }
  else {
    uVar2 = (undefined4)(0);
    if (uVar1 == 0x2000013) {
      uVar2 = (undefined4)(0x40);
    }
  }
  if ((param_1 & 0x7f000000) == 0x2000000) {
    if (param_4 < 0x41) {
      memcpy(local_44,param_3,param_4);
      thunk_FUN_113fd880(param_1,param_2,uVar2,
                         "res masterexp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                         ,10,local_44,param_4,local_48 + 0xc0,uVar2);
      thunk_FUN_1148ac28();
      return;
    }
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fd000; body size 434 bytes.
#line 1 "ENTRY_113fd000"

void FUN_113fd000(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,void *param_6,uint param_7,int param_8,undefined4 param_9,
                 undefined4 param_10)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  uVar1 = (uint)(param_7);
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_48);
  local_48 = (undefined4)(param_9);
  if (param_8 == 0) {
    uVar1 = (uint)(param_1 & 0xff | 0x2000000);
    if (uVar1 == 0x2000003) {
      uVar3 = (undefined4)(0x10);
    }
    else if (uVar1 == 0x2000004) {
      uVar3 = (undefined4)(0x14);
    }
    else if (uVar1 == 0x2000005) {
      uVar3 = (undefined4)(0x14);
    }
    else if (uVar1 == 0x2000008) {
      uVar3 = (undefined4)(0x1c);
    }
    else if (uVar1 == 0x2000009) {
      uVar3 = (undefined4)(0x20);
    }
    else if (uVar1 == 0x200000a) {
      uVar3 = (undefined4)(0x30);
    }
    else if (uVar1 == 0x200000b) {
      uVar3 = (undefined4)(0x40);
    }
    else if (uVar1 == 0x200000c) {
      uVar3 = (undefined4)(0x1c);
    }
    else if (uVar1 == 0x200000d) {
      uVar3 = (undefined4)(0x20);
    }
    else if (uVar1 == 0x2000010) {
      uVar3 = (undefined4)(0x1c);
    }
    else if (uVar1 == 0x2000011) {
      uVar3 = (undefined4)(0x20);
    }
    else if (uVar1 == 0x2000012) {
      uVar3 = (undefined4)(0x30);
    }
    else {
      uVar3 = (undefined4)(0);
      if (uVar1 == 0x2000013) {
        uVar3 = (undefined4)(0x40);
      }
    }
    iVar2 = (int)(thunk_FUN_1142c5a0(param_1,param_6,param_7,local_44,uVar3,&param_7));
    uVar1 = (uint)(param_7);
    if (iVar2 != 0) {
      thunk_FUN_11436230(iVar2,&DAT_11bfec68,7,LAB_100409da);
      thunk_FUN_1148ac28();
      return;
    }
  }
  else {
    if (0x40 < param_7) {
      thunk_FUN_1148ac28();
      return;
    }
    memcpy(local_44,param_6,param_7);
  }
  thunk_FUN_113fd880(param_1,param_2,param_3,param_4,param_5,local_44,uVar1,local_48,param_10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fd6b0; body size 362 bytes.
#line 1 "ENTRY_113fd6b0"

void FUN_113fd6b0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_48);
  local_48 = (undefined4)(param_8);
  uVar1 = (uint)(param_1 & 0xff | 0x2000000);
  if (uVar1 == 0x2000003) {
    uVar3 = (undefined4)(0x10);
  }
  else if (uVar1 == 0x2000004) {
    uVar3 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000005) {
    uVar3 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000008) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000009) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x200000a) {
    uVar3 = (undefined4)(0x30);
  }
  else if (uVar1 == 0x200000b) {
    uVar3 = (undefined4)(0x40);
  }
  else if (uVar1 == 0x200000c) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x200000d) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000010) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000011) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000012) {
    uVar3 = (undefined4)(0x30);
  }
  else {
    uVar3 = (undefined4)(0);
    if (uVar1 == 0x2000013) {
      uVar3 = (undefined4)(0x40);
    }
  }
  iVar2 = (int)(thunk_FUN_113fd000(param_1,param_2,param_3,param_4,param_5,0,0,0,local_44,uVar3));
  if (iVar2 == 0) {
    thunk_FUN_113fd000(param_1,local_44,uVar3,
                       "exporterkeyivc hs trafficc ap trafficc e traffics hs traffics ap traffics e traffice exp masterres masterexp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                       ,8,param_6,param_7,0,local_48,param_9);
  }
  thunk_FUN_11423ed0(local_44,0x40);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fd880; body size 563 bytes.
#line 1 "ENTRY_113fd880"

void FUN_113fd880(uint param_1,undefined4 param_2,undefined4 param_3,void *param_4,uint param_5,
                 void *param_6,uint param_7,undefined4 param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_360;
  undefined1 local_35c [532];
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined4 local_145;
  undefined2 local_141;
  undefined1 local_13f [315];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_37c);
  local_378 = (undefined4)(param_2);
  local_37c = (void *)(param_4);
  local_374 = (undefined4)(param_8);
  local_370 = (undefined4)(0);
  local_36c = (undefined4)(0);
  local_368 = (undefined4)(0);
  local_360 = (undefined4)(0);
  memset(local_35c,0,0x214);
  if (((param_5 < 0xfa) && (param_7 < 0x41)) && (param_9 < 0x3fc1)) {
    if ((param_1 & 0x7f000000) != 0x2000000) {
      thunk_FUN_1148ac28();
      return;
    }
    local_147 = (undefined1)((undefined1)param_9);
    local_148 = (undefined1)((undefined1)(param_9 >> 8));
    iVar3 = (int)(param_7 + 4 + param_5 + 6);
    local_145 = (undefined4)(DAT_11bfd9b8);
    local_141 = (undefined2)(DAT_11bfd9bc);
    local_146 = (undefined1)((undefined1)(param_5 + 6));
    memcpy(local_13f,local_37c,param_5);
    local_13f[param_5] = (undefined1)((char)param_7);
    if (param_7 != 0) {
      memcpy(local_13f + param_5 + 1,param_6,param_7);
    }
    iVar1 = (int)(thunk_FUN_1142f4c0(&local_370,param_1 & 0xff | 0x8000500));
    if (iVar1 == 0) {
      iVar1 = (int)(thunk_FUN_1142e3f0(&local_370,0x101,local_378,param_3));
      if (iVar1 == 0) {
        iVar1 = (int)(thunk_FUN_1142e3f0(&local_370,0x203,&local_148,iVar3));
        if (iVar1 == 0) {
          iVar1 = (int)(thunk_FUN_1142ea40(&local_370,local_374,param_9));
        }
      }
    }
    iVar2 = (int)(thunk_FUN_1142ddf0(&local_370));
    thunk_FUN_11423ed0(&local_148,iVar3);
    if (iVar1 == 0) {
      iVar1 = (int)(iVar2);
    }
    thunk_FUN_11436230(iVar1,&DAT_11bfec68,7,LAB_100409da);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fdba0; body size 79 bytes.
#line 1 "ENTRY_113fdba0"

undefined4 FUN_113fdba0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)(0);
  uVar3 = (undefined4)(0);
  iVar1 = (int)(*(int *)(param_1 + 0x3c));
  if (*(int *)(iVar1 + 0x10) == 0) {
    return (undefined4)(0xffff9400);
  }
  if ((*(byte *)(iVar1 + 0x24) & 5) != 0) {
    iVar2 = (int)(*(int *)(iVar1 + 0x42c));
    uVar3 = (undefined4)(*(undefined4 *)(iVar1 + 0x430));
    if (iVar2 == 0) {
      return (undefined4)(0xffff9400);
    }
  }
  uVar3 = (undefined4)(thunk_FUN_113fd220(*(byte *)(*(int *)(iVar1 + 0x10) + 9) | 0x2000000,0,iVar2,uVar3,
                             iVar1 + 0x5e0));
  return (undefined4)(uVar3);
}


// Reference entry 113fdd50; body size 363 bytes.
#line 1 "ENTRY_113fdd50"

int FUN_113fdd50(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = (int)(thunk_FUN_113e9f00(param_3));
  if ((iVar1 != 0) && (iVar2 = thunk_FUN_11412700(*(undefined1 *)(iVar1 + 8)), iVar2 != 0)) {
    iVar3 = (int)(thunk_FUN_11412b80(param_1 + 0x15,iVar2));
    if ((iVar3 == 0) && (iVar3 = thunk_FUN_11412b80(param_1 + 0x26,iVar2), iVar3 == 0)) {
      if (param_2 == 1) {
        local_4 = (int)(param_4);
        local_c = (int)(0x40);
        local_8 = (int)(param_4 + 0x20);
        iVar3 = (int)(0x50);
      }
      else {
        if (param_2 != 0) {
          return (int)(-0x6c00);
        }
        local_8 = (int)(param_4);
        local_c = (int)(0x50);
        local_4 = (int)(param_4 + 0x20);
        iVar3 = (int)(0x40);
      }
      memcpy(param_1 + 5,(void *)(iVar3 + param_4),*(size_t *)(param_4 + 100));
      memcpy(param_1 + 9,(void *)(local_c + param_4),*(size_t *)(param_4 + 100));
      iVar3 = (int)(thunk_FUN_11412a80(param_1 + 0x15,local_8,*(uint *)(iVar2 + 4) >> 2 & 0x3c0,1));
      if ((iVar3 == 0) &&
         (iVar3 = thunk_FUN_11412a80(param_1 + 0x26,local_4,*(uint *)(iVar2 + 4) >> 2 & 0x3c0,0),
         iVar3 == 0)) {
        param_1[4] = (int)((uint)((*(byte *)(iVar1 + 0xb) & 2) == 0) * 8 + 8);
        iVar1 = (int)(*(int *)(param_4 + 100));
        param_1[1] = (int)(iVar1);
        param_1[2] = (int)(iVar1);
        param_1[3] = (int)(0);
        *param_1 = (int)(param_1[4] + 0x10);
        iVar3 = (int)(0);
        param_1[0x14] = (int)(0x304);
      }
    }
    return (int)(iVar3);
  }
  return (int)(-0x7100);
}


// Reference entry 113fdfc0; body size 552 bytes.
#line 1 "ENTRY_113fdfc0"

void FUN_113fdfc0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_68);
  local_60 = (undefined4)(param_4);
  local_64 = (undefined4)(param_5);
  local_5c = (undefined4)(0);
  local_58 = (undefined4)(0);
  local_54 = (undefined4)(0);
  local_50 = (uint)(0);
  local_4c = (undefined4)(0);
  local_48 = (undefined4)(0);
  uVar1 = (uint)(param_1 & 0xff | 0x2000000);
  local_68 = (undefined4)(0);
  if (uVar1 == 0x2000003) {
    uVar3 = (undefined4)(0x10);
  }
  else if (uVar1 == 0x2000004) {
    uVar3 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000005) {
    uVar3 = (undefined4)(0x14);
  }
  else if (uVar1 == 0x2000008) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000009) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x200000a) {
    uVar3 = (undefined4)(0x30);
  }
  else if (uVar1 == 0x200000b) {
    uVar3 = (undefined4)(0x40);
  }
  else if (uVar1 == 0x200000c) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x200000d) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000010) {
    uVar3 = (undefined4)(0x1c);
  }
  else if (uVar1 == 0x2000011) {
    uVar3 = (undefined4)(0x20);
  }
  else if (uVar1 == 0x2000012) {
    uVar3 = (undefined4)(0x30);
  }
  else {
    uVar3 = (undefined4)(0);
    if (uVar1 == 0x2000013) {
      uVar3 = (undefined4)(0x40);
    }
  }
  if ((param_1 & 0x7f000000) == 0x2000000) {
    iVar2 = (int)(thunk_FUN_113fd880(param_1,param_2,uVar3,
                               "finishedresumptiontraffic updexporterkeyivc hs trafficc ap trafficc e traffics hs traffics ap traffics e traffice exp masterres masterexp masterext binderres binderderivedTLS 1.3, client CertificateVerifyTLS 1.3, server CertificateVerify"
                               ,8,0,0,local_44,uVar3));
    if (iVar2 == 0) {
      local_54 = (undefined4)(0x400);
      local_5c = (undefined4)(((uint)(*(uint *)((char *)&local_5c + 2)) << 16 | (uint)(0x1100)));
      uVar1 = (uint)(param_1 & 0xff | 0x3800000);
      local_50 = (uint)(uVar1);
      iVar2 = (int)(thunk_FUN_1142d1f0(&local_5c,local_44,uVar3,&local_68));
      if (iVar2 == 0) {
        uVar3 = (undefined4)(thunk_FUN_114305f0(local_68,uVar1,param_3,uVar3,local_60,uVar3,local_64));
        iVar2 = (int)(thunk_FUN_11436230(uVar3,&DAT_11bfec68,7,LAB_100409da));
      }
      else {
        iVar2 = (int)(thunk_FUN_11436230(iVar2,&DAT_11bfec68,7,LAB_100409da));
      }
    }
    uVar3 = (undefined4)(thunk_FUN_114299f0(local_68));
    if (iVar2 == 0) {
      thunk_FUN_11436230(uVar3,&DAT_11bfec68,7,LAB_100409da);
    }
    thunk_FUN_11423ed0(local_44,0x40);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fe280; body size 563 bytes.
#line 1 "ENTRY_113fe280"

void FUN_113fe280(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_64);
  local_4c = (undefined4)(param_2);
  local_54 = (int)(param_1);
  local_5c = (undefined4)(0);
  iVar3 = (int)(*(int *)(param_1 + 0x3c));
  local_64 = (int)(*(int *)(param_1 + 0x38) + 0xd8);
  local_60 = (undefined4)(0);
  local_58 = (int)(iVar3);
  iVar1 = (int)(FUN_113fea90(*(undefined4 *)(iVar3 + 0x10),&local_5c,&local_60));
  if (iVar1 == 0) {
    uVar2 = (uint)((uint)*(byte *)(*(int *)(iVar3 + 0x10) + 9));
    uVar5 = (uint)(uVar2 | 0x2000000);
    if (uVar5 == 0x2000003) {
      uVar4 = (undefined4)(0x10);
    }
    else if (uVar5 == 0x2000004) {
      uVar4 = (undefined4)(0x14);
    }
    else if (uVar5 == 0x2000005) {
      uVar4 = (undefined4)(0x14);
    }
    else if (uVar5 == 0x2000008) {
      uVar4 = (undefined4)(0x1c);
    }
    else if (uVar5 == 0x2000009) {
      uVar4 = (undefined4)(0x20);
    }
    else if (uVar5 == 0x200000a) {
      uVar4 = (undefined4)(0x30);
    }
    else if (uVar5 == 0x200000b) {
      uVar4 = (undefined4)(0x40);
    }
    else if (uVar5 == 0x200000c) {
      uVar4 = (undefined4)(0x1c);
    }
    else if (uVar5 == 0x200000d) {
      uVar4 = (undefined4)(0x20);
    }
    else if (uVar5 == 0x2000010) {
      uVar4 = (undefined4)(0x1c);
    }
    else if (uVar5 == 0x2000011) {
      uVar4 = (undefined4)(0x20);
    }
    else if (uVar5 == 0x2000012) {
      uVar4 = (undefined4)(0x30);
    }
    else {
      uVar4 = (undefined4)(0);
      if (uVar5 == 0x2000013) {
        uVar4 = (undefined4)(0x40);
      }
    }
    iVar3 = (int)(thunk_FUN_113dbe10(param_1,uVar2,local_44,0x40,&local_50));
    if ((iVar3 == 0) &&
       (iVar3 = thunk_FUN_113fc780(uVar5,local_58 + 0x5e0,local_44,local_50,local_64), iVar3 == 0))
    {
      local_48 = (int)(local_64 + 0x40);
      iVar3 = (int)(thunk_FUN_113fdc10(uVar5,local_64,local_48,uVar4,local_5c,local_60,local_4c));
      if ((iVar3 == 0) && (*(code **)(param_1 + 0x124) != (code *)0x0)) {
        iVar3 = (int)(local_58 + 0x544);
        iVar1 = (int)(local_58 + 0x524);
        (**(code **)(param_1 + 0x124))
                  (*(undefined4 *)(local_54 + 0x128),5,local_64,uVar4,iVar1,iVar3,0);
        param_1 = (int)(local_54);
        (**(code **)(local_54 + 0x124))
                  (*(undefined4 *)(local_54 + 0x128),6,local_48,uVar4,iVar1,iVar3,0);
      }
    }
  }
  thunk_FUN_11423ed0(*(int *)(param_1 + 0x3c) + 0x524,0x40);
  thunk_FUN_11423ed0(local_44,0x40);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fe540; body size 553 bytes.
#line 1 "ENTRY_113fe540"

void FUN_113fe540(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_118;
  int local_114;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108;
  undefined1 local_104 [64];
  undefined1 local_c4 [128];
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_118);
  local_10c = (int)(param_2);
  local_118 = (undefined4)(0);
  local_114 = (int)(*(int *)(param_1 + 0x3c));
  local_110 = (undefined4)(0);
  iVar4 = (int)(*(int *)(local_114 + 0x10));
  iVar2 = (int)(FUN_113fea90(iVar4,&local_118,&local_110));
  if (iVar2 == 0) {
    uVar3 = (uint)((uint)*(byte *)(iVar4 + 9));
    uVar5 = (uint)(uVar3 | 0x2000000);
    if (uVar5 == 0x2000003) {
      uVar6 = (undefined4)(0x10);
    }
    else if (uVar5 == 0x2000004) {
      uVar6 = (undefined4)(0x14);
    }
    else if (uVar5 == 0x2000005) {
      uVar6 = (undefined4)(0x14);
    }
    else if (uVar5 == 0x2000008) {
      uVar6 = (undefined4)(0x1c);
    }
    else if (uVar5 == 0x2000009) {
      uVar6 = (undefined4)(0x20);
    }
    else if (uVar5 == 0x200000a) {
      uVar6 = (undefined4)(0x30);
    }
    else if (uVar5 == 0x200000b) {
      uVar6 = (undefined4)(0x40);
    }
    else if (uVar5 == 0x200000c) {
      uVar6 = (undefined4)(0x1c);
    }
    else if (uVar5 == 0x200000d) {
      uVar6 = (undefined4)(0x20);
    }
    else if (uVar5 == 0x2000010) {
      uVar6 = (undefined4)(0x1c);
    }
    else if (uVar5 == 0x2000011) {
      uVar6 = (undefined4)(0x20);
    }
    else if (uVar5 == 0x2000012) {
      uVar6 = (undefined4)(0x30);
    }
    else {
      uVar6 = (undefined4)(0);
      if (uVar5 == 0x2000013) {
        uVar6 = (undefined4)(0x40);
      }
    }
    iVar4 = (int)(thunk_FUN_113dbe10(param_1,uVar3,local_44,0x40,&local_108));
    if ((iVar4 == 0) &&
       (iVar4 = thunk_FUN_113fc9e0(uVar5,local_114 + 0x5e0,local_44,local_108,local_104), iVar4 == 0
       )) {
      if (*(code **)(param_1 + 0x124) != (code *)0x0) {
        (**(code **)(param_1 + 0x124))
                  (*(undefined4 *)(param_1 + 0x128),1,local_c4,uVar6,local_114 + 0x524,
                   local_114 + 0x544,0);
      }
      uVar1 = (undefined4)(local_110);
      iVar4 = (int)(FUN_113fee60(uVar5,local_c4,uVar6,local_10c,local_118,local_10c + 0x40,local_110));
      if (iVar4 == 0) {
        *(undefined4 *)(local_10c + 0x60) = local_118;
        *(undefined4 *)(local_10c + 100) = uVar1;
      }
    }
  }
  thunk_FUN_11423ed0(local_104,0xc0);
  thunk_FUN_11423ed0(local_44,0x40);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fe800; body size 522 bytes.
#line 1 "ENTRY_113fe800"

void FUN_113fe800(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_64);
  local_48 = (undefined4)(param_2);
  local_5c = (int)(param_1);
  local_50 = (undefined4)(0);
  local_60 = (int)(*(int *)(param_1 + 0x3c));
  local_54 = (undefined4)(0);
  iVar3 = (int)(*(int *)(local_60 + 0x10));
  local_64 = (int)(local_60 + 0x620);
  iVar1 = (int)(FUN_113fea90(iVar3,&local_50,&local_54));
  if (iVar1 == 0) {
    uVar2 = (uint)((uint)*(byte *)(iVar3 + 9));
    uVar4 = (uint)(uVar2 | 0x2000000);
    if (uVar4 == 0x2000003) {
      uVar5 = (undefined4)(0x10);
    }
    else if (uVar4 == 0x2000004) {
      uVar5 = (undefined4)(0x14);
    }
    else if (uVar4 == 0x2000005) {
      uVar5 = (undefined4)(0x14);
    }
    else if (uVar4 == 0x2000008) {
      uVar5 = (undefined4)(0x1c);
    }
    else if (uVar4 == 0x2000009) {
      uVar5 = (undefined4)(0x20);
    }
    else if (uVar4 == 0x200000a) {
      uVar5 = (undefined4)(0x30);
    }
    else if (uVar4 == 0x200000b) {
      uVar5 = (undefined4)(0x40);
    }
    else if (uVar4 == 0x200000c) {
      uVar5 = (undefined4)(0x1c);
    }
    else if (uVar4 == 0x200000d) {
      uVar5 = (undefined4)(0x20);
    }
    else if (uVar4 == 0x2000010) {
      uVar5 = (undefined4)(0x1c);
    }
    else if (uVar4 == 0x2000011) {
      uVar5 = (undefined4)(0x20);
    }
    else if (uVar4 == 0x2000012) {
      uVar5 = (undefined4)(0x30);
    }
    else {
      uVar5 = (undefined4)(0);
      if (uVar4 == 0x2000013) {
        uVar5 = (undefined4)(0x40);
      }
    }
    iVar3 = (int)(thunk_FUN_113dbe10(param_1,uVar2,local_44,0x40,&local_4c));
    if ((iVar3 == 0) &&
       (iVar3 = thunk_FUN_113fcc00(uVar4,local_60 + 0x5e0,local_44,local_4c,local_64), iVar3 == 0))
    {
      local_58 = (int)(local_64 + 0x40);
      if (*(code **)(param_1 + 0x124) != (code *)0x0) {
        iVar3 = (int)(local_60 + 0x544);
        iVar1 = (int)(local_60 + 0x524);
        (**(code **)(param_1 + 0x124))
                  (*(undefined4 *)(local_5c + 0x128),3,local_64,uVar5,iVar1,iVar3,0);
        (**(code **)(local_5c + 0x124))
                  (*(undefined4 *)(local_5c + 0x128),4,local_58,uVar5,iVar1,iVar3,0);
      }
      thunk_FUN_113fdc10(uVar4,local_64,local_58,uVar5,local_50,local_54,local_48);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113fea90; body size 116 bytes.
#line 1 "ENTRY_113fea90"

undefined4 FUN_113fea90(int param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c [4];
  int local_8;
  undefined1 local_4 [4];
  
  iVar1 = (int)(thunk_FUN_113da480(*(undefined1 *)(param_1 + 8),
                             ((*(byte *)(param_1 + 0xb) & 2) == 0) * '\b' + '\b',local_4,local_c,
                             &local_8));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_11436230(iVar1,&DAT_11bfec68,7,LAB_100409da));
    return (undefined4)(uVar2);
  }
  *param_2 = (uint)(local_8 + 7U >> 3);
  *param_3 = (undefined4)(0xc);
  return (undefined4)(0);
}


// Reference entry 113fef60; body size 126 bytes.
#line 1 "ENTRY_113fef60"

undefined4 FUN_113fef60(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113dd980(param_1));
  *param_2 = (int)(iVar1);
  iVar1 = (int)(thunk_FUN_113dcfc0(param_1 >> 8));
  *param_3 = (int)(iVar1);
  if ((*param_2 == 0) || (iVar1 == 0)) {
    param_1 = (uint)(param_1 & 0xffff);
    if (param_1 != 0x804) {
      if (param_1 == 0x805) {
        *param_3 = (int)(10);
        *param_2 = (int)(6);
        return (undefined4)(0);
      }
      if (param_1 != 0x806) {
        return (undefined4)(0xffff8f80);
      }
      *param_3 = (int)(0xb);
      *param_2 = (int)(6);
      return (undefined4)(0);
    }
    *param_3 = (int)(9);
    *param_2 = (int)(6);
  }
  return (undefined4)(0);
}


// Reference entry 113ff070; body size 131 bytes.
#line 1 "ENTRY_113ff070"

void FUN_113ff070(int param_1)

{
  int iVar1;
  int local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_4c);
  iVar1 = (int)(thunk_FUN_113dbe10(param_1,*(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x10) + 9),
                             local_44,0x40,&local_4c));
  if (iVar1 == 0) {
    local_46 = (undefined1)(0);
    local_45 = (undefined1)((undefined1)local_4c);
    local_4c = (int)(local_4c + 4);
    local_48 = (undefined2)(0xfe);
    iVar1 = (int)(thunk_FUN_113ddae0(param_1));
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x3c) + 0x14))(param_1,&local_48,local_4c);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113ff170; body size 76 bytes.
#line 1 "ENTRY_113ff170"

undefined4 FUN_113ff170(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    return (undefined4)(0xffff9400);
  }
  if ((uint)(*(int *)(*(int *)(param_1 + 0x38) + 0xd0) - *(int *)(param_1 + 0xc0)) < param_2) {
    thunk_FUN_113e50f0(param_1,10,0xffff8900);
    return (undefined4)(0xffff8900);
  }
  *(uint *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + param_2;
  return (undefined4)(0);
}


// Reference entry 113ff1d0; body size 120 bytes.
#line 1 "ENTRY_113ff1d0"

undefined4 FUN_113ff1d0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = (uint)(thunk_FUN_113dbb30(param_3));
  if ((param_4 & uVar2) == 0) {
    thunk_FUN_113e50f0(param_1,0x2f,0xffff9a00);
    return (undefined4)(0xffff9a00);
  }
  puVar1 = (uint *)((uint *)(*(int *)(param_1 + 0x3c) + 0x5d0));
  *puVar1 = (uint)(*puVar1 | uVar2);
  switch(param_2) {
  case 0xfffffffe:
  case 2:
  case 8:
  case 0xb:
    if ((*(uint *)(*(int *)(param_1 + 0x3c) + 0x5cc) & uVar2) == 0) {
      thunk_FUN_113e50f0(param_1,0x6e,0xffff8b00);
      return (undefined4)(0xffff8b00);
    }
  }
  return (undefined4)(0);
}


// Reference entry 113ff290; body size 140 bytes.
#line 1 "ENTRY_113ff290"

bool FUN_113ff290(short param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(thunk_FUN_113def50(param_2));
  iVar2 = (int)(thunk_FUN_1140add0(param_2));
  if (cVar1 == '\x01') {
    if (((param_1 == 0x804) || (param_1 == 0x805)) || (param_1 == 0x806)) {
      return (bool)(true);
    }
  }
  else if (cVar1 == '\x03') {
    if (iVar2 == 0x100) {
      return (bool)(param_1 == 0x403);
    }
    if (iVar2 == 0x180) {
      return (bool)(param_1 == 0x503);
    }
    if (iVar2 == 0x209) {
      return (bool)(param_1 == 0x603);
    }
  }
  return (bool)(false);
}


// Reference entry 113ff370; body size 91 bytes.
#line 1 "ENTRY_113ff370"

int FUN_113ff370(int param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113e56d0(param_1,0));
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x7c) == 0x16) && (**(byte **)(param_1 + 0x74) == param_2)) {
      *param_3 = (int)((int)(*(byte **)(param_1 + 0x74) + 4));
      *param_4 = (int)(*(int *)(param_1 + 0xa8) + -4);
      return (int)(0);
    }
    thunk_FUN_113e50f0(param_1,10,0xffff8900);
    iVar1 = (int)(-0x7700);
  }
  return (int)(iVar1);
}


// Reference entry 113ff3f0; body size 379 bytes.
#line 1 "ENTRY_113ff3f0"

/* WARNING: Type propagation algorithm not settling */

void FUN_113ff3f0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_30 [3];
  undefined4 local_24;
  undefined4 *local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_30);
  uVar4 = (undefined4)(0);
  iVar1 = (int)(*(int *)(param_1 + 0x3c));
  local_20 = (undefined4 *)(param_5);
  local_30[2] = (int)(param_1);
  local_30[0] = (int)(0);
  local_30[1] = (int)(0);
  iVar2 = (int)(thunk_FUN_113dc610(param_2,local_30 + 1,local_30));
  if (iVar2 == 0) {
    uVar4 = (undefined4)(0x9020000);
  }
  if ((short)local_30[1] == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  if ((uint)(param_4 - param_3) < local_30[0] + 7U >> 3) {
    thunk_FUN_1148ac28();
    return;
  }
  *(short *)(iVar1 + 0x100) = (short)local_30[1];
  *(int *)(*(int *)(local_30[2] + 0x3c) + 0x104) = local_30[0];
  local_18 = (undefined4)(0);
  local_c = (undefined4)(0);
  local_8 = (undefined4)(0);
  local_14 = (undefined4)(0x4000);
  local_1c = (undefined2)(*(undefined2 *)(iVar1 + 0x100));
  uVar3 = (uint)(*(uint *)(iVar1 + 0x104));
  if (0xfff8 < uVar3) {
    uVar3 = (uint)(0xffff);
  }
  local_1a = (undefined2)((undefined2)uVar3);
  local_10 = (undefined4)(uVar4);
  iVar2 = (int)(thunk_FUN_1142b900(&local_1c,(undefined4 *)(iVar1 + 0x108)));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_1142b060(*(undefined4 *)(iVar1 + 0x108),param_3,param_4 - param_3,&local_24));
    if (iVar2 == 0) {
      *local_20 = (undefined4)(local_24);
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_11436230(iVar2,&DAT_11bfec68,7,LAB_100409da);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 113ff5d0; body size 66 bytes.
#line 1 "ENTRY_113ff5d0"

void FUN_113ff5d0(int param_1)

{
  thunk_FUN_113e5f90(param_1,*(undefined4 *)(param_1 + 0x50));
  thunk_FUN_113e5fb0(param_1,*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_113dde70(*(int *)(param_1 + 0x34));
    free(*(void **)(param_1 + 0x34));
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


// Reference entry 113ff630; body size 220 bytes.
#line 1 "ENTRY_113ff630"

undefined4 FUN_113ff630(undefined4 param_1,int param_2,int param_3,int *param_4,uint *param_5)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  *param_4 = (int)(0);
  *param_5 = (uint)(0);
  if (param_2 == param_3) {
    return (undefined4)(0);
  }
  uVar6 = (undefined8)(FUN_113fef30(param_2,param_3,2));
  puVar4 = (undefined2 *)((undefined2 *)((ulonglong)uVar6 >> 0x20));
  if ((int)uVar6 == 0) {
    uVar1 = (undefined2)(*puVar4);
    uVar2 = (uint)((uint)((uint)((char)uVar1) << 8 | (uint)((char)((ushort)uVar1 >> 8))));
    uVar6 = (undefined8)(FUN_113fef30(puVar4 + 1,param_3,uVar2));
    uVar3 = (uint)((uint)((ulonglong)uVar6 >> 0x20));
    if ((int)uVar6 == 0) {
      uVar2 = (uint)(uVar2 + uVar3);
      while( true ) {
        if (uVar2 <= uVar3) {
          return (undefined4)(0);
        }
        uVar6 = (undefined8)(FUN_113fef30(uVar3,uVar2,4));
        puVar4 = (undefined2 *)((undefined2 *)((ulonglong)uVar6 >> 0x20));
        if ((int)uVar6 != 0) break;
        uVar1 = (undefined2)(*puVar4);
        uVar3 = (uint)((uint)((uint)((char)puVar4[1]) << 8 | (uint)((char)((ushort)puVar4[1] >> 8))));
        uVar6 = (undefined8)(FUN_113fef30(puVar4 + 2,uVar2,uVar3));
        iVar5 = (int)((int)((ulonglong)uVar6 >> 0x20));
        if ((int)uVar6 != 0) break;
        uVar3 = (uint)(uVar3 + iVar5);
        if (((uint)((char)uVar1) << 8 | (uint)((char)((ushort)uVar1 >> 8))) == 0x2b) {
          *param_4 = (int)(iVar5);
          *param_5 = (uint)(uVar3);
          return (undefined4)(1);
        }
      }
    }
  }
  thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
  return (undefined4)(0xffff8d00);
}


// Reference entry 113ffdd0; body size 222 bytes.
#line 1 "ENTRY_113ffdd0"

int FUN_113ffdd0(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(thunk_FUN_113e56d0(param_1,0));
  if (iVar3 == 0) {
    if ((param_1[0x1f] != 0x16) || (*(char *)param_1[0x1d] != '\x14')) {
      thunk_FUN_113e50f0(param_1,10,0xffff8900);
      return (int)(-0x7700);
    }
    iVar2 = (int)(param_1[0x2a]);
    pcVar1 = (char *)((char *)param_1[0x1d] + 4);
    iVar3 = (int)(thunk_FUN_113fbdf0(param_1,param_1[0xf] + 0x4dd,0x40,param_1[0xf] + 0x520,
                               *(char *)(*param_1 + 8) == '\0'));
    if (iVar3 == 0) {
      iVar3 = (int)(*(int *)(param_1[0xf] + 0x520));
      if (iVar2 + -4 == iVar3) {
        iVar3 = (int)(thunk_FUN_114351b0(pcVar1,param_1[0xf] + 0x4dd,iVar3));
        if (iVar3 == 0) {
          iVar3 = (int)(thunk_FUN_113da210(param_1,0x14,pcVar1,iVar2 + -4));
          return (int)(iVar3);
        }
        thunk_FUN_113e50f0(param_1,0x33,0xffff9200);
        return (int)(-0x6e00);
      }
      thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
      iVar3 = (int)(-0x7300);
    }
  }
  return (int)(iVar3);
}


// Reference entry 113ffef0; body size 134 bytes.
#line 1 "ENTRY_113ffef0"

undefined4 FUN_113ffef0(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  uint _Size;
  undefined2 *puVar3;
  undefined8 uVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 0x3c));
  uVar4 = (undefined8)(FUN_113fef30(param_2,param_3 + (int)param_2,2));
  puVar3 = (undefined2 *)((undefined2 *)((ulonglong)uVar4 >> 0x20));
  if ((int)uVar4 == 0) {
    uVar2 = (ushort)(((uint)((char)*param_2) << 8 | (uint)((char)((ushort)*param_2 >> 8))));
    _Size = (uint)((uint)uVar2);
    param_2 = (undefined2 *)(param_2 + 1);
    if ((param_2 <= puVar3) && (_Size <= (uint)((int)puVar3 - (int)param_2))) {
      if (0x210 < uVar2) {
        return (undefined4)(0xffff9200);
      }
      memcpy((void *)(iVar1 + 0x10d),param_2,_Size);
      *(uint *)(iVar1 + 800) = _Size;
      return (undefined4)(0);
    }
  }
  thunk_FUN_113e50f0(param_1,0x32,0xffff8d00);
  return (undefined4)(0xffff8d00);
}


// Reference entry 11400610; body size 100 bytes.
#line 1 "ENTRY_11400610"

int FUN_11400610(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x3c) + 0x26) != '\0') {
    return (int)(0);
  }
  uVar2 = (undefined8)(FUN_113fef30(*(int *)(param_1 + 0xd8),*(int *)(param_1 + 0xd8) + 0x4000,1));
  if ((int)uVar2 != 0) {
    return (int)(-0x6a00);
  }
  *(undefined1 *)((ulonglong)uVar2 >> 0x20) = 1;
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xdc) = 0x14;
  iVar1 = (int)(thunk_FUN_113e6740(param_1,0));
  if (iVar1 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x26) = 1;
  }
  return (int)(iVar1);
}


// Reference entry 11400690; body size 129 bytes.
#line 1 "ENTRY_11400690"

undefined4
FUN_11400690(int *param_1,int param_2,undefined2 *param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  *param_5 = (int)(0);
  uVar4 = (undefined8)(FUN_113fef30(param_3,param_4,(param_2 != 0) * '\x04' + '\x04'));
  iVar3 = (int)((int)((ulonglong)uVar4 >> 0x20));
  if ((int)uVar4 != 0) {
    return (undefined4)(0xffff9600);
  }
  iVar1 = (int)(iVar3 + -4);
  *param_3 = (undefined2)(0x2a00);
  param_3[1] = (undefined2)((short)((uint)((int3)iVar1) << 8 | (uint)((char)((uint)iVar1 >> 8))));
  if (param_2 != 0) {
    uVar2 = (uint)(*(uint *)(*param_1 + 0x9c));
    *(uint *)(param_3 + 2) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  }
  *param_5 = (int)(iVar3);
  iVar3 = (int)(param_1[0xf]);
  uVar2 = (uint)(thunk_FUN_113dbb30(0x2a));
  *(uint *)(iVar3 + 0x5cc) = *(uint *)(iVar3 + 0x5cc) | uVar2;
  return (undefined4)(0);
}


// Reference entry 11400740; body size 169 bytes.
#line 1 "ENTRY_11400740"

int FUN_11400740(int *param_1)

{
  size_t _Size;
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int local_4;
  
  piVar1 = (int *)(param_1);
  iVar2 = (int)(thunk_FUN_113fbdf0(param_1,param_1[0xf] + 0x4dd,0x40,param_1[0xf] + 0x520,
                             *(undefined1 *)(*param_1 + 8)));
  if ((iVar2 == 0) && (iVar2 = thunk_FUN_113e6000(piVar1,0x14,&param_1,&local_4), iVar2 == 0)) {
    iVar2 = (int)(piVar1[0xf]);
    _Size = (size_t)(*(size_t *)(iVar2 + 0x520));
    uVar3 = (undefined8)(FUN_113fef30(param_1,local_4 + (int)param_1,_Size));
    if ((int)uVar3 != 0) {
      return (int)(-0x6a00);
    }
    memcpy((void *)((ulonglong)uVar3 >> 0x20),(void *)(iVar2 + 0x4dd),_Size);
    iVar2 = (int)(thunk_FUN_113da210(piVar1,0x14,param_1,_Size));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_113e45a0(piVar1,local_4,_Size));
    }
  }
  return (int)(iVar2);
}


// Reference entry 11400900; body size 122 bytes.
#line 1 "ENTRY_11400900"

void FUN_11400900(void *param_1,size_t param_2,void *param_3,int *param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  
  memset(param_3,0x20,0x40);
  uVar6 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 216));
  uVar5 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 212));
  uVar4 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 208));
  uVar3 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 183));
  uVar2 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 179));
  uVar1 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 175));
  if (param_5 == 0) {
    *(undefined4 *)((int)param_3 + 0x40) = *(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 171);
    *(undefined4 *)((int)param_3 + 0x44) = uVar1;
    *(undefined4 *)((int)param_3 + 0x48) = uVar2;
    *(undefined4 *)((int)param_3 + 0x4c) = uVar3;
    uVar3 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 199));
    uVar2 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 195));
    uVar1 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 191));
    *(undefined4 *)((int)param_3 + 0x50) = *(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 187);
    *(undefined4 *)((int)param_3 + 0x54) = uVar1;
    *(undefined4 *)((int)param_3 + 0x58) = uVar2;
    *(undefined4 *)((int)param_3 + 0x5c) = uVar3;
    cVar7 = (char)(s_finishedresumptiontraffic_updexp_11bfd8c8[0xcb]);
  }
  else {
    *(undefined4 *)((int)param_3 + 0x40) = *(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 204);
    *(undefined4 *)((int)param_3 + 0x44) = uVar4;
    *(undefined4 *)((int)param_3 + 0x48) = uVar5;
    *(undefined4 *)((int)param_3 + 0x4c) = uVar6;
    uVar3 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 232));
    uVar2 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 228));
    uVar1 = (undefined4)(*(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 224));
    *(undefined4 *)((int)param_3 + 0x50) = *(uint *)((char *)&s_finishedresumptiontraffic_updexp_11bfd8c8 + 220);
    *(undefined4 *)((int)param_3 + 0x54) = uVar1;
    *(undefined4 *)((int)param_3 + 0x58) = uVar2;
    *(undefined4 *)((int)param_3 + 0x5c) = uVar3;
    cVar7 = (char)(s_finishedresumptiontraffic_updexp_11bfd8c8[0xec]);
  }
  *(char *)((int)param_3 + 0x60) = cVar7;
  *(undefined1 *)((int)param_3 + 0x61) = 0;
  memcpy((void *)((int)param_3 + 0x62),param_1,param_2);
  *param_4 = (int)(param_2 + 0x62);
  return;
}


// Reference entry 11401500; body size 171 bytes.
#line 1 "ENTRY_11401500"

undefined4 FUN_11401500(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  if ((*(uint *)(param_1 + 0x158) & 0x800) == 0) {
    return (undefined4)(0);
  }
  param_1 = (int)(param_1 + 0x168);
  do {
    if (param_1 == 0) {
      return (undefined4)(0xffffd800);
    }
    if (*(uint *)(param_1 + 4) == param_3) {
      piVar3 = (int *)(*(int **)(param_1 + 8));
      piVar4 = (int *)(param_2);
      uVar2 = (uint)(param_3);
      while (uVar1 = uVar2 - 4, 3 < uVar2) {
        if (*piVar3 != *piVar4) goto LAB_11401556;
        piVar3 = (int *)(piVar3 + 1);
        piVar4 = (int *)(piVar4 + 1);
        uVar2 = (uint)(uVar1);
      }
      if (uVar1 == 0xfffffffc) {
        return (undefined4)(0);
      }
LAB_11401556:
      if ((char)*piVar3 == (char)*piVar4) {
        if (uVar1 == 0xfffffffd) {
          return (undefined4)(0);
        }
        if (*(char *)((int)piVar3 + 1) == *(char *)((int)piVar4 + 1)) {
          if (uVar1 == 0xfffffffe) {
            return (undefined4)(0);
          }
          if (*(char *)((int)piVar3 + 2) == *(char *)((int)piVar4 + 2)) {
            if (uVar1 == 0xffffffff) {
              return (undefined4)(0);
            }
            if (*(char *)((int)piVar3 + 3) == *(char *)((int)piVar4 + 3)) {
              return (undefined4)(0);
            }
          }
        }
      }
    }
    if ((*(uint *)(param_1 + 4) == 4) && (**(int **)(param_1 + 8) == 0x251d55)) {
      return (undefined4)(0);
    }
    param_1 = (int)(*(int *)(param_1 + 0xc));
  } while( true );
}


// Reference entry 11401620; body size 69 bytes.
#line 1 "ENTRY_11401620"

undefined4 FUN_11401620(int param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x158) & 4) != 0) {
    if (((*(uint *)(param_1 + 0x164) & param_2 & 0xffff7ffe) != (param_2 & 0xffff7ffe)) ||
       ((*(uint *)(param_1 + 0x164) & 0x8001 | param_2 & 0x8001) != (param_2 & 0x8001))) {
      return (undefined4)(0xffffd800);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11401680; body size 187 bytes.
#line 1 "ENTRY_11401680"

void FUN_11401680(int *param_1)

{
  int *piVar1;
  int *_Memory;
  
  piVar1 = (int *)(param_1);
  while (_Memory = piVar1, _Memory != (int *)0x0) {
    thunk_FUN_1140ad90(_Memory + 0x33);
    free((void *)_Memory[100]);
    thunk_FUN_1140c060(_Memory[0x1a]);
    thunk_FUN_1140c060(_Memory[0x22]);
    thunk_FUN_1140c7a0(_Memory[0x5d]);
    thunk_FUN_1140c7a0(_Memory[0x41]);
    thunk_FUN_1140c7a0(_Memory[0x55]);
    thunk_FUN_1140c7a0(_Memory[0x4b]);
    if ((_Memory[3] != 0) && (*_Memory != 0)) {
      thunk_FUN_11423f00(_Memory[3],_Memory[2]);
    }
    piVar1 = (int *)((int *)_Memory[0x65]);
    thunk_FUN_11423ed0(_Memory,0x198);
    if (_Memory != (int *)(param_1)) {
      free(_Memory);
    }
  }
  return;
}


// Reference entry 11401f40; body size 137 bytes.
#line 1 "ENTRY_11401f40"

undefined4 FUN_11401f40(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  param_2 = (int)(param_2 + 0x84);
  do {
    if ((param_2 == 0) || (*(uint *)(param_2 + 0x10) == 0)) {
      return (undefined4)(0);
    }
    if (*(uint *)(param_1 + 0x24) == *(uint *)(param_2 + 0x10)) {
      piVar3 = (int *)(*(int **)(param_1 + 0x28));
      piVar4 = (int *)(*(int **)(param_2 + 0x14));
      uVar2 = (uint)(*(uint *)(param_1 + 0x24));
      while (uVar1 = uVar2 - 4, 3 < uVar2) {
        if (*piVar3 != *piVar4) goto LAB_11401f86;
        piVar3 = (int *)(piVar3 + 1);
        piVar4 = (int *)(piVar4 + 1);
        uVar2 = (uint)(uVar1);
      }
      if (uVar1 == 0xfffffffc) {
        return (undefined4)(1);
      }
LAB_11401f86:
      if ((char)*piVar3 == (char)*piVar4) {
        if (uVar1 == 0xfffffffd) {
          return (undefined4)(1);
        }
        if (*(char *)((int)piVar3 + 1) == *(char *)((int)piVar4 + 1)) {
          if (uVar1 == 0xfffffffe) {
            return (undefined4)(1);
          }
          if (*(char *)((int)piVar3 + 2) == *(char *)((int)piVar4 + 2)) {
            if (uVar1 == 0xffffffff) {
              return (undefined4)(1);
            }
            if (*(char *)((int)piVar3 + 3) == *(char *)((int)piVar4 + 3)) {
              return (undefined4)(1);
            }
          }
        }
      }
    }
    param_2 = (int)(*(int *)(param_2 + 0x3c));
  } while( true );
}


// Reference entry 11402f60; body size 243 bytes.
#line 1 "ENTRY_11402f60"

void FUN_11402f60(undefined4 param_1,char *param_2)

{
 try {
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined1 local_14 [12];
  byte *pbStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_14);
  pcVar3 = (char *)(strchr(param_2,0x3a));
  if (pcVar3 == (char *)0x0) {
    iVar4 = (int)(inet_pton(2,param_2,local_14));
    uVar6 = (uint)((-(uint)(iVar4 != 1) & 0xfffffffc) + 4);
  }
  else {
    iVar4 = (int)(inet_pton(0x17,param_2,local_14));
    uVar6 = (uint)((-(uint)(iVar4 != 1) & 0xfffffff0) + 0x10);
  }
  if (uVar6 != 0) {
    for (; pbStack_8 != (byte *)0x0; pbStack_8 = *(byte **)(pbStack_8 + 0xc)) {
      if (((*pbStack_8 & 0x1f) == 7) && (*(uint *)(pbStack_8 + 4) == uVar6)) {
        piVar5 = (int *)(*(int **)(pbStack_8 + 8));
        piVar7 = (int *)((int *)&stack0xffffffe0);
        uVar2 = (uint)(uVar6);
        while (uVar1 = uVar2 - 4, 3 < uVar2) {
          if (*piVar5 != *piVar7) goto LAB_11402ff6;
          piVar5 = (int *)(piVar5 + 1);
          piVar7 = (int *)(piVar7 + 1);
          uVar2 = (uint)(uVar1);
        }
        if (uVar1 == 0xfffffffc) {
LAB_1140303f:
          thunk_FUN_1148ac28();
          return;
        }
LAB_11402ff6:
        if (((char)*piVar5 == (char)*piVar7) &&
           ((uVar1 == 0xfffffffd ||
            ((*(char *)((int)piVar5 + 1) == *(char *)((int)piVar7 + 1) &&
             ((uVar1 == 0xfffffffe ||
              ((*(char *)((int)piVar5 + 2) == *(char *)((int)piVar7 + 2) &&
               ((uVar1 == 0xffffffff || (*(char *)((int)piVar5 + 3) == *(char *)((int)piVar7 + 3))))
               ))))))))) goto LAB_1140303f;
      }
    }
  }
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11403090; body size 137 bytes.
#line 1 "ENTRY_11403090"

undefined4 FUN_11403090(byte *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  do {
    if (param_1 == (byte *)0x0) {
      return (undefined4)(0xffffffff);
    }
    if (((*param_1 & 0x1f) == 6) && (*(uint *)(param_1 + 4) == param_3)) {
      piVar3 = (int *)(*(int **)(param_1 + 8));
      piVar4 = (int *)(param_2);
      uVar2 = (uint)(param_3);
      while (uVar1 = uVar2 - 4, 3 < uVar2) {
        if (*piVar3 != *piVar4) goto LAB_114030d6;
        piVar3 = (int *)(piVar3 + 1);
        piVar4 = (int *)(piVar4 + 1);
        uVar2 = (uint)(uVar1);
      }
      if (uVar1 == 0xfffffffc) {
        return (undefined4)(0);
      }
LAB_114030d6:
      if ((char)*piVar3 == (char)*piVar4) {
        if (uVar1 == 0xfffffffd) {
          return (undefined4)(0);
        }
        if (*(char *)((int)piVar3 + 1) == *(char *)((int)piVar4 + 1)) {
          if (uVar1 == 0xfffffffe) {
            return (undefined4)(0);
          }
          if (*(char *)((int)piVar3 + 2) == *(char *)((int)piVar4 + 2)) {
            if (uVar1 == 0xffffffff) {
              return (undefined4)(0);
            }
            if (*(char *)((int)piVar3 + 3) == *(char *)((int)piVar4 + 3)) {
              return (undefined4)(0);
            }
          }
        }
      }
    }
    param_1 = (byte *)(*(byte **)(param_1 + 0xc));
  } while( true );
}


// Reference entry 11403140; body size 183 bytes.
#line 1 "ENTRY_11403140"

void FUN_11403140(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_44);
  uVar2 = (undefined4)(thunk_FUN_1140d570(*(undefined4 *)(param_1 + 0x188)));
  uVar1 = (undefined1)(thunk_FUN_1140ce80(uVar2));
  iVar3 = (int)(thunk_FUN_1140c8e0(uVar2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14),
                             local_44));
  if (iVar3 == 0) {
    iVar3 = (int)(thunk_FUN_1140abd0(param_2 + 0xcc,*(undefined4 *)(param_1 + 0x18c)));
    if (iVar3 != 0) {
      thunk_FUN_1140ba40(*(undefined4 *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 400),
                         param_2 + 0xcc,*(undefined4 *)(param_1 + 0x188),local_44,uVar1,
                         *(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x180));
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11405b00; body size 129 bytes.
#line 1 "ENTRY_11405b00"

undefined4 FUN_11405b00(int *param_1,uint *param_2,undefined *param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  uVar7 = (uint)(*param_2);
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  iVar5 = (int)(*param_1);
  puVar1 = (undefined *)(param_3);
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      *param_2 = (uint)(uVar7);
      *param_1 = (int)(iVar5);
      return (undefined4)(0);
    }
    iVar2 = (int)(thunk_FUN_114365f0(puVar1,&param_3));
    puVar4 = (undefined *)(&DAT_11bfe044);
    if (iVar2 == 0) {
      puVar4 = (undefined *)(param_3);
    }
    param_3 = (undefined *)(puVar4);
    uVar3 = (uint)(thunk_FUN_111c0480(iVar5,uVar7,&DAT_1188e99c,puVar6,puVar4));
    if (((int)uVar3 < 0) || (uVar7 <= uVar3)) break;
    puVar1 = (undefined *)(*(undefined **)(puVar1 + 0xc));
    uVar7 = (uint)(uVar7 - uVar3);
    iVar5 = (int)(iVar5 + uVar3);
    puVar6 = (undefined1 *)(&DAT_118823e0);
  }
  return (undefined4)(0xffffd680);
}


// Reference entry 11405bb0; body size 129 bytes.
#line 1 "ENTRY_11405bb0"

undefined4 FUN_11405bb0(int *param_1,uint *param_2,undefined *param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  uVar7 = (uint)(*param_2);
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  iVar5 = (int)(*param_1);
  puVar1 = (undefined *)(param_3);
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      *param_2 = (uint)(uVar7);
      *param_1 = (int)(iVar5);
      return (undefined4)(0);
    }
    iVar2 = (int)(thunk_FUN_11436930(puVar1,&param_3));
    puVar4 = (undefined *)(&DAT_11bfe044);
    if (iVar2 == 0) {
      puVar4 = (undefined *)(param_3);
    }
    param_3 = (undefined *)(puVar4);
    uVar3 = (uint)(thunk_FUN_111c0480(iVar5,uVar7,&DAT_1188e99c,puVar6,puVar4));
    if (((int)uVar3 < 0) || (uVar7 <= uVar3)) break;
    puVar1 = (undefined *)(*(undefined **)(puVar1 + 0xc));
    uVar7 = (uint)(uVar7 - uVar3);
    iVar5 = (int)(iVar5 + uVar3);
    puVar6 = (undefined1 *)(&DAT_118823e0);
  }
  return (undefined4)(0xffffd680);
}


// Reference entry 11405c60; body size 70 bytes.
#line 1 "ENTRY_11405c60"

undefined4 FUN_11405c60(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  if (param_3 != 0) {
    param_2 = (int)(param_2 - (int)param_1);
    do {
      bVar1 = (byte)(*param_1);
      if (((param_1[param_2] ^ bVar1) != 0) &&
         (((param_1[param_2] ^ bVar1) != 0x20 ||
          (((bVar1 < 0x61 || (0x7a < bVar1)) && (0x19 < (byte)(bVar1 + 0xbf))))))) {
        return (undefined4)(0xffffffff);
      }
      uVar2 = (uint)(uVar2 + 1);
      param_1 = (byte *)(param_1 + 1);
    } while (uVar2 < param_3);
  }
  return (undefined4)(0);
}


// Reference entry 11405e60; body size 147 bytes.
#line 1 "ENTRY_11405e60"

undefined4 FUN_11405e60(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8;
  int *local_4;
  
  iVar1 = (int)(thunk_FUN_1140b1f0(param_2));
  if ((iVar1 == 1) || (iVar1 == 6)) {
    uVar2 = (uint)(thunk_FUN_1140add0(param_2));
    if (*(uint *)(param_1 + 0xc) <= uVar2) {
      return (undefined4)(0);
    }
  }
  else if (((iVar1 == 4) || (iVar1 == 2)) || (iVar1 == 3)) {
    local_8 = (undefined4)(*param_2);
    local_4 = (int *)((int *)param_2[1]);
    iVar1 = (int)(thunk_FUN_1140b1f0(&local_8));
    if (((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) {
      local_4 = (int *)((int *)0x0);
    }
    if ((*local_4 != 0) && ((*(uint *)(param_1 + 8) & 1 << ((char)*local_4 - 1U & 0x1f)) != 0)) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 11406650; body size 126 bytes.
#line 1 "ENTRY_11406650"

int FUN_11406650(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  undefined1 local_8;
  int local_4;
  
  local_c = (uint)(0);
  local_8 = (undefined1)(0);
  local_4 = (int)(0);
  iVar2 = (int)(thunk_FUN_1140c340(param_1,param_2,&local_c));
  if (iVar2 != 0) {
    return (int)(iVar2 + -0x2500);
  }
  *param_3 = (uint)(0);
  if ((local_c != 0) && (uVar5 = 0, local_c != 0)) {
    uVar4 = (uint)(0);
    do {
      if (0x1f < uVar4) {
        return (int)(0);
      }
      pbVar1 = (byte *)((byte *)(uVar5 + local_4));
      uVar5 = (uint)(uVar5 + 1);
      bVar3 = (byte)((byte)uVar4);
      uVar4 = (uint)(uVar4 + 8);
      *param_3 = (uint)(*param_3 | (uint)*pbVar1 << (bVar3 & 0x1f));
    } while (uVar5 < local_c);
  }
  return (int)(0);
}


// Reference entry 11406920; body size 108 bytes.
#line 1 "ENTRY_11406920"

int FUN_11406920(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int local_c;
  undefined1 local_8;
  undefined1 *local_4;
  
  local_c = (int)(0);
  local_8 = (undefined1)(0);
  local_4 = (undefined1 *)((undefined1 *)0x0);
  iVar1 = (int)(thunk_FUN_1140c340(param_1,param_2,&local_c));
  if (iVar1 != 0) {
    return (int)(iVar1 + -0x2500);
  }
  if (local_c == 0) {
    *param_3 = (undefined1)(0);
    return (int)(0);
  }
  if (local_c != 1) {
    return (int)(-0x2564);
  }
  *param_3 = (undefined1)(*local_4);
  return (int)(0);
}


// Reference entry 114069b0; body size 814 bytes.
#line 1 "ENTRY_114069b0"

int FUN_114069b0(byte *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int local_28;
  undefined1 local_24 [4];
  int local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  byte *local_10;
  int local_c;
  int local_8;
  byte *local_4;
  
  puVar2 = (undefined4 *)(param_3);
  puVar1 = (undefined4 *)(param_2);
  *param_2 = (undefined4)(5);
  *param_3 = (undefined4)(5);
  *param_4 = (undefined4)(0x14);
  if (*(int *)param_1 != 0x30) {
    return (int)(-0x2362);
  }
  param_2 = (undefined4 *)(*(undefined4 **)(param_1 + 8));
  iVar5 = (int)(*(int *)(param_1 + 4) + (int)param_2);
  if (param_2 == (undefined4 *)iVar5) {
    return (int)(0);
  }
  iVar3 = (int)(thunk_FUN_1140c750(&param_2,iVar5,&param_3,0xa0));
  if (iVar3 == 0) {
    iVar4 = (int)((int)param_3 + (int)param_2);
    iVar3 = (int)(thunk_FUN_1140c1d0(&param_2,iVar4,local_24));
    if ((iVar3 != 0) && (iVar3 + -0x2300 != 0)) {
      return (int)(iVar3 + -0x2300);
    }
    iVar3 = (int)(thunk_FUN_11436a00(local_24,puVar1));
    if (iVar3 != 0) goto LAB_11406cbb;
    if (param_2 != (undefined4 *)iVar4) {
      return (int)(-0x2366);
    }
  }
  else if (iVar3 != -0x62) goto LAB_11406cbb;
  if (param_2 == (undefined4 *)iVar5) {
    return (int)(0);
  }
  iVar3 = (int)(thunk_FUN_1140c750(&param_2,iVar5,&param_3,0xa1));
  if (iVar3 == 0) {
    iVar4 = (int)((int)param_3 + (int)param_2);
    iVar3 = (int)(thunk_FUN_1140c090(&param_2,iVar4,local_24,&local_c));
    if ((iVar3 != 0) && (iVar3 + -0x2300 != 0)) {
      return (int)(iVar3 + -0x2300);
    }
    if ((((local_20 != 9) || (*local_1c != -0x79b779d6)) || (local_1c[1] != 0x1010df7)) ||
       ((char)local_1c[2] != '\b')) {
      return (int)(-0x20ae);
    }
    if (local_c != 0x30) {
      return (int)(-0x2362);
    }
    pbVar6 = (byte *)(local_4 + local_8);
    param_1 = (byte *)(local_4);
    if (pbVar6 <= local_4) {
      return (int)(-0x2360);
    }
    local_18 = (uint)((uint)*local_4);
    iVar3 = (int)(thunk_FUN_1140c750(&param_1,pbVar6,&local_14,6));
    if (iVar3 == 0) {
      local_10 = (byte *)(param_1);
      param_1 = (byte *)(param_1 + local_14);
      iVar3 = (int)(thunk_FUN_11436a00(&local_18,puVar2));
      if (iVar3 != 0) goto LAB_11406bb9;
      if ((byte *)(param_1) != pbVar6) {
        iVar3 = (int)(thunk_FUN_1140c750(&param_1,pbVar6,&local_28,5));
        if ((iVar3 != 0) || (local_28 != 0)) goto LAB_11406bb9;
        if ((byte *)(param_1) != pbVar6) {
          return (int)(-0x2366);
        }
      }
    }
    else {
LAB_11406bb9:
      if (iVar3 + -0x2300 != 0) {
        return (int)(iVar3 + -0x2300);
      }
    }
    if (param_2 != (undefined4 *)iVar4) {
      return (int)(-0x2366);
    }
  }
  else if (iVar3 != -0x62) goto LAB_11406cbb;
  if (param_2 != (undefined4 *)iVar5) {
    iVar3 = (int)(thunk_FUN_1140c750(&param_2,iVar5,&param_3,0xa2));
    if (iVar3 == 0) {
      iVar4 = (int)((int)param_3 + (int)param_2);
      iVar3 = (int)(thunk_FUN_1140c500(&param_2,iVar4,param_4));
      if (iVar3 != 0) goto LAB_11406cbb;
      if (param_2 != (undefined4 *)iVar4) {
        return (int)(-0x2366);
      }
    }
    else if (iVar3 != -0x62) goto LAB_11406cbb;
    if (param_2 != (undefined4 *)iVar5) {
      iVar3 = (int)(thunk_FUN_1140c750(&param_2,iVar5,&param_3,0xa3));
      if (iVar3 == 0) {
        iVar4 = (int)((int)param_3 + (int)param_2);
        iVar3 = (int)(thunk_FUN_1140c500(&param_2,iVar4,&param_4));
        if (iVar3 != 0) {
LAB_11406cbb:
          return (int)(iVar3 + -0x2300);
        }
        if (param_2 != (undefined4 *)iVar4) {
          return (int)(-0x2366);
        }
        if (param_4 != (undefined4 *)0x1) {
          return (int)(-0x2300);
        }
      }
      else if (iVar3 != -0x62) goto LAB_11406cbb;
      if (param_2 != (undefined4 *)iVar5) {
        return (int)(-0x2366);
      }
    }
  }
  return (int)(0);
}


// Reference entry 11406e30; body size 83 bytes.
#line 1 "ENTRY_11406e30"

int FUN_11406e30(uint *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = (uint *)(param_1);
  if (param_2 - (int)*param_1 < 1) {
    return (int)(-0x24e0);
  }
  bVar1 = (byte)(*(byte *)*param_1);
  iVar3 = (int)(thunk_FUN_1140c3e0(param_1,param_2,&param_1));
  if (iVar3 != 0) {
    return (int)(iVar3 + -0x2480);
  }
  *param_3 = (uint)((uint)bVar1);
  param_3[1] = (uint)((uint)param_1);
  param_3[2] = (uint)(*puVar2);
  *puVar2 = (uint)(*puVar2 + (int)param_1);
  return (int)(0);
}


// Reference entry 11406ea0; body size 165 bytes.
#line 1 "ENTRY_11406ea0"

int FUN_11406ea0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  void *_Memory;
  
  if (*param_5 != 0) {
    return (int)(-0x2800);
  }
  iVar1 = (int)(thunk_FUN_11437010(param_1,param_3,param_4));
  if (iVar1 != 0) {
    return (int)(iVar1 + -0x2600);
  }
  if (*param_4 == 6) {
    _Memory = (void *)(calloc(1,8));
    if (_Memory == (void *)0x0) {
      return (int)(-0x2880);
    }
    iVar1 = (int)(thunk_FUN_114069b0(param_2,param_3,_Memory,(int)_Memory + 4));
    if (iVar1 != 0) {
      free(_Memory);
      return (int)(iVar1);
    }
    *param_5 = (int)((int)_Memory);
  }
  else if (((*param_2 != 5) && (*param_2 != 0)) || (param_2[1] != 0)) {
    return (int)(-0x2300);
  }
  return (int)(0);
}


// Reference entry 11407360; body size 148 bytes.
#line 1 "ENTRY_11407360"

int FUN_11407360(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1);
  pcVar1 = (char *)((char *)*param_1);
  if (param_2 - (int)pcVar1 < 1) {
    return (int)(-0x2460);
  }
  if (*pcVar1 == '\x17') {
    iVar4 = (int)(2);
  }
  else {
    if (*pcVar1 != '\x18') {
      return (int)(-0x2462);
    }
    iVar4 = (int)(4);
  }
  *param_1 = (int)((int)(pcVar1 + 1));
  iVar3 = (int)(thunk_FUN_1140c520(param_1,param_2,&param_1));
  if (iVar3 != 0) {
    return (int)(iVar3 + -0x2400);
  }
  if ((param_1 != (int *)(iVar4 + 10)) &&
     ((param_1 != (int *)(iVar4 + 0xb) || (*(char *)(*piVar2 + -1 + (int)param_1) != 'Z')))) {
    return (int)(-0x2400);
  }
  *piVar2 = (int)(*piVar2 + (int)param_1);
  iVar4 = (int)(FUN_11408c80(*piVar2 - (int)param_1,param_3,iVar4));
  return (int)(iVar4);
}


// Reference entry 11407420; body size 390 bytes.
#line 1 "ENTRY_11407420"

undefined4 FUN_11407420(int *param_1,uint *param_2,byte param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  uVar3 = (uint)(*param_2);
  iVar4 = (int)(*param_1);
  if ((char)param_3 < '\0') {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sSSL Client",&DAT_1186d2ee));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 0x40) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sSSL Server",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 0x20) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sEmail",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 0x10) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sObject Signing",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 8) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sReserved",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 4) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sSSL CA",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 2) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sEmail CA",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 1) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sObject Signing CA",puVar1));
    if (((int)uVar2 < 0) || (uVar3 <= uVar2)) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
  }
  *param_2 = (uint)(uVar3);
  *param_1 = (int)(iVar4);
  return (undefined4)(0);
}


// Reference entry 11407610; body size 439 bytes.
#line 1 "ENTRY_11407610"

undefined4 FUN_11407610(int *param_1,uint *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  uVar3 = (uint)(*param_2);
  iVar4 = (int)(*param_1);
  if ((char)param_3 < '\0') {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sDigital Signature",&DAT_1186d2ee));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 0x40) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sNon Repudiation",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 0x20) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sKey Encipherment",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 0x10) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sData Encipherment",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 8) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sKey Agreement",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 4) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sKey Cert Sign",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 2) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sCRL Sign",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 1) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sEncipher Only",puVar1));
    if ((int)uVar2 < 0) {
      return (undefined4)(0xffffd680);
    }
    if (uVar3 <= uVar2) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
    puVar1 = (undefined1 *)(&DAT_118823e0);
  }
  if ((param_3 & 0x8000) != 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(iVar4,uVar3,"%sDecipher Only",puVar1));
    if (((int)uVar2 < 0) || (uVar3 <= uVar2)) {
      return (undefined4)(0xffffd680);
    }
    uVar3 = (uint)(uVar3 - uVar2);
    iVar4 = (int)(iVar4 + uVar2);
  }
  *param_2 = (uint)(uVar3);
  *param_1 = (int)(iVar4);
  return (undefined4)(0);
}


// Reference entry 11408150; body size 168 bytes.
#line 1 "ENTRY_11408150"

int FUN_11408150(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (uint)(*(uint *)(param_3 + 4));
  uVar4 = (uint)(param_2);
  if (uVar2 < 0x21) {
    if (uVar2 == 0) goto LAB_114081e3;
  }
  else {
    uVar2 = (uint)(0x1c);
  }
  uVar5 = (uint)(0);
  do {
    if (((uVar5 != 0) || (uVar2 < 2)) || (**(char **)(param_3 + 8) != '\0')) {
      puVar3 = (undefined1 *)(&DAT_11884554);
      if (uVar2 - 1 <= uVar5) {
        puVar3 = (undefined1 *)(&DAT_1186d2ee);
      }
      uVar1 = (uint)(thunk_FUN_111c0480(param_1,uVar4,"%02X%s",
                                 *(undefined1 *)(*(int *)(param_3 + 8) + uVar5),puVar3));
      if ((int)uVar1 < 0) {
        return (int)(-0x2980);
      }
      if (uVar4 <= uVar1) {
        return (int)(-0x2980);
      }
      uVar4 = (uint)(uVar4 - uVar1);
      param_1 = (int)(param_1 + uVar1);
    }
    uVar5 = (uint)(uVar5 + 1);
  } while (uVar5 < uVar2);
  if (uVar2 != *(uint *)(param_3 + 4)) {
    uVar2 = (uint)(thunk_FUN_111c0480(param_1,uVar4,&DAT_11bfe2f0));
    if (((int)uVar2 < 0) || (uVar4 <= uVar2)) {
      return (int)(-0x2980);
    }
    uVar4 = (uint)(uVar4 - uVar2);
  }
LAB_114081e3:
  return (int)(param_2 - uVar4);
}


// Reference entry 11408230; body size 198 bytes.
#line 1 "ENTRY_11408230"

int FUN_11408230(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int extraout_ECX;
  uint uVar6;
  undefined4 local_4;
  
  local_4 = (undefined4)(0);
  iVar1 = (int)(thunk_FUN_11437050(param_3,&local_4));
  if (iVar1 == 0) {
    uVar2 = (uint)(thunk_FUN_111c0480(param_1,param_2,&DAT_1188bc94,local_4));
  }
  else {
    uVar2 = (uint)(thunk_FUN_111c0480(param_1,param_2,&DAT_11bfe044));
  }
  if (((int)uVar2 < 0) || (param_2 <= uVar2)) {
    return (int)(-0x2980);
  }
  uVar6 = (uint)(param_2 - uVar2);
  if (param_4 == 6) {
    puVar3 = (undefined *)((undefined *)FUN_11408600(param_5));
    puVar4 = (undefined *)((undefined *)FUN_11408600(*param_6));
    puVar5 = (undefined *)(&DAT_11bfe044);
    if (puVar4 != (undefined *)0x0) {
      puVar5 = (undefined *)(puVar4);
    }
    puVar4 = (undefined *)(&DAT_11bfe044);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = (undefined *)(puVar3);
    }
    uVar2 = (uint)(thunk_FUN_111c0480(param_1 + uVar2,uVar6," (%s, MGF1-%s, 0x%02X)",puVar4,puVar5,
                               *(undefined4 *)(extraout_ECX + 4)));
    if ((int)uVar2 < 0) {
      return (int)(-0x2980);
    }
    if (uVar6 <= uVar2) {
      return (int)(-0x2980);
    }
    uVar6 = (uint)(uVar6 - uVar2);
  }
  return (int)(param_2 - uVar6);
}


// Reference entry 11408330; body size 75 bytes.
#line 1 "ENTRY_11408330"

int FUN_11408330(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)(((*param_1 << 4 | param_1[1]) << 5 | param_1[2]) -
          ((*param_2 << 4 | param_2[1]) << 5 | param_2[2]));
  if (iVar1 == 0) {
    iVar1 = (int)(((param_1[3] << 6 | param_1[4]) << 6 | param_1[5]) -
            ((param_2[3] << 6 | param_2[4]) << 6 | param_2[5]));
  }
  return (int)(iVar1);
}


// Reference entry 11408390; body size 125 bytes.
#line 1 "ENTRY_11408390"

void FUN_11408390(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_4;
  
  piVar1 = (int *)(param_3);
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_28);
  iVar2 = (int)(thunk_FUN_11423ea0(&param_1,&local_28));
  if (iVar2 == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  *piVar1 = (int)(local_14 + 0x76c);
  piVar1[1] = (int)(local_18 + 1);
  piVar1[2] = (int)(local_1c);
  piVar1[3] = (int)(local_20);
  piVar1[4] = (int)(local_24);
  piVar1[5] = (int)(local_28);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11408430; body size 180 bytes.
#line 1 "ENTRY_11408430"

void FUN_11408430(void)

{
  int iVar1;
  __time64_t local_30;
  undefined1 local_28 [36];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_30);
  local_30 = (__time64_t)(_time64((__time64_t *)0x0));
  iVar1 = (int)(thunk_FUN_11423ea0(&local_30,local_28));
  if (iVar1 != 0) {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11408520; body size 178 bytes.
#line 1 "ENTRY_11408520"

void FUN_11408520(void)

{
  int iVar1;
  __time64_t local_30;
  undefined1 local_28 [36];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_30);
  local_30 = (__time64_t)(_time64((__time64_t *)0x0));
  iVar1 = (int)(thunk_FUN_11423ea0(&local_30,local_28));
  if (iVar1 != 0) {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 114088d0; body size 141 bytes.
#line 1 "ENTRY_114088d0"

void FUN_114088d0(int *param_1)

{
  int iVar1;
  __time64_t local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_30);
  local_30 = (__time64_t)(_time64((__time64_t *)0x0));
  iVar1 = (int)(thunk_FUN_11423ea0(&local_30,&local_28));
  if (iVar1 == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  *param_1 = (int)(local_14 + 0x76c);
  param_1[1] = (int)(local_18 + 1);
  param_1[2] = (int)(local_1c);
  param_1[3] = (int)(local_20);
  param_1[4] = (int)(local_24);
  param_1[5] = (int)(local_28);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11408980; body size 187 bytes.
#line 1 "ENTRY_11408980"

int FUN_11408980(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int local_10;
  uint local_c;
  int local_8;
  byte *local_4;
  
  if (*(int *)param_1 != 0x30) {
    return (int)(-0x2362);
  }
  pbVar1 = (byte *)(*(byte **)((int)param_1 + 8));
  pbVar3 = (byte *)(pbVar1 + *(int *)((int)param_1 + 4));
  if (pbVar3 <= pbVar1) {
    return (int)(-0x2360);
  }
  local_c = (uint)((uint)*pbVar1);
  param_1 = (byte *)(pbVar1);
  iVar2 = (int)(thunk_FUN_1140c750(&param_1,pbVar3,&local_8,6));
  if (iVar2 == 0) {
    local_4 = (byte *)(param_1);
    param_1 = (byte *)(param_1 + local_8);
    iVar2 = (int)(thunk_FUN_11436a00(&local_c,param_2));
    if (iVar2 == 0) {
      if ((byte *)(param_1) == pbVar3) {
        return (int)(0);
      }
      iVar2 = (int)(thunk_FUN_1140c750(&param_1,pbVar3,&local_10,5));
      if ((iVar2 == 0) && (local_10 == 0)) {
        iVar2 = (int)(0);
        if ((byte *)(param_1) != pbVar3) {
          iVar2 = (int)(-0x2366);
        }
        return (int)(iVar2);
      }
    }
  }
  return (int)(iVar2 + -0x2300);
}


// Reference entry 1140a1c0; body size 382 bytes.
#line 1 "ENTRY_1140a1c0"

void FUN_1140a1c0(int param_1,int param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  
  uVar16 = (uint)(0);
  if (3 < param_4) {
    puVar14 = (uint *)(param_3);
    do {
      puVar19 = (uint *)(puVar14 + 1);
      uVar16 = (uint)(uVar16 + 4);
      *(uint *)((param_1 - (int)param_3) + -4 + (int)puVar19) =
           *(uint *)((param_2 - (int)param_3) + (int)puVar14) ^ *puVar14;
      puVar14 = (uint *)(puVar19);
    } while ((uint)((int)puVar19 + (4 - (int)param_3)) <= param_4);
  }
  uVar18 = (uint)(param_4 - uVar16);
  if (uVar16 < param_4) {
    if (0x3f < uVar18) {
      if ((((param_4 - 1) + (int)param_3 < uVar16 + param_1) ||
          ((param_4 - 1) + param_1 < uVar16 + (int)param_3)) &&
         (((param_4 - 1) + param_2 < uVar16 + param_1 ||
          ((param_4 - 1) + param_1 < uVar16 + param_2)))) {
        puVar14 = (uint *)((uint *)((int)param_3 + uVar16 + 0x10));
        puVar19 = (uint *)((uint *)(param_1 + 0x20 + uVar16));
        do {
          uVar3 = (uint)(puVar14[-3]);
          uVar4 = (uint)(puVar14[-2]);
          uVar5 = (uint)(puVar14[-1]);
          puVar1 = (uint *)((uint *)(uVar16 + param_2));
          uVar6 = (uint)(puVar1[1]);
          uVar7 = (uint)(puVar1[2]);
          uVar8 = (uint)(puVar1[3]);
          uVar9 = (uint)(*puVar14);
          uVar10 = (uint)(puVar14[1]);
          uVar11 = (uint)(puVar14[2]);
          uVar12 = (uint)(puVar14[3]);
          puVar19[-8] = (uint)(*puVar1 ^ puVar14[-4]);
          puVar19[-7] = (uint)(uVar6 ^ uVar3);
          puVar19[-6] = (uint)(uVar7 ^ uVar4);
          puVar19[-5] = (uint)(uVar8 ^ uVar5);
          puVar1 = (uint *)((uint *)((int)puVar14 + (param_2 - (int)param_3)));
          uVar3 = (uint)(puVar1[1]);
          uVar4 = (uint)(puVar1[2]);
          uVar5 = (uint)(puVar1[3]);
          uVar6 = (uint)(puVar14[4]);
          uVar7 = (uint)(puVar14[5]);
          uVar8 = (uint)(puVar14[6]);
          uVar13 = (uint)(puVar14[7]);
          puVar2 = (uint *)((uint *)((int)puVar14 + (param_1 - (int)param_3)));
          *puVar2 = (uint)(*puVar1 ^ uVar9);
          puVar2[1] = (uint)(uVar3 ^ uVar10);
          puVar2[2] = (uint)(uVar4 ^ uVar11);
          puVar2[3] = (uint)(uVar5 ^ uVar12);
          puVar1 = (uint *)((uint *)((param_2 - param_1) + -0x40 + (int)(puVar19 + 0x10)));
          uVar3 = (uint)(puVar1[1]);
          uVar4 = (uint)(puVar1[2]);
          uVar5 = (uint)(puVar1[3]);
          uVar9 = (uint)(puVar14[8]);
          uVar10 = (uint)(puVar14[9]);
          uVar11 = (uint)(puVar14[10]);
          uVar12 = (uint)(puVar14[0xb]);
          *puVar19 = (uint)(*puVar1 ^ uVar6);
          puVar19[1] = (uint)(uVar3 ^ uVar7);
          puVar19[2] = (uint)(uVar4 ^ uVar8);
          puVar19[3] = (uint)(uVar5 ^ uVar13);
          puVar1 = (uint *)((uint *)(uVar16 + 0x30 + param_2));
          uVar3 = (uint)(puVar1[1]);
          uVar4 = (uint)(puVar1[2]);
          uVar5 = (uint)(puVar1[3]);
          uVar16 = (uint)(uVar16 + 0x40);
          puVar19[4] = (uint)(*puVar1 ^ uVar9);
          puVar19[5] = (uint)(uVar3 ^ uVar10);
          puVar19[6] = (uint)(uVar4 ^ uVar11);
          puVar19[7] = (uint)(uVar5 ^ uVar12);
          puVar14 = (uint *)(puVar14 + 0x10);
          puVar19 = (uint *)(puVar19 + 0x10);
        } while (uVar16 < param_4 - (uVar18 & 0x3f));
        if (param_4 <= uVar16) {
          return;
        }
      }
    }
    iVar17 = (int)(param_4 - uVar16);
    pbVar15 = (byte *)((byte *)(uVar16 + (int)param_3));
    do {
      (pbVar15 + 1)[(param_1 - (int)param_3) + -1] = pbVar15[param_2 - (int)param_3] ^ *pbVar15;
      iVar17 = (int)(iVar17 + -1);
      pbVar15 = (byte *)(pbVar15 + 1);
    } while (iVar17 != 0);
  }
  return;
}


// Reference entry 1140ae40; body size 180 bytes.
#line 1 "ENTRY_1140ae40"

undefined4 FUN_1140ae40(int *param_1,uint param_2,ushort *param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piStack_8;
  undefined4 uStack_4;
  
  if ((param_1 == (int *)0x0) || ((int *)*param_1 == (int *)0x0)) {
    iVar10 = (int)(0);
  }
  else {
    iVar10 = (int)(*(int *)*param_1);
  }
  if (param_2 == 0x400) {
    uVar11 = (uint)(0xc03);
    bVar3 = (bool)(true);
  }
  else if (param_2 == 0x1000) {
    uVar11 = (uint)(0x3003);
    bVar3 = (bool)(true);
  }
  else if (param_2 == 0x200) {
    uVar11 = (uint)(0x303);
    bVar3 = (bool)(true);
  }
  else {
    uVar11 = (uint)(param_2 | 3);
    if (((param_2 == 0x800) || (param_2 == 0x2000)) || (param_2 == 0x100)) {
      bVar3 = (bool)(false);
    }
    else {
      bVar3 = (bool)(true);
    }
  }
  switch(iVar10) {
  case 1:
    bVar2 = (bool)(false);
    if (param_2 < 0x801) {
      if (param_2 != 0x800) {
        if ((param_2 == 0x100) || (param_2 == 0x200)) {
          bVar2 = (bool)(true);
        }
        else if (param_2 != 0x400) {
          return (undefined4)(0xffffc100);
        }
      }
    }
    else if ((param_2 != 0x1000) && (param_2 != 0x2000)) {
      return (undefined4)(0xffffc100);
    }
    piStack_8 = (int *)((int *)*param_1);
    iVar10 = (int)(param_1[1]);
    uStack_4 = (undefined4)(0);
    if ((piStack_8 == (int *)0x0) || (*piStack_8 != 1)) {
      iVar10 = (int)(0);
    }
    iVar6 = (int)(thunk_FUN_11419540(iVar10));
    if ((bVar3) && (iVar6 != 0)) {
      return (undefined4)(0xffffc100);
    }
    uVar5 = (ushort)(0x4001);
    if (bVar3) {
      uVar5 = (ushort)(0x7001);
    }
    *param_3 = (ushort)(uVar5);
    if (*param_1 == 0) {
      uVar7 = (undefined4)(0);
    }
    else {
      uVar7 = (undefined4)((**(code **)(*param_1 + 8))(param_1));
    }
    func_0x1140bdc0(param_3,uVar7);
    iVar6 = (int)(func_0x1008ed7e(iVar10));
    if (iVar6 == 1) {
      if (bVar2) {
        uVar9 = (uint)(func_0x100892a2(iVar10));
        uVar9 = (uint)(uVar9 & 0xff | 0x7000300);
      }
      else {
        uVar9 = (uint)(0x60013ff);
      }
    }
    else {
      uVar9 = (uint)(0x60002ff);
      if (bVar2) {
        uVar9 = (uint)(0x7000200);
      }
    }
    goto code_r0x1140b0d3;
  case 2:
  case 3:
  case 4:
    break;
  default:
    return (undefined4)(0xffffc180);
  }
  puVar8 = (undefined4 *)((undefined4 *)param_1[1]);
  uStack_4 = (undefined4)(0);
  if (((int *)*param_1 == (int *)0x0) ||
     (((iVar6 = *(int *)*param_1, iVar6 != 2 && (iVar6 != 3)) && (iVar6 != 4)))) {
    puVar8 = (undefined4 *)((undefined4 *)0x0);
  }
  sVar1 = (short)(*(short *)((int)puVar8 + 0x66));
  piStack_8 = (int *)((int *)0x0);
  bVar4 = (byte)(thunk_FUN_11435b70(*puVar8,&piStack_8));
  if (param_2 < 0x1001) {
    if (((param_2 != 0x1000) && (param_2 != 0x400)) && (param_2 != 0x800)) {
      return (undefined4)(0xffffc100);
    }
code_r0x1140b052:
    if (iVar10 == 3) {
      return (undefined4)(0xffffc100);
    }
    uVar9 = (uint)(0x60006ff);
  }
  else {
    if (param_2 == 0x2000) goto code_r0x1140b052;
    if (param_2 != 0x4000) {
      return (undefined4)(0xffffc100);
    }
    uVar9 = (uint)(0x9020000);
    if (iVar10 == 4) {
      return (undefined4)(0xffffc100);
    }
  }
  if ((bVar3) && (sVar1 == 0)) {
    return (undefined4)(0xffffc100);
  }
  uVar5 = (ushort)(0x7100);
  if (!bVar3) {
    uVar5 = (ushort)(0x4100);
  }
  *param_3 = (ushort)(uVar5 | bVar4);
  if (piStack_8 < (int *)0xfff9) {
    uVar5 = (ushort)((ushort)piStack_8);
  }
  else {
    uVar5 = (ushort)(0xffff);
  }
  param_3[1] = (ushort)(uVar5);
code_r0x1140b0d3:
  *(uint *)(param_3 + 6) = uVar9;
  if ((uVar11 & 0x1000) != 0) {
    uVar11 = (uint)(uVar11 | 0x400);
  }
  param_3[8] = (ushort)(0);
  param_3[9] = (ushort)(0);
  uVar9 = (uint)(uVar11 | 0x800);
  if ((uVar11 & 0x2000) == 0) {
    uVar9 = (uint)(uVar11);
  }
  *(uint *)(param_3 + 4) = uVar9;
  return (undefined4)(0);
}


// Reference entry 1140b6e0; body size 121 bytes.
#line 1 "ENTRY_1140b6e0"

undefined4
FUN_1140b6e0(int *param_1,int param_2,int param_3,uint param_4,undefined4 param_5,undefined4 param_6
            ,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((param_2 != 0) || (param_4 != 0)) && (param_3 == 0)) || (iVar2 = *param_1, iVar2 == 0)) {
    return (undefined4)(0xffffc180);
  }
  if (param_4 == 0) {
    uVar1 = (undefined4)(thunk_FUN_1140d570(param_2));
    param_4 = (uint)(thunk_FUN_1140ce80(uVar1));
    param_4 = (uint)(param_4 & 0xff);
    if (param_4 == 0) {
      return (undefined4)(0xffffc180);
    }
    iVar2 = (int)(*param_1);
  }
  if (*(code **)(iVar2 + 0x14) != (code *)0x0) {
    uVar1 = (undefined4)((**(code **)(iVar2 + 0x14))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0xffffc100);
}


// Reference entry 1140b780; body size 320 bytes.
#line 1 "ENTRY_1140b780"

int FUN_1140b780(int param_1,int *param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
                uint param_7,undefined4 *param_8,undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_2 != 0) {
    iVar1 = (int)((**(code **)(*param_2 + 0xc))(param_1));
    if (iVar1 == 0) {
      return (int)(-0x3f00);
    }
    if (param_1 == 6) {
      if (*param_2 == 0) {
        iVar1 = (int)(0);
      }
      else {
        iVar1 = (int)((**(code **)(*param_2 + 8))(param_2));
      }
      if (param_7 < iVar1 + 7U >> 3) {
        return (int)(-0x3880);
      }
      iVar1 = (int)(FUN_1140bcb0(param_3,&param_5));
      if (iVar1 == 0) {
        iVar1 = (int)(param_2[1]);
        if (((int *)*param_2 == (int *)0x0) || (*(int *)*param_2 != 1)) {
          iVar1 = (int)(0);
        }
        iVar4 = (int)(thunk_FUN_1141c4e0(iVar1,param_9,param_10,param_3,param_5,param_4,param_6));
        if (iVar4 == 0) {
          *param_8 = (undefined4)(*(undefined4 *)(iVar1 + 4));
          return (int)(0);
        }
        return (int)(iVar4);
      }
    }
    else if ((((param_3 == 0) && (param_5 == 0)) || (param_4 != 0)) &&
            (iVar1 = *param_2, iVar1 != 0)) {
      uVar3 = (uint)(param_5);
      if (param_5 == 0) {
        uVar2 = (undefined4)(thunk_FUN_1140d570(param_3));
        uVar3 = (uint)(thunk_FUN_1140ce80(uVar2));
        uVar3 = (uint)(uVar3 & 0xff);
        if (uVar3 == 0) {
          return (int)(-16000);
        }
        iVar1 = (int)(*param_2);
      }
      if (*(code **)(iVar1 + 0x14) != (code *)0x0) {
        iVar1 = (int)((**(code **)(iVar1 + 0x14))
                          (param_2,param_3,param_4,uVar3,param_6,param_7,param_8,param_9,param_10));
        return (int)(iVar1);
      }
      return (int)(-0x3f00);
    }
  }
  return (int)(-16000);
}


// Reference entry 1140ba40; body size 379 bytes.
#line 1 "ENTRY_1140ba40"

uint FUN_1140ba40(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5,uint param_6,
                 undefined4 param_7,uint param_8)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if ((((param_4 == 0) && (param_6 == 0)) || (param_5 != 0)) && (*param_3 != 0)) {
    iVar3 = (int)((**(code **)(*param_3 + 0xc))(param_1));
    if (iVar3 == 0) {
      return (uint)(0xffffc100);
    }
    if (param_1 == 6) {
      piVar1 = (int *)((int *)*param_3);
      if ((piVar1 == (int *)0x0) || (*piVar1 != 1)) {
        return (uint)(0xffffc680);
      }
      if (param_2 != (undefined4 *)0x0) {
        iVar3 = (int)((*(code *)piVar1[2])(param_3));
        if (param_8 < iVar3 + 7U >> 3) {
          return (uint)(0xffffbc80);
        }
        iVar3 = (int)(param_3[1]);
        if (((int *)*param_3 == (int *)0x0) || (*(int *)*param_3 != 1)) {
          iVar3 = (int)(0);
        }
        uVar5 = (uint)(thunk_FUN_1141c570(iVar3,param_4,param_6,param_5,*param_2,param_2[1],param_7));
        if (uVar5 == 0) {
          if (*param_3 == 0) {
            iVar3 = (int)(0);
          }
          else {
            iVar3 = (int)((**(code **)(*param_3 + 8))(param_3));
          }
          return (uint)(-(uint)(iVar3 + 7U >> 3 < param_8) & 0xffffc700);
        }
        return (uint)(uVar5);
      }
    }
    else if (((param_2 == (undefined4 *)0x0) &&
             (((param_4 == 0 && (param_6 == 0)) || (param_5 != 0)))) &&
            (iVar3 = *param_3, iVar3 != 0)) {
      if (param_6 == 0) {
        uVar4 = (undefined4)(thunk_FUN_1140d570(param_4));
        bVar2 = (byte)(thunk_FUN_1140ce80(uVar4));
        param_6 = (uint)((uint)bVar2);
        if (bVar2 == 0) {
          return (uint)(0xffffc180);
        }
        iVar3 = (int)(*param_3);
      }
      if (*(code **)(iVar3 + 0x10) != (code *)0x0) {
        uVar5 = (uint)((**(code **)(iVar3 + 0x10))(param_3,param_4,param_5,param_6,param_7,param_8));
        return (uint)(uVar5);
      }
      return (uint)(0xffffc100);
    }
  }
  return (uint)(0xffffc180);
}


// Reference entry 1140bc20; body size 109 bytes.
#line 1 "ENTRY_1140bc20"

undefined4
FUN_1140bc20(int *param_1,int param_2,int param_3,uint param_4,undefined4 param_5,undefined4 param_6
            )

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((param_2 != 0) || (param_4 != 0)) && (param_3 == 0)) || (iVar2 = *param_1, iVar2 == 0)) {
    return (undefined4)(0xffffc180);
  }
  if (param_4 == 0) {
    uVar1 = (undefined4)(thunk_FUN_1140d570(param_2));
    param_4 = (uint)(thunk_FUN_1140ce80(uVar1));
    param_4 = (uint)(param_4 & 0xff);
    if (param_4 == 0) {
      return (undefined4)(0xffffc180);
    }
    iVar2 = (int)(*param_1);
  }
  if (*(code **)(iVar2 + 0x10) != (code *)0x0) {
    uVar1 = (undefined4)((**(code **)(iVar2 + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0xffffc100);
}


// Reference entry 1140c3e0; body size 98 bytes.
#line 1 "ENTRY_1140c3e0"

int FUN_1140c3e0(int *param_1,int param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)((char *)*param_1);
  if (param_2 - (int)pcVar1 < 1) {
    return (int)(-0x60);
  }
  if (*pcVar1 != '\x03') {
    return (int)(-0x62);
  }
  *param_1 = (int)((int)(pcVar1 + 1));
  iVar2 = (int)(thunk_FUN_1140c520(param_1,param_2,param_3));
  if (iVar2 == 0) {
    if (*param_3 != 0) {
      *param_3 = (int)(*param_3 + -1);
      if (*(char *)*param_1 == '\0') {
        *param_1 = (int)((int)((char *)*param_1 + 1));
        return (int)(0);
      }
    }
    iVar2 = (int)(-0x68);
  }
  return (int)(iVar2);
}


// Reference entry 1140c460; body size 98 bytes.
#line 1 "ENTRY_1140c460"

int FUN_1140c460(int *param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1);
  pcVar1 = (char *)((char *)*param_1);
  if (param_2 - (int)pcVar1 < 1) {
    return (int)(-0x60);
  }
  if (*pcVar1 != '\x01') {
    return (int)(-0x62);
  }
  *param_1 = (int)((int)(pcVar1 + 1));
  iVar3 = (int)(thunk_FUN_1140c520(param_1,param_2,&param_1));
  if (iVar3 == 0) {
    if (param_1 != (int *)0x1) {
      return (int)(-100);
    }
    *param_3 = (uint)((uint)(*(char *)*piVar2 != '\0'));
    *piVar2 = (int)(*piVar2 + 1);
    iVar3 = (int)(0);
  }
  return (int)(iVar3);
}


// Reference entry 1140c520; body size 123 bytes.
#line 1 "ENTRY_1140c520"

undefined4 FUN_1140c520(int *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (int)(param_2 - *param_1);
  if (0 < iVar3) {
    bVar1 = (byte)(*(byte *)*param_1);
    if ((char)bVar1 < '\0') {
      uVar4 = (uint)(bVar1 & 0x7f);
      if (((bVar1 & 0x7f) == 0) || (4 < uVar4)) {
        return (undefined4)(0xffffff9c);
      }
      if (iVar3 <= (int)uVar4) {
        return (undefined4)(0xffffffa0);
      }
      *param_3 = (uint)(0);
      *param_1 = (int)(*param_1 + 1);
      pbVar2 = (byte *)((byte *)*param_1);
      do {
        *param_3 = (uint)(*param_3 << 8 | (uint)*pbVar2);
        pbVar2 = (byte *)((byte *)(*param_1 + 1));
        *param_1 = (int)((int)pbVar2);
        uVar4 = (uint)(uVar4 - 1);
      } while (uVar4 != 0);
    }
    else {
      *param_3 = (uint)((uint)bVar1);
      *param_1 = (int)(*param_1 + 1);
      pbVar2 = (byte *)((byte *)*param_1);
    }
    if (*param_3 <= (uint)(param_2 - (int)pbVar2)) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffffffa0);
}


// Reference entry 1140c5c0; body size 88 bytes.
#line 1 "ENTRY_1140c5c0"

int FUN_1140c5c0(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1);
  pcVar1 = (char *)((char *)*param_1);
  if (param_2 - (int)pcVar1 < 1) {
    return (int)(-0x60);
  }
  if (*pcVar1 != '\x02') {
    return (int)(-0x62);
  }
  *param_1 = (int)((int)(pcVar1 + 1));
  iVar4 = (int)(thunk_FUN_1140c520(param_1,param_2,&param_1));
  piVar3 = (int *)(param_1);
  if (iVar4 == 0) {
    iVar4 = (int)(thunk_FUN_11416950(param_3,*piVar2,param_1));
    *piVar2 = (int)(*piVar2 + (int)piVar3);
  }
  return (int)(iVar4);
}


// Reference entry 1140c630; body size 229 bytes.
#line 1 "ENTRY_1140c630"

int FUN_1140c630(uint *param_1,char *param_2,uint *param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  
  puVar3 = (uint *)(param_3);
  pcVar5 = (char *)(param_2);
  puVar4 = (uint *)(param_1);
  *param_3 = (uint)(0);
  param_3[1] = (uint)(0);
  param_3[2] = (uint)(0);
  param_3[3] = (uint)(0);
  pcVar8 = (char *)((char *)*param_1);
  if ((int)param_2 - (int)pcVar8 < 1) {
    return (int)(-0x60);
  }
  if (*pcVar8 != '0') {
    return (int)(-0x62);
  }
  *param_1 = (uint)((uint)(pcVar8 + 1));
  iVar6 = (int)(thunk_FUN_1140c520(param_1,param_2,&param_1));
  if (iVar6 == 0) {
    pcVar8 = (char *)((char *)*puVar4);
    if ((char *)((int)param_1 + (int)pcVar8) != pcVar5) {
      return (int)(-0x66);
    }
    while (pcVar8 < pcVar5) {
      cVar1 = (char)(*pcVar8);
      uVar2 = (uint)((uint)param_3 >> 8);
      param_3 = (uint *)((uint *)((uint)((int3)uVar2) << 8 | (uint)(cVar1)));
      *puVar4 = (uint)((uint)(pcVar8 + 1));
      if (cVar1 != param_4) {
        return (int)(-0x62);
      }
      iVar6 = (int)(thunk_FUN_1140c520(puVar4,pcVar5,&param_1));
      if (iVar6 != 0) {
        return (int)(iVar6);
      }
      uVar2 = (uint)(*puVar4);
      puVar7 = (uint *)(puVar3);
      if (puVar3[2] != 0) {
        puVar7 = (uint *)(calloc(1,0x10));
        puVar3[3] = (uint)((uint)puVar7);
        if (puVar7 == (uint *)0x0) {
          return (int)(-0x6a);
        }
      }
      puVar7[2] = (uint)(uVar2);
      puVar7[1] = (uint)((uint)param_1);
      *puVar7 = (uint)((uint)param_3 & 0xff);
      pcVar8 = (char *)((char *)((int)param_1 + *puVar4));
      *puVar4 = (uint)((uint)pcVar8);
      puVar3 = (uint *)(puVar7);
    }
    iVar6 = (int)(0);
  }
  return (int)(iVar6);
}


// Reference entry 1140c8e0; body size 173 bytes.
#line 1 "ENTRY_1140c8e0"

undefined4
FUN_1140c8e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    switch(*param_1) {
    case 3:
      uVar1 = (undefined4)(thunk_FUN_1140e540(param_2,param_3,param_4));
      return (undefined4)(uVar1);
    case 5:
      uVar1 = (undefined4)(thunk_FUN_1140ffb0(param_2,param_3,param_4));
      return (undefined4)(uVar1);
    case 8:
      uVar1 = (undefined4)(thunk_FUN_11411380(param_2,param_3,param_4,1));
      return (undefined4)(uVar1);
    case 9:
      uVar1 = (undefined4)(thunk_FUN_11411380(param_2,param_3,param_4,0));
      return (undefined4)(uVar1);
    case 10:
      uVar1 = (undefined4)(thunk_FUN_11441ea0(param_2,param_3,param_4,1));
      return (undefined4)(uVar1);
    case 0xb:
      uVar1 = (undefined4)(thunk_FUN_11441ea0(param_2,param_3,param_4,0));
      return (undefined4)(uVar1);
    }
  }
  return (undefined4)(0xffffaf00);
}


// Reference entry 1140c9f0; body size 122 bytes.
#line 1 "ENTRY_1140c9f0"

undefined4 FUN_1140c9f0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_2 != (int *)0x0)) &&
     ((puVar1 = (undefined4 *)*param_2, puVar1 != (undefined4 *)0x0 &&
      ((undefined4 *)*(undefined4 *)(param_1) == puVar1)))) {
    switch(*puVar1) {
    case 3:
      thunk_FUN_1140e740(param_1[1],param_2[1]);
      return (undefined4)(0);
    case 5:
      thunk_FUN_114101c0(param_1[1],param_2[1]);
      return (undefined4)(0);
    case 8:
    case 9:
      thunk_FUN_114116a0(param_1[1],param_2[1]);
      return (undefined4)(0);
    case 10:
    case 0xb:
      thunk_FUN_11442340(param_1[1],param_2[1]);
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffffaf00);
}


// Reference entry 1140ccc0; body size 101 bytes.
#line 1 "ENTRY_1140ccc0"

undefined4 FUN_1140ccc0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    switch(*(undefined4 *)*param_1) {
    case 3:
      uVar1 = (undefined4)(thunk_FUN_1140e790(param_1[1],param_2));
      return (undefined4)(uVar1);
    case 5:
      uVar1 = (undefined4)(thunk_FUN_114101e0(param_1[1],param_2));
      return (undefined4)(uVar1);
    case 8:
    case 9:
      uVar1 = (undefined4)(thunk_FUN_114116c0(param_1[1],param_2));
      return (undefined4)(uVar1);
    case 10:
    case 0xb:
      uVar1 = (undefined4)(thunk_FUN_11442360(param_1[1],param_2));
      return (undefined4)(uVar1);
    }
  }
  return (undefined4)(0xffffaf00);
}


// Reference entry 1140cd70; body size 122 bytes.
#line 1 "ENTRY_1140cd70"

void FUN_1140cd70(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    iVar1 = (int)(param_1[1]);
    if (iVar1 != 0) {
      switch(*(undefined4 *)*param_1) {
      case 3:
        thunk_FUN_1140e870(iVar1);
        break;
      case 5:
        thunk_FUN_114102d0(iVar1);
        break;
      case 8:
      case 9:
        thunk_FUN_114117e0(iVar1);
        break;
      case 10:
      case 0xb:
        thunk_FUN_11442510(iVar1);
      }
      free((void *)param_1[1]);
    }
    if (param_1[2] != 0) {
      thunk_FUN_11423f00(param_1[2],(uint)*(byte *)(*param_1 + 5) * 2);
    }
    thunk_FUN_11423ed0(param_1,0xc);
  }
  return;
}


// Reference entry 1140d1a0; body size 175 bytes.
#line 1 "ENTRY_1140d1a0"

void FUN_1140d1a0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 local_44 [64];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_44);
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (iVar3 = param_1[2], iVar3 != 0)) {
    bVar1 = (byte)(*(byte *)(*param_1 + 5));
    iVar2 = (int)(thunk_FUN_1140ccc0(param_1,local_44));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_1140d850(param_1));
      if (iVar2 == 0) {
        iVar3 = (int)(FUN_1005ef7a(param_1,(uint)bVar1 + iVar3,*(undefined1 *)(*param_1 + 5)));
        if (iVar3 == 0) {
          iVar3 = (int)(FUN_1005ef7a(param_1,local_44,*(undefined1 *)(*param_1 + 4)));
          if (iVar3 == 0) {
            thunk_FUN_1140ccc0(param_1,param_2);
          }
        }
      }
    }
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1140d850; body size 117 bytes.
#line 1 "ENTRY_1140d850"

undefined4 FUN_1140d850(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    switch(*(undefined4 *)*param_1) {
    case 3:
      uVar1 = (undefined4)(thunk_FUN_1140e8b0(param_1[1]));
      return (undefined4)(uVar1);
    case 5:
      uVar1 = (undefined4)(thunk_FUN_11410310(param_1[1]));
      return (undefined4)(uVar1);
    case 8:
      uVar1 = (undefined4)(thunk_FUN_11411820(param_1[1],1));
      return (undefined4)(uVar1);
    case 9:
      uVar1 = (undefined4)(thunk_FUN_11411820(param_1[1],0));
      return (undefined4)(uVar1);
    case 10:
      uVar1 = (undefined4)(thunk_FUN_11442550(param_1[1],1));
      return (undefined4)(uVar1);
    case 0xb:
      uVar1 = (undefined4)(thunk_FUN_11442550(param_1[1],0));
      return (undefined4)(uVar1);
    }
  }
  return (undefined4)(0xffffaf00);
}


// Reference entry 1140d920; body size 117 bytes.
#line 1 "ENTRY_1140d920"

undefined4 FUN_1140d920(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    switch(*(undefined4 *)*param_1) {
    case 3:
      uVar1 = (undefined4)(thunk_FUN_1140e8f0(param_1[1],param_2,param_3));
      return (undefined4)(uVar1);
    case 5:
      uVar1 = (undefined4)(thunk_FUN_11410360(param_1[1],param_2,param_3));
      return (undefined4)(uVar1);
    case 8:
    case 9:
      uVar1 = (undefined4)(thunk_FUN_11411940(param_1[1],param_2,param_3));
      return (undefined4)(uVar1);
    case 10:
    case 0xb:
      uVar1 = (undefined4)(thunk_FUN_11442750(param_1[1],param_2,param_3));
      return (undefined4)(uVar1);
    }
  }
  return (undefined4)(0xffffaf00);
}


// Reference entry 1140da00; body size 382 bytes.
#line 1 "ENTRY_1140da00"

void FUN_1140da00(int param_1,int param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  
  uVar16 = (uint)(0);
  if (3 < param_4) {
    puVar14 = (uint *)(param_3);
    do {
      puVar19 = (uint *)(puVar14 + 1);
      uVar16 = (uint)(uVar16 + 4);
      *(uint *)((param_1 - (int)param_3) + -4 + (int)puVar19) =
           *(uint *)((param_2 - (int)param_3) + (int)puVar14) ^ *puVar14;
      puVar14 = (uint *)(puVar19);
    } while ((uint)((int)puVar19 + (4 - (int)param_3)) <= param_4);
  }
  uVar18 = (uint)(param_4 - uVar16);
  if (uVar16 < param_4) {
    if (0x3f < uVar18) {
      if ((((param_4 - 1) + (int)param_3 < uVar16 + param_1) ||
          ((param_4 - 1) + param_1 < uVar16 + (int)param_3)) &&
         (((param_4 - 1) + param_2 < uVar16 + param_1 ||
          ((param_4 - 1) + param_1 < uVar16 + param_2)))) {
        puVar14 = (uint *)((uint *)((int)param_3 + uVar16 + 0x10));
        puVar19 = (uint *)((uint *)(param_1 + 0x20 + uVar16));
        do {
          uVar3 = (uint)(puVar14[-3]);
          uVar4 = (uint)(puVar14[-2]);
          uVar5 = (uint)(puVar14[-1]);
          puVar1 = (uint *)((uint *)(uVar16 + param_2));
          uVar6 = (uint)(puVar1[1]);
          uVar7 = (uint)(puVar1[2]);
          uVar8 = (uint)(puVar1[3]);
          uVar9 = (uint)(*puVar14);
          uVar10 = (uint)(puVar14[1]);
          uVar11 = (uint)(puVar14[2]);
          uVar12 = (uint)(puVar14[3]);
          puVar19[-8] = (uint)(*puVar1 ^ puVar14[-4]);
          puVar19[-7] = (uint)(uVar6 ^ uVar3);
          puVar19[-6] = (uint)(uVar7 ^ uVar4);
          puVar19[-5] = (uint)(uVar8 ^ uVar5);
          puVar1 = (uint *)((uint *)((int)puVar14 + (param_2 - (int)param_3)));
          uVar3 = (uint)(puVar1[1]);
          uVar4 = (uint)(puVar1[2]);
          uVar5 = (uint)(puVar1[3]);
          uVar6 = (uint)(puVar14[4]);
          uVar7 = (uint)(puVar14[5]);
          uVar8 = (uint)(puVar14[6]);
          uVar13 = (uint)(puVar14[7]);
          puVar2 = (uint *)((uint *)((int)puVar14 + (param_1 - (int)param_3)));
          *puVar2 = (uint)(*puVar1 ^ uVar9);
          puVar2[1] = (uint)(uVar3 ^ uVar10);
          puVar2[2] = (uint)(uVar4 ^ uVar11);
          puVar2[3] = (uint)(uVar5 ^ uVar12);
          puVar1 = (uint *)((uint *)((param_2 - param_1) + -0x40 + (int)(puVar19 + 0x10)));
          uVar3 = (uint)(puVar1[1]);
          uVar4 = (uint)(puVar1[2]);
          uVar5 = (uint)(puVar1[3]);
          uVar9 = (uint)(puVar14[8]);
          uVar10 = (uint)(puVar14[9]);
          uVar11 = (uint)(puVar14[10]);
          uVar12 = (uint)(puVar14[0xb]);
          *puVar19 = (uint)(*puVar1 ^ uVar6);
          puVar19[1] = (uint)(uVar3 ^ uVar7);
          puVar19[2] = (uint)(uVar4 ^ uVar8);
          puVar19[3] = (uint)(uVar5 ^ uVar13);
          puVar1 = (uint *)((uint *)(uVar16 + 0x30 + param_2));
          uVar3 = (uint)(puVar1[1]);
          uVar4 = (uint)(puVar1[2]);
          uVar5 = (uint)(puVar1[3]);
          uVar16 = (uint)(uVar16 + 0x40);
          puVar19[4] = (uint)(*puVar1 ^ uVar9);
          puVar19[5] = (uint)(uVar3 ^ uVar10);
          puVar19[6] = (uint)(uVar4 ^ uVar11);
          puVar19[7] = (uint)(uVar5 ^ uVar12);
          puVar14 = (uint *)(puVar14 + 0x10);
          puVar19 = (uint *)(puVar19 + 0x10);
        } while (uVar16 < param_4 - (uVar18 & 0x3f));
        if (param_4 <= uVar16) {
          return;
        }
      }
    }
    iVar17 = (int)(param_4 - uVar16);
    pbVar15 = (byte *)((byte *)(uVar16 + (int)param_3));
    do {
      (pbVar15 + 1)[(param_1 - (int)param_3) + -1] = pbVar15[param_2 - (int)param_3] ^ *pbVar15;
      iVar17 = (int)(iVar17 + -1);
      pbVar15 = (byte *)(pbVar15 + 1);
    } while (iVar17 != 0);
  }
  return;
}


// Reference entry 1140dbf0; body size 1904 bytes.
#line 1 "ENTRY_1140dbf0"

void FUN_1140dbf0(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_98);
  local_98 = (int)(param_1);
  local_70 = (int)(param_2[2]);
  local_68 = (int)(*param_2);
  local_5c = (int)(param_2[1]);
  local_58 = (int)(param_2[0xe]);
  local_64 = (int)(param_2[7]);
  local_78 = (int)(param_2[4]);
  local_94 = (int)(param_2[5]);
  local_80 = (int)(param_2[6]);
  local_88 = (int)(param_2[8]);
  local_6c = (int)(param_2[9]);
  local_8c = (int)(param_2[10]);
  local_74 = (int)(param_2[0xb]);
  local_90 = (int)(param_2[0xc]);
  local_7c = (int)(param_2[0xd]);
  local_60 = (int)(param_2[3]);
  local_84 = (int)(param_2[0xf]);
  uVar1 = (uint)(((*(uint *)(param_1 + 0x14) ^ *(uint *)(param_1 + 0x10)) & *(uint *)(param_1 + 0xc) ^
          *(uint *)(param_1 + 0x14)) + local_68 + *(int *)(param_1 + 8) + -0x28955b88);
  uVar1 = (uint)((uVar1 * 0x80 | uVar1 >> 0x19) + *(uint *)(param_1 + 0xc));
  uVar2 = (uint)(*(int *)(param_1 + 0x14) + -0x173848aa +
          ((*(uint *)(param_1 + 0x10) ^ *(uint *)(param_1 + 0xc)) & uVar1 ^
          *(uint *)(param_1 + 0x10)) + local_5c);
  uVar2 = (uint)((uVar2 * 0x1000 | uVar2 >> 0x14) + uVar1);
  uVar3 = (uint)(local_70 + 0x242070db +
          ((*(uint *)(param_1 + 0xc) ^ uVar1) & uVar2 ^ *(uint *)(param_1 + 0xc)) +
          *(int *)(param_1 + 0x10));
  uVar3 = (uint)((uVar3 >> 0xf | uVar3 * 0x20000) + uVar2);
  uVar5 = (uint)(*(int *)(param_1 + 0xc) + -0x3e423112 + ((uVar2 ^ uVar1) & uVar3 ^ uVar1) + local_60);
  uVar5 = (uint)((uVar5 >> 10 | uVar5 * 0x400000) + uVar3);
  uVar1 = (uint)(uVar1 + ((uVar3 ^ uVar2) & uVar5 ^ uVar2) + 0xf57c0faf + local_78);
  uVar1 = (uint)((uVar1 * 0x80 | uVar1 >> 0x19) + uVar5);
  uVar2 = (uint)(uVar2 + ((uVar5 ^ uVar3) & uVar1 ^ uVar3) + 0x4787c62a + local_94);
  uVar2 = (uint)((uVar2 * 0x1000 | uVar2 >> 0x14) + uVar1);
  uVar3 = (uint)(uVar3 + ((uVar1 ^ uVar5) & uVar2 ^ uVar5) + 0xa8304613 + local_80);
  uVar3 = (uint)((uVar3 >> 0xf | uVar3 * 0x20000) + uVar2);
  uVar5 = (uint)(uVar5 + ((uVar2 ^ uVar1) & uVar3 ^ uVar1) + 0xfd469501 + local_64);
  uVar5 = (uint)((uVar5 >> 10 | uVar5 * 0x400000) + uVar3);
  uVar1 = (uint)(uVar1 + ((uVar3 ^ uVar2) & uVar5 ^ uVar2) + 0x698098d8 + local_88);
  uVar1 = (uint)((uVar1 * 0x80 | uVar1 >> 0x19) + uVar5);
  uVar2 = (uint)(uVar2 + ((uVar5 ^ uVar3) & uVar1 ^ uVar3) + 0x8b44f7af + local_6c);
  uVar2 = (uint)((uVar2 * 0x1000 | uVar2 >> 0x14) + uVar1);
  uVar3 = (uint)(uVar3 + (((uVar1 ^ uVar5) & uVar2 ^ uVar5) - 0xa44f) + local_8c);
  uVar3 = (uint)((uVar3 >> 0xf | uVar3 * 0x20000) + uVar2);
  uVar5 = (uint)(uVar5 + ((uVar2 ^ uVar1) & uVar3 ^ uVar1) + 0x895cd7be + local_74);
  uVar5 = (uint)((uVar5 >> 10 | uVar5 * 0x400000) + uVar3);
  uVar1 = (uint)(uVar1 + ((uVar3 ^ uVar2) & uVar5 ^ uVar2) + 0x6b901122 + local_90);
  uVar1 = (uint)((uVar1 * 0x80 | uVar1 >> 0x19) + uVar5);
  uVar2 = (uint)(uVar2 + ((uVar5 ^ uVar3) & uVar1 ^ uVar3) + 0xfd987193 + local_7c);
  uVar2 = (uint)((uVar2 * 0x1000 | uVar2 >> 0x14) + uVar1);
  uVar3 = (uint)(uVar3 + ((uVar1 ^ uVar5) & uVar2 ^ uVar5) + 0xa679438e + local_58);
  uVar4 = (uint)((uVar3 >> 0xf | uVar3 * 0x20000) + uVar2);
  uVar5 = (uint)(uVar5 + ((uVar2 ^ uVar1) & uVar4 ^ uVar1) + 0x49b40821 + local_84);
  uVar6 = (uint)((uVar5 >> 10 | uVar5 * 0x400000) + uVar4);
  uVar1 = (uint)(uVar1 + 0xf61e2562 + ((uVar6 ^ uVar4) & uVar2 ^ uVar4) + local_5c);
  uVar5 = (uint)((uVar1 * 0x20 | uVar1 >> 0x1b) + uVar6);
  uVar2 = (uint)(uVar2 + ((uVar5 ^ uVar6) & uVar4 ^ uVar6) + 0xc040b340 + local_80);
  uVar3 = (uint)((uVar2 * 0x200 | uVar2 >> 0x17) + uVar5);
  uVar1 = (uint)(uVar4 + 0x265e5a51 + ((uVar3 ^ uVar5) & uVar6 ^ uVar5) + local_74);
  uVar1 = (uint)((uVar1 * 0x4000 | uVar1 >> 0x12) + uVar3);
  uVar2 = (uint)(uVar6 + 0xe9b6c7aa + ((uVar1 ^ uVar3) & uVar5 ^ uVar3) + local_68);
  uVar4 = (uint)((uVar2 >> 0xc | uVar2 * 0x100000) + uVar1);
  uVar2 = (uint)(uVar5 + 0xd62f105d + ((uVar4 ^ uVar1) & uVar3 ^ uVar1) + local_94);
  uVar2 = (uint)((uVar2 * 0x20 | uVar2 >> 0x1b) + uVar4);
  uVar3 = (uint)(uVar3 + ((uVar2 ^ uVar4) & uVar1 ^ uVar4) + 0x2441453 + local_8c);
  uVar3 = (uint)((uVar3 * 0x200 | uVar3 >> 0x17) + uVar2);
  uVar1 = (uint)(local_84 + -0x275e197f + ((uVar3 ^ uVar2) & uVar4 ^ uVar2) + uVar1);
  uVar5 = (uint)((uVar1 * 0x4000 | uVar1 >> 0x12) + uVar3);
  uVar4 = (uint)(uVar4 + ((uVar5 ^ uVar3) & uVar2 ^ uVar3) + 0xe7d3fbc8 + local_78);
  uVar4 = (uint)((uVar4 >> 0xc | uVar4 * 0x100000) + uVar5);
  uVar2 = (uint)(((uVar4 ^ uVar5) & uVar3 ^ uVar5) + 0x21e1cde6 + local_6c + uVar2);
  uVar1 = (uint)((uVar2 * 0x20 | uVar2 >> 0x1b) + uVar4);
  uVar2 = (uint)(local_58 + -0x3cc8f82a + ((uVar1 ^ uVar4) & uVar5 ^ uVar4) + uVar3);
  uVar2 = (uint)((uVar2 * 0x200 | uVar2 >> 0x17) + uVar1);
  uVar5 = (uint)(uVar5 + ((uVar2 ^ uVar1) & uVar4 ^ uVar1) + 0xf4d50d87 + local_60);
  uVar5 = (uint)((uVar5 * 0x4000 | uVar5 >> 0x12) + uVar2);
  uVar3 = (uint)(uVar4 + 0x455a14ed + ((uVar5 ^ uVar2) & uVar1 ^ uVar2) + local_88);
  uVar3 = (uint)((uVar3 >> 0xc | uVar3 * 0x100000) + uVar5);
  uVar1 = (uint)(local_7c + -0x561c16fb + ((uVar3 ^ uVar5) & uVar2 ^ uVar5) + uVar1);
  uVar4 = (uint)((uVar1 * 0x20 | uVar1 >> 0x1b) + uVar3);
  uVar1 = (uint)(local_70 + -0x3105c08 + ((uVar4 ^ uVar3) & uVar5 ^ uVar3) + uVar2);
  uVar6 = (uint)((uVar1 * 0x200 | uVar1 >> 0x17) + uVar4);
  uVar5 = (uint)(uVar5 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + 0x676f02d9 + local_64);
  uVar2 = (uint)((uVar5 * 0x4000 | uVar5 >> 0x12) + uVar6);
  uVar3 = (uint)(((uVar2 ^ uVar6) & uVar4 ^ uVar6) + 0x8d2a4c8a + local_90 + uVar3);
  uVar1 = (uint)((uVar3 >> 0xc | uVar3 * 0x100000) + uVar2);
  uVar4 = (uint)(uVar4 + ((uVar1 ^ uVar2 ^ uVar6) - 0x5c6be) + local_94);
  uVar3 = (uint)((uVar4 * 0x10 | uVar4 >> 0x1c) + uVar1);
  uVar6 = (uint)(uVar6 + (uVar3 ^ uVar1 ^ uVar2) + 0x8771f681 + local_88);
  uVar5 = (uint)((uVar6 * 0x800 | uVar6 >> 0x15) + uVar3);
  uVar2 = (uint)(local_74 + 0x6d9d6122 + (uVar5 ^ uVar3 ^ uVar1) + uVar2);
  uVar2 = (uint)((uVar2 * 0x10000 | uVar2 >> 0x10) + uVar5);
  uVar1 = (uint)(local_58 + -0x21ac7f4 + (uVar2 ^ uVar5 ^ uVar3) + uVar1);
  uVar1 = (uint)((uVar1 >> 9 | uVar1 * 0x800000) + uVar2);
  uVar3 = (uint)(local_5c + -0x5b4115bc + (uVar2 ^ uVar5 ^ uVar1) + uVar3);
  uVar3 = (uint)((uVar3 * 0x10 | uVar3 >> 0x1c) + uVar1);
  uVar5 = (uint)(local_78 + 0x4bdecfa9 + (uVar2 ^ uVar3 ^ uVar1) + uVar5);
  uVar4 = (uint)((uVar5 * 0x800 | uVar5 >> 0x15) + uVar3);
  uVar2 = (uint)(local_64 + -0x944b4a0 + (uVar4 ^ uVar3 ^ uVar1) + uVar2);
  uVar2 = (uint)((uVar2 * 0x10000 | uVar2 >> 0x10) + uVar4);
  uVar1 = (uint)(uVar1 + (uVar2 ^ uVar4 ^ uVar3) + 0xbebfbc70 + local_8c);
  uVar1 = (uint)((uVar1 >> 9 | uVar1 * 0x800000) + uVar2);
  uVar3 = (uint)(uVar3 + (uVar1 ^ uVar2 ^ uVar4) + 0x289b7ec6 + local_7c);
  uVar5 = (uint)((uVar3 * 0x10 | uVar3 >> 0x1c) + uVar1);
  uVar4 = (uint)(uVar4 + (uVar5 ^ uVar1 ^ uVar2) + 0xeaa127fa + local_68);
  uVar4 = (uint)((uVar4 * 0x800 | uVar4 >> 0x15) + uVar5);
  uVar2 = (uint)(uVar2 + (uVar4 ^ uVar5 ^ uVar1) + 0xd4ef3085 + local_60);
  uVar3 = (uint)((uVar2 * 0x10000 | uVar2 >> 0x10) + uVar4);
  uVar1 = (uint)(uVar1 + (uVar3 ^ uVar4 ^ uVar5) + 0x4881d05 + local_80);
  uVar2 = (uint)((uVar1 >> 9 | uVar1 * 0x800000) + uVar3);
  uVar1 = (uint)(uVar5 + 0xd9d4d039 + (uVar2 ^ uVar3 ^ uVar4) + local_6c);
  uVar1 = (uint)((uVar1 * 0x10 | uVar1 >> 0x1c) + uVar2);
  uVar5 = (uint)(uVar4 + 0xe6db99e5 + (uVar1 ^ uVar2 ^ uVar3) + local_90);
  uVar5 = (uint)((uVar5 * 0x800 | uVar5 >> 0x15) + uVar1);
  uVar3 = (uint)((uVar5 ^ uVar1 ^ uVar2) + 0x1fa27cf8 + local_84 + uVar3);
  uVar4 = (uint)((uVar3 * 0x10000 | uVar3 >> 0x10) + uVar5);
  uVar2 = (uint)(local_70 + -0x3b53a99b + (uVar4 ^ uVar5 ^ uVar1) + uVar2);
  uVar2 = (uint)((uVar2 >> 9 | uVar2 * 0x800000) + uVar4);
  uVar1 = (uint)(uVar1 + ((~uVar5 | uVar2) ^ uVar4) + 0xf4292244 + local_68);
  uVar1 = (uint)((uVar1 * 0x40 | uVar1 >> 0x1a) + uVar2);
  uVar5 = (uint)(uVar5 + ((~uVar4 | uVar1) ^ uVar2) + 0x432aff97 + local_64);
  uVar3 = (uint)((uVar5 * 0x400 | uVar5 >> 0x16) + uVar1);
  uVar4 = (uint)(uVar4 + ((~uVar2 | uVar3) ^ uVar1) + 0xab9423a7 + local_58);
  uVar5 = (uint)((uVar4 * 0x8000 | uVar4 >> 0x11) + uVar3);
  uVar2 = (uint)(uVar2 + ((~uVar1 | uVar5) ^ uVar3) + 0xfc93a039 + local_94);
  uVar2 = (uint)((uVar2 >> 0xb | uVar2 * 0x200000) + uVar5);
  uVar1 = (uint)(uVar1 + ((~uVar3 | uVar2) ^ uVar5) + 0x655b59c3 + local_90);
  uVar1 = (uint)((uVar1 * 0x40 | uVar1 >> 0x1a) + uVar2);
  uVar3 = (uint)(uVar3 + ((~uVar5 | uVar1) ^ uVar2) + 0x8f0ccc92 + local_60);
  uVar3 = (uint)((uVar3 * 0x400 | uVar3 >> 0x16) + uVar1);
  uVar5 = (uint)(uVar5 + (((~uVar2 | uVar3) ^ uVar1) - 0x100b83) + local_8c);
  uVar4 = (uint)((uVar5 * 0x8000 | uVar5 >> 0x11) + uVar3);
  uVar2 = (uint)(uVar2 + ((~uVar1 | uVar4) ^ uVar3) + 0x85845dd1 + local_5c);
  uVar2 = (uint)((uVar2 >> 0xb | uVar2 * 0x200000) + uVar4);
  uVar1 = (uint)(uVar1 + ((~uVar3 | uVar2) ^ uVar4) + 0x6fa87e4f + local_88);
  uVar1 = (uint)((uVar1 * 0x40 | uVar1 >> 0x1a) + uVar2);
  uVar3 = (uint)(uVar3 + ((~uVar4 | uVar1) ^ uVar2) + 0xfe2ce6e0 + local_84);
  uVar5 = (uint)((uVar3 * 0x400 | uVar3 >> 0x16) + uVar1);
  uVar3 = (uint)(uVar4 + 0xa3014314 + ((~uVar2 | uVar5) ^ uVar1) + local_80);
  uVar3 = (uint)((uVar3 * 0x8000 | uVar3 >> 0x11) + uVar5);
  uVar2 = (uint)(uVar2 + 0x4e0811a1 + ((~uVar1 | uVar3) ^ uVar5) + local_7c);
  uVar2 = (uint)((uVar2 >> 0xb | uVar2 * 0x200000) + uVar3);
  uVar1 = (uint)(uVar1 + 0xf7537e82 + ((~uVar5 | uVar2) ^ uVar3) + local_78);
  local_14 = (uint)((uVar1 * 0x40 | uVar1 >> 0x1a) + uVar2);
  uVar5 = (uint)(uVar5 + ((~uVar3 | local_14) ^ uVar2) + 0xbd3af235 + local_74);
  local_8 = (uint)((uVar5 * 0x400 | uVar5 >> 0x16) + local_14);
  uVar1 = (uint)(local_70 + 0x2ad7d2bb + ((~uVar2 | local_8) ^ local_14) + uVar3);
  local_c = (uint)((uVar1 * 0x8000 | uVar1 >> 0x11) + local_8);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + local_14;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + local_c;
  uVar1 = (uint)(uVar2 + 0xeb86d391 + ((~local_14 | local_c) ^ local_8) + local_6c);
  local_10 = (int)((uVar1 >> 0xb | uVar1 * 0x200000) + local_c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + local_10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + local_8;
  local_54 = (int)(local_68);
  local_50 = (int)(local_5c);
  local_4c = (int)(local_70);
  local_48 = (int)(local_60);
  local_44 = (int)(local_78);
  local_40 = (int)(local_94);
  local_3c = (int)(local_80);
  local_38 = (int)(local_64);
  local_34 = (int)(local_88);
  local_30 = (int)(local_6c);
  local_2c = (int)(local_8c);
  local_28 = (int)(local_74);
  local_24 = (int)(local_90);
  local_20 = (int)(local_7c);
  local_1c = (int)(local_58);
  local_18 = (int)(local_84);
  thunk_FUN_11423ed0(&local_54,0x50);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1140e540; body size 399 bytes.
#line 1 "ENTRY_1140e540"

void FUN_1140e540(void *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  size_t _Size;
  uint uVar2;
  uint uVar3;
  undefined1 *_Dst;
  uint local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [56];
  int local_c;
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_5c);
  memset(local_44,0,0x40);
  local_5c = (uint)(0);
  local_58 = (int)(0);
  local_54 = (undefined4)(0x67452301);
  local_50 = (undefined4)(0xefcdab89);
  local_4c = (undefined4)(0x98badcfe);
  local_48 = (undefined4)(0x10325476);
  uVar2 = (uint)(param_2);
  if (param_2 != 0) {
    for (; local_5c = (uint)(uVar2, 0x3f < param_2); param_2 = param_2 - 0x40) {
      iVar1 = (int)(thunk_FUN_1140dbf0(&local_5c,param_1));
      if (iVar1 != 0) goto LAB_1140e6ab;
      param_1 = (void *)((void *)((int)param_1 + 0x40));
      uVar2 = (uint)(local_5c);
    }
    if (param_2 != 0) {
      memcpy(local_44,param_1,param_2);
    }
  }
  uVar2 = (uint)(local_5c & 0x3f);
  local_44[uVar2] = (undefined1)(0x80);
  uVar3 = (uint)(uVar2 + 1);
  _Dst = (undefined1 *)(local_44 + uVar2 + 1);
  if (uVar3 < 0x39) {
    _Size = (size_t)(0x38 - uVar3);
  }
  else {
    memset(_Dst,0,0x40 - uVar3);
    iVar1 = (int)(thunk_FUN_1140dbf0(&local_5c,local_44));
    if (iVar1 != 0) goto LAB_1140e69c;
    _Size = (size_t)(0x38);
    _Dst = (undefined1 *)(local_44);
  }
  memset(_Dst,0,_Size);
  local_8 = (uint)(local_58 * 8 | local_5c >> 0x1d);
  local_c = (int)(local_5c * 8);
  iVar1 = (int)(thunk_FUN_1140dbf0(&local_5c,local_44));
  if (iVar1 == 0) {
    *param_3 = (undefined4)(local_54);
    param_3[1] = (undefined4)(local_50);
    param_3[2] = (undefined4)(local_4c);
    param_3[3] = (undefined4)(local_48);
  }
LAB_1140e69c:
  thunk_FUN_11423ed0(&local_5c,0x58);
LAB_1140e6ab:
  thunk_FUN_11423ed0(&local_5c,0x58);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1140e8f0; body size 164 bytes.
#line 1 "ENTRY_1140e8f0"

int FUN_1140e8f0(uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint _Size;
  
  if (param_3 != 0) {
    uVar3 = (uint)(*param_1 & 0x3f);
    uVar1 = (uint)(*param_1 + param_3);
    _Size = (uint)(0x40 - uVar3);
    *param_1 = (uint)(uVar1);
    if (uVar1 < param_3) {
      param_1[1] = (uint)(param_1[1] + 1);
    }
    if ((uVar3 != 0) && (_Size <= param_3)) {
      memcpy((void *)((int)param_1 + uVar3 + 0x18),param_2,_Size);
      iVar2 = (int)(thunk_FUN_1140dbf0(param_1,param_1 + 6));
      if (iVar2 != 0) {
        return (int)(iVar2);
      }
      param_2 = (void *)((void *)((int)param_2 + _Size));
      param_3 = (uint)(param_3 - _Size);
      uVar3 = (uint)(0);
    }
    for (; 0x3f < param_3; param_3 = param_3 - 0x40) {
      iVar2 = (int)(thunk_FUN_1140dbf0(param_1,param_2));
      if (iVar2 != 0) {
        return (int)(iVar2);
      }
      param_2 = (void *)((void *)((int)param_2 + 0x40));
    }
    if (param_3 != 0) {
      memcpy((void *)((int)param_1 + uVar3 + 0x18),param_2,param_3);
    }
  }
  return (int)(0);
}


// Reference entry 1140e9e0; body size 4455 bytes.
#line 1 "ENTRY_1140e9e0"

void FUN_1140e9e0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_b8);
  local_60 = (int)(param_1);
  uVar18 = (uint)(param_2[3]);
  uVar2 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[4]);
  uVar3 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[5]);
  uVar4 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[6]);
  uVar5 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[7]);
  uVar6 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[8]);
  uVar7 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[9]);
  uVar15 = (uint)(param_2[2]);
  uVar16 = (uint)(*param_2);
  uVar17 = (uint)(param_2[1]);
  uVar8 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[10]);
  uVar9 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[0xb]);
  uVar10 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[0xc]);
  uVar11 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[0xd]);
  uVar12 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar18 = (uint)(param_2[0xe]);
  uVar23 = (uint)(param_2[0xf]);
  uVar13 = (uint)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18);
  uVar1 = (uint)(uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18);
  uVar19 = (uint)(uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18);
  uVar18 = (uint)(*(uint *)(param_1 + 8));
  uVar15 = (uint)(uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18);
  uVar17 = (uint)(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18);
  uVar23 = (uint)(uVar15 + 0x5a827999 +
           ((*(uint *)(param_1 + 0x14) ^ *(uint *)(param_1 + 0x10)) & *(uint *)(param_1 + 0xc) ^
           *(uint *)(param_1 + 0x14)) + (uVar18 << 5 | uVar18 >> 0x1b) + *(int *)(param_1 + 0x18));
  uVar16 = (uint)(*(uint *)(param_1 + 0xc) >> 2 | *(uint *)(param_1 + 0xc) << 0x1e);
  uVar22 = (uint)(uVar18 >> 2 | uVar18 << 0x1e);
  uVar18 = (uint)(uVar17 + 0x5a827999 +
           ((*(uint *)(param_1 + 0x10) ^ uVar16) & uVar18 ^ *(uint *)(param_1 + 0x10)) +
           (uVar23 * 0x20 | uVar23 >> 0x1b) + *(int *)(param_1 + 0x14));
  uVar24 = (uint)(uVar23 >> 2 | uVar23 * 0x40000000);
  uVar20 = (uint)(uVar19 + 0x5a827999 +
           ((uVar22 ^ uVar16) & uVar23 ^ uVar16) +
           (uVar18 * 0x20 | uVar18 >> 0x1b) + *(int *)(param_1 + 0x10));
  uVar23 = (uint)(uVar18 >> 2 | uVar18 * 0x40000000);
  uVar18 = (uint)(uVar16 + 0x5a827999 +
           ((uVar24 ^ uVar22) & uVar18 ^ uVar22) + (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar2);
  uVar21 = (uint)(uVar20 >> 2 | uVar20 * 0x40000000);
  uVar20 = (uint)(uVar22 + 0x5a827999 +
           ((uVar23 ^ uVar24) & uVar20 ^ uVar24) + (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar3);
  uVar16 = (uint)(uVar18 >> 2 | uVar18 * 0x40000000);
  uVar24 = (uint)(uVar24 + ((uVar21 ^ uVar23) & uVar18 ^ uVar23) +
                    (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x5a827999 + uVar4);
  uVar22 = (uint)(uVar20 >> 2 | uVar20 * 0x40000000);
  uVar23 = (uint)(uVar23 + ((uVar16 ^ uVar21) & uVar20 ^ uVar21) +
                    (uVar24 * 0x20 | uVar24 >> 0x1b) + 0x5a827999 + uVar5);
  uVar25 = (uint)(uVar24 >> 2 | uVar24 * 0x40000000);
  uVar21 = (uint)(uVar21 + ((uVar22 ^ uVar16) & uVar24 ^ uVar16) +
                    (uVar23 * 0x20 | uVar23 >> 0x1b) + 0x5a827999 + uVar6);
  uVar16 = (uint)(uVar16 + ((uVar25 ^ uVar22) & uVar23 ^ uVar22) +
                    (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x5a827999 + uVar7);
  uVar23 = (uint)(uVar23 >> 2 | uVar23 * 0x40000000);
  uVar20 = (uint)(uVar21 >> 2 | uVar21 * 0x40000000);
  uVar22 = (uint)(uVar22 + ((uVar23 ^ uVar25) & uVar21 ^ uVar25) +
                    (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x5a827999 + uVar8);
  uVar18 = (uint)(uVar16 >> 2 | uVar16 * 0x40000000);
  uVar25 = (uint)(uVar25 + ((uVar20 ^ uVar23) & uVar16 ^ uVar23) +
                    (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x5a827999 + uVar9);
  uVar24 = (uint)(uVar22 >> 2 | uVar22 * 0x40000000);
  uVar23 = (uint)(uVar23 + ((uVar18 ^ uVar20) & uVar22 ^ uVar20) +
                    (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x5a827999 + uVar10);
  uVar26 = (uint)(uVar25 >> 2 | uVar25 * 0x40000000);
  uVar20 = (uint)(uVar20 + ((uVar24 ^ uVar18) & uVar25 ^ uVar18) +
                    (uVar23 * 0x20 | uVar23 >> 0x1b) + 0x5a827999 + uVar11);
  uVar21 = (uint)(uVar23 >> 2 | uVar23 * 0x40000000);
  uVar16 = (uint)(uVar12 + 0x5a827999 +
           ((uVar26 ^ uVar24) & uVar23 ^ uVar24) + (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar18);
  uVar23 = (uint)(uVar20 >> 2 | uVar20 * 0x40000000);
  uVar22 = (uint)(uVar13 + 0x5a827999 +
           ((uVar21 ^ uVar26) & uVar20 ^ uVar26) + (uVar16 * 0x20 | uVar16 >> 0x1b) + uVar24);
  uVar18 = (uint)(((uVar23 ^ uVar21) & uVar16 ^ uVar21) + (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar26 +
           uVar1 + 0x5a827999);
  uVar16 = (uint)(uVar16 >> 2 | uVar16 * 0x40000000);
  uVar20 = (uint)(uVar7 ^ uVar15 ^ uVar19 ^ uVar12);
  uVar25 = (uint)(uVar22 >> 2 | uVar22 * 0x40000000);
  uVar15 = (uint)(uVar8 ^ uVar2 ^ uVar17 ^ uVar13);
  uVar20 = (uint)(uVar20 << 1 | (uint)((int)uVar20 < 0));
  uVar17 = (uint)(uVar20 + 0x5a827999 +
           ((uVar23 ^ uVar16) & uVar22 ^ uVar23) + (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar21);
  uVar21 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar15 = (uint)(uVar21 + 0x5a827999 +
           ((uVar25 ^ uVar16) & uVar18 ^ uVar16) + (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar23);
  uVar19 = (uint)(uVar1 ^ uVar9 ^ uVar3 ^ uVar19);
  uVar18 = (uint)(uVar18 >> 2 | uVar18 * 0x40000000);
  uVar24 = (uint)(uVar19 << 1 | (uint)((int)uVar19 < 0));
  uVar22 = (uint)(uVar17 >> 2 | uVar17 * 0x40000000);
  uVar17 = (uint)(uVar16 + 0x5a827999 +
           ((uVar18 ^ uVar25) & uVar17 ^ uVar25) + (uVar15 * 0x20 | uVar15 >> 0x1b) + uVar24);
  uVar2 = (uint)(uVar20 ^ uVar10 ^ uVar4 ^ uVar2);
  uVar3 = (uint)(uVar11 ^ uVar21 ^ uVar5 ^ uVar3);
  uVar19 = (uint)(uVar2 << 1 | (uint)((int)uVar2 < 0));
  uVar16 = (uint)(uVar15 >> 2 | uVar15 * 0x40000000);
  uVar15 = (uint)(uVar25 + 0x5a827999 +
           ((uVar22 ^ uVar18) & uVar15 ^ uVar18) + (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar19);
  uVar3 = (uint)(uVar3 << 1 | (uint)((int)uVar3 < 0));
  uVar2 = (uint)(uVar17 >> 2 | uVar17 * 0x40000000);
  uVar17 = (uint)(uVar18 + 0x6ed9eba1 +
           (uVar16 ^ uVar22 ^ uVar17) + (uVar15 * 0x20 | uVar15 >> 0x1b) + uVar3);
  uVar18 = (uint)(uVar24 ^ uVar6 ^ uVar4 ^ uVar12);
  uVar4 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  uVar23 = (uint)(uVar15 >> 2 | uVar15 * 0x40000000);
  uVar22 = (uint)(uVar22 + (uVar2 ^ uVar16 ^ uVar15) +
                    (uVar17 * 0x20 | uVar17 >> 0x1b) + 0x6ed9eba1 + uVar4);
  uVar18 = (uint)(uVar7 ^ uVar5 ^ uVar19 ^ uVar13);
  uVar5 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  uVar25 = (uint)(uVar17 >> 2 | uVar17 * 0x40000000);
  uVar16 = (uint)(uVar16 + (uVar23 ^ uVar2 ^ uVar17) +
                    (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x6ed9eba1 + uVar5);
  uVar18 = (uint)(uVar1 ^ uVar8 ^ uVar6 ^ uVar3);
  uVar18 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  uVar26 = (uint)(uVar22 >> 2 | uVar22 * 0x40000000);
  uVar2 = (uint)(uVar2 + (uVar25 ^ uVar23 ^ uVar22) +
                  (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x6ed9eba1 + uVar18);
  uVar15 = (uint)(uVar20 ^ uVar9 ^ uVar7 ^ uVar4);
  uVar15 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar7 = (uint)(uVar16 >> 2 | uVar16 * 0x40000000);
  uVar23 = (uint)(uVar23 + (uVar26 ^ uVar25 ^ uVar16) +
                    (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x6ed9eba1 + uVar15);
  uVar16 = (uint)(uVar21 ^ uVar10 ^ uVar8 ^ uVar5);
  uVar16 = (uint)(uVar16 << 1 | (uint)((int)uVar16 < 0));
  uVar22 = (uint)(uVar2 >> 2 | uVar2 * 0x40000000);
  uVar25 = (uint)(uVar25 + (uVar7 ^ uVar26 ^ uVar2) +
                    (uVar23 * 0x20 | uVar23 >> 0x1b) + 0x6ed9eba1 + uVar16);
  uVar17 = (uint)(uVar11 ^ uVar24 ^ uVar9 ^ uVar18);
  uVar17 = (uint)(uVar17 << 1 | (uint)((int)uVar17 < 0));
  uVar6 = (uint)(uVar23 >> 2 | uVar23 * 0x40000000);
  uVar26 = (uint)(uVar26 + (uVar22 ^ uVar7 ^ uVar23) +
                    (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar17);
  uVar23 = (uint)(uVar10 ^ uVar15 ^ uVar19 ^ uVar12);
  uVar23 = (uint)(uVar23 << 1 | (uint)((int)uVar23 < 0));
  uVar10 = (uint)(uVar25 >> 2 | uVar25 * 0x40000000);
  uVar7 = (uint)(uVar7 + (uVar6 ^ uVar22 ^ uVar25) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar23);
  uVar2 = (uint)(uVar11 ^ uVar16 ^ uVar3 ^ uVar13);
  uVar2 = (uint)(uVar2 << 1 | (uint)((int)uVar2 < 0));
  uVar11 = (uint)(uVar26 >> 2 | uVar26 * 0x40000000);
  uVar22 = (uint)(uVar22 + (uVar10 ^ uVar6 ^ uVar26) + (uVar7 * 0x20 | uVar7 >> 0x1b) + 0x6ed9eba1 + uVar2);
  uVar12 = (uint)(uVar17 ^ uVar4 ^ uVar1 ^ uVar12);
  uVar12 = (uint)(uVar12 << 1 | (uint)((int)uVar12 < 0));
  uVar8 = (uint)(uVar7 >> 2 | uVar7 * 0x40000000);
  uVar6 = (uint)(uVar6 + (uVar11 ^ uVar10 ^ uVar7) + (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x6ed9eba1 + uVar12);
  uVar13 = (uint)(uVar23 ^ uVar5 ^ uVar20 ^ uVar13);
  uVar13 = (uint)(uVar13 << 1 | (uint)((int)uVar13 < 0));
  uVar9 = (uint)(uVar22 >> 2 | uVar22 * 0x40000000);
  uVar10 = (uint)(uVar10 + (uVar8 ^ uVar11 ^ uVar22) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x6ed9eba1 + uVar13);
  uVar1 = (uint)(uVar2 ^ uVar18 ^ uVar21 ^ uVar1);
  uVar1 = (uint)(uVar1 << 1 | (uint)((int)uVar1 < 0));
  uVar7 = (uint)(uVar11 + 0x6ed9eba1 + (uVar9 ^ uVar8 ^ uVar6) + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar1);
  uVar11 = (uint)(uVar6 >> 2 | uVar6 * 0x40000000);
  uVar20 = (uint)(uVar12 ^ uVar15 ^ uVar24 ^ uVar20);
  uVar20 = (uint)(uVar20 << 1 | (uint)((int)uVar20 < 0));
  uVar8 = (uint)(uVar8 + 0x6ed9eba1 + (uVar11 ^ uVar9 ^ uVar10) + (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar20);
  uVar6 = (uint)(uVar10 >> 2 | uVar10 * 0x40000000);
  uVar21 = (uint)(uVar13 ^ uVar16 ^ uVar19 ^ uVar21);
  uVar21 = (uint)(uVar21 << 1 | (uint)((int)uVar21 < 0));
  uVar9 = (uint)(uVar9 + 0x6ed9eba1 + (uVar6 ^ uVar11 ^ uVar7) + (uVar8 * 0x20 | uVar8 >> 0x1b) + uVar21);
  uVar24 = (uint)(uVar1 ^ uVar17 ^ uVar3 ^ uVar24);
  uVar22 = (uint)(uVar24 << 1 | (uint)((int)uVar24 < 0));
  uVar7 = (uint)(uVar7 >> 2 | uVar7 * 0x40000000);
  uVar10 = (uint)(uVar8 >> 2 | uVar8 * 0x40000000);
  uVar8 = (uint)(uVar11 + 0x6ed9eba1 + (uVar7 ^ uVar6 ^ uVar8) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar22);
  uVar19 = (uint)(uVar20 ^ uVar23 ^ uVar4 ^ uVar19);
  uVar19 = (uint)(uVar19 << 1 | (uint)((int)uVar19 < 0));
  uVar25 = (uint)(uVar9 >> 2 | uVar9 * 0x40000000);
  uVar9 = (uint)(uVar6 + 0x6ed9eba1 + (uVar10 ^ uVar7 ^ uVar9) + (uVar8 * 0x20 | uVar8 >> 0x1b) + uVar19);
  uVar3 = (uint)(uVar21 ^ uVar2 ^ uVar5 ^ uVar3);
  uVar6 = (uint)(uVar3 << 1 | (uint)((int)uVar3 < 0));
  uVar24 = (uint)(uVar8 >> 2 | uVar8 * 0x40000000);
  uVar8 = (uint)(uVar6 + 0x6ed9eba1 + (uVar25 ^ uVar10 ^ uVar8) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar7);
  uVar4 = (uint)(uVar22 ^ uVar12 ^ uVar18 ^ uVar4);
  uVar4 = (uint)(uVar4 << 1 | (uint)((int)uVar4 < 0));
  uVar11 = (uint)(uVar9 >> 2 | uVar9 * 0x40000000);
  uVar9 = (uint)(uVar4 + 0x6ed9eba1 + (uVar25 ^ uVar9 ^ uVar24) + (uVar8 * 0x20 | uVar8 >> 0x1b) + uVar10);
  uVar5 = (uint)(uVar19 ^ uVar13 ^ uVar15 ^ uVar5);
  uVar3 = (uint)(uVar5 << 1 | (uint)((int)uVar5 < 0));
  uVar18 = (uint)(uVar1 ^ uVar16 ^ uVar18 ^ uVar6);
  uVar7 = (uint)(uVar3 + 0x6ed9eba1 + (uVar11 ^ uVar24 ^ uVar8) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar25);
  uVar8 = (uint)(uVar8 >> 2 | uVar8 * 0x40000000);
  uVar10 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  uVar25 = (uint)(uVar9 >> 2 | uVar9 * 0x40000000);
  uVar9 = (uint)(uVar24 + 0x6ed9eba1 + (uVar8 ^ uVar11 ^ uVar9) + (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar10);
  uVar18 = (uint)(uVar20 ^ uVar17 ^ uVar15 ^ uVar4);
  uVar5 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  uVar24 = (uint)(uVar7 >> 2 | uVar7 * 0x40000000);
  uVar18 = (uint)(uVar21 ^ uVar23 ^ uVar16 ^ uVar3);
  uVar11 = (uint)((uVar9 * 0x20 | uVar9 >> 0x1b) + uVar11 +
           ((uVar25 | uVar7) & uVar8 | uVar25 & uVar7) + 0x8f1bbcdc + uVar5);
  uVar18 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  uVar15 = (uint)(uVar22 ^ uVar2 ^ uVar17 ^ uVar10);
  uVar17 = (uint)((uVar11 * 0x20 | uVar11 >> 0x1b) + uVar8 +
           ((uVar24 | uVar9) & uVar25 | uVar24 & uVar9) + 0x8f1bbcdc + uVar18);
  uVar15 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar9 = (uint)(uVar9 >> 2 | uVar9 * 0x40000000);
  uVar16 = (uint)(uVar19 ^ uVar12 ^ uVar23 ^ uVar5);
  uVar23 = (uint)((uVar17 * 0x20 | uVar17 >> 0x1b) + uVar25 +
           ((uVar9 | uVar11) & uVar24 | uVar9 & uVar11) + 0x8f1bbcdc + uVar15);
  uVar7 = (uint)(uVar16 << 1 | (uint)((int)uVar16 < 0));
  uVar11 = (uint)(uVar11 >> 2 | uVar11 * 0x40000000);
  uVar25 = (uint)(uVar17 >> 2 | uVar17 * 0x40000000);
  uVar17 = (uint)((uVar23 * 0x20 | uVar23 >> 0x1b) + uVar24 +
           ((uVar11 | uVar17) & uVar9 | uVar11 & uVar17) + 0x8f1bbcdc + uVar7);
  uVar16 = (uint)(uVar13 ^ uVar2 ^ uVar18 ^ uVar6);
  uVar8 = (uint)(uVar16 << 1 | (uint)((int)uVar16 < 0));
  uVar16 = (uint)(uVar1 ^ uVar12 ^ uVar15 ^ uVar4);
  uVar2 = (uint)((uVar17 * 0x20 | uVar17 >> 0x1b) + uVar9 +
          ((uVar25 | uVar23) & uVar11 | uVar25 & uVar23) + 0x8f1bbcdc + uVar8);
  uVar9 = (uint)(uVar16 << 1 | (uint)((int)uVar16 < 0));
  uVar24 = (uint)(uVar23 >> 2 | uVar23 * 0x40000000);
  uVar16 = (uint)(uVar20 ^ uVar13 ^ uVar7 ^ uVar3);
  uVar23 = (uint)((uVar2 * 0x20 | uVar2 >> 0x1b) + uVar11 +
           ((uVar24 | uVar17) & uVar25 | uVar24 & uVar17) + 0x8f1bbcdc + uVar9);
  uVar16 = (uint)(uVar16 << 1 | (uint)((int)uVar16 < 0));
  uVar11 = (uint)(uVar17 >> 2 | uVar17 * 0x40000000);
  uVar17 = (uint)(uVar21 ^ uVar1 ^ uVar8 ^ uVar10);
  uVar12 = (uint)((uVar23 * 0x20 | uVar23 >> 0x1b) + uVar25 +
           ((uVar11 | uVar2) & uVar24 | uVar11 & uVar2) + 0x8f1bbcdc + uVar16);
  uVar17 = (uint)(uVar17 << 1 | (uint)((int)uVar17 < 0));
  uVar25 = (uint)(uVar2 >> 2 | uVar2 * 0x40000000);
  uVar26 = (uint)(uVar23 >> 2 | uVar23 * 0x40000000);
  uVar13 = (uint)((uVar12 * 0x20 | uVar12 >> 0x1b) + uVar24 +
           ((uVar25 | uVar23) & uVar11 | uVar25 & uVar23) + 0x8f1bbcdc + uVar17);
  uVar23 = (uint)(uVar22 ^ uVar20 ^ uVar9 ^ uVar5);
  uVar23 = (uint)(uVar23 << 1 | (uint)((int)uVar23 < 0));
  uVar24 = (uint)(uVar12 >> 2 | uVar12 * 0x40000000);
  uVar2 = (uint)(uVar19 ^ uVar21 ^ uVar16 ^ uVar18);
  uVar1 = (uint)((uVar13 * 0x20 | uVar13 >> 0x1b) + uVar11 +
          ((uVar26 | uVar12) & uVar25 | uVar26 & uVar12) + 0x8f1bbcdc + uVar23);
  uVar2 = (uint)(uVar2 << 1 | (uint)((int)uVar2 < 0));
  uVar20 = (uint)(uVar13 >> 2 | uVar13 * 0x40000000);
  uVar12 = (uint)(uVar22 ^ uVar17 ^ uVar15 ^ uVar6);
  uVar13 = (uint)((uVar1 * 0x20 | uVar1 >> 0x1b) + uVar25 +
           ((uVar24 | uVar13) & uVar26 | uVar24 & uVar13) + 0x8f1bbcdc + uVar2);
  local_6c = (uint)(uVar12 << 1 | (uint)((int)uVar12 < 0));
  uVar21 = (uint)(uVar1 >> 2 | uVar1 * 0x40000000);
  uVar12 = (uint)(uVar19 ^ uVar23 ^ uVar7 ^ uVar4);
  uVar1 = (uint)((uVar13 * 0x20 | uVar13 >> 0x1b) + uVar26 +
          ((uVar20 | uVar1) & uVar24 | uVar20 & uVar1) + 0x8f1bbcdc + local_6c);
  local_78 = (uint)(uVar12 << 1 | (uint)((int)uVar12 < 0));
  uVar11 = (uint)(uVar13 >> 2 | uVar13 * 0x40000000);
  uVar6 = (uint)(uVar2 ^ uVar8 ^ uVar3 ^ uVar6);
  uVar13 = (uint)((uVar1 * 0x20 | uVar1 >> 0x1b) + uVar24 +
           ((uVar21 | uVar13) & uVar20 | uVar21 & uVar13) + 0x8f1bbcdc + local_78);
  local_74 = (uint)(uVar6 << 1 | (uint)((int)uVar6 < 0));
  uVar20 = (uint)((uVar13 * 0x20 | uVar13 >> 0x1b) + uVar20 +
           ((uVar11 | uVar1) & uVar21 | uVar11 & uVar1) + 0x8f1bbcdc + local_74);
  uVar4 = (uint)(local_6c ^ uVar9 ^ uVar10 ^ uVar4);
  uVar12 = (uint)(uVar4 << 1 | (uint)((int)uVar4 < 0));
  uVar4 = (uint)(uVar1 >> 2 | uVar1 * 0x40000000);
  uVar19 = (uint)(uVar13 >> 2 | uVar13 * 0x40000000);
  uVar13 = (uint)(uVar21 + (uVar20 * 0x20 | uVar20 >> 0x1b) +
           ((uVar4 | uVar13) & uVar11 | uVar4 & uVar13) + 0x8f1bbcdc + uVar12);
  uVar3 = (uint)(local_78 ^ uVar16 ^ uVar5 ^ uVar3);
  uVar21 = (uint)(uVar3 << 1 | (uint)((int)uVar3 < 0));
  uVar6 = (uint)(uVar20 >> 2 | uVar20 * 0x40000000);
  uVar1 = (uint)(uVar11 + (uVar13 * 0x20 | uVar13 >> 0x1b) +
          ((uVar19 | uVar20) & uVar4 | uVar19 & uVar20) + 0x8f1bbcdc + uVar21);
  uVar10 = (uint)(local_74 ^ uVar17 ^ uVar18 ^ uVar10);
  local_70 = (uint)(uVar10 << 1 | (uint)((int)uVar10 < 0));
  uVar10 = (uint)(uVar13 >> 2 | uVar13 * 0x40000000);
  uVar5 = (uint)(uVar12 ^ uVar23 ^ uVar15 ^ uVar5);
  uVar3 = (uint)(uVar4 + (uVar1 * 0x20 | uVar1 >> 0x1b) +
          ((uVar6 | uVar13) & uVar19 | uVar6 & uVar13) + 0x8f1bbcdc + local_70);
  uVar13 = (uint)(uVar5 << 1 | (uint)((int)uVar5 < 0));
  uVar20 = (uint)(uVar1 >> 2 | uVar1 * 0x40000000);
  uVar19 = (uint)(uVar19 + (uVar3 * 0x20 | uVar3 >> 0x1b) +
           ((uVar10 | uVar1) & uVar6 | uVar10 & uVar1) + 0x8f1bbcdc + uVar13);
  uVar18 = (uint)(uVar21 ^ uVar2 ^ uVar7 ^ uVar18);
  uVar1 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  uVar4 = (uint)(uVar3 >> 2 | uVar3 * 0x40000000);
  uVar6 = (uint)(uVar6 + (uVar19 * 0x20 | uVar19 >> 0x1b) +
          ((uVar20 | uVar3) & uVar10 | uVar20 & uVar3) + 0x8f1bbcdc + uVar1);
  uVar15 = (uint)(local_70 ^ local_6c ^ uVar8 ^ uVar15);
  uVar5 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar7 = (uint)(uVar13 ^ local_78 ^ uVar9 ^ uVar7);
  uVar18 = (uint)(uVar7 << 1 | (uint)((int)uVar7 < 0));
  uVar3 = (uint)(uVar10 + (uVar6 * 0x20 | uVar6 >> 0x1b) +
          ((uVar4 | uVar19) & uVar20 | uVar4 & uVar19) + uVar5 + -0x70e44324);
  uVar19 = (uint)(uVar19 >> 2 | uVar19 * 0x40000000);
  uVar7 = (uint)(uVar6 >> 2 | uVar6 * 0x40000000);
  uVar8 = (uint)(uVar1 ^ local_74 ^ uVar16 ^ uVar8);
  uVar15 = (uint)((uVar3 * 0x20 | uVar3 >> 0x1b) + uVar20 +
           ((uVar19 | uVar6) & uVar4 | uVar19 & uVar6) + 0x8f1bbcdc + uVar18);
  local_68 = (uint)(uVar8 << 1 | (uint)((int)uVar8 < 0));
  uVar6 = (uint)(uVar3 >> 2 | uVar3 * 0x40000000);
  uVar4 = (uint)(uVar4 + (uVar15 * 0x20 | uVar15 >> 0x1b) +
          (uVar7 ^ uVar19 ^ uVar3) + 0xca62c1d6 + local_68);
  uVar9 = (uint)(uVar5 ^ uVar12 ^ uVar17 ^ uVar9);
  local_8c = (uint)(uVar9 << 1 | (uint)((int)uVar9 < 0));
  uVar20 = (uint)((uVar4 * 0x20 | uVar4 >> 0x1b) + uVar19 +
           (uVar6 ^ uVar7 ^ uVar15) + 0xca62c1d6 + local_8c);
  uVar16 = (uint)(uVar18 ^ uVar21 ^ uVar23 ^ uVar16);
  uVar19 = (uint)(uVar15 >> 2 | uVar15 * 0x40000000);
  uVar3 = (uint)(uVar16 << 1 | (uint)((int)uVar16 < 0));
  uVar15 = (uint)((uVar19 ^ uVar6 ^ uVar4) + uVar3 + (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar7 + 0xca62c1d6);
  uVar17 = (uint)(local_68 ^ local_70 ^ uVar2 ^ uVar17);
  uVar4 = (uint)(uVar4 >> 2 | uVar4 * 0x40000000);
  local_b4 = (uint)(uVar17 << 1 | (uint)((int)uVar17 < 0));
  uVar7 = (uint)(uVar20 >> 2 | uVar20 * 0x40000000);
  uVar17 = (uint)(uVar6 + (uVar15 * 0x20 | uVar15 >> 0x1b) +
           (uVar4 ^ uVar19 ^ uVar20) + local_b4 + -0x359d3e2a);
  uVar23 = (uint)(local_8c ^ uVar13 ^ local_6c ^ uVar23);
  local_80 = (uint)(uVar23 << 1 | (uint)((int)uVar23 < 0));
  uVar16 = (uint)(uVar15 >> 2 | uVar15 * 0x40000000);
  uVar20 = (uint)(uVar19 + (uVar17 * 0x20 | uVar17 >> 0x1b) +
           (uVar7 ^ uVar4 ^ uVar15) + local_80 + 0xca62c1d6);
  uVar15 = (uint)(uVar1 ^ uVar3 ^ uVar2 ^ local_78);
  local_54 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar23 = (uint)(uVar17 >> 2 | uVar17 * 0x40000000);
  uVar19 = (uint)((uVar20 * 0x20 | uVar20 >> 0x1b) + uVar4 + -0x359d3e2a +
           (uVar16 ^ uVar7 ^ uVar17) + local_54);
  uVar15 = (uint)(uVar5 ^ local_b4 ^ local_6c ^ local_74);
  local_50 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar2 = (uint)(uVar20 >> 2 | uVar20 * 0x40000000);
  uVar15 = (uint)(uVar18 ^ local_80 ^ local_78 ^ uVar12);
  uVar17 = (uint)((uVar19 * 0x20 | uVar19 >> 0x1b) + local_50 + -0x359d3e2a +
           (uVar16 ^ uVar20 ^ uVar23) + uVar7);
  local_64 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar20 = (uint)(uVar19 >> 2 | uVar19 * 0x40000000);
  uVar19 = (uint)(local_64 + (uVar17 * 0x20 | uVar17 >> 0x1b) +
           (uVar2 ^ uVar19 ^ uVar23) + 0xca62c1d6 + uVar16);
  uVar15 = (uint)(local_54 ^ uVar21 ^ local_68 ^ local_74);
  local_48 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar16 = (uint)(uVar17 >> 2 | uVar17 * 0x40000000);
  uVar17 = (uint)(uVar23 + (uVar19 * 0x20 | uVar19 >> 0x1b) +
           (uVar20 ^ uVar2 ^ uVar17) + 0xca62c1d6 + local_48);
  uVar15 = (uint)(local_70 ^ local_8c ^ uVar12 ^ local_50);
  local_44 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar2 = (uint)(uVar2 + (uVar17 * 0x20 | uVar17 >> 0x1b) +
          (uVar16 ^ uVar20 ^ uVar19) + 0xca62c1d6 + local_44);
  uVar15 = (uint)(uVar21 ^ uVar13 ^ uVar3 ^ local_64);
  local_90 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar12 = (uint)(uVar19 >> 2 | uVar19 * 0x40000000);
  uVar23 = (uint)(uVar17 >> 2 | uVar17 * 0x40000000);
  uVar17 = (uint)((uVar2 * 0x20 | uVar2 >> 0x1b) + local_90 + -0x359d3e2a +
           (uVar16 ^ uVar17 ^ uVar12) + uVar20);
  uVar15 = (uint)(local_48 ^ local_70 ^ uVar1 ^ local_b4);
  local_98 = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar15 = (uint)((uVar23 ^ uVar12 ^ uVar2) + uVar16 +
           (uVar17 * 0x20 | uVar17 >> 0x1b) + 0xca62c1d6 + local_98);
  uVar16 = (uint)(local_44 ^ uVar13 ^ uVar5 ^ local_80);
  uVar2 = (uint)(uVar2 >> 2 | uVar2 * 0x40000000);
  local_38 = (uint)(uVar16 << 1 | (uint)((int)uVar16 < 0));
  local_84 = (uint)(uVar17 >> 2 | uVar17 * 0x40000000);
  local_7c = (uint)((uVar2 ^ uVar23 ^ uVar17) + local_38 +
             (uVar15 * 0x20 | uVar15 >> 0x1b) + uVar12 + 0xca62c1d6);
  uVar16 = (uint)(local_54 ^ uVar1 ^ uVar18 ^ local_90);
  local_34 = (uint)(uVar16 << 1 | (uint)((int)uVar16 < 0));
  local_a8 = (uint)((local_7c * 0x20 | local_7c >> 0x1b) + uVar23 +
             (local_84 ^ uVar2 ^ uVar15) + 0xca62c1d6 + local_34);
  uVar17 = (uint)(uVar15 >> 2 | uVar15 * 0x40000000);
  uVar15 = (uint)(uVar5 ^ local_68 ^ local_98 ^ local_50);
  local_9c = (uint)(uVar15 << 1 | (uint)((int)uVar15 < 0));
  uVar23 = (uint)(local_7c >> 2 | local_7c * 0x40000000);
  uVar15 = (uint)((uVar17 ^ local_84 ^ local_7c) + 0xca62c1d6 + local_9c +
           (local_a8 * 0x20 | local_a8 >> 0x1b) + uVar2);
  uVar18 = (uint)(uVar18 ^ local_8c ^ local_38 ^ local_64);
  local_88 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  local_b0 = (uint)((uVar15 * 0x20 | uVar15 >> 0x1b) + local_84 +
             (uVar23 ^ uVar17 ^ local_a8) + 0xca62c1d6 + local_88);
  uVar16 = (uint)(local_a8 >> 2 | local_a8 * 0x40000000);
  uVar18 = (uint)(local_48 ^ local_68 ^ uVar3 ^ local_34);
  local_a4 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  local_ac = (uint)(uVar15 >> 2 | uVar15 * 0x40000000);
  uVar17 = (uint)(uVar17 + (local_b0 * 0x20 | local_b0 >> 0x1b) +
           (uVar16 ^ uVar23 ^ uVar15) + local_a4 + -0x359d3e2a);
  uVar18 = (uint)(local_44 ^ local_8c ^ local_b4 ^ local_9c);
  local_a0 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  local_8 = (uint)(local_b0 >> 2 | local_b0 * 0x40000000);
  uVar15 = (uint)((uVar17 * 0x20 | uVar17 >> 0x1b) + uVar23 +
           (local_ac ^ uVar16 ^ local_b0) + 0xca62c1d6 + local_a0);
  uVar18 = (uint)(uVar3 ^ local_80 ^ local_88 ^ local_90);
  local_b8 = (uint)(uVar18 << 1 | (uint)((int)uVar18 < 0));
  local_14 = (uint)(uVar16 + (uVar15 * 0x20 | uVar15 >> 0x1b) +
             (local_8 ^ local_ac ^ uVar17) + 0xca62c1d6 + local_b8);
  local_5c = (uint)(local_54 ^ local_b4 ^ local_a4 ^ local_98);
  local_94 = (uint)(local_5c << 1 | (uint)((int)local_5c < 0));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + local_14;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + local_8;
  local_c = (uint)(uVar17 >> 2 | uVar17 * 0x40000000);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + local_c;
  local_10 = (uint)(uVar15 >> 2 | uVar15 * 0x40000000);
  iVar14 = (int)((local_14 * 0x20 | local_14 >> 0x1b) + local_94 + (local_c ^ local_8 ^ uVar15) + local_ac);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + local_10;
  local_18 = (int)(iVar14 + -0x359d3e2a);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x359d3e2a + iVar14;
  local_58 = (uint)(local_80);
  local_4c = (uint)(local_64);
  local_40 = (uint)(local_90);
  local_3c = (uint)(local_98);
  local_30 = (uint)(local_9c);
  local_2c = (uint)(local_88);
  local_28 = (uint)(local_a4);
  local_24 = (uint)(local_a0);
  local_20 = (uint)(local_b8);
  local_1c = (uint)(local_94);
  thunk_FUN_11423ed0(&local_5c,0x58);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1140ffb0; body size 423 bytes.
#line 1 "ENTRY_1140ffb0"

void FUN_1140ffb0(void *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  size_t _Size;
  uint uVar2;
  uint uVar3;
  undefined1 *_Dst;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined1 local_44 [56];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_60);
  memset(local_44,0,0x40);
  local_60 = (uint)(0);
  local_5c = (uint)(0);
  local_58 = (uint)(0x67452301);
  local_54 = (uint)(0xefcdab89);
  local_50 = (uint)(0x98badcfe);
  local_4c = (uint)(0x10325476);
  local_48 = (uint)(0xc3d2e1f0);
  uVar2 = (uint)(param_2);
  if (param_2 != 0) {
    for (; local_60 = (uint)(uVar2, 0x3f < param_2); param_2 = param_2 - 0x40) {
      iVar1 = (int)(thunk_FUN_1140e9e0(&local_60,param_1));
      if (iVar1 != 0) goto LAB_11410133;
      param_1 = (void *)((void *)((int)param_1 + 0x40));
      uVar2 = (uint)(local_60);
    }
    if (param_2 != 0) {
      memcpy(local_44,param_1,param_2);
    }
  }
  uVar2 = (uint)(local_60 & 0x3f);
  local_44[uVar2] = (undefined1)(0x80);
  uVar3 = (uint)(uVar2 + 1);
  _Dst = (undefined1 *)(local_44 + uVar2 + 1);
  if (uVar3 < 0x39) {
    _Size = (size_t)(0x38 - uVar3);
  }
  else {
    memset(_Dst,0,0x40 - uVar3);
    iVar1 = (int)(thunk_FUN_1140e9e0(&local_60,local_44));
    if (iVar1 != 0) goto LAB_11410124;
    _Size = (size_t)(0x38);
    _Dst = (undefined1 *)(local_44);
  }
  memset(_Dst,0,_Size);
  uVar2 = (uint)(local_5c * 8);
  local_c = (uint)((local_5c & 0x1fffffff) >> 0x15 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
            (uVar2 | local_60 >> 0x1d) << 0x18);
  local_8 = (uint)((local_60 & 0x1fffffff) >> 0x15 | (local_60 << 3 & 0xff0000) >> 8 |
            (local_60 << 3 & 0xff00) << 8 | local_60 << 0x1b);
  iVar1 = (int)(thunk_FUN_1140e9e0(&local_60,local_44));
  if (iVar1 == 0) {
    *param_3 = (uint)(local_58 >> 0x18 | (local_58 & 0xff0000) >> 8 | (local_58 & 0xff00) << 8 |
               local_58 << 0x18);
    param_3[1] = (uint)(local_54 >> 0x18 | (local_54 & 0xff0000) >> 8 | (local_54 & 0xff00) << 8 |
                 local_54 << 0x18);
    param_3[2] = (uint)(local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
                 local_50 << 0x18);
    param_3[3] = (uint)(local_4c >> 0x18 | (local_4c & 0xff0000) >> 8 | (local_4c & 0xff00) << 8 |
                 local_4c << 0x18);
    param_3[4] = (uint)(local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8 |
                 local_48 << 0x18);
  }
LAB_11410124:
  thunk_FUN_11423ed0(&local_60,0x5c);
LAB_11410133:
  thunk_FUN_11423ed0(&local_60,0x5c);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11410360; body size 164 bytes.
#line 1 "ENTRY_11410360"

int FUN_11410360(uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint _Size;
  
  if (param_3 != 0) {
    uVar3 = (uint)(*param_1 & 0x3f);
    uVar1 = (uint)(*param_1 + param_3);
    _Size = (uint)(0x40 - uVar3);
    *param_1 = (uint)(uVar1);
    if (uVar1 < param_3) {
      param_1[1] = (uint)(param_1[1] + 1);
    }
    if ((uVar3 != 0) && (_Size <= param_3)) {
      memcpy((void *)((int)param_1 + uVar3 + 0x1c),param_2,_Size);
      iVar2 = (int)(thunk_FUN_1140e9e0(param_1,param_1 + 7));
      if (iVar2 != 0) {
        return (int)(iVar2);
      }
      param_2 = (void *)((void *)((int)param_2 + _Size));
      param_3 = (uint)(param_3 - _Size);
      uVar3 = (uint)(0);
    }
    for (; 0x3f < param_3; param_3 = param_3 - 0x40) {
      iVar2 = (int)(thunk_FUN_1140e9e0(param_1,param_2));
      if (iVar2 != 0) {
        return (int)(iVar2);
      }
      param_2 = (void *)((void *)((int)param_2 + 0x40));
    }
    if (param_3 != 0) {
      memcpy((void *)((int)param_1 + uVar3 + 0x1c),param_2,param_3);
    }
  }
  return (int)(0);
}


// Reference entry 11410440; body size 3022 bytes.
#line 1 "ENTRY_11410440"

void FUN_11410440(int param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int aiStack_164 [4];
  uint *puStack_154;
  uint uStack_150;
  uint local_13c [77];
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_13c);
  local_13c[3] = (uint)(param_1);
  local_13c[2] = (uint)(*(uint *)(param_1 + 0x48));
  local_13c[0x46] = (uint)(local_13c[2]);
  local_13c[1] = (uint)(*(uint *)(param_1 + 0x4c));
  local_13c[0x47] = (uint)(local_13c[1]);
  local_13c[0x48] = (uint)(*(uint *)(param_1 + 0x50));
  local_13c[0x49] = (uint)(*(uint *)(param_1 + 0x54));
  local_13c[0x4a] = (uint)(*(uint *)(param_1 + 0x58));
  local_13c[0x4b] = (uint)(*(uint *)(param_1 + 0x5c));
  local_13c[0x4c] = (uint)(*(uint *)(param_1 + 0x60));
  local_8 = (uint)(*(uint *)(param_1 + 100));
  uVar4 = (uint)(0);
  do {
    uVar2 = (uint)(*(uint *)(param_2 + uVar4 * 4));
    local_13c[uVar4 + 6] = (uint)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
    uVar4 = (uint)(uVar4 + 1);
  } while (uVar4 < 0x10);
  uVar4 = (uint)(0);
  local_13c[0] = (uint)(local_13c[0x46]);
  do {
    iVar5 = (int)(local_8 + ((local_13c[0x4a] >> 0xb | local_13c[0x4a] << 0x15) ^
                       (local_13c[0x4a] << 7 | local_13c[0x4a] >> 0x19) ^
                      (local_13c[0x4a] >> 6 | local_13c[0x4a] << 0x1a)) +
                      ((local_13c[0x4b] ^ local_13c[0x4c]) & local_13c[0x4a] ^ local_13c[0x4c]) +
                      *(int *)((int)&DAT_11bfe6f0 + uVar4) + *(int *)((int)local_13c + uVar4 + 0x18));
    local_13c[0x49] = (uint)(iVar5 + local_13c[0x49]);
    local_8 = (uint)(iVar5 + (local_13c[1] & local_13c[0] | (local_13c[1] | local_13c[0]) & local_13c[0x48]
                      ) + ((local_13c[0] >> 0xd | local_13c[0] << 0x13) ^
                           (local_13c[0] << 10 | local_13c[0] >> 0x16) ^
                          (local_13c[0] >> 2 | local_13c[0] << 0x1e)));
    iVar5 = (int)(((local_13c[0x49] >> 0xb | local_13c[0x49] * 0x200000) ^
             (local_13c[0x49] * 0x80 | local_13c[0x49] >> 0x19) ^
            (local_13c[0x49] >> 6 | local_13c[0x49] * 0x4000000)) +
            ((local_13c[0x4b] ^ local_13c[0x4a]) & local_13c[0x49] ^ local_13c[0x4b]) +
            *(int *)((int)&DAT_11bfe6f4 + uVar4) + *(int *)((int)local_13c + uVar4 + 0x1c) +
            local_13c[0x4c]);
    local_13c[0x48] = (uint)(local_13c[0x48] + iVar5);
    local_13c[0x4c] = (uint)(iVar5 + (local_8 & local_13c[0] | (local_8 | local_13c[0]) & local_13c[1]) +
                 ((local_8 >> 0xd | local_8 * 0x80000) ^ (local_8 * 0x400 | local_8 >> 0x16) ^
                 (local_8 >> 2 | local_8 * 0x40000000)));
    iVar5 = (int)((local_13c[0x4a] ^ (local_13c[0x49] ^ local_13c[0x4a]) & local_13c[0x48]) +
            ((local_13c[0x48] >> 0xb | local_13c[0x48] * 0x200000) ^
             (local_13c[0x48] * 0x80 | local_13c[0x48] >> 0x19) ^
            (local_13c[0x48] >> 6 | local_13c[0x48] * 0x4000000)) +
            *(int *)((int)&DAT_11bfe6f8 + uVar4) + *(int *)((int)local_13c + uVar4 + 0x20) +
            local_13c[0x4b]);
    local_13c[0x47] = (uint)(local_13c[1] + iVar5);
    local_13c[0x4b] = (uint)((local_8 & local_13c[0x4c] | (local_8 | local_13c[0x4c]) & local_13c[0]) +
         ((local_13c[0x4c] >> 0xd | local_13c[0x4c] * 0x80000) ^
          (local_13c[0x4c] * 0x400 | local_13c[0x4c] >> 0x16) ^
         (local_13c[0x4c] >> 2 | local_13c[0x4c] * 0x40000000)) + iVar5);
    iVar5 = (int)(((local_13c[0x47] >> 0xb | local_13c[0x47] * 0x200000) ^
             (local_13c[0x47] * 0x80 | local_13c[0x47] >> 0x19) ^
            (local_13c[0x47] >> 6 | local_13c[0x47] * 0x4000000)) +
            ((local_13c[0x48] ^ local_13c[0x49]) & local_13c[0x47] ^ local_13c[0x49]) +
            *(int *)((int)&DAT_11bfe6fc + uVar4) + *(int *)((int)local_13c + uVar4 + 0x24) +
            local_13c[0x4a]);
    local_13c[0x46] = (uint)(local_13c[0] + iVar5);
    local_13c[0x4a] = (uint)((local_13c[0x4c] & local_13c[0x4b] | (local_13c[0x4c] | local_13c[0x4b]) & local_8) +
         ((local_13c[0x4b] >> 0xd | local_13c[0x4b] * 0x80000) ^
          (local_13c[0x4b] * 0x400 | local_13c[0x4b] >> 0x16) ^
         (local_13c[0x4b] >> 2 | local_13c[0x4b] * 0x40000000)) + iVar5);
    iVar5 = (int)(((local_13c[0x46] >> 0xb | local_13c[0x46] * 0x200000) ^
             (local_13c[0x46] * 0x80 | local_13c[0x46] >> 0x19) ^
            (local_13c[0x46] >> 6 | local_13c[0x46] * 0x4000000)) +
            ((local_13c[0x47] ^ local_13c[0x48]) & local_13c[0x46] ^ local_13c[0x48]) +
            *(int *)((int)&DAT_11bfe700 + uVar4) + *(int *)((int)local_13c + uVar4 + 0x28) +
            local_13c[0x49]);
    local_8 = (uint)(local_8 + iVar5);
    local_13c[0x49] = (uint)((local_13c[0x4b] & local_13c[0x4a] | (local_13c[0x4b] | local_13c[0x4a]) & local_13c[0x4c])
         + ((local_13c[0x4a] >> 0xd | local_13c[0x4a] * 0x80000) ^
            (local_13c[0x4a] * 0x400 | local_13c[0x4a] >> 0x16) ^
           (local_13c[0x4a] >> 2 | local_13c[0x4a] * 0x40000000)) + iVar5);
    iVar5 = (int)(((local_8 >> 0xb | local_8 * 0x200000) ^ (local_8 * 0x80 | local_8 >> 0x19) ^
            (local_8 >> 6 | local_8 * 0x4000000)) +
            ((local_13c[0x46] ^ local_13c[0x47]) & local_8 ^ local_13c[0x47]) +
            *(int *)((int)&DAT_11bfe704 + uVar4) + *(int *)((int)local_13c + uVar4 + 0x2c) +
            local_13c[0x48]);
    local_13c[0x4c] = (uint)(local_13c[0x4c] + iVar5);
    local_13c[0x48] = (uint)((local_13c[0x4a] & local_13c[0x49] | (local_13c[0x4a] | local_13c[0x49]) & local_13c[0x4b])
         + ((local_13c[0x49] >> 0xd | local_13c[0x49] * 0x80000) ^
            (local_13c[0x49] * 0x400 | local_13c[0x49] >> 0x16) ^
           (local_13c[0x49] >> 2 | local_13c[0x49] * 0x40000000)) + iVar5);
    iVar5 = (int)(((local_8 ^ local_13c[0x46]) & local_13c[0x4c] ^ local_13c[0x46]) +
            ((local_13c[0x4c] >> 0xb | local_13c[0x4c] * 0x200000) ^
             (local_13c[0x4c] * 0x80 | local_13c[0x4c] >> 0x19) ^
            (local_13c[0x4c] >> 6 | local_13c[0x4c] * 0x4000000)) +
            *(int *)((int)local_13c + uVar4 + 0x30) + *(int *)((int)&DAT_11bfe708 + uVar4) +
            local_13c[0x47]);
    local_13c[0x4b] = (uint)(local_13c[0x4b] + iVar5);
    local_13c[1] = (uint)((local_13c[0x49] & local_13c[0x48] |
                   (local_13c[0x49] | local_13c[0x48]) & local_13c[0x4a]) +
                   ((local_13c[0x48] >> 0xd | local_13c[0x48] * 0x80000) ^
                    (local_13c[0x48] * 0x400 | local_13c[0x48] >> 0x16) ^
                   (local_13c[0x48] >> 2 | local_13c[0x48] * 0x40000000)) + iVar5);
    local_13c[0x47] = (uint)(local_13c[1]);
    iVar5 = (int)(uVar4 + 0x34);
    piVar1 = (int *)((int *)((int)&DAT_11bfe70c + uVar4));
    uVar4 = (uint)(uVar4 + 0x20);
    iVar5 = (int)(((local_13c[0x4b] >> 0xb | local_13c[0x4b] * 0x200000) ^
             (local_13c[0x4b] * 0x80 | local_13c[0x4b] >> 0x19) ^
            (local_13c[0x4b] >> 6 | local_13c[0x4b] * 0x4000000)) +
            ((local_13c[0x4c] ^ local_8) & local_13c[0x4b] ^ local_8) +
            *(int *)((int)local_13c + iVar5) + *piVar1 + local_13c[0x46]);
    local_13c[0x4a] = (uint)(local_13c[0x4a] + iVar5);
    local_13c[0] = (uint)(iVar5 + (local_13c[1] & local_13c[0x48] |
                           (local_13c[1] | local_13c[0x48]) & local_13c[0x49]) +
                           ((local_13c[1] >> 0xd | local_13c[1] * 0x80000) ^
                            (local_13c[1] * 0x400 | local_13c[1] >> 0x16) ^
                           (local_13c[1] >> 2 | local_13c[1] * 0x40000000)));
    local_13c[0x46] = (uint)(local_13c[0]);
  } while (uVar4 < 0x40);
  uVar4 = (uint)(0x40);
  do {
    uVar2 = (uint)(*(uint *)((int)local_13c + uVar4 + 0x10));
    uVar3 = (uint)(*(uint *)((int)aiStack_164 + uVar4 + 4));
    iVar5 = (int)(((uVar2 << 0xf | uVar2 >> 0x11) ^ (uVar2 << 0xd | uVar2 >> 0x13) ^ uVar2 >> 10) +
            ((uVar3 << 0xe | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 << 0x19) ^ uVar3 >> 3) +
            *(int *)((int)aiStack_164 + uVar4) + *(int *)(&stack0xfffffec0 + uVar4));
    *(int *)((int)local_13c + uVar4 + 0x18) = iVar5;
    iVar5 = (int)(iVar5 + ((local_13c[0x4a] >> 0xb | local_13c[0x4a] << 0x15) ^
                     (local_13c[0x4a] << 7 | local_13c[0x4a] >> 0x19) ^
                    (local_13c[0x4a] >> 6 | local_13c[0x4a] << 0x1a)) +
                    ((local_13c[0x4b] ^ local_13c[0x4c]) & local_13c[0x4a] ^ local_13c[0x4c]) +
                    *(int *)((int)&DAT_11bfe6f0 + uVar4) + local_8);
    local_13c[0x49] = (uint)(local_13c[0x49] + iVar5);
    local_8 = (uint)((local_13c[0x47] & local_13c[0x46] |
              (local_13c[0x47] | local_13c[0x46]) & local_13c[0x48]) +
              ((local_13c[0x46] >> 0xd | local_13c[0x46] << 0x13) ^
               (local_13c[0x46] << 10 | local_13c[0x46] >> 0x16) ^
              (local_13c[0x46] >> 2 | local_13c[0x46] << 0x1e)) + iVar5);
    uVar2 = (uint)(*(uint *)((int)local_13c + uVar4 + 0x14));
    uVar3 = (uint)(*(uint *)((int)aiStack_164 + uVar4 + 8));
    iVar5 = (int)(((uVar2 << 0xf | uVar2 >> 0x11) ^ (uVar2 << 0xd | uVar2 >> 0x13) ^ uVar2 >> 10) +
            ((uVar3 << 0xe | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 << 0x19) ^ uVar3 >> 3) +
            *(int *)((int)local_13c + uVar4) + *(int *)((int)aiStack_164 + uVar4 + 4));
    *(int *)((int)local_13c + uVar4 + 0x1c) = iVar5;
    iVar5 = (int)(iVar5 + ((local_13c[0x49] >> 0xb | local_13c[0x49] * 0x200000) ^
                     (local_13c[0x49] * 0x80 | local_13c[0x49] >> 0x19) ^
                    (local_13c[0x49] >> 6 | local_13c[0x49] * 0x4000000)) +
                    ((local_13c[0x4b] ^ local_13c[0x4a]) & local_13c[0x49] ^ local_13c[0x4b]) +
                    *(int *)((int)&DAT_11bfe6f4 + uVar4) + local_13c[0x4c]);
    local_13c[0x48] = (uint)(local_13c[0x48] + iVar5);
    local_13c[0x4c] = (uint)((local_13c[0x46] & local_8 | (local_13c[0x46] | local_8) & local_13c[0x47]) +
         ((local_8 >> 0xd | local_8 * 0x80000) ^ (local_8 * 0x400 | local_8 >> 0x16) ^
         (local_8 >> 2 | local_8 * 0x40000000)) + iVar5);
    uVar2 = (uint)(*(uint *)((int)aiStack_164 + uVar4 + 0xc));
    uVar3 = (uint)(*(uint *)((int)local_13c + uVar4 + 0x18));
    iVar5 = (int)(((uVar2 << 0xe | uVar2 >> 0x12) ^ (uVar2 >> 7 | uVar2 << 0x19) ^ uVar2 >> 3) +
            ((uVar3 << 0xf | uVar3 >> 0x11) ^ (uVar3 << 0xd | uVar3 >> 0x13) ^ uVar3 >> 10) +
            *(int *)((int)local_13c + uVar4 + 4) + *(int *)((int)aiStack_164 + uVar4 + 8));
    *(int *)((int)local_13c + uVar4 + 0x20) = iVar5;
    iVar5 = (int)(iVar5 + ((local_13c[0x48] >> 0xb | local_13c[0x48] * 0x200000) ^
                     (local_13c[0x48] * 0x80 | local_13c[0x48] >> 0x19) ^
                    (local_13c[0x48] >> 6 | local_13c[0x48] * 0x4000000)) +
                    ((local_13c[0x49] ^ local_13c[0x4a]) & local_13c[0x48] ^ local_13c[0x4a]) +
                    *(int *)((int)&DAT_11bfe6f8 + uVar4) + local_13c[0x4b]);
    local_13c[0x47] = (uint)(local_13c[0x47] + iVar5);
    local_13c[0x4b] = (uint)((local_8 & local_13c[0x4c] | (local_8 | local_13c[0x4c]) & local_13c[0x46]) +
         ((local_13c[0x4c] >> 0xd | local_13c[0x4c] * 0x80000) ^
          (local_13c[0x4c] * 0x400 | local_13c[0x4c] >> 0x16) ^
         (local_13c[0x4c] >> 2 | local_13c[0x4c] * 0x40000000)) + iVar5);
    uVar2 = (uint)(*(uint *)((int)&puStack_154 + uVar4));
    uVar3 = (uint)(*(uint *)((int)local_13c + uVar4 + 0x1c));
    iVar5 = (int)(((uVar2 << 0xe | uVar2 >> 0x12) ^ (uVar2 >> 7 | uVar2 << 0x19) ^ uVar2 >> 3) +
            ((uVar3 << 0xf | uVar3 >> 0x11) ^ (uVar3 << 0xd | uVar3 >> 0x13) ^ uVar3 >> 10) +
            *(int *)((int)local_13c + uVar4 + 8) + *(int *)((int)aiStack_164 + uVar4 + 0xc));
    *(int *)((int)local_13c + uVar4 + 0x24) = iVar5;
    iVar5 = (int)(iVar5 + ((local_13c[0x47] >> 0xb | local_13c[0x47] << 0x15) ^
                     (local_13c[0x47] << 7 | local_13c[0x47] >> 0x19) ^
                    (local_13c[0x47] >> 6 | local_13c[0x47] << 0x1a)) +
                    ((local_13c[0x49] ^ local_13c[0x48]) & local_13c[0x47] ^ local_13c[0x49]) +
                    *(int *)((int)&DAT_11bfe6fc + uVar4) + local_13c[0x4a]);
    local_13c[0x46] = (uint)(local_13c[0x46] + iVar5);
    local_13c[0x4a] = (uint)((local_13c[0x4c] & local_13c[0x4b] | (local_13c[0x4b] | local_13c[0x4c]) & local_8) +
         ((local_13c[0x4b] >> 0xd | local_13c[0x4b] * 0x80000) ^
          (local_13c[0x4b] * 0x400 | local_13c[0x4b] >> 0x16) ^
         (local_13c[0x4b] >> 2 | local_13c[0x4b] * 0x40000000)) + iVar5);
    uVar2 = (uint)(*(uint *)((int)local_13c + uVar4 + 0x20));
    uVar3 = (uint)(*(uint *)((int)&uStack_150 + uVar4));
    iVar5 = (int)(((uVar2 << 0xf | uVar2 >> 0x11) ^ (uVar2 << 0xd | uVar2 >> 0x13) ^ uVar2 >> 10) +
            ((uVar3 << 0xe | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 << 0x19) ^ uVar3 >> 3) +
            *(int *)((int)local_13c + uVar4 + 0xc) + *(int *)((int)&puStack_154 + uVar4));
    *(int *)((int)local_13c + uVar4 + 0x28) = iVar5;
    iVar5 = (int)(iVar5 + ((local_13c[0x46] >> 0xb | local_13c[0x46] << 0x15) ^
                     (local_13c[0x46] << 7 | local_13c[0x46] >> 0x19) ^
                    (local_13c[0x46] >> 6 | local_13c[0x46] << 0x1a)) +
                    ((local_13c[0x48] ^ local_13c[0x47]) & local_13c[0x46] ^ local_13c[0x48]) +
                    *(int *)((int)&DAT_11bfe700 + uVar4) + local_13c[0x49]);
    local_8 = (uint)(local_8 + iVar5);
    local_13c[0x49] = (uint)((local_13c[0x4b] & local_13c[0x4a] | (local_13c[0x4b] | local_13c[0x4a]) & local_13c[0x4c])
         + ((local_13c[0x4a] >> 0xd | local_13c[0x4a] * 0x80000) ^
            (local_13c[0x4a] * 0x400 | local_13c[0x4a] >> 0x16) ^
           (local_13c[0x4a] >> 2 | local_13c[0x4a] * 0x40000000)) + iVar5);
    uVar2 = (uint)(*(uint *)(&stack0xfffffeb4 + uVar4));
    uVar3 = (uint)(*(uint *)((int)local_13c + uVar4 + 0x24));
    iVar5 = (int)(((uVar2 << 0xe | uVar2 >> 0x12) ^ (uVar2 >> 7 | uVar2 << 0x19) ^ uVar2 >> 3) +
            ((uVar3 << 0xf | uVar3 >> 0x11) ^ (uVar3 << 0xd | uVar3 >> 0x13) ^ uVar3 >> 10) +
            *(int *)((int)local_13c + uVar4 + 0x10) + *(int *)((int)&uStack_150 + uVar4));
    *(int *)((int)local_13c + uVar4 + 0x2c) = iVar5;
    iVar5 = (int)(iVar5 + ((local_8 >> 0xb | local_8 * 0x200000) ^ (local_8 * 0x80 | local_8 >> 0x19) ^
                    (local_8 >> 6 | local_8 * 0x4000000)) +
                    ((local_13c[0x47] ^ local_13c[0x46]) & local_8 ^ local_13c[0x47]) +
                    *(int *)((int)&DAT_11bfe704 + uVar4) + local_13c[0x48]);
    local_13c[0x4c] = (uint)(local_13c[0x4c] + iVar5);
    local_13c[0x48] = (uint)((local_13c[0x4a] & local_13c[0x49] | (local_13c[0x49] | local_13c[0x4a]) & local_13c[0x4b])
         + ((local_13c[0x49] >> 0xd | local_13c[0x49] << 0x13) ^
            (local_13c[0x49] << 10 | local_13c[0x49] >> 0x16) ^
           (local_13c[0x49] >> 2 | local_13c[0x49] << 0x1e)) + iVar5);
    uVar2 = (uint)(*(uint *)((int)local_13c + uVar4 + 0x28));
    uVar3 = (uint)(*(uint *)(&stack0xfffffeb8 + uVar4));
    iVar5 = (int)(((uVar2 << 0xf | uVar2 >> 0x11) ^ (uVar2 << 0xd | uVar2 >> 0x13) ^ uVar2 >> 10) +
            ((uVar3 << 0xe | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 << 0x19) ^ uVar3 >> 3) +
            *(int *)((int)local_13c + uVar4 + 0x14) + *(int *)(&stack0xfffffeb4 + uVar4));
    *(int *)((int)local_13c + uVar4 + 0x30) = iVar5;
    iVar5 = (int)(iVar5 + ((local_13c[0x4c] >> 0xb | local_13c[0x4c] * 0x200000) ^
                     (local_13c[0x4c] * 0x80 | local_13c[0x4c] >> 0x19) ^
                    (local_13c[0x4c] >> 6 | local_13c[0x4c] * 0x4000000)) +
                    ((local_13c[0x46] ^ local_8) & local_13c[0x4c] ^ local_13c[0x46]) +
                    *(int *)((int)&DAT_11bfe708 + uVar4) + local_13c[0x47]);
    local_13c[0x4b] = (uint)(local_13c[0x4b] + iVar5);
    local_13c[0x47] = (uint)((local_13c[0x49] & local_13c[0x48] | (local_13c[0x49] | local_13c[0x48]) & local_13c[0x4a])
         + ((local_13c[0x48] >> 0xd | local_13c[0x48] << 0x13) ^
            (local_13c[0x48] << 10 | local_13c[0x48] >> 0x16) ^
           (local_13c[0x48] >> 2 | local_13c[0x48] << 0x1e)) + iVar5);
    uVar2 = (uint)(*(uint *)((int)local_13c + uVar4 + 0x2c));
    uVar3 = (uint)(*(uint *)(&stack0xfffffebc + uVar4));
    iVar5 = (int)((uVar3 >> 3 ^ (uVar3 << 0xe | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 << 0x19)) +
            ((uVar2 << 0xf | uVar2 >> 0x11) ^ (uVar2 << 0xd | uVar2 >> 0x13) ^ uVar2 >> 10) +
            *(int *)(&stack0xfffffeb8 + uVar4) + *(int *)((int)local_13c + uVar4 + 0x18));
    *(int *)((int)local_13c + uVar4 + 0x34) = iVar5;
    piVar1 = (int *)((int *)((int)&DAT_11bfe70c + uVar4));
    uVar4 = (uint)(uVar4 + 0x20);
    local_13c[4] = (uint)((local_8 ^ (local_8 ^ local_13c[0x4c]) & local_13c[0x4b]) +
                   ((local_13c[0x4b] >> 0xb | local_13c[0x4b] << 0x15) ^
                    (local_13c[0x4b] << 7 | local_13c[0x4b] >> 0x19) ^
                   (local_13c[0x4b] >> 6 | local_13c[0x4b] << 0x1a)) + *piVar1 + iVar5 +
                   local_13c[0x46]);
    local_13c[5] = (uint)(((local_13c[0x48] | local_13c[0x47]) & local_13c[0x49] |
                   local_13c[0x48] & local_13c[0x47]) +
                   ((local_13c[0x47] >> 0xd | local_13c[0x47] << 0x13) ^
                    (local_13c[0x47] << 10 | local_13c[0x47] >> 0x16) ^
                   (local_13c[0x47] >> 2 | local_13c[0x47] << 0x1e)));
    local_13c[0x4a] = (uint)(local_13c[0x4a] + local_13c[4]);
    local_13c[0x46] = (uint)(local_13c[5] + local_13c[4]);
  } while (uVar4 < 0x100);

  *(uint *)(param_1 + 0x48) = local_13c[2] + local_13c[5] + local_13c[4];
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + local_13c[0x48];
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_13c[0x49];
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + local_13c[0x4c];
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + local_8;
  puStack_154 = (uint *)(local_13c + 4);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + local_13c[0x47];
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_13c[0x4a];
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + local_13c[0x4b];
  aiStack_164[3] = (int)(0x11410ff0);
  thunk_FUN_11423ed0();
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 11411310; body size 65 bytes.
#line 1 "ENTRY_11411310"

int FUN_11411310(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(0);
  while( true ) {
    if (param_3 < 0x40) {
      return (int)(iVar2);
    }
    iVar1 = (int)(thunk_FUN_11410440(param_1,param_2));
    if (iVar1 != 0) break;
    param_3 = (uint)(param_3 - 0x40);
    param_2 = (int)(param_2 + 0x40);
    iVar2 = (int)(iVar2 + 0x40);
  }
  return (int)(0);
}


// Reference entry 11411380; body size 632 bytes.
#line 1 "ENTRY_11411380"

void FUN_11411380(void *param_1,uint param_2,uint *param_3,int param_4)

{
  int iVar1;
  size_t _Size;
  uint uVar2;
  uint uVar3;
  undefined1 *_Dst;
  uint *local_74;
  undefined1 local_70 [56];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_74);
  local_74 = (uint *)(param_3);
  if ((param_4 != 0) && (param_4 != 1)) {
    thunk_FUN_1148ac28();
    return;
  }
  memset(local_70,0,0x6c);
  if (param_4 == 0) {
    local_28 = (uint)(0x6a09e667);
    local_24 = (uint)(0xbb67ae85);
    local_20 = (uint)(0x3c6ef372);
    local_1c = (uint)(0xa54ff53a);
    local_18 = (uint)(0x510e527f);
    local_14 = (uint)(0x9b05688c);
    local_10 = (uint)(0x1f83d9ab);
    local_c = (uint)(0x5be0cd19);
  }
  else {
    if (param_4 != 1) goto LAB_114115d2;
    local_28 = (uint)(0xc1059ed8);
    local_24 = (uint)(0x367cd507);
    local_20 = (uint)(0x3070dd17);
    local_1c = (uint)(0xf70e5939);
    local_18 = (uint)(0xffc00b31);
    local_14 = (uint)(0x68581511);
    local_10 = (uint)(0x64f98fa7);
    local_c = (uint)(0xbefa4fa4);
  }
  local_8 = (int)(param_4);
  uVar3 = (uint)(param_2);
  if (param_2 != 0) {
    for (; local_30 = (uint)(uVar3, 0x3f < param_2); param_2 = param_2 - uVar2) {
      uVar2 = (uint)(0);
      uVar3 = (uint)(param_2);
      do {
        iVar1 = (int)(thunk_FUN_11410440(local_70,uVar2 + (int)param_1));
        if (iVar1 != 0) goto LAB_114115d2;
        uVar3 = (uint)(uVar3 - 0x40);
        uVar2 = (uint)(uVar2 + 0x40);
      } while (0x3f < uVar3);
      if (uVar2 < 0x40) goto LAB_114115d2;
      param_1 = (void *)((void *)((int)param_1 + uVar2));
      uVar3 = (uint)(local_30);
      param_3 = (uint *)(local_74);
    }
    if (param_2 != 0) {
      memcpy(local_70,param_1,param_2);
    }
  }
  uVar3 = (uint)(local_30 & 0x3f);
  local_70[uVar3] = (undefined1)(0x80);
  uVar2 = (uint)(uVar3 + 1);
  _Dst = (undefined1 *)(local_70 + uVar3 + 1);
  if (uVar2 < 0x39) {
    _Size = (size_t)(0x38 - uVar2);
LAB_11411532:
    memset(_Dst,0,_Size);
    uVar3 = (uint)(local_2c * 8);
    local_38 = (uint)((local_2c & 0x1fffffff) >> 0x15 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
               (uVar3 | local_30 >> 0x1d) << 0x18);
    local_34 = (uint)((local_30 & 0x1fffffff) >> 0x15 | (local_30 << 3 & 0xff0000) >> 8 |
               (local_30 << 3 & 0xff00) << 8 | local_30 << 0x1b);
    iVar1 = (int)(thunk_FUN_11410440(local_70,local_70));
    if (iVar1 == 0) {
      *param_3 = (uint)(local_28 >> 0x18 | (local_28 & 0xff0000) >> 8 | (local_28 & 0xff00) << 8 |
                 local_28 << 0x18);
      param_3[1] = (uint)(local_24 >> 0x18 | (local_24 & 0xff0000) >> 8 | (local_24 & 0xff00) << 8 |
                   local_24 << 0x18);
      param_3[2] = (uint)(local_20 >> 0x18 | (local_20 & 0xff0000) >> 8 | (local_20 & 0xff00) << 8 |
                   local_20 << 0x18);
      param_3[3] = (uint)(local_1c >> 0x18 | (local_1c & 0xff0000) >> 8 | (local_1c & 0xff00) << 8 |
                   local_1c << 0x18);
      param_3[4] = (uint)(local_18 >> 0x18 | (local_18 & 0xff0000) >> 8 | (local_18 & 0xff00) << 8 |
                   local_18 << 0x18);
      param_3[5] = (uint)(local_14 >> 0x18 | (local_14 & 0xff0000) >> 8 | (local_14 & 0xff00) << 8 |
                   local_14 << 0x18);
      param_3[6] = (uint)(local_10 >> 0x18 | (local_10 & 0xff0000) >> 8 | (local_10 & 0xff00) << 8 |
                   local_10 << 0x18);
      if (local_8 == 0) {
        param_3[7] = (uint)(local_c >> 0x18 | (local_c & 0xff0000) >> 8 | (local_c & 0xff00) << 8 |
                     local_c << 0x18);
      }
    }
  }
  else {
    memset(_Dst,0,0x40 - uVar2);
    iVar1 = (int)(thunk_FUN_11410440(local_70,local_70));
    if (iVar1 == 0) {
      _Size = (size_t)(0x38);
      _Dst = (undefined1 *)(local_70);
      goto LAB_11411532;
    }
  }
  thunk_FUN_11423ed0(local_70,0x6c);
LAB_114115d2:
  thunk_FUN_11423ed0(local_70,0x6c);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 114116c0; body size 221 bytes.
#line 1 "ENTRY_114116c0"

int FUN_114116c0(void *param_1,uint *param_2)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  
  uVar2 = (uint)(*(uint *)((int)param_1 + 0x40) & 0x3f);
  *(undefined1 *)(uVar2 + (int)param_1) = 0x80;
  uVar2 = (uint)(uVar2 + 1);
  if (uVar2 < 0x39) {
    _Size = (size_t)(0x38 - uVar2);
    _Dst = (void *)((void *)(uVar2 + (int)param_1));
  }
  else {
    memset((void *)(uVar2 + (int)param_1),0,0x40 - uVar2);
    iVar1 = (int)(thunk_FUN_11410440(param_1,param_1));
    if (iVar1 != 0) goto LAB_1141178d;
    _Size = (size_t)(0x38);
    _Dst = (void *)(param_1);
  }
  memset(_Dst,0,_Size);
  uVar2 = (uint)(*(uint *)((int)param_1 + 0x40));
  uVar3 = (uint)(*(uint *)((int)param_1 + 0x44) << 3);
  *(uint *)((int)param_1 + 0x38) =
       (*(uint *)((int)param_1 + 0x44) & 0x1fffffff) >> 0x15 | (uVar3 & 0xff0000) >> 8 |
       (uVar3 & 0xff00) << 8 | (uVar3 | uVar2 >> 0x1d) << 0x18;
  *(uint *)((int)param_1 + 0x3c) =
       (uVar2 & 0x1fffffff) >> 0x15 | (uVar2 << 3 & 0xff0000) >> 8 | (uVar2 << 3 & 0xff00) << 8 |
       uVar2 << 0x1b;
  iVar1 = (int)(thunk_FUN_11410440(param_1,param_1));
  if (iVar1 == 0) {
    uVar2 = (uint)(*(uint *)((int)param_1 + 0x48));
    *param_2 = (uint)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
    uVar2 = (uint)(*(uint *)((int)param_1 + 0x4c));
    param_2[1] = (uint)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
    uVar2 = (uint)(*(uint *)((int)param_1 + 0x50));
    param_2[2] = (uint)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
    uVar2 = (uint)(*(uint *)((int)param_1 + 0x54));
    param_2[3] = (uint)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
    uVar2 = (uint)(*(uint *)((int)param_1 + 0x58));
    param_2[4] = (uint)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
    uVar2 = (uint)(*(uint *)((int)param_1 + 0x5c));
    param_2[5] = (uint)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
    uVar2 = (uint)(*(uint *)((int)param_1 + 0x60));
    param_2[6] = (uint)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
    if (*(int *)((int)param_1 + 0x68) == 0) {
      uVar2 = (uint)(*(uint *)((int)param_1 + 100));
      param_2[7] = (uint)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
    }
    iVar1 = (int)(0);
  }
LAB_1141178d:
  thunk_FUN_11423ed0(param_1,0x6c);
  return (int)(iVar1);
}


// Reference entry 11411820; body size 229 bytes.
#line 1 "ENTRY_11411820"

undefined4 FUN_11411820(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  if ((param_2 != 0) && (param_2 != 1)) {
    return (undefined4)(0xffffff8c);
  }
  bVar9 = (bool)(param_2 != 0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar6 = (undefined4)(0x3c6ef372);
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar5 = (undefined4)(0xa54ff53a);
  uVar1 = (undefined4)(0xbb67ae85);
  uVar3 = (undefined4)(0x510e527f);
  if (bVar9) {
    uVar1 = (undefined4)(0x367cd507);
  }
  uVar4 = (undefined4)(0x9b05688c);
  if (bVar9) {
    uVar6 = (undefined4)(0x3070dd17);
    uVar5 = (undefined4)(0xf70e5939);
  }
  uVar8 = (undefined4)(0x5be0cd19);
  uVar7 = (undefined4)(0x1f83d9ab);
  if (bVar9) {
    uVar8 = (undefined4)(0xbefa4fa4);
    uVar7 = (undefined4)(0x64f98fa7);
    uVar4 = (undefined4)(0x68581511);
  }
  if (param_2 != 0) {
    uVar3 = (undefined4)(0xffc00b31);
  }
  uVar2 = (undefined4)(0x6a09e667);
  if (param_2 != 0) {
    uVar2 = (undefined4)(0xc1059ed8);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar6;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = uVar7;
  *(undefined4 *)(param_1 + 100) = uVar8;
  *(int *)(param_1 + 0x68) = param_2;
  return (undefined4)(0);
}


// Reference entry 11411940; body size 200 bytes.
#line 1 "ENTRY_11411940"

int FUN_11411940(int param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    uVar3 = (uint)(*(uint *)(param_1 + 0x40) & 0x3f);
    uVar1 = (uint)(*(uint *)(param_1 + 0x40) + param_3);
    uVar4 = (uint)(0x40 - uVar3);
    *(uint *)(param_1 + 0x40) = uVar1;
    if (uVar1 < param_3) {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
    uVar1 = (uint)(param_3);
    if ((uVar3 != 0) && (uVar4 <= param_3)) {
      memcpy((void *)(uVar3 + param_1),param_2,uVar4);
      iVar2 = (int)(thunk_FUN_11410440(param_1,param_1));
      if (iVar2 != 0) {
        return (int)(iVar2);
      }
      param_2 = (void *)((void *)((int)param_2 + uVar4));
      uVar1 = (uint)(param_3 - uVar4);
      uVar3 = (uint)(0);
    }
    for (; param_3 = (uint)(uVar3, 0x3f < uVar1); uVar1 = uVar1 - uVar4) {
      uVar4 = (uint)(0);
      uVar3 = (uint)(uVar1);
      do {
        iVar2 = (int)(thunk_FUN_11410440(param_1,uVar4 + (int)param_2));
        if (iVar2 != 0) {
          return (int)(-1);
        }
        uVar3 = (uint)(uVar3 - 0x40);
        uVar4 = (uint)(uVar4 + 0x40);
      } while (0x3f < uVar3);
      if (uVar4 < 0x40) {
        return (int)(-1);
      }
      param_2 = (void *)((void *)((int)param_2 + uVar4));
      uVar3 = (uint)(param_3);
    }
    if (uVar1 != 0) {
      memcpy((void *)(param_1 + param_3),param_2,uVar1);
    }
  }
  return (int)(0);
}


// Reference entry 11411d40; body size 327 bytes.
#line 1 "ENTRY_11411d40"

int FUN_11411d40(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                int param_6,uint param_7,undefined4 param_8,uint param_9,uint *param_10,
                uint param_11)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_7 < param_11) || (uVar2 = param_7 - param_11, param_9 < uVar2)) {
    return (int)(-0x6100);
  }
  iVar3 = (int)((param_6 - param_11) + param_7);
  uVar1 = (uint)(*(uint *)(*param_1 + 4));
  if ((uVar1 & 0xf000) == 0x6000) {
    *param_10 = (uint)(uVar2);
    iVar3 = (int)(thunk_FUN_114446b0(param_1[0xf],uVar2,param_2,param_3,param_4,param_5,iVar3,param_11,
                               param_6,param_8));
    if (iVar3 == -0x12) {
      iVar3 = (int)(-0x6300);
    }
    return (int)(iVar3);
  }
  if ((uVar1 & 0xf000) == 0x8000) {
    *param_10 = (uint)(uVar2);
    iVar3 = (int)(thunk_FUN_11445ca0(param_1[0xf],uVar2,param_2,param_3,param_4,param_5,param_6,param_8,
                               iVar3,param_11));
    if (iVar3 == -0xf) {
      iVar3 = (int)(-0x6300);
    }
    return (int)(iVar3);
  }
  if ((char)(uVar1 >> 0x10) != 'M') {
    return (int)(-0x6080);
  }
  if (*param_1 == 0) {
    uVar1 = (uint)(0);
  }
  else {
    uVar1 = (uint)(uVar1 >> 3 & 0x1c);
  }
  if ((param_3 == uVar1) && (param_11 == 0x10)) {
    *param_10 = (uint)(uVar2);
    iVar3 = (int)(thunk_FUN_114437c0(param_1[0xf],uVar2,param_2,param_4,param_5,iVar3,param_6,param_8));
    if (iVar3 == -0x56) {
      iVar3 = (int)(-0x6300);
    }
    return (int)(iVar3);
  }
  return (int)(-0x6100);
}


// Reference entry 11411ee0; body size 274 bytes.
#line 1 "ENTRY_11411ee0"

undefined4
FUN_11411ee0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,uint param_9,int *param_10,int param_11)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_9 < (uint)(param_7 + param_11)) {
    return (undefined4)(0xffff9f00);
  }
  uVar2 = (uint)(*(uint *)(*param_1 + 4));
  if ((uVar2 & 0xf000) == 0x6000) {
    *param_10 = (int)(param_7);
    uVar1 = (undefined4)(thunk_FUN_11444780(param_1[0xf],1,param_7,param_2,param_3,param_4,param_5,param_6,
                               param_8,param_11,param_7 + param_8));
    *param_10 = (int)(*param_10 + param_11);
    return (undefined4)(uVar1);
  }
  if ((uVar2 & 0xf000) == 0x8000) {
    *param_10 = (int)(param_7);
    uVar1 = (undefined4)(thunk_FUN_11445e20(param_1[0xf],param_7,param_2,param_3,param_4,param_5,param_6,param_8,
                               param_7 + param_8,param_11));
    *param_10 = (int)(*param_10 + param_11);
    return (undefined4)(uVar1);
  }
  if ((char)(uVar2 >> 0x10) == 'M') {
    if (*param_1 == 0) {
      uVar2 = (uint)(0);
    }
    else {
      uVar2 = (uint)(uVar2 >> 3 & 0x1c);
    }
    if ((param_3 == uVar2) && (param_11 == 0x10)) {
      *param_10 = (int)(param_7);
      uVar1 = (undefined4)(thunk_FUN_11443880(param_1[0xf],param_7,param_2,param_4,param_5,param_6,param_8,
                                 param_7 + param_8));
      *param_10 = (int)(*param_10 + 0x10);
      return (undefined4)(uVar1);
    }
    *param_10 = (int)(*param_10 + param_11);
    return (undefined4)(0xffff9f00);
  }
  *param_10 = (int)(*param_10 + param_11);
  return (undefined4)(0xffff9f80);
}


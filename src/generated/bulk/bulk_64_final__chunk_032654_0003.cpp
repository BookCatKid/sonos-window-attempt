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
extern "C" unsigned long __readfsdword(unsigned long);
#pragma intrinsic(__readfsdword)
extern int FUN_112c2fe0(...);
extern int FUN_112c33c0(...);
extern int FUN_112ccb80(...);
extern int FUN_112cdda0(...);
extern int FUN_112f1770(...);
extern __declspec(dllimport) int _Mtx_destroy_in_situ(...);
extern __declspec(dllimport) int _Mtx_init_in_situ(...);
extern __declspec(dllimport) int _Mtx_lock(...);
extern __declspec(dllimport) int _Mtx_unlock(...);
extern __declspec(dllimport) int _Throw_C_error(...);
extern __declspec(dllimport) int _Xbad_function_call(...);
extern __declspec(dllimport) int __acrt_iob_func(...);
extern __declspec(dllimport) int _close(...);
extern int _eh_vector_destructor_iterator_(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _stricmp(...);
extern __declspec(dllimport) int _wfopen(...);
extern __declspec(dllimport) int _wremove(...);
extern __declspec(dllimport) int _write(...);
extern __declspec(dllimport) int _wrmdir(...);
extern __declspec(dllimport) int atol(...);
extern int certs(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int ferror(...);
extern __declspec(dllimport) int fflush(...);
extern __declspec(dllimport) int fgets(...);
extern __declspec(dllimport) int fputc(...);
extern __declspec(dllimport) int fputs(...);
extern __declspec(dllimport) int freeaddrinfo(...);
extern __declspec(dllimport) int getaddrinfo(...);
extern __declspec(dllimport) int getenv(...);
extern __declspec(dllimport) int isdigit(...);
extern __declspec(dllimport) int isprint(...);
extern __declspec(dllimport) int isspace(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int rand_s(...);
extern int s(...);
extern __declspec(dllimport) int strerror_s(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strncpy(...);
extern __declspec(dllimport) int strnlen(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_1011f780(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101b9160(...);
extern int thunk_FUN_10c7dc10(...);
extern int thunk_FUN_10c7fcd0(...);
extern int thunk_FUN_11069420(...);
extern int thunk_FUN_111ac070(...);
extern int thunk_FUN_111ac1c0(...);
extern int thunk_FUN_111c0480(...);
extern int thunk_FUN_11272ad0(...);
extern int thunk_FUN_112b0da0(...);
extern int thunk_FUN_112b70c0(...);
extern int thunk_FUN_112b7210(...);
extern int thunk_FUN_112b9dd0(...);
extern int thunk_FUN_112b9e20(...);
extern int thunk_FUN_112ba6e0(...);
extern int thunk_FUN_112ba700(...);
extern int thunk_FUN_112ba770(...);
extern int thunk_FUN_112bacb0(...);
extern int thunk_FUN_112bb1a0(...);
extern int thunk_FUN_112bb2f0(...);
extern int thunk_FUN_112bb390(...);
extern int thunk_FUN_112bc4c0(...);
extern int thunk_FUN_112bd1c0(...);
extern int thunk_FUN_112bd940(...);
extern int thunk_FUN_112bdc40(...);
extern int thunk_FUN_112be080(...);
extern int thunk_FUN_112c0390(...);
extern int thunk_FUN_112c0400(...);
extern int thunk_FUN_112c0420(...);
extern int thunk_FUN_112c0480(...);
extern int thunk_FUN_112c04d0(...);
extern int thunk_FUN_112c4a90(...);
extern int thunk_FUN_112c4c80(...);
extern int thunk_FUN_112c7ec0(...);
extern int thunk_FUN_112c7f50(...);
extern int thunk_FUN_112c7fa0(...);
extern int thunk_FUN_112c8300(...);
extern int thunk_FUN_112c8540(...);
extern int thunk_FUN_112c8730(...);
extern int thunk_FUN_112c8760(...);
extern int thunk_FUN_112c8970(...);
extern int thunk_FUN_112ca400(...);
extern int thunk_FUN_112ca420(...);
extern int thunk_FUN_112ca710(...);
extern int thunk_FUN_112caad0(...);
extern int thunk_FUN_112cab10(...);
extern int thunk_FUN_112cab90(...);
extern int thunk_FUN_112cad70(...);
extern int thunk_FUN_112caee0(...);
extern int thunk_FUN_112caf40(...);
extern int thunk_FUN_112d76b0(...);
extern int thunk_FUN_112dea80(...);
extern int thunk_FUN_112ded60(...);
extern int thunk_FUN_112dee30(...);
extern int thunk_FUN_112e9d20(...);
extern int thunk_FUN_112ecd20(...);
extern int thunk_FUN_112ed030(...);
extern int thunk_FUN_112eda10(...);
extern int thunk_FUN_112eed70(...);
extern int thunk_FUN_112eee90(...);
extern int thunk_FUN_112eef40(...);
extern int thunk_FUN_112ef010(...);
extern int thunk_FUN_112ef330(...);
extern int thunk_FUN_112ef380(...);
extern int thunk_FUN_112efba0(...);
extern int thunk_FUN_112efc20(...);
extern int thunk_FUN_112f0000(...);
extern int thunk_FUN_112f01f0(...);
extern int thunk_FUN_112f0980(...);
extern int thunk_FUN_112f1370(...);
extern int thunk_FUN_112f1460(...);
extern int thunk_FUN_112f1600(...);
extern int thunk_FUN_112f1710(...);
extern int thunk_FUN_112f1740(...);
extern int thunk_FUN_112f1e40(...);
extern int thunk_FUN_112f1fb0(...);
extern int thunk_FUN_112f2220(...);
extern int thunk_FUN_112f22d0(...);
extern int thunk_FUN_112f2da0(...);
extern int thunk_FUN_112f2fe0(...);
extern int thunk_FUN_112f3500(...);
extern int thunk_FUN_112f36a0(...);
extern int thunk_FUN_112f38b0(...);
extern int thunk_FUN_112f3960(...);
extern int thunk_FUN_112f3b40(...);
extern int thunk_FUN_112f3ce0(...);
extern int thunk_FUN_112f4220(...);
extern int thunk_FUN_112f4f20(...);
extern int thunk_FUN_112f5000(...);
extern int thunk_FUN_112f5390(...);
extern int thunk_FUN_112f53c0(...);
extern int thunk_FUN_112f5460(...);
extern int thunk_FUN_112f56c0(...);
extern int thunk_FUN_112f58d0(...);
extern int thunk_FUN_113cfe20(...);
extern int thunk_FUN_113cfe40(...);
extern int thunk_FUN_113cfe50(...);
extern int thunk_FUN_113cff40(...);
extern int thunk_FUN_113d0a10(...);
extern int thunk_FUN_113d1a60(...);
extern int thunk_FUN_11401680(...);
extern int thunk_FUN_11401f20(...);
extern int thunk_FUN_1145c2a0(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145f1f0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b050(...);
extern int thunk_FUN_1148b586(...);
extern int thunk_FUN_1148bc65(...);
extern __declspec(dllimport) int tolower(...);
extern __declspec(dllimport) int wsopen_dispatch(...);
extern int DAT_112e7c50;
extern int DAT_1186d2ee;
extern int DAT_1187b440;
extern int DAT_1187d7f4;
extern int DAT_1187db20;
extern int DAT_1187db24;
extern int DAT_11880fc4;
extern int DAT_11880fd0;
extern int DAT_11880fd8;
extern int DAT_11880fe0;
extern int DAT_11881128;
extern int DAT_11882ff0;
extern int DAT_11884550;
extern int DAT_11884554;
extern int DAT_11884820;
extern int DAT_11884824;
extern int DAT_11884828;
extern int DAT_1188482c;
extern int DAT_118850bc;
extern int DAT_118872b8;
extern int DAT_118872bc;
extern int DAT_118872c0;
extern int DAT_1188bc94;
extern int DAT_1188cc74;
extern int DAT_1188eaec;
extern int DAT_118961fc;
extern int DAT_1189dab8;
extern int DAT_1189dabc;
extern int DAT_118a1488;
extern int DAT_118abcd4;
extern int DAT_118b3060;
extern int DAT_118b3e88;
extern int DAT_118b7bc8;
extern int DAT_118c8274;
extern int DAT_118d04a8;
extern int DAT_118fe24c;
extern int DAT_119159c4;
extern int DAT_119190cc;
extern int DAT_1191aeac;
extern int DAT_119352e0;
extern int DAT_119361d4;
extern int DAT_119361d8;
extern int DAT_119361dc;
extern int DAT_119361e0;
extern int DAT_119361e4;
extern int DAT_119361e8;
extern int DAT_119361ec;
extern int DAT_119361f0;
extern int DAT_119362a8;
extern int DAT_119362ac;
extern int DAT_1194bae4;
extern int DAT_1194c46c;
extern int DAT_1194c4b4;
extern int DAT_1194c4b8;
extern int DAT_1194c4bc;
extern int DAT_1199345c;
extern int DAT_1199360c;
extern int DAT_11993848;
extern int DAT_119938a8;
extern int DAT_11993934;
extern int DAT_119c0d60;
extern int DAT_119c0d64;
extern int DAT_119c0d68;
extern int DAT_119c0d6c;
extern int DAT_119d8c58;
extern int DAT_119d8c60;
extern int DAT_119dc618;
extern int DAT_119dc620;
extern int DAT_119df08c;
extern int DAT_119df29c;
extern int DAT_119e0b2c;
extern int DAT_119ea870;
extern int DAT_119ea874;
extern int DAT_119ea8a8;
extern int DAT_119ea8ac;
extern int DAT_119ea8b0;
extern int DAT_119ea930;
extern int DAT_119ea934;
extern int DAT_119ea938;
extern int DAT_119ea93c;
extern int DAT_119ea940;
extern int DAT_119ea944;
extern int DAT_119ea948;
extern int DAT_119ea94c;
extern int DAT_119ea950;
extern int DAT_119ea954;
extern int DAT_119ea958;
extern int DAT_119ea95c;
extern int DAT_119ea960;
extern int DAT_119ea964;
extern int DAT_119ea968;
extern int DAT_119ea96c;
extern int DAT_119ea970;
extern int DAT_119ea978;
extern int DAT_119ea980;
extern int DAT_119ea988;
extern int DAT_119ea990;
extern int DAT_119ea998;
extern int DAT_119ea9a0;
extern int DAT_119ea9a8;
extern int DAT_119ea9b0;
extern int DAT_119ea9b8;
extern int DAT_119ea9c0;
extern int DAT_119ea9c8;
extern int DAT_119ea9d0;
extern int DAT_119ea9d8;
extern int DAT_119ea9e0;
extern int DAT_119ea9e8;
extern int DAT_119ea9f0;
extern int DAT_119ea9f4;
extern int DAT_119ea9f8;
extern int DAT_119ea9fc;
extern int DAT_119eaa00;
extern int DAT_119eaa04;
extern int DAT_119eaa08;
extern int DAT_119eaa0c;
extern int DAT_119eaa10;
extern int DAT_119eaa14;
extern int DAT_119eaa18;
extern int DAT_119eaa1c;
extern int DAT_119eaa20;
extern int DAT_119eaa24;
extern int DAT_119eaa28;
extern int DAT_119eaa2c;
extern int DAT_119eaa30;
extern int DAT_119eaa34;
extern int DAT_119eaa38;
extern int DAT_119eaa3c;
extern int DAT_119eaa40;
extern int DAT_119eaa44;
extern int DAT_119eaa48;
extern int DAT_119eaa4c;
extern int DAT_119eaa50;
extern int DAT_119eaa54;
extern int DAT_119eaa58;
extern int DAT_119eaa5c;
extern int DAT_119eaa60;
extern int DAT_119eaa64;
extern int DAT_119eaa68;
extern int DAT_119eaa70;
extern int DAT_119eaa78;
extern int DAT_119eaa80;
extern int DAT_119eaa88;
extern int DAT_119eaa90;
extern int DAT_119eaa98;
extern int DAT_119eaaa0;
extern int DAT_119eaaa8;
extern int DAT_119eaab0;
extern int DAT_119eaab8;
extern int DAT_119eaac0;
extern int DAT_119eaac8;
extern int DAT_119eaad0;
extern int DAT_119eaad8;
extern int DAT_119eaae0;
extern int DAT_119eaae8;
extern int DAT_119eaaf0;
extern int DAT_119eaaf8;
extern int DAT_119eab00;
extern int DAT_119eab08;
extern int DAT_119eab10;
extern int DAT_119eab18;
extern int DAT_119eab20;
extern int DAT_119eab28;
extern int DAT_119eab30;
extern int DAT_119eab38;
extern int DAT_119eab40;
extern int DAT_119eab48;
extern int DAT_119eab50;
extern int DAT_119eab58;
extern int DAT_119eab60;
extern int DAT_119eab68;
extern int DAT_119eab70;
extern int DAT_119eab78;
extern int DAT_119eab80;
extern int DAT_119eab88;
extern int DAT_119eab90;
extern int DAT_119eab98;
extern int DAT_119eaba0;
extern int DAT_119eaba8;
extern int DAT_119eabb0;
extern int DAT_119eabb8;
extern int DAT_119eabc0;
extern int DAT_119eabc8;
extern int DAT_119eabd0;
extern int DAT_119eabd8;
extern int DAT_119eabe0;
extern int DAT_119eabe8;
extern int DAT_119eabf0;
extern int DAT_119eabf8;
extern int DAT_119eac00;
extern int DAT_119eac08;
extern int DAT_119eac10;
extern int DAT_119eac18;
extern int DAT_119eac20;
extern int DAT_119eac28;
extern int DAT_119eac30;
extern int DAT_119eac38;
extern int DAT_119eac40;
extern int DAT_119eac48;
extern int DAT_119eac50;
extern int DAT_119eac58;
extern int DAT_119eac60;
extern int DAT_119eac68;
extern int DAT_119eac70;
extern int DAT_119eac78;
extern int DAT_119eac80;
extern int DAT_119eac88;
extern int DAT_119eac90;
extern int DAT_119eac98;
extern int DAT_119eaca0;
extern int DAT_119eaca8;
extern int DAT_119eacb0;
extern int DAT_119eacb8;
extern int DAT_119eacc0;
extern int DAT_119eacc8;
extern int DAT_119eacd0;
extern int DAT_119eacd8;
extern int DAT_119eace0;
extern int DAT_119eace8;
extern int DAT_119eacf0;
extern int DAT_119eacf8;
extern int DAT_119ead00;
extern int DAT_119ead08;
extern int DAT_119ead10;
extern int DAT_119ead18;
extern int DAT_119ead20;
extern int DAT_119ead28;
extern int DAT_119ead30;
extern int DAT_119ead38;
extern int DAT_119ead40;
extern int DAT_119ead48;
extern int DAT_119ead50;
extern int DAT_119ead58;
extern int DAT_119ead60;
extern int DAT_119ead68;
extern int DAT_119ead70;
extern int DAT_119ead78;
extern int DAT_119ead80;
extern int DAT_119ead88;
extern int DAT_119ead90;
extern int DAT_119ead98;
extern int DAT_119eada0;
extern int DAT_119eada8;
extern int DAT_119eadb0;
extern int DAT_119eadb8;
extern int DAT_119eadc0;
extern int DAT_119eadc8;
extern int DAT_119eadd0;
extern int DAT_119eadd8;
extern int DAT_119eade0;
extern int DAT_119eade8;
extern int DAT_119eadf0;
extern int DAT_119eadf8;
extern int DAT_119eae00;
extern int DAT_119eae08;
extern int DAT_119eae10;
extern int DAT_119eae18;
extern int DAT_119eae20;
extern int DAT_119eae28;
extern int DAT_119eae30;
extern int DAT_119eae38;
extern int DAT_119eae40;
extern int DAT_119eae48;
extern int DAT_119eae50;
extern int DAT_119eae58;
extern int DAT_119eae60;
extern int DAT_119eae68;
extern int DAT_119eae70;
extern int DAT_119ecfcc;
extern int DAT_119ed0d8;
extern int DAT_119f741c;
extern int DAT_12121e7c;
extern int DAT_12126b84;
extern int DAT_122f6c0c;
extern int DAT_122f6c10;
extern int DAT_122f6c18;
extern int DAT_122f6c1c;
extern int DAT_122f6c20;
extern int DAT_122f6c74;
extern int DAT_122f6c9c;
extern int DAT_122f6ca0;
extern int _DAT_119e9948;
extern int _DAT_119e9958;
extern int _DAT_119e9968;
extern int _DAT_119e9b00;
extern int _UNK_119e994c;
extern int _UNK_119e9950;
extern int _UNK_119e9954;
extern int _UNK_119e995c;
extern int _UNK_119e9960;
extern int _UNK_119e9964;
extern int _UNK_119e996c;
extern int _UNK_119e9970;
extern int _UNK_119e9974;
extern int _UNK_119e9b04;
extern int _UNK_119e9b08;
extern int _UNK_119e9b0c;
extern int ghidra_vftable_sonos_RootCACertBundle;
extern int ghidra_vftable_sonos_RootCACertBundle_Metadata;
extern int ghidra_vftable_sonos_certval_DynamicMemoryRootCACertBundle;
extern int ghidra_vftable_sonos_certval_ImmutableMemoryRootCACertBundle;
extern int ghidra_vftable_sonos_certval_SettingsFile;
extern int ghidra_vftable_sonos_certval_SettingsFileCBWrapper;
extern int ghidra_vftable_sonos_certval_SettingsFileUpdater;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_XMM0_Da;
extern int in_XMM0_Db;
extern int in_XMM0_Qa;
extern int in_stack_00000028;
extern int in_stack_00000030;
extern int in_stack_00000034;
extern int in_stack_0000005c;
extern int in_stack_00000060;
extern int in_stack_00000088;
extern int uStack_10;
extern int uStack_14;
extern int uStack_18;
extern int uStack_1c;
extern int uStack_20;
extern int uStack_24;
extern int uStack_28;
extern int uStack_2c;
extern int uStack_30;
extern int uStack_34;
extern int uStack_38;
extern int uStack_3c;
extern int uStack_4;
extern int uStack_40;
extern int uStack_4c;
extern int uStack_5c;
extern int uStack_78;
extern int uStack_8;
extern int uStack_a;
extern int uStack_a0;
extern int uStack_a8;
extern int uStack_c;
extern int unaff_EBP;
extern int unaff_EBX;
extern int unaff_EDI;
extern int unaff_ESI;
extern undefined1 LAB_1000107d[];
extern undefined1 LAB_10077a70[];
extern undefined1 LAB_112ba042[];
extern undefined1 LAB_112ba057[];
extern undefined1 LAB_112ba35a[];
extern undefined1 LAB_112ba3b6[];
extern undefined1 LAB_112ba3ca[];
extern undefined1 LAB_112ba3d5[];
extern undefined1 LAB_112ba3f8[];
extern undefined1 LAB_112ba400[];
extern undefined1 LAB_112bb030[];
extern undefined1 LAB_112bb920[];
extern undefined1 LAB_112bc30b[];
extern undefined1 LAB_112bc341[];
extern undefined1 LAB_112bf419[];
extern undefined1 LAB_112bf560[];
extern undefined1 LAB_112bf5b5[];
extern undefined1 LAB_112bf5de[];
extern undefined1 LAB_112c0042[];
extern undefined1 LAB_112c0057[];
extern undefined1 LAB_112c01c8[];
extern undefined1 LAB_112c01e1[];
extern undefined1 LAB_112c47f7[];
extern undefined1 LAB_112c4802[];
extern undefined1 LAB_112c61e6[];
extern undefined1 LAB_112c6667[];
extern undefined1 LAB_112c6853[];
extern undefined1 LAB_112c74b3[];
extern undefined1 LAB_112c7de5[];
extern undefined1 LAB_112c8009[];
extern undefined1 LAB_112c8a87[];
extern undefined1 LAB_112c9bab[];
extern undefined1 LAB_112c9bc9[];
extern undefined1 LAB_112cb782[];
extern undefined1 LAB_112cb792[];
extern undefined1 LAB_112cb819[];
extern undefined1 LAB_112cb8d9[];
extern undefined1 LAB_112d0d85[];
extern undefined1 LAB_112d1005[];
extern undefined1 LAB_112d3620[];
extern undefined1 LAB_112d43fa[];
extern undefined1 LAB_112d99eb[];
extern undefined1 LAB_112da326[];
extern undefined1 LAB_112dff4e[];
extern undefined1 LAB_112e2b7e[];
extern undefined1 LAB_112e7000[];
extern undefined1 LAB_112e7060[];
extern undefined1 LAB_112e7580[];
extern undefined1 LAB_112e76c0[];
extern undefined1 LAB_112e7710[];
extern undefined1 LAB_112e7760[];
extern undefined1 LAB_112e77d0[];
extern undefined1 LAB_112e7a90[];
extern undefined1 LAB_112e7af0[];
extern undefined1 LAB_112e81c0[];
extern undefined1 LAB_112e83f0[];
extern undefined1 LAB_112e8450[];
extern undefined1 LAB_112e86a0[];
extern undefined1 LAB_112e8700[];
extern undefined1 LAB_112e8760[];
extern undefined1 LAB_112e8a70[];
extern undefined1 LAB_112e8b90[];
extern undefined1 LAB_112e8bf0[];
extern undefined1 LAB_112eaf2b[];
extern undefined1 LAB_112eb0bb[];
extern undefined1 LAB_112eb204[];
extern undefined1 LAB_112eb2a0[];
extern undefined1 LAB_112eb307[];
extern undefined1 LAB_112eb430[];
extern undefined1 LAB_112eb497[];
extern undefined1 LAB_112ebd7d[];
extern undefined1 LAB_112ebe35[];
extern undefined1 LAB_112ebe40[];
extern undefined1 LAB_112ed620[];
extern undefined1 LAB_112ede99[];
extern undefined1 LAB_112ee9c3[];
extern undefined1 LAB_112eea02[];
extern undefined1 LAB_112eeb33[];
extern undefined1 LAB_112eeb72[];
extern undefined1 LAB_112efcb4[];
extern undefined1 LAB_112efd9d[];
extern undefined1 LAB_112efe00[];
extern undefined1 LAB_112f06f6[];
extern undefined1 LAB_112f079b[];
extern undefined1 LAB_112f07f1[];
extern undefined1 LAB_112f082a[];
extern undefined1 LAB_112f085f[];
extern undefined1 LAB_112f13a8[];
extern undefined1 LAB_112f13ad[];
extern undefined1 LAB_112f156f[];
extern undefined1 LAB_112f1ec3[];
extern undefined1 LAB_112f1f02[];
extern undefined1 LAB_112f2033[];
extern undefined1 LAB_112f2072[];
extern undefined1 LAB_112f2266[];
extern undefined1 LAB_112f226b[];
extern undefined1 LAB_112f2297[];
extern undefined1 LAB_112f3783[];
extern undefined1 LAB_112f3a49[];
extern undefined1 LAB_112f4590[];
extern undefined1 LAB_112f4595[];
extern undefined1 LAB_112f4a10[];
extern undefined1 LAB_112f4a2f[];
extern undefined1 LAB_112f4d50[];
extern undefined1 LAB_117d0600[];
extern undefined1 LAB_117d0630[];
extern undefined1 LAB_117d06b0[];
extern undefined1 LAB_117d06ed[];
extern undefined1 LAB_117d072d[];
extern undefined1 LAB_117d0775[];
extern undefined1 LAB_117d07b5[];
extern undefined1 LAB_117d07f5[];
extern undefined1 LAB_117d0845[];
extern undefined1 LAB_117d0895[];
extern undefined1 LAB_117d08d5[];
extern undefined1 LAB_117d090d[];
extern undefined1 LAB_117d094d[];
extern undefined1 LAB_117d098d[];
extern undefined1 LAB_117d09cd[];
extern undefined1 LAB_117d0a0d[];
extern undefined1 LAB_117d0a4d[];
extern undefined1 LAB_117d0a9b[];
extern undefined1 LAB_117d0ad0[];
extern undefined1 LAB_117d0b00[];
extern undefined1 LAB_117d0b30[];
extern undefined1 LAB_117d0b6d[];
extern undefined1 LAB_117d0bbd[];
extern undefined1 LAB_117d0c00[];
extern undefined1 LAB_117d0c30[];
extern undefined1 LAB_117d0ca5[];
extern undefined1 LAB_117d0ce5[];
extern undefined1 LAB_117d0d1d[];
extern undefined1 LAB_117d0dfd[];
extern undefined1 LAB_117d0e3d[];
extern undefined1 LAB_117d0ea5[];
extern undefined1 LAB_117d0f0d[];
extern undefined1 LAB_117d0f67[];
extern undefined1 LAB_117d10dd[];
extern undefined1 LAB_117d113a[];
extern undefined1 LAB_117d1180[];
extern undefined1 LAB_117d120d[];
extern undefined1 LAB_117d125d[];
extern undefined1 LAB_117d12ad[];
extern undefined1 LAB_117d12fd[];
extern undefined1 LAB_117d135b[];
extern undefined1 LAB_117d13e0[];
extern undefined1 LAB_117d1410[];
extern undefined1 LAB_117d1465[];
extern int *PTR_DAT_119eca24;
extern int *PTR_LAB_12121e74;
extern int *PTR_PTR_12121e70;
extern int *PTR_free_12121e64;
extern int *PTR_malloc_12121e5c;
extern int *PTR_realloc_12121e60;
extern int *stack0x00000004;
extern int *stack0x0000000c;
extern int *stack0x00000038;
extern int *stack0x00000064;
extern int *stack0xfffff6ec;
extern int *stack0xfffff6f0;
extern int *stack0xfffff7e8;
extern int *stack0xfffff7ec;
extern int *stack0xfffff7f0;
extern int *stack0xffffff94;
extern int *stack0xffffffd8;
extern int *stack0xfffffffc;
extern char s_Invalid_ISO_8601_localtime_forma_119e9a7c[];
extern char s_Time_value_is_outside_the_valid_r_119e9acc[];
extern char s_Unable_to_parse_time_values__119e9aa8[];
extern void *ExceptionList;
namespace std { template<class... A> int _Throw_C_error(A...); template<class... A> int _Xbad_function_call(A...);}
typedef void *A;
typedef void *ATTLIST;
typedef void *B;
typedef void *C;
typedef void *D;
typedef void *DOCTYPE;
typedef void *E;
typedef void *ELEMENT;
typedef void *EMPTY;
typedef void *ENTITY;
typedef void *F;
typedef void *FIXED;
typedef void *G;
typedef void *H;
typedef void *I;
typedef void *IGNORE;
typedef void *IMPLIED;
typedef void *INCLUDE;
typedef void *J;
typedef void *K;
typedef void *L;
typedef void *LOCK;
typedef void *LPBOOL;
typedef void *LPCSTR;
typedef void *LPCWSTR;
typedef void *LPSTR;
typedef void *LPWSTR;
typedef void *M;
typedef void *N;
typedef void *NOTATION;
typedef void *O;
typedef void *P;
typedef void *PUBLIC;
typedef void *Q;
typedef void *R;
typedef void *REQUIRED;
typedef void *S;
typedef void *SYSTEM;
typedef void *T;
typedef void *U;
typedef void *UNLOCK;
typedef void *V;
typedef void *W;
typedef void *WARNING;
typedef void *X;
typedef void *XML;
typedef void *Y;
typedef void *Z;
typedef void *_File;
typedef void *_Memory;
typedef void *_Size;
typedef void *_func_void_void_ptr;
struct Accounting { char _pad; Accounting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Bundle { char _pad; Bundle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Cannot { char _pad; Cannot(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Direct { char _pad; Direct(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct MoveFileExW { char _pad; MoveFileExW(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct MultiByteToWideChar { char _pad; MultiByteToWideChar(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_14 { char _pad; Ordinal_14(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_15 { char _pad; Ordinal_15(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_19 { char _pad; Ordinal_19(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_2 { char _pad; Ordinal_2(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_20 { char _pad; Ordinal_20(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_21 { char _pad; Ordinal_21(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_23 { char _pad; Ordinal_23(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_3 { char _pad; Ordinal_3(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_8 { char _pad; Ordinal_8(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_9 { char _pad; Ordinal_9(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Parsed { char _pad; Parsed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Removed { char _pad; Removed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SetLastError { char _pad; SetLastError(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Using { char _pad; Using(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Version { char _pad; Version(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct WideCharToMultiByte { char _pad; WideCharToMultiByte(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered_Bulk { char _pad; void __thiscall FUN_112c3860(undefined4 *param_2); template<class... A> int FUN_112c3860(A...); void __thiscall FUN_112c38f0(undefined4 *param_2); template<class... A> int FUN_112c38f0(A...); undefined4 * __thiscall FUN_112eac60(int param_2); template<class... A> int FUN_112eac60(A...); undefined4 * __thiscall FUN_112eacf0(int param_2); template<class... A> int FUN_112eacf0(A...); int __thiscall FUN_112eae90(void); template<class... A> int FUN_112eae90(A...); int __thiscall FUN_112eb020(void); template<class... A> int FUN_112eb020(A...); int __thiscall FUN_112eb1c0(undefined4 param_2,int *param_3,undefined4 *param_4); template<class... A> int FUN_112eb1c0(A...); void __thiscall FUN_112eb230(int *param_2); template<class... A> int FUN_112eb230(A...); void __thiscall FUN_112eb3c0(int *param_2); template<class... A> int FUN_112eb3c0(A...); void __thiscall FUN_112ebb90(int *param_2); template<class... A> int FUN_112ebb90(A...); void __thiscall FUN_112ebc30(int *param_2); template<class... A> int FUN_112ebc30(A...); void __thiscall FUN_112ebd40(uint param_2); template<class... A> int FUN_112ebd40(A...); int __thiscall FUN_112ec280(int *param_2); template<class... A> int FUN_112ec280(A...); int __thiscall FUN_112ec370(int param_2); template<class... A> int FUN_112ec370(A...); int __thiscall FUN_112ec3f0(int *param_2); template<class... A> int FUN_112ec3f0(A...); int __thiscall FUN_112ec4e0(int param_2); template<class... A> int FUN_112ec4e0(A...); undefined4 * __thiscall FUN_112ec690(undefined4 param_2,undefined4 *param_3,undefined4 *param_4); template<class... A> int FUN_112ec690(A...); int __thiscall FUN_112ec970(int param_2); template<class... A> int FUN_112ec970(A...); int __thiscall FUN_112ec9f0(int *param_2); template<class... A> int FUN_112ec9f0(A...); int __thiscall FUN_112eca60(int param_2); template<class... A> int FUN_112eca60(A...); int __thiscall FUN_112ecae0(int *param_2); template<class... A> int FUN_112ecae0(A...); int __thiscall FUN_112ecb60(int param_2); template<class... A> int FUN_112ecb60(A...); int __thiscall FUN_112ecbe0(int *param_2); template<class... A> int FUN_112ecbe0(A...); int __thiscall FUN_112ecc50(int param_2); template<class... A> int FUN_112ecc50(A...); undefined4 * __thiscall FUN_112ecd20(undefined4 param_2,undefined4 param_3,char *param_4); template<class... A> int FUN_112ecd20(A...); undefined4 * __thiscall FUN_112ed030(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_112ed030(A...); void __thiscall FUN_112ed860(int param_2); template<class... A> int FUN_112ed860(A...); void __thiscall FUN_112ed950(int param_2); template<class... A> int FUN_112ed950(A...); int __thiscall FUN_112eda10(int param_2); template<class... A> int FUN_112eda10(A...); undefined4 * __thiscall FUN_112eddc0(byte param_2); template<class... A> int FUN_112eddc0(A...); void * __thiscall FUN_112edf90(byte param_2); template<class... A> int FUN_112edf90(A...); void __thiscall FUN_112ee100(int param_2,int param_3,int param_4); template<class... A> int FUN_112ee100(A...); void __thiscall FUN_112ee940(int *param_2); template<class... A> int FUN_112ee940(A...); void __thiscall FUN_112eeab0(int *param_2); template<class... A> int FUN_112eeab0(A...); int * __thiscall FUN_112ef010(void *param_2,uint param_3); template<class... A> int FUN_112ef010(A...); undefined4 __thiscall FUN_112ef380(int param_2); template<class... A> int FUN_112ef380(A...); void __thiscall FUN_112f01f0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_112f01f0(A...); uint __thiscall FUN_112f1370(int param_2); template<class... A> int FUN_112f1370(A...); void __thiscall FUN_112f1c50(undefined4 param_2); template<class... A> int FUN_112f1c50(A...); void __thiscall FUN_112f1e40(int *param_2); template<class... A> int FUN_112f1e40(A...); void __thiscall FUN_112f1fb0(int *param_2); template<class... A> int FUN_112f1fb0(A...); void __thiscall FUN_112f2120(int param_2); template<class... A> int FUN_112f2120(A...); void __thiscall FUN_112f2220(int param_2); template<class... A> int FUN_112f2220(A...); undefined4 * __thiscall FUN_112f2ba0(uint param_2,undefined4 param_3,uint param_4,undefined2 param_5); template<class... A> int FUN_112f2ba0(A...); int * __thiscall FUN_112f2da0(uint param_2,undefined2 param_3); template<class... A> int FUN_112f2da0(A...); undefined4 * __thiscall FUN_112f2fe0(uint param_2,undefined2 param_3); template<class... A> int FUN_112f2fe0(A...); undefined4 * __thiscall FUN_112f3ce0(char *param_2,undefined4 param_3); template<class... A> int FUN_112f3ce0(A...); undefined4 * __thiscall FUN_112f4110(byte param_2); template<class... A> int FUN_112f4110(A...); void __thiscall FUN_112f4440(undefined4 param_2,long *param_3); template<class... A> int FUN_112f4440(A...); bool __thiscall FUN_112f44c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_112f44c0(A...); void __thiscall FUN_112f4560(byte *param_2,undefined4 param_3); template<class... A> int FUN_112f4560(A...); void __thiscall FUN_112f4790(int param_2,uint param_3,char param_4); template<class... A> int FUN_112f4790(A...); /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_112f4bc0(int *param_2); template<class... A> int FUN_112f4bc0(A...); undefined4 __thiscall FUN_112f5000(char *param_2,char *param_3); template<class... A> int FUN_112f5000(A...); };
using namespace std;
undefined4 * FUN_112b9f90(undefined4 param_1);
extern undefined4 * FUN_112b9f90(...);
void FUN_112ba150(undefined1 *param_1,int param_2,uint param_3);
extern void FUN_112ba150(...);
void FUN_112ba200(uint param_1,int param_2,char *param_3);
extern void FUN_112ba200(...);
uint FUN_112bac10(int param_1);
extern uint FUN_112bac10(...);
void FUN_112bacb0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 code *param_5,undefined4 param_6);
extern void FUN_112bacb0(...);
void FUN_112bb1d0(int param_1,int param_2);
extern void FUN_112bb1d0(...);
undefined4 FUN_112bb2f0(char *param_1,char *param_2,int *param_3);
extern undefined4 FUN_112bb2f0(...);
void FUN_112bb680(int param_1,char *param_2,int param_3,int param_4,code *param_5,int param_6);
extern void FUN_112bb680(...);
void FUN_112bc250(undefined4 *param_1);
extern void FUN_112bc250(...);
uint FUN_112bc2d0(byte *param_1,byte *param_2,uint param_3);
extern uint FUN_112bc2d0(...);
char * FUN_112bc7d0(char *param_1,byte *param_2);
extern char * FUN_112bc7d0(...);
int FUN_112bd6b0(byte *param_1,int param_2,int param_3);
extern int FUN_112bd6b0(...);
undefined4 FUN_112bd850(undefined4 param_1,int param_2,int param_3);
extern undefined4 FUN_112bd850(...);
void FUN_112bd940(uint *param_1,undefined1 *param_2,size_t param_3,code *param_4,undefined4 param_5);
extern void FUN_112bd940(...);
char FUN_112bdeb0(FILE *param_1,int *param_2,int *param_3);
extern char FUN_112bdeb0(...);
void FUN_112be080(int *param_1);
extern void FUN_112be080(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 * FUN_112beed0(int *param_1);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 * FUN_112beed0(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 * FUN_112bef20(int *param_1);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 * FUN_112bef20(...);
void FUN_112bf2b0(undefined4 *param_1,int param_2);
extern void FUN_112bf2b0(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_112bf390(byte *param_1,undefined4 param_2,byte *param_3,int *param_4,code *param_5,
                 undefined4 param_6);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_112bf390(...);
int FUN_112bfd80(int param_1,int param_2,void *param_3,size_t param_4,undefined4 param_5,
                undefined4 *param_6);
extern int FUN_112bfd80(...);
undefined4 FUN_112c0390(short *param_1);
extern undefined4 FUN_112c0390(...);
undefined4 FUN_112c0420(short *param_1);
extern undefined4 FUN_112c0420(...);
undefined4 FUN_112c0870(short *param_1);
extern undefined4 FUN_112c0870(...);
undefined4 FUN_112c0980(short *param_1);
extern undefined4 FUN_112c0980(...);
byte FUN_112c0a80(short *param_1);
extern byte FUN_112c0a80(...);
undefined4 FUN_112c1a20(int param_1,int *param_2,byte param_3);
extern undefined4 FUN_112c1a20(...);
undefined4 FUN_112c1ae0(int param_1,int *param_2,byte param_3);
extern undefined4 FUN_112c1ae0(...);
undefined4 FUN_112c27a0(int param_1,undefined4 *param_2);
extern undefined4 FUN_112c27a0(...);
void FUN_112c28f0(undefined1 *param_1,undefined4 *param_2,undefined1 param_3);
extern void FUN_112c28f0(...);
undefined4 FUN_112c2950(int param_1,undefined4 *param_2);
extern undefined4 FUN_112c2950(...);
void FUN_112c29b0(int param_1,int *param_2,int param_3);
extern void FUN_112c29b0(...);
void FUN_112c2ac0(int param_1,int *param_2);
extern void FUN_112c2ac0(...);
undefined4 FUN_112c2b50(char *param_1,undefined4 *param_2,char *param_3);
extern undefined4 FUN_112c2b50(...);
undefined4 FUN_112c2c00(int param_1,undefined4 *param_2);
extern undefined4 FUN_112c2c00(...);
undefined4 FUN_112c2c80(int param_1);
extern undefined4 FUN_112c2c80(...);
int FUN_112c35f0(int param_1,undefined1 *param_2,int param_3);
extern int FUN_112c35f0(...);
void FUN_112c3710(int param_1,int param_2,undefined4 param_3);
extern void FUN_112c3710(...);
void FUN_112c3ea0(longlong *param_1,undefined4 *param_2);
extern void FUN_112c3ea0(...);
char FUN_112c42d0(undefined4 *param_1,undefined4 *param_2);
extern char FUN_112c42d0(...);
char FUN_112c43a0(undefined4 param_1,int param_2,undefined4 *param_3);
extern char FUN_112c43a0(...);
undefined1 * FUN_112c46d0(undefined1 *param_1,undefined4 *param_2);
extern undefined1 * FUN_112c46d0(...);
int FUN_112c48e0(char *param_1,void *param_2,int param_3,size_t param_4);
extern int FUN_112c48e0(...);
int FUN_112c49f0(char *param_1,void *param_2,int param_3,size_t param_4);
extern int FUN_112c49f0(...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_112c4ae0(undefined4 param_1);
extern /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_112c4ae0(...);
undefined4 FUN_112c4f80(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5);
extern undefined4 FUN_112c4f80(...);
undefined4
FUN_112c5110(int param_1,uint param_2,void *param_3,uint *param_4,void *param_5,int *param_6,
            void *param_7,int *param_8,void *param_9,uint *param_10,undefined4 *param_11,
            char *param_12);
extern undefined4 FUN_112c5110(...);
undefined4
FUN_112c53c0(int param_1,uint param_2,undefined1 *param_3,void *param_4,uint *param_5,
            undefined4 *param_6);
extern undefined4 FUN_112c53c0(...);
undefined4
FUN_112c5510(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6);
extern undefined4 FUN_112c5510(...);
undefined4
FUN_112c56e0(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6);
extern undefined4 FUN_112c56e0(...);
undefined4
FUN_112c58b0(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6);
extern undefined4 FUN_112c58b0(...);
void FUN_112c5a80(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5,
                 void *param_6,uint *param_7,void *param_8,uint *param_9,void *param_10,
                 uint *param_11,void *param_12,uint *param_13,void *param_14,uint *param_15,
                 void *param_16,uint *param_17,void *param_18,uint *param_19,void *param_20,
                 uint *param_21,undefined4 *param_22,undefined4 *param_23,uint *param_24,
                 uint *param_25,undefined1 *param_26,uint param_27,undefined2 *param_28);
extern void FUN_112c5a80(...);
undefined4
FUN_112c63e0(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6,int param_7,uint *param_8);
extern undefined4 FUN_112c63e0(...);
void FUN_112c6740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
extern void FUN_112c6740(...);
void FUN_112c6c00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_112c6c00(...);
void FUN_112c6cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,int param_11,char param_12,undefined4 param_13,
                 undefined4 param_14);
extern void FUN_112c6cf0(...);
void FUN_112c6fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9,uint param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13);
extern void FUN_112c6fb0(...);
void FUN_112c73a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
extern void FUN_112c73a0(...);
void FUN_112c7910(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
extern void FUN_112c7910(...);
void FUN_112c7ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
extern void FUN_112c7ca0(...);
undefined4
FUN_112c7ec0(int param_1,int *param_2,uint *param_3,void *param_4,undefined4 param_5,uint param_6);
extern undefined4 FUN_112c7ec0(...);
undefined4 FUN_112c7fc0(char *param_1,undefined4 *param_2);
extern undefined4 FUN_112c7fc0(...);
void FUN_112c8080(uint *param_1,uint param_2,int param_3);
extern void FUN_112c8080(...);
void FUN_112c81c0(uint *param_1,uint param_2,int param_3);
extern void FUN_112c81c0(...);
void FUN_112c8300(undefined4 param_1,uint *param_2,uint param_3);
extern void FUN_112c8300(...);
void FUN_112c8540(undefined4 param_1,void *param_2,uint param_3,uint *param_4);
extern void FUN_112c8540(...);
void FUN_112c8780(char *param_1,uint param_2,undefined4 param_3,char *param_4,int param_5,
                 undefined4 *param_6,undefined4 param_7,undefined4 param_8,char param_9,
                 char param_10);
extern void FUN_112c8780(...);
void FUN_112c8970(undefined1 *param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_112c8970(...);
undefined4 *
FUN_112c8a40(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8);
extern undefined4 * FUN_112c8a40(...);
undefined4
FUN_112c8cb0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8);
extern undefined4 FUN_112c8cb0(...);
undefined4 FUN_112c99f0(int param_1,int param_2);
extern undefined4 FUN_112c99f0(...);
void FUN_112ca470(int param_1);
extern void FUN_112ca470(...);
float10 FUN_112cb3d0(int param_1);
extern float10 FUN_112cb3d0(...);
void FUN_112cb480(int param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined4 param_5,undefined4 param_6,int param_7);
extern void FUN_112cb480(...);
void FUN_112cb630(int param_1,undefined4 param_2);
extern void FUN_112cb630(...);
char FUN_112cb720(int param_1,undefined4 *param_2,int param_3,char *param_4,undefined4 *param_5);
extern char FUN_112cb720(...);
char * FUN_112cc0b0(int param_1);
extern char * FUN_112cc0b0(...);
int FUN_112cc360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int FUN_112cc360(...);
void FUN_112d0d50(int *param_1,char param_2,int param_3);
extern void FUN_112d0d50(...);
void FUN_112d0fd0(int *param_1,int param_2);
extern void FUN_112d0fd0(...);
int FUN_112d1980(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int FUN_112d1980(...);
ulong FUN_112d26d0(char *param_1,ulong param_2);
extern ulong FUN_112d26d0(...);
void FUN_112d2890(int param_1,undefined4 param_2);
extern void FUN_112d2890(...);
uint FUN_112d3400(int param_1);
extern uint FUN_112d3400(...);
void FUN_112d3590(char *param_1);
extern void FUN_112d3590(...);
void FUN_112d35f0(char *param_1);
extern void FUN_112d35f0(...);
int FUN_112d4360(int *param_1,char *param_2);
extern int FUN_112d4360(...);
void FUN_112d5030(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern void FUN_112d5030(...);
void FUN_112d5180(int param_1,int param_2,int param_3,int param_4);
extern void FUN_112d5180(...);
uint * FUN_112d58b0(uint *param_1,uint *param_2);
extern uint * FUN_112d58b0(...);
undefined4 FUN_112d75b0(int param_1);
extern undefined4 FUN_112d75b0(...);
undefined4 * FUN_112d76b0(undefined1 param_1);
extern undefined4 * FUN_112d76b0(...);
undefined4 FUN_112d8340(int param_1,uint param_2);
extern undefined4 FUN_112d8340(...);
undefined4 FUN_112d9930(int param_1,byte *param_2,int param_3,undefined4 *param_4);
extern undefined4 FUN_112d9930(...);
undefined1 FUN_112da290(undefined4 param_1,int *param_2,void *param_3,int *param_4,int param_5);
extern undefined1 FUN_112da290(...);
undefined4 FUN_112da580(undefined4 param_1,int *param_2,byte *param_3,int *param_4,byte *param_5);
extern undefined4 FUN_112da580(...);
undefined4 FUN_112deeb0(uint param_1,byte *param_2);
extern undefined4 FUN_112deeb0(...);
undefined4 FUN_112df030(undefined4 param_1,char *param_2,int param_3,undefined4 *param_4);
extern undefined4 FUN_112df030(...);
undefined4 FUN_112dff00(int param_1,int param_2,char *param_3,int param_4,int *param_5);
extern undefined4 FUN_112dff00(...);
int FUN_112e1760(int param_1);
extern int FUN_112e1760(...);
undefined4 FUN_112e1c50(undefined4 param_1,char *param_2,int param_3,undefined4 *param_4);
extern undefined4 FUN_112e1c50(...);
undefined4 FUN_112e2b30(int param_1,int param_2,byte *param_3,int param_4,int *param_5);
extern undefined4 FUN_112e2b30(...);
undefined4 FUN_112e3d10(undefined4 param_1,char *param_2,int param_3,undefined4 *param_4);
extern undefined4 FUN_112e3d10(...);
undefined4 FUN_112e6a80(int param_1,char *param_2);
extern undefined4 FUN_112e6a80(...);
int FUN_112e6af0(int param_1,undefined4 param_2,undefined4 param_3);
extern int FUN_112e6af0(...);
undefined4 FUN_112e6b50(undefined1 param_1,char param_2);
extern undefined4 FUN_112e6b50(...);
undefined4 FUN_112e7450(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5);
extern undefined4 FUN_112e7450(...);
undefined4
FUN_112e7610(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
extern undefined4 FUN_112e7610(...);
undefined4
FUN_112e7b50(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
extern undefined4 FUN_112e7b50(...);
undefined4
FUN_112e8300(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
extern undefined4 FUN_112e8300(...);
undefined4
FUN_112e85b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
extern undefined4 FUN_112e85b0(...);
undefined4 FUN_112e8870(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5);
extern undefined4 FUN_112e8870(...);
undefined4
FUN_112e8ad0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
extern undefined4 FUN_112e8ad0(...);
undefined4 FUN_112e8e20(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5);
extern undefined4 FUN_112e8e20(...);
void FUN_112e9b90(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6);
extern void FUN_112e9b90(...);
int FUN_112ea480(byte param_1);
extern int FUN_112ea480(...);
int FUN_112ea620(byte param_1,int param_2,undefined4 param_3,int param_4);
extern int FUN_112ea620(...);
void FUN_112eaa60(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
extern void FUN_112eaa60(...);
undefined4 * FUN_112eb580(undefined4 *param_1,undefined4 *param_2,short *param_3);
extern undefined4 * FUN_112eb580(...);
undefined4 * FUN_112eb820(int param_1);
extern undefined4 * FUN_112eb820(...);
undefined4 * FUN_112eb8c0(int *param_1);
extern undefined4 * FUN_112eb8c0(...);
undefined4 * FUN_112eb940(int param_1);
extern undefined4 * FUN_112eb940(...);
undefined4 * FUN_112eb9e0(int *param_1);
extern undefined4 * FUN_112eb9e0(...);
void __fastcall FUN_112ed3b0(int *param_1);
extern void __fastcall FUN_112ed3b0(...);
void __fastcall FUN_112ed450(undefined4 *param_1);
extern void __fastcall FUN_112ed450(...);
void __fastcall FUN_112ed4f0(int *param_1);
extern void __fastcall FUN_112ed4f0(...);
void __fastcall FUN_112ed560(undefined4 *param_1);
extern void __fastcall FUN_112ed560(...);
void __fastcall FUN_112ed700(void *param_1);
extern void __fastcall FUN_112ed700(...);
void __stdcall FUN_112edc80(void *param_1);
void __stdcall FUN_112edc80(void *param_1);
undefined4 * __fastcall FUN_112ee1c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_112ee1c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_112ee260(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_112ee260(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_112eed00(int *param_1);
extern void __fastcall FUN_112eed00(...);
void __fastcall FUN_112eed70(int *param_1);
extern void __fastcall FUN_112eed70(...);
void * FUN_112eef40(uint param_1);
extern void * FUN_112eef40(...);
void FUN_112ef180(void);
extern void FUN_112ef180(...);
undefined4 FUN_112efc20(int *param_1);
extern undefined4 FUN_112efc20(...);
undefined4 FUN_112efd20(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
extern undefined4 FUN_112efd20(...);
int FUN_112f0000(undefined4 param_1,undefined4 *param_2);
extern int FUN_112f0000(...);
void FUN_112f05b0(undefined4 param_1,int param_2,char param_3,undefined4 param_4,int *param_5,
                 undefined1 *param_6,undefined4 param_7);
extern void FUN_112f05b0(...);
void __fastcall FUN_112f1460(int *param_1);
extern void __fastcall FUN_112f1460(...);
int * FUN_112f1600(undefined4 param_1,undefined4 param_2);
extern int * FUN_112f1600(...);
void __fastcall FUN_112f17a0(char *param_1);
extern void __fastcall FUN_112f17a0(...);
void FUN_112f1900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern void FUN_112f1900(...);
void FUN_112f3390(undefined4 *param_1,LPCWSTR param_2);
extern void FUN_112f3390(...);
void FUN_112f3500(undefined4 *param_1,LPCSTR param_2);
extern void FUN_112f3500(...);
void FUN_112f36a0(undefined4 param_1,undefined4 param_2);
extern void FUN_112f36a0(...);
void FUN_112f3800(undefined4 param_1);
extern void FUN_112f3800(...);
void FUN_112f38b0(undefined4 param_1);
extern void FUN_112f38b0(...);
void FUN_112f3960(undefined4 param_1,undefined4 param_2);
extern void FUN_112f3960(...);
uint FUN_112f3b40(int param_1,uint param_2,undefined1 *param_3,uint param_4);
extern uint FUN_112f3b40(...);
void __fastcall FUN_112f3f80(undefined4 *param_1);
extern void __fastcall FUN_112f3f80(...);
bool FUN_112f5100(ushort param_1,ushort param_2,ushort param_3,short *param_4,code *param_5,
                 undefined4 param_6,int *param_7,int *param_8);
extern bool FUN_112f5100(...);
// Reference entry 112b9f90; body size 242 bytes.
#line 1 "ENTRY_112b9f90"

undefined4 * FUN_112b9f90(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(*(code *)PTR_malloc_12121e5c)(0x28));
  if ((undefined4 *)(puVar1) == (undefined4 *)0x0) {
    return (undefined4 *)((undefined4 *)0x0);
  }
  switch(param_1) {
  case 2:
    puVar1[4] = (undefined4)(0);
    *(undefined2 *)(puVar1 + 5) = 0;
    goto LAB_112ba057;
  case 3:
    break;
  case 4:
    *(undefined1 *)(puVar1 + 5) = 0;
    break;
  case 5:
    puVar1[3] = (undefined4)(0);
    puVar1[2] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[1] = (undefined4)(0xbead);
    *puVar1 = (undefined4)(param_1);
    return (undefined4 *)(puVar1 + 2);
  case 6:
    *(undefined2 *)(puVar1 + 4) = 0;
    goto LAB_112ba057;
  case 7:
    puVar1[7] = (undefined4)(0);
    goto LAB_112ba042;
  case 8:
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
LAB_112ba042:
    puVar1[6] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    break;
  case 9:
    puVar1[3] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[2] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[1] = (undefined4)(0xbead);
    *puVar1 = (undefined4)(param_1);
    return (undefined4 *)(puVar1 + 2);
  default:
    (*(code *)PTR_free_12121e64)(puVar1);
    return (undefined4 *)((undefined4 *)0x0);
  }
  puVar1[4] = (undefined4)(0);
LAB_112ba057:
  puVar1[3] = (undefined4)(0);
  puVar1[1] = (undefined4)(0xbead);
  *puVar1 = (undefined4)(param_1);
  puVar1[2] = (undefined4)(0);
  return (undefined4 *)(puVar1 + 2);
}


// Reference entry 112ba150; body size 135 bytes.
#line 1 "ENTRY_112ba150"

void FUN_112ba150(undefined1 *param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_14);
  uVar2 = (uint)(thunk_FUN_111ac1c0(local_14,"%u.%u.%u.%u",*param_1,param_1[1],param_1[2],param_1[3]));
  if (param_3 <= uVar2) {
    SetLastError(0x1c);
    thunk_FUN_1148ac28();
    return;
  }
  pcVar3 = (char *)(local_14);
  param_2 = (int)(param_2 - (int)pcVar3);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
    pcVar3[param_2 + -1] = (char)(cVar1);
  } while (cVar1 != '\0');
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112ba200; body size 692 bytes.
#line 1 "ENTRY_112ba200"

void FUN_112ba200(uint param_1,int param_2,char *param_3)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  int iVar17;
  uint local_68;
  char *local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54 [8];
  char local_34 [46];
  undefined1 local_6 [2];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_68);
  local_58 = (int)(param_2);
  pbVar12 = (byte *)((byte *)(param_1 + 2));
  local_5c = (uint)(param_1);
  local_68 = (uint)(2);
  local_60 = (int)(1 - param_1);
  local_64 = (char *)((char *)~param_1);
  local_54[0] = (uint)(0);
  local_54[1] = (uint)(0);
  local_54[2] = (uint)(0);
  local_54[3] = (uint)(0);
  local_54[4] = (uint)(0);
  local_54[5] = (uint)(0);
  local_54[6] = (uint)(0);
  local_54[7] = (uint)(0);
  do {
    bVar7 = (byte)(((byte)(pbVar12 + (-2 - param_1)) & 1) * -8 + 8);
    local_54[(uint)(pbVar12 + (-2 - param_1)) >> 1] = (uint)(local_54[(uint)(pbVar12 + (-2 - param_1)) >> 1] | (uint)pbVar12[-2] << (bVar7 & 0x1f));
    local_54[(uint)(pbVar12 + (int)local_64) >> 1] = (uint)(local_54[(uint)(pbVar12 + (int)local_64) >> 1] |
         (uint)pbVar12[-1] << (8U - (char)(((uint)(pbVar12 + (int)local_64) & 1) << 3) & 0x1f));
    uVar5 = (uint)(local_68 >> 1);
    local_68 = (uint)(local_68 + 4);
    local_54[uVar5] = (uint)(local_54[uVar5] | (uint)*pbVar12 << (bVar7 & 0x1f));
    pbVar10 = (byte *)(pbVar12 + local_60);
    pbVar1 = (byte *)(pbVar12 + 1);
    pbVar12 = (byte *)(pbVar12 + 4);
    local_54[(uint)pbVar10 >> 1] = (uint)(local_54[(uint)pbVar10 >> 1] | (uint)*pbVar1 << (((byte)pbVar10 & 1) * -8 + 8 & 0x1f));
  } while ((int)(pbVar12 + (-2 - param_1)) < 0x10);
  iVar17 = (int)(-1);
  iVar14 = (int)(0);
  iVar11 = (int)(0);
  iVar15 = (int)(0);
  iVar13 = (int)(-1);
  do {
    if (local_54[iVar15] == 0) {
      iVar8 = (int)(iVar15);
      if (iVar13 != -1) {
        iVar8 = (int)(iVar13);
      }
      iVar2 = (int)(iVar11 + 1);
      iVar11 = (int)(1);
      if (iVar13 != -1) {
        iVar11 = (int)(iVar2);
      }
    }
    else {
      iVar8 = (int)(iVar13);
      if (iVar13 != -1) {
        if ((iVar17 == -1) || (iVar14 < iVar11)) {
          iVar14 = (int)(iVar11);
          iVar17 = (int)(iVar13);
        }
        iVar8 = (int)(-1);
      }
    }
    iVar15 = (int)(iVar15 + 1);
    iVar13 = (int)(iVar8);
  } while (iVar15 < 8);
  if (iVar8 == -1) {
    if (iVar17 == -1) goto LAB_112ba35a;
  }
  else if ((iVar17 == -1) || (iVar14 < iVar11)) {
    iVar14 = (int)(iVar11);
    iVar17 = (int)(iVar8);
  }
  if (iVar14 < 2) {
    iVar17 = (int)(-1);
  }
LAB_112ba35a:
  pcVar16 = (char *)(local_34);
  iVar13 = (int)(0);
  do {
    if (((iVar17 == -1) || (iVar13 < iVar17)) || (iVar17 + iVar14 <= iVar13)) {
      if (iVar13 == 0) {
LAB_112ba3b6:
        iVar11 = (int)(thunk_FUN_111ac1c0(pcVar16,&DAT_119e0b2c,local_54[iVar13]));
        pcVar16 = (char *)(pcVar16 + iVar11);
        goto LAB_112ba3ca;
      }
      *pcVar16 = (char)(':');
      pcVar16 = (char *)(pcVar16 + 1);
      local_64 = (char *)(pcVar16);
      if ((iVar13 != 6) || (iVar17 != 0)) goto LAB_112ba3b6;
      if (iVar14 != 6) {
        if (iVar14 == 7) {
          if (local_54[7] == 1) goto LAB_112ba3b6;
        }
        else if ((iVar14 != 5) || (local_54[5] != 0xffff)) goto LAB_112ba3b6;
      }
      puVar6 = (undefined1 *)((undefined1 *)
               thunk_FUN_111ac1c0(local_54,"%u.%u.%u.%u",*(undefined1 *)(local_5c + 0xc),
                                  *(undefined1 *)(local_5c + 0xd),*(undefined1 *)(local_5c + 0xe),
                                  *(undefined1 *)(local_5c + 0xf)));
      if (puVar6 < local_6 + -(int)local_64) {
        puVar9 = (uint *)(local_54);
        do {
          uVar5 = (uint)(*puVar9);
          *(char *)((int)puVar9 + ((int)local_64 - (int)local_54)) = (char)uVar5;
          puVar9 = (uint *)((uint *)((int)puVar9 + 1));
        } while ((char)uVar5 != '\0');
        pcVar4 = (char *)(local_64);
        if ((char *)(local_64) == (char *)0x0) goto LAB_112ba400;
        do {
          pcVar16 = (char *)(pcVar4);
          pcVar4 = (char *)(pcVar16 + 1);
        } while (*pcVar16 != '\0');
        goto LAB_112ba3d5;
      }
      goto LAB_112ba3f8;
    }
    if (iVar13 == iVar17) {
      *pcVar16 = (char)(':');
      pcVar16 = (char *)(pcVar16 + 1);
    }
LAB_112ba3ca:
    iVar13 = (int)(iVar13 + 1);
  } while (iVar13 < 8);
  if (iVar17 != -1) {
LAB_112ba3d5:
    if (iVar17 + iVar14 == 8) {
      *pcVar16 = (char)(':');
      pcVar16 = (char *)(pcVar16 + 1);
    }
  }
  *pcVar16 = (char)('\0');
  if (pcVar16 + (1 - (int)local_34) <= param_3) {
    pcVar16 = (char *)(local_34);
    do {
      cVar3 = (char)(*pcVar16);
      pcVar16[local_58 - (int)local_34] = (char)(cVar3);
      pcVar16 = (char *)(pcVar16 + 1);
    } while (cVar3 != '\0');
    thunk_FUN_1148ac28();
    return;
  }
LAB_112ba3f8:
  SetLastError(0x1c);
LAB_112ba400:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112bac10; body size 118 bytes.
#line 1 "ENTRY_112bac10"

uint FUN_112bac10(int param_1)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  uint local_4;
  
  bVar4 = (byte)(*(byte *)(param_1 + 0x100));
  iVar5 = (int)(2);
  bVar3 = (byte)(*(byte *)(param_1 + 0x101));
  local_4 = (uint)(0);
  puVar6 = (uint *)(&local_4);
  do {
    bVar4 = (byte)(bVar4 + 1);
    uVar2 = (uint)((uint)bVar4);
    cVar1 = (char)(*(char *)(uVar2 + param_1));
    bVar3 = (byte)(bVar3 + cVar1);
    *(undefined1 *)(uVar2 + param_1) = *(undefined1 *)((uint)bVar3 + param_1);
    *(char *)((uint)bVar3 + param_1) = cVar1;
    *(byte*)puVar6 = (byte)((uint *)((byte)*puVar6 ^ *(byte *)((uint)(byte)(*(char *)(uVar2 + param_1) + cVar1) + param_1)));
    iVar5 = (int)(iVar5 + -1);
    puVar6 = (uint *)((uint *)((int)puVar6 + 1));
  } while (iVar5 != 0);
  *(byte *)(param_1 + 0x100) = bVar4;
  *(byte *)(param_1 + 0x101) = bVar3;
  return (uint)(local_4 & 0xffff);
}


// Reference entry 112bacb0; body size 416 bytes.
#line 1 "ENTRY_112bacb0"

void FUN_112bacb0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 code *param_5,undefined4 param_6)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  void *local_10;
  undefined2 local_c;
  undefined2 uStack_a;
  byte local_8 [4];
  undefined4 local_4;
  
  if ((*param_1 & 0x100) == 0) {
    uVar3 = (uint)(0);
  }
  else {
    uVar3 = (uint)(param_1[0xe]);
  }
  iVar4 = (int)(thunk_FUN_112bdc40(param_2,param_3,param_4,(short)param_1[0x1f],~(*param_1 >> 3) & 1,
                             &local_10,&local_4,uVar3));
  if (iVar4 == 0) {
    do {
      bVar7 = (byte)(*(byte *)((int)param_1 + 0x17e));
      bVar6 = (byte)(*(byte *)((int)param_1 + 0x17f));
      iVar4 = (int)(2);
      local_8[0] = (byte)(0);
      local_8[1] = (byte)(0);
      local_8[2] = (byte)(0);
      local_8[3] = (byte)(0);
      pbVar8 = (byte *)(local_8);
      do {
        bVar7 = (byte)(bVar7 + 1);
        uVar3 = (uint)((uint)bVar7);
        cVar1 = (char)(*(char *)(uVar3 + 0x7e + (int)param_1));
        bVar6 = (byte)(bVar6 + cVar1);
        *(undefined1 *)(uVar3 + 0x7e + (int)param_1) = *(undefined1 *)(bVar6 + 0x7e + (int)param_1);
        *(char *)(bVar6 + 0x7e + (int)param_1) = cVar1;
        *pbVar8 = (byte)(*pbVar8 ^ *(byte *)((byte)(*(char *)(uVar3 + 0x7e + (int)param_1) + cVar1) + 0x7e
                                     + (int)param_1));
        iVar4 = (int)(iVar4 + -1);
        pbVar8 = (byte *)(pbVar8 + 1);
      } while (iVar4 != 0);
      *(byte *)((int)param_1 + 0x17e) = bVar7;
      *(byte *)((int)param_1 + 0x17f) = bVar6;
      local_c = (undefined2)(((uint)(local_8[0]) << 8 | (uint)(local_8[1])));
      iVar4 = (int)((local_c & 0x7ff) * 3);
      puVar2 = (uint *)((uint *)param_1[iVar4 + 0x69]);
      while( true ) {
        if ((uint *)(puVar2) == (uint *)(param_1) + iVar4 + 0x68) {
          *(short *)(param_1 + 0x1f) = *(unsigned short *)((char *)&local_8 + 0);
          puVar5 = (undefined4 *)((undefined4 *)(*(code *)PTR_malloc_12121e5c)(8));
          if ((undefined4 *)(puVar5) == (undefined4 *)0x0) {
            free(local_10);
            (*param_5)(param_6,0xf,0,0,0);
            return;
          }
          *puVar5 = (undefined4)(param_5);
          puVar5[1] = (undefined4)(param_6);
          thunk_FUN_112bd940(param_1,local_10,local_4,LAB_112bb030,puVar5);
          free(local_10);
          return;
        }
        if (*(ushort *)puVar2[2] == (ushort)(local_c)) break;
        puVar2 = (uint *)((uint *)puVar2[1]);
      }
    } while( true );
  }
  if ((void *)(local_10) != (void *)0x0) {
    (*(code *)PTR_free_12121e64)(local_10);
  }
  (*param_5)(param_6,iVar4,0,0,0);
  return;
}


// Reference entry 112bb1d0; body size 231 bytes.
#line 1 "ENTRY_112bb1d0"

void FUN_112bb1d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_2 + 0x38));
  while (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*(code *)PTR_free_12121e64)(*(int *)(iVar1 + 0xc));
    }
    (*(code *)PTR_free_12121e64)(iVar1);
    iVar1 = (int)(*(int *)(param_2 + 0x38));
  }
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    (*(code *)PTR_free_12121e64)(*(int *)(param_2 + 0x30));
  }
  iVar1 = (int)(*(int *)(param_2 + 0x20));
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  if (iVar1 != -1) {
    if (*(code **)(param_1 + 0x91a0) != (code *)0x0) {
      (**(code **)(param_1 + 0x91a0))(*(undefined4 *)(param_1 + 0x91a4),iVar1,0,0);
      iVar1 = (int)(*(int *)(param_2 + 0x20));
    }
    thunk_FUN_112b70c0(param_1,iVar1);
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x180);
  }
  iVar1 = (int)(*(int *)(param_2 + 0x1c));
  if (iVar1 != -1) {
    if (*(code **)(param_1 + 0x91a0) != (code *)0x0) {
      (**(code **)(param_1 + 0x91a0))(*(undefined4 *)(param_1 + 0x91a4),iVar1,0,0);
      iVar1 = (int)(*(int *)(param_2 + 0x1c));
    }
    thunk_FUN_112b70c0(param_1,iVar1);
    *(undefined4 *)(param_2 + 0x1c) = 0xffffffff;
  }
  return;
}


// Reference entry 112bb2f0; body size 126 bytes.
#line 1 "ENTRY_112bb2f0"

undefined4 FUN_112bb2f0(char *param_1,char *param_2,int *param_3)

{
  char cVar1;
  void *_Dst;
  char *pcVar2;
  size_t _Size;
  size_t _Size_00;
  
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  _Size = (size_t)((int)pcVar2 - (int)(param_1 + 1));
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  _Size_00 = (size_t)((int)pcVar2 - (int)(param_2 + 1));
  _Dst = (void *)((void *)(*(code *)PTR_malloc_12121e5c)(_Size + 2 + _Size_00));
  *param_3 = (int)((int)_Dst);
  if ((void *)(_Dst) == (void *)0x0) {
    return (undefined4)(0xf);
  }
  memcpy(_Dst,param_1,_Size);
  *(undefined1 *)(_Size + *param_3) = 0x2e;
  memcpy((void *)(*param_3 + 1 + _Size),param_2,_Size_00);
  *(undefined1 *)(*param_3 + _Size_00 + 1 + _Size) = 0;
  return (undefined4)(0);
}


// Reference entry 112bb680; body size 477 bytes.
#line 1 "ENTRY_112bb680"

void FUN_112bb680(int param_1,char *param_2,int param_3,int param_4,code *param_5,int param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int local_4;
  
  iVar4 = (int)(thunk_FUN_112bc4c0(param_2));
  if (iVar4 != 0) {
    (*param_5)(param_6,4,0,0,0);
    return;
  }
  iVar4 = (int)(thunk_FUN_112bb390(param_1,param_2,&local_4));
  if (iVar4 != 0) {
    (*param_5)(param_6,iVar4,0,0,0);
    return;
  }
  if (local_4 != 0) {
    thunk_FUN_112bacb0(param_1,local_4,param_3,param_4,param_5,param_6);
    (*(code *)PTR_free_12121e64)(local_4);
    return;
  }
  piVar5 = (int *)((int *)(*(code *)PTR_malloc_12121e5c)(0x2c));
  if ((int *)(piVar5) != (int *)0x0) {
    *piVar5 = (int)(param_1);
    iVar4 = (int)(thunk_FUN_112ba770(param_2));
    piVar5[1] = (int)(iVar4);
    if (iVar4 == 0) {
      (*(code *)PTR_free_12121e64)(piVar5);
      (*param_5)(param_6,0xf,0,0,0);
      return;
    }
    piVar5[3] = (int)(param_4);
    piVar5[4] = (int)((int)param_5);
    piVar5[5] = (int)(param_6);
    piVar5[2] = (int)(param_3);
    piVar5[6] = (int)(-1);
    piVar5[9] = (int)(0);
    piVar5[10] = (int)(0);
    cVar2 = (char)(*param_2);
    iVar4 = (int)(0);
    pcVar1 = (char *)(param_2);
    while (iVar3 = iVar4, cVar2 != '\0') {
      bVar6 = (bool)(cVar2 != '.');
      cVar2 = (char)(pcVar1[1]);
      pcVar1 = (char *)(pcVar1 + 1);
      iVar4 = (int)(iVar3 + 1);
      if (bVar6) {
        iVar4 = (int)(iVar3);
      }
    }
    if (iVar3 < *(int *)(param_1 + 0xc)) {
      piVar5[7] = (int)(1);
      piVar5[8] = (int)(0);
      iVar4 = (int)(thunk_FUN_112bb2f0(param_2,**(undefined4 **)(param_1 + 0x24),&local_4));
      if (iVar4 != 0) {
        (*(code *)PTR_free_12121e64)(piVar5[1]);
        (*(code *)PTR_free_12121e64)(piVar5);
        (*param_5)(param_6,iVar4,0,0,0);
        return;
      }
      thunk_FUN_112bacb0(param_1,local_4,param_3,param_4,LAB_112bb920,piVar5);
      (*(code *)PTR_free_12121e64)(local_4);
      return;
    }
    piVar5[7] = (int)(0);
    piVar5[8] = (int)(1);
    thunk_FUN_112bacb0(param_1,param_2,param_3,param_4,LAB_112bb920,piVar5);
    return;
  }
  (*param_5)(param_6,0xf,0,0,0);
  return;
}


// Reference entry 112bc250; body size 95 bytes.
#line 1 "ENTRY_112bc250"

void FUN_112bc250(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((undefined4 *)(param_1) != (undefined4 *)0x0) {
    (*(code *)PTR_free_12121e64)(*param_1);
    piVar2 = (int *)((int *)param_1[1]);
    iVar1 = (int)(*piVar2);
    if (iVar1 != 0) {
      do {
        (*(code *)PTR_free_12121e64)(iVar1);
        iVar1 = (int)(piVar2[1]);
        piVar2 = (int *)(piVar2 + 1);
      } while (iVar1 != 0);
      piVar2 = (int *)((int *)param_1[1]);
    }
    (*(code *)PTR_free_12121e64)(piVar2);
    (*(code *)PTR_free_12121e64)(*(undefined4 *)param_1[3]);
    (*(code *)PTR_free_12121e64)(param_1[3]);
    (*(code *)PTR_free_12121e64)(param_1);
  }
  return;
}


// Reference entry 112bc2d0; body size 204 bytes.
#line 1 "ENTRY_112bc2d0"

uint FUN_112bc2d0(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = (uint)((int)(((int)param_3 >> 0x1f & 7U) + param_3) >> 3);
  pbVar5 = (byte *)(param_1);
  pbVar6 = (byte *)(param_2);
  uVar4 = (uint)(uVar7);
  while (uVar3 = uVar4 - 4, 3 < uVar4) {
    if (*(int *)(int)(pbVar5) != *(int *)pbVar6) goto LAB_112bc30b;
    pbVar5 = (byte *)(pbVar5 + 4);
    pbVar6 = (byte *)(pbVar6 + 4);
    uVar4 = (uint)(uVar3);
  }
  if (uVar3 != 0xfffffffc) {
LAB_112bc30b:
    bVar8 = (bool)(*pbVar5 < *pbVar6);
    if ((*pbVar5 != *pbVar6) ||
       ((uVar3 != 0xfffffffd &&
        ((bVar8 = pbVar5[1] < pbVar6[1], pbVar5[1] != pbVar6[1] ||
         ((uVar3 != 0xfffffffe &&
          ((bVar8 = pbVar5[2] < pbVar6[2], pbVar5[2] != pbVar6[2] ||
           ((uVar3 != 0xffffffff && (bVar8 = pbVar5[3] < pbVar6[3], pbVar5[3] != pbVar6[3]))))))))))
       )) {
      uVar4 = (uint)(-(uint)bVar8 | 1);
      goto LAB_112bc341;
    }
  }
  uVar4 = (uint)(0);
LAB_112bc341:
  if (uVar4 == 0) {
    param_3 = (uint)(param_3 & 0x80000007);
    if ((int)param_3 < 0) {
      param_3 = (uint)((param_3 - 1 | 0xfffffff8) + 1);
    }
    if (param_3 != 0) {
      bVar1 = (byte)(param_1[uVar7]);
      bVar2 = (byte)(param_2[uVar7]);
      for (; 0 < (int)param_3; param_3 = param_3 - 1) {
        if ((bVar1 & 0x80) != (bVar2 & 0x80)) {
          return (uint)((uint)((bVar1 & 0x80) != 0) * 2 - 1);
        }
        bVar1 = (byte)(bVar1 * '\x02');
        bVar2 = (byte)(bVar2 * '\x02');
      }
      uVar4 = (uint)(0);
    }
  }
  return (uint)(uVar4);
}


// Reference entry 112bc7d0; body size 121 bytes.
#line 1 "ENTRY_112bc7d0"

char * FUN_112bc7d0(char *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar8);
    pcVar8 = (char *)(pcVar8 + 1);
  } while (cVar1 != '\0');
  pbVar6 = (byte *)(param_2);
  do {
    bVar2 = (byte)(*pbVar6);
    pbVar6 = (byte *)(pbVar6 + 1);
  } while (bVar2 != 0);
  uVar7 = (uint)((int)pbVar6 - (int)(param_2 + 1));
  if ((uint)((int)pcVar8 - (int)(param_1 + 1)) < uVar7) {
    return (char *)((char *)0x0);
  }
  pbVar6 = (byte *)(param_2 + uVar7);
  if (param_2 < pbVar6) {
    iVar3 = (int)((int)(param_1 + (((int)pcVar8 - (int)(param_1 + 1)) - uVar7)) - (int)param_2);
    do {
      iVar4 = (int)(tolower((uint)param_2[iVar3]));
      iVar5 = (int)(tolower((uint)*param_2));
      if (iVar4 != iVar5) {
        return (char *)((char *)0x0);
      }
      param_2 = (byte *)(param_2 + 1);
    } while (param_2 < pbVar6);
  }
  return (char *)(param_1 + (((int)pcVar8 - (int)(param_1 + 1)) - uVar7));
}


// Reference entry 112bd6b0; body size 254 bytes.
#line 1 "ENTRY_112bd6b0"

int FUN_112bd6b0(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int local_8;
  
  iVar3 = (int)(0);
  pbVar4 = (byte *)((byte *)(param_2 + param_3));
  iVar5 = (int)(0);
  local_8 = (int)(0);
  if (pbVar4 <= param_1) {
    return (int)(-1);
  }
  bVar1 = (byte)(*param_1);
  do {
    if (bVar1 == 0) {
      iVar3 = (int)(iVar5 + -1);
      if (iVar5 == 0) {
        iVar3 = (int)(0);
      }
      return (int)(iVar3);
    }
    uVar6 = (uint)((uint)bVar1);
    if ((uVar6 & 0xc0) == 0xc0) {
      if (pbVar4 <= param_1 + 1) {
        return (int)(-1);
      }
      uVar6 = (uint)((uVar6 & 0xffffff3f) << 8 | (uint)param_1[1]);
      if (param_3 <= (int)uVar6) {
        return (int)(-1);
      }
      iVar3 = (int)(iVar3 + 1);
      param_1 = (byte *)((byte *)(param_2 + uVar6));
      if (param_3 < iVar3) {
        return (int)(-1);
      }
      local_8 = (int)(iVar3);
      if (0x32 < iVar3) {
        return (int)(-1);
      }
    }
    else {
      if ((bVar1 & 0xc0) != 0) {
        return (int)(-1);
      }
      uVar2 = (uint)(uVar6);
      if (pbVar4 <= param_1 + uVar6 + 1) {
        return (int)(-1);
      }
      while (param_1 = param_1 + 1, uVar2 != 0) {
        iVar3 = (int)(isprint((uint)*param_1));
        if ((iVar3 == 0) && ((uVar6 != 1 || (*param_1 != 0)))) {
          iVar3 = (int)(4);
        }
        else {
          switch(*param_1) {
          case 0x22:
          case 0x24:
          case 0x28:
          case 0x29:
          case 0x2e:
          case 0x3b:
          case 0x40:
          case 0x5c:
            iVar3 = (int)(2);
            break;
          default:
            iVar3 = (int)(1);
          }
        }
        iVar5 = (int)(iVar5 + iVar3);
        uVar2 = (uint)(uVar2 - 1);
        iVar3 = (int)(local_8);
      }
      iVar5 = (int)(iVar5 + 1);
    }
    bVar1 = (byte)(*param_1);
  } while( true );
}


// Reference entry 112bd850; body size 181 bytes.
#line 1 "ENTRY_112bd850"

undefined4 FUN_112bd850(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  void *_Dst;
  uint *puVar6;
  int iVar7;
  
  iVar7 = (int)(0);
  if (0 < param_3) {
    iVar4 = (int)(0);
    puVar6 = (uint *)((uint *)(param_2 + 4));
    puVar5 = (uint *)(puVar6);
    while (*puVar5 <= 0x7fffffffU - iVar7) {
      iVar4 = (int)(iVar4 + 1);
      iVar7 = (int)(iVar7 + *puVar5);
      puVar5 = (uint *)(puVar5 + 2);
      if (param_3 <= iVar4) {
        if (iVar7 == 0) {
          return (undefined4)(0);
        }
        pvVar2 = (void *)((void *)(*(code *)PTR_malloc_12121e5c)(iVar7));
        _Dst = (void *)(pvVar2);
        if ((void *)(pvVar2) != (void *)0x0) {
          do {
            memcpy(_Dst,(void *)puVar6[-1],*puVar6);
            uVar1 = (uint)(*puVar6);
            puVar6 = (uint *)(puVar6 + 2);
            param_3 = (int)(param_3 + -1);
            _Dst = (void *)((void *)((int)_Dst + uVar1));
          } while (param_3 != 0);
          uVar3 = (undefined4)(Ordinal_19(param_1,pvVar2,iVar7,0));
          (*(code *)PTR_free_12121e64)(pvVar2);
          return (undefined4)(uVar3);
        }
        SetLastError(0xc);
        return (undefined4)(0xffffffff);
      }
    }
  }
  SetLastError(0x2726);
  return (undefined4)(0xffffffff);
}


// Reference entry 112bd940; body size 610 bytes.
#line 1 "ENTRY_112bd940"

void FUN_112bd940(uint *param_1,undefined1 *param_2,size_t param_3,code *param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uStack_8;
  
  if (((int)param_3 < 0xc) || (0xffff < (int)param_3)) {
    (*param_4)(param_5,7,0,0,0);
    return;
  }
  puVar3 = (ushort *)((ushort *)(*(code *)PTR_malloc_12121e5c)(0x6c));
  if ((ushort *)(puVar3) == (ushort *)0x0) {
    (*param_4)(param_5,0xf,0,0,0);
    return;
  }
  iVar4 = (int)((*(code *)PTR_malloc_12121e5c)(param_3 + 2));
  *(int *)(puVar3 + 0x1e) = iVar4;
  if (iVar4 == 0) {
    (*(code *)PTR_free_12121e64)(puVar3);
    (*param_4)(param_5,0xf,0,0,0);
    return;
  }
  if ((int)param_1[0x1e] < 1) {
    (*(code *)PTR_free_12121e64)(puVar3);
    (*param_4)(param_5,3,0,0,0);
    return;
  }
  iVar4 = (int)((*(code *)PTR_malloc_12121e5c)(param_1[0x1e] << 3));
  *(int *)(puVar3 + 0x2e) = iVar4;
  if (iVar4 == 0) {
    (*(code *)PTR_free_12121e64)(*(undefined4 *)(puVar3 + 0x1e));
    (*(code *)PTR_free_12121e64)(puVar3);
    (*param_4)(param_5,0xf,0,0,0);
    return;
  }
  uVar1 = (undefined1)(*param_2);
  uVar2 = (undefined1)(param_2[1]);
  puVar3[2] = (ushort)(0);
  puVar3[3] = (ushort)(0);
  *puVar3 = (ushort)(((uint)(uVar1) << 8 | (uint)(uVar2)));
  puVar3[4] = (ushort)(0);
  puVar3[5] = (ushort)(0);
  **(undefined1 **)(puVar3 + 0x1e) = (char)(param_3 >> 8);
  *(char *)(*(int *)(puVar3 + 0x1e) + 1) = (char)param_3;
  memcpy((void *)(*(int *)(puVar3 + 0x1e) + 2),param_2,param_3);
  *(int *)(puVar3 + 0x22) = *(int *)(puVar3 + 0x1e) + 2;
  *(code **)(puVar3 + 0x26) = param_4;
  *(size_t *)(puVar3 + 0x20) = param_3 + 2;
  *(size_t *)(puVar3 + 0x24) = param_3;
  *(undefined4 *)(puVar3 + 0x28) = param_5;
  puVar3[0x2a] = (ushort)(0);
  puVar3[0x2b] = (ushort)(0);
  *(uint *)(puVar3 + 0x2c) = param_1[100];
  if (param_1[4] == 1) {
    param_1[100] = (uint)((int)(param_1[100] + 1) % (int)param_1[0x1e]);
  }
  iVar4 = (int)(0);
  if (0 < (int)param_1[0x1e]) {
    do {
      *(undefined4 *)(*(int *)(puVar3 + 0x2e) + iVar4 * 8) = 0;
      *(undefined4 *)(*(int *)(puVar3 + 0x2e) + 4 + iVar4 * 8) = 0;
      iVar4 = (int)(iVar4 + 1);
    } while (iVar4 < (int)param_1[0x1e]);
  }
  if ((*param_1 & 0x100) == 0) {
    uVar6 = (uint)(0x200);
  }
  else {
    uVar6 = (uint)(param_1[0xe]);
  }
  if (((*param_1 & 1) == 0) && ((int)param_3 <= (int)uVar6)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(1);
  }
  *(undefined4 *)(puVar3 + 0x30) = uVar5;
  puVar3[0x32] = (ushort)(0xb);
  puVar3[0x33] = (ushort)(0);
  puVar3[0x34] = (ushort)(0);
  puVar3[0x35] = (ushort)(0);
  thunk_FUN_112ba6e0(puVar3 + 6,puVar3);
  thunk_FUN_112ba6e0(puVar3 + 0xc,puVar3);
  thunk_FUN_112ba6e0(puVar3 + 0x12,puVar3);
  thunk_FUN_112ba6e0(puVar3 + 0x18,puVar3);
  thunk_FUN_112ba700(puVar3 + 0x18,param_1 + 0x65);
  thunk_FUN_112ba700(puVar3 + 6,param_1 + (*puVar3 & 0x7ff) * 3 + 0x68);
  uStack_8 = (undefined8)(thunk_FUN_112bb1a0());
  thunk_FUN_112b7210(param_1,puVar3,&uStack_8);
  return;
}


// Reference entry 112bdeb0; body size 255 bytes.
#line 1 "ENTRY_112bdeb0"

char FUN_112bdeb0(FILE *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = (char *)((char *)0x0);
  if (*param_2 == 0) {
    iVar2 = (int)((*(code *)PTR_malloc_12121e5c)(0x80));
    *param_2 = (int)(iVar2);
    if (iVar2 == 0) {
      return (char)('\x0f');
    }
    *param_3 = (int)(0x80);
  }
  iVar2 = (int)(thunk_FUN_112b9e20(*param_3));
  pcVar3 = (char *)(fgets((char *)*param_2,iVar2,param_1));
  if ((char *)(pcVar3) != (char *)0x0) {
    do {
      iVar2 = (int)(*param_2);
      pcVar4 = (char *)(pcVar6 + iVar2);
      pcVar3 = (char *)(pcVar4 + 1);
      do {
        cVar1 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cVar1 != '\0');
      pcVar6 = (char *)(pcVar4 + ((int)pcVar6 - (int)pcVar3));
      if (pcVar6[iVar2 + -1] == '\n') {
        pcVar6[iVar2 + -1] = (char)('\0');
        return (char)('\0');
      }
      iVar5 = (int)(*param_3);
      if ((char *)(iVar5 - 1U) <= (char *)(pcVar6)) {
        iVar2 = (int)((*(code *)PTR_realloc_12121e60)(iVar2,iVar5 * 2));
        if (iVar2 == 0) {
          (*(code *)PTR_free_12121e64)(*param_2);
          *param_2 = (int)(0);
          return (char)('\x0f');
        }
        *param_2 = (int)(iVar2);
        iVar5 = (int)(*param_3 * 2);
        *param_3 = (int)(iVar5);
      }
      iVar2 = (int)(thunk_FUN_112b9e20(iVar5 - (int)pcVar6));
      pcVar3 = (char *)(fgets(pcVar6 + *param_2,iVar2,param_1));
    } while ((char *)(pcVar3) != (char *)0x0);
    if ((char *)(pcVar6) != (char *)0x0) {
      return (char)('\0');
    }
  }
  iVar2 = (int)(ferror(param_1));
  return (char)((iVar2 != 0) + '\r');
}


// Reference entry 112be080; body size 106 bytes.
#line 1 "ENTRY_112be080"

void FUN_112be080(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*param_1);
  while (iVar2 != 0) {
    iVar1 = (int)(*(int *)(iVar2 + 0xc));
    (*(code *)PTR_free_12121e64)(*(undefined4 *)(iVar2 + 4));
    (*(code *)PTR_free_12121e64)(*(undefined4 *)(iVar2 + 8));
    (*(code *)PTR_free_12121e64)(iVar2);
    iVar2 = (int)(iVar1);
  }
  iVar2 = (int)(param_1[1]);
  while (iVar2 != 0) {
    iVar1 = (int)(*(int *)(iVar2 + 0x1c));
    (*(code *)PTR_free_12121e64)(*(undefined4 *)(iVar2 + 0x18));
    (*(code *)PTR_free_12121e64)(iVar2);
    iVar2 = (int)(iVar1);
  }
  (*(code *)PTR_free_12121e64)(param_1);
  return;
}


// Reference entry 112beed0; body size 64 bytes.
#line 1 "ENTRY_112beed0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_112beed0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)((undefined4 *)(*(code *)PTR_malloc_12121e5c)(0x10));
  uVar5 = (undefined4)(_UNK_119e9954);
  uVar4 = (undefined4)(_UNK_119e9950);
  uVar3 = (undefined4)(_UNK_119e994c);
  if ((undefined4 *)(puVar6) != (undefined4 *)0x0) {
    *puVar6 = (undefined4)(_DAT_119e9948);
    puVar6[1] = (undefined4)(uVar3);
    puVar6[2] = (undefined4)(uVar4);
    puVar6[3] = (undefined4)(uVar5);
  }
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    for (iVar2 = (int)(*(int *)(iVar1 + 0xc)); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      iVar1 = (int)(iVar2);
    }
    *(undefined4 **)(iVar1 + 0xc) = puVar6;
    return (undefined4 *)(puVar6);
  }
  *param_1 = (int)((int)puVar6);
  return (undefined4 *)(puVar6);
}


// Reference entry 112bef20; body size 79 bytes.
#line 1 "ENTRY_112bef20"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_112bef20(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)((undefined4 *)(*(code *)PTR_malloc_12121e5c)(0x20));
  uVar5 = (undefined4)(_UNK_119e9964);
  uVar4 = (undefined4)(_UNK_119e9960);
  uVar3 = (undefined4)(_UNK_119e995c);
  if ((undefined4 *)(puVar6) != (undefined4 *)0x0) {
    *puVar6 = (undefined4)(_DAT_119e9958);
    puVar6[1] = (undefined4)(uVar3);
    puVar6[2] = (undefined4)(uVar4);
    puVar6[3] = (undefined4)(uVar5);
    uVar5 = (undefined4)(_UNK_119e9974);
    uVar4 = (undefined4)(_UNK_119e9970);
    uVar3 = (undefined4)(_UNK_119e996c);
    puVar6[4] = (undefined4)(_DAT_119e9968);
    puVar6[5] = (undefined4)(uVar3);
    puVar6[6] = (undefined4)(uVar4);
    puVar6[7] = (undefined4)(uVar5);
  }
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    for (iVar2 = (int)(*(int *)(iVar1 + 0x1c)); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1c)) {
      iVar1 = (int)(iVar2);
    }
    *(undefined4 **)(iVar1 + 0x1c) = puVar6;
    return (undefined4 *)(puVar6);
  }
  *param_1 = (int)((int)puVar6);
  return (undefined4 *)(puVar6);
}


// Reference entry 112bf2b0; body size 168 bytes.
#line 1 "ENTRY_112bf2b0"

void FUN_112bf2b0(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_20 [28];
  undefined4 local_4;
  
  if (param_2 == 0) {
    if ((*(byte *)(param_1 + 5) & 0x80) == 0) {
      local_4 = (undefined4)(*(undefined4 *)(param_1[0xc] + 4));
      thunk_FUN_112c04d0(*param_1,local_20);
      *(undefined4 *)(param_1[0xc] + 4) = local_4;
    }
    iVar2 = (int)(param_1[0xc]);
    iVar3 = (int)(*(int *)(iVar2 + 4));
    if (iVar3 != 0) {
      do {
        uVar1 = (undefined2)(Ordinal_9(*(undefined2 *)(param_1 + 2)));
        *(undefined2 *)(*(int *)(iVar3 + 0x18) + 2) = uVar1;
        iVar3 = (int)(*(int *)(iVar3 + 0x1c));
      } while (iVar3 != 0);
      iVar2 = (int)(param_1[0xc]);
    }
  }
  else {
    thunk_FUN_112be080(param_1[0xc]);
    param_1[0xc] = (undefined4)(0);
    iVar2 = (int)(0);
  }
  (*(code *)param_1[3])(param_1[4],param_2,param_1[10],iVar2);
  (*(code *)PTR_free_12121e64)(param_1[1]);
  (*(code *)PTR_free_12121e64)(param_1);
  return;
}


// Reference entry 112bf390; body size 614 bytes.
#line 1 "ENTRY_112bf390"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_112bf390(byte *param_1,undefined4 param_2,byte *param_3,int *param_4,code *param_5,
                 undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  undefined4 uVar12;
  byte *local_2c;
  undefined4 local_28;
  code *local_24;
  undefined4 local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined8 local_10;
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_2c);
  iVar11 = (int)(*(int *)(param_3 + 4));
  local_24 = (code *)(param_5);
  local_2c = (byte *)(param_1);
  local_28 = (undefined4)(param_6);
  if (((iVar11 != 2) && (iVar11 != 0x17)) && (iVar11 != 0)) goto LAB_112bf560;
  bVar5 = (byte)(*param_1);
  bVar1 = (bool)(true);
  iVar8 = (int)(0);
  if (bVar5 != 0) {
    do {
      iVar7 = (int)(isdigit((uint)bVar5));
      if ((iVar7 == 0) && (*param_1 != 0x2e)) {
        bVar1 = (bool)(false);
        goto LAB_112bf419;
      }
      iVar7 = (int)(iVar8 + 1);
      if (*param_1 != 0x2e) {
        iVar7 = (int)(iVar8);
      }
      param_1 = (byte *)(param_1 + 1);
      bVar5 = (byte)(*param_1);
      iVar8 = (int)(iVar7);
    } while (bVar5 != 0);
    bVar1 = (bool)(true);
  }
LAB_112bf419:
  local_8 = (uint)(0);
  local_10 = (undefined8)(0);
  local_20 = (undefined4)(0);
  uStack_1c = (uint)(0);
  uStack_18 = (uint)(0);
  uStack_14 = (uint)(0);
  if (((iVar8 == 3) && (bVar1)) && (iVar8 = thunk_FUN_112b0da0(2,local_2c,&uStack_1c), 0 < iVar8)) {
    local_20 = (undefined4)(((uint)(*(uint *)((char *)&local_20 + 2)) << 16 | (uint)(2)));
    uVar6 = (undefined2)(Ordinal_9(param_2));
    local_20 = (undefined4)(((uint)(uVar6) << 16 | (uint)((short)local_20)));
    uVar12 = (undefined4)(0x10);
  }
  else {
    if ((iVar11 != 0x17) && (iVar11 != 0)) {
LAB_112bf560:
      thunk_FUN_1148ac28();
      return;
    }
    iVar11 = (int)(thunk_FUN_112b0da0(0x17,local_2c,&uStack_18));
    local_20 = (undefined4)(((uint)(*(uint *)((char *)&local_20 + 2)) << 16 | (uint)(0x17)));
    uVar6 = (undefined2)(Ordinal_9(param_2));
    local_20 = (undefined4)(((uint)(uVar6) << 16 | (uint)((short)local_20)));
    uVar12 = (undefined4)(0x1c);
    if (iVar11 < 1) goto LAB_112bf560;
  }
  puVar9 = (undefined4 *)((undefined4 *)(*(code *)PTR_malloc_12121e5c)(0x20));
  uVar4 = (undefined4)(_UNK_119e9964);
  uVar3 = (undefined4)(_UNK_119e9960);
  uVar2 = (undefined4)(_UNK_119e995c);
  if ((undefined4 *)(puVar9) != (undefined4 *)0x0) {
    *puVar9 = (undefined4)(_DAT_119e9958);
    puVar9[1] = (undefined4)(uVar2);
    puVar9[2] = (undefined4)(uVar3);
    puVar9[3] = (undefined4)(uVar4);
    uVar4 = (undefined4)(_UNK_119e9974);
    uVar3 = (undefined4)(_UNK_119e9970);
    uVar2 = (undefined4)(_UNK_119e996c);
    puVar9[4] = (undefined4)(_DAT_119e9968);
    puVar9[5] = (undefined4)(uVar2);
    puVar9[6] = (undefined4)(uVar3);
    puVar9[7] = (undefined4)(uVar4);
    param_4[1] = (int)((int)puVar9);
    puVar10 = (uint *)((uint *)(*(code *)PTR_malloc_12121e5c)(uVar12));
    puVar9[6] = (undefined4)(puVar10);
    if ((uint *)(puVar10) != (uint *)0x0) {
      puVar9[5] = (undefined4)(uVar12);
      puVar9[2] = (undefined4)(local_20 & 0xffff);
      *puVar10 = (uint)(local_20);
      puVar10[1] = (uint)(uStack_1c);
      puVar10[2] = (uint)(uStack_18);
      puVar10[3] = (uint)(uStack_14);
      if ((short)local_20 != 2) {
        *(undefined8 *)(puVar10 + 4) = local_10;
        puVar10[6] = (uint)(local_8);
      }
      if ((*param_3 & 1) == 0) {
LAB_112bf5b5:
        (*local_24)(local_28,0,0,param_4);
        goto LAB_112bf5de;
      }
      puVar9 = (undefined4 *)((undefined4 *)(*(code *)PTR_malloc_12121e5c)(0x10));
      uVar3 = (undefined4)(_UNK_119e9954);
      uVar2 = (undefined4)(_UNK_119e9950);
      uVar12 = (undefined4)(_UNK_119e994c);
      if ((undefined4 *)(puVar9) != (undefined4 *)0x0) {
        *puVar9 = (undefined4)(_DAT_119e9948);
        puVar9[1] = (undefined4)(uVar12);
        puVar9[2] = (undefined4)(uVar2);
        puVar9[3] = (undefined4)(uVar3);
      }
      iVar11 = (int)(*param_4);
      if (iVar11 == 0) {
        *param_4 = (int)((int)puVar9);
      }
      else {
        for (iVar8 = (int)(*(int *)(iVar11 + 0xc)); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0xc)) {
          iVar11 = (int)(iVar8);
        }
        *(undefined4 **)(iVar11 + 0xc) = puVar9;
      }
      if ((undefined4 *)(puVar9) != (undefined4 *)0x0) {
        iVar11 = (int)(thunk_FUN_112ba770(local_2c));
        puVar9[2] = (undefined4)(iVar11);
        if (iVar11 != 0) goto LAB_112bf5b5;
      }
    }
  }
  thunk_FUN_112be080(param_4);
  (*local_24)(local_28,0xf,0,0);
LAB_112bf5de:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112bfd80; body size 1213 bytes.
#line 1 "ENTRY_112bfd80"

int FUN_112bfd80(int param_1,int param_2,void *param_3,size_t param_4,undefined4 param_5,
                undefined4 *param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  char *pcVar7;
  char *_Dest;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined1 *puVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  char *pcStack_40;
  undefined1 *local_3c;
  int local_38;
  char *local_34;
  int local_30;
  char *pcStack_2c;
  int iStack_28;
  char *pcStack_24;
  int iStack_20;
  undefined1 *local_1c;
  int iStack_18;
  int iStack_14;
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  undefined1 *puStack_4;
  
  iVar15 = (int)(0);
  *param_6 = (undefined4)(0);
  iVar14 = (int)(8);
  local_38 = (int)(8);
  if ((param_2 < 0xc) ||
     (local_10 = (uint)((uint)(*(undefined1 *)(param_1 + 6)) << 8 | (uint)(*(undefined1 *)(param_1 + 7))),
     ((uint)(*(undefined1 *)(param_1 + 4)) << 8 | (uint)(*(undefined1 *)(param_1 + 5))) != 1)) {
    return (int)(10);
  }
  iVar6 = (int)(thunk_FUN_112bd1c0(param_1 + 0xc,param_1,param_2,&local_34,&local_30));
  if (iVar6 != 0) {
    return (int)(iVar6);
  }
  local_1c = (undefined1 *)((undefined1 *)(param_1 + param_2));
  local_3c = (undefined1 *)((undefined1 *)(local_30 + 0x10 + param_1));
  if (local_1c < local_3c) {
    (*(code *)PTR_free_12121e64)(local_34);
    return (int)(10);
  }
  pcVar13 = (char *)((char *)0x0);
  iVar6 = (int)((*(code *)PTR_malloc_12121e5c)(0x20));
  if (iVar6 == 0) {
    (*(code *)PTR_free_12121e64)(local_34);
    return (int)(0xf);
  }
  iStack_14 = (int)(0);
  if (local_10 != 0) {
    do {
      iStack_28 = (int)(iVar15);
      pcStack_24 = (char *)(pcVar13);
      iStack_20 = (int)(iVar6);
      iStack_18 = (int)(iVar14);
      iVar14 = (int)(thunk_FUN_112bd1c0(local_3c,param_1,param_2,&pcStack_40,&local_30));
      iVar4 = (int)(iStack_20);
      pcVar2 = (char *)(pcStack_24);
      iVar8 = (int)(iStack_28);
      if (iVar14 != 0) goto LAB_112c01e1;
      puVar12 = (undefined1 *)(local_3c + local_30);
      puVar1 = (undefined1 *)(puVar12 + 10);
      puStack_4 = (undefined1 *)(puVar1);
      if (local_1c < puVar1) {
LAB_112c01c8:
        (*(code *)PTR_free_12121e64)(pcStack_40);
        iVar14 = (int)(10);
        goto LAB_112c01e1;
      }
      uStack_8 = (uint)((uint)((uint)(*puVar12) << 8 | (uint)(puVar12[1])));
      uStack_c = (uint)((uint)((uint)(puVar12[2]) << 8 | (uint)(puVar12[3])));
      local_3c = (undefined1 *)(puVar1 + ((uint)(puVar12[8]) << 8 | (uint)(puVar12[9])));
      if (local_1c < local_3c) goto LAB_112c01c8;
      if (uStack_c == 1) {
        if (uStack_8 == 0xc) {
          iVar14 = (int)(_stricmp(pcStack_40,local_34));
          if (iVar14 != 0) goto LAB_112c0042;
          iVar14 = (int)(thunk_FUN_112bd1c0(puVar1,param_1,param_2,&pcStack_2c,&local_30));
          if (iVar14 == 0) {
            if ((char *)(pcVar13) != (char *)0x0) {
              (*(code *)PTR_free_12121e64)(pcVar13);
            }
            pcVar13 = (char *)(pcStack_2c);
            pcVar2 = (char *)(pcStack_2c + 1);
            pcVar7 = (char *)(pcStack_2c);
            do {
              cVar3 = (char)(*pcVar7);
              pcVar7 = (char *)(pcVar7 + 1);
            } while (cVar3 != '\0');
            _Dest = (char *)((char *)(*(code *)PTR_malloc_12121e5c)(pcVar7 + (1 - (int)pcVar2)));
            *(char **)(iVar6 + iVar15 * 4) = _Dest;
            if ((char *)(_Dest) != (char *)0x0) {
              strncpy(_Dest,pcStack_2c,(size_t)(pcVar7 + (1 - (int)pcVar2)));
              iVar15 = (int)(iVar15 + 1);
              if (iVar15 < local_38) goto LAB_112c0042;
              iVar14 = (int)(local_38 * 2);
              iVar8 = (int)(local_38 * 8);
              local_38 = (int)(iVar14);
              iVar8 = (int)((*(code *)PTR_realloc_12121e60)(iVar6,iVar8));
              if (iVar8 != 0) {
                (*(code *)PTR_free_12121e64)();
                iVar6 = (int)(iVar8);
                goto LAB_112c0057;
              }
            }
            (*(code *)PTR_free_12121e64)(pcStack_40);
            iVar14 = (int)(0xf);
          }
          else {
            (*(code *)PTR_free_12121e64)(pcStack_40);
          }
          goto LAB_112c01e1;
        }
        local_38 = (int)(iStack_18);
        pcVar13 = (char *)(pcStack_24);
        iVar15 = (int)(iStack_28);
        iVar6 = (int)(iStack_20);
        if (uStack_8 != 5) goto LAB_112c0042;
        iVar14 = (int)(thunk_FUN_112bd1c0(puVar1,param_1,param_2,&pcStack_2c,&local_30));
        if (iVar14 != 0) {
          (*(code *)PTR_free_12121e64)(pcStack_40);
          pcVar13 = (char *)(pcStack_24);
          iVar15 = (int)(iStack_28);
          iVar6 = (int)(iStack_20);
          goto LAB_112c01e1;
        }
        (*(code *)PTR_free_12121e64)(local_34);
        local_34 = (char *)(pcStack_2c);
        (*(code *)PTR_free_12121e64)(pcStack_40);
        local_38 = (int)(iStack_18);
        pcVar13 = (char *)(pcVar2);
        iVar14 = (int)(iStack_18);
        iVar15 = (int)(iVar8);
        iVar6 = (int)(iVar4);
      }
      else {
LAB_112c0042:
        iVar14 = (int)(local_38);
        (*(code *)PTR_free_12121e64)(pcStack_40);
      }
LAB_112c0057:
      iStack_14 = (int)(iStack_14 + 1);
    } while (iStack_14 < (int)local_10);
    if ((char *)(pcVar13) != (char *)0x0) {
      puVar9 = (undefined4 *)((undefined4 *)(*(code *)PTR_malloc_12121e5c)(0x10));
      if ((undefined4 *)(puVar9) != (undefined4 *)0x0) {
        iVar14 = (int)((*(code *)PTR_malloc_12121e5c)(8));
        puVar9[3] = (undefined4)(iVar14);
        if (iVar14 != 0) {
          uVar10 = (undefined4)((*(code *)PTR_malloc_12121e5c)(param_4));
          *(undefined4*)puVar9[3] = (undefined4)((undefined4)(uVar10));
          piVar11 = (int *)((int *)puVar9[3]);
          if (*piVar11 != 0) {
            iVar14 = (int)((*(code *)PTR_malloc_12121e5c)(iVar15 * 4 + 4));
            puVar9[1] = (undefined4)(iVar14);
            if (iVar14 != 0) {
              iVar8 = (int)(0);
              *puVar9 = (undefined4)(pcVar13);
              if (0 < iVar15) {
                do {
                  *(undefined4 *)(puVar9[1] + iVar8 * 4) = *(undefined4 *)(iVar6 + iVar8 * 4);
                  iVar8 = (int)(iVar8 + 1);
                } while (iVar8 < iVar15);
                iVar14 = (int)(puVar9[1]);
              }
              *(undefined4 *)(iVar15 * 4 + iVar14) = 0;
              uVar5 = (undefined2)(thunk_FUN_112b9dd0(param_5));
              *(undefined2 *)(puVar9 + 2) = uVar5;
              uVar5 = (undefined2)(thunk_FUN_112b9dd0(param_4));
              *(undefined2 *)((int)puVar9 + 10) = uVar5;
              memcpy(*(void **)puVar9[3],param_3,param_4);
              *(undefined4 *)(puVar9[3] + 4) = 0;
              *param_6 = (undefined4)(puVar9);
              (*(code *)PTR_free_12121e64)(iVar6);
              (*(code *)PTR_free_12121e64)(local_34);
              return (int)(0);
            }
            (*(code *)PTR_free_12121e64)(*(undefined4 *)puVar9[3]);
            piVar11 = (int *)((int *)puVar9[3]);
          }
          (*(code *)PTR_free_12121e64)(piVar11);
        }
        (*(code *)PTR_free_12121e64)(puVar9);
      }
      iVar14 = (int)(0xf);
      goto LAB_112c01e1;
    }
  }
  iVar14 = (int)(1);
LAB_112c01e1:
  param_2 = (int)(0);
  if (0 < iVar15) {
    do {
      iVar8 = (int)(*(int *)(iVar6 + param_2 * 4));
      if (iVar8 != 0) {
        (*(code *)PTR_free_12121e64)(iVar8);
      }
      param_2 = (int)(param_2 + 1);
    } while (param_2 < iVar15);
  }
  (*(code *)PTR_free_12121e64)(iVar6);
  if ((char *)(pcVar13) != (char *)0x0) {
    (*(code *)PTR_free_12121e64)(pcVar13);
  }
  (*(code *)PTR_free_12121e64)(local_34);
  return (int)(iVar14);
}


// Reference entry 112c0390; body size 69 bytes.
#line 1 "ENTRY_112c0390"

undefined4 FUN_112c0390(short *param_1)

{
  if (((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) &&
      ((param_1[3] == 0 && (param_1[4] == 0)))) &&
     ((param_1[5] == 0 && ((param_1[6] == 0 && (param_1[7] == 0x100)))))) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 112c0420; body size 75 bytes.
#line 1 "ENTRY_112c0420"

undefined4 FUN_112c0420(short *param_1)

{
  if (((((*param_1 != 0) || (param_1[1] != 0)) || (param_1[2] != 0)) ||
      ((param_1[3] != 0 || (param_1[4] != 0)))) || (param_1[5] != 0)) {
    return (undefined4)(0);
  }
  if ((param_1[6] == 0) && ((char)param_1[7] == '\0')) {
    if (*(char *)((int)param_1 + 0xf) == '\0') {
      return (undefined4)(0);
    }
    if (*(char *)((int)param_1 + 0xf) == '\x01') {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 112c0870; body size 214 bytes.
#line 1 "ENTRY_112c0870"

undefined4 FUN_112c0870(short *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  if (*param_1 == 2) {
    return (undefined4)(4);
  }
  if (*param_1 == 0x17) {
    piVar1 = (int *)((int *)(param_1 + 4));
    cVar3 = (char)(thunk_FUN_112c0390(piVar1));
    if (cVar3 != '\0') {
      return (undefined4)(0);
    }
    cVar3 = (char)(thunk_FUN_112c0480(piVar1));
    if (cVar3 != '\0') {
      return (undefined4)(4);
    }
    if (((char)*piVar1 == ' ') && (*(char *)((int)param_1 + 9) == '\x02')) {
      return (undefined4)(2);
    }
    iVar2 = (int)(*piVar1);
    iVar4 = (int)(Ordinal_14(0x20010000));
    if (iVar2 == iVar4) {
      return (undefined4)(5);
    }
    if (((byte)iVar2 & 0xfe) == 0xfc) {
      return (undefined4)(0xd);
    }
    cVar3 = (char)(thunk_FUN_112c0420(piVar1));
    if (cVar3 != '\0') {
      return (undefined4)(3);
    }
    cVar3 = (char)(thunk_FUN_112c0400(piVar1));
    if (cVar3 != '\0') {
      return (undefined4)(0xb);
    }
    if (((byte)iVar2 == 0x3f) && ((char)((uint)iVar2 >> 8) == -2)) {
      return (undefined4)(0xc);
    }
  }
  return (undefined4)(1);
}


// Reference entry 112c0980; body size 195 bytes.
#line 1 "ENTRY_112c0980"

undefined4 FUN_112c0980(short *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  if (*param_1 == 2) {
    return (undefined4)(0x23);
  }
  if (*param_1 == 0x17) {
    piVar1 = (int *)((int *)(param_1 + 4));
    cVar3 = (char)(thunk_FUN_112c0390(piVar1));
    if (cVar3 != '\0') {
      return (undefined4)(0x32);
    }
    cVar3 = (char)(thunk_FUN_112c0480(piVar1));
    if (cVar3 != '\0') {
      return (undefined4)(0x23);
    }
    if (((char)*piVar1 == ' ') && (*(char *)((int)param_1 + 9) == '\x02')) {
      return (undefined4)(0x1e);
    }
    iVar2 = (int)(*piVar1);
    iVar4 = (int)(Ordinal_14(0x20010000));
    if (iVar2 == iVar4) {
      return (undefined4)(5);
    }
    if (((byte)iVar2 & 0xfe) == 0xfc) {
      return (undefined4)(3);
    }
    cVar3 = (char)(thunk_FUN_112c0420(piVar1));
    if (((cVar3 == '\0') && (cVar3 = thunk_FUN_112c0400(piVar1), cVar3 == '\0')) &&
       (((byte)iVar2 != 0x3f || ((char)((uint)iVar2 >> 8) != -2)))) {
      return (undefined4)(0x28);
    }
  }
  return (undefined4)(1);
}


// Reference entry 112c0a80; body size 140 bytes.
#line 1 "ENTRY_112c0a80"

byte FUN_112c0a80(short *param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  
  if (*param_1 == 0x17) {
    sVar1 = (short)(param_1[4]);
    if ((char)sVar1 == -1) {
      return (byte)(*(byte *)((int)param_1 + 9) & 0xf);
    }
    cVar2 = (char)(thunk_FUN_112c0390(param_1 + 4));
    if (cVar2 == '\0') {
      if ((char)sVar1 == -2) {
        bVar3 = (byte)(*(byte *)((int)param_1 + 9) & 0xc0);
        if (bVar3 == 0x80) {
          return (byte)(2);
        }
        if (bVar3 == 0xc0) {
          return (byte)(5);
        }
      }
      return (byte)(0xe);
    }
  }
  else {
    if (*param_1 != 2) {
      return (byte)(1);
    }
    uVar4 = (uint)(Ordinal_14(*(undefined4 *)(param_1 + 2)));
    if (((uVar4 & 0xff000000) != 0x7f000000) && ((uVar4 & 0xffff0000) != 0xa9fe0000)) {
      return (byte)(0xe);
    }
  }
  return (byte)(2);
}


// Reference entry 112c1a20; body size 149 bytes.
#line 1 "ENTRY_112c1a20"

undefined4 FUN_112c1a20(int param_1,int *param_2,byte param_3)

{
  undefined4 uVar1;
  
  if ((*param_2 != 1) && (*param_2 != 2)) {
    if (param_3 != 0x3a) {
      return (undefined4)(6);
    }
    *(undefined4 *)(param_1 + 0x458) = 5;
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(0);
  if (param_3 == 0x22) {
    uVar1 = (undefined4)((**(code **)(param_1 + 0x440))(param_1,1,param_2));
    *(undefined4 *)(param_1 + 0x438) = 0;
    *param_2 = (int)(0);
  }
  else {
    if (param_3 == 0x5c) {
      uVar1 = (undefined4)((**(code **)(param_1 + 0x440))(param_1,2,param_2));
      *(undefined4 *)(param_1 + 0x458) = 8;
      return (undefined4)(uVar1);
    }
    if (param_3 < 0x20) {
      return (undefined4)(4);
    }
  }
  return (undefined4)(uVar1);
}


// Reference entry 112c1ae0; body size 193 bytes.
#line 1 "ENTRY_112c1ae0"

undefined4 FUN_112c1ae0(int param_1,int *param_2,byte param_3)

{
  undefined4 uVar1;
  
  if ((*param_2 == 1) || (*param_2 == 2)) {
    uVar1 = (undefined4)(0);
    if (param_3 == 0x22) {
      uVar1 = (undefined4)((**(code **)(param_1 + 0x440))(param_1,1,param_2));
      *(undefined4 *)(param_1 + 0x438) = 0;
      *param_2 = (int)(0);
      return (undefined4)(uVar1);
    }
    if (param_3 == 0x5c) {
      uVar1 = (undefined4)((**(code **)(param_1 + 0x440))(param_1,2,param_2));
      *(undefined4 *)(param_1 + 0x458) = 8;
    }
    else if (param_3 < 0x20) {
      return (undefined4)(4);
    }
    return (undefined4)(uVar1);
  }
  if (param_3 == 0x2c) {
    *(undefined4 *)(param_1 + 0x458) = 6;
    return (undefined4)(0);
  }
  if (param_3 != 0x5d) {
    if (param_3 != 0x7d) {
      return (undefined4)(6);
    }
    *(undefined4 *)(param_1 + 0x458) = 4;
    return (undefined4)(0);
  }
  *(undefined4 *)(param_1 + 0x458) = 3;
  return (undefined4)(0);
}


// Reference entry 112c27a0; body size 73 bytes.
#line 1 "ENTRY_112c27a0"

undefined4 FUN_112c27a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x458) = 1;
  *param_2 = (undefined4)(5);
  uVar2 = (uint)(*(int *)(param_1 + 0x450) + 1);
  if (*(uint *)(param_1 + 0x454) <= (uint)(uVar2)) {
    return (undefined4)(1);
  }
  uVar1 = (undefined4)((**(code **)(param_1 + 0x440))(param_1,0,param_2));
  *(uint *)(param_1 + 0x450) = uVar2;
  return (undefined4)(uVar1);
}


// Reference entry 112c28f0; body size 74 bytes.
#line 1 "ENTRY_112c28f0"

void FUN_112c28f0(undefined1 *param_1,undefined4 *param_2,undefined1 param_3)

{
  *param_1 = (undefined1)(param_3);
  *(undefined1 **)(param_1 + 0x44c) = param_1 + 1;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0xb;
  *param_2 = (undefined4)(3);
                    
                    
  (**(code **)(param_1 + 0x440))();
  return;
}


// Reference entry 112c2950; body size 73 bytes.
#line 1 "ENTRY_112c2950"

undefined4 FUN_112c2950(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x458) = 2;
  *param_2 = (undefined4)(4);
  uVar2 = (uint)(*(int *)(param_1 + 0x450) + 1);
  if (*(uint *)(param_1 + 0x454) <= (uint)(uVar2)) {
    return (undefined4)(1);
  }
  uVar1 = (undefined4)((**(code **)(param_1 + 0x440))(param_1,0,param_2));
  *(uint *)(param_1 + 0x450) = uVar2;
  return (undefined4)(uVar1);
}


// Reference entry 112c29b0; body size 73 bytes.
#line 1 "ENTRY_112c29b0"

void FUN_112c29b0(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(10);
  if (param_3 == 2) {
    uVar1 = (undefined4)(7);
  }
  *(undefined4 *)(param_1 + 0x458) = uVar1;
  *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x448) + 1;
  *param_2 = (int)(param_3);
                    
                    
  (**(code **)(param_1 + 0x440))();
  return;
}


// Reference entry 112c2ac0; body size 84 bytes.
#line 1 "ENTRY_112c2ac0"

void FUN_112c2ac0(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined1 *)((undefined1 *)(param_1 + 1));
  *puVar1 = (undefined1)(0);
  *(undefined1 **)(param_1 + 0x44c) = puVar1;
  *(undefined1 **)(param_1 + 0x448) = puVar1;
  *(int *)(param_1 + 0x438) = param_1;
  (**(code **)(param_1 + 0x440))(param_1,2,param_2);
  uVar3 = (undefined4)(10);
  iVar2 = (int)(*param_2);
  *(undefined4 *)(param_1 + 0x438) = 0;
  if (iVar2 == 2) {
    uVar3 = (undefined4)(7);
  }
  *(undefined4 *)(param_1 + 0x458) = uVar3;
  return;
}


// Reference entry 112c2b50; body size 105 bytes.
#line 1 "ENTRY_112c2b50"

undefined4 FUN_112c2b50(char *param_1,undefined4 *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x44c));
  param_1[0x45c] = (char)('\0');
  param_1[0x45d] = (char)('\0');
  if (param_1 + 0x436 <= pcVar1) {
    return (undefined4)(7);
  }
  *pcVar1 = (char)('\0');
  *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x44c) + 1;
  iVar2 = (int)(strncmp(param_3,param_1,0x436));
  if (iVar2 != 0) {
    return (undefined4)(4);
  }
  uVar3 = (undefined4)((**(code **)(param_1 + 0x440))(param_1,1,param_2));
  *param_2 = (undefined4)(0);
  return (undefined4)(uVar3);
}


// Reference entry 112c2c00; body size 102 bytes.
#line 1 "ENTRY_112c2c00"

undefined4 FUN_112c2c00(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined2 *)(param_1 + 0x45c) = 0;
  if ((undefined1 *)(param_1 + 0x436) <= *(undefined1 **)(param_1 + 0x44c)) {
    return (undefined4)(7);
  }
  **(undefined1 **)(param_1 + 0x44c) = 0;
  *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x44c) + 1;
  cVar1 = (char)(thunk_FUN_1145c2a0(param_1,param_1 + 0x438));
  if (cVar1 == '\0') {
    return (undefined4)(5);
  }
  uVar2 = (undefined4)((**(code **)(param_1 + 0x440))(param_1,1,param_2));
  *param_2 = (undefined4)(0);
  return (undefined4)(uVar2);
}


// Reference entry 112c2c80; body size 81 bytes.
#line 1 "ENTRY_112c2c80"

undefined4 FUN_112c2c80(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)(*(int *)(param_1 + 0x450));
  if ((iVar2 != 0) && (piVar1 = (int *)(param_1 + 0x45c + iVar2 * 4), (int *)(piVar1) != (int *)0x0)) {
    if (*piVar1 != 4) {
      return (undefined4)(6);
    }
    if ((int *)(piVar1) != (int *)0x0) {
      *(int *)(param_1 + 0x450) = iVar2 + -1;
      uVar3 = (undefined4)((**(code **)(param_1 + 0x440))(param_1,1,piVar1));
      *piVar1 = (int)(0);
      return (undefined4)(uVar3);
    }
  }
  return (undefined4)(1);
}


// Reference entry 112c35f0; body size 222 bytes.
#line 1 "ENTRY_112c35f0"

int FUN_112c35f0(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if ((undefined1 *)(param_2) == (undefined1 *)0x0) {
    iVar2 = (int)(FUN_112c2fe0(param_1,1));
    return (int)(iVar2);
  }
  puVar4 = (undefined1 *)(param_2 + param_3);
  iVar2 = (int)(*(int *)(param_1 + 0x460 + *(int *)(param_1 + 0x450) * 4));
  if ((iVar2 == 1) || (iVar2 == 2)) {
    *(undefined1 **)(param_1 + 0x438) = param_2;
  }
  while( true ) {
    if ((undefined1 *)(param_2) == (undefined1 *)(puVar4)) {
      *(undefined1 **)(param_1 + 0x448) = puVar4;
      iVar2 = (int)(FUN_112c2fe0(param_1,0));
      return (int)(iVar2);
    }
    uVar1 = (undefined1)(*param_2);
    iVar2 = (int)(param_1 + (*(int *)(param_1 + 0x450) + 0x118) * 4);
    if (((*(int *)(param_1 + 0x458) == 7) || (*(int *)(param_1 + 0x458) == 10)) &&
       (*(int *)(param_1 + 0x438) == 0)) {
      *(undefined1 **)(param_1 + 0x438) = param_2;
    }
    *(undefined1 **)(param_1 + 0x448) = param_2;
    iVar3 = (int)(FUN_112c33c0(param_1,iVar2,uVar1));
    if (iVar3 != 0) break;
    param_2 = (undefined1 *)(param_2 + 1);
  }
  *(int *)(param_1 + 0x438) = iVar3;
  (**(code **)(param_1 + 0x440))(param_1,3,iVar2);
  return (int)(iVar3);
}


// Reference entry 112c3710; body size 103 bytes.
#line 1 "ENTRY_112c3710"

void FUN_112c3710(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x444) = param_3;
  *(undefined2 *)(param_1 + 0x45c) = 0;
  *(int *)(param_1 + 0x454) = param_2;
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(int *)(param_1 + 0x44c) = param_1;
  *(undefined4 *)(param_1 + 0x458) = 0;
  memset((void *)(param_1 + 0x460),0,param_2 * 4);
  return;
}


// Reference entry 112c3860; body size 114 bytes.
#line 1 "ENTRY_112c3860"

void __thiscall Recovered_Bulk::FUN_112c3860(undefined4 *param_2)
{
  uint *param_1 = (uint *)this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_1c);
  local_c = (undefined4)(0);
  uStack_8 = (undefined4)(0xf);
  local_1c = (uint)(local_1c & 0xffffff00);
  *(undefined1 *)(param_1 + 6) = 0;
  pcVar2 = (char *)((char *)*param_2);
  pcVar3 = (char *)(pcVar2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  *param_1 = (uint)(local_1c);
  param_1[1] = (uint)(uStack_18);
  param_1[2] = (uint)(uStack_14);
  param_1[3] = (uint)(uStack_10);
  *(ulonglong *)(param_1 + 4) = ((unsigned long long)(uStack_8) << 32 | (unsigned long long)(local_c));
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112c38f0; body size 114 bytes.
#line 1 "ENTRY_112c38f0"

void __thiscall Recovered_Bulk::FUN_112c38f0(undefined4 *param_2)
{
  uint *param_1 = (uint *)this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_1c);
  local_c = (undefined4)(0);
  uStack_8 = (undefined4)(0xf);
  local_1c = (uint)(local_1c & 0xffffff00);
  *(undefined1 *)(param_1 + 6) = 0;
  pcVar2 = (char *)((char *)*param_2);
  pcVar3 = (char *)(pcVar2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  *param_1 = (uint)(local_1c);
  param_1[1] = (uint)(uStack_18);
  param_1[2] = (uint)(uStack_14);
  param_1[3] = (uint)(uStack_10);
  *(ulonglong *)(param_1 + 4) = ((unsigned long long)(uStack_8) << 32 | (unsigned long long)(local_c));
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112c3ea0; body size 507 bytes.
#line 1 "ENTRY_112c3ea0"

void FUN_112c3ea0(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *local_44;
  char *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint auStack_20 [8];
  
  auStack_20[7] = (uint)(DAT_12126b84 ^ (uint)&local_44);
  local_44 = (longlong *)(param_1);
  if (param_2[4] == 9) {
    local_28 = (uint)(0);
    uStack_24 = (uint)(0);
    auStack_20[0] = (uint)(0);
    auStack_20[1] = (uint)(0);
    auStack_20[6] = (uint)(0);
    auStack_20[2] = (uint)(0);
    auStack_20[3] = (uint)(0);
    auStack_20[4] = (uint)(0);
    auStack_20[5] = (uint)(0);
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)((undefined4 *)*param_2);
    }
    iVar4 = (int)(thunk_FUN_101b9160(param_2,"T%02d:%02d:%02d",auStack_20,&uStack_24,&local_28));
    if (iVar4 == 3) {
      if (((auStack_20[0] < 0x18) && (uStack_24 < 0x3c)) && (local_28 < 0x3c)) {
        *(undefined1 *)(param_1 + 3) = 1;
        *param_1 = (longlong)((longlong)(int)(uStack_24 + auStack_20[0] * 0x3c) * 0x3c +
                   (longlong)(int)local_28);
        thunk_FUN_1148ac28();
        return;
      }
      *(undefined1 *)(param_1 + 3) = 0;
      local_40 = (char *)((char *)thunk_FUN_1012cab0(0x30));
      uVar3 = (undefined4)(*(uint *)((char *)&s_Time_value_is_outside_the_valid_r_119e9acc + 12));
      uVar2 = (undefined4)(*(uint *)((char *)&s_Time_value_is_outside_the_valid_r_119e9acc + 8));
      uVar1 = (undefined4)(*(uint *)((char *)&s_Time_value_is_outside_the_valid_r_119e9acc + 4));
      local_30 = (undefined4)(0x26);
      uStack_2c = (undefined4)(0x2f);
      *(undefined4*)local_40 = (undefined4)((char *)(*(uint *)((char *)&s_Time_value_is_outside_the_valid_r_119e9acc + 0)));
      *(undefined4 *)(local_40 + 4) = uVar1;
      *(undefined4 *)(local_40 + 8) = uVar2;
      *(undefined4 *)(local_40 + 0xc) = uVar3;
      uVar3 = (undefined4)(*(uint *)((char *)&s_Time_value_is_outside_the_valid_r_119e9acc + 28));
      uVar2 = (undefined4)(*(uint *)((char *)&s_Time_value_is_outside_the_valid_r_119e9acc + 24));
      uVar1 = (undefined4)(*(uint *)((char *)&s_Time_value_is_outside_the_valid_r_119e9acc + 20));
      *(undefined4 *)(local_40 + 0x10) = *(uint *)((char *)&s_Time_value_is_outside_the_valid_r_119e9acc + 16);
      *(undefined4 *)(local_40 + 0x14) = uVar1;
      *(undefined4 *)(local_40 + 0x18) = uVar2;
      *(undefined4 *)(local_40 + 0x1c) = uVar3;
      *(undefined4 *)(local_40 + 0x20) = *(uint *)((char *)&s_Time_value_is_outside_the_valid_r_119e9acc + 32);
      *(undefined2 *)(local_40 + 0x24) = *(uint *)((char *)&s_Time_value_is_outside_the_valid_r_119e9acc + 36);
      local_40[0x26] = (char)('\0');
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(char**)param_1 = (char *)((longlong *)(local_40));
      *(undefined4 *)((int)param_1 + 4) = uStack_3c;
      *(undefined4 *)(param_1 + 1) = uStack_38;
      *(undefined4 *)((int)param_1 + 0xc) = uStack_34;
      param_1[2] = (longlong)(0x2f00000026);
      thunk_FUN_1148ac28();
      return;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    local_40 = (char *)((char *)thunk_FUN_1012cab0(0x20));
    uVar3 = (undefined4)(*(uint *)((char *)&s_Unable_to_parse_time_values__119e9aa8 + 12));
    uVar2 = (undefined4)(*(uint *)((char *)&s_Unable_to_parse_time_values__119e9aa8 + 8));
    uVar1 = (undefined4)(*(uint *)((char *)&s_Unable_to_parse_time_values__119e9aa8 + 4));
    local_30 = (undefined4)(0x1c);
    uStack_2c = (undefined4)(0x1f);
    *(undefined4*)local_40 = (undefined4)((char *)(*(uint *)((char *)&s_Unable_to_parse_time_values__119e9aa8 + 0)));
    *(undefined4 *)(local_40 + 4) = uVar1;
    *(undefined4 *)(local_40 + 8) = uVar2;
    *(undefined4 *)(local_40 + 0xc) = uVar3;
    *(undefined8 *)(local_40 + 0x10) = *(uint *)((char *)&s_Unable_to_parse_time_values__119e9aa8 + 16);
    *(undefined4 *)(local_40 + 0x18) = *(uint *)((char *)&s_Unable_to_parse_time_values__119e9aa8 + 24);
    local_40[0x1c] = (char)('\0');
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
    local_40 = (char *)((char *)thunk_FUN_1012cab0(0x30));
    uVar3 = (undefined4)(*(uint *)((char *)&s_Invalid_ISO_8601_localtime_forma_119e9a7c + 12));
    uVar2 = (undefined4)(*(uint *)((char *)&s_Invalid_ISO_8601_localtime_forma_119e9a7c + 8));
    uVar1 = (undefined4)(*(uint *)((char *)&s_Invalid_ISO_8601_localtime_forma_119e9a7c + 4));
    local_30 = (undefined4)(0x22);
    uStack_2c = (undefined4)(0x2f);
    *(undefined4*)local_40 = (undefined4)((char *)(*(uint *)((char *)&s_Invalid_ISO_8601_localtime_forma_119e9a7c + 0)));
    *(undefined4 *)(local_40 + 4) = uVar1;
    *(undefined4 *)(local_40 + 8) = uVar2;
    *(undefined4 *)(local_40 + 0xc) = uVar3;
    uVar3 = (undefined4)(*(uint *)((char *)&s_Invalid_ISO_8601_localtime_forma_119e9a7c + 28));
    uVar2 = (undefined4)(*(uint *)((char *)&s_Invalid_ISO_8601_localtime_forma_119e9a7c + 24));
    uVar1 = (undefined4)(*(uint *)((char *)&s_Invalid_ISO_8601_localtime_forma_119e9a7c + 20));
    *(undefined4 *)(local_40 + 0x10) = *(uint *)((char *)&s_Invalid_ISO_8601_localtime_forma_119e9a7c + 16);
    *(undefined4 *)(local_40 + 0x14) = uVar1;
    *(undefined4 *)(local_40 + 0x18) = uVar2;
    *(undefined4 *)(local_40 + 0x1c) = uVar3;
    *(undefined2 *)(local_40 + 0x20) = *(uint *)((char *)&s_Invalid_ISO_8601_localtime_forma_119e9a7c + 32);
    local_40[0x22] = (char)('\0');
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(char**)param_1 = (char *)((longlong *)(local_40));
  *(undefined4 *)((int)param_1 + 4) = uStack_3c;
  *(undefined4 *)(param_1 + 1) = uStack_38;
  *(undefined4 *)((int)param_1 + 0xc) = uStack_34;
  param_1[2] = (longlong)(((unsigned long long)(uStack_2c) << 32 | (unsigned long long)(local_30)));
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112c42d0; body size 158 bytes.
#line 1 "ENTRY_112c42d0"

char FUN_112c42d0(undefined4 *param_1,undefined4 *param_2)

{
 try {
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = (undefined4 *)(param_2);

  uVar3 = (uint)(DAT_12126b84);

  puVar5 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar5 = (undefined4 *)((undefined4 *)*param_1);
  }
  iVar1 = (int)(param_1[4]);

  param_1 = (undefined4 *)((undefined4 *)(((iVar1 + 2U) / 3) * 4 + 1));
  thunk_FUN_10c7fcd0(param_1,0);
  if (0xf < (uint)puVar4[5]) {
    puVar4 = (undefined4 *)((undefined4 *)*puVar4);
  }
  cVar2 = (char)(thunk_FUN_1145f1f0(puVar5,iVar1,puVar4,&param_1,uVar3));
  if (cVar2 != '\0') {
    thunk_FUN_10c7fcd0(param_1,0);
  }

  return (char)(cVar2);

 } catch (...) { }
}


// Reference entry 112c43a0; body size 140 bytes.
#line 1 "ENTRY_112c43a0"

char FUN_112c43a0(undefined4 param_1,int param_2,undefined4 *param_3)

{
 try {
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puVar4 = (undefined4 *)(param_3);
  iVar1 = (int)(param_2);


  uVar3 = (uint)(DAT_12126b84);

  param_2 = (int)(((param_2 + 2U) / 3) * 4 + 1);
  thunk_FUN_10c7fcd0(param_2,0);
  if (0xf < (uint)puVar4[5]) {
    puVar4 = (undefined4 *)((undefined4 *)*puVar4);
  }
  cVar2 = (char)(thunk_FUN_1145f1f0(param_1,iVar1,puVar4,&param_2,uVar3));
  if (cVar2 != '\0') {
    thunk_FUN_10c7fcd0(param_2,0);
  }

  return (char)(cVar2);

 } catch (...) { }
}


// Reference entry 112c46d0; body size 311 bytes.
#line 1 "ENTRY_112c46d0"

undefined1 * FUN_112c46d0(undefined1 *param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  void *pvVar5;
  char *pcVar6;
  uint _Size;
  char *_Dst;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  iVar2 = (int)(param_2[4] * 4);
  _Size = (uint)(iVar2 + 1);
  if (0x7fffffff < _Size) {
    thunk_FUN_10c7dc10(DAT_12126b84 );
LAB_112c4802:
                    
    thunk_FUN_1012a2a0();
  }
  if (_Size < 0x1000) {
    _Dst = (char *)(operator_new(_Size));
  }
  else {
    if (iVar2 + 0x24U <= _Size) goto LAB_112c4802;
    pvVar5 = (void *)(operator_new(iVar2 + 0x24U));
    if ((void *)(pvVar5) == (void *)0x0) goto LAB_112c47f7;
    _Dst = (char *)((char *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)(_Dst + -4) = pvVar5;
  }
  memset(_Dst,0,_Size);
  piVar1 = (int *)(param_2 + 4);
  if (*piVar1 != 0) {
    puVar4 = (undefined4 *)(param_2);
    if (0xf < (uint)param_2[5]) {
      puVar4 = (undefined4 *)((undefined4 *)*param_2);
      param_2 = (undefined4 *)((undefined4 *)*param_2);
    }
    memmove(_Dst,param_2,(int)puVar4 + (*piVar1 - (int)param_2));
    thunk_FUN_11069420(_Dst,1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = (undefined1)(0);
  pcVar6 = (char *)(_Dst);
  do {
    cVar3 = (char)(*pcVar6);
    pcVar6 = (char *)(pcVar6 + 1);
  } while (cVar3 != '\0');
  thunk_FUN_1012d130(_Dst,(int)pcVar6 - (int)(_Dst + 1));
  if ((char *)(_Dst) != (char *)0x0) {
    pcVar6 = (char *)(_Dst);
    if (0xfff < _Size) {
      pcVar6 = (char *)(*(char **)(_Dst + -4));
      _Size = (uint)(iVar2 + 0x24);
      if ((char *)0x1f < _Dst + (-4 - (int)pcVar6)) {
LAB_112c47f7:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pcVar6,_Size);
  }

  return (undefined1 *)(param_1);

 } catch (...) { }
}


// Reference entry 112c48e0; body size 94 bytes.
#line 1 "ENTRY_112c48e0"

int FUN_112c48e0(char *param_1,void *param_2,int param_3,size_t param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint _Size;
  
  sVar1 = (size_t)(strnlen(param_1,param_4));
  uVar2 = (uint)(param_3 - (int)param_2);
  if (sVar1 == param_4) {
    param_1[param_4 - 1] = (char)('\0');
    return (int)((param_4 - 1) + uVar2);
  }
  uVar3 = (uint)((param_4 - sVar1) - 1);
  _Size = (uint)(uVar2);
  if (uVar3 < uVar2) {
    _Size = (uint)(uVar3);
  }
  memcpy(param_1 + sVar1,param_2,_Size);
  (param_1 + sVar1)[_Size] = '\0';
  return (int)(sVar1 + uVar2);
}


// Reference entry 112c49f0; body size 124 bytes.
#line 1 "ENTRY_112c49f0"

int FUN_112c49f0(char *param_1,void *param_2,int param_3,size_t param_4)

{
  char *_Dst;
  size_t sVar1;
  uint uVar2;
  uint _Size;
  uint uVar3;
  
  sVar1 = (size_t)(strnlen(param_1,param_4));
  uVar2 = (uint)(param_3 - (int)param_2);
  _Dst = (char *)(param_1 + sVar1);
  if (sVar1 == param_4) {
    param_1[param_4 - 1] = (char)('\0');
    thunk_FUN_11069420(_Dst,0);
    return (int)((param_4 - 1) + uVar2);
  }
  uVar3 = (uint)((param_4 - sVar1) - 1);
  _Size = (uint)(uVar2);
  if (uVar3 < uVar2) {
    _Size = (uint)(uVar3);
  }
  memcpy(_Dst,param_2,_Size);
  _Dst[_Size] = (char)('\0');
  thunk_FUN_11069420(_Dst,0);
  return (int)(uVar2 + sVar1);
}


// Reference entry 112c4ae0; body size 332 bytes.
#line 1 "ENTRY_112c4ae0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_112c4ae0(undefined4 param_1)

{
 try {
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined1 *puVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 uStack_24;
  undefined4 uStack_14;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_50);
  local_48 = (undefined4)(param_1);


  local_50[0] = (undefined4)(0);
  local_44 = (undefined4)(_DAT_119e9b00);
  uStack_40 = (undefined4)(_UNK_119e9b04);
  uStack_3c = (undefined4)(_UNK_119e9b08);
  uStack_38 = (undefined4)(_UNK_119e9b0c);
  iVar3 = (int)(getaddrinfo());
  if (iVar3 == 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    do {
      if (*(int *)(puVar5 + 4) == 2) {
        iVar3 = (int)(*(int *)(puVar5 + 0x18));
        iVar4 = (int)(Ordinal_23(2,2,0));
        if (-1 < iVar4) {

          local_34 = (undefined8)(((unsigned long long)(*(undefined4 *)(iVar3 + 4)) << 32 | (unsigned long long)(2)));
          iVar3 = (int)(Ordinal_2(iVar4,&local_34,0x10));
          if (iVar3 == 0) {
            uVar1 = (undefined4)((undefined4)local_34);


            local_34 = (undefined8)((ulonglong)((unsigned long long)(2) << 32 | (unsigned long long)(uVar1)));
            uVar2 = (undefined2)(Ordinal_9(0x1b39));
            *(uint *)((char *)&local_34 + 0) = ((uint)(uVar2) << 16 | (uint)((undefined2)local_34));
            iVar3 = (int)(Ordinal_21(iVar4,0xffff,0x20,&stack0xffffff94,4));
            if (-1 < iVar3) {
              local_2c = (undefined8)(((unsigned long long)(*(uint *)((char *)&local_2c + 4)) << 32 | (unsigned long long)(0xffffffff)));
              Ordinal_20(iVar4,unaff_ESI,uStack_14,0,(int)&local_34 + 4,0x10);
            }
          }
          Ordinal_3(iVar4);
        }
      }
      puVar5 = (undefined1 *)(*(undefined1 **)(puVar5 + 0x1c));
    } while ((undefined1 *)(puVar5) != (undefined1 *)0x0);
    freeaddrinfo();
  }
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112c4f80; body size 313 bytes.
#line 1 "ENTRY_112c4f80"

undefined4 FUN_112c4f80(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint _Size;
  undefined4 uVar6;
  uint uVar7;
  int local_4;
  
  iVar5 = (int)(thunk_FUN_112c7fa0(param_1,param_2));
  if (iVar5 == 4) {
    bVar3 = (bool)(false);
    uVar7 = (uint)(2);
    local_4 = (int)(0);
    if (4 < param_2) {
      do {
        pcVar1 = (char *)((char *)(param_1 + uVar7));
        cVar2 = (char)(*pcVar1);
        uVar4 = (ushort)(Ordinal_15(*(undefined2 *)(param_1 + 1 + uVar7)));
        _Size = (uint)((uint)uVar4);
        uVar7 = (uint)(uVar7 + 3 + _Size);
        if (param_2 < uVar7) break;
        if ((bVar3) || (cVar2 != '\0')) {
          if ((local_4 == 0) && (cVar2 == '\x01')) {
            if (uVar4 == 4) {
              memcpy(param_5,pcVar1 + 3,4);
              uVar6 = (undefined4)(Ordinal_14(*param_5));
              *param_5 = (undefined4)(uVar6);
              local_4 = (int)(1);
            }
          }
          else if ((cVar2 == '\x0e') && (uVar4 == 4)) {
            memcpy(&local_4,pcVar1 + 3,4);
            uVar6 = (undefined4)(Ordinal_14(local_4));
            return (undefined4)(uVar6);
          }
        }
        else if (_Size <= *param_4) {
          memcpy(param_3,pcVar1 + 3,_Size);
          *param_4 = (uint)(_Size);
          bVar3 = (bool)(true);
        }
      } while (uVar7 + 3 <= param_2);
      if ((bVar3) && (local_4 != 0)) {
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 112c5110; body size 544 bytes.
#line 1 "ENTRY_112c5110"

undefined4
FUN_112c5110(int param_1,uint param_2,void *param_3,uint *param_4,void *param_5,int *param_6,
            void *param_7,int *param_8,void *param_9,uint *param_10,undefined4 *param_11,
            char *param_12)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint _Size;
  undefined4 uVar9;
  uint local_1c;
  int local_8;
  int local_4;
  
  iVar8 = (int)(thunk_FUN_112c7fa0(param_1,param_2));
  if (iVar8 == 0) {
    local_1c = (uint)(2);
    if (4 < param_2) {
      bVar3 = (bool)(false);
      bVar4 = (bool)(false);
      bVar5 = (bool)(false);
      bVar6 = (bool)(false);
      local_8 = (int)(0);
      local_4 = (int)(0);
      do {
        pcVar1 = (char *)((char *)(local_1c + param_1));
        cVar2 = (char)(*pcVar1);
        uVar7 = (ushort)(Ordinal_15(*(undefined2 *)(pcVar1 + 1)));
        _Size = (uint)((uint)uVar7);
        local_1c = (uint)(local_1c + 3 + _Size);
        if (param_2 < local_1c) break;
        if ((bVar3) || (cVar2 != '\0')) {
          if ((local_8 == 0) && (cVar2 == '\b')) {
            if (uVar7 == 6) {
              memcpy(param_5,pcVar1 + 3,6);
              local_8 = (int)(1);
            }
          }
          else if ((local_4 == 0) && (cVar2 == '\t')) {
            if (uVar7 == 6) {
              memcpy(param_7,pcVar1 + 3,6);
              local_4 = (int)(1);
            }
          }
          else if ((bVar4) || (cVar2 != '\x02')) {
            if ((bVar5) || (cVar2 != '\x06')) {
              if ((!bVar6) && ((cVar2 == '\x17' && (uVar7 == 1)))) {
                bVar6 = (bool)(true);
                *param_12 = (char)(pcVar1[3]);
              }
            }
            else if (uVar7 == 4) {
              uVar9 = (undefined4)(*(undefined4 *)(pcVar1 + 3));
              *param_11 = (undefined4)(uVar9);
              uVar9 = (undefined4)(Ordinal_14(uVar9));
              *param_11 = (undefined4)(uVar9);
              bVar5 = (bool)(true);
            }
          }
          else if (_Size <= *param_10) {
            memcpy(param_9,pcVar1 + 3,_Size);
            *param_10 = (uint)(_Size);
            bVar4 = (bool)(true);
          }
        }
        else if (_Size <= *param_4) {
          memcpy(param_3,pcVar1 + 3,_Size);
          *param_4 = (uint)(_Size);
          bVar3 = (bool)(true);
        }
      } while (local_1c + 3 <= param_2);
      if (bVar3) {
        if (!bVar4) {
          *param_10 = (uint)(0);
        }
        if (!bVar5) {
          *param_11 = (undefined4)(1);
        }
        if (!bVar6) {
          *param_12 = (char)('\0');
        }
        *param_6 = (int)(local_8);
        *param_8 = (int)(local_4);
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 112c53c0; body size 262 bytes.
#line 1 "ENTRY_112c53c0"

undefined4
FUN_112c53c0(int param_1,uint param_2,undefined1 *param_3,void *param_4,uint *param_5,
            undefined4 *param_6)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint _Size;
  int iVar6;
  uint local_4;
  
  if (1 < param_2) {
    bVar2 = (bool)(false);
    bVar3 = (bool)(false);
    *param_3 = (undefined1)(*(undefined1 *)(param_1 + 1));
    local_4 = (uint)(2);
    do {
      if (param_2 < local_4 + 3) break;
      cVar1 = (char)(*(char *)(param_1 + local_4));
      iVar6 = (int)(param_1 + local_4);
      uVar4 = (ushort)(Ordinal_15(*(undefined2 *)(iVar6 + 1)));
      _Size = (uint)((uint)uVar4);
      local_4 = (uint)(local_4 + 3 + _Size);
      if (param_2 < local_4) break;
      if ((bVar2) || (cVar1 != '\0')) {
        if ((!bVar3) && ((cVar1 == '\x01' && (uVar4 == 4)))) {
          memcpy(param_6,(void *)(iVar6 + 3),4);
          uVar5 = (undefined4)(Ordinal_14(*param_6));
          *param_6 = (undefined4)(uVar5);
          bVar3 = (bool)(true);
        }
      }
      else if (_Size <= *param_5) {
        memcpy(param_4,(void *)(iVar6 + 3),_Size);
        bVar2 = (bool)(true);
        *param_5 = (uint)(_Size);
      }
    } while ((!bVar2) || (!bVar3));
    if ((bVar2) && (bVar3)) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 112c5510; body size 366 bytes.
#line 1 "ENTRY_112c5510"

undefined4
FUN_112c5510(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uint _Size;
  undefined4 uVar7;
  char *pcVar8;
  uint local_4;
  
  iVar6 = (int)(thunk_FUN_112c7fa0(param_1,param_2));
  if (iVar6 == 6) {
    bVar2 = (bool)(false);
    bVar3 = (bool)(false);
    bVar4 = (bool)(false);
    local_4 = (uint)(2);
    do {
      if (param_2 < local_4 + 3) break;
      pcVar8 = (char *)((char *)(param_1 + local_4));
      cVar1 = (char)(*pcVar8);
      uVar5 = (ushort)(Ordinal_15(*(undefined2 *)(param_1 + 1 + local_4)));
      _Size = (uint)((uint)uVar5);
      local_4 = (uint)(local_4 + 3 + _Size);
      if (param_2 < local_4) break;
      if ((bVar2) || (cVar1 != '\0')) {
        if ((bVar3) || (cVar1 != '\x01')) {
          if (((!bVar4) && (cVar1 == '\x05')) && (uVar5 == 4)) {
            memcpy(param_6,pcVar8 + 3,4);
            uVar7 = (undefined4)(Ordinal_14(*param_6));
            *param_6 = (undefined4)(uVar7);
            bVar4 = (bool)(true);
          }
        }
        else if (uVar5 == 4) {
          memcpy(param_5,pcVar8 + 3,4);
          uVar7 = (undefined4)(Ordinal_14(*param_5));
          *param_5 = (undefined4)(uVar7);
          bVar3 = (bool)(true);
        }
      }
      else if (_Size <= *param_4) {
        memcpy(param_3,pcVar8 + 3,_Size);
        *param_4 = (uint)(_Size);
        bVar2 = (bool)(true);
      }
    } while (((!bVar2) || (!bVar3)) || (!bVar4));
    if (((bVar2) && (bVar3)) && (bVar4)) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 112c56e0; body size 366 bytes.
#line 1 "ENTRY_112c56e0"

undefined4
FUN_112c56e0(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uint _Size;
  undefined4 uVar7;
  char *pcVar8;
  uint local_4;
  
  iVar6 = (int)(thunk_FUN_112c7fa0(param_1,param_2));
  if (iVar6 == 0x15) {
    bVar2 = (bool)(false);
    bVar3 = (bool)(false);
    bVar4 = (bool)(false);
    local_4 = (uint)(2);
    do {
      if (param_2 < local_4 + 3) break;
      pcVar8 = (char *)((char *)(param_1 + local_4));
      cVar1 = (char)(*pcVar8);
      uVar5 = (ushort)(Ordinal_15(*(undefined2 *)(param_1 + 1 + local_4)));
      _Size = (uint)((uint)uVar5);
      local_4 = (uint)(local_4 + 3 + _Size);
      if (param_2 < local_4) break;
      if ((bVar2) || (cVar1 != '\0')) {
        if ((bVar3) || (cVar1 != '\x01')) {
          if (((!bVar4) && (cVar1 == '\x1d')) && (uVar5 == 4)) {
            memcpy(param_6,pcVar8 + 3,4);
            uVar7 = (undefined4)(Ordinal_14(*param_6));
            *param_6 = (undefined4)(uVar7);
            bVar4 = (bool)(true);
          }
        }
        else if (uVar5 == 4) {
          memcpy(param_5,pcVar8 + 3,4);
          uVar7 = (undefined4)(Ordinal_14(*param_5));
          *param_5 = (undefined4)(uVar7);
          bVar3 = (bool)(true);
        }
      }
      else if (_Size <= *param_4) {
        memcpy(param_3,pcVar8 + 3,_Size);
        *param_4 = (uint)(_Size);
        bVar2 = (bool)(true);
      }
    } while (((!bVar2) || (!bVar3)) || (!bVar4));
    if (((bVar2) && (bVar3)) && (bVar4)) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 112c58b0; body size 366 bytes.
#line 1 "ENTRY_112c58b0"

undefined4
FUN_112c58b0(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uint _Size;
  undefined4 uVar7;
  char *pcVar8;
  uint local_4;
  
  iVar6 = (int)(thunk_FUN_112c7fa0(param_1,param_2));
  if (iVar6 == 8) {
    bVar2 = (bool)(false);
    bVar3 = (bool)(false);
    bVar4 = (bool)(false);
    local_4 = (uint)(2);
    do {
      if (param_2 < local_4 + 3) break;
      pcVar8 = (char *)((char *)(param_1 + local_4));
      cVar1 = (char)(*pcVar8);
      uVar5 = (ushort)(Ordinal_15(*(undefined2 *)(param_1 + 1 + local_4)));
      _Size = (uint)((uint)uVar5);
      local_4 = (uint)(local_4 + 3 + _Size);
      if (param_2 < local_4) break;
      if ((bVar2) || (cVar1 != '\0')) {
        if ((bVar3) || (cVar1 != '\x01')) {
          if (((!bVar4) && (cVar1 == '\x05')) && (uVar5 == 4)) {
            memcpy(param_6,pcVar8 + 3,4);
            uVar7 = (undefined4)(Ordinal_14(*param_6));
            *param_6 = (undefined4)(uVar7);
            bVar4 = (bool)(true);
          }
        }
        else if (uVar5 == 4) {
          memcpy(param_5,pcVar8 + 3,4);
          uVar7 = (undefined4)(Ordinal_14(*param_5));
          *param_5 = (undefined4)(uVar7);
          bVar3 = (bool)(true);
        }
      }
      else if (_Size <= *param_4) {
        memcpy(param_3,pcVar8 + 3,_Size);
        *param_4 = (uint)(_Size);
        bVar2 = (bool)(true);
      }
    } while (((!bVar2) || (!bVar3)) || (!bVar4));
    if (((bVar2) && (bVar3)) && (bVar4)) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 112c5a80; body size 1919 bytes.
#line 1 "ENTRY_112c5a80"

void FUN_112c5a80(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5,
                 void *param_6,uint *param_7,void *param_8,uint *param_9,void *param_10,
                 uint *param_11,void *param_12,uint *param_13,void *param_14,uint *param_15,
                 void *param_16,uint *param_17,void *param_18,uint *param_19,void *param_20,
                 uint *param_21,undefined4 *param_22,undefined4 *param_23,uint *param_24,
                 uint *param_25,undefined1 *param_26,uint param_27,undefined2 *param_28)

{
  char *pcVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  void *pvVar15;
  undefined4 *puVar16;
  void *pvVar17;
  uint *puVar18;
  void *pvVar19;
  ushort uVar20;
  undefined2 uVar21;
  int iVar22;
  uint _Size;
  undefined4 uVar23;
  uint uVar24;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  uint *local_dc;
  uint *local_d8;
  uint *local_d4;
  uint *local_d0;
  undefined4 *local_cc;
  uint *local_c8;
  uint *local_c4;
  undefined1 *local_c0;
  undefined2 *local_bc;
  uint *local_b8;
  uint *local_b4;
  uint *local_b0;
  undefined4 *local_ac;
  uint *local_a8;
  void *local_a4;
  undefined4 *local_a0;
  void *local_9c;
  uint *local_98;
  void *local_94;
  void *local_90;
  void *local_8c;
  void *local_88;
  void *local_84;
  void *local_80;
  void *local_7c;
  uint uStack_78;
  undefined1 local_74 [112];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_11c);
  local_bc = (undefined2 *)(param_28);
  local_cc = (undefined4 *)(param_23);
  local_ac = (undefined4 *)(param_22);
  local_a4 = (void *)(param_3);
  local_a8 = (uint *)(param_4);
  local_a0 = (undefined4 *)(param_5);
  local_9c = (void *)(param_6);
  local_dc = (uint *)(param_7);
  local_94 = (void *)(param_8);
  local_98 = (uint *)(param_9);
  local_84 = (void *)(param_10);
  local_b8 = (uint *)(param_11);
  local_7c = (void *)(param_12);
  local_b0 = (uint *)(param_13);
  local_90 = (void *)(param_14);
  local_d8 = (uint *)(param_15);
  local_8c = (void *)(param_16);
  local_d4 = (uint *)(param_17);
  local_88 = (void *)(param_18);
  local_d0 = (uint *)(param_19);
  local_80 = (void *)(param_20);
  local_b4 = (uint *)(param_21);
  local_c8 = (uint *)(param_24);
  local_c4 = (uint *)(param_25);
  local_e0 = (int)(param_1);
  local_c0 = (undefined1 *)(param_26);
  iVar22 = (int)(thunk_FUN_112c7fa0(param_1,param_2));
  if (iVar22 == 2) {
    local_11c = (int)(0);
    local_118 = (int)(0);
    local_110 = (int)(0);
    local_114 = (int)(0);
    local_10c = (int)(0);
    local_108 = (int)(0);
    local_104 = (int)(0);
    local_e4 = (int)(0);
    local_100 = (int)(0);
    local_f0 = (int)(0);
    local_ec = (int)(0);
    local_e8 = (int)(0);
    local_f8 = (int)(0);
    local_f4 = (int)(0);
    local_fc = (int)(0);
    thunk_FUN_112c8730(local_74);
    uVar24 = (uint)(2);
    if (4 < param_2) {
      do {
        pcVar1 = (char *)((char *)(param_1 + uVar24));
        cVar2 = (char)(*pcVar1);
        uVar20 = (ushort)(Ordinal_15(*(undefined2 *)(param_1 + 1 + uVar24)));
        pvVar19 = (void *)(local_84);
        puVar18 = (uint *)(local_98);
        pvVar17 = (void *)(local_9c);
        puVar16 = (undefined4 *)(local_a0);
        pvVar15 = (void *)(local_a4);
        puVar14 = (uint *)(local_a8);
        puVar13 = (undefined4 *)(local_ac);
        puVar12 = (uint *)(local_b0);
        puVar11 = (uint *)(local_b4);
        puVar10 = (uint *)(local_b8);
        puVar9 = (undefined2 *)(local_bc);
        puVar8 = (undefined1 *)(local_c0);
        puVar7 = (undefined4 *)(local_cc);
        puVar6 = (uint *)(local_d0);
        puVar5 = (uint *)(local_d4);
        puVar4 = (uint *)(local_d8);
        puVar3 = (uint *)(local_dc);
        _Size = (uint)((uint)uVar20);
        uStack_78 = (uint)(uVar24 + 3 + _Size);
        if (param_2 < uStack_78) break;
        if ((local_11c == 0) && (cVar2 == '\0')) {
          if (_Size <= *local_a8) {
            memcpy(local_a4,pcVar1 + 3,_Size);
            *puVar14 = (uint)(_Size);
            thunk_FUN_112c8760(local_74,pvVar15,_Size);
            local_11c = (int)(1);
          }
        }
        else if ((local_118 == 0) && (cVar2 == '\x01')) {
          if (uVar20 == 4) {
            memcpy(local_a0,pcVar1 + 3,4);
            thunk_FUN_112c8760(local_74,puVar16,4);
            uVar23 = (undefined4)(Ordinal_14(*puVar16));
            *puVar16 = (undefined4)(uVar23);
            local_118 = (int)(1);
          }
        }
        else if ((local_110 == 0) && (cVar2 == '\x02')) {
          if (_Size <= *local_dc) {
            memcpy(local_9c,pcVar1 + 3,_Size);
            thunk_FUN_112c8760(local_74,pvVar17,_Size);
            *puVar3 = (uint)(_Size);
            local_110 = (int)(1);
          }
        }
        else if ((local_114 == 0) && (cVar2 == '\x03')) {
          if (_Size <= *local_98) {
            memcpy(local_94,pcVar1 + 3,_Size);
            *puVar18 = (uint)(_Size);
            local_114 = (int)(1);
          }
        }
        else if ((local_10c == 0) && (cVar2 == '\x04')) {
          if (_Size <= *local_d8) {
            memcpy(local_90,pcVar1 + 3,_Size);
            *puVar4 = (uint)(_Size);
            local_10c = (int)(1);
          }
        }
        else if ((local_108 == 0) && (cVar2 == '\x11')) {
          if (((void *)(local_8c) != (void *)0x0) && (_Size <= *local_d4)) {
            memcpy(local_8c,pcVar1 + 3,_Size);
            *puVar5 = (uint)(_Size);
            local_108 = (int)(1);
          }
        }
        else if ((local_104 == 0) && (cVar2 == '\x12')) {
          if (((void *)(local_88) != (void *)0x0) && (_Size <= *local_d0)) {
            memcpy(local_88,pcVar1 + 3,_Size);
            *puVar6 = (uint)(_Size);
            local_104 = (int)(1);
          }
        }
        else if ((local_e4 == 0) && (cVar2 == '\x05')) {
          if (uVar20 == 4) {
            uVar23 = (undefined4)(*(undefined4 *)(pcVar1 + 3));
            *local_ac = (undefined4)(uVar23);
            uVar23 = (undefined4)(Ordinal_14(uVar23));
            *puVar13 = (undefined4)(uVar23);
            local_e4 = (int)(1);
          }
        }
        else if ((local_100 == 0) && (cVar2 == '\x06')) {
          if (uVar20 == 4) {
            uVar23 = (undefined4)(*(undefined4 *)(pcVar1 + 3));
            *local_cc = (undefined4)(uVar23);
            uVar23 = (undefined4)(Ordinal_14(uVar23));
            *puVar7 = (undefined4)(uVar23);
            local_100 = (int)(1);
          }
        }
        else if ((local_f8 == 0) && (cVar2 == ' ')) {
          if (((undefined1 *)(local_c0) != (undefined1 *)0x0) && (_Size < param_27)) {
            memcpy(local_c0,pcVar1 + 3,_Size);
            puVar8[_Size] = (undefined1)(0);
            local_f8 = (int)(1);
          }
        }
        else if ((local_f4 == 0) && (cVar2 == '\x1f')) {
          if (uVar20 == 2) {
            uVar21 = (undefined2)(*(undefined2 *)(pcVar1 + 3));
            *local_bc = (undefined2)(uVar21);
            uVar21 = (undefined2)(Ordinal_15(uVar21));
            *puVar9 = (undefined2)(uVar21);
            local_f4 = (int)(1);
          }
        }
        else if ((local_fc == 0) && (cVar2 == '!')) {
          if (uVar20 == 4) {
            uVar24 = (uint)(Ordinal_14(*(undefined4 *)(pcVar1 + 3)));
            local_fc = (int)(1);
            *local_c8 = (uint)(uVar24 >> 0x10);
            *local_c4 = (uint)(uVar24 & 0xffff);
          }
        }
        else if ((local_f0 == 0) && (cVar2 == '\x10')) {
          if (_Size <= *local_b8) {
            memcpy(local_84,pcVar1 + 3,_Size);
            thunk_FUN_112c8300(local_74,pvVar19,_Size);
            *puVar10 = (uint)(_Size);
            local_f0 = (int)(1);
          }
        }
        else if ((local_ec == 0) && (cVar2 == '\x18')) {
          if (_Size <= *local_b4) {
            memcpy(local_80,pcVar1 + 3,_Size);
            *puVar11 = (uint)(_Size);
            local_ec = (int)(1);
          }
        }
        else if ((local_e8 == 0) && (cVar2 == '\x1b')) {
          if (_Size <= *local_b0) {
            memcpy(local_7c,pcVar1 + 3,_Size);
            *puVar12 = (uint)(_Size);
            local_e8 = (int)(1);
          }
        }
        else if ((cVar2 == '\x0e') && (uVar20 == 4)) {
          Ordinal_14(*(undefined4 *)(local_e0 + 3 + uVar24));
          goto LAB_112c61e6;
        }
        param_1 = (int)(local_e0);
        uVar24 = (uint)(uStack_78);
      } while (uStack_78 + 3 <= param_2);
      if (((local_11c != 0) && (local_118 != 0)) && (local_114 != 0)) {
        if (local_110 == 0) {
          *local_dc = (uint)(0);
        }
        if (local_10c == 0) {
          *local_d8 = (uint)(0);
        }
        if (local_108 == 0) {
          *local_d4 = (uint)(0);
        }
        if (local_104 == 0) {
          *local_d0 = (uint)(0);
        }
        if (local_100 == 0) {
          *local_cc = (undefined4)(1);
        }
        if (local_fc == 0) {
          *local_c8 = (uint)(0);
          *local_c4 = (uint)(0);
        }
        if ((((undefined1 *)(local_c0) != (undefined1 *)0x0) && (param_27 != 0)) && (local_f8 == 0)) {
          *local_c0 = (undefined1)(0);
        }
        if (local_f4 == 0) {
          *local_bc = (undefined2)(1);
        }
        if (local_f0 == 0) {
          *local_b8 = (uint)(0);
        }
        if (local_ec == 0) {
          *local_b4 = (uint)(0);
        }
        if (local_e8 == 0) {
          *local_b0 = (uint)(0);
        }
        if (local_e4 == 0) {
          *local_ac = (undefined4)(0x96c);
        }
      }
    }
  }
LAB_112c61e6:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112c63e0; body size 689 bytes.
#line 1 "ENTRY_112c63e0"

undefined4
FUN_112c63e0(int param_1,uint param_2,void *param_3,uint *param_4,undefined4 *param_5,
            undefined4 *param_6,int param_7,uint *param_8)

{
  uint uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  uint _Size;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint local_18;
  uint local_c;
  
  iVar10 = (int)(thunk_FUN_112c7fa0(param_1,param_2));
  if (iVar10 != 0x10) {
    return (undefined4)(0xffffffff);
  }
  bVar6 = (bool)(false);
  bVar7 = (bool)(false);
  bVar8 = (bool)(false);
  local_18 = (uint)(0);
  puVar13 = (undefined4 *)((undefined4 *)(param_7 + 0x2c));
  local_c = (uint)(2);
  do {
    uVar1 = (uint)(local_c + 3);
    if (param_2 < uVar1) {
LAB_112c6667:
      if (!bVar6) {
        return (undefined4)(0xffffffff);
      }
      if (!bVar7) {
        return (undefined4)(0xffffffff);
      }
      if (!bVar8) {
        return (undefined4)(0xffffffff);
      }
      break;
    }
    pcVar2 = (char *)((char *)(local_c + param_1));
    cVar4 = (char)(*pcVar2);
    uVar9 = (ushort)(Ordinal_15(*(undefined2 *)(local_c + 1 + param_1)));
    _Size = (uint)((uint)uVar9);
    uVar12 = (uint)(local_c + 3 + _Size);
    if (param_2 < uVar12) goto LAB_112c6667;
    if ((bVar6) || (cVar4 != '\0')) {
      if ((bVar7) || (cVar4 != '\x01')) {
        if ((bVar8) || (cVar4 != '\x14')) {
          if ((cVar4 == '\x13') && ((uVar9 != 0 && (local_18 < *param_8)))) {
            memset(puVar13 + -0xb,0,0x34);
            bVar5 = (byte)(*(byte *)(uVar1 + param_1));
            if (0x20 < bVar5) {
              return (undefined4)(0xffffffff);
            }
            if (_Size < bVar5 + 6) {
              return (undefined4)(0xffffffff);
            }
            *(byte *)(puVar13 + -0xb) = bVar5;
            memcpy((void *)((int)puVar13 + -0x2b),(void *)(param_1 + local_c + 4),(uint)bVar5);
            *(undefined1 *)((*(byte *)(puVar13 + -0xb) - 0x2b) + (int)puVar13) = 0;
            iVar10 = (int)(local_c + 4 + (uint)*(byte *)(puVar13 + -0xb));
            *(undefined1 *)(puVar13 + -1) = *(undefined1 *)(iVar10 + param_1);
            uVar11 = (undefined4)(*(undefined4 *)(iVar10 + 1 + param_1));
            *puVar13 = (undefined4)(uVar11);
            uVar11 = (undefined4)(Ordinal_14(uVar11));
            iVar14 = (int)(iVar10 + 5);
            *puVar13 = (undefined4)(uVar11);
            if ((iVar14 - uVar1) + 1 <= _Size) {
              puVar3 = (undefined1 *)((undefined1 *)(iVar14 + param_1));
              iVar14 = (int)(iVar10 + 6);
              *(undefined1 *)((int)puVar13 + -3) = *puVar3;
            }
            if ((iVar14 - uVar1) + 6 <= _Size) {
              *(undefined4 *)((int)puVar13 + -10) = *(undefined4 *)(iVar14 + param_1);
              *(undefined2 *)((int)puVar13 + -6) = *(undefined2 *)(iVar14 + 4 + param_1);
            }
            local_18 = (uint)(local_18 + 1);
            puVar13 = (undefined4 *)(puVar13 + 0xd);
          }
        }
        else if (uVar9 == 4) {
          memcpy(param_6,pcVar2 + 3,4);
          uVar11 = (undefined4)(Ordinal_14(*param_6));
          *param_6 = (undefined4)(uVar11);
          bVar8 = (bool)(true);
        }
      }
      else if (uVar9 == 4) {
        memcpy(param_5,pcVar2 + 3,4);
        uVar11 = (undefined4)(Ordinal_14(*param_5));
        *param_5 = (undefined4)(uVar11);
        bVar7 = (bool)(true);
      }
    }
    else if (_Size <= *param_4) {
      memcpy(param_3,pcVar2 + 3,_Size);
      *param_4 = (uint)(_Size);
      bVar6 = (bool)(true);
    }
    local_c = (uint)(uVar12);
  } while ((((!bVar6) || (!bVar7)) || (!bVar8)) || (local_18 < *param_8));
  *param_8 = (uint)(local_18);
  return (undefined4)(0);
}


// Reference entry 112c6740; body size 301 bytes.
#line 1 "ENTRY_112c6740"

void FUN_112c6740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
 try {
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 local_80c;
  undefined4 local_808 [513];
  uint local_4;
  
  uVar1 = (undefined4)(param_5);
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_80c);
  local_808[0] = (undefined4)(0x800);

  param_2 = (undefined4)(Ordinal_8(param_3));
  iVar2 = (int)(thunk_FUN_112c7f50(local_808,&stack0xfffff7f0,&local_80c,0,5));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_112c7ec0(local_808,&stack0xfffff7f0,&local_80c,0,param_1,param_1));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_112c7ec0(local_808,&stack0xfffff7f0,&local_80c,1,&param_2,4));
      if (iVar2 == 0) {
        if ((char)param_3 != '\0') {
          iVar2 = (int)(thunk_FUN_112c7ec0(local_808,&stack0xfffff7f0,&local_80c,0xb,&param_3,1));
          if (iVar2 != 0) goto LAB_112c6853;
        }
        thunk_FUN_112c4a90(local_808,unaff_ESI,uVar1);
        thunk_FUN_1148ac28();
        return;
      }
    }
  }
LAB_112c6853:
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112c6c00; body size 186 bytes.
#line 1 "ENTRY_112c6c00"

void FUN_112c6c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_80c;
  undefined4 local_808;
  undefined1 local_804 [2048];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_80c);
  local_808 = (undefined4)(0x800);
  local_80c = (undefined4)(0);
  iVar1 = (int)(thunk_FUN_112c7f50(local_804,&local_80c,&local_808,0,0xe));
  if (iVar1 == 0) {
    iVar1 = (int)(thunk_FUN_112c7ec0(local_804,&local_80c,&local_808,0,param_1,param_2));
    if (iVar1 == 0) {
      thunk_FUN_112c4a90(local_804,local_80c,param_3);
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112c6cf0; body size 552 bytes.
#line 1 "ENTRY_112c6cf0"

void FUN_112c6cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,int param_11,char param_12,undefined4 param_13,
                 undefined4 param_14)

{
 try {
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808 [513];
  uint local_4;
  
  iVar2 = (int)(param_11);
  iVar1 = (int)(param_8);
  iVar4 = (int)(param_6);
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_814);
  local_80c = (undefined4)(param_4);
  local_808[0] = (undefined4)(param_14);


  param_2 = (undefined4)(Ordinal_8(param_3));
  iVar3 = (int)(thunk_FUN_112c7f50(local_808,&stack0xfffff7e8,&local_814,0,0x11));
  if ((((((iVar3 == 0) &&
         (iVar3 = thunk_FUN_112c7ec0(local_808,&stack0xfffff7e8,&local_814,0,param_1,param_1),
         iVar3 == 0)) &&
        (iVar3 = thunk_FUN_112c7ec0(local_808,&stack0xfffff7e8,&local_814,1,&param_2,4), iVar3 == 0)
        ) && ((iVar3 = thunk_FUN_112c7ec0(local_808,&stack0xfffff7e8,&local_814,2,local_810,param_4)
              , iVar3 == 0 &&
              ((iVar4 == 0 ||
               (iVar4 = thunk_FUN_112c7ec0(local_808,&stack0xfffff7e8,&local_814,0x11,iVar4,param_6)
               , iVar4 == 0)))))) &&
      ((param_8 == 0 ||
       ((iVar1 == 0 ||
        (iVar4 = thunk_FUN_112c7ec0(local_808,&stack0xfffff7e8,&local_814,0x12,iVar1,param_8),
        iVar4 == 0)))))) &&
     ((iVar4 = thunk_FUN_112c7ec0(local_808,&stack0xfffff7e8,&local_814,0x16,&param_9,1), iVar4 == 0
      && ((((param_11 == 0 || (iVar2 == 0)) ||
           (iVar4 = thunk_FUN_112c7ec0(local_808,&stack0xfffff7e8,&local_814,0x19,iVar2,param_11),
           iVar4 == 0)) &&
          ((param_12 == '\0' ||
           (iVar4 = thunk_FUN_112c7ec0(local_808,&stack0xfffff7e8,&local_814,0xb,&param_12,1),
           iVar4 == 0)))))))) {
    thunk_FUN_112c4a90(local_808,unaff_EBX,local_80c);
  }
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112c6fb0; body size 759 bytes.
#line 1 "ENTRY_112c6fb0"

void FUN_112c6fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9,uint param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
 try {
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBP;
  uint uVar5;
  undefined4 local_90c;
  undefined4 local_908;
  undefined4 local_904;
  uint local_900;
  undefined4 local_8fc [28];
  undefined1 auStack_88c [128];
  undefined1 auStack_80c [2056];
  uint local_4;
  
  uVar1 = (undefined4)(param_13);
  iVar4 = (int)(param_9);
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_90c);
  local_904 = (undefined4)(param_2);
  local_900 = (uint)(param_5);
  uVar5 = (uint)(0);
  if (param_10 < 0x81) {
    uVar5 = (uint)(param_10);
  }
  local_8fc[0] = (undefined4)(param_7);


  param_3 = (undefined4)(Ordinal_8(param_4));
  param_9 = (int)(Ordinal_8(param_10));
  iVar3 = (int)(param_4);
  local_900 = (uint)((uint)((char)local_4 == '\x04'));
  if (uVar5 != 0) {
    thunk_FUN_112c8730(local_8fc);
    thunk_FUN_112c8760(local_8fc,local_90c,param_1);
    thunk_FUN_112c8760(local_8fc,&param_2,4);
    if (iVar3 != 0) {
      thunk_FUN_112c8760(local_8fc,local_908,iVar3);
    }
    thunk_FUN_112c8540(local_8fc,iVar4,uVar5,auStack_88c);
  }
  iVar2 = (int)(thunk_FUN_112c7f50(auStack_80c,&stack0xfffff6ec,&stack0xfffff6f0,0,1));
  if (((((((iVar2 == 0) &&
          (iVar2 = thunk_FUN_112c7ec0(auStack_80c,&stack0xfffff6ec,&stack0xfffff6f0,0,local_90c,
                                      param_1), iVar2 == 0)) &&
         (iVar2 = thunk_FUN_112c7ec0(auStack_80c,&stack0xfffff6ec,&stack0xfffff6f0,1,&param_2,4),
         iVar2 == 0)) &&
        ((iVar3 = thunk_FUN_112c7ec0(auStack_80c,&stack0xfffff6ec,&stack0xfffff6f0,2,local_908,iVar3
                                    ), iVar3 == 0 &&
         (iVar3 = thunk_FUN_112c7ec0(auStack_80c,&stack0xfffff6ec,&stack0xfffff6f0,3,local_904,
                                     param_6), iVar3 == 0)))) &&
       ((uVar5 == 0 ||
        ((iVar4 == 0 ||
         (iVar4 = thunk_FUN_112c7ec0(auStack_80c,&stack0xfffff6ec,&stack0xfffff6f0,0x10,auStack_88c,
                                     uVar5), iVar4 == 0)))))) &&
      (iVar4 = thunk_FUN_112c7ec0(auStack_80c,&stack0xfffff6ec,&stack0xfffff6f0,6,&param_9,4),
      iVar4 == 0)) &&
     ((iVar4 = thunk_FUN_112c7ec0(auStack_80c,&stack0xfffff6ec,&stack0xfffff6f0,0x1a,&local_4,1),
      iVar4 == 0 &&
      (((char)param_10 == '\0' ||
       (iVar4 = thunk_FUN_112c7ec0(auStack_80c,&stack0xfffff6ec,&stack0xfffff6f0,0xb,&param_10,1),
       iVar4 == 0)))))) {
    if (local_900 == 0) {
      thunk_FUN_112c4a90(auStack_80c,unaff_EBP,uVar1);
    }
    else {
      thunk_FUN_112c4c80();
    }
  }
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112c73a0; body size 301 bytes.
#line 1 "ENTRY_112c73a0"

void FUN_112c73a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
 try {
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 local_80c;
  undefined4 local_808 [513];
  uint local_4;
  
  uVar1 = (undefined4)(param_5);
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_80c);
  local_808[0] = (undefined4)(0x800);

  param_2 = (undefined4)(Ordinal_8(param_3));
  iVar2 = (int)(thunk_FUN_112c7f50(local_808,&stack0xfffff7f0,&local_80c,0,0xf));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_112c7ec0(local_808,&stack0xfffff7f0,&local_80c,0,param_1,param_1));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_112c7ec0(local_808,&stack0xfffff7f0,&local_80c,1,&param_2,4));
      if (iVar2 == 0) {
        if ((char)param_3 != '\0') {
          iVar2 = (int)(thunk_FUN_112c7ec0(local_808,&stack0xfffff7f0,&local_80c,0xb,&param_3,1));
          if (iVar2 != 0) goto LAB_112c74b3;
        }
        thunk_FUN_112c4a90(local_808,unaff_ESI,uVar1);
        thunk_FUN_1148ac28();
        return;
      }
    }
  }
LAB_112c74b3:
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112c7910; body size 309 bytes.
#line 1 "ENTRY_112c7910"

void FUN_112c7910(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_EDI;
  undefined4 local_80c;
  undefined4 local_808;
  uint local_4;
  
  uVar2 = (undefined4)(param_5);
  uVar1 = (undefined4)(param_2);
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_80c);


  Ordinal_8(param_1);
  param_2 = (undefined4)(Ordinal_8(param_3));
  iVar3 = (int)(thunk_FUN_112c7f50(&local_80c,&stack0xfffff7ec,&stack0xfffff7f0,0,9));
  if (iVar3 == 0) {
    iVar3 = (int)(thunk_FUN_112c7ec0(&local_80c,&stack0xfffff7ec,&stack0xfffff7f0,1,&local_4,4));
    if (iVar3 == 0) {
      iVar3 = (int)(thunk_FUN_112c7ec0(&local_80c,&stack0xfffff7ec,&stack0xfffff7f0,2,uVar1,param_1));
      if (iVar3 == 0) {
        iVar3 = (int)(thunk_FUN_112c7ec0(&local_80c,&stack0xfffff7ec,&stack0xfffff7f0,5,&param_2,4));
        if (iVar3 == 0) {
          thunk_FUN_112c4a90(&local_80c,unaff_EDI,uVar2);
          thunk_FUN_1148ac28();
          return;
        }
      }
    }
  }
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112c7ca0; body size 352 bytes.
#line 1 "ENTRY_112c7ca0"

void FUN_112c7ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
 try {
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 local_80c;
  undefined4 local_808 [513];
  uint local_4;
  
  uVar1 = (undefined4)(param_7);
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_80c);
  local_808[0] = (undefined4)(0x800);

  param_4 = (undefined4)(Ordinal_8(param_5));
  iVar2 = (int)(thunk_FUN_112c7f50(local_808,&stack0xfffff7f0,&local_80c,0,0x16));
  if (iVar2 == 0) {
    iVar2 = (int)(thunk_FUN_112c7ec0(local_808,&stack0xfffff7f0,&local_80c,0,param_1,param_1));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_112c7ec0(local_808,&stack0xfffff7f0,&local_80c,0x1e,param_3,param_3));
      if (iVar2 == 0) {
        iVar2 = (int)(thunk_FUN_112c7ec0(local_808,&stack0xfffff7f0,&local_80c,1,&param_4,4));
        if (iVar2 == 0) {
          if ((char)param_5 != '\0') {
            iVar2 = (int)(thunk_FUN_112c7ec0(local_808,&stack0xfffff7f0,&local_80c,0xb,&param_5,1));
            if (iVar2 != 0) goto LAB_112c7de5;
          }
          thunk_FUN_112c4a90(local_808,unaff_EBX,uVar1);
          thunk_FUN_1148ac28();
          return;
        }
      }
    }
  }
LAB_112c7de5:
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112c7ec0; body size 111 bytes.
#line 1 "ENTRY_112c7ec0"

undefined4
FUN_112c7ec0(int param_1,int *param_2,uint *param_3,void *param_4,undefined4 param_5,uint param_6)

{
  undefined2 uVar1;
  
  if ((param_6 < 0x10000) && (param_6 + 3 <= *param_3)) {
    *(undefined1 *)(param_1 + *param_2) = *(unsigned char *)((char *)&param_4 + 0);
    uVar1 = (undefined2)(Ordinal_9(param_6));
    *(undefined2 *)(*param_2 + 1 + param_1) = uVar1;
    memcpy((void *)(*param_2 + param_1 + 3),param_4,param_6);
    *param_2 = (int)(*param_2 + param_6 + 3);
    *param_3 = (uint)(*param_3 + (-3 - param_6));
    return (undefined4)(0);
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 112c7fc0; body size 145 bytes.
#line 1 "ENTRY_112c7fc0"

undefined4 FUN_112c7fc0(char *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)(0);
  *param_2 = (undefined4)(0);
  *(undefined2 *)(param_2 + 1) = 0;
  if (*param_1 != '\0') {
    do {
      if (0xb < (int)uVar5) {
        return (undefined4)(1);
      }
      cVar2 = (char)(*param_1);
      if ((byte)(cVar2 - 0x30U) < 10) {
        bVar3 = (byte)(cVar2 - 0x30);
LAB_112c8009:
        if (bVar3 < 0x10) {
          uVar4 = (uint)(uVar5);
          if ((int)uVar5 < 0) {
            uVar4 = (uint)(uVar5 + 1);
          }
          pbVar1 = (byte *)((byte *)(((int)uVar4 >> 1) + (int)param_2));
          if ((uVar5 & 1) == 0) {
            bVar3 = (byte)(bVar3 << 4);
          }
          *pbVar1 = (byte)(*pbVar1 | bVar3);
          uVar5 = (uint)(uVar5 + 1);
        }
      }
      else {
        if ((byte)(cVar2 + 0xbfU) < 6) {
          bVar3 = (byte)(cVar2 - 0x37);
          goto LAB_112c8009;
        }
        if ((byte)(cVar2 + 0x9fU) < 6) {
          bVar3 = (byte)(cVar2 + 0xa9);
          goto LAB_112c8009;
        }
      }
      param_1 = (char *)(param_1 + 1);
    } while (*param_1 != '\0');
    if (0xb < (int)uVar5) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 112c8080; body size 249 bytes.
#line 1 "ENTRY_112c8080"

void FUN_112c8080(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (uint)((int)(0x34 / (ulonglong)param_2) * -0x61c88647 + 0xb54cda56);
  uVar4 = (uint)(*param_1);
  do {
    uVar5 = (uint)(uVar3 >> 2 & 3);
    uVar1 = (uint)(param_2);
    while (uVar2 = uVar1 - 1, uVar2 != 0) {
      uVar1 = (uint)(param_1[uVar1 - 2]);
      param_1[uVar2] = (uint)(param_1[uVar2] -
           ((uVar1 << 4 ^ uVar4 >> 3) + (uVar1 >> 5 ^ uVar4 * 4) ^
           (*(uint *)(param_3 + (uVar2 & 3 ^ uVar5) * 4) ^ uVar1) + (uVar4 ^ uVar3)));
      uVar4 = (uint)(param_1[uVar2]);
      uVar1 = (uint)(uVar2);
    }
    uVar1 = (uint)(param_1[param_2 - 1]);
    *param_1 = (uint)(*param_1 -
               ((uVar1 << 4 ^ uVar4 >> 3) + (uVar1 >> 5 ^ uVar4 * 4) ^
               (*(uint *)(param_3 + uVar5 * 4) ^ uVar1) + (uVar4 ^ uVar3)));
    uVar3 = (uint)(uVar3 + 0x61c88647);
    uVar4 = (uint)(*param_1);
  } while (uVar3 != 0);
  return;
}


// Reference entry 112c81c0; body size 244 bytes.
#line 1 "ENTRY_112c81c0"

void FUN_112c81c0(uint *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_c;
  
  local_c = (int)((int)(0x34 / (ulonglong)param_2) + 6);
  uVar6 = (uint)(param_1[param_2 - 1]);
  uVar3 = (uint)(0);
  puVar1 = (uint *)(param_1 + (param_2 - 1));
  do {
    uVar3 = (uint)(uVar3 + 0x9e3779b9);
    uVar4 = (uint)(0);
    uVar5 = (uint)(uVar3 >> 2 & 3);
    if (param_2 != 1) {
      do {
        uVar2 = (uint)(param_1[uVar4 + 1]);
        param_1[uVar4] = (uint)(param_1[uVar4] +
             ((uVar2 * 4 ^ uVar6 >> 5) + (uVar2 >> 3 ^ uVar6 << 4) ^
             (*(uint *)(param_3 + (uVar4 & 3 ^ uVar5) * 4) ^ uVar6) + (uVar2 ^ uVar3)));
        uVar6 = (uint)(param_1[uVar4]);
        uVar4 = (uint)(uVar4 + 1);
      } while (uVar4 < param_2 - 1);
    }
    uVar2 = (uint)(*param_1);
    *puVar1 = (uint)(*puVar1 + ((uVar2 * 4 ^ uVar6 >> 5) + (uVar2 >> 3 ^ uVar6 << 4) ^
                        (*(uint *)(param_3 + (uVar4 & 3 ^ uVar5) * 4) ^ uVar6) + (uVar2 ^ uVar3)));
    local_c = (int)(local_c + -1);
    uVar6 = (uint)(*puVar1);
  } while (local_c != 0);
  return;
}


// Reference entry 112c8300; body size 460 bytes.
#line 1 "ENTRY_112c8300"

void FUN_112c8300(undefined4 param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 uStack_a8;
  uint *puStack_a4;
  uint uStack_a0;
  uint local_9c;
  uint *local_98;
  uint local_94 [4];
  uint local_84 [31];
  uint uStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_a8);
  local_9c = (uint)(param_3 >> 2);
  local_98 = (uint *)(param_2);
  if (param_3 != 0x80) {
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_113d1a60(param_1,local_94);
  puVar8 = (uint *)(local_94 + 4);
  for (iVar5 = (int)(0x20); iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = (uint)(*param_2);
    param_2 = (uint *)(param_2 + 1);
    puVar8 = (uint *)(puVar8 + 1);
  }
  iVar5 = (int)(0);
  do {
    uVar2 = (uint)(Ordinal_14(local_94[iVar5]));
    local_94[iVar5] = (uint)(uVar2);
    iVar5 = (int)(iVar5 + 1);
  } while (iVar5 < 4);
  iVar5 = (int)(0);
  do {
    uVar3 = (uint)(Ordinal_14(local_94[iVar5 + 4]));
    uVar2 = (uint)(local_9c);
    local_94[iVar5 + 4] = (uint)(uVar3);
    iVar5 = (int)(iVar5 + 1);
  } while (iVar5 < 0x20);
  puStack_a4 = (uint *)(&uStack_8);
  uVar3 = (uint)(0x5384540f);
  uStack_a0 = (uint)(0x1f);
  do {
    uVar7 = (uint)(uVar3 >> 2 & 3);
    uVar4 = (uint)(uStack_a0);
    uVar6 = (uint)(local_84[0]);
    do {
      uVar1 = (uint)(local_94[uVar4 + 3]);
      local_94[uVar4 + 4] = (uint)(local_94[uVar4 + 4] -
           ((uVar1 << 4 ^ uVar6 >> 3) + (uVar1 >> 5 ^ uVar6 * 4) ^
           (local_94[uVar4 & 3 ^ uVar7] ^ uVar1) + (uVar6 ^ uVar3)));
      uVar6 = (uint)(local_94[uVar4 + 4]);
      uVar4 = (uint)(uVar4 - 1);
    } while (uVar4 != 0);
    uVar4 = (uint)(uVar6 ^ uVar3);
    uVar3 = (uint)(uVar3 + 0x61c88647);
    local_84[0] = (uint)(local_84[0] -
                  ((uStack_8 << 4 ^ uVar6 >> 3) + (uStack_8 >> 5 ^ uVar6 * 4) ^
                  (local_94[uVar7] ^ uStack_8) + uVar4));
  } while (uVar3 != 0);
  iVar5 = (int)(0);
  uStack_a8 = (undefined4)(0);
  if (local_9c != 0) {
    do {
      uVar3 = (uint)(Ordinal_8(local_94[iVar5 + 4]));
      local_94[iVar5 + 4] = (uint)(uVar3);
      iVar5 = (int)(iVar5 + 1);
    } while (iVar5 < (int)uVar2);
  }
  puVar8 = (uint *)(local_94 + 4);
  puVar9 = (uint *)(local_98);
  for (iVar5 = (int)(0x20); iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = (uint)(*puVar8);
    puVar8 = (uint *)(puVar8 + 1);
    puVar9 = (uint *)(puVar9 + 1);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112c8540; body size 395 bytes.
#line 1 "ENTRY_112c8540"

void FUN_112c8540(undefined4 param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  uint *puStack_1c;
  uint local_18;
  uint local_14 [4];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_2c);
  uVar3 = (uint)(param_3 >> 2);
  local_18 = (uint)(uVar3);
  thunk_FUN_113d1a60(param_1,local_14);
  memcpy(param_4,param_2,param_3);
  iVar5 = (int)(0);
  do {
    uVar2 = (uint)(Ordinal_14(local_14[iVar5]));
    local_14[iVar5] = (uint)(uVar2);
    iVar5 = (int)(iVar5 + 1);
  } while (iVar5 < 4);
  iVar5 = (int)(0);
  if (uVar3 != 0) {
    do {
      uVar2 = (uint)(Ordinal_14(param_4[iVar5]));
      param_4[iVar5] = (uint)(uVar2);
      iVar5 = (int)(iVar5 + 1);
    } while (iVar5 < (int)uVar3);
  }
  uVar2 = (uint)(local_18);
  puStack_1c = (uint *)(param_4 + (uVar3 - 1));
  uStack_20 = (uint)(uVar3 - 1);
  uStack_2c = (uint)(param_4[uVar3 - 1]);
  iStack_24 = (int)((int)(0x34 / (ulonglong)uVar3) + 6);
  uStack_28 = (uint)(0);
  do {
    uStack_28 = (uint)(uStack_28 + 0x9e3779b9);
    uVar3 = (uint)(0);
    uVar4 = (uint)(uStack_28 >> 2 & 3);
    if (uStack_20 != 0) {
      do {
        uVar1 = (uint)(param_4[uVar3 + 1]);
        param_4[uVar3] = (uint)(param_4[uVar3] +
             ((uVar1 * 4 ^ uStack_2c >> 5) + (uVar1 >> 3 ^ uStack_2c << 4) ^
             (local_14[uVar3 & 3 ^ uVar4] ^ uStack_2c) + (uVar1 ^ uStack_28)));
        uStack_2c = (uint)(param_4[uVar3]);
        uVar3 = (uint)(uVar3 + 1);
      } while (uVar3 < uStack_20);
    }
    uVar1 = (uint)(*param_4);
    *puStack_1c = (uint)(*puStack_1c +
                  ((uVar1 * 4 ^ uStack_2c >> 5) + (uVar1 >> 3 ^ uStack_2c << 4) ^
                  (local_14[uVar3 & 3 ^ uVar4] ^ uStack_2c) + (uVar1 ^ uStack_28)));
    iStack_24 = (int)(iStack_24 + -1);
    uStack_2c = (uint)(*puStack_1c);
  } while (iStack_24 != 0);
  iVar5 = (int)(0);
  iStack_24 = (int)(0);
  if (local_18 != 0) {
    do {
      uVar3 = (uint)(Ordinal_8(param_4[iVar5]));
      param_4[iVar5] = (uint)(uVar3);
      iVar5 = (int)(iVar5 + 1);
    } while (iVar5 < (int)uVar2);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112c8780; body size 315 bytes.
#line 1 "ENTRY_112c8780"

void FUN_112c8780(char *param_1,uint param_2,undefined4 param_3,char *param_4,int param_5,
                 undefined4 *param_6,undefined4 param_7,undefined4 param_8,char param_9,
                 char param_10)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_30);
  local_30 = (undefined4)(param_3);
  local_28 = (undefined4)(param_7);
  local_2c = (undefined4)(param_8);
  thunk_FUN_112c8970(param_5 + 0x14,local_24,0x20);
  if (param_10 == '\0') {
    if (((char *)(param_4) == (char *)0x0) || (*param_4 == '\0')) {
      param_4 = (char *)("default");
    }
    thunk_FUN_1145c720(param_1,param_2,
                       "%s%s-%u-%u.upd?cmaj=%u&cmin=%u&cbld=%u&subm=%u&rev=%u&reg=%u&serial=%s",
                       local_30,param_4,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8),
                       *param_6,param_6[1],param_6[2],*(undefined4 *)(param_5 + 0xc),
                       *(undefined4 *)(param_5 + 0x10),*(undefined4 *)(param_5 + 0x1c),local_24);
  }
  else {
    thunk_FUN_1145c720(param_1,param_2,
                       "%supdate.upm?cmaj=%u&cmin=%u&cbld=%u&subm=%u&rev=%u&reg=%u&serial=%s",
                       local_30,*param_6,param_6[1],param_6[2],*(undefined4 *)(param_5 + 0xc),
                       *(undefined4 *)(param_5 + 0x10),*(undefined4 *)(param_5 + 0x1c),local_24);
  }
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  uVar3 = (uint)((int)pcVar2 - (int)(param_1 + 1));
  if (uVar3 < param_2) {
    thunk_FUN_1145c720(param_1 + uVar3,param_2 - uVar3,"&sonosid=%s&householdid=%s",local_28,
                       local_2c);
  }
  if (param_9 != '\0') {
    pcVar2 = (char *)(param_1);
    do {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)(pcVar2 + 1);
    } while (cVar1 != '\0');
    uVar3 = (uint)((int)pcVar2 - (int)(param_1 + 1));
    if (uVar3 < param_2) {
      thunk_FUN_1145c720(param_1 + uVar3,param_2 - uVar3,"&au=1");
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112c8970; body size 124 bytes.
#line 1 "ENTRY_112c8970"

void FUN_112c8970(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)(0);
  iVar4 = (int)(2);
  do {
    pbVar1 = (byte *)(param_1 + iVar4);
    iVar4 = (int)(iVar4 + 1);
    uVar3 = (uint)(uVar3 * 0x100 + (uint)*pbVar1);
  } while (iVar4 < 6);
  cVar2 = (char)('7');
  if (uVar3 % 0x11 < 10) {
    cVar2 = (char)('0');
  }
  thunk_FUN_1145c720(param_2,param_3,"%02X%02X%02X%02X%02X%02X%c",*param_1,param_1[1],param_1[2],
                     param_1[3],param_1[4],param_1[5],cVar2 + (char)(uVar3 % 0x11));
  return;
}


// Reference entry 112c8a40; body size 250 bytes.
#line 1 "ENTRY_112c8a40"

undefined4 *
FUN_112c8a40(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return (undefined4 *)((undefined4 *)0x0);
  }
  if (param_4 == 0) {
    if (param_5 != 0) {
      return (undefined4 *)((undefined4 *)0x0);
    }
  }
  else if (param_5 == 0) {
    return (undefined4 *)((undefined4 *)0x0);
  }
  if (param_6 == 0) {
    if (param_7 == 0) {
LAB_112c8a87:
      puVar1 = (undefined4 *)(malloc(0xc));
      if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
        if ((char)param_2 == '\0') {
          uVar2 = (undefined4)(thunk_FUN_112ca400(0));
        }
        else {
          uVar2 = (undefined4)(thunk_FUN_112ca420(0,param_2));
        }
        *puVar1 = (undefined4)(uVar2);
        thunk_FUN_112caf40(uVar2,param_1);
        if (param_3 != 0) {
          thunk_FUN_112caad0(*puVar1,param_3);
        }
        if ((param_4 != 0) && (param_5 != 0)) {
          thunk_FUN_112cab90(*puVar1,param_4,param_5);
        }
        if (param_6 != 0) {
          if (param_7 == 0) {
            thunk_FUN_112caee0(*puVar1,param_6);
          }
          else {
            thunk_FUN_112cad70(*puVar1,param_6,param_7);
          }
        }
        if (param_8 != 0) {
          thunk_FUN_112cab10(*puVar1,param_8);
        }
        *(undefined2 *)((int)puVar1 + 10) = 0;
      }
      return (undefined4 *)(puVar1);
    }
  }
  else if ((param_7 != 0) || (param_8 != 0)) goto LAB_112c8a87;
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 112c8cb0; body size 257 bytes.
#line 1 "ENTRY_112c8cb0"

undefined4
FUN_112c8cb0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  char cVar1;
  
  if ((((int *)(param_1) != (int *)0x0) && (*param_1 != 0)) && (param_2 != 0)) {
    if (param_4 == 0) {
      if (param_5 != 0) {
        return (undefined4)(0);
      }
    }
    else if (param_5 == 0) {
      return (undefined4)(0);
    }
    if (param_6 == 0) {
      if (param_7 != 0) {
        return (undefined4)(0);
      }
    }
    else if ((param_7 == 0) && (param_8 == 0)) {
      return (undefined4)(0);
    }
    cVar1 = (char)(thunk_FUN_112ca710(*param_1,0));
    if (cVar1 != '\0') {
      thunk_FUN_112caf40(*param_1,param_2);
      if (param_3 != 0) {
        thunk_FUN_112caad0(*param_1,param_3);
      }
      if ((param_4 != 0) && (param_5 != 0)) {
        thunk_FUN_112cab90(*param_1,param_4,param_5);
      }
      if (param_6 != 0) {
        if (param_7 == 0) {
          thunk_FUN_112caee0(*param_1,param_6);
        }
        else {
          thunk_FUN_112cad70(*param_1,param_6,param_7);
        }
      }
      if (param_8 != 0) {
        thunk_FUN_112cab10(*param_1,param_8);
      }
      *(undefined2 *)((int)param_1 + 10) = 0;
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 112c99f0; body size 515 bytes.
#line 1 "ENTRY_112c99f0"

undefined4 FUN_112c99f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  
  if (param_1 == 0) {
    return (undefined4)(0);
  }
  if (-1 < param_2) {
    if (*(int *)(param_1 + 0x1dc) == 2) {
      *(undefined4 *)(param_1 + 0x118) = 0x24;
      return (undefined4)(0);
    }
    if (*(int *)(param_1 + 0x1dc) == 3) {
      *(undefined4 *)(param_1 + 0x118) = 0x21;
      return (undefined4)(0);
    }
    iVar5 = (int)(*(int *)(param_1 + 0x20));
    if ((iVar5 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
      iVar2 = (int)(0);
    }
    else {
      iVar2 = (int)(iVar5 - *(int *)(param_1 + 0x1c));
    }
    if (param_2 <= iVar2) {
LAB_112c9bc9:
      return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
    }
    iVar2 = (int)(*(int *)(param_1 + 0x1c));
    if ((iVar2 == 0) || (*(int *)(param_1 + 0x18) == 0)) {
      iVar3 = (int)(0);
    }
    else {
      iVar3 = (int)(iVar2 - *(int *)(param_1 + 0x18));
    }
    iVar3 = (int)(iVar3 + param_2);
    if (-1 < iVar3) {
      iVar1 = (int)(*(int *)(param_1 + 0x18));
      if ((iVar1 == 0) || (*(int *)(param_1 + 8) == 0)) {
        iVar7 = (int)(0);
      }
      else {
        iVar7 = (int)(iVar1 - *(int *)(param_1 + 8));
        if (0x400 < iVar7) {
          iVar7 = (int)(0x400);
        }
      }
      if (iVar7 <= 0x7fffffff - iVar3) {
        if ((iVar5 == 0) || (*(int *)(param_1 + 8) == 0)) {
          iVar4 = (int)(0);
        }
        else {
          iVar4 = (int)(iVar5 - *(int *)(param_1 + 8));
        }
        if (iVar3 + iVar7 <= iVar4) {
          if ((iVar1 == 0) || (*(int *)(param_1 + 8) == 0)) {
            iVar5 = (int)(0);
          }
          else {
            iVar5 = (int)(iVar1 - *(int *)(param_1 + 8));
          }
          if (iVar7 < iVar5) {
            if ((iVar1 == 0) || (pvVar6 = *(void **)(param_1 + 8), (void *)(pvVar6) == (void *)0x0)) {
              pvVar6 = (void *)(*(void **)(param_1 + 8));
              iVar5 = (int)(0);
            }
            else {
              iVar5 = (int)(iVar1 - (int)pvVar6);
            }
            iVar5 = (int)(iVar5 - iVar7);
            memmove(pvVar6,(void *)((int)pvVar6 + iVar5),(iVar2 - iVar1) + iVar7);
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - iVar5;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar5;
          }
LAB_112c9bab:
          *(undefined4 *)(param_1 + 0x120) = 0;
          *(undefined4 *)(param_1 + 0x11c) = 0;
          *(undefined4 *)(param_1 + 0x124) = 0;
          goto LAB_112c9bc9;
        }
        if (((iVar5 == 0) || (iVar1 == 0)) || (iVar5 = iVar5 - iVar1, iVar5 == 0)) {
          iVar5 = (int)(0x400);
        }
        do {
          iVar5 = (int)(iVar5 * 2);
          if (iVar3 + iVar7 <= iVar5) {
            if (0 < iVar5) {
              pvVar6 = (void *)((void *)(**(code **)(param_1 + 0xc))(iVar5));
              if ((void *)(pvVar6) != (void *)0x0) {
                iVar2 = (int)(*(int *)(param_1 + 0x18));
                *(void **)(param_1 + 0x20) = (void *)((int)pvVar6 + iVar5);
                if (iVar2 == 0) {
                  *(void **)(param_1 + 0x1c) = pvVar6;
                  *(void **)(param_1 + 8) = pvVar6;
                  *(void **)(param_1 + 0x18) = pvVar6;
                }
                else {
                  memcpy(pvVar6,(void *)(iVar2 - iVar7),
                         (-(uint)(*(int *)(param_1 + 0x1c) != 0) & *(int *)(param_1 + 0x1c) - iVar2)
                         + iVar7);
                  (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 8));
                  *(void **)(param_1 + 8) = pvVar6;
                  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x18) == 0)) {
                    *(int *)(param_1 + 0x1c) = (int)pvVar6 + iVar7;
                    *(int *)(param_1 + 0x18) = (int)pvVar6 + iVar7;
                  }
                  else {
                    *(int *)(param_1 + 0x1c) =
                         (int)pvVar6 + iVar7 + (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18))
                    ;
                    *(int *)(param_1 + 0x18) = (int)pvVar6 + iVar7;
                  }
                }
                goto LAB_112c9bab;
              }
            }
            break;
          }
        } while (0 < iVar5);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x118) = 1;
  return (undefined4)(0);
}


// Reference entry 112ca470; body size 536 bytes.
#line 1 "ENTRY_112ca470"

void FUN_112ca470(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x168));
  do {
    puVar2 = (undefined4 *)(puVar1);
    if ((undefined4 *)(puVar1) == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x16c));
      if ((undefined4 *)(puVar2) == (undefined4 *)0x0) {
        iVar3 = (int)(*(int *)(param_1 + 0x128));
        do {
          iVar4 = (int)(iVar3);
          if (iVar3 == 0) {
            iVar4 = (int)(*(int *)(param_1 + 300));
            if (iVar4 == 0) {
              iVar3 = (int)(*(int *)(param_1 + 0x174));
              while (iVar3 != 0) {
                iVar4 = (int)(*(int *)(iVar3 + 4));
                (**(code **)(param_1 + 0x14))(*(undefined4 *)(iVar3 + 0x10));
                (**(code **)(param_1 + 0x14))(iVar3);
                iVar3 = (int)(iVar4);
              }
              iVar3 = (int)(*(int *)(param_1 + 0x170));
              while (iVar3 != 0) {
                iVar4 = (int)(*(int *)(iVar3 + 4));
                (**(code **)(param_1 + 0x14))(*(undefined4 *)(iVar3 + 0x10));
                (**(code **)(param_1 + 0x14))(iVar3);
                iVar3 = (int)(iVar4);
              }
              puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x19c));
              while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
                puVar2 = (undefined4 *)((undefined4 *)*puVar1);
                (**(code **)(*(int *)(param_1 + 0x1b0) + 8))(puVar1);
                puVar1 = (undefined4 *)(puVar2);
              }
              puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1a0));
              while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
                puVar2 = (undefined4 *)((undefined4 *)*puVar1);
                (**(code **)(*(int *)(param_1 + 0x1b0) + 8))(puVar1);
                puVar1 = (undefined4 *)(puVar2);
              }
              puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1b4));
              while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
                puVar2 = (undefined4 *)((undefined4 *)*puVar1);
                (**(code **)(*(int *)(param_1 + 0x1c8) + 8))(puVar1);
                puVar1 = (undefined4 *)(puVar2);
              }
              puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1b8));
              while ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
                puVar2 = (undefined4 *)((undefined4 *)*puVar1);
                (**(code **)(*(int *)(param_1 + 0x1c8) + 8))(puVar1);
                puVar1 = (undefined4 *)(puVar2);
              }
              (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0xe4));
              if ((*(char *)(param_1 + 0x1e4) == '\0') && (*(int *)(param_1 + 0x160) != 0)) {
                FUN_112d0d50(*(int *)(param_1 + 0x160),*(int *)(param_1 + 0x1d8) == 0,param_1 + 0xc)
                ;
              }
              (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x184));
              (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x1cc));
              (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 8));
              (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x2c));
              (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x188));
              (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0xec));
              if (*(code **)(param_1 + 0xf8) != (code *)0x0) {
                (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xf0));
              }
              (**(code **)(param_1 + 0x14))(param_1);
              return;
            }
            *(undefined4 *)(param_1 + 300) = 0;
          }
          iVar3 = (int)(*(int *)(iVar4 + 8));
          (**(code **)(param_1 + 0x14))(iVar4);
        } while( true );
      }
      *(undefined4 *)(param_1 + 0x16c) = 0;
    }
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    (**(code **)(param_1 + 0x14))(puVar2[9]);
    iVar3 = (int)(puVar2[0xb]);
    while (iVar3 != 0) {
      iVar4 = (int)(*(int *)(iVar3 + 4));
      (**(code **)(param_1 + 0x14))(*(undefined4 *)(iVar3 + 0x10));
      (**(code **)(param_1 + 0x14))(iVar3);
      iVar3 = (int)(iVar4);
    }
    (**(code **)(param_1 + 0x14))(puVar2);
  } while( true );
}


// Reference entry 112cb3d0; body size 106 bytes.
#line 1 "ENTRY_112cb3d0"

float10 FUN_112cb3d0(int param_1)

{
  double dVar1;
  undefined4 in_XMM0_Da;
  float fVar2;
  undefined4 in_XMM0_Db;
  
  if (*(int *)(param_1 + 0x1f0) != 0 || *(int *)(param_1 + 500) != 0) {
    thunk_FUN_1148b050();
    dVar1 = (double)((double)((unsigned long long)(in_XMM0_Db) << 32 | (unsigned long long)(in_XMM0_Da)));
    fVar2 = (float)((float)dVar1);
    thunk_FUN_1148b050();
    return (float10)((float10)((float)dVar1 / (float)(double)((unsigned long long)(in_XMM0_Db) << 32 | (unsigned long long)(fVar2))));
  }
  return (float10)((float10)1.0);
}


// Reference entry 112cb480; body size 335 bytes.
#line 1 "ENTRY_112cb480"

void FUN_112cb480(int param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uStack_c;
  undefined1 uStack_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_c);
  puVar1 = (undefined *)(&DAT_119ea870);
  if (param_7 != 0) {
    puVar1 = (undefined *)(&DAT_119ea874);
  }
  uVar2 = (undefined4)(__acrt_iob_func(2," (+%6d bytes %s|%d, xmlparse.c:%d) %*s\"",param_5,puVar1,param_2,
                          param_6,10,&DAT_1186d2ee));
  thunk_FUN_111ac070(uVar2);
  uStack_c = (undefined4)(DAT_119ea8a8);
  uStack_8 = (undefined1)(DAT_119ea8ac);
  if ((*(int *)(param_1 + 0x200) < 3) && (0x18 < (int)param_4 - (int)param_3)) {
    puVar3 = (undefined1 *)(param_3 + 10);
    for (; param_3 < puVar3; param_3 = param_3 + 1) {
      uVar2 = (undefined4)(thunk_FUN_112d76b0(*param_3));
      uVar2 = (undefined4)(__acrt_iob_func(2,&DAT_1188bc94,uVar2));
      thunk_FUN_111ac070(uVar2);
    }
    uVar2 = (undefined4)(__acrt_iob_func(2,&uStack_c));
    thunk_FUN_111ac070(uVar2);
    for (puVar3 = (undefined1 *)(param_4 + -10); puVar3 < param_4; puVar3 = puVar3 + 1) {
      uVar2 = (undefined4)(thunk_FUN_112d76b0(*puVar3));
      uVar2 = (undefined4)(__acrt_iob_func(2,&DAT_1188bc94,uVar2));
      thunk_FUN_111ac070(uVar2);
    }
  }
  else {
    for (; param_3 < param_4; param_3 = param_3 + 1) {
      uVar2 = (undefined4)(thunk_FUN_112d76b0(*param_3));
      uVar2 = (undefined4)(__acrt_iob_func(2,&DAT_1188bc94,uVar2));
      thunk_FUN_111ac070(uVar2);
    }
  }
  uVar2 = (undefined4)(__acrt_iob_func(2,&DAT_119ea8b0));
  thunk_FUN_111ac070(uVar2);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112cb630; body size 184 bytes.
#line 1 "ENTRY_112cb630"

void FUN_112cb630(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double in_XMM0_Qa;
  double dVar4;
  float fVar5;
  
  iVar1 = (int)(*(int *)(param_1 + 0x1d8));
  while (iVar2 = iVar1, iVar2 != 0) {
    param_1 = (int)(iVar2);
    iVar1 = (int)(*(int *)(iVar2 + 0x1d8));
  }
  if (0 < *(int *)(param_1 + 0x200)) {
    iVar1 = (int)(*(int *)(param_1 + 0x1f0));
    uVar3 = (undefined4)(*(undefined4 *)(param_1 + 0x1f8));
    iVar2 = (int)(*(int *)(param_1 + 500));
    fVar5 = (float)(DAT_119eae70);
    if (iVar1 != 0 || iVar2 != 0) {
      thunk_FUN_1148b050();
      dVar4 = (double)((double)((unsigned long long)((int)((ulonglong)in_XMM0_Qa >> 0x20)) << 32 | (unsigned long long)((float)in_XMM0_Qa)));
      thunk_FUN_1148b050();
      fVar5 = (float)((float)in_XMM0_Qa / (float)dVar4);
    }
    uVar3 = (undefined4)(__acrt_iob_func(2,
                            "expat: Accounting(%p): Direct %10I64u, indirect %10I64u, amplification %8.2f%s"
                            ,param_1,iVar1,iVar2,uVar3,*(undefined4 *)(param_1 + 0x1fc),
                            (double)fVar5,param_2));
    thunk_FUN_111ac070(uVar3);
  }
  return;
}


// Reference entry 112cb720; body size 570 bytes.
#line 1 "ENTRY_112cb720"

char FUN_112cb720(int param_1,undefined4 *param_2,int param_3,char *param_4,undefined4 *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  bool bVar8;
  size_t _Size;
  
  pcVar7 = (char *)((char *)*param_2);
  bVar2 = (bool)(true);
  if ((char *)(pcVar7) == (char *)0x0) {
LAB_112cb782:
    bVar3 = (bool)(false);
    _Size = (size_t)(0);
    bVar8 = (bool)(false);
    if (*param_4 != '\0') goto LAB_112cb792;
LAB_112cb819:
    bVar8 = (bool)(false);
  }
  else {
    if (*param_4 == '\0') {
      return (char)('\x1c');
    }
    if (((*pcVar7 != 'x') || (pcVar7[1] != 'm')) || (pcVar7[2] != 'l')) goto LAB_112cb782;
    if (pcVar7[3] == 'n') {
      if ((pcVar7[4] == 's') && (pcVar7[5] == '\0')) {
        return (char)('\'');
      }
      goto LAB_112cb782;
    }
    if (pcVar7[3] != '\0') goto LAB_112cb782;
    bVar3 = (bool)(true);
    bVar8 = (bool)(true);
LAB_112cb792:
    bVar1 = (bool)(true);
    _Size = (size_t)(0);
    bVar2 = (bool)(true);
    do {
      if ((bVar1) &&
         ((0x24 < (int)_Size || (param_4[_Size] != "http://www.w3.org/XML/1998/namespace"[_Size]))))
      {
        bVar1 = (bool)(false);
      }
      if (((!bVar3) && (bVar2)) &&
         ((0x1d < (int)_Size || (param_4[_Size] != "http://www.w3.org/2000/xmlns/"[_Size])))) {
        bVar2 = (bool)(false);
      }
      if ((*(char *)(param_1 + 0xe8) != '\0') && ((char)(param_4[_Size]) == *(char *)(param_1 + 0x1d4))) {
        switch(param_4[_Size]) {
        case '!':
        case '#':
        case '$':
        case '%':
        case '&':
        case '\'':
        case '(':
        case ')':
        case '*':
        case '+':
        case ',':
        case '-':
        case '.':
        case '/':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case ';':
        case '=':
        case '?':
        case '@':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case ']':
        case '_':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        case '~':
          bVar3 = (bool)(bVar8);
          break;
        default:
          return (char)('\x02');
        }
      }
      _Size = (size_t)(_Size + 1);
    } while (param_4[_Size] != '\0');
    if ((!bVar1) || (_Size != 0x24)) goto LAB_112cb819;
    bVar8 = (bool)(true);
  }
  if ((bVar2) && (_Size == 0x1d)) {
    bVar2 = (bool)(true);
  }
  else {
    bVar2 = (bool)(false);
  }
  if (bVar3 != bVar8) {
    return (char)((bVar3 ^ 1U) * '\x02' + '&');
  }
  if (bVar2) {
    return (char)('(');
  }
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    _Size = (size_t)(_Size + 1);
  }
  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 0x174));
  if ((undefined4 *)(puVar5) == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)((undefined4 *)(**(code **)(param_1 + 0xc))(0x1c));
    if (((undefined4 *)(puVar5) != (undefined4 *)0x0) && ((int)_Size < 0x7fffffe8)) {
      iVar4 = (int)((**(code **)(param_1 + 0xc))(_Size + 0x18));
      puVar5[4] = (undefined4)(iVar4);
      if (iVar4 != 0) {
        puVar5[6] = (undefined4)(_Size + 0x18);
        goto LAB_112cb8d9;
      }
      (**(code **)(param_1 + 0x14))(puVar5);
    }
    return (char)('\x01');
  }
  if ((int)puVar5[6] < (int)_Size) {
    if (0x7fffffe7 < (int)_Size) {
      return (char)('\x01');
    }
    iVar4 = (int)((**(code **)(param_1 + 0x10))(puVar5[4],_Size + 0x18));
    if (iVar4 == 0) {
      return (char)('\x01');
    }
    puVar5[4] = (undefined4)(iVar4);
    puVar5[6] = (undefined4)(_Size + 0x18);
  }
  *(undefined4 *)(param_1 + 0x174) = puVar5[1];
LAB_112cb8d9:
  puVar5[5] = (undefined4)(_Size);
  memcpy((void *)puVar5[4],param_4,_Size);
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    *(char *)(puVar5[4] + -1 + _Size) = *(char *)(param_1 + 0x1d4);
  }
  *puVar5 = (undefined4)(param_2);
  puVar5[3] = (undefined4)(param_3);
  puVar5[2] = (undefined4)(param_2[1]);
  puVar6 = (undefined4 *)(puVar5);
  if ((*param_4 == '\0') && ((undefined4 *)(param_2) == (undefined4 *)(*(int *)(param_1 + 0x160) + 0x98))) {
    puVar6 = (undefined4 *)((undefined4 *)0x0);
  }
  param_2[1] = (undefined4)(puVar6);
  puVar5[1] = (undefined4)(*param_5);
  *param_5 = (undefined4)(puVar5);
  if ((param_3 != 0) && (*(code **)(param_1 + 100) != (code *)0x0)) {
    pcVar7 = (char *)((char *)0x0);
    if (param_2[1] != 0) {
      pcVar7 = (char *)(param_4);
    }
    (**(code **)(param_1 + 100))(*(undefined4 *)(param_1 + 4),*param_2,pcVar7);
  }
  return (char)('\0');
}


// Reference entry 112cc0b0; body size 356 bytes.
#line 1 "ENTRY_112cc0b0"

char * FUN_112cc0b0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  
  iVar3 = (int)(*(int *)(param_1 + 0x160));
  if (*(uint *)(iVar3 + 0xb0) < 0xccccccd) {
    uVar6 = (uint)(*(uint *)(iVar3 + 0xb0) * 0x14);
    if ((uVar6 <= ~*(uint *)(iVar3 + 0xa8)) &&
       (pcVar5 = (char *)(**(code **)(param_1 + 0xc))(uVar6 + *(uint *)(iVar3 + 0xa8)),
       (char *)(pcVar5) != (char *)0x0)) {
      iVar7 = (int)(*(int *)(iVar3 + 0xb0));
      pcVar5[0xc] = (char)('\0');
      pcVar5[0xd] = (char)('\0');
      pcVar5[0xe] = (char)('\0');
      pcVar5[0xf] = (char)('\0');
      pcVar9 = (char *)(pcVar5 + 0x14);
      iVar7 = (int)(iVar7 * 0x14);
      pcVar10 = (char *)(pcVar5 + iVar7);
      if (pcVar5 < pcVar10) {
        puVar11 = (uint *)((uint *)(pcVar5 + 8));
        param_1 = (int)((iVar7 - 1U) / 0x14 + 1);
        do {
          iVar7 = (int)(puVar11[1] * 0x1c);
          uVar6 = (uint)(*(uint *)(iVar7 + *(int *)(iVar3 + 0xa4)));
          puVar11[-2] = (uint)(uVar6);
          puVar11[-1] = (uint)(*(uint *)(iVar7 + 4 + *(int *)(iVar3 + 0xa4)));
          if (uVar6 == 4) {
            *puVar11 = (uint)((uint)pcVar10);
            pcVar4 = (char *)(*(char **)(iVar7 + 8 + *(int *)(iVar3 + 0xa4)));
            *pcVar10 = (char)(*pcVar4);
            cVar2 = (char)(*pcVar4);
            while (pcVar10 = pcVar10 + 1, cVar2 != '\0') {
              pcVar1 = (char *)(pcVar4 + 1);
              pcVar4 = (char *)(pcVar4 + 1);
              *pcVar10 = (char)(*pcVar1);
              cVar2 = (char)(*pcVar4);
            }
            puVar11[1] = (uint)(0);
            puVar11[2] = (uint)(0);
          }
          else {
            *puVar11 = (uint)(0);
            uVar6 = (uint)(*(uint *)(iVar7 + 0x14 + *(int *)(iVar3 + 0xa4)));
            uVar8 = (uint)(0);
            puVar11[1] = (uint)(uVar6);
            puVar11[2] = (uint)((uint)pcVar9);
            iVar7 = (int)(*(int *)(*(int *)(iVar3 + 0xa4) + 0xc + iVar7));
            if (uVar6 != 0) {
              do {
                *(int *)(pcVar9 + 0xc) = iVar7;
                uVar8 = (uint)(uVar8 + 1);
                pcVar9 = (char *)(pcVar9 + 0x14);
                iVar7 = (int)(*(int *)(*(int *)(iVar3 + 0xa4) + 0x18 + iVar7 * 0x1c));
              } while (uVar8 < puVar11[1]);
            }
          }
          puVar11 = (uint *)(puVar11 + 5);
          param_1 = (int)(param_1 + -1);
        } while (param_1 != 0);
      }
      return (char *)(pcVar5);
    }
  }
  return (char *)((char *)0x0);
}


// Reference entry 112cc360; body size 78 bytes.
#line 1 "ENTRY_112cc360"

int FUN_112cc360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(FUN_112ccb80(param_1,0,*(undefined4 *)(param_1 + 0x90),param_2,param_3,param_4,
                       *(char *)(param_1 + 0x1e0) == '\0',0));
  if ((iVar2 == 0) && (cVar1 = FUN_112d75b0(param_1), cVar1 == '\0')) {
    return (int)(1);
  }
  return (int)(iVar2);
}


// Reference entry 112d0d50; body size 508 bytes.
#line 1 "ENTRY_112d0d50"

void FUN_112d0d50(int *param_1,char param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = (int *)((int *)param_1[5]);
  if ((int *)(piVar5) == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)(piVar5 + param_1[7]);
  }
  while ((int *)(piVar5) != (int *)(piVar4)) {
    while( true ) {
      iVar1 = (int)(*piVar5);
      piVar5 = (int *)(piVar5 + 1);
      if (iVar1 != 0) break;
      if ((int *)(piVar5) == (int *)(piVar4)) goto LAB_112d0d85;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      (**(code **)(param_3 + 8))(*(undefined4 *)(iVar1 + 0x14));
    }
  }
LAB_112d0d85:
  uVar6 = (uint)(0);
  if (param_1[2] != 0) {
    do {
      (**(code **)(param_1[4] + 8))(*(undefined4 *)(*param_1 + uVar6 * 4));
      uVar6 = (uint)(uVar6 + 1);
    } while (uVar6 < (uint)param_1[2]);
  }
  (**(code **)(param_1[4] + 8))(*param_1);
  uVar6 = (uint)(0);
  if (param_1[0x23] != 0) {
    do {
      (**(code **)(param_1[0x25] + 8))(*(undefined4 *)(param_1[0x21] + uVar6 * 4));
      uVar6 = (uint)(uVar6 + 1);
    } while (uVar6 < (uint)param_1[0x23]);
  }
  (**(code **)(param_1[0x25] + 8))(param_1[0x21]);
  uVar6 = (uint)(0);
  if (param_1[7] != 0) {
    do {
      (**(code **)(param_1[9] + 8))(*(undefined4 *)(param_1[5] + uVar6 * 4));
      uVar6 = (uint)(uVar6 + 1);
    } while (uVar6 < (uint)param_1[7]);
  }
  (**(code **)(param_1[9] + 8))(param_1[5]);
  uVar6 = (uint)(0);
  if (param_1[0xc] != 0) {
    do {
      (**(code **)(param_1[0xe] + 8))(*(undefined4 *)(param_1[10] + uVar6 * 4));
      uVar6 = (uint)(uVar6 + 1);
    } while (uVar6 < (uint)param_1[0xc]);
  }
  (**(code **)(param_1[0xe] + 8))(param_1[10]);
  uVar6 = (uint)(0);
  if (param_1[0x11] != 0) {
    do {
      (**(code **)(param_1[0x13] + 8))(*(undefined4 *)(param_1[0xf] + uVar6 * 4));
      uVar6 = (uint)(uVar6 + 1);
    } while (uVar6 < (uint)param_1[0x11]);
  }
  (**(code **)(param_1[0x13] + 8))(param_1[0xf]);
  puVar3 = (undefined4 *)((undefined4 *)param_1[0x14]);
  while ((undefined4 *)(puVar3) != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar3);
    (**(code **)(param_1[0x19] + 8))(puVar3);
    puVar3 = (undefined4 *)(puVar2);
  }
  puVar3 = (undefined4 *)((undefined4 *)param_1[0x15]);
  while ((undefined4 *)(puVar3) != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar3);
    (**(code **)(param_1[0x19] + 8))(puVar3);
    puVar3 = (undefined4 *)(puVar2);
  }
  puVar3 = (undefined4 *)((undefined4 *)param_1[0x1a]);
  while ((undefined4 *)(puVar3) != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar3);
    (**(code **)(param_1[0x1f] + 8))(puVar3);
    puVar3 = (undefined4 *)(puVar2);
  }
  puVar3 = (undefined4 *)((undefined4 *)param_1[0x1b]);
  while ((undefined4 *)(puVar3) != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar3);
    (**(code **)(param_1[0x1f] + 8))(puVar3);
    puVar3 = (undefined4 *)(puVar2);
  }
  if (param_2 != '\0') {
    (**(code **)(param_3 + 8))(param_1[0x2e]);
    (**(code **)(param_3 + 8))(param_1[0x29]);
  }
  (**(code **)(param_3 + 8))(param_1);
  return;
}


// Reference entry 112d0fd0; body size 611 bytes.
#line 1 "ENTRY_112d0fd0"

void FUN_112d0fd0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)((int *)param_1[5]);
  if ((int *)(piVar3) == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)(piVar3 + param_1[7]);
  }
  while ((int *)(piVar3) != (int *)(piVar2)) {
    while( true ) {
      iVar1 = (int)(*piVar3);
      piVar3 = (int *)(piVar3 + 1);
      if (iVar1 != 0) break;
      if ((int *)(piVar3) == (int *)(piVar2)) goto LAB_112d1005;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      (**(code **)(param_2 + 8))(*(undefined4 *)(iVar1 + 0x14));
    }
  }
LAB_112d1005:
  uVar4 = (uint)(0);
  if (param_1[2] != 0) {
    do {
      (**(code **)(param_1[4] + 8))(*(undefined4 *)(*param_1 + uVar4 * 4));
      *(undefined4 *)(*param_1 + uVar4 * 4) = 0;
      uVar4 = (uint)(uVar4 + 1);
    } while (uVar4 < (uint)param_1[2]);
  }
  param_1[3] = (int)(0);
  uVar4 = (uint)(0);
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  if (param_1[0x23] != 0) {
    do {
      (**(code **)(param_1[0x25] + 8))(*(undefined4 *)(param_1[0x21] + uVar4 * 4));
      *(undefined4 *)(param_1[0x21] + uVar4 * 4) = 0;
      uVar4 = (uint)(uVar4 + 1);
    } while (uVar4 < (uint)param_1[0x23]);
  }
  uVar4 = (uint)(0);
  param_1[0x24] = (int)(0);
  if (param_1[7] != 0) {
    do {
      (**(code **)(param_1[9] + 8))(*(undefined4 *)(param_1[5] + uVar4 * 4));
      *(undefined4 *)(param_1[5] + uVar4 * 4) = 0;
      uVar4 = (uint)(uVar4 + 1);
    } while (uVar4 < (uint)param_1[7]);
  }
  uVar4 = (uint)(0);
  param_1[8] = (int)(0);
  if (param_1[0xc] != 0) {
    do {
      (**(code **)(param_1[0xe] + 8))(*(undefined4 *)(param_1[10] + uVar4 * 4));
      *(undefined4 *)(param_1[10] + uVar4 * 4) = 0;
      uVar4 = (uint)(uVar4 + 1);
    } while (uVar4 < (uint)param_1[0xc]);
  }
  uVar4 = (uint)(0);
  param_1[0xd] = (int)(0);
  if (param_1[0x11] != 0) {
    do {
      (**(code **)(param_1[0x13] + 8))(*(undefined4 *)(param_1[0xf] + uVar4 * 4));
      *(undefined4 *)(param_1[0xf] + uVar4 * 4) = 0;
      uVar4 = (uint)(uVar4 + 1);
    } while (uVar4 < (uint)param_1[0x11]);
  }
  param_1[0x12] = (int)(0);
  piVar3 = (int *)((int *)param_1[0x14]);
  if (param_1[0x15] == 0) {
    param_1[0x15] = (int)((int)piVar3);
  }
  else {
    while ((int *)(piVar3) != (int *)0x0) {
      piVar2 = (int *)((int *)*piVar3);
      *piVar3 = (int)(param_1[0x15]);
      param_1[0x15] = (int)((int)piVar3);
      piVar3 = (int *)(piVar2);
    }
  }
  param_1[0x14] = (int)(0);
  param_1[0x18] = (int)(0);
  param_1[0x17] = (int)(0);
  param_1[0x16] = (int)(0);
  piVar3 = (int *)((int *)param_1[0x1a]);
  if (param_1[0x1b] == 0) {
    param_1[0x1b] = (int)((int)piVar3);
  }
  else {
    while ((int *)(piVar3) != (int *)0x0) {
      piVar2 = (int *)((int *)*piVar3);
      *piVar3 = (int)(param_1[0x1b]);
      param_1[0x1b] = (int)((int)piVar3);
      piVar3 = (int *)(piVar2);
    }
  }
  param_1[0x1a] = (int)(0);
  param_1[0x1e] = (int)(0);
  param_1[0x1d] = (int)(0);
  param_1[0x1c] = (int)(0);
  param_1[0x26] = (int)(0);
  param_1[0x27] = (int)(0);
  *(undefined1 *)(param_1 + 0x28) = 0;
  (**(code **)(param_2 + 8))(param_1[0x2e]);
  param_1[0x2e] = (int)(0);
  (**(code **)(param_2 + 8))(param_1[0x29]);
  param_1[0x29] = (int)(0);
  param_1[0x2d] = (int)(0);
  param_1[0x2b] = (int)(0);
  param_1[0x2c] = (int)(0);
  param_1[0x2a] = (int)(0);
  *(undefined2 *)(param_1 + 0x20) = 1;
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  return;
}


// Reference entry 112d1980; body size 78 bytes.
#line 1 "ENTRY_112d1980"

int FUN_112d1980(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(FUN_112ccb80(param_1,1,*(undefined4 *)(param_1 + 0x90),param_2,param_3,param_4,
                       *(char *)(param_1 + 0x1e0) == '\0',1));
  if ((iVar2 == 0) && (cVar1 = FUN_112d75b0(param_1), cVar1 == '\0')) {
    return (int)(1);
  }
  return (int)(iVar2);
}


// Reference entry 112d26d0; body size 104 bytes.
#line 1 "ENTRY_112d26d0"

ulong FUN_112d26d0(char *param_1,ulong param_2)

{
  int *piVar1;
  ulong uVar2;
  char *local_4;
  
  local_4 = (char *)(getenv(param_1));
  if ((char *)(local_4) == (char *)0x0) {
    return (ulong)(param_2);
  }
  piVar1 = (int *)(_errno());
  *piVar1 = (int)(0);
  uVar2 = (ulong)(strtoul(local_4,&local_4,10));
  piVar1 = (int *)(_errno());
  if ((*piVar1 == 0) && (*local_4 == '\0')) {
    return (ulong)(uVar2);
  }
  piVar1 = (int *)(_errno());
  *piVar1 = (int)(0);
  return (ulong)(param_2);
}


// Reference entry 112d2890; body size 353 bytes.
#line 1 "ENTRY_112d2890"

void FUN_112d2890(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_410 [256];
  undefined4 local_10;
  undefined4 local_c;
  code *local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_410);
  pcVar2 = (code *)(*(code **)(param_1 + 0x7c));
  if ((code *)(pcVar2) != (code *)0x0) {
    puVar4 = (undefined4 *)(local_410);
    for (iVar3 = (int)(0x100); iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = (undefined4)(0xffffffff);
      puVar4 = (undefined4 *)(puVar4 + 1);
    }
    local_c = (undefined4)(0);
    local_10 = (undefined4)(0);
    local_8 = (code *)((code *)0x0);
    iVar3 = (int)((*pcVar2)(*(undefined4 *)(param_1 + 0xf4),param_2,local_410));
    if (iVar3 != 0) {
      uVar1 = (undefined4)(thunk_FUN_112dee30());
      iVar3 = (int)((**(code **)(param_1 + 0xc))(uVar1));
      *(int *)(param_1 + 0xec) = iVar3;
      if (iVar3 == 0) {
        if ((code *)(local_8) != (code *)0x0) {
          (*local_8)(local_10);
        }
        thunk_FUN_1148ac28();
        return;
      }
      pcVar2 = (code *)(thunk_FUN_112dea80);
      if (*(char *)(param_1 + 0xe8) != '\0') {
        pcVar2 = (code *)(thunk_FUN_112ded60);
      }
      iVar3 = (int)((*pcVar2)(iVar3,local_410,local_c,local_10));
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0xf0) = local_10;
        *(int *)(param_1 + 0x90) = iVar3;
        *(code **)(param_1 + 0xf8) = local_8;
        thunk_FUN_1148ac28();
        return;
      }
    }
    if ((code *)(local_8) != (code *)0x0) {
      (*local_8)(local_10);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112d3400; body size 315 bytes.
#line 1 "ENTRY_112d3400"

uint FUN_112d3400(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (int)(*(int *)(param_1 + 0x160));
  if (*(int *)(iVar1 + 0xb8) == 0) {
    puVar4 = (undefined4 *)((undefined4 *)(**(code **)(param_1 + 0xc))(*(int *)(param_1 + 0x1d0) << 2));
    *(undefined4 **)(iVar1 + 0xb8) = puVar4;
    if ((undefined4 *)(puVar4) == (undefined4 *)0x0) {
      return (uint)(0xffffffff);
    }
    *puVar4 = (undefined4)(0);
  }
  uVar6 = (uint)(*(uint *)(iVar1 + 0xb0));
  uVar2 = (uint)(*(uint *)(iVar1 + 0xac));
  if (uVar2 <= uVar6) {
    if (*(int *)(iVar1 + 0xa4) == 0) {
      iVar5 = (int)((**(code **)(param_1 + 0xc))(0x380));
      if (iVar5 == 0) {
        return (uint)(0xffffffff);
      }
      *(undefined4 *)(iVar1 + 0xac) = 0x20;
    }
    else {
      if ((0x7fffffff < uVar2) || (0x4924924 < uVar2)) {
        return (uint)(0xffffffff);
      }
      iVar5 = (int)((**(code **)(param_1 + 0x10))(*(int *)(iVar1 + 0xa4),uVar2 * 0x38));
      if (iVar5 == 0) {
        return (uint)(0xffffffff);
      }
      *(int *)(iVar1 + 0xac) = *(int *)(iVar1 + 0xac) * 2;
    }
    uVar6 = (uint)(*(uint *)(iVar1 + 0xb0));
    *(int *)(iVar1 + 0xa4) = iVar5;
  }
  *(uint *)(iVar1 + 0xb0) = uVar6 + 1;
  iVar3 = (int)(*(int *)(iVar1 + 0xa4));
  iVar5 = (int)(iVar3 + uVar6 * 0x1c);
  if (*(int *)(iVar1 + 0xb4) != 0) {
    iVar1 = (int)(iVar3 + *(int *)(*(int *)(iVar1 + 0xb8) + -4 + *(int *)(iVar1 + 0xb4) * 4) * 0x1c);
    if (*(int *)(iVar1 + 0x10) != 0) {
      *(uint *)(iVar3 + 0x18 + *(int *)(iVar1 + 0x10) * 0x1c) = uVar6;
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
      *(uint *)(iVar1 + 0xc) = uVar6;
    }
    *(uint *)(iVar1 + 0x10) = uVar6;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  return (uint)(uVar6);
}


// Reference entry 112d3590; body size 69 bytes.
#line 1 "ENTRY_112d3590"

void FUN_112d3590(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  cVar4 = (char)(*param_1);
  if (cVar4 != '\0') {
    while (cVar4 != '\r') {
      cVar4 = (char)(param_1[1]);
      param_1 = (char *)(param_1 + 1);
      if (cVar4 == '\0') {
        return;
      }
    }
    cVar4 = (char)('\r');
    pcVar3 = (char *)(param_1);
    do {
      pcVar2 = (char *)(param_1 + 1);
      pcVar1 = (char *)(pcVar3 + 1);
      if (cVar4 == '\r') {
        *pcVar3 = (char)('\n');
        if (*pcVar2 == '\n') {
          pcVar2 = (char *)(param_1 + 2);
        }
      }
      else {
        *pcVar3 = (char)(cVar4);
      }
      cVar4 = (char)(*pcVar2);
      param_1 = (char *)(pcVar2);
      pcVar3 = (char *)(pcVar1);
    } while (cVar4 != '\0');
    *pcVar1 = (char)('\0');
  }
  return;
}


// Reference entry 112d35f0; body size 76 bytes.
#line 1 "ENTRY_112d35f0"

void FUN_112d35f0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = (char)(*param_1);
  pcVar1 = (char *)(param_1);
  pcVar3 = (char *)(param_1);
  if (cVar2 != '\0') {
    do {
      if (((cVar2 == '\n') || (cVar2 == '\r')) || (cVar2 == ' ')) {
        if (((char *)(pcVar1) != (char *)(param_1)) && (pcVar1[-1] != ' ')) {
          *pcVar1 = (char)(' ');
          goto LAB_112d3620;
        }
      }
      else {
        *pcVar1 = (char)(cVar2);
LAB_112d3620:
        pcVar1 = (char *)(pcVar1 + 1);
      }
      cVar2 = (char)(pcVar3[1]);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar2 != '\0');
    if (((char *)(pcVar1) != (char *)(param_1)) && (pcVar1[-1] == ' ')) {
      pcVar1 = (char *)(pcVar1 + -1);
    }
  }
  *pcVar1 = (char)('\0');
  return;
}


// Reference entry 112d4360; body size 421 bytes.
#line 1 "ENTRY_112d4360"

int FUN_112d4360(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *_Src;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int *_Dst;
  int iVar8;
  
  iVar7 = (int)(param_1[3]);
  do {
    iVar8 = (int)(param_1[2]);
    if (iVar7 == iVar8) {
      piVar6 = (int *)((int *)param_1[1]);
      if ((int *)(piVar6) == (int *)0x0) {
LAB_112d43fa:
        iVar2 = (int)(*param_1);
        if ((iVar2 == 0) || (iVar3 = param_1[4], iVar3 != iVar2 + 8)) {
          iVar8 = (int)(iVar8 - param_1[4]);
          if (iVar8 < 0) {
            return (int)(0);
          }
          if (iVar8 < 0x400) {
            iVar8 = (int)(0x400);
            iVar7 = (int)(0x408);
          }
          else {
            iVar8 = (int)(iVar8 * 2);
            if (iVar8 < 0) {
              return (int)(0);
            }
            if (iVar8 < 1) {
              return (int)(0);
            }
            iVar7 = (int)(iVar8 + 8);
            if (iVar7 == 0) {
              return (int)(0);
            }
          }
          piVar6 = (int *)((int *)(**(code **)param_1[5])(iVar7));
          if ((int *)(piVar6) == (int *)0x0) {
            return (int)(0);
          }
          piVar6[1] = (int)(iVar8);
          _Dst = (int *)(piVar6 + 2);
          *piVar6 = (int)(*param_1);
          pvVar4 = (void *)((void *)param_1[3]);
          _Src = (void *)((void *)param_1[4]);
          *param_1 = (int)((int)piVar6);
          if ((void *)(pvVar4) != (void *)(_Src)) {
            memcpy(_Dst,_Src,(int)pvVar4 - (int)_Src);
            pvVar4 = (void *)((void *)param_1[3]);
            _Src = (void *)((void *)param_1[4]);
          }
          pvVar5 = (void *)((void *)(iVar8 + 8 + (int)piVar6));
          iVar7 = (int)((int)pvVar4 - (int)_Src);
        }
        else {
          piVar6 = (int *)((int *)(iVar7 - iVar3));
          iVar8 = (int)((iVar8 - iVar3) * 2);
          if (((iVar8 < 0) || (iVar8 < 1)) || (iVar8 + 8 == 0)) {
            return (int)(0);
          }
          iVar7 = (int)((**(code **)(param_1[5] + 4))(iVar2,iVar8 + 8));
          if (iVar7 == 0) {
            return (int)(0);
          }
          *param_1 = (int)(iVar7);
          *(int *)(iVar7 + 4) = iVar8;
          iVar7 = (int)(*param_1);
          _Dst = (int *)((int *)(iVar7 + 8));
          pvVar5 = (void *)((void *)(iVar8 + (int)_Dst));
        }
        param_1[3] = (int)((int)piVar6 + iVar7 + 8);
        param_1[4] = (int)((int)_Dst);
        param_1[2] = (int)((int)pvVar5);
      }
      else if (param_1[4] == 0) {
        *param_1 = (int)((int)piVar6);
        param_1[1] = (int)(*piVar6);
        *piVar6 = (int)(0);
        iVar7 = (int)(*param_1 + 8);
        param_1[4] = (int)(iVar7);
        iVar8 = (int)(*(int *)(*param_1 + 4));
        param_1[3] = (int)(iVar7);
        param_1[2] = (int)(iVar8 + iVar7);
      }
      else {
        if (piVar6[1] <= iVar8 - param_1[4]) goto LAB_112d43fa;
        iVar7 = (int)(*piVar6);
        *piVar6 = (int)(*param_1);
        iVar8 = (int)(param_1[1]);
        param_1[1] = (int)(iVar7);
        *param_1 = (int)(iVar8);
        memcpy((void *)(iVar8 + 8),(void *)param_1[4],param_1[2] - param_1[4]);
        iVar7 = (int)(*param_1);
        param_1[3] = (int)(param_1[3] + (iVar7 - param_1[4]) + 8);
        param_1[4] = (int)(iVar7 + 8);
        param_1[2] = (int)(*(int *)(iVar7 + 4) + iVar7 + 8);
      }
    }
    *(char*)param_1[3] = (char)((int)(*param_2));
    iVar7 = (int)(param_1[3] + 1);
    param_1[3] = (int)(iVar7);
    cVar1 = (char)(*param_2);
    param_2 = (char *)(param_2 + 1);
    if (cVar1 == '\0') {
      iVar8 = (int)(param_1[4]);
      param_1[4] = (int)(iVar7);
      return (int)(iVar8);
    }
  } while( true );
}


// Reference entry 112d5030; body size 85 bytes.
#line 1 "ENTRY_112d5030"

void FUN_112d5030(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(param_2);
  uVar2 = (undefined4)((*(code *)**(undefined4 **)(param_1 + 0x90))
                    (*(undefined4 **)(param_1 + 0x90),param_2,param_3,&param_2));
  FUN_112cdda0(param_1,*(undefined4 *)(param_1 + 0x90),uVar1,param_3,uVar2,param_2,param_4,
               *(char *)(param_1 + 0x1e0) == '\0',1,0);
  return;
}


// Reference entry 112d5180; body size 180 bytes.
#line 1 "ENTRY_112d5180"

void FUN_112d5180(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  if (*(char *)(param_2 + 0x44) != '\0') {
    (**(code **)(param_1 + 0x50))(*(undefined4 *)(param_1 + 4),param_3,param_4 - param_3);
    return;
  }
  if ((int)(param_2) == *(int *)(param_1 + 0x90)) {
    piVar3 = (int *)((int *)(param_1 + 0x11c));
    piVar1 = (int *)((int *)(param_1 + 0x120));
  }
  else {
    piVar3 = (int *)(*(int **)(param_1 + 0x128));
    piVar1 = (int *)(piVar3 + 1);
  }
  do {
    local_4 = (int)(*(int *)(param_1 + 0x2c));
    iVar2 = (int)((**(code **)(param_2 + 0x38))
                      (param_2,&param_3,param_4,&local_4,*(undefined4 *)(param_1 + 0x30)));
    *piVar1 = (int)(param_3);
    (**(code **)(param_1 + 0x50))
              (*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x2c),
               local_4 - *(int *)(param_1 + 0x2c));
    *piVar3 = (int)(param_3);
    if (iVar2 == 0) {
      return;
    }
  } while (iVar2 != 1);
  return;
}


// Reference entry 112d58b0; body size 125 bytes.
#line 1 "ENTRY_112d58b0"

uint * FUN_112d58b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2[1]);
  *param_1 = (uint)(*param_2 ^ 0x70736575);
  param_1[1] = (uint)(uVar1 ^ 0x736f6d65);
  uVar1 = (uint)(param_2[3]);
  param_1[2] = (uint)(param_2[2] ^ 0x6e646f6d);
  param_1[3] = (uint)(uVar1 ^ 0x646f7261);
  uVar1 = (uint)(param_2[1]);
  param_1[4] = (uint)(*param_2 ^ 0x6e657261);
  param_1[5] = (uint)(uVar1 ^ 0x6c796765);
  uVar1 = (uint)(param_2[2]);
  param_1[7] = (uint)(param_2[3] ^ 0x74656462);
  param_1[6] = (uint)(uVar1 ^ 0x79746573);
  param_1[10] = (uint)((uint)(param_1 + 8));
  param_1[0xc] = (uint)(0);
  param_1[0xd] = (uint)(0);
  return (uint *)(param_1);
}


// Reference entry 112d75b0; body size 154 bytes.
#line 1 "ENTRY_112d75b0"

undefined4 FUN_112d75b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x168));
  while( true ) {
    if ((undefined4 *)(puVar2) == (undefined4 *)0x0) {
      return (undefined4)(1);
    }
    iVar3 = (int)(puVar2[9]);
    iVar4 = (int)(puVar2[6] + 1);
    _Dst = (void *)((void *)(iVar3 + iVar4));
    if ((void *)(void *)(puVar2[1]) == (void *)(_Dst)) break;
    if (0x7fffffffU - iVar4 < (uint)puVar2[2]) {
      return (undefined4)(0);
    }
    iVar1 = (int)(puVar2[2] + iVar4);
    if (puVar2[10] - iVar3 < iVar1) {
      iVar3 = (int)((**(code **)(param_1 + 0x10))(iVar3,iVar1));
      if (iVar3 == 0) {
        return (undefined4)(0);
      }
      if (puVar2[3] == puVar2[9]) {
        puVar2[3] = (undefined4)(iVar3);
      }
      if (puVar2[4] != 0) {
        puVar2[4] = (undefined4)((puVar2[4] - puVar2[9]) + iVar3);
      }
      puVar2[9] = (undefined4)(iVar3);
      puVar2[10] = (undefined4)(iVar3 + iVar1);
      _Dst = (void *)((void *)(iVar3 + iVar4));
    }
    memcpy(_Dst,(void *)puVar2[1],puVar2[2]);
    puVar2[1] = (undefined4)(_Dst);
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
  }
  return (undefined4)(1);
}


// Reference entry 112d76b0; body size 1548 bytes.
#line 1 "ENTRY_112d76b0"

undefined4 * FUN_112d76b0(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return (undefined4 *)((undefined4 *)&DAT_119ea930);
  case 1:
    return (undefined4 *)((undefined4 *)&DAT_119ea934);
  case 2:
    return (undefined4 *)((undefined4 *)&DAT_119ea938);
  case 3:
    return (undefined4 *)((undefined4 *)&DAT_119ea93c);
  case 4:
    return (undefined4 *)((undefined4 *)&DAT_119ea940);
  case 5:
    return (undefined4 *)((undefined4 *)&DAT_119ea944);
  case 6:
    return (undefined4 *)((undefined4 *)&DAT_119ea948);
  case 7:
    return (undefined4 *)((undefined4 *)&DAT_119ea94c);
  case 8:
    return (undefined4 *)((undefined4 *)&DAT_119ea950);
  case 9:
    return (undefined4 *)((undefined4 *)&DAT_119ea954);
  case 10:
    return (undefined4 *)((undefined4 *)&DAT_119ea958);
  case 0xb:
    return (undefined4 *)((undefined4 *)&DAT_119ea95c);
  case 0xc:
    return (undefined4 *)((undefined4 *)&DAT_119ea960);
  case 0xd:
    return (undefined4 *)((undefined4 *)&DAT_119ea964);
  case 0xe:
    return (undefined4 *)((undefined4 *)&DAT_119ea968);
  case 0xf:
    return (undefined4 *)((undefined4 *)&DAT_119ea96c);
  case 0x10:
    return (undefined4 *)((undefined4 *)&DAT_119ea970);
  case 0x11:
    return (undefined4 *)((undefined4 *)&DAT_119ea978);
  case 0x12:
    return (undefined4 *)((undefined4 *)&DAT_119ea980);
  case 0x13:
    return (undefined4 *)((undefined4 *)&DAT_119ea988);
  case 0x14:
    return (undefined4 *)((undefined4 *)&DAT_119ea990);
  case 0x15:
    return (undefined4 *)((undefined4 *)&DAT_119ea998);
  case 0x16:
    return (undefined4 *)((undefined4 *)&DAT_119ea9a0);
  case 0x17:
    return (undefined4 *)((undefined4 *)&DAT_119ea9a8);
  case 0x18:
    return (undefined4 *)((undefined4 *)&DAT_119ea9b0);
  case 0x19:
    return (undefined4 *)((undefined4 *)&DAT_119ea9b8);
  case 0x1a:
    return (undefined4 *)((undefined4 *)&DAT_119ea9c0);
  case 0x1b:
    return (undefined4 *)((undefined4 *)&DAT_119ea9c8);
  case 0x1c:
    return (undefined4 *)((undefined4 *)&DAT_119ea9d0);
  case 0x1d:
    return (undefined4 *)((undefined4 *)&DAT_119ea9d8);
  case 0x1e:
    return (undefined4 *)((undefined4 *)&DAT_119ea9e0);
  case 0x1f:
    return (undefined4 *)((undefined4 *)&DAT_119ea9e8);
  case 0x20:
    return (undefined4 *)(&DAT_11882ff0);
  case 0x21:
    return (undefined4 *)((undefined4 *)&DAT_119361d4);
  case 0x22:
    return (undefined4 *)((undefined4 *)&DAT_119df29c);
  case 0x23:
    return (undefined4 *)((undefined4 *)&DAT_1188482c);
  case 0x24:
    return (undefined4 *)((undefined4 *)&DAT_119361dc);
  case 0x25:
    return (undefined4 *)((undefined4 *)&DAT_1188eaec);
  case 0x26:
    return (undefined4 *)((undefined4 *)&DAT_11884824);
  case 0x27:
    return (undefined4 *)((undefined4 *)&DAT_119361ec);
  case 0x28:
    return (undefined4 *)((undefined4 *)&DAT_118b7bc8);
  case 0x29:
    return (undefined4 *)((undefined4 *)&DAT_118961fc);
  case 0x2a:
    return (undefined4 *)((undefined4 *)&DAT_11880fd8);
  case 0x2b:
    return (undefined4 *)((undefined4 *)&DAT_119361e0);
  case 0x2c:
    return (undefined4 *)((undefined4 *)&DAT_118850bc);
  case 0x2d:
    return (undefined4 *)((undefined4 *)&DAT_118c8274);
  case 0x2e:
    return (undefined4 *)((undefined4 *)&DAT_1188cc74);
  case 0x2f:
    return (undefined4 *)((undefined4 *)&DAT_1187d7f4);
  case 0x30:
    return (undefined4 *)((undefined4 *)&DAT_118872c0);
  case 0x31:
    return (undefined4 *)((undefined4 *)&DAT_11881128);
  case 0x32:
    return (undefined4 *)((undefined4 *)&DAT_119159c4);
  case 0x33:
    return (undefined4 *)((undefined4 *)&DAT_119ea9f0);
  case 0x34:
    return (undefined4 *)((undefined4 *)&DAT_119d8c58);
  case 0x35:
    return (undefined4 *)((undefined4 *)&DAT_118fe24c);
  case 0x36:
    return (undefined4 *)((undefined4 *)&DAT_119ea9f4);
  case 0x37:
    return (undefined4 *)((undefined4 *)&DAT_119d8c60);
  case 0x38:
    return (undefined4 *)((undefined4 *)&DAT_119ea9f8);
  case 0x39:
    return (undefined4 *)((undefined4 *)&DAT_119ea9fc);
  case 0x3a:
    return (undefined4 *)((undefined4 *)&DAT_11884554);
  case 0x3b:
    return (undefined4 *)((undefined4 *)&DAT_11884550);
  case 0x3c:
    return (undefined4 *)((undefined4 *)&DAT_1189dab8);
  case 0x3d:
    return (undefined4 *)((undefined4 *)&DAT_11884828);
  case 0x3e:
    return (undefined4 *)((undefined4 *)&DAT_1189dabc);
  case 0x3f:
    return (undefined4 *)((undefined4 *)&DAT_11884820);
  case 0x40:
    return (undefined4 *)((undefined4 *)&DAT_119361d8);
  case 0x41:
    return (undefined4 *)((undefined4 *)&DAT_119eaa00);
  case 0x42:
    return (undefined4 *)((undefined4 *)&DAT_1194c4b4);
  case 0x43:
    return (undefined4 *)((undefined4 *)&DAT_1194c46c);
  case 0x44:
    return (undefined4 *)((undefined4 *)&DAT_119eaa04);
  case 0x45:
    return (undefined4 *)((undefined4 *)&DAT_119eaa08);
  case 0x46:
    return (undefined4 *)((undefined4 *)&DAT_1187db24);
  case 0x47:
    return (undefined4 *)((undefined4 *)&DAT_119eaa0c);
  case 0x48:
    return (undefined4 *)((undefined4 *)&DAT_119eaa10);
  case 0x49:
    return (undefined4 *)((undefined4 *)&DAT_119eaa14);
  case 0x4a:
    return (undefined4 *)((undefined4 *)&DAT_119eaa18);
  case 0x4b:
    return (undefined4 *)((undefined4 *)&DAT_119eaa1c);
  case 0x4c:
    return (undefined4 *)((undefined4 *)&DAT_119352e0);
  case 0x4d:
    return (undefined4 *)((undefined4 *)&DAT_119eaa20);
  case 0x4e:
    return (undefined4 *)((undefined4 *)&DAT_119eaa24);
  case 0x4f:
    return (undefined4 *)((undefined4 *)&DAT_119eaa28);
  case 0x50:
    return (undefined4 *)((undefined4 *)&DAT_119eaa2c);
  case 0x51:
    return (undefined4 *)((undefined4 *)&DAT_119eaa30);
  case 0x52:
    return (undefined4 *)((undefined4 *)&DAT_119eaa34);
  case 0x53:
    return (undefined4 *)((undefined4 *)&DAT_118b3e88);
  case 0x54:
    return (undefined4 *)((undefined4 *)&DAT_1187db20);
  case 0x55:
    return (undefined4 *)((undefined4 *)&DAT_119eaa38);
  case 0x56:
    return (undefined4 *)((undefined4 *)&DAT_119eaa3c);
  case 0x57:
    return (undefined4 *)((undefined4 *)&DAT_1194c4b8);
  case 0x58:
    return (undefined4 *)((undefined4 *)&DAT_119362ac);
  case 0x59:
    return (undefined4 *)((undefined4 *)&DAT_119eaa40);
  case 0x5a:
    return (undefined4 *)((undefined4 *)&DAT_119eaa44);
  case 0x5b:
    return (undefined4 *)((undefined4 *)&DAT_119361e4);
  case 0x5c:
    return (undefined4 *)((undefined4 *)&DAT_11880fc4);
  case 0x5d:
    return (undefined4 *)((undefined4 *)&DAT_119361e8);
  case 0x5e:
    return (undefined4 *)((undefined4 *)&DAT_118d04a8);
  case 0x5f:
    return (undefined4 *)((undefined4 *)&DAT_11880fd0);
  case 0x60:
    return (undefined4 *)((undefined4 *)&DAT_11880fe0);
  case 0x61:
    return (undefined4 *)((undefined4 *)&DAT_1199345c);
  case 0x62:
    return (undefined4 *)((undefined4 *)&DAT_119dc618);
  case 99:
    return (undefined4 *)((undefined4 *)&DAT_1194c4bc);
  case 100:
    return (undefined4 *)((undefined4 *)&DAT_1191aeac);
  case 0x65:
    return (undefined4 *)((undefined4 *)&DAT_1199360c);
  case 0x66:
    return (undefined4 *)((undefined4 *)&DAT_119eaa48);
  case 0x67:
    return (undefined4 *)((undefined4 *)&DAT_119eaa4c);
  case 0x68:
    return (undefined4 *)((undefined4 *)&DAT_119c0d68);
  case 0x69:
    return (undefined4 *)((undefined4 *)&DAT_119c0d60);
  case 0x6a:
    return (undefined4 *)((undefined4 *)&DAT_119eaa50);
  case 0x6b:
    return (undefined4 *)((undefined4 *)&DAT_119eaa54);
  case 0x6c:
    return (undefined4 *)((undefined4 *)&DAT_119eaa58);
  case 0x6d:
    return (undefined4 *)((undefined4 *)&DAT_11993848);
  case 0x6e:
    return (undefined4 *)((undefined4 *)&DAT_119938a8);
  case 0x6f:
    return (undefined4 *)((undefined4 *)&DAT_11993934);
  case 0x70:
    return (undefined4 *)((undefined4 *)&DAT_119df08c);
  case 0x71:
    return (undefined4 *)((undefined4 *)&DAT_119eaa5c);
  case 0x72:
    return (undefined4 *)((undefined4 *)&DAT_118a1488);
  case 0x73:
    return (undefined4 *)((undefined4 *)&DAT_119190cc);
  case 0x74:
    return (undefined4 *)((undefined4 *)&DAT_119dc620);
  case 0x75:
    return (undefined4 *)((undefined4 *)&DAT_119c0d64);
  case 0x76:
    return (undefined4 *)((undefined4 *)&DAT_119362a8);
  case 0x77:
    return (undefined4 *)((undefined4 *)&DAT_118b3060);
  case 0x78:
    return (undefined4 *)((undefined4 *)&DAT_119eaa60);
  case 0x79:
    return (undefined4 *)((undefined4 *)&DAT_119eaa64);
  case 0x7a:
    return (undefined4 *)((undefined4 *)&DAT_119c0d6c);
  case 0x7b:
    return (undefined4 *)((undefined4 *)&DAT_118872b8);
  case 0x7c:
    return (undefined4 *)((undefined4 *)&DAT_118abcd4);
  case 0x7d:
    return (undefined4 *)((undefined4 *)&DAT_118872bc);
  case 0x7e:
    return (undefined4 *)((undefined4 *)&DAT_119361f0);
  case 0x7f:
    return (undefined4 *)((undefined4 *)&DAT_119eaa68);
  case 0x80:
    return (undefined4 *)((undefined4 *)&DAT_119eaa70);
  case 0x81:
    return (undefined4 *)((undefined4 *)&DAT_119eaa78);
  case 0x82:
    return (undefined4 *)((undefined4 *)&DAT_119eaa80);
  case 0x83:
    return (undefined4 *)((undefined4 *)&DAT_119eaa88);
  case 0x84:
    return (undefined4 *)((undefined4 *)&DAT_119eaa90);
  case 0x85:
    return (undefined4 *)((undefined4 *)&DAT_119eaa98);
  case 0x86:
    return (undefined4 *)((undefined4 *)&DAT_119eaaa0);
  case 0x87:
    return (undefined4 *)((undefined4 *)&DAT_119eaaa8);
  case 0x88:
    return (undefined4 *)((undefined4 *)&DAT_119eaab0);
  case 0x89:
    return (undefined4 *)((undefined4 *)&DAT_119eaab8);
  case 0x8a:
    return (undefined4 *)((undefined4 *)&DAT_119eaac0);
  case 0x8b:
    return (undefined4 *)((undefined4 *)&DAT_119eaac8);
  case 0x8c:
    return (undefined4 *)((undefined4 *)&DAT_119eaad0);
  case 0x8d:
    return (undefined4 *)((undefined4 *)&DAT_119eaad8);
  case 0x8e:
    return (undefined4 *)((undefined4 *)&DAT_119eaae0);
  case 0x8f:
    return (undefined4 *)((undefined4 *)&DAT_119eaae8);
  case 0x90:
    return (undefined4 *)((undefined4 *)&DAT_119eaaf0);
  case 0x91:
    return (undefined4 *)((undefined4 *)&DAT_119eaaf8);
  case 0x92:
    return (undefined4 *)((undefined4 *)&DAT_119eab00);
  case 0x93:
    return (undefined4 *)((undefined4 *)&DAT_119eab08);
  case 0x94:
    return (undefined4 *)((undefined4 *)&DAT_119eab10);
  case 0x95:
    return (undefined4 *)((undefined4 *)&DAT_119eab18);
  case 0x96:
    return (undefined4 *)((undefined4 *)&DAT_119eab20);
  case 0x97:
    return (undefined4 *)((undefined4 *)&DAT_119eab28);
  case 0x98:
    return (undefined4 *)((undefined4 *)&DAT_119eab30);
  case 0x99:
    return (undefined4 *)((undefined4 *)&DAT_119eab38);
  case 0x9a:
    return (undefined4 *)((undefined4 *)&DAT_119eab40);
  case 0x9b:
    return (undefined4 *)((undefined4 *)&DAT_119eab48);
  case 0x9c:
    return (undefined4 *)((undefined4 *)&DAT_119eab50);
  case 0x9d:
    return (undefined4 *)((undefined4 *)&DAT_119eab58);
  case 0x9e:
    return (undefined4 *)((undefined4 *)&DAT_119eab60);
  case 0x9f:
    return (undefined4 *)((undefined4 *)&DAT_119eab68);
  case 0xa0:
    return (undefined4 *)((undefined4 *)&DAT_119eab70);
  case 0xa1:
    return (undefined4 *)((undefined4 *)&DAT_119eab78);
  case 0xa2:
    return (undefined4 *)((undefined4 *)&DAT_119eab80);
  case 0xa3:
    return (undefined4 *)((undefined4 *)&DAT_119eab88);
  case 0xa4:
    return (undefined4 *)((undefined4 *)&DAT_119eab90);
  case 0xa5:
    return (undefined4 *)((undefined4 *)&DAT_119eab98);
  case 0xa6:
    return (undefined4 *)((undefined4 *)&DAT_119eaba0);
  case 0xa7:
    return (undefined4 *)((undefined4 *)&DAT_119eaba8);
  case 0xa8:
    return (undefined4 *)((undefined4 *)&DAT_119eabb0);
  case 0xa9:
    return (undefined4 *)((undefined4 *)&DAT_119eabb8);
  case 0xaa:
    return (undefined4 *)((undefined4 *)&DAT_119eabc0);
  case 0xab:
    return (undefined4 *)((undefined4 *)&DAT_119eabc8);
  case 0xac:
    return (undefined4 *)((undefined4 *)&DAT_119eabd0);
  case 0xad:
    return (undefined4 *)((undefined4 *)&DAT_119eabd8);
  case 0xae:
    return (undefined4 *)((undefined4 *)&DAT_119eabe0);
  case 0xaf:
    return (undefined4 *)((undefined4 *)&DAT_119eabe8);
  case 0xb0:
    return (undefined4 *)((undefined4 *)&DAT_119eabf0);
  case 0xb1:
    return (undefined4 *)((undefined4 *)&DAT_119eabf8);
  case 0xb2:
    return (undefined4 *)((undefined4 *)&DAT_119eac00);
  case 0xb3:
    return (undefined4 *)((undefined4 *)&DAT_119eac08);
  case 0xb4:
    return (undefined4 *)((undefined4 *)&DAT_119eac10);
  case 0xb5:
    return (undefined4 *)((undefined4 *)&DAT_119eac18);
  case 0xb6:
    return (undefined4 *)((undefined4 *)&DAT_119eac20);
  case 0xb7:
    return (undefined4 *)((undefined4 *)&DAT_119eac28);
  case 0xb8:
    return (undefined4 *)((undefined4 *)&DAT_119eac30);
  case 0xb9:
    return (undefined4 *)((undefined4 *)&DAT_119eac38);
  case 0xba:
    return (undefined4 *)((undefined4 *)&DAT_119eac40);
  case 0xbb:
    return (undefined4 *)((undefined4 *)&DAT_119eac48);
  case 0xbc:
    return (undefined4 *)((undefined4 *)&DAT_119eac50);
  case 0xbd:
    return (undefined4 *)((undefined4 *)&DAT_119eac58);
  case 0xbe:
    return (undefined4 *)((undefined4 *)&DAT_119eac60);
  case 0xbf:
    return (undefined4 *)((undefined4 *)&DAT_119eac68);
  case 0xc0:
    return (undefined4 *)((undefined4 *)&DAT_119eac70);
  case 0xc1:
    return (undefined4 *)((undefined4 *)&DAT_119eac78);
  case 0xc2:
    return (undefined4 *)((undefined4 *)&DAT_119eac80);
  case 0xc3:
    return (undefined4 *)((undefined4 *)&DAT_119eac88);
  case 0xc4:
    return (undefined4 *)((undefined4 *)&DAT_119eac90);
  case 0xc5:
    return (undefined4 *)((undefined4 *)&DAT_119eac98);
  case 0xc6:
    return (undefined4 *)((undefined4 *)&DAT_119eaca0);
  case 199:
    return (undefined4 *)((undefined4 *)&DAT_119eaca8);
  case 200:
    return (undefined4 *)((undefined4 *)&DAT_119eacb0);
  case 0xc9:
    return (undefined4 *)((undefined4 *)&DAT_119eacb8);
  case 0xca:
    return (undefined4 *)((undefined4 *)&DAT_119eacc0);
  case 0xcb:
    return (undefined4 *)((undefined4 *)&DAT_119eacc8);
  case 0xcc:
    return (undefined4 *)((undefined4 *)&DAT_119eacd0);
  case 0xcd:
    return (undefined4 *)((undefined4 *)&DAT_119eacd8);
  case 0xce:
    return (undefined4 *)((undefined4 *)&DAT_119eace0);
  case 0xcf:
    return (undefined4 *)((undefined4 *)&DAT_119eace8);
  case 0xd0:
    return (undefined4 *)((undefined4 *)&DAT_119eacf0);
  case 0xd1:
    return (undefined4 *)((undefined4 *)&DAT_119eacf8);
  case 0xd2:
    return (undefined4 *)((undefined4 *)&DAT_119ead00);
  case 0xd3:
    return (undefined4 *)((undefined4 *)&DAT_119ead08);
  case 0xd4:
    return (undefined4 *)((undefined4 *)&DAT_119ead10);
  case 0xd5:
    return (undefined4 *)((undefined4 *)&DAT_119ead18);
  case 0xd6:
    return (undefined4 *)((undefined4 *)&DAT_119ead20);
  case 0xd7:
    return (undefined4 *)((undefined4 *)&DAT_119ead28);
  case 0xd8:
    return (undefined4 *)((undefined4 *)&DAT_119ead30);
  case 0xd9:
    return (undefined4 *)((undefined4 *)&DAT_119ead38);
  case 0xda:
    return (undefined4 *)((undefined4 *)&DAT_119ead40);
  case 0xdb:
    return (undefined4 *)((undefined4 *)&DAT_119ead48);
  case 0xdc:
    return (undefined4 *)((undefined4 *)&DAT_119ead50);
  case 0xdd:
    return (undefined4 *)((undefined4 *)&DAT_119ead58);
  case 0xde:
    return (undefined4 *)((undefined4 *)&DAT_119ead60);
  case 0xdf:
    return (undefined4 *)((undefined4 *)&DAT_119ead68);
  case 0xe0:
    return (undefined4 *)((undefined4 *)&DAT_119ead70);
  case 0xe1:
    return (undefined4 *)((undefined4 *)&DAT_119ead78);
  case 0xe2:
    return (undefined4 *)((undefined4 *)&DAT_119ead80);
  case 0xe3:
    return (undefined4 *)((undefined4 *)&DAT_119ead88);
  case 0xe4:
    return (undefined4 *)((undefined4 *)&DAT_119ead90);
  case 0xe5:
    return (undefined4 *)((undefined4 *)&DAT_119ead98);
  case 0xe6:
    return (undefined4 *)((undefined4 *)&DAT_119eada0);
  case 0xe7:
    return (undefined4 *)((undefined4 *)&DAT_119eada8);
  case 0xe8:
    return (undefined4 *)((undefined4 *)&DAT_119eadb0);
  case 0xe9:
    return (undefined4 *)((undefined4 *)&DAT_119eadb8);
  case 0xea:
    return (undefined4 *)((undefined4 *)&DAT_119eadc0);
  case 0xeb:
    return (undefined4 *)((undefined4 *)&DAT_119eadc8);
  case 0xec:
    return (undefined4 *)((undefined4 *)&DAT_119eadd0);
  case 0xed:
    return (undefined4 *)((undefined4 *)&DAT_119eadd8);
  case 0xee:
    return (undefined4 *)((undefined4 *)&DAT_119eade0);
  case 0xef:
    return (undefined4 *)((undefined4 *)&DAT_119eade8);
  case 0xf0:
    return (undefined4 *)((undefined4 *)&DAT_119eadf0);
  case 0xf1:
    return (undefined4 *)((undefined4 *)&DAT_119eadf8);
  case 0xf2:
    return (undefined4 *)((undefined4 *)&DAT_119eae00);
  case 0xf3:
    return (undefined4 *)((undefined4 *)&DAT_119eae08);
  case 0xf4:
    return (undefined4 *)((undefined4 *)&DAT_119eae10);
  case 0xf5:
    return (undefined4 *)((undefined4 *)&DAT_119eae18);
  case 0xf6:
    return (undefined4 *)((undefined4 *)&DAT_119eae20);
  case 0xf7:
    return (undefined4 *)((undefined4 *)&DAT_119eae28);
  case 0xf8:
    return (undefined4 *)((undefined4 *)&DAT_119eae30);
  case 0xf9:
    return (undefined4 *)((undefined4 *)&DAT_119eae38);
  case 0xfa:
    return (undefined4 *)((undefined4 *)&DAT_119eae40);
  case 0xfb:
    return (undefined4 *)((undefined4 *)&DAT_119eae48);
  case 0xfc:
    return (undefined4 *)((undefined4 *)&DAT_119eae50);
  case 0xfd:
    return (undefined4 *)((undefined4 *)&DAT_119eae58);
  case 0xfe:
    return (undefined4 *)((undefined4 *)&DAT_119eae60);
  case 0xff:
    return (undefined4 *)((undefined4 *)&DAT_119eae68);
  }
}


// Reference entry 112d8340; body size 105 bytes.
#line 1 "ENTRY_112d8340"

undefined4 FUN_112d8340(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)(param_2);
  uVar5 = (uint)(0);
  if (param_2 != 0) {
    do {
      param_2 = (uint)(0);
      iVar2 = (int)(rand_s(&param_2));
      if (iVar2 != 0) {
        return (undefined4)(0);
      }
      uVar4 = (uint)(0);
      do {
        if (uVar1 <= uVar5) {
          return (undefined4)(1);
        }
        bVar3 = (byte)((byte)uVar4);
        uVar4 = (uint)(uVar4 + 8);
        *(char *)(uVar5 + param_1) = (char)(param_2 >> (bVar3 & 0x1f));
        uVar5 = (uint)(uVar5 + 1);
      } while (uVar4 < 0x20);
    } while (uVar5 < uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 112d9930; body size 75 bytes.
#line 1 "ENTRY_112d9930"

undefined4 FUN_112d9930(int param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  iVar3 = (int)(0);
  uVar1 = (uint)(param_3 - (int)param_2);
joined_r0x112d9943:
  pbVar5 = (byte *)(param_2);
  uVar4 = (uint)(uVar1);
  if ((int)uVar4 < 1) {
    return (undefined4)(0xffffffff);
  }
  switch(*(undefined1 *)(*pbVar5 + 0x48 + param_1)) {
  case 0:
  case 1:
  case 8:
    break;
  case 2:
    if ((int)(uVar4 - 1) < 1) {
      return (undefined4)(0xffffffff);
    }
    uVar1 = (uint)(uVar4 - 1);
    param_2 = (byte *)(pbVar5 + 1);
    if (pbVar5[1] == 0x21) {
      uVar4 = (uint)(uVar4 - 2);
      pbVar5 = (byte *)(pbVar5 + 2);
      if ((int)uVar4 < 1) {
        return (undefined4)(0xffffffff);
      }
      uVar1 = (uint)(uVar4);
      param_2 = (byte *)(pbVar5);
      if (*pbVar5 == 0x5b) {
        iVar3 = (int)(iVar3 + 1);
        goto LAB_112d99eb;
      }
    }
    goto joined_r0x112d9943;
  default:
LAB_112d99eb:
    uVar1 = (uint)(uVar4 - 1);
    param_2 = (byte *)(pbVar5 + 1);
    goto joined_r0x112d9943;
  case 4:
    if ((int)(uVar4 - 1) < 1) {
      return (undefined4)(0xffffffff);
    }
    uVar1 = (uint)(uVar4 - 1);
    param_2 = (byte *)(pbVar5 + 1);
    if (pbVar5[1] == 0x5d) {
      if ((int)(uVar4 - 2) < 1) {
        return (undefined4)(0xffffffff);
      }
      uVar1 = (uint)(uVar4 - 2);
      param_2 = (byte *)(pbVar5 + 2);
      if (pbVar5[2] == 0x3e) {
        if (iVar3 == 0) {
          *param_4 = (undefined4)(pbVar5 + 3);
          return (undefined4)(0x2a);
        }
        iVar3 = (int)(iVar3 + -1);
        uVar1 = (uint)(uVar4 - 3);
        param_2 = (byte *)(pbVar5 + 3);
      }
    }
    goto joined_r0x112d9943;
  case 5:
    if (uVar4 < 2) {
      return (undefined4)(0xfffffffe);
    }
    iVar2 = (int)((**(code **)(param_1 + 0x160))(param_1,pbVar5));
    if (iVar2 == 0) {
      uVar1 = (uint)(uVar4 - 2);
      param_2 = (byte *)(pbVar5 + 2);
      goto joined_r0x112d9943;
    }
    break;
  case 6:
    if (uVar4 < 3) {
      return (undefined4)(0xfffffffe);
    }
    iVar2 = (int)((**(code **)(param_1 + 0x164))(param_1,pbVar5));
    if (iVar2 == 0) {
      uVar1 = (uint)(uVar4 - 3);
      param_2 = (byte *)(pbVar5 + 3);
      goto joined_r0x112d9943;
    }
    break;
  case 7:
    if (uVar4 < 4) {
      return (undefined4)(0xfffffffe);
    }
    iVar2 = (int)((**(code **)(param_1 + 0x168))(param_1,pbVar5));
    if (iVar2 != 0) break;
    uVar1 = (uint)(uVar4 - 4);
    param_2 = (byte *)(pbVar5 + 4);
    goto joined_r0x112d9943;
  }
  *param_4 = (undefined4)(pbVar5);
  return (undefined4)(0);
}


// Reference entry 112da290; body size 213 bytes.
#line 1 "ENTRY_112da290"

undefined1 FUN_112da290(undefined4 param_1,int *param_2,void *param_3,int *param_4,int param_5)

{
  byte bVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  size_t _Size;
  void *pvVar4;
  
  param_5 = (int)(param_5 - *param_4);
  _Src = (void *)((void *)*param_2);
  iVar2 = (int)((int)param_3 - (int)_Src);
  if (param_5 < iVar2) {
    param_3 = (void *)((void *)((int)_Src + param_5));
  }
  iVar3 = (int)(0);
  pvVar4 = (void *)(param_3);
  do {
    if (pvVar4 <= _Src) {
LAB_112da326:
      _Size = (size_t)((int)pvVar4 - (int)_Src);
      memcpy((void *)*param_4,_Src,_Size);
      *param_2 = (int)(*param_2 + _Size);
      *param_4 = (int)(*param_4 + _Size);
      if (param_5 < iVar2) {
        return (undefined1)(2);
      }
      return (undefined1)(pvVar4 < param_3);
    }
    bVar1 = (byte)(*(byte *)((int)pvVar4 + -1));
    if ((bVar1 & 0xf8) == 0xf0) {
      if (3 < iVar3 + 1U) {
        pvVar4 = (void *)((void *)((int)pvVar4 + 3));
        goto LAB_112da326;
      }
      iVar3 = (int)(0);
    }
    else if ((bVar1 & 0xf0) == 0xe0) {
      if (2 < iVar3 + 1U) {
        pvVar4 = (void *)((void *)((int)pvVar4 + 2));
        goto LAB_112da326;
      }
      iVar3 = (int)(0);
    }
    else if ((bVar1 & 0xe0) == 0xc0) {
      if (1 < iVar3 + 1U) {
        pvVar4 = (void *)((void *)((int)pvVar4 + 1));
        goto LAB_112da326;
      }
      iVar3 = (int)(0);
    }
    else if (-1 < (char)bVar1) goto LAB_112da326;
    pvVar4 = (void *)((void *)((int)pvVar4 + -1));
    iVar3 = (int)(iVar3 + 1);
  } while( true );
}


// Reference entry 112da580; body size 106 bytes.
#line 1 "ENTRY_112da580"

undefined4 FUN_112da580(undefined4 param_1,int *param_2,byte *param_3,int *param_4,byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)((byte *)*param_2);
  do {
    if ((byte *)(pbVar1) == (byte *)(param_3)) {
      return (undefined4)(0);
    }
    bVar2 = (byte)(*pbVar1);
    if ((char)bVar2 < '\0') {
      if ((int)param_5 - *param_4 < 2) {
        return (undefined4)(2);
      }
      *(byte *)*param_4 = (int)(bVar2 >> 6 | 0xc0);
      *param_4 = (int)(*param_4 + 1);
      bVar2 = (byte)(bVar2 & 0x3f | 0x80);
      pbVar1 = (byte *)((byte *)*param_4);
    }
    else {
      pbVar1 = (byte *)((byte *)*param_4);
      if ((byte *)(pbVar1) == (byte *)(param_5)) {
        return (undefined4)(2);
      }
    }
    *pbVar1 = (byte)(bVar2);
    *param_4 = (int)(*param_4 + 1);
    *param_2 = (int)(*param_2 + 1);
    pbVar1 = (byte *)((byte *)*param_2);
  } while( true );
}


// Reference entry 112deeb0; body size 179 bytes.
#line 1 "ENTRY_112deeb0"

undefined4 FUN_112deeb0(uint param_1,byte *param_2)

{
  byte bVar1;
  
  if (-1 < (int)param_1) {
    bVar1 = (byte)((byte)param_1);
    if ((int)param_1 < 0x80) {
      *param_2 = (byte)(bVar1);
      return (undefined4)(1);
    }
    if ((int)param_1 < 0x800) {
      *param_2 = (byte)((byte)(param_1 >> 6) | 0xc0);
      param_2[1] = (byte)(bVar1 & 0x3f | 0x80);
      return (undefined4)(2);
    }
    if ((int)param_1 < 0x10000) {
      *param_2 = (byte)((byte)(param_1 >> 0xc) | 0xe0);
      param_2[1] = (byte)((byte)(param_1 >> 6) & 0x3f | 0x80);
      param_2[2] = (byte)(bVar1 & 0x3f | 0x80);
      return (undefined4)(3);
    }
    if ((int)param_1 < 0x110000) {
      *param_2 = (byte)((byte)(param_1 >> 0x12) | 0xf0);
      param_2[1] = (byte)((byte)(param_1 >> 0xc) & 0x3f | 0x80);
      param_2[2] = (byte)((byte)(param_1 >> 6) & 0x3f | 0x80);
      param_2[3] = (byte)(bVar1 & 0x3f | 0x80);
      return (undefined4)(4);
    }
  }
  return (undefined4)(0);
}


// Reference entry 112df030; body size 122 bytes.
#line 1 "ENTRY_112df030"

undefined4 FUN_112df030(undefined4 param_1,char *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  
  bVar1 = (bool)(false);
  *param_4 = (undefined4)(0xb);
  if ((param_3 - (int)param_2 == 6) && (*param_2 == '\0')) {
    if (param_2[1] == 'X') {
      bVar1 = (bool)(true);
    }
    else if (param_2[1] != 'x') {
      return (undefined4)(1);
    }
    if (param_2[2] == '\0') {
      if (param_2[3] == 'M') {
        bVar1 = (bool)(true);
      }
      else if (param_2[3] != 'm') {
        return (undefined4)(1);
      }
      if (param_2[4] == '\0') {
        if (param_2[5] != 'L') {
          if (param_2[5] != 'l') {
            return (undefined4)(1);
          }
          if (!bVar1) {
            *param_4 = (undefined4)(0xc);
            return (undefined4)(1);
          }
        }
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(1);
}


// Reference entry 112dff00; body size 237 bytes.
#line 1 "ENTRY_112dff00"

undefined4 FUN_112dff00(int param_1,int param_2,char *param_3,int param_4,int *param_5)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = (uint)(param_4 - (int)param_3);
  do {
    if ((int)uVar3 < 2) {
      return (undefined4)(0xffffffff);
    }
    if (*param_3 == '\0') {
      uVar4 = (undefined8)(((unsigned long long)(param_3) << 32 | (unsigned long long)((uint)*(byte *)((byte)param_3[1] + 0x48 + param_2))));
    }
    else {
      uVar4 = (undefined8)(FUN_112e6b50(*param_3,(uint)(byte)param_3[1]));
    }
    iVar1 = (int)((int)((ulonglong)uVar4 >> 0x20));
    switch((int)uVar4) {
    case 0:
    case 1:
    case 8:
      *param_5 = (int)(iVar1);
      return (undefined4)(0);
    case 5:
      if (uVar3 < 2) {
        return (undefined4)(0xfffffffe);
      }
    default:
      goto LAB_112dff4e;
    case 6:
      if (uVar3 < 3) {
        return (undefined4)(0xfffffffe);
      }
      param_3 = (char *)((char *)(iVar1 + 3));
      iVar1 = (int)(-3);
      break;
    case 7:
      if (uVar3 < 4) {
        return (undefined4)(0xfffffffe);
      }
      param_3 = (char *)((char *)(iVar1 + 4));
      iVar1 = (int)(-4);
      break;
    case 0xc:
    case 0xd:
      pcVar2 = (char *)((char *)(iVar1 + 2));
      if ((int)uVar4 == param_1) {
        if (1 < param_4 - (int)pcVar2) {
          *param_5 = (int)((int)pcVar2);
          if (*pcVar2 == '\0') {
            uVar3 = (uint)((uint)*(byte *)(*(byte *)(iVar1 + 3) + 0x48 + param_2));
          }
          else {
            uVar3 = (uint)(FUN_112e6b50(*pcVar2,(uint)*(byte *)(iVar1 + 3)));
          }
          switch(uVar3) {
          case 9:
          case 10:
          case 0xb:
          case 0x14:
          case 0x15:
          case 0x1e:
            return (undefined4)(0x1b);
          default:
            return (undefined4)(0);
          }
        }
        return (undefined4)(0xffffffe5);
      }
LAB_112dff4e:
      param_3 = (char *)((char *)(iVar1 + 2));
      iVar1 = (int)(-2);
    }
    uVar3 = (uint)(uVar3 + iVar1);
  } while( true );
}


// Reference entry 112e1760; body size 116 bytes.
#line 1 "ENTRY_112e1760"

int FUN_112e1760(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return (int)(6);
  }
  iVar5 = (int)(0);
  do {
    pcVar4 = (char *)((&PTR_DAT_119eca24)[iVar5]);
    while( true ) {
      cVar3 = (char)(pcVar4[param_1 - (int)(&PTR_DAT_119eca24)[iVar5]]);
      cVar1 = (char)(*pcVar4);
      cVar2 = (char)(cVar3 + -0x20);
      if (0x19 < (byte)(cVar3 + 0x9fU)) {
        cVar2 = (char)(cVar3);
      }
      cVar3 = (char)(cVar1 + -0x20);
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar3 = (char)(cVar1);
      }
      if (cVar2 != cVar3) break;
      pcVar4 = (char *)(pcVar4 + 1);
      if (cVar2 == '\0') {
        return (int)(iVar5);
      }
    }
    iVar5 = (int)(iVar5 + 1);
    if (5 < iVar5) {
      return (int)(-1);
    }
  } while( true );
}


// Reference entry 112e1c50; body size 122 bytes.
#line 1 "ENTRY_112e1c50"

undefined4 FUN_112e1c50(undefined4 param_1,char *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  
  bVar1 = (bool)(false);
  *param_4 = (undefined4)(0xb);
  if ((param_3 - (int)param_2 == 6) && (param_2[1] == '\0')) {
    if (*param_2 == 'X') {
      bVar1 = (bool)(true);
    }
    else if (*param_2 != 'x') {
      return (undefined4)(1);
    }
    if (param_2[3] == '\0') {
      if (param_2[2] == 'M') {
        bVar1 = (bool)(true);
      }
      else if (param_2[2] != 'm') {
        return (undefined4)(1);
      }
      if (param_2[5] == '\0') {
        if (param_2[4] != 'L') {
          if (param_2[4] != 'l') {
            return (undefined4)(1);
          }
          if (!bVar1) {
            *param_4 = (undefined4)(0xc);
            return (undefined4)(1);
          }
        }
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(1);
}


// Reference entry 112e2b30; body size 237 bytes.
#line 1 "ENTRY_112e2b30"

undefined4 FUN_112e2b30(int param_1,int param_2,byte *param_3,int param_4,int *param_5)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = (uint)(param_4 - (int)param_3);
  do {
    if ((int)uVar3 < 2) {
      return (undefined4)(0xffffffff);
    }
    if (param_3[1] == 0) {
      uVar4 = (undefined8)(((unsigned long long)(param_3) << 32 | (unsigned long long)((uint)*(byte *)(*param_3 + 0x48 + param_2))));
    }
    else {
      uVar4 = (undefined8)(FUN_112e6b50(param_3[1],(uint)*param_3));
    }
    iVar1 = (int)((int)((ulonglong)uVar4 >> 0x20));
    switch((int)uVar4) {
    case 0:
    case 1:
    case 8:
      *param_5 = (int)(iVar1);
      return (undefined4)(0);
    case 5:
      if (uVar3 < 2) {
        return (undefined4)(0xfffffffe);
      }
    default:
      goto LAB_112e2b7e;
    case 6:
      if (uVar3 < 3) {
        return (undefined4)(0xfffffffe);
      }
      param_3 = (byte *)((byte *)(iVar1 + 3));
      iVar1 = (int)(-3);
      break;
    case 7:
      if (uVar3 < 4) {
        return (undefined4)(0xfffffffe);
      }
      param_3 = (byte *)((byte *)(iVar1 + 4));
      iVar1 = (int)(-4);
      break;
    case 0xc:
    case 0xd:
      pbVar2 = (byte *)((byte *)(iVar1 + 2));
      if ((int)uVar4 == param_1) {
        if (1 < param_4 - (int)pbVar2) {
          *param_5 = (int)((int)pbVar2);
          if (*(char *)(iVar1 + 3) == '\0') {
            uVar3 = (uint)((uint)*(byte *)(*pbVar2 + 0x48 + param_2));
          }
          else {
            uVar3 = (uint)(FUN_112e6b50(*(char *)(iVar1 + 3),(uint)*pbVar2));
          }
          switch(uVar3) {
          case 9:
          case 10:
          case 0xb:
          case 0x14:
          case 0x15:
          case 0x1e:
            return (undefined4)(0x1b);
          default:
            return (undefined4)(0);
          }
        }
        return (undefined4)(0xffffffe5);
      }
LAB_112e2b7e:
      param_3 = (byte *)((byte *)(iVar1 + 2));
      iVar1 = (int)(-2);
    }
    uVar3 = (uint)(uVar3 + iVar1);
  } while( true );
}


// Reference entry 112e3d10; body size 105 bytes.
#line 1 "ENTRY_112e3d10"

undefined4 FUN_112e3d10(undefined4 param_1,char *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  
  bVar1 = (bool)(false);
  *param_4 = (undefined4)(0xb);
  if (param_3 - (int)param_2 != 3) {
    return (undefined4)(1);
  }
  if (*param_2 == 'X') {
    bVar1 = (bool)(true);
  }
  else if (*param_2 != 'x') {
    return (undefined4)(1);
  }
  if (param_2[1] == 'M') {
    bVar1 = (bool)(true);
  }
  else if (param_2[1] != 'm') {
    return (undefined4)(1);
  }
  if (param_2[2] != 'L') {
    if (param_2[2] != 'l') {
      return (undefined4)(1);
    }
    if (!bVar1) {
      *param_4 = (undefined4)(0xc);
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 112e6a80; body size 88 bytes.
#line 1 "ENTRY_112e6a80"

undefined4 FUN_112e6a80(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_2);
  while( true ) {
    cVar3 = (char)(pcVar4[param_1 - (int)param_2]);
    cVar1 = (char)(*pcVar4);
    cVar2 = (char)(cVar3 + -0x20);
    if (0x19 < (byte)(cVar3 + 0x9fU)) {
      cVar2 = (char)(cVar3);
    }
    cVar3 = (char)(cVar1 + -0x20);
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar3 = (char)(cVar1);
    }
    if (cVar2 != cVar3) break;
    pcVar4 = (char *)(pcVar4 + 1);
    if (cVar2 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 112e6af0; body size 69 bytes.
#line 1 "ENTRY_112e6af0"

int FUN_112e6af0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char local_5;
  char *local_4;
  
  local_4 = (char *)(&local_5);
  (**(code **)(param_1 + 0x38))(param_1,&param_2,param_3,&local_4,&local_4);
  if ((char *)(local_4) == (char *)(&local_5)) {
    return (int)(-1);
  }
  return (int)((int)local_5);
}


// Reference entry 112e6b50; body size 67 bytes.
#line 1 "ENTRY_112e6b50"

undefined4 FUN_112e6b50(undefined1 param_1,char param_2)

{
  switch(param_1) {
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
    return (undefined4)(7);
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    return (undefined4)(8);
  case 0xff:
    if ((param_2 == -2) || (param_2 == -1)) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(0x1d);
}


// Reference entry 112e7450; body size 240 bytes.
#line 1 "ENTRY_112e7450"

undefined4 FUN_112e7450(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 0xf) {
    return (undefined4)(0x21);
  }
  if (param_2 == 0x14) {
    iVar1 = (int)((**(code **)(param_5 + 0x18))
                      (param_5,*(int *)(param_5 + 0x40) + param_3,param_4,"IMPLIED"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e7060);
      return (undefined4)(0x23);
    }
    iVar1 = (int)((**(code **)(param_5 + 0x18))
                      (param_5,*(int *)(param_5 + 0x40) + param_3,param_4,"REQUIRED"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e7060);
      return (undefined4)(0x24);
    }
    iVar1 = (int)((**(code **)(param_5 + 0x18))
                      (param_5,*(int *)(param_5 + 0x40) + param_3,param_4,"FIXED"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e7580);
      return (undefined4)(0x21);
    }
  }
  else if (param_2 == 0x1b) {
    *param_1 = (undefined4)(LAB_112e7060);
    return (undefined4)(0x25);
  }
  if ((param_1[4] == 0) && (param_2 == 0x1c)) {
    return (undefined4)(0x3b);
  }
  *param_1 = (undefined4)(LAB_112e8760);
  return (undefined4)(0xffffffff);
}


// Reference entry 112e7610; body size 141 bytes.
#line 1 "ENTRY_112e7610"

undefined4
FUN_112e7610(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 0xf) {
    return (undefined4)(0);
  }
  if (param_2 == 0x12) {
    iVar1 = (int)((**(code **)(param_5 + 0x18))(param_5,param_3,param_4,"INCLUDE"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e76c0);
      return (undefined4)(0);
    }
    iVar1 = (int)((**(code **)(param_5 + 0x18))(param_5,param_3,param_4,"IGNORE"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e7710);
      return (undefined4)(0);
    }
  }
  if ((param_1[4] == 0) && (param_2 == 0x1c)) {
    return (undefined4)(0x3b);
  }
  *param_1 = (undefined4)(LAB_112e8760);
  return (undefined4)(0xffffffff);
}


// Reference entry 112e7b50; body size 200 bytes.
#line 1 "ENTRY_112e7b50"

undefined4
FUN_112e7b50(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 0xf) {
    return (undefined4)(0x27);
  }
  if (param_2 == 0x12) {
    iVar1 = (int)((**(code **)(param_5 + 0x18))(param_5,param_3,param_4,"EMPTY"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e7760);
      param_1[2] = (undefined4)(0x27);
      return (undefined4)(0x2a);
    }
    iVar1 = (int)((**(code **)(param_5 + 0x18))(param_5,param_3,param_4,&DAT_119ecfcc));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e7760);
      param_1[2] = (undefined4)(0x27);
      return (undefined4)(0x29);
    }
  }
  else if (param_2 == 0x17) {
    *param_1 = (undefined4)(&DAT_112e7c50);
    param_1[1] = (undefined4)(1);
    return (undefined4)(0x2c);
  }
  if ((param_1[4] == 0) && (param_2 == 0x1c)) {
    return (undefined4)(0x3b);
  }
  *param_1 = (undefined4)(LAB_112e8760);
  return (undefined4)(0xffffffff);
}


// Reference entry 112e8300; body size 182 bytes.
#line 1 "ENTRY_112e8300"

undefined4
FUN_112e8300(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 0xf) {
    return (undefined4)(0xb);
  }
  if (param_2 == 0x12) {
    iVar1 = (int)((**(code **)(param_5 + 0x18))(param_5,param_3,param_4,"SYSTEM"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e8450);
      return (undefined4)(0xb);
    }
    iVar1 = (int)((**(code **)(param_5 + 0x18))(param_5,param_3,param_4,"PUBLIC"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e83f0);
      return (undefined4)(0xb);
    }
  }
  else if (param_2 == 0x1b) {
    *param_1 = (undefined4)(LAB_112e7760);
    param_1[2] = (undefined4)(0xb);
    return (undefined4)(0xc);
  }
  if ((param_1[4] == 0) && (param_2 == 0x1c)) {
    return (undefined4)(0x3b);
  }
  *param_1 = (undefined4)(LAB_112e8760);
  return (undefined4)(0xffffffff);
}


// Reference entry 112e85b0; body size 182 bytes.
#line 1 "ENTRY_112e85b0"

undefined4
FUN_112e85b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 0xf) {
    return (undefined4)(0xb);
  }
  if (param_2 == 0x12) {
    iVar1 = (int)((**(code **)(param_5 + 0x18))(param_5,param_3,param_4,"SYSTEM"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e8700);
      return (undefined4)(0xb);
    }
    iVar1 = (int)((**(code **)(param_5 + 0x18))(param_5,param_3,param_4,"PUBLIC"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e86a0);
      return (undefined4)(0xb);
    }
  }
  else if (param_2 == 0x1b) {
    *param_1 = (undefined4)(LAB_112e7760);
    param_1[2] = (undefined4)(0xb);
    return (undefined4)(0xc);
  }
  if ((param_1[4] == 0) && (param_2 == 0x1c)) {
    return (undefined4)(0x3b);
  }
  *param_1 = (undefined4)(LAB_112e8760);
  return (undefined4)(0xffffffff);
}


// Reference entry 112e8870; body size 71 bytes.
#line 1 "ENTRY_112e8870"

undefined4 FUN_112e8870(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  switch(param_2) {
  case 0xb:
    return (undefined4)(0x37);
  case 0xd:
    return (undefined4)(0x38);
  case 0x10:
    iVar1 = (int)((**(code **)(param_5 + 0x18))
                      (param_5,*(int *)(param_5 + 0x40) * 2 + param_3,param_4,"ENTITY"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e81c0);
      return (undefined4)(0xb);
    }
    iVar1 = (int)((**(code **)(param_5 + 0x18))
                      (param_5,*(int *)(param_5 + 0x40) * 2 + param_3,param_4,"ATTLIST"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e7000);
      return (undefined4)(0x21);
    }
    iVar1 = (int)((**(code **)(param_5 + 0x18))
                      (param_5,*(int *)(param_5 + 0x40) * 2 + param_3,param_4,"ELEMENT"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e7af0);
      return (undefined4)(0x27);
    }
    iVar1 = (int)((**(code **)(param_5 + 0x18))
                      (param_5,*(int *)(param_5 + 0x40) * 2 + param_3,param_4,"NOTATION"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e8a70);
      return (undefined4)(0x11);
    }
    break;
  case 0x1a:
    *param_1 = (undefined4)(LAB_112e7a90);
    return (undefined4)(3);
  case 0x1c:
    return (undefined4)(0x3c);
  case -4:
  case 0xf:
    return (undefined4)(0);
  }
  if ((param_1[4] == 0) && (param_2 == 0x1c)) {
    return (undefined4)(0x3b);
  }
  *param_1 = (undefined4)(LAB_112e8760);
  return (undefined4)(0xffffffff);
}


// Reference entry 112e8ad0; body size 152 bytes.
#line 1 "ENTRY_112e8ad0"

undefined4
FUN_112e8ad0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 0xf) {
    return (undefined4)(0x11);
  }
  if (param_2 == 0x12) {
    iVar1 = (int)((**(code **)(param_5 + 0x18))(param_5,param_3,param_4,"SYSTEM"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e8bf0);
      return (undefined4)(0x11);
    }
    iVar1 = (int)((**(code **)(param_5 + 0x18))(param_5,param_3,param_4,"PUBLIC"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e8b90);
      return (undefined4)(0x11);
    }
  }
  if ((param_1[4] == 0) && (param_2 == 0x1c)) {
    return (undefined4)(0x3b);
  }
  *param_1 = (undefined4)(LAB_112e8760);
  return (undefined4)(0xffffffff);
}


// Reference entry 112e8e20; body size 149 bytes.
#line 1 "ENTRY_112e8e20"

undefined4 FUN_112e8e20(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  switch(param_2) {
  case 0xb:
    return (undefined4)(0x37);
  case 0xd:
    return (undefined4)(0x38);
  case 0xe:
  case 0xf:
    return (undefined4)(0);
  case 0x10:
    iVar1 = (int)((**(code **)(param_5 + 0x18))
                      (param_5,param_3 + *(int *)(param_5 + 0x40) * 2,param_4,"DOCTYPE"));
    if (iVar1 != 0) {
      *param_1 = (undefined4)(LAB_112e77d0);
      return (undefined4)(3);
    }
    break;
  case 0x1d:
    *param_1 = (undefined4)(LAB_112e8760);
    return (undefined4)(2);
  }
  if ((param_1[4] == 0) && (param_2 == 0x1c)) {
    return (undefined4)(0x3b);
  }
  *param_1 = (undefined4)(LAB_112e8760);
  return (undefined4)(0xffffffff);
}


// Reference entry 112e9b90; body size 103 bytes.
#line 1 "ENTRY_112e9b90"

void FUN_112e9b90(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined **local_58;
  int local_54;
  undefined1 *local_34;
  undefined **local_30;
  int local_2c;
  undefined1 *local_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(param_6);
  local_c = (undefined1 *)((undefined1 *)0x0);
  if (param_4 != 0) {
    local_30 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    local_2c = (int)(param_4);
    local_c = (undefined1 *)((undefined1 *)&local_30);
  }
  local_34 = (undefined1 *)((undefined1 *)0x0);
  if (param_3 != 0) {
    local_58 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
    local_54 = (int)(param_3);
    local_34 = (undefined1 *)((undefined1 *)&local_58);
  }
  thunk_FUN_112f0980(param_1,param_2);
  DAT_122f6c0c = (int)(param_2);
  DAT_122f6c10 = (int)(param_5);
  return;
}


// Reference entry 112ea480; body size 322 bytes.
#line 1 "ENTRY_112ea480"

int FUN_112ea480(byte param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  local_10 = (undefined4)(0);
  local_14 = (void *)((void *)thunk_FUN_112efc20(&local_10));
  if ((void *)(local_14) == (void *)0x0) {
    iVar3 = (int)(thunk_FUN_112f0000((param_1 ^ 1) + 1,&local_14));
    thunk_FUN_112efba0(local_10);
    local_10 = (undefined4)(0);
    if (iVar3 == 0) {
      thunk_FUN_113cff40(local_14,local_8,&local_c);
      iVar3 = (int)(thunk_FUN_113d0a10(local_8[0],local_c));
      if (iVar3 != 0) {
        iVar1 = (int)(*(int *)((int)local_14 + 0x194));
        while( true ) {
          if (iVar1 == 0) {
            thunk_FUN_11401680(local_14);
            free(local_14);
            return (int)(iVar3);
          }
          thunk_FUN_113cff40(iVar1,local_8,&local_c);
          cVar2 = (char)(thunk_FUN_113cfe20(iVar3,local_8[0],local_c));
          if (cVar2 == '\0') break;
          iVar1 = (int)(*(int *)(iVar1 + 0x194));
        }
        thunk_FUN_113cfe50(iVar3);
        thunk_FUN_11401680(local_14);
        free(local_14);
        return (int)(0);
      }
      thunk_FUN_11401680(local_14);
      free(local_14);
    }
  }
  return (int)(0);
}


// Reference entry 112ea620; body size 359 bytes.
#line 1 "ENTRY_112ea620"

int FUN_112ea620(byte param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined **local_74;
  int local_70;
  undefined1 *local_50;
  undefined4 uStack_4c;
  undefined **local_48;
  int local_44;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  void *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = (undefined4)(0);
  local_14 = (void *)((void *)thunk_FUN_112efc20());
  if ((void *)(local_14) == (void *)0x0) {
    if (param_4 != 0) {
      local_48 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
      local_44 = (int)(param_4);
    }
    uStack_4c = (undefined4)(param_3);
    local_50 = (undefined1 *)((undefined1 *)0x0);
    if (param_2 != 0) {
      local_74 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
      local_70 = (int)(param_2);
      local_50 = (undefined1 *)((undefined1 *)&local_74);
    }
    iVar3 = (int)(thunk_FUN_112f0000((param_1 ^ 1) + 1,&local_14));
    thunk_FUN_112efba0();
    local_10 = (undefined4)(0);
    if (iVar3 == 0) {
      uStack_2c = (undefined4)(0x112ea6d3);
      thunk_FUN_113cff40();
      uStack_2c = (undefined4)(local_c);
      uStack_30 = (undefined4)(local_8);
      iStack_34 = (int)(0x112ea6e0);
      iVar3 = (int)(thunk_FUN_113d0a10());
      if (iVar3 != 0) {
        iVar1 = (int)(*(int *)((int)local_14 + 0x194));
        while( true ) {
          if (iVar1 == 0) {
            thunk_FUN_11401680();
            free(local_14);
            return (int)(iVar3);
          }
          uStack_2c = (undefined4)(0x112ea725);
          thunk_FUN_113cff40();
          uStack_2c = (undefined4)(local_c);
          uStack_30 = (undefined4)(local_8);
          uStack_38 = (undefined4)(0x112ea733);
          iStack_34 = (int)(iVar3);
          cVar2 = (char)(thunk_FUN_113cfe20());
          if (cVar2 == '\0') break;
          iVar1 = (int)(*(int *)(iVar1 + 0x194));
        }
        thunk_FUN_113cfe50();
        thunk_FUN_11401680();
        uStack_2c = (undefined4)(0x112ea77c);
        free(local_14);
        return (int)(0);
      }
      thunk_FUN_11401680();
      free(local_14);
    }
  }
  return (int)(0);
}


// Reference entry 112eaa60; body size 269 bytes.
#line 1 "ENTRY_112eaa60"

void FUN_112eaa60(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 local_6c;
  byte local_68;
  undefined1 local_67 [25];
  undefined1 local_4e [33];
  undefined1 local_2d [17];
  byte *local_1c;
  byte *local_18;
  undefined8 local_14;
  byte *local_c;
  undefined1 local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_6c);
  local_6c = (undefined4)(param_6);
  if ((byte *)(param_1) == (byte *)0x0) {
    local_c = (byte *)(param_1);
    local_8 = (undefined1)(0);
    local_14 = (undefined8)(0);
    local_68 = (byte)(1);
    thunk_FUN_111c0480(local_67,0x19,&DAT_1188bc94,&DAT_1186d2ee);
    thunk_FUN_111c0480(local_4e,0x21,&DAT_1188bc94,&DAT_1186d2ee);
    thunk_FUN_111c0480(local_2d,0x11,&DAT_1188bc94,&DAT_1186d2ee);
    local_1c = (byte *)(param_1);
    local_18 = (byte *)(param_1);
    param_1 = (byte *)(&local_68);
  }
  if ((*param_1 & 1) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uVar1 = (undefined4)(thunk_FUN_113cfe40(param_3,0,&DAT_119ed0d8,param_4,local_6c,0,0,param_5,0,0));
  uVar1 = (undefined4)(thunk_FUN_113cfe40(param_2,uVar1));
  thunk_FUN_112e9d20(param_1,uVar1);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112eac60; body size 110 bytes.
#line 1 "ENTRY_112eac60"

undefined4 * __thiscall Recovered_Bulk::FUN_112eac60(int param_2)
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 112eacf0; body size 110 bytes.
#line 1 "ENTRY_112eacf0"

undefined4 * __thiscall Recovered_Bulk::FUN_112eacf0(int param_2)
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
  param_1[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1 + 2,uVar1));
    param_1[0xb] = (undefined4)(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 112eae90; body size 203 bytes.
#line 1 "ENTRY_112eae90"

int __thiscall Recovered_Bulk::FUN_112eae90(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  if ((int *)(in_stack_00000028) != (int *)0x0) {
    if ((int *)(in_stack_00000028) == (int *)&stack0x00000004) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar2 + 2,uVar1));
      puVar2[0xb] = (undefined4)(uVar3);
      if ((int *)(in_stack_00000028) == (int *)0x0) goto LAB_112eaf2b;
      (**(code **)(*in_stack_00000028 + 0x10))((int *)(in_stack_00000028) != (int *)&stack0x00000004);
    }
    else {
      puVar2[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_112eaf2b:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if ((int *)(in_stack_00000028) != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))((int *)(in_stack_00000028) != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 112eb020; body size 203 bytes.
#line 1 "ENTRY_112eb020"

int __thiscall Recovered_Bulk::FUN_112eb020(void)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;

  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  if ((int *)(in_stack_00000028) != (int *)0x0) {
    if ((int *)(in_stack_00000028) == (int *)&stack0x00000004) {
      uVar3 = (undefined4)((**(code **)(*in_stack_00000028 + 4))(puVar2 + 2,uVar1));
      puVar2[0xb] = (undefined4)(uVar3);
      if ((int *)(in_stack_00000028) == (int *)0x0) goto LAB_112eb0bb;
      (**(code **)(*in_stack_00000028 + 0x10))((int *)(in_stack_00000028) != (int *)&stack0x00000004);
    }
    else {
      puVar2[0xb] = (undefined4)(in_stack_00000028);
    }
    in_stack_00000028 = (int *)((int *)0x0);
  }
LAB_112eb0bb:
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  if ((int *)(in_stack_00000028) != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))((int *)(in_stack_00000028) != (int *)&stack0x00000004);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 112eb1c0; body size 84 bytes.
#line 1 "ENTRY_112eb1c0"

int __thiscall Recovered_Bulk::FUN_112eb1c0(undefined4 param_2,int *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_3[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_3)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_3[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112eb204;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_3));
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
    }
    param_3[9] = (int)(0);
  }
LAB_112eb204:
  *(undefined4 *)(param_1 + 0x28) = *param_4;
  return (int)(param_1);
}


// Reference entry 112eb230; body size 310 bytes.
#line 1 "ENTRY_112eb230"

void __thiscall Recovered_Bulk::FUN_112eb230(int *param_2)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  int *piVar1;
  int iVar2;
  int local_64 [9];
  int *local_40;
  int local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  local_40 = (int *)((int *)0x0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      local_40 = (int *)((int *)(**(code **)(*piVar1 + 4))(local_64,param_1,local_14));
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112eb2a0;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
      piVar1 = (int *)(local_40);
    }
    local_40 = (int *)(piVar1);
    param_2[9] = (int)(0);
  }
LAB_112eb2a0:
  local_18 = (int *)((int *)0x0);

  piVar1 = (int *)(operator_new(0x30));
  *piVar1 = (int)((int)(uint)&ghidra_vftable_std_Func_impl_no_alloc);
  piVar1[0xb] = (int)(0);
  if ((int *)(local_40) != (int *)0x0) {
    if ((int *)(local_40) == (int *)(local_64)) {
      iVar2 = (int)((**(code **)(*local_40 + 4))(piVar1 + 2));
      piVar1[0xb] = (int)(iVar2);
      if ((int *)(local_40) == (int *)0x0) goto LAB_112eb307;
      (**(code **)(*local_40 + 0x10))((int *)(local_40) != (int *)(local_64));
    }
    else {
      piVar1[0xb] = (int)((int)local_40);
    }
    local_40 = (int *)((int *)0x0);
  }
LAB_112eb307:
  local_18 = (int *)(piVar1);
  if ((int *)(local_40) != (int *)0x0) {
    (**(code **)(*local_40 + 0x10))((int *)(local_40) != (int *)(local_64));
    local_40 = (int *)((int *)0x0);
  }
  thunk_FUN_112f1fb0(param_1);
  if ((int *)(local_18) != (int *)0x0) {
    (**(code **)(*local_18 + 0x10))((int *)(local_18) != (int *)(local_3c));
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112eb3c0; body size 310 bytes.
#line 1 "ENTRY_112eb3c0"

void __thiscall Recovered_Bulk::FUN_112eb3c0(int *param_2)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  int *piVar1;
  int iVar2;
  int local_64 [9];
  int *local_40;
  int local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  local_40 = (int *)((int *)0x0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      local_40 = (int *)((int *)(**(code **)(*piVar1 + 4))(local_64,param_1,local_14));
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112eb430;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
      piVar1 = (int *)(local_40);
    }
    local_40 = (int *)(piVar1);
    param_2[9] = (int)(0);
  }
LAB_112eb430:
  local_18 = (int *)((int *)0x0);

  piVar1 = (int *)(operator_new(0x30));
  *piVar1 = (int)((int)(uint)&ghidra_vftable_std_Func_impl_no_alloc);
  piVar1[0xb] = (int)(0);
  if ((int *)(local_40) != (int *)0x0) {
    if ((int *)(local_40) == (int *)(local_64)) {
      iVar2 = (int)((**(code **)(*local_40 + 4))(piVar1 + 2));
      piVar1[0xb] = (int)(iVar2);
      if ((int *)(local_40) == (int *)0x0) goto LAB_112eb497;
      (**(code **)(*local_40 + 0x10))((int *)(local_40) != (int *)(local_64));
    }
    else {
      piVar1[0xb] = (int)((int)local_40);
    }
    local_40 = (int *)((int *)0x0);
  }
LAB_112eb497:
  local_18 = (int *)(piVar1);
  if ((int *)(local_40) != (int *)0x0) {
    (**(code **)(*local_40 + 0x10))((int *)(local_40) != (int *)(local_64));
    local_40 = (int *)((int *)0x0);
  }
  thunk_FUN_112f1e40(param_1);
  if ((int *)(local_18) != (int *)0x0) {
    (**(code **)(*local_18 + 0x10))((int *)(local_18) != (int *)(local_3c));
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112eb580; body size 222 bytes.
#line 1 "ENTRY_112eb580"

undefined4 * FUN_112eb580(undefined4 *param_1,undefined4 *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *_Dst;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = (int)(param_2[4]);
  psVar4 = (short *)(param_3);
  do {
    sVar1 = (short)(*psVar4);
    psVar4 = (short *)(psVar4 + 1);
  } while (sVar1 != 0);
  uVar5 = (uint)((int)psVar4 - (int)(param_3 + 1) >> 1);
  if (uVar5 <= 0x7ffffffeU - iVar2) {
    if (7 < (uint)param_2[5]) {
      param_2 = (undefined4 *)((undefined4 *)*param_2);
    }
    uVar3 = (uint)(iVar2 + uVar5);
    uVar6 = (uint)(7);
    param_1[4] = (undefined4)(0);
    param_1[5] = (undefined4)(0);
    _Dst = (undefined4 *)(param_1);
    if (7 < uVar3) {
      uVar6 = (uint)(uVar3 | 7);
      if (uVar6 < 0x7fffffff) {
        if (uVar6 < 10) {
          uVar6 = (uint)(10);
        }
      }
      else {
        uVar6 = (uint)(0x7ffffffe);
      }
      _Dst = (undefined4 *)((undefined4 *)thunk_FUN_112eef40(uVar6 + 1));
      *param_1 = (undefined4)(_Dst);
    }
    param_1[5] = (undefined4)(uVar6);
    param_1[4] = (undefined4)(uVar3);
    memcpy(_Dst,param_2,iVar2 * 2);
    memcpy((void *)(iVar2 * 2 + (int)_Dst),param_3,uVar5 * 2);
    *(undefined2 *)((int)_Dst + uVar3 * 2) = 0;
    return (undefined4 *)(param_1);
  }
                    
  thunk_FUN_1012a4c0();
}


// Reference entry 112eb820; body size 124 bytes.
#line 1 "ENTRY_112eb820"

undefined4 * FUN_112eb820(int param_1)

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 112eb8c0; body size 103 bytes.
#line 1 "ENTRY_112eb8c0"

undefined4 * FUN_112eb8c0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_1)) {
      uVar3 = (undefined4)((**(code **)(*piVar1 + 4))(puVar2 + 2));
      puVar2[0xb] = (undefined4)(uVar3);
      piVar1 = (int *)((int *)param_1[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
        param_1[9] = (int)(0);
      }
      return (undefined4 *)(puVar2);
    }
    puVar2[0xb] = (undefined4)(piVar1);
    param_1[9] = (int)(0);
  }
  return (undefined4 *)(puVar2);
}


// Reference entry 112eb940; body size 124 bytes.
#line 1 "ENTRY_112eb940"

undefined4 * FUN_112eb940(int param_1)

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x24))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 112eb9e0; body size 103 bytes.
#line 1 "ENTRY_112eb9e0"

undefined4 * FUN_112eb9e0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_1)) {
      uVar3 = (undefined4)((**(code **)(*piVar1 + 4))(puVar2 + 2));
      puVar2[0xb] = (undefined4)(uVar3);
      piVar1 = (int *)((int *)param_1[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
        param_1[9] = (int)(0);
      }
      return (undefined4 *)(puVar2);
    }
    puVar2[0xb] = (undefined4)(piVar1);
    param_1[9] = (int)(0);
  }
  return (undefined4 *)(puVar2);
}


// Reference entry 112ebb90; body size 116 bytes.
#line 1 "ENTRY_112ebb90"

void __thiscall Recovered_Bulk::FUN_112ebb90(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
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
        *(undefined4 **)(param_1 + 0x24) = puVar2;
        return;
      }
    }
    else {
      puVar2[0xb] = (undefined4)(piVar1);
      param_2[9] = (int)(0);
    }
  }
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  return;
}


// Reference entry 112ebc30; body size 116 bytes.
#line 1 "ENTRY_112ebc30"

void __thiscall Recovered_Bulk::FUN_112ebc30(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
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
        *(undefined4 **)(param_1 + 0x24) = puVar2;
        return;
      }
    }
    else {
      puVar2[0xb] = (undefined4)(piVar1);
      param_2[9] = (int)(0);
    }
  }
  *(undefined4 **)(param_1 + 0x24) = puVar2;
  return;
}


// Reference entry 112ebd40; body size 261 bytes.
#line 1 "ENTRY_112ebd40"

void __thiscall Recovered_Bulk::FUN_112ebd40(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *_Dst;
  
  if (0x7fffffff < param_2) {
    thunk_FUN_112eee90();
LAB_112ebe40:
                    
    thunk_FUN_1012a2a0();
  }
  iVar1 = (int)(param_1[1]);
  iVar4 = (int)(*param_1);
  uVar5 = (uint)(param_1[2] - *param_1);
  if (0x7fffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = (uint)(0x7fffffff);
    uVar2 = (uint)(0x80000022);
LAB_112ebd7d:
    pvVar3 = (void *)(operator_new(uVar2));
    if ((void *)(pvVar3) == (void *)0x0) goto LAB_112ebe35;
    _Dst = (void *)((void *)((int)pvVar3 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar3;
  }
  else {
    uVar5 = (uint)((uVar5 >> 1) + uVar5);
    if (uVar5 < param_2) {
      uVar5 = (uint)(param_2);
    }
    if (0xfff < uVar5) {
      uVar2 = (uint)(uVar5 + 0x23);
      if (uVar2 <= uVar5) goto LAB_112ebe40;
      goto LAB_112ebd7d;
    }
    if (uVar5 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar5));
    }
  }
  memset((void *)((int)_Dst + (iVar1 - iVar4)),0,param_2 - (iVar1 - iVar4));
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    uVar2 = (uint)(param_1[2] - iVar1);
    iVar4 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar4 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar4) - 4U) {
LAB_112ebe35:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar2);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + param_2);
  param_1[2] = (int)((int)_Dst + uVar5);
  return;
}


// Reference entry 112ec280; body size 87 bytes.
#line 1 "ENTRY_112ec280"

int __thiscall Recovered_Bulk::FUN_112ec280(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return (int)(param_1);
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = (int)(0);
    }
  }
  return (int)(param_1);
}


// Reference entry 112ec370; body size 96 bytes.
#line 1 "ENTRY_112ec370"

int __thiscall Recovered_Bulk::FUN_112ec370(int param_2)
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


// Reference entry 112ec3f0; body size 87 bytes.
#line 1 "ENTRY_112ec3f0"

int __thiscall Recovered_Bulk::FUN_112ec3f0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return (int)(param_1);
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = (int)(0);
    }
  }
  return (int)(param_1);
}


// Reference entry 112ec4e0; body size 96 bytes.
#line 1 "ENTRY_112ec4e0"

int __thiscall Recovered_Bulk::FUN_112ec4e0(int param_2)
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


// Reference entry 112ec690; body size 422 bytes.
#line 1 "ENTRY_112ec690"

undefined4 * __thiscall Recovered_Bulk::FUN_112ec690(undefined4 param_2,undefined4 *param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  uVar2 = (uint)(param_3[4]);
  uVar3 = (uint)(param_4[4]);
  uVar1 = (uint)(uVar3 + uVar2);
  if ((uVar3 <= param_3[5] - uVar2) && ((uint)param_4[5] <= (uint)param_3[5])) {
    uVar4 = (undefined4)(param_3[1]);
    uVar5 = (undefined4)(param_3[2]);
    uVar6 = (undefined4)(param_3[3]);
    *param_1 = (undefined4)(*param_3);
    param_1[1] = (undefined4)(uVar4);
    param_1[2] = (undefined4)(uVar5);
    param_1[3] = (undefined4)(uVar6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
    param_3[4] = (undefined4)(0);
    param_3[5] = (undefined4)(7);
    *(undefined2*)param_3 = (undefined2)((undefined4 *)(0));
    puVar9 = (undefined4 *)(param_1);
    if (7 < (uint)param_1[5]) {
      puVar9 = (undefined4 *)((undefined4 *)*param_1);
    }
    if (7 < (uint)param_4[5]) {
      param_4 = (undefined4 *)((undefined4 *)*param_4);
    }
    memcpy((void *)((int)puVar9 + uVar2 * 2),param_4,uVar3 * 2 + 2);
    param_1[4] = (undefined4)(uVar1);
    return (undefined4 *)(param_1);
  }
  if (uVar2 <= param_4[5] - uVar3) {
    uVar4 = (undefined4)(param_4[1]);
    uVar5 = (undefined4)(param_4[2]);
    uVar6 = (undefined4)(param_4[3]);
    *param_1 = (undefined4)(*param_4);
    param_1[1] = (undefined4)(uVar4);
    param_1[2] = (undefined4)(uVar5);
    param_1[3] = (undefined4)(uVar6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_4 + 4);
    *(undefined2*)param_4 = (undefined2)((undefined4 *)(0));
    param_4[4] = (undefined4)(0);
    param_4[5] = (undefined4)(7);
    pvVar7 = (void *)((void *)*param_1);
    memmove((void *)((int)pvVar7 + uVar2 * 2),pvVar7,uVar3 * 2 + 2);
    if (7 < (uint)param_3[5]) {
      param_3 = (undefined4 *)((undefined4 *)*param_3);
    }
    memcpy(pvVar7,param_3,uVar2 * 2);
    param_1[4] = (undefined4)(uVar1);
    return (undefined4 *)(param_1);
  }
  if (uVar3 <= 0x7ffffffe - uVar2) {
    uVar8 = (uint)(uVar1 | 7);
    if (uVar8 < 0x7fffffff) {
      if (uVar8 < 10) {
        uVar8 = (uint)(10);
      }
    }
    else {
      uVar8 = (uint)(0x7ffffffe);
    }
    pvVar7 = (void *)((void *)thunk_FUN_112eef40(uVar8 + 1));
    param_1[5] = (undefined4)(uVar8);
    *param_1 = (undefined4)(pvVar7);
    param_1[4] = (undefined4)(uVar1);
    if (7 < (uint)param_3[5]) {
      param_3 = (undefined4 *)((undefined4 *)*param_3);
    }
    memcpy(pvVar7,param_3,uVar2 * 2);
    if (7 < (uint)param_4[5]) {
      param_4 = (undefined4 *)((undefined4 *)*param_4);
    }
    memcpy((void *)((int)pvVar7 + uVar2 * 2),param_4,uVar3 * 2 + 2);
    return (undefined4 *)(param_1);
  }
                    
  thunk_FUN_1012a4c0();
}


// Reference entry 112ec970; body size 93 bytes.
#line 1 "ENTRY_112ec970"

int __thiscall Recovered_Bulk::FUN_112ec970(int param_2)
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


// Reference entry 112ec9f0; body size 87 bytes.
#line 1 "ENTRY_112ec9f0"

int __thiscall Recovered_Bulk::FUN_112ec9f0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return (int)(param_1);
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = (int)(0);
    }
  }
  return (int)(param_1);
}


// Reference entry 112eca60; body size 93 bytes.
#line 1 "ENTRY_112eca60"

int __thiscall Recovered_Bulk::FUN_112eca60(int param_2)
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


// Reference entry 112ecae0; body size 87 bytes.
#line 1 "ENTRY_112ecae0"

int __thiscall Recovered_Bulk::FUN_112ecae0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return (int)(param_1);
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = (int)(0);
    }
  }
  return (int)(param_1);
}


// Reference entry 112ecb60; body size 93 bytes.
#line 1 "ENTRY_112ecb60"

int __thiscall Recovered_Bulk::FUN_112ecb60(int param_2)
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


// Reference entry 112ecbe0; body size 87 bytes.
#line 1 "ENTRY_112ecbe0"

int __thiscall Recovered_Bulk::FUN_112ecbe0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((**(code **)(*piVar1 + 4))(param_1));
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
        param_2[9] = (int)(0);
        return (int)(param_1);
      }
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
      param_2[9] = (int)(0);
    }
  }
  return (int)(param_1);
}


// Reference entry 112ecc50; body size 93 bytes.
#line 1 "ENTRY_112ecc50"

int __thiscall Recovered_Bulk::FUN_112ecc50(int param_2)
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


// Reference entry 112ecd20; body size 168 bytes.
#line 1 "ENTRY_112ecd20"

undefined4 * __thiscall Recovered_Bulk::FUN_112ecd20(undefined4 param_2,undefined4 param_3,char *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  char cVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_112ed030(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_certval_DynamicMemoryRootCACertBundle);
  param_1[0x4a] = (undefined4)(0);
  param_1[0x4b] = (undefined4)(0);
  param_1[0x4c] = (undefined4)(0);

  param_1[0x51] = (undefined4)(0);
  param_1[0x52] = (undefined4)(0xf);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  pcVar2 = (char *)(param_4);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(param_4,(int)pcVar2 - (int)(param_4 + 1));

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 112ed030; body size 140 bytes.
#line 1 "ENTRY_112ed030"

undefined4 * __thiscall Recovered_Bulk::FUN_112ed030(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_RootCACertBundle);
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined4 *)((int)param_1 + 0x7d) = 0;
  *(undefined4 *)((int)param_1 + 0x81) = 0;
  *(undefined4 *)((int)param_1 + 0x85) = 0;
  *(undefined4 *)((int)param_1 + 0x89) = 0;
  *(undefined1 *)((int)param_1 + 0x8d) = 0;
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_sonos_RootCACertBundle_Metadata);
  memset(param_1 + 0x25,0,0x82);
  param_1[0x48] = (undefined4)(param_2);
  param_1[0x49] = (undefined4)(param_3);
  param_1[0x46] = (undefined4)(1);
  *(undefined1 *)(param_1 + 0x47) = 0;
  thunk_FUN_112f53c0(param_1 + 1);
  iVar1 = (int)(DAT_12121e7c);
  DAT_12121e7c = (int)(DAT_12121e7c + 1);
  thunk_FUN_111c0480((undefined4 *)((int)param_1 + 0x7d),0x11,"%016X",iVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 112ed3b0; body size 113 bytes.
#line 1 "ENTRY_112ed3b0"

void __fastcall FUN_112ed3b0(int *param_1)

{
 try {
  int *piVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  local_14 = (int *)((int *)param_1[10]);
  piVar1 = (int *)(param_1);
  if ((int *)(local_14) != (int *)0x0) {
    if ((int *)(int *)(param_1[9]) == (int *)0x0) {
                    
      std::_Xbad_function_call();
    }
    (**(code **)(*(int *)param_1[9] + 8))(&local_14,DAT_12126b84 );
    piVar1 = (int *)(local_14);
  }
  local_14 = (int *)(piVar1);
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 112ed450; body size 111 bytes.
#line 1 "ENTRY_112ed450"

void __fastcall FUN_112ed450(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  pvVar1 = (void *)((void *)*param_1);
  if ((void *)(pvVar1) != (void *)0x0) {

    _Mtx_destroy_in_situ((int)pvVar1 + 0x640,DAT_12126b84 );
    _eh_vector_destructor_iterator_(pvVar1,0xa0,10,(_func_void_void_ptr *)LAB_10077a70);
    thunk_FUN_1148a50e(pvVar1,0x674);
  }

  return;

 } catch (...) { }
}


// Reference entry 112ed4f0; body size 78 bytes.
#line 1 "ENTRY_112ed4f0"

void __fastcall FUN_112ed4f0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[2] - iVar1);
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
  return;
}


// Reference entry 112ed560; body size 198 bytes.
#line 1 "ENTRY_112ed560"

void __fastcall FUN_112ed560(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(param_1[0x52]);
  if (0xf < uVar4) {
    iVar1 = (int)(param_1[0x4d]);
    uVar3 = (uint)(uVar4 + 1);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar4 + 0x24);
      if (0x1f < (iVar1 - iVar2) - 4U) goto LAB_112ed620;
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
  }
  param_1[0x51] = (undefined4)(0);
  param_1[0x52] = (undefined4)(0xf);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  iVar1 = (int)(param_1[0x4a]);
  if (iVar1 != 0) {
    uVar4 = (uint)(param_1[0x4c] - iVar1);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
LAB_112ed620:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar4);
    param_1[0x4a] = (undefined4)(0);
    param_1[0x4b] = (undefined4)(0);
    param_1[0x4c] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_RootCACertBundle);
  thunk_FUN_112f5390(param_1 + 1);
  return;
}


// Reference entry 112ed700; body size 86 bytes.
#line 1 "ENTRY_112ed700"

void __fastcall FUN_112ed700(void *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  _Mtx_destroy_in_situ((int)param_1 + 0x640,DAT_12126b84 );
  _eh_vector_destructor_iterator_(param_1,0xa0,10,(_func_void_void_ptr *)LAB_10077a70);

  return;

 } catch (...) { }
}


// Reference entry 112ed860; body size 143 bytes.
#line 1 "ENTRY_112ed860"

void __thiscall Recovered_Bulk::FUN_112ed860(int param_2)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  int local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  local_18 = (int *)((int *)0x0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    local_18 = (int *)((int *)(**(code **)**(undefined4 **)(param_2 + 0x24))(local_3c,local_14));
  }
  thunk_FUN_112f1e40(param_1);
  if ((int *)(local_18) != (int *)0x0) {
    (**(code **)(*local_18 + 0x10))((int *)(local_18) != (int *)(local_3c));
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112ed950; body size 143 bytes.
#line 1 "ENTRY_112ed950"

void __thiscall Recovered_Bulk::FUN_112ed950(int param_2)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  int local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  local_18 = (int *)((int *)0x0);

  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    local_18 = (int *)((int *)(**(code **)**(undefined4 **)(param_2 + 0x24))(local_3c,local_14));
  }
  thunk_FUN_112f1fb0(param_1);
  if ((int *)(local_18) != (int *)0x0) {
    (**(code **)(*local_18 + 0x10))((int *)(local_18) != (int *)(local_3c));
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112eda10; body size 70 bytes.
#line 1 "ENTRY_112eda10"

int __thiscall Recovered_Bulk::FUN_112eda10(int param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = (int)(0x41);
  puVar1 = (undefined1 *)((undefined1 *)(param_1 + 4));
  do {
    *puVar1 = (undefined1)(puVar1[param_2 - param_1]);
    iVar2 = (int)(iVar2 + -1);
    puVar1 = (undefined1 *)(puVar1 + 1);
  } while (iVar2 != 0);
  iVar2 = (int)(0x41);
  puVar1 = (undefined1 *)((undefined1 *)(param_1 + 0x45));
  do {
    *puVar1 = (undefined1)(puVar1[param_2 - param_1]);
    iVar2 = (int)(iVar2 + -1);
    puVar1 = (undefined1 *)(puVar1 + 1);
  } while (iVar2 != 0);
  return (int)(param_1);
}


// Reference entry 112edc80; body size 114 bytes.
#line 1 "ENTRY_112edc80"

void __stdcall FUN_112edc80(void *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if ((void *)(param_1) != (void *)0x0) {

    _Mtx_destroy_in_situ((int)param_1 + 0x640,DAT_12126b84 );
    _eh_vector_destructor_iterator_(param_1,0xa0,10,(_func_void_void_ptr *)LAB_10077a70);
    thunk_FUN_1148a50e(param_1,0x674);
  }

  return;

 } catch (...) { }
}


// Reference entry 112eddc0; body size 223 bytes.
#line 1 "ENTRY_112eddc0"

undefined4 * __thiscall Recovered_Bulk::FUN_112eddc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(param_1[0x52]);
  if (0xf < uVar4) {
    iVar1 = (int)(param_1[0x4d]);
    uVar3 = (uint)(uVar4 + 1);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar4 + 0x24);
      if (0x1f < (iVar1 - iVar2) - 4U) goto LAB_112ede99;
    }
    thunk_FUN_1148a50e(iVar2,uVar3);
  }
  param_1[0x51] = (undefined4)(0);
  param_1[0x52] = (undefined4)(0xf);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  iVar1 = (int)(param_1[0x4a]);
  if (iVar1 != 0) {
    uVar4 = (uint)(param_1[0x4c] - iVar1);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
LAB_112ede99:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar4);
    param_1[0x4a] = (undefined4)(0);
    param_1[0x4b] = (undefined4)(0);
    param_1[0x4c] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_RootCACertBundle);
  thunk_FUN_112f5390(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112edf90; body size 117 bytes.
#line 1 "ENTRY_112edf90"

void * __thiscall Recovered_Bulk::FUN_112edf90(byte param_2)
{
  void *param_1 = (void *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  _Mtx_destroy_in_situ((int)param_1 + 0x640,DAT_12126b84 );
  _eh_vector_destructor_iterator_(param_1,0xa0,10,(_func_void_void_ptr *)LAB_10077a70);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x674);
  }

  return (void *)(param_1);

 } catch (...) { }
}


// Reference entry 112ee100; body size 84 bytes.
#line 1 "ENTRY_112ee100"

void __thiscall Recovered_Bulk::FUN_112ee100(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[2] - iVar1);
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
  param_1[1] = (int)(param_3 + param_2);
  param_1[2] = (int)(param_4 + param_2);
  return;
}


// Reference entry 112ee1c0; body size 127 bytes.
#line 1 "ENTRY_112ee1c0"

undefined4 * __fastcall FUN_112ee1c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 112ee260; body size 127 bytes.
#line 1 "ENTRY_112ee260"

undefined4 * __fastcall FUN_112ee260(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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
  puVar2[0xb] = (undefined4)(0);

  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = (undefined4)(uVar3);
  }

  return (undefined4 *)(puVar2);

 } catch (...) { }
}


// Reference entry 112ee940; body size 284 bytes.
#line 1 "ENTRY_112ee940"

void __thiscall Recovered_Bulk::FUN_112ee940(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int local_2c [9];
  int *local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_2c);
  piVar1 = (int *)((int *)param_1[9]);
  if (((int *)(piVar1) != (int *)(param_1)) && ((int *)(int *)(param_2[9]) != (int *)(param_2))) {
    param_1[9] = (int)(param_2[9]);
    param_2[9] = (int)((int)piVar1);
    thunk_FUN_1148ac28();
    return;
  }
  local_8 = (int *)((int *)0x0);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_1)) {
      local_8 = (int *)((int *)(**(code **)(*piVar1 + 4))(local_2c));
      piVar1 = (int *)((int *)param_1[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112ee9c3;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
      piVar1 = (int *)(local_8);
    }
    local_8 = (int *)(piVar1);
    param_1[9] = (int)(0);
  }
LAB_112ee9c3:
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      iVar2 = (int)((**(code **)(*piVar1 + 4))(param_1));
      param_1[9] = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112eea02;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
    }
    else {
      param_1[9] = (int)((int)piVar1);
    }
    param_2[9] = (int)(0);
  }
LAB_112eea02:
  if ((int *)(local_8) != (int *)0x0) {
    if ((int *)(local_8) == (int *)(local_2c)) {
      iVar2 = (int)((**(code **)(*local_8 + 4))(param_2));
      param_2[9] = (int)(iVar2);
      if ((int *)(local_8) != (int *)0x0) {
        (**(code **)(*local_8 + 0x10))((int *)(local_8) != (int *)(local_2c));
        thunk_FUN_1148ac28();
        return;
      }
    }
    else {
      param_2[9] = (int)((int)local_8);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112eeab0; body size 284 bytes.
#line 1 "ENTRY_112eeab0"

void __thiscall Recovered_Bulk::FUN_112eeab0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int local_2c [9];
  int *local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_2c);
  piVar1 = (int *)((int *)param_1[9]);
  if (((int *)(piVar1) != (int *)(param_1)) && ((int *)(int *)(param_2[9]) != (int *)(param_2))) {
    param_1[9] = (int)(param_2[9]);
    param_2[9] = (int)((int)piVar1);
    thunk_FUN_1148ac28();
    return;
  }
  local_8 = (int *)((int *)0x0);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_1)) {
      local_8 = (int *)((int *)(**(code **)(*piVar1 + 4))(local_2c));
      piVar1 = (int *)((int *)param_1[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112eeb33;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
      piVar1 = (int *)(local_8);
    }
    local_8 = (int *)(piVar1);
    param_1[9] = (int)(0);
  }
LAB_112eeb33:
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      iVar2 = (int)((**(code **)(*piVar1 + 4))(param_1));
      param_1[9] = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112eeb72;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
    }
    else {
      param_1[9] = (int)((int)piVar1);
    }
    param_2[9] = (int)(0);
  }
LAB_112eeb72:
  if ((int *)(local_8) != (int *)0x0) {
    if ((int *)(local_8) == (int *)(local_2c)) {
      iVar2 = (int)((**(code **)(*local_8 + 4))(param_2));
      param_2[9] = (int)(iVar2);
      if ((int *)(local_8) != (int *)0x0) {
        (**(code **)(*local_8 + 0x10))((int *)(local_8) != (int *)(local_2c));
        thunk_FUN_1148ac28();
        return;
      }
    }
    else {
      param_2[9] = (int)((int)local_8);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112eed00; body size 78 bytes.
#line 1 "ENTRY_112eed00"

void __fastcall FUN_112eed00(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    uVar3 = (uint)(param_1[2] - iVar1);
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
  return;
}


// Reference entry 112eed70; body size 83 bytes.
#line 1 "ENTRY_112eed70"

void __fastcall FUN_112eed70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (7 < (uint)param_1[5]) {
    iVar2 = (int)(*param_1);
    iVar1 = (int)(param_1[5] * 2);
    uVar4 = (uint)(iVar1 + 2);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(iVar1 + 0x25);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
  }
  param_1[4] = (int)(0);
  param_1[5] = (int)(7);
  *(undefined2*)param_1 = (undefined2)((int *)(0));
  return;
}


// Reference entry 112eef40; body size 86 bytes.
#line 1 "ENTRY_112eef40"

void * FUN_112eef40(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x80000000) {
    param_1 = (uint)(param_1 * 2);
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
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 112ef010; body size 263 bytes.
#line 1 "ENTRY_112ef010"

int * __thiscall Recovered_Bulk::FUN_112ef010(void *param_2,uint param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *_Dst;
  void *_Dst_00;
  int iVar4;
  uint uVar5;
  
  uVar2 = (uint)(param_1[5]);
  if (param_3 <= uVar2) {
    _Dst = (int *)(param_1);
    if (7 < uVar2) {
      _Dst = (int *)((int *)*param_1);
    }
    param_1[4] = (int)(param_3);
    memmove(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (int)_Dst) = 0;
    return (int *)(param_1);
  }
  if (0x7ffffffe < param_3) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar5 = (uint)(param_3 | 7);
  if (uVar5 < 0x7fffffff) {
    if (0x7ffffffe - (uVar2 >> 1) < uVar2) {
      uVar5 = (uint)(0x7ffffffe);
    }
    else {
      uVar1 = (uint)((uVar2 >> 1) + uVar2);
      if (uVar5 < uVar1) {
        uVar5 = (uint)(uVar1);
      }
    }
  }
  else {
    uVar5 = (uint)(0x7ffffffe);
  }
  _Dst_00 = (void *)((void *)thunk_FUN_112eef40(uVar5 + 1));
  param_1[5] = (int)(uVar5);
  param_1[4] = (int)(param_3);
  memcpy(_Dst_00,param_2,param_3 * 2);
  *(undefined2 *)(param_3 * 2 + (int)_Dst_00) = 0;
  if (7 < uVar2) {
    iVar3 = (int)(*param_1);
    uVar5 = (uint)(uVar2 * 2 + 2);
    iVar4 = (int)(iVar3);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar3 + -4));
      uVar5 = (uint)(uVar2 * 2 + 0x25);
      if (0x1f < (iVar3 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5);
  }
  *param_1 = (int)((int)_Dst_00);
  return (int *)(param_1);
}


// Reference entry 112ef180; body size 320 bytes.
#line 1 "ENTRY_112ef180"

void FUN_112ef180(void)

{
 try {
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  iVar4 = (int)(_Mtx_lock(&DAT_122f6c20,DAT_12126b84 ));
  piVar2 = (int *)(DAT_122f6c18);
  if (iVar4 == 0) {
    local_8 = (int)(iVar4);
    if ((int *)(DAT_122f6c18) != (int *)0x0) {
      piVar1 = (int *)(DAT_122f6c18 + 0x46);
      LOCK();
      iVar4 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if ((void *)(DAT_122f6ca0) != (void *)0x0) {
        thunk_FUN_112f2220(piVar2);
      }
      if ((iVar4 < 2) && ((int *)(piVar2) != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x10))(1);
      }
      DAT_122f6c18 = (int)((int *)0x0);
    }
    piVar2 = (int *)(DAT_122f6c1c);
    if ((int *)(DAT_122f6c1c) != (int *)0x0) {
      piVar1 = (int *)(DAT_122f6c1c + 0x46);
      LOCK();
      iVar4 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if ((void *)(DAT_122f6ca0) != (void *)0x0) {
        thunk_FUN_112f2220(piVar2);
      }
      if ((iVar4 < 2) && ((int *)(piVar2) != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x10))(1);
      }
      DAT_122f6c1c = (int)((int *)0x0);
    }

    _Mtx_unlock(&DAT_122f6c20);
    pvVar3 = (void *)(DAT_122f6ca0);
    DAT_122f6ca0 = (int)((void *)0x0);
    if ((void *)(pvVar3) != (void *)0x0) {

      _Mtx_destroy_in_situ((int)pvVar3 + 0x640);
      _eh_vector_destructor_iterator_(pvVar3,0xa0,10,(_func_void_void_ptr *)LAB_10077a70);
      thunk_FUN_1148a50e(pvVar3,0x674);
    }

    return;
  }
                    
  std::_Throw_C_error(iVar4);

 } catch (...) { }
}


// Reference entry 112ef380; body size 167 bytes.
#line 1 "ENTRY_112ef380"

undefined4 __thiscall Recovered_Bulk::FUN_112ef380(int param_2)
{
  int param_1 = (int )this;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  uint local_8;
  uint local_4;
  
  local_c = (byte)(0);
  local_a = (byte)(0);
  local_8 = (uint)(0);
  local_b = (byte)(0);
  local_9 = (byte)(0);
  local_4 = (uint)(0);
  thunk_FUN_101b9160(param_1 + 4,"%hhu.%hhu-%u",&local_c,&local_a,&local_8);
  thunk_FUN_101b9160(param_2 + 4,"%hhu.%hhu-%u",&local_b,&local_9,&local_4);
  if (local_b < local_c) {
    return (undefined4)(1);
  }
  if (local_c == local_b) {
    if (local_9 < local_a) {
      return (undefined4)(1);
    }
    if (local_a == local_9) {
      if (local_4 < local_8) {
        return (undefined4)(1);
      }
      if (local_8 == local_4) {
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 112efc20; body size 193 bytes.
#line 1 "ENTRY_112efc20"

undefined4 FUN_112efc20(int *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  iVar3 = (int)(_Mtx_lock(&DAT_122f6c20,uVar2));
  iVar1 = (int)(DAT_122f6c1c);
  if (iVar3 != 0) {
                    
    std::_Throw_C_error(iVar3);
  }
  iVar4 = (int)(DAT_122f6c18);
  local_8 = (int)(iVar3);
  if (DAT_122f6c18 == 0) {
    if (DAT_122f6c1c == 0) {
      uVar5 = (undefined4)(1);
      goto LAB_112efcb4;
    }
    thunk_FUN_112f1710(DAT_122f6c1c,"rootcerts",4,"Using fallback root cert bundle");
    iVar4 = (int)(iVar1);
  }
  LOCK();
  *(int *)(iVar4 + 0x118) = *(int *)(iVar4 + 0x118) + 1;
  UNLOCK();
  if (DAT_122f6ca0 != 0) {
    thunk_FUN_112f2220(iVar4);
  }
  *param_1 = (int)(iVar4);
  uVar5 = (undefined4)(0);
LAB_112efcb4:
  _Mtx_unlock(&DAT_122f6c20);

  return (undefined4)(uVar5);

 } catch (...) { }
}


// Reference entry 112efd20; body size 492 bytes.
#line 1 "ENTRY_112efd20"

undefined4 FUN_112efd20(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
 try {
  int *piVar1;
  void *_Memory;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;


  local_14 = (void *)((void *)0x0);
  piVar4 = (int *)((int *)0x0);
  iVar2 = (int)(_Mtx_lock(&DAT_122f6c20,DAT_12126b84 ));
  piVar1 = (int *)(DAT_122f6c1c);
  if (iVar2 != 0) {
                    
    std::_Throw_C_error(iVar2);
  }
  piVar3 = (int *)(DAT_122f6c18);
  local_8 = (int)(iVar2);
  if ((int *)(DAT_122f6c18) == (int *)0x0) {
    if ((int *)(DAT_122f6c1c) != (int *)0x0) {
      thunk_FUN_112f1710(DAT_122f6c1c,"rootcerts",4,"Using fallback root cert bundle");
      piVar3 = (int *)(piVar1);
      goto LAB_112efd9d;
    }

    _Mtx_unlock(&DAT_122f6c20);
  }
  else {
LAB_112efd9d:
    LOCK();
    piVar3[0x46] = (int)(piVar3[0x46] + 1);
    UNLOCK();
    if (DAT_122f6ca0 != 0) {
      thunk_FUN_112f2220(piVar3);
    }

    _Mtx_unlock(&DAT_122f6c20);
    iVar2 = (int)(thunk_FUN_112f0000(param_1,&local_14));
    piVar4 = (int *)(piVar3);
    if (iVar2 == 0) goto LAB_112efe00;
  }
  piVar1 = (int *)(piVar4 + 0x46);
  LOCK();
  iVar2 = (int)(*piVar1);
  *piVar1 = (int)(*piVar1 + -1);
  UNLOCK();
  if (DAT_122f6ca0 != 0) {
    thunk_FUN_112f2220(piVar4);
  }
  if ((iVar2 < 2) && ((int *)(piVar4) != (int *)0x0)) {
    (**(code **)(*piVar4 + 0x10))(1);
  }
  piVar3 = (int *)((int *)thunk_FUN_112f1600(PTR_LAB_12121e74,param_2));
  if ((int *)(piVar3) != (int *)0x0) {
    iVar2 = (int)(thunk_FUN_112f0000(param_1,&local_14));
    if (iVar2 == 0) {
LAB_112efe00:
      _Memory = (void *)(local_14);
      thunk_FUN_11401680(local_14);
      free(_Memory);
      *param_3 = (undefined4)(piVar3);

      return (undefined4)(0);
    }
  }
  piVar1 = (int *)(piVar3 + 0x46);
  LOCK();
  iVar2 = (int)(*piVar1);
  *piVar1 = (int)(*piVar1 + -1);
  UNLOCK();
  if (DAT_122f6ca0 != 0) {
    thunk_FUN_112f2220(piVar3);
  }
  if ((iVar2 < 2) && ((int *)(piVar3) != (int *)0x0)) {
    (**(code **)(*piVar3 + 0x10))(1);
  }
  *param_3 = (undefined4)(0);

  return (undefined4)(1);

 } catch (...) { }
}


// Reference entry 112f0000; body size 319 bytes.
#line 1 "ENTRY_112f0000"

int FUN_112f0000(undefined4 param_1,undefined4 *param_2)

{
 try {
  void *_Memory;
  int iVar1;
  int *in_stack_00000030;
  undefined4 in_stack_00000034;
  int *in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined1 auStack_b0 [36];
  undefined4 local_8c;
  undefined1 *puStack_88;
  undefined1 auStack_84 [36];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined **local_58;
  undefined1 *local_54;
  undefined4 uStack_3c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_2 = (undefined4)(0);
  _Memory = (void *)(malloc(0x198));
  if ((void *)(_Memory) == (void *)0x0) {
    iVar1 = (int)(6);
  }
  else {
    thunk_FUN_11401f20();
    local_58 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

    uStack_5c = (undefined4)(in_stack_00000060);
    puStack_88 = (undefined1 *)(auStack_84);

    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if ((int *)(in_stack_0000005c) != (int *)0x0) {

      local_60 = (undefined4)((**(code **)*in_stack_0000005c)());
    }
    puStack_88 = (undefined1 *)((undefined1 *)in_stack_00000034);

    *(unsigned char *)((char *)&local_8 + 0) = 5;
    if ((int *)(in_stack_00000030) != (int *)0x0) {
      local_8c = (undefined4)((**(code **)*in_stack_00000030)(auStack_b0));
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    iVar1 = (int)(thunk_FUN_112f01f0(param_1,_Memory));
    if (iVar1 == 0) {
      *param_2 = (undefined4)(_Memory);
      iVar1 = (int)(0);
    }
    else {
      thunk_FUN_11401680();

      free(_Memory);
    }
  }
  if ((int *)(in_stack_00000030) != (int *)0x0) {
    (**(code **)(*in_stack_00000030 + 0x10))();
  }
  if ((int *)(in_stack_0000005c) != (int *)0x0) {
    (**(code **)(*in_stack_0000005c + 0x10))();
  }

  return (int)(iVar1);

 } catch (...) { }
}


// Reference entry 112f01f0; body size 705 bytes.
#line 1 "ENTRY_112f01f0"

void __thiscall Recovered_Bulk::FUN_112f01f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *in_stack_00000030;
  int *in_stack_00000034;
  int *in_stack_0000005c;
  uint in_stack_00000060;
  int *in_stack_00000088;
  undefined4 local_64;
  uint local_60;
  int local_5c;
  undefined4 *local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int *local_44;
  uint local_40;
  int local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_14 = (uint)(DAT_12126b84);

  local_48 = (undefined4)(param_3);
  local_44 = (int *)(in_stack_00000034);
  local_40 = (uint)(in_stack_00000060);

  switch(param_2) {
  case 0:
    pcVar3 = (char *)("general");
    break;
  case 1:
    pcVar3 = (char *)("Sonos legacy");
    break;
  case 2:
    pcVar3 = (char *)("Sonos");
    break;
  case 3:
    pcVar3 = (char *)("Sonos client device");
    break;
  default:
    pcVar3 = (char *)("invalid store type");
  }
  local_54 = (int)(param_1);
  if (*(char *)(param_1 + 0x7c) == '\0') {
    thunk_FUN_112f1710(param_1,"rootcerts",4,"Cannot parse %s certs. Bundle is invalid",pcVar3);
  }
  else {
    if ((int *)(in_stack_00000030) == (int *)0x0) {
      local_18 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      *(unsigned short *)((char *)&local_8 + 1) = 0;
      if ((undefined4 *)(DAT_122f6c9c) != (undefined4 *)0x0) {
        local_18 = (int *)((int *)(**(code **)DAT_122f6c9c)(local_3c,local_14));
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      thunk_FUN_112f1fb0(&stack0x0000000c);
      if ((int *)(local_18) != (int *)0x0) {
        (**(code **)(*local_18 + 0x10))((int *)(local_18) != (int *)(local_3c));
      }
    }
    if ((int *)(in_stack_0000005c) == (int *)0x0) {
      local_18 = (int *)(in_stack_0000005c);
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if ((undefined4 *)(DAT_122f6c74) != (undefined4 *)0x0) {
        local_18 = (int *)((int *)(**(code **)DAT_122f6c74)(local_3c));
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      thunk_FUN_112f1e40(&stack0x00000038);
      if ((int *)(local_18) != (int *)0x0) {
        (**(code **)(*local_18 + 0x10))((int *)(local_18) != (int *)(local_3c));
      }
    }
    switch(param_2) {
    case 0:
      uVar4 = (undefined4)(1);
      break;
    case 1:
      uVar4 = (undefined4)(2);
      break;
    case 2:
      uVar4 = (undefined4)(4);
      break;
    case 3:
      uVar4 = (undefined4)(0x20);
      break;
    default:
      uVar4 = (undefined4)(0);
    }
    uVar2 = (uint)(0);
    if ((int *)(in_stack_0000005c) == (int *)0x0) {

    }
    else {
      local_40 = (uint)((**(code **)(*in_stack_0000005c + 8))(&local_40));
      local_40 = (uint)(local_40 & 0xffff);
    }
    if (((int *)(in_stack_00000030) == (int *)0x0) ||
       (cVar1 = (**(code **)(*in_stack_00000030 + 8))(&local_44), cVar1 == '\0')) {
      uVar2 = (uint)(8);
    }
    local_44 = (int *)(&local_4c);
    local_58 = (undefined4 *)(&local_50);

    local_5c = (int)(local_54 + 4);

    local_40 = (uint)(local_40 & 0xffff);
    local_60 = (uint)(uVar2 | 0x10);
    local_64 = (undefined4)(uVar4);
    if ((int *)(in_stack_00000088) == (int *)0x0) {
                    
      std::_Xbad_function_call();
    }
    (**(code **)(*in_stack_00000088 + 8))
              (&local_64,&local_60,&local_40,&local_5c,&local_48,&local_58,&local_44);
    thunk_FUN_112f1710(local_54,"rootcerts",5 - (uint)(local_4c != 0),
                       "Parsed %llu %s certs (failed to parse %llu certs)",local_50,0,pcVar3,
                       local_4c,0);
  }
  if ((int *)(in_stack_00000030) != (int *)0x0) {
    (**(code **)(*in_stack_00000030 + 0x10))((int *)(in_stack_00000030) != (int *)&stack0x0000000c);
    in_stack_00000030 = (int *)((int *)0x0);
  }
  if ((int *)(in_stack_0000005c) != (int *)0x0) {
    (**(code **)(*in_stack_0000005c + 0x10))((int *)(in_stack_0000005c) != (int *)&stack0x00000038);
    in_stack_0000005c = (int *)((int *)0x0);
  }
  if ((int *)(in_stack_00000088) != (int *)0x0) {
    (**(code **)(*in_stack_00000088 + 0x10))((int *)(in_stack_00000088) != (int *)&stack0x00000064);
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112f05b0; body size 702 bytes.
#line 1 "ENTRY_112f05b0"

void FUN_112f05b0(undefined4 param_1,int param_2,char param_3,undefined4 param_4,int *param_5,
                 undefined1 *param_6,undefined4 param_7)

{
 try {
  int *piVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  void *local_414;
  undefined1 *puStack_410;
  undefined4 local_40c;
  undefined1 local_408 [1024];
  uint local_8;


  uVar3 = (uint)(DAT_12126b84 ^ (uint)local_408);

  local_8 = (uint)(uVar3);
  pvVar4 = (void *)(operator_new(0x14c));

  if ((void *)(pvVar4) == (void *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)thunk_FUN_112ecd20(PTR_LAB_12121e74,param_4,param_1));
  }

  iVar6 = (int)((**(code **)(*piVar5 + 0xc))(uVar3));
  if (iVar6 != 0) {
    if ((iVar6 != 3) && (param_3 != '\0')) {
      iVar6 = (int)(thunk_FUN_112f38b0(param_1));
      if (iVar6 == 0) {
        thunk_FUN_112f1710(piVar5,"rootcerts",4,"Removed bad cert bundle: %s",param_1);
      }
    }
    piVar1 = (int *)(piVar5 + 0x46);
    LOCK();
    iVar6 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (DAT_122f6ca0 != 0) {
      thunk_FUN_112f2220(piVar5);
    }
    if (iVar6 < 2) {
      (**(code **)(*piVar5 + 0x10))(1);
    }
    goto LAB_112f079b;
  }
  local_408[0] = (undefined1)(0);
  uVar3 = (uint)(-(uint)(*param_5 != 0) & *param_5 + 0x90U);
  if (uVar3 == 0) {
LAB_112f06f6:
    piVar1 = (int *)((int *)*param_5);
    piVar7 = (int *)((int *)0x0);
    if ((int *)(piVar1) != (int *)0x0) {
      thunk_FUN_111c0480(local_408,0x400,&DAT_1188bc94,param_6);
      piVar7 = (int *)(piVar1);
    }
    *param_5 = (int)((int)piVar5);
    piVar5 = (int *)(piVar7);
  }
  else {
    if (param_2 == 0) {
      iVar6 = (int)(thunk_FUN_112ef380(piVar5 + 0x24));
      if (-1 < iVar6) goto LAB_112f085f;
      goto LAB_112f06f6;
    }
    cVar2 = (char)(thunk_FUN_112f1370(piVar5 + 0x24));
    if (cVar2 != '\0') {
      iVar6 = (int)(thunk_FUN_112ef380(piVar5 + 0x24));
      if (0 < iVar6) {
        iVar6 = (int)(thunk_FUN_112ef330(uVar3));
        if (iVar6 != 0) goto LAB_112f07f1;
      }
      goto LAB_112f06f6;
    }
LAB_112f07f1:
    iVar6 = (int)(thunk_FUN_112ef380(piVar5 + 0x24));
    if (iVar6 < 0) {
      cVar2 = (char)(thunk_FUN_112f1370(uVar3));
      if (cVar2 != '\0') {
        iVar6 = (int)(thunk_FUN_112ef330(param_2));
        if (iVar6 == 0) goto LAB_112f082a;
      }
      goto LAB_112f06f6;
    }
LAB_112f082a:
    iVar6 = (int)(thunk_FUN_112ef380(piVar5 + 0x24));
    if (iVar6 == 0) {
      cVar2 = (char)(thunk_FUN_112f1370(uVar3));
      if (cVar2 == '\0') {
        iVar6 = (int)(thunk_FUN_112ef330(param_2));
        if (iVar6 != 0) goto LAB_112f06f6;
      }
    }
LAB_112f085f:
    param_7 = (undefined4)(0x400);
    param_6 = (undefined1 *)(local_408);
  }
  thunk_FUN_111c0480(param_6,param_7,&DAT_1188bc94,param_1);
  if ((int *)(piVar5) != (int *)0x0) {
    piVar1 = (int *)(piVar5 + 0x46);
    LOCK();
    iVar6 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (DAT_122f6ca0 != 0) {
      thunk_FUN_112f2220(piVar5);
    }
    if (iVar6 < 2) {
      (**(code **)(*piVar5 + 0x10))(1);
    }
    if (param_3 != '\0') {
      iVar6 = (int)(thunk_FUN_112f38b0(local_408));
      if (iVar6 == 0) {
        FUN_112f1770(param_4,"rootcerts",4,"Removed unused cert bundle: %s",local_408);
      }
    }
  }
LAB_112f079b:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112f1370; body size 79 bytes.
#line 1 "ENTRY_112f1370"

uint __thiscall Recovered_Bulk::FUN_112f1370(int param_2)
{
  int param_1 = (int )this;
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  uVar2 = (uint)(thunk_FUN_112ef380(param_2));
  if (uVar2 == 0) {
    pbVar3 = (byte *)((byte *)(param_2 + 0x45));
    pbVar4 = (byte *)((byte *)(param_1 + 0x45));
    do {
      bVar1 = (byte)(*pbVar4);
      bVar5 = (bool)(bVar1 < *pbVar3);
      if (bVar1 != *pbVar3) {
LAB_112f13a8:
        uVar2 = (uint)(-(uint)bVar5 | 1);
        goto LAB_112f13ad;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar4[1]);
      bVar5 = (bool)(bVar1 < pbVar3[1]);
      if ((byte *)(bVar1) != (byte *)(pbVar3)[1]) goto LAB_112f13a8;
      pbVar4 = (byte *)(pbVar4 + 2);
      pbVar3 = (byte *)(pbVar3 + 2);
    } while (bVar1 != 0);
    uVar2 = (uint)(0);
LAB_112f13ad:
    if (uVar2 == 0) {
      return (uint)(1);
    }
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 112f1460; body size 325 bytes.
#line 1 "ENTRY_112f1460"

void __fastcall FUN_112f1460(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined **ppuStack_8c;
  undefined1 auStack_88 [65];
  undefined1 auStack_47 [67];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&ppuStack_8c);
  if ((char)param_1[0x47] != '\0') {
    thunk_FUN_1148ac28();
    return;
  }
  iVar2 = (int)((**(code **)(*param_1 + 0x20))());
  if (iVar2 == 0) {
    uVar3 = (undefined4)((**(code **)(*param_1 + 0x1c))(param_1[0x48],param_1 + 1));
    uVar3 = (undefined4)((**(code **)(*param_1 + 0x18))(uVar3));
    iVar2 = (int)(thunk_FUN_112f5460(uVar3));
    if (iVar2 == 9) {
      cVar1 = (char)((**(code **)(*param_1 + 0x14))());
      if (cVar1 != '\0') {
LAB_112f156f:
        uVar3 = (undefined4)(thunk_FUN_112f58d0(iVar2));
        thunk_FUN_112f1710(param_1,"rootcerts",4,"Failed to parse root cert bundle: %s",uVar3);
        thunk_FUN_1148ac28();
        return;
      }
    }
    else if (iVar2 != 0) goto LAB_112f156f;
    ppuStack_8c = (undefined **)((uint)&ghidra_vftable_sonos_RootCACertBundle_Metadata);
    memset(auStack_88,0,0x82);
    thunk_FUN_111c0480(auStack_88,0x41,&DAT_1188bc94,(int)param_1 + 6);
    thunk_FUN_112f3b40((int)param_1 + 0x47,0x20,auStack_47,0x41);
    thunk_FUN_112eda10(&ppuStack_8c);
    iVar2 = (int)(thunk_FUN_112f56c0(param_1 + 1));
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x47) = 1;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112f1600; body size 184 bytes.
#line 1 "ENTRY_112f1600"

int * FUN_112f1600(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)(operator_new(0x130));
  puVar2 = (undefined *)(PTR_PTR_12121e70);
  if ((int *)(piVar3) == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    thunk_FUN_112ed030(param_1,param_2);
    *piVar3 = (int)((int)(uint)&ghidra_vftable_sonos_certval_ImmutableMemoryRootCACertBundle);
    piVar3[0x4a] = (int)(*(int *)puVar2);
    piVar3[0x4b] = (int)(*(int *)(puVar2 + 4));
  }
  if (*(code **)(*piVar3 + 0xc) == (code *)(thunk_FUN_112f1460)) {
    iVar4 = (int)(thunk_FUN_112f1460());
  }
  else {
    iVar4 = (int)((**(code **)(*piVar3 + 0xc))());
  }
  if (iVar4 != 0) {
    uVar5 = (undefined4)(thunk_FUN_112f58d0(iVar4));
    thunk_FUN_112f1710(piVar3,"rootcerts",3,"Failed to load fallback cert bundle: %s",uVar5);
    piVar1 = (int *)(piVar3 + 0x46);
    LOCK();
    iVar4 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (DAT_122f6ca0 != 0) {
      thunk_FUN_112f2220(piVar3);
    }
    if (iVar4 < 2) {
      (**(code **)(*piVar3 + 0x10))(1);
    }
    return (int *)((int *)0x0);
  }
  return (int *)(piVar3);
}


// Reference entry 112f17a0; body size 155 bytes.
#line 1 "ENTRY_112f17a0"

void __fastcall FUN_112f17a0(char *param_1)

{
 try {
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pcVar1 = (char *)(param_1 + 0x640);
  iVar2 = (int)(_Mtx_lock(pcVar1,DAT_12126b84 ));
  if (iVar2 != 0) {
                    
    std::_Throw_C_error(iVar2);
  }

  for (pcVar3 = (char *)(param_1);(char *)(pcVar3) != (char *)(pcVar1); pcVar3 = pcVar3 + 0xa0) {
    if (*pcVar3 != '\0') {
      thunk_FUN_112f1740(param_1,"rootcerts",0,"%s; %s-%s; ref count: %u",pcVar3,pcVar3 + 0x18,
                         pcVar3 + 0x59,*(undefined4 *)(pcVar3 + 0x9c));
    }
  }
  _Mtx_unlock(pcVar1);

  return;

 } catch (...) { }
}


// Reference entry 112f1900; body size 644 bytes.
#line 1 "ENTRY_112f1900"

void FUN_112f1900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  void *local_8fc;
  undefined1 *puStack_8f8;
  int local_8f4;
  undefined **local_8f0;
  undefined1 local_8ec [65];
  undefined1 local_8ab [71];
  void *local_864;
  undefined1 local_860 [52];
  undefined *local_82c;
  undefined4 local_828;
  undefined1 local_824;
  char *local_820;
  undefined1 *local_81c;
  undefined1 local_818;
  undefined1 *local_814;
  undefined1 *local_810;
  undefined1 local_80c;
  undefined1 local_808 [1024];
  undefined1 local_408 [1024];
  uint local_8;


  local_8 = (uint)(DAT_12126b84 ^ (uint)&local_8f0);

  iVar4 = (int)(_Mtx_lock(&DAT_122f6c20,local_8));
  if (iVar4 == 0) {
    local_8f0 = (undefined **)((uint)&ghidra_vftable_sonos_RootCACertBundle_Metadata);
    local_8f4 = (int)(iVar4);
    memset(local_8ec,0,0x82);
    bVar2 = (bool)(false);
    pvVar5 = (void *)(operator_new(0x14c));
    *(unsigned char *)((char *)&local_8f4 + 0) = 1;
    if ((void *)(pvVar5) == (void *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)thunk_FUN_112ecd20(PTR_LAB_12121e74,param_3,param_2));
    }
    *(unsigned char *)((char *)&local_8f4 + 0) = 0;
    iVar4 = (int)((**(code **)(*piVar6 + 0xc))());
    if (iVar4 == 0) {
      thunk_FUN_111c0480(local_408,0x400,"%s/root_certs_metadata.txt",param_4);
      thunk_FUN_112f3ce0(local_408,param_3);
      local_8f4 = (int)(((uint)(*(unsigned short *)((char *)&local_8f4 + 1)) << 8 | (uint)(2)));
      thunk_FUN_112eda10(piVar6 + 0x24);
      local_828 = (undefined4)(param_1);
      local_81c = (undefined1 *)(local_8ec);
      local_810 = (undefined1 *)(local_8ab);
      local_82c = (undefined *)(&DAT_1194bae4);

      local_820 = (char *)("rcb_ver");

      local_814 = (undefined1 *)(&DAT_1187b440);

      cVar3 = (char)(thunk_FUN_112f4220(&local_82c,3));
      if (cVar3 == '\0') {
        thunk_FUN_112f1710(piVar6,"rootcerts",4,"Failed to write the cert bundle metadata file");
      }
      thunk_FUN_111c0480(local_808,0x400,"%s/%s-%s.rcb",param_4,local_8ec,local_8ab);
      thunk_FUN_112f3960(param_2,local_808);
      *(unsigned char *)((char *)&local_8f4 + 0) = 0;
      bVar2 = (bool)(true);
      _Mtx_destroy_in_situ(local_860);
      if ((void *)(local_864) != (void *)0x0) {
        free(local_864);
      }
    }
    else {
      iVar4 = (int)(thunk_FUN_112f38b0(param_2));
      if (iVar4 == 0) {
        thunk_FUN_112f1710(piVar6,"rootcerts",4,"Removed bad downloaded cert bundle: %s",param_2);
      }
    }
    piVar1 = (int *)(piVar6 + 0x46);
    LOCK();
    iVar4 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (DAT_122f6ca0 != 0) {
      thunk_FUN_112f2220(piVar6);
    }
    if (iVar4 < 2) {
      (**(code **)(*piVar6 + 0x10))(1);
    }
    if (bVar2) {
      thunk_FUN_112f22d0(0,param_3,param_4);
    }
    _Mtx_unlock(&DAT_122f6c20);

    thunk_FUN_1148ac28();
    return;
  }
                    
  std::_Throw_C_error(iVar4);

 } catch (...) { }
}


// Reference entry 112f1c50; body size 118 bytes.
#line 1 "ENTRY_112f1c50"

void __thiscall Recovered_Bulk::FUN_112f1c50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  pvVar1 = (void *)((void *)*param_1);
  *param_1 = (undefined4)(param_2);
  if ((void *)(pvVar1) != (void *)0x0) {

    _Mtx_destroy_in_situ((int)pvVar1 + 0x640,uVar2);
    _eh_vector_destructor_iterator_(pvVar1,0xa0,10,(_func_void_void_ptr *)LAB_10077a70);
    thunk_FUN_1148a50e(pvVar1,0x674);
  }

  return;

 } catch (...) { }
}


// Reference entry 112f1e40; body size 284 bytes.
#line 1 "ENTRY_112f1e40"

void __thiscall Recovered_Bulk::FUN_112f1e40(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int local_2c [9];
  int *local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_2c);
  piVar1 = (int *)((int *)param_1[9]);
  if (((int *)(piVar1) != (int *)(param_1)) && ((int *)(int *)(param_2[9]) != (int *)(param_2))) {
    param_1[9] = (int)(param_2[9]);
    param_2[9] = (int)((int)piVar1);
    thunk_FUN_1148ac28();
    return;
  }
  local_8 = (int *)((int *)0x0);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_1)) {
      local_8 = (int *)((int *)(**(code **)(*piVar1 + 4))(local_2c));
      piVar1 = (int *)((int *)param_1[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112f1ec3;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
      piVar1 = (int *)(local_8);
    }
    local_8 = (int *)(piVar1);
    param_1[9] = (int)(0);
  }
LAB_112f1ec3:
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      iVar2 = (int)((**(code **)(*piVar1 + 4))(param_1));
      param_1[9] = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112f1f02;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
    }
    else {
      param_1[9] = (int)((int)piVar1);
    }
    param_2[9] = (int)(0);
  }
LAB_112f1f02:
  if ((int *)(local_8) != (int *)0x0) {
    if ((int *)(local_8) == (int *)(local_2c)) {
      iVar2 = (int)((**(code **)(*local_8 + 4))(param_2));
      param_2[9] = (int)(iVar2);
      if ((int *)(local_8) != (int *)0x0) {
        (**(code **)(*local_8 + 0x10))((int *)(local_8) != (int *)(local_2c));
        thunk_FUN_1148ac28();
        return;
      }
    }
    else {
      param_2[9] = (int)((int)local_8);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112f1fb0; body size 284 bytes.
#line 1 "ENTRY_112f1fb0"

void __thiscall Recovered_Bulk::FUN_112f1fb0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int local_2c [9];
  int *local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_2c);
  piVar1 = (int *)((int *)param_1[9]);
  if (((int *)(piVar1) != (int *)(param_1)) && ((int *)(int *)(param_2[9]) != (int *)(param_2))) {
    param_1[9] = (int)(param_2[9]);
    param_2[9] = (int)((int)piVar1);
    thunk_FUN_1148ac28();
    return;
  }
  local_8 = (int *)((int *)0x0);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_1)) {
      local_8 = (int *)((int *)(**(code **)(*piVar1 + 4))(local_2c));
      piVar1 = (int *)((int *)param_1[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112f2033;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
      piVar1 = (int *)(local_8);
    }
    local_8 = (int *)(piVar1);
    param_1[9] = (int)(0);
  }
LAB_112f2033:
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)0x0) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      iVar2 = (int)((**(code **)(*piVar1 + 4))(param_1));
      param_1[9] = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) == (int *)0x0) goto LAB_112f2072;
      (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_2));
    }
    else {
      param_1[9] = (int)((int)piVar1);
    }
    param_2[9] = (int)(0);
  }
LAB_112f2072:
  if ((int *)(local_8) != (int *)0x0) {
    if ((int *)(local_8) == (int *)(local_2c)) {
      iVar2 = (int)((**(code **)(*local_8 + 4))(param_2));
      param_2[9] = (int)(iVar2);
      if ((int *)(local_8) != (int *)0x0) {
        (**(code **)(*local_8 + 0x10))((int *)(local_8) != (int *)(local_2c));
        thunk_FUN_1148ac28();
        return;
      }
    }
    else {
      param_2[9] = (int)((int)local_8);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112f2120; body size 186 bytes.
#line 1 "ENTRY_112f2120"

void __thiscall Recovered_Bulk::FUN_112f2120(int param_2)
{
  char *param_1 = (char *)this;
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar1 = (char *)(param_1 + 0x640);
  iVar2 = (int)(_Mtx_lock(pcVar1));
  if (iVar2 != 0) {
                    
    std::_Throw_C_error(iVar2);
  }
  if ((char *)(param_1) != (char *)(pcVar1)) {
    while (*param_1 != '\0') {
      param_1 = (char *)(param_1 + 0xa0);
      if ((char *)(param_1) == (char *)(pcVar1)) {
        _Mtx_unlock(pcVar1);
        return;
      }
    }
    thunk_FUN_111c0480(param_1,0x11,&DAT_1188bc94,param_2 + 0x7d);
    iVar4 = (int)((param_2 + 0x90) - (int)(param_1 + 0x14));
    iVar2 = (int)(0x41);
    pcVar3 = (char *)(param_1 + 0x18);
    do {
      *pcVar3 = (char)(pcVar3[iVar4]);
      iVar2 = (int)(iVar2 + -1);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (iVar2 != 0);
    iVar2 = (int)(0x41);
    pcVar3 = (char *)(param_1 + 0x59);
    do {
      *pcVar3 = (char)(pcVar3[iVar4]);
      iVar2 = (int)(iVar2 + -1);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x118);
  }
  _Mtx_unlock(pcVar1);
  return;
}


// Reference entry 112f2220; body size 139 bytes.
#line 1 "ENTRY_112f2220"

void __thiscall Recovered_Bulk::FUN_112f2220(int param_2)
{
  byte *param_1 = (byte *)this;
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  pbVar1 = (byte *)(param_1 + 0x640);
  iVar3 = (int)(_Mtx_lock(pbVar1));
  if (iVar3 != 0) {
                    
    std::_Throw_C_error(iVar3);
  }
  if ((byte *)(param_1) == (byte *)(pbVar1)) {
LAB_112f2297:
    _Mtx_unlock(pbVar1);
    return;
  }
  do {
    pbVar4 = (byte *)((byte *)(param_2 + 0x7d));
    pbVar6 = (byte *)(param_1);
    do {
      bVar2 = (byte)(*pbVar6);
      bVar7 = (bool)(bVar2 < *pbVar4);
      if (bVar2 != *pbVar4) {
LAB_112f2266:
        uVar5 = (uint)(-(uint)bVar7 | 1);
        goto LAB_112f226b;
      }
      if (bVar2 == 0) break;
      bVar2 = (byte)(pbVar6[1]);
      bVar7 = (bool)(bVar2 < pbVar4[1]);
      if ((byte *)(bVar2) != (byte *)(pbVar4)[1]) goto LAB_112f2266;
      pbVar6 = (byte *)(pbVar6 + 2);
      pbVar4 = (byte *)(pbVar4 + 2);
    } while (bVar2 != 0);
    uVar5 = (uint)(0);
LAB_112f226b:
    if (uVar5 == 0) {
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x118);
      goto LAB_112f2297;
    }
    param_1 = (byte *)(param_1 + 0xa0);
    if ((byte *)(param_1) == (byte *)(pbVar1)) {
      _Mtx_unlock(pbVar1);
      return;
    }
  } while( true );
}


// Reference entry 112f2ba0; body size 326 bytes.
#line 1 "ENTRY_112f2ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_112f2ba0(uint param_2,undefined4 param_3,uint param_4,undefined2 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  void *_Src;
  size_t _Size;
  uint uVar2;
  void *_Dst;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar1 = (int)(param_1[4]);
  if (0x7ffffffeU - iVar1 < param_2) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar3 = (uint)(param_1[5]);
  uVar5 = (uint)(param_2 + iVar1 | 7);
  if (uVar5 < 0x7fffffff) {
    if (0x7ffffffe - (uVar3 >> 1) < uVar3) {
      uVar5 = (uint)(0x7ffffffe);
    }
    else {
      uVar2 = (uint)(uVar3 + (uVar3 >> 1));
      if (uVar5 < uVar2) {
        uVar5 = (uint)(uVar2);
      }
    }
  }
  else {
    uVar5 = (uint)(0x7ffffffe);
  }
  _Dst = (void *)((void *)thunk_FUN_112eef40(uVar5 + 1));
  param_1[4] = (undefined4)(param_2 + iVar1);
  _Size = (size_t)(iVar1 * 2);
  param_1[5] = (undefined4)(uVar5);
  if (uVar3 < 8) {
    memcpy(_Dst,param_1,_Size);
    if (param_4 != 0) {
      puVar6 = (undefined4 *)((undefined4 *)(_Size + (int)_Dst));
      for (uVar3 = (uint)(param_4 >> 1); uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = (undefined4)(((uint)(param_5) << 16 | (uint)(param_5)));
        puVar6 = (undefined4 *)(puVar6 + 1);
      }
      for (uVar3 = (uint)((uint)((param_4 & 1) != 0)); uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined2*)puVar6 = (undefined2)((undefined4 *)(param_5));
        puVar6 = (undefined4 *)((undefined4 *)((int)puVar6 + 2));
      }
    }
    *(undefined2 *)((int)_Dst + (param_4 + iVar1) * 2) = 0;
    *param_1 = (undefined4)(_Dst);
    return (undefined4 *)(param_1);
  }
  _Src = (void *)((void *)*param_1);
  memcpy(_Dst,_Src,_Size);
  if (param_4 != 0) {
    puVar6 = (undefined4 *)((undefined4 *)(_Size + (int)_Dst));
    for (uVar5 = (uint)(param_4 >> 1); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = (undefined4)(((uint)(param_5) << 16 | (uint)(param_5)));
      puVar6 = (undefined4 *)(puVar6 + 1);
    }
    for (uVar5 = (uint)((uint)((param_4 & 1) != 0)); uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined2*)puVar6 = (undefined2)((undefined4 *)(param_5));
      puVar6 = (undefined4 *)((undefined4 *)((int)puVar6 + 2));
    }
  }
  *(undefined2 *)((int)_Dst + (iVar1 + param_4) * 2) = 0;
  uVar5 = (uint)(uVar3 * 2 + 2);
  pvVar4 = (void *)(_Src);
  if (0xfff < uVar5) {
    pvVar4 = (void *)(*(void **)((int)_Src + -4));
    uVar5 = (uint)(uVar3 * 2 + 0x25);
    if (0x1f < (uint)((int)_Src + (-4 - (int)pvVar4))) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(pvVar4,uVar5);
  *param_1 = (undefined4)(_Dst);
  return (undefined4 *)(param_1);
}


// Reference entry 112f2da0; body size 223 bytes.
#line 1 "ENTRY_112f2da0"

int * __thiscall Recovered_Bulk::FUN_112f2da0(uint param_2,undefined2 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  param_1[4] = (int)(0);
  param_1[5] = (int)(7);
  *(undefined2*)param_1 = (undefined2)((int *)(0));
  if (param_2 < 8) {
    param_1[4] = (int)(param_2);
    if (param_2 != 0) {
      piVar4 = (int *)(param_1);
      for (uVar3 = (uint)(param_2 >> 1); uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar4 = (int)(((uint)(param_3) << 16 | (uint)(param_3)));
        piVar4 = (int *)(piVar4 + 1);
      }
      for (uVar3 = (uint)((uint)((param_2 & 1) != 0)); uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined2*)piVar4 = (undefined2)((int *)(param_3));
        piVar4 = (int *)((int *)((int)piVar4 + 2));
      }
    }
    *(undefined2 *)((int)param_1 + param_2 * 2) = 0;
    return (int *)(param_1);
  }
  if (param_2 < 0x7fffffff) {
    uVar3 = (uint)(param_2 | 7);
    if (uVar3 < 0x7fffffff) {
      if (uVar3 < 10) {
        uVar3 = (uint)(10);
      }
      iVar1 = (int)(uVar3 + 1);
    }
    else {
      uVar3 = (uint)(0x7ffffffe);
      iVar1 = (int)(0x7fffffff);
    }
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_112eef40(iVar1));
    param_1[4] = (int)(param_2);
    param_1[5] = (int)(uVar3);
    puVar5 = (undefined4 *)(puVar2);
    for (uVar3 = (uint)(param_2 >> 1); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = (undefined4)(((uint)(param_3) << 16 | (uint)(param_3)));
      puVar5 = (undefined4 *)(puVar5 + 1);
    }
    for (uVar3 = (uint)((uint)((param_2 & 1) != 0)); uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined2*)puVar5 = (undefined2)((undefined4 *)(param_3));
      puVar5 = (undefined4 *)((undefined4 *)((int)puVar5 + 2));
    }
    *(undefined2 *)((int)puVar2 + param_2 * 2) = 0;
    *param_1 = (int)((int)puVar2);
    return (int *)(param_1);
  }
                    
  thunk_FUN_1012a4c0();
}


// Reference entry 112f2fe0; body size 408 bytes.
#line 1 "ENTRY_112f2fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_112f2fe0(uint param_2,undefined2 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  size_t _Size;
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  uint uVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar4 = (uint)(param_1[5]);
  iVar1 = (int)(param_1[4]);
  if (param_2 <= uVar4 - iVar1) {
    param_1[4] = (undefined4)(param_2 + iVar1);
    puVar2 = (undefined4 *)(param_1);
    if (7 < uVar4) {
      puVar2 = (undefined4 *)((undefined4 *)*param_1);
    }
    if (param_2 != 0) {
      puVar7 = (undefined4 *)((undefined4 *)((int)puVar2 + iVar1 * 2));
      for (uVar4 = (uint)(param_2 >> 1); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = (undefined4)(((uint)(param_3) << 16 | (uint)(param_3)));
        puVar7 = (undefined4 *)(puVar7 + 1);
      }
      for (uVar4 = (uint)((uint)((param_2 & 1) != 0)); uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined2*)puVar7 = (undefined2)((undefined4 *)(param_3));
        puVar7 = (undefined4 *)((undefined4 *)((int)puVar7 + 2));
      }
    }
    *(undefined2 *)((int)puVar2 + (param_2 + iVar1) * 2) = 0;
    return (undefined4 *)(param_1);
  }
  if (0x7ffffffeU - iVar1 < param_2) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar5 = (uint)(param_2 + iVar1);
  uVar8 = (uint)(uVar5 | 7);
  if (uVar8 < 0x7fffffff) {
    if (0x7ffffffe - (uVar4 >> 1) < uVar4) {
      uVar8 = (uint)(0x7ffffffe);
    }
    else {
      uVar3 = (uint)((uVar4 >> 1) + uVar4);
      if (uVar8 < uVar3) {
        uVar8 = (uint)(uVar3);
      }
    }
  }
  else {
    uVar8 = (uint)(0x7ffffffe);
  }
  _Dst = (void *)((void *)thunk_FUN_112eef40(uVar8 + 1));
  param_1[4] = (undefined4)(param_2 + iVar1);
  _Size = (size_t)(iVar1 * 2);
  param_1[5] = (undefined4)(uVar8);
  if (uVar4 < 8) {
    memcpy(_Dst,param_1,_Size);
    if (param_2 != 0) {
      puVar2 = (undefined4 *)((undefined4 *)(_Size + (int)_Dst));
      for (uVar4 = (uint)(param_2 >> 1); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = (undefined4)(((uint)(param_3) << 16 | (uint)(param_3)));
        puVar2 = (undefined4 *)(puVar2 + 1);
      }
      for (uVar4 = (uint)((uint)((param_2 & 1) != 0)); uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined2*)puVar2 = (undefined2)((undefined4 *)(param_3));
        puVar2 = (undefined4 *)((undefined4 *)((int)puVar2 + 2));
      }
    }
    *(undefined2 *)((int)_Dst + uVar5 * 2) = 0;
    *param_1 = (undefined4)(_Dst);
    return (undefined4 *)(param_1);
  }
  _Src = (void *)((void *)*param_1);
  memcpy(_Dst,_Src,_Size);
  if (param_2 != 0) {
    puVar2 = (undefined4 *)((undefined4 *)(_Size + (int)_Dst));
    for (uVar8 = (uint)(param_2 >> 1); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar2 = (undefined4)(((uint)(param_3) << 16 | (uint)(param_3)));
      puVar2 = (undefined4 *)(puVar2 + 1);
    }
    for (uVar8 = (uint)((uint)((param_2 & 1) != 0)); uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined2*)puVar2 = (undefined2)((undefined4 *)(param_3));
      puVar2 = (undefined4 *)((undefined4 *)((int)puVar2 + 2));
    }
  }
  *(undefined2 *)((int)_Dst + uVar5 * 2) = 0;
  uVar5 = (uint)(uVar4 * 2 + 2);
  pvVar6 = (void *)(_Src);
  if (0xfff < uVar5) {
    pvVar6 = (void *)(*(void **)((int)_Src + -4));
    uVar5 = (uint)(uVar4 * 2 + 0x25);
    if (0x1f < (uint)((int)_Src + (-4 - (int)pvVar6))) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(pvVar6,uVar5);
  *param_1 = (undefined4)(_Dst);
  return (undefined4 *)(param_1);
}


// Reference entry 112f3390; body size 288 bytes.
#line 1 "ENTRY_112f3390"

void FUN_112f3390(undefined4 *param_1,LPCWSTR param_2)

{
 try {
  uint uVar1;
  int iVar2;
  LPSTR **lpMultiByteStr;
  int iVar3;
  LPSTR *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  iVar2 = (int)(WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0));
  if (iVar2 < 1) {
    param_1[4] = (undefined4)(0);
    param_1[5] = (undefined4)(0xf);
    *(undefined1*)param_1 = (undefined1)((undefined4 *)(0));
    param_1[4] = (undefined4)(0);
    *(undefined1*)param_1 = (undefined1)((undefined4 *)(0));
  }
  else {
    thunk_FUN_11272ad0(iVar2,0);
    lpMultiByteStr = (LPSTR **)(&local_2c);
    if (0xf < uStack_18) {
      lpMultiByteStr = (LPSTR **)((LPSTR **)local_2c);
    }

    iVar3 = (int)(WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)lpMultiByteStr,local_1c,(LPCSTR)0x0,
                                (LPBOOL)0x0));
    if ((iVar3 < 1) || (iVar2 < iVar3)) {
      param_1[4] = (undefined4)(0);
      param_1[5] = (undefined4)(0xf);
      *(undefined1*)param_1 = (undefined1)((undefined4 *)(0));
      param_1[4] = (undefined4)(0);
      *(undefined1*)param_1 = (undefined1)((undefined4 *)(0));
      thunk_FUN_1011f780(uVar1);
    }
    else {
      thunk_FUN_10c7fcd0(iVar3 + -1,0);
      param_1[4] = (undefined4)(0);
      param_1[5] = (undefined4)(0);
      *param_1 = (undefined4)(local_2c);
      param_1[1] = (undefined4)(uStack_28);
      param_1[2] = (undefined4)(uStack_24);
      param_1[3] = (undefined4)(uStack_20);
      *(ulonglong *)(param_1 + 4) = ((unsigned long long)(uStack_18) << 32 | (unsigned long long)(local_1c));
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112f3500; body size 322 bytes.
#line 1 "ENTRY_112f3500"

void FUN_112f3500(undefined4 *param_1,LPCSTR param_2)

{
 try {
  uint uVar1;
  int iVar2;
  int iVar3;
  LPWSTR ***ppppWVar4;
  LPWSTR **local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (uint)(uVar1);
  iVar2 = (int)(MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0));
  if (iVar2 < 1) {
    param_1[4] = (undefined4)(0);
    param_1[5] = (undefined4)(7);
    *(undefined2*)param_1 = (undefined2)((undefined4 *)(0));
    thunk_FUN_112ef010(&DAT_119f741c,0);
  }
  else {
    thunk_FUN_112f2da0(iVar2,0);

    ppppWVar4 = (LPWSTR ***)(&local_2c);
    if (7 < uStack_18) {
      ppppWVar4 = (LPWSTR ***)((LPWSTR ***)local_2c);
    }
    iVar3 = (int)(MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)ppppWVar4,local_1c));
    if ((iVar3 < 1) || (iVar2 < iVar3)) {
      param_1[4] = (undefined4)(0);
      param_1[5] = (undefined4)(7);
      *(undefined2*)param_1 = (undefined2)((undefined4 *)(0));
      thunk_FUN_112ef010(&DAT_119f741c,0);
      thunk_FUN_112eed70(uVar1);
    }
    else {
      uVar1 = (uint)(iVar3 - 1);
      if (local_1c < uVar1) {
        thunk_FUN_112f2fe0(uVar1 - local_1c,0);
      }
      else {
        ppppWVar4 = (LPWSTR ***)(&local_2c);
        if (7 < uStack_18) {
          ppppWVar4 = (LPWSTR ***)((LPWSTR ***)local_2c);
        }
        local_1c = (uint)(uVar1);
        *(WCHAR *)((int)ppppWVar4 + uVar1 * 2) = L'\0';
      }
      param_1[4] = (undefined4)(0);
      param_1[5] = (undefined4)(0);
      *param_1 = (undefined4)(local_2c);
      param_1[1] = (undefined4)(uStack_28);
      param_1[2] = (undefined4)(uStack_24);
      param_1[3] = (undefined4)(uStack_20);
      *(ulonglong *)(param_1 + 4) = ((unsigned long long)(uStack_18) << 32 | (unsigned long long)(local_1c));
    }
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112f36a0; body size 271 bytes.
#line 1 "ENTRY_112f36a0"

void FUN_112f36a0(undefined4 param_1,undefined4 param_2)

{
 try {
  wchar_t ****_Filename;
  wchar_t ****ppppwVar1;
  uint uVar2;
  wchar_t ***local_44 [5];
  uint local_30;
  wchar_t ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  thunk_FUN_112f3500(local_44,param_1,local_14);

  thunk_FUN_112f3500(local_2c,param_2);
  ppppwVar1 = (wchar_t ****)(local_2c);
  if (7 < local_18) {
    ppppwVar1 = (wchar_t ****)((wchar_t ****)local_2c[0]);
  }
  _Filename = (wchar_t ****)(local_44);
  if (7 < local_30) {
    _Filename = (wchar_t ****)((wchar_t ****)local_44[0]);
  }
  _wfopen((wchar_t *)_Filename,(wchar_t *)ppppwVar1);
  if (7 < local_18) {
    uVar2 = (uint)(local_18 * 2 + 2);
    ppppwVar1 = (wchar_t ****)((wchar_t ****)local_2c[0]);
    if (0xfff < uVar2) {
      ppppwVar1 = (wchar_t ****)((wchar_t ****)local_2c[0][-1]);
      uVar2 = (uint)(local_18 * 2 + 0x25);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppwVar1))) goto LAB_112f3783;
    }
    thunk_FUN_1148a50e(ppppwVar1,uVar2);
  }


  local_2c[0] = (wchar_t ***)((wchar_t ***)((uint)local_2c[0] & 0xffff0000));
  if (7 < local_30) {
    uVar2 = (uint)(local_30 * 2 + 2);
    ppppwVar1 = (wchar_t ****)((wchar_t ****)local_44[0]);
    if (0xfff < uVar2) {
      ppppwVar1 = (wchar_t ****)((wchar_t ****)local_44[0][-1]);
      uVar2 = (uint)(local_30 * 2 + 0x25);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppwVar1))) {
LAB_112f3783:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppwVar1,uVar2);
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112f3800; body size 136 bytes.
#line 1 "ENTRY_112f3800"

void FUN_112f3800(undefined4 param_1)

{
  wchar_t ****ppppwVar1;
  uint uVar2;
  wchar_t ***local_1c [5];
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_1c);
  thunk_FUN_112f3500(local_1c,param_1);
  ppppwVar1 = (wchar_t ****)(local_1c);
  if (7 < local_8) {
    ppppwVar1 = (wchar_t ****)((wchar_t ****)local_1c[0]);
  }
  _wrmdir((wchar_t *)ppppwVar1);
  if (7 < local_8) {
    uVar2 = (uint)(local_8 * 2 + 2);
    ppppwVar1 = (wchar_t ****)((wchar_t ****)local_1c[0]);
    if (0xfff < uVar2) {
      ppppwVar1 = (wchar_t ****)((wchar_t ****)local_1c[0][-1]);
      uVar2 = (uint)(local_8 * 2 + 0x25);
      if (0x1f < (uint)((int)local_1c[0] + (-4 - (int)ppppwVar1))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppwVar1,uVar2);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112f38b0; body size 136 bytes.
#line 1 "ENTRY_112f38b0"

void FUN_112f38b0(undefined4 param_1)

{
  wchar_t ****ppppwVar1;
  uint uVar2;
  wchar_t ***local_1c [5];
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_1c);
  thunk_FUN_112f3500(local_1c,param_1);
  ppppwVar1 = (wchar_t ****)(local_1c);
  if (7 < local_8) {
    ppppwVar1 = (wchar_t ****)((wchar_t ****)local_1c[0]);
  }
  _wremove((wchar_t *)ppppwVar1);
  if (7 < local_8) {
    uVar2 = (uint)(local_8 * 2 + 2);
    ppppwVar1 = (wchar_t ****)((wchar_t ****)local_1c[0]);
    if (0xfff < uVar2) {
      ppppwVar1 = (wchar_t ****)((wchar_t ****)local_1c[0][-1]);
      uVar2 = (uint)(local_8 * 2 + 0x25);
      if (0x1f < (uint)((int)local_1c[0] + (-4 - (int)ppppwVar1))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppwVar1,uVar2);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112f3960; body size 278 bytes.
#line 1 "ENTRY_112f3960"

void FUN_112f3960(undefined4 param_1,undefined4 param_2)

{
 try {
  LPCWSTR ***lpExistingFileName;
  LPCWSTR ***ppppWVar1;
  uint uVar2;
  LPCWSTR **local_44 [5];
  uint local_30;
  LPCWSTR **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  thunk_FUN_112f3500(local_44,param_1,local_14);

  thunk_FUN_112f3500(local_2c,param_2);
  ppppWVar1 = (LPCWSTR ***)(local_2c);
  if (7 < local_18) {
    ppppWVar1 = (LPCWSTR ***)((LPCWSTR ***)local_2c[0]);
  }
  lpExistingFileName = (LPCWSTR ***)(local_44);
  if (7 < local_30) {
    lpExistingFileName = (LPCWSTR ***)((LPCWSTR ***)local_44[0]);
  }
  MoveFileExW((LPCWSTR)lpExistingFileName,(LPCWSTR)ppppWVar1,3);
  if (7 < local_18) {
    uVar2 = (uint)(local_18 * 2 + 2);
    ppppWVar1 = (LPCWSTR ***)((LPCWSTR ***)local_2c[0]);
    if (0xfff < uVar2) {
      ppppWVar1 = (LPCWSTR ***)((LPCWSTR ***)local_2c[0][-1]);
      uVar2 = (uint)(local_18 * 2 + 0x25);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppWVar1))) goto LAB_112f3a49;
    }
    thunk_FUN_1148a50e(ppppWVar1,uVar2);
  }


  local_2c[0] = (LPCWSTR **)((LPCWSTR **)((uint)local_2c[0] & 0xffff0000));
  if (7 < local_30) {
    uVar2 = (uint)(local_30 * 2 + 2);
    ppppWVar1 = (LPCWSTR ***)((LPCWSTR ***)local_44[0]);
    if (0xfff < uVar2) {
      ppppWVar1 = (LPCWSTR ***)((LPCWSTR ***)local_44[0][-1]);
      uVar2 = (uint)(local_30 * 2 + 0x25);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppWVar1))) {
LAB_112f3a49:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppWVar1,uVar2);
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112f3b40; body size 106 bytes.
#line 1 "ENTRY_112f3b40"

uint FUN_112f3b40(int param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  uVar1 = (uint)(param_2);
  uVar2 = (uint)(param_2 * 2 + 1);
  if (uVar2 <= param_4) {
    uVar4 = (uint)(0);
    puVar3 = (undefined1 *)(param_3);
    if (param_2 != 0) {
      do {
        thunk_FUN_111c0480(&param_2,3,"%02hhX",*(undefined1 *)(uVar4 + param_1));
        uVar4 = (uint)(uVar4 + 1);
        *puVar3 = (undefined1)((undefined1)param_2);
        uVar2 = (uint)(0);
        puVar3[1] = (undefined1)(*(uint *)((char *)&param_2 + 1));
        puVar3 = (undefined1 *)(puVar3 + 2);
      } while (uVar4 < uVar1);
    }
    *puVar3 = (undefined1)(0);
    return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 112f3ce0; body size 189 bytes.
#line 1 "ENTRY_112f3ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_112f3ce0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  uint uVar4;
  void *_Memory;
  char *pcVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar4 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_certval_SettingsFile);
  *puVar1 = (undefined4)(0);

  _Mtx_init_in_situ(param_1 + 2,2,uVar4);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[0xe] = (undefined4)(param_3);
  pcVar5 = (char *)(param_2);
  do {
    cVar2 = (char)(*pcVar5);
    pcVar5 = (char *)(pcVar5 + 1);
  } while (cVar2 != '\0');
  _Memory = (void *)((void *)thunk_FUN_1148b586(pcVar5 + (1 - (int)(param_2 + 1))));
  if ((undefined4 *)(puVar1) != (undefined4 *)(&param_3)) {
    pvVar3 = (void *)((void *)*puVar1);
    *puVar1 = (undefined4)(_Memory);
    _Memory = (void *)(pvVar3);
  }
  if ((void *)(_Memory) != (void *)0x0) {
    free(_Memory);
  }
  thunk_FUN_111c0480(*puVar1,pcVar5 + (1 - (int)(param_2 + 1)),&DAT_1188bc94,param_2);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 112f3f80; body size 126 bytes.
#line 1 "ENTRY_112f3f80"

void __fastcall FUN_112f3f80(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_certval_SettingsFileUpdater);
  if ((FILE *)(FILE *)(param_1[6]) != (FILE *)0x0) {
    fclose((FILE *)param_1[6]);
    param_1[6] = (undefined4)(0);
  }
  thunk_FUN_112f38b0(param_1[5],uVar1);
  if ((void *)(void *)(param_1[5]) != (void *)0x0) {
    free((void *)param_1[5]);
  }
  if ((void *)(void *)(param_1[1]) != (void *)0x0) {
    free((void *)param_1[1]);
  }

  return;

 } catch (...) { }
}


// Reference entry 112f4110; body size 154 bytes.
#line 1 "ENTRY_112f4110"

undefined4 * __thiscall Recovered_Bulk::FUN_112f4110(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_certval_SettingsFileUpdater);
  if ((FILE *)(FILE *)(param_1[6]) != (FILE *)0x0) {
    fclose((FILE *)param_1[6]);
    param_1[6] = (undefined4)(0);
  }
  thunk_FUN_112f38b0(param_1[5],uVar1);
  if ((void *)(void *)(param_1[5]) != (void *)0x0) {
    free((void *)param_1[5]);
  }
  if ((void *)(void *)(param_1[1]) != (void *)0x0) {
    free((void *)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 112f4440; body size 102 bytes.
#line 1 "ENTRY_112f4440"

void __thiscall Recovered_Bulk::FUN_112f4440(undefined4 param_2,long *param_3)
{
  int param_1 = (int )this;
 try {
  long lVar1;
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_24);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 **)(param_1 + 0xc) = local_24;
  *(undefined4 *)(param_1 + 0x10) = 0x20;
  *(undefined1 *)(param_1 + 0x14) = 0;
  (**(code **)(**(int **)(param_1 + 4) + 4))(param_1);
  if (*(char *)(param_1 + 0x14) != '\0') {
    lVar1 = (long)(atol(&stack0xffffffd8));
    *param_3 = (long)(lVar1);
  }
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112f44c0; body size 120 bytes.
#line 1 "ENTRY_112f44c0"

bool __thiscall Recovered_Bulk::FUN_112f44c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  bool bVar2;
  undefined **ppuStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  iVar1 = (int)(_Mtx_lock(param_1 + 2));
  if (iVar1 == 0) {
    uStack_10 = (undefined4)(param_2);
    uStack_c = (undefined4)(param_3);
    ppuStack_18 = (undefined **)((uint)&ghidra_vftable_sonos_certval_SettingsFileCBWrapper);
    uStack_8 = (undefined4)(param_4);
    uStack_4 = (undefined1)(0);
    piStack_14 = (int *)(param_1);
    (**(code **)(*param_1 + 4))(&ppuStack_18);
    bVar2 = (bool)((char)uStack_8 != '\0');
    _Mtx_unlock(param_1 + 2);
    return (bool)(bVar2);
  }
                    
  std::_Throw_C_error(iVar1);
}


// Reference entry 112f4560; body size 89 bytes.
#line 1 "ENTRY_112f4560"

void __thiscall Recovered_Bulk::FUN_112f4560(byte *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = (byte *)(*(byte **)(param_1 + 8));
  do {
    bVar1 = (byte)(*param_2);
    bVar4 = (bool)(bVar1 < *pbVar3);
    if (bVar1 != *pbVar3) {
LAB_112f4590:
      uVar2 = (uint)(-(uint)bVar4 | 1);
      goto LAB_112f4595;
    }
    if (bVar1 == 0) break;
    bVar1 = (byte)(param_2[1]);
    bVar4 = (bool)(bVar1 < pbVar3[1]);
    if ((byte *)(bVar1) != (byte *)(pbVar3)[1]) goto LAB_112f4590;
    param_2 = (byte *)(param_2 + 2);
    pbVar3 = (byte *)(pbVar3 + 2);
  } while (bVar1 != 0);
  uVar2 = (uint)(0);
LAB_112f4595:
  if (uVar2 == 0) {
    thunk_FUN_111c0480(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&DAT_1188bc94,
                       param_3);
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}


// Reference entry 112f4790; body size 855 bytes.
#line 1 "ENTRY_112f4790"

void __thiscall Recovered_Bulk::FUN_112f4790(int param_2,uint param_3,char param_4)
{
  int *param_1 = (int *)this;
 try {
  char *pcVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  void *pvVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  char *local_54;
  undefined **local_50;
  void *local_4c;
  int local_48;
  uint local_44;
  char local_40;
  void *local_3c;
  FILE *local_38;
  char local_34;
  undefined1 local_2d;
  undefined4 ***local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (uint)(DAT_12126b84);

  iVar6 = (int)(_Mtx_lock(param_1 + 2,local_14));
  if (iVar6 != 0) {
                    
    std::_Throw_C_error(iVar6);
  }
  thunk_FUN_112f3500(local_2c,param_1[1]);

  ppppuVar7 = (undefined4 ****)(local_2c);
  if (7 < local_18) {
    ppppuVar7 = (undefined4 ****)((undefined4 ****)local_2c[0]);
  }
  iVar6 = (int)(wsopen_dispatch(ppppuVar7,0x501,0x40,0x180,&local_54,0));
  bVar3 = (bool)(true);
  if (iVar6 != 0) {
    local_54 = (char *)((char *)0xffffffff);
  }
  if ((char *)(local_54) != (char *)0xffffffff) {
    iVar6 = (int)(_write((int)local_54,"Version: [1.0]\n",0xf));
    _close((int)local_54);
    bVar3 = (bool)(true);
    if (iVar6 != 0xf) {
      bVar3 = (bool)(false);
    }
  }
  local_54 = (char *)((char *)param_1[1]);

  local_50 = (undefined **)((uint)&ghidra_vftable_sonos_certval_SettingsFileUpdater);
  local_4c = (void *)((void *)0x0);
  local_48 = (int)(param_2);
  local_44 = (uint)(param_3);
  local_40 = (char)(param_4);
  local_3c = (void *)((void *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  pcVar1 = (char *)(local_54 + 1);
  local_38 = (FILE *)((FILE *)0x0);
  pcVar9 = (char *)(local_54);
  do {
    cVar5 = (char)(*pcVar9);
    pcVar9 = (char *)(pcVar9 + 1);
  } while (cVar5 != '\0');
  pvVar8 = (void *)((void *)thunk_FUN_1148b586(pcVar9 + (1 - (int)pcVar1)));
  pvVar4 = (void *)(local_4c);
  bVar11 = (bool)((void *)(local_4c) != (void *)0x0);
  local_4c = (void *)(pvVar8);
  if (bVar11) {
    free(pvVar4);
  }
  thunk_FUN_111c0480(local_4c,pcVar9 + (1 - (int)pcVar1),&DAT_1188bc94,local_54);
  pvVar8 = (void *)((void *)thunk_FUN_1148b586(pcVar9 + (6 - (int)pcVar1)));
  pvVar4 = (void *)(local_3c);
  bVar11 = (bool)((void *)(local_3c) != (void *)0x0);
  local_3c = (void *)(pvVar8);
  if (bVar11) {
    free(pvVar4);
  }
  thunk_FUN_111c0480(local_3c,pcVar9 + (6 - (int)pcVar1),"%s.tmp",local_4c);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if (bVar3) {
    uVar10 = (uint)(0);
    if (local_44 != 0) {
      iVar6 = (int)(0);
      do {
        uVar10 = (uint)(uVar10 + 1);
        *(undefined1 *)(iVar6 + 8 + local_48) = 0;
        iVar6 = (int)(iVar6 + 0xc);
      } while (uVar10 < local_44);
    }
    local_34 = (char)('\0');
    local_38 = (FILE *)((FILE *)thunk_FUN_112f36a0(local_3c,&DAT_118b3060));
    if ((FILE *)(local_38) != (FILE *)0x0) {
      cVar5 = (char)((**(code **)(*param_1 + 4))(&local_50));
      if (cVar5 != '\0') {
        if ((FILE *)(local_38) != (FILE *)0x0) {
          if ((local_40 == '\0') && (uVar10 = 0, local_44 != 0)) {
            iVar6 = (int)(0);
            cVar5 = (char)(local_34);
            do {
              if ((*(char *)(iVar6 + 8 + local_48) == '\0') &&
                 (iVar2 = *(int *)(iVar6 + 4 + local_48), iVar2 != 0)) {
                if ((cVar5 == '\0') &&
                   (cVar5 = thunk_FUN_112f5000(*(undefined4 *)(iVar6 + local_48),iVar2),
                   cVar5 != '\0')) {
                  cVar5 = (char)('\0');
                  local_34 = (char)(cVar5);
                }
                else {
                  cVar5 = (char)('\x01');
                  local_34 = (char)(cVar5);
                }
              }
              uVar10 = (uint)(uVar10 + 1);
              iVar6 = (int)(iVar6 + 0xc);
            } while (uVar10 < local_44);
          }
          fflush(local_38);
          iVar6 = (int)(fclose(local_38));
          local_38 = (FILE *)((FILE *)0x0);
          if (iVar6 != 0) {
            local_34 = (char)('\x01');
          }
          if (local_34 == '\0') {
            iVar6 = (int)(thunk_FUN_112f3960(local_3c,local_4c));
            if (iVar6 == 0) {

              goto LAB_112f4a2f;
            }
            if ((FILE *)(local_38) != (FILE *)0x0) {
              fclose(local_38);
              local_38 = (FILE *)((FILE *)0x0);
            }
          }
        }
        thunk_FUN_112f38b0(local_3c);
      }
      goto LAB_112f4a10;
    }
  }
  else {
LAB_112f4a10:
    if ((FILE *)(local_38) != (FILE *)0x0) {
      fclose(local_38);
      local_38 = (FILE *)((FILE *)0x0);
    }
  }
  thunk_FUN_112f38b0(local_3c);
LAB_112f4a2f:
  _Mtx_unlock(param_1 + 2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  local_50 = (undefined **)((uint)&ghidra_vftable_sonos_certval_SettingsFileUpdater);
  if ((FILE *)(local_38) != (FILE *)0x0) {
    fclose(local_38);
    local_38 = (FILE *)((FILE *)0x0);
  }
  thunk_FUN_112f38b0(local_3c);
  if ((void *)(local_3c) != (void *)0x0) {
    free(local_3c);
  }
  if ((void *)(local_4c) != (void *)0x0) {
    free(local_4c);
  }
  if (7 < local_18) {
    uVar10 = (uint)(local_18 * 2 + 2);
    ppppuVar7 = (undefined4 ****)((undefined4 ****)local_2c[0]);
    if (0xfff < uVar10) {
      ppppuVar7 = (undefined4 ****)((undefined4 ****)local_2c[0][-1]);
      uVar10 = (uint)(local_18 * 2 + 0x25);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar7))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(ppppuVar7,uVar10);
  }

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 112f4bc0; body size 412 bytes.
#line 1 "ENTRY_112f4bc0"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall Recovered_Bulk::FUN_112f4bc0(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined4 uVar2;
  FILE *_File;
  int *piVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 auStack_159c [3];
  undefined1 local_1599;
  size_t sStack_1598;
  uint local_1594;
  int *local_1590;
  FILE *pFStack_158c;
  int *local_1588;
  char acStack_1584 [128];
  char acStack_1504 [256];
  char acStack_1404 [1024];
  char acStack_1004 [4096];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_159c);
  local_1590 = (int *)(param_2);
  uVar9 = (undefined4)(0);
  uVar7 = (uint)(0);
  local_1599 = (undefined1)(0);
  local_1594 = (uint)(0);
  local_1588 = (int *)(param_1);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x14))(&DAT_118a1488));
  _File = (FILE *)((FILE *)thunk_FUN_112f36a0(uVar2));
  pFStack_158c = (FILE *)(_File);
  if ((FILE *)(_File) == (FILE *)0x0) {
    piVar3 = (int *)(_errno());
    if (*piVar3 != 2) {
      piVar3 = (int *)(_errno());
      strerror_s(acStack_1504,0x100,*piVar3);
      thunk_FUN_112f4f20(param_1,"rsettings",1,"fopen: %s (%s)",acStack_1504,param_1[1]);
    }
  }
  else {
    sVar4 = (size_t)(fread(acStack_1404,1,0x400,_File));
    sStack_1598 = (size_t)(sVar4);
    iVar5 = (int)(ferror(_File));
    sVar6 = (size_t)(sStack_1598);
    while (sStack_1598 = sVar6, iVar5 == 0) {
      if (sVar4 == 0) {
        local_1599 = (undefined1)(1);
        goto LAB_112f4d50;
      }
      uVar8 = (uint)(0);
      if (sVar4 != 0) {
        do {
          cVar1 = (char)(acStack_1404[uVar8]);
          switch(uVar9) {
          case 0:
            iVar5 = (int)(isspace((int)cVar1));
            sVar6 = (size_t)(sStack_1598);
            if (iVar5 == 0) {
              uVar9 = (undefined4)(1);
              acStack_1584[local_1594] = (char)(cVar1);
              local_1594 = (uint)(local_1594 + 1);
            }
            break;
          case 1:
            if (cVar1 == ':') {
              uVar9 = (undefined4)(2);
            }
            else {
              sVar6 = (size_t)(sStack_1598);
              if ((int)local_1594 < 0x7f) {
                acStack_1584[local_1594] = (char)(cVar1);
                local_1594 = (uint)(local_1594 + 1);
              }
            }
            break;
          case 2:
            if (cVar1 == '[') {
              uVar9 = (undefined4)(3);
            }
            break;
          case 3:
            if (cVar1 == ']') {
              if ((0x7f < local_1594) || (acStack_1584[local_1594] = '\0', 0xfff < uVar7)) {
                    
                thunk_FUN_1148bc65();
              }
              acStack_1004[uVar7] = (char)('\0');
              (**(code **)(*local_1590 + 4))(acStack_1584,acStack_1004);
              uVar7 = (uint)(0);
              uVar9 = (undefined4)(0);
              local_1594 = (uint)(0);
              sVar6 = (size_t)(sStack_1598);
            }
            else if (cVar1 == '\\') {
              uVar9 = (undefined4)(4);
            }
            else if ((int)uVar7 < 0xfff) {
              acStack_1004[uVar7] = (char)(cVar1);
              uVar7 = (uint)(uVar7 + 1);
            }
            break;
          case 4:
            if ((int)uVar7 < 0xfff) {
              acStack_1004[uVar7] = (char)(cVar1);
              uVar7 = (uint)(uVar7 + 1);
            }
            uVar9 = (undefined4)(3);
          }
          uVar8 = (uint)(uVar8 + 1);
        } while (uVar8 < sVar6);
      }
      _File = (FILE *)(pFStack_158c);
      sVar4 = (size_t)(fread(acStack_1404,1,0x400,pFStack_158c));
      sStack_1598 = (size_t)(sVar4);
      iVar5 = (int)(ferror(_File));
      sVar6 = (size_t)(sStack_1598);
    }
    piVar3 = (int *)(_errno());
    strerror_s(acStack_1504,0x100,*piVar3);
    thunk_FUN_112f4f20(local_1588,"rsettings",1,"ferror: %s (%s)",acStack_1504,local_1588[1]);
LAB_112f4d50:
    fclose(_File);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112f5000; body size 147 bytes.
#line 1 "ENTRY_112f5000"

undefined4 __thiscall Recovered_Bulk::FUN_112f5000(char *param_2,char *param_3)
{
  int param_1 = (int )this;
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = (int)(fputs(param_2,*(FILE **)(param_1 + 0x18)));
  if ((-1 < iVar3) && (iVar3 = fputs(": [",*(FILE **)(param_1 + 0x18)), -1 < iVar3)) {
    cVar2 = (char)(*param_3);
    while (cVar2 != '\0') {
      if (((cVar2 == '\\') || (cVar2 == ']')) &&
         (iVar3 = fputc(0x5c,*(FILE **)(param_1 + 0x18)), iVar3 == -1)) {
        return (undefined4)(0);
      }
      iVar3 = (int)(fputc((int)*param_3,*(FILE **)(param_1 + 0x18)));
      if (iVar3 == -1) {
        return (undefined4)(0);
      }
      pcVar1 = (char *)(param_3 + 1);
      param_3 = (char *)(param_3 + 1);
      cVar2 = (char)(*pcVar1);
    }
    iVar3 = (int)(fputs("]\n",*(FILE **)(param_1 + 0x18)));
    if (-1 < iVar3) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 112f5100; body size 279 bytes.
#line 1 "ENTRY_112f5100"

bool FUN_112f5100(ushort param_1,ushort param_2,ushort param_3,short *param_4,code *param_5,
                 undefined4 param_6,int *param_7,int *param_8)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  
  piVar2 = (int *)(param_7);
  *param_7 = (int)(0);
  *param_8 = (int)(0);
  if (*param_4 == 3) {
    uVar6 = (uint)(0);
    if (*(int *)(param_4 + 0x3a) != 0) {
      param_7 = (int *)((int *)0x0);
      do {
        puVar5 = (ushort *)((ushort *)(*(int *)(param_4 + 0x38) + (int)param_7));
        if (((*puVar5 & param_1) != 0) && ((*puVar5 & param_2) == 0)) {
          iVar3 = (int)((*param_5)(param_6,*(undefined4 *)(puVar5 + 2),*(undefined4 *)(puVar5 + 4)));
          if (iVar3 == 0) {
            *piVar2 = (int)(*piVar2 + 1);
          }
          else {
            *param_8 = (int)(*param_8 + 1);
          }
        }
        uVar6 = (uint)(uVar6 + 1);
        param_7 = (int *)((int *)((int)param_7 + 0xc));
      } while (uVar6 < *(uint *)(param_4 + 0x3a));
      return (bool)(*piVar2 == 0);
    }
  }
  else if (*param_4 == 4) {
    uVar4 = (ushort)(0x40);
    if ((param_3 & 0x7c0) != 0) {
      uVar4 = (ushort)(param_3 & 0x7c0);
    }
    uVar6 = (uint)(0);
    if (*(int *)(param_4 + 0x3a) != 0) {
      param_7 = (int *)((int *)0x0);
      do {
        puVar5 = (ushort *)((ushort *)(*(int *)(param_4 + 0x38) + (int)param_7));
        uVar1 = (ushort)(*puVar5);
        if ((((uVar1 & param_1) != 0) && ((uVar1 & param_2) == 0)) && ((uVar4 & uVar1) != 0)) {
          iVar3 = (int)((*param_5)(param_6,*(undefined4 *)(puVar5 + 2),*(undefined4 *)(puVar5 + 4)));
          if (iVar3 == 0) {
            *piVar2 = (int)(*piVar2 + 1);
          }
          else {
            *param_8 = (int)(*param_8 + 1);
          }
        }
        uVar6 = (uint)(uVar6 + 1);
        param_7 = (int *)((int *)((int)param_7 + 0xc));
      } while (uVar6 < *(uint *)(param_4 + 0x3a));
    }
  }
  return (bool)(*piVar2 == 0);
}


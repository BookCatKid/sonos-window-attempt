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
extern int _eh_vector_destructor_iterator_(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int ceil(...);
extern int createPropertyBag(...);
extern int createSCStringArray(...);
extern int createStringTemplate(...);
extern int doWork(...);
extern int format(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int int_allocRep(...);
extern int int_getServiceDescriptorForServiceType(...);
extern int int_release(...);
extern int int_start(...);
extern int isShuttingDown(...);
extern int isTemplateStringValid(...);
extern int length(...);
extern __declspec(dllimport) int memmove(...);
extern int op_eq(...);
extern int operator_new(...);
extern int rebind(...);
extern __declspec(dllimport) int strcspn(...);
extern __declspec(dllimport) int strtol(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011f5e0(...);
extern int thunk_FUN_10129a20(...);
extern int thunk_FUN_10129af0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101bf370(...);
extern int thunk_FUN_101bf3f0(...);
extern int thunk_FUN_101c6ae0(...);
extern int thunk_FUN_101ccf90(...);
extern int thunk_FUN_101cf1e0(...);
extern int thunk_FUN_101d3630(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101da240(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_101da860(...);
extern int thunk_FUN_101dce50(...);
extern int thunk_FUN_101dcfc0(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_1023a9c0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10247180(...);
extern int thunk_FUN_10254af0(...);
extern int thunk_FUN_10254f10(...);
extern int thunk_FUN_102560a0(...);
extern int thunk_FUN_102589b0(...);
extern int thunk_FUN_1025c5c0(...);
extern int thunk_FUN_10263a50(...);
extern int thunk_FUN_10263af0(...);
extern int thunk_FUN_10267120(...);
extern int thunk_FUN_1026edf0(...);
extern int thunk_FUN_10272300(...);
extern int thunk_FUN_10272d20(...);
extern int thunk_FUN_10272ea0(...);
extern int thunk_FUN_10272fd0(...);
extern int thunk_FUN_10273980(...);
extern int thunk_FUN_10274780(...);
extern int thunk_FUN_102782e0(...);
extern int thunk_FUN_102782f0(...);
extern int thunk_FUN_10278390(...);
extern int thunk_FUN_10278470(...);
extern int thunk_FUN_10278ee0(...);
extern int thunk_FUN_1027ddb0(...);
extern int thunk_FUN_1027e130(...);
extern int thunk_FUN_1027e1c0(...);
extern int thunk_FUN_1027e470(...);
extern int thunk_FUN_1027ee20(...);
extern int thunk_FUN_10283f20(...);
extern int thunk_FUN_102840e0(...);
extern int thunk_FUN_10284760(...);
extern int thunk_FUN_102847c0(...);
extern int thunk_FUN_10284aa0(...);
extern int thunk_FUN_10285570(...);
extern int thunk_FUN_10286ac0(...);
extern int thunk_FUN_102871c0(...);
extern int thunk_FUN_102878c0(...);
extern int thunk_FUN_1028bbd0(...);
extern int thunk_FUN_1028c030(...);
extern int thunk_FUN_1028c0f0(...);
extern int thunk_FUN_1028c1c0(...);
extern int thunk_FUN_1028e330(...);
extern int thunk_FUN_1028eea0(...);
extern int thunk_FUN_1028f450(...);
extern int thunk_FUN_102909a0(...);
extern int thunk_FUN_10291820(...);
extern int thunk_FUN_10292500(...);
extern int thunk_FUN_10292cf0(...);
extern int thunk_FUN_102967e0(...);
extern int thunk_FUN_102988f0(...);
extern int thunk_FUN_1029d380(...);
extern int thunk_FUN_1029d770(...);
extern int thunk_FUN_1029e2d0(...);
extern int thunk_FUN_102a23b0(...);
extern int thunk_FUN_102a2f00(...);
extern int thunk_FUN_102a30a0(...);
extern int thunk_FUN_102a3140(...);
extern int thunk_FUN_102a3d90(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102a4110(...);
extern int thunk_FUN_102a5240(...);
extern int thunk_FUN_102a71f0(...);
extern int thunk_FUN_102a9b00(...);
extern int thunk_FUN_102a9bb0(...);
extern int thunk_FUN_102a9f50(...);
extern int thunk_FUN_102aa140(...);
extern int thunk_FUN_102accd0(...);
extern int thunk_FUN_102ad4d0(...);
extern int thunk_FUN_102ad7c0(...);
extern int thunk_FUN_102adcb0(...);
extern int thunk_FUN_102adcd0(...);
extern int thunk_FUN_102ae180(...);
extern int thunk_FUN_102ae270(...);
extern int thunk_FUN_102b5010(...);
extern int thunk_FUN_102b50c0(...);
extern int thunk_FUN_102b7ed0(...);
extern int thunk_FUN_102bc730(...);
extern int thunk_FUN_102bcb30(...);
extern int thunk_FUN_102bcbe0(...);
extern int thunk_FUN_102bce30(...);
extern int thunk_FUN_102bd750(...);
extern int thunk_FUN_102c2040(...);
extern int thunk_FUN_102c3f10(...);
extern int thunk_FUN_102c44d0(...);
extern int thunk_FUN_102c45c0(...);
extern int thunk_FUN_102c7a50(...);
extern int thunk_FUN_102caef0(...);
extern int thunk_FUN_102cb090(...);
extern int thunk_FUN_102cb1b0(...);
extern int thunk_FUN_102cb2c0(...);
extern int thunk_FUN_102cb4a0(...);
extern int thunk_FUN_102cddc0(...);
extern int thunk_FUN_102ce2f0(...);
extern int thunk_FUN_102cf840(...);
extern int thunk_FUN_102d0460(...);
extern int thunk_FUN_102d09d0(...);
extern int thunk_FUN_102d29a0(...);
extern int thunk_FUN_102d2c80(...);
extern int thunk_FUN_102d3d50(...);
extern int thunk_FUN_102d3db0(...);
extern int thunk_FUN_102d4a40(...);
extern int thunk_FUN_102d5720(...);
extern int thunk_FUN_102d5e20(...);
extern int thunk_FUN_102d7b30(...);
extern int thunk_FUN_102d7db0(...);
extern int thunk_FUN_102d8010(...);
extern int thunk_FUN_102d82c0(...);
extern int thunk_FUN_102d87b0(...);
extern int thunk_FUN_102daa60(...);
extern int thunk_FUN_102daa80(...);
extern int thunk_FUN_102dc8c0(...);
extern int thunk_FUN_102de840(...);
extern int thunk_FUN_102df5d0(...);
extern int thunk_FUN_102e1310(...);
extern int thunk_FUN_102e23b0(...);
extern int thunk_FUN_102e2560(...);
extern int thunk_FUN_102e2710(...);
extern int thunk_FUN_102e2b90(...);
extern int thunk_FUN_102e2f40(...);
extern int thunk_FUN_102e3440(...);
extern int thunk_FUN_102e3ed0(...);
extern int thunk_FUN_102e49e0(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_1037a2b0(...);
extern int thunk_FUN_1039f6c0(...);
extern int thunk_FUN_103a3e50(...);
extern int thunk_FUN_103a3ed0(...);
extern int thunk_FUN_103be530(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103be9e0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103c6c80(...);
extern int thunk_FUN_103d0880(...);
extern int thunk_FUN_103d56e0(...);
extern int thunk_FUN_103d5ff0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104ddfd0(...);
extern int thunk_FUN_104deb40(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104fd9b0(...);
extern int thunk_FUN_104fed90(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_105f5740(...);
extern int thunk_FUN_105fd2c0(...);
extern int thunk_FUN_1061e370(...);
extern int thunk_FUN_1061edc0(...);
extern int thunk_FUN_106243b0(...);
extern int thunk_FUN_1062a650(...);
extern int thunk_FUN_10649300(...);
extern int thunk_FUN_10651f80(...);
extern int thunk_FUN_10693350(...);
extern int thunk_FUN_106967c0(...);
extern int thunk_FUN_10696830(...);
extern int thunk_FUN_1069e990(...);
extern int thunk_FUN_1069fd10(...);
extern int thunk_FUN_106a1a50(...);
extern int thunk_FUN_106a23c0(...);
extern int thunk_FUN_106a2a80(...);
extern int thunk_FUN_106e1380(...);
extern int thunk_FUN_106e3f50(...);
extern int thunk_FUN_106f7150(...);
extern int thunk_FUN_106f8000(...);
extern int thunk_FUN_106fd7f0(...);
extern int thunk_FUN_106fe200(...);
extern int thunk_FUN_10702ba0(...);
extern int thunk_FUN_10703430(...);
extern int thunk_FUN_10708df0(...);
extern int thunk_FUN_10709bf0(...);
extern int thunk_FUN_107123b0(...);
extern int thunk_FUN_10712c10(...);
extern int thunk_FUN_107183d0(...);
extern int thunk_FUN_107190f0(...);
extern int thunk_FUN_10724930(...);
extern int thunk_FUN_107293d0(...);
extern int thunk_FUN_1074b0e0(...);
extern int thunk_FUN_1074b450(...);
extern int thunk_FUN_1074ca20(...);
extern int thunk_FUN_1074cd90(...);
extern int thunk_FUN_1074ed30(...);
extern int thunk_FUN_10750170(...);
extern int thunk_FUN_10758340(...);
extern int thunk_FUN_107594d0(...);
extern int thunk_FUN_107626d0(...);
extern int thunk_FUN_10762f40(...);
extern int thunk_FUN_10767860(...);
extern int thunk_FUN_10767e60(...);
extern int thunk_FUN_1076bff0(...);
extern int thunk_FUN_1076ce20(...);
extern int thunk_FUN_10772f70(...);
extern int thunk_FUN_10773a50(...);
extern int thunk_FUN_1077bcd0(...);
extern int thunk_FUN_1077c060(...);
extern int thunk_FUN_1077e3d0(...);
extern int thunk_FUN_1077eba0(...);
extern int thunk_FUN_10783320(...);
extern int thunk_FUN_10783670(...);
extern int thunk_FUN_10786100(...);
extern int thunk_FUN_1078c010(...);
extern int thunk_FUN_107cce20(...);
extern int thunk_FUN_107ce880(...);
extern int thunk_FUN_107e6130(...);
extern int thunk_FUN_107e6860(...);
extern int thunk_FUN_107e8f30(...);
extern int thunk_FUN_107eade0(...);
extern int thunk_FUN_10801190(...);
extern int thunk_FUN_108024f0(...);
extern int thunk_FUN_10811c10(...);
extern int thunk_FUN_10812860(...);
extern int thunk_FUN_10818140(...);
extern int thunk_FUN_10819bd0(...);
extern int thunk_FUN_108294f0(...);
extern int thunk_FUN_1082ad30(...);
extern int thunk_FUN_10837820(...);
extern int thunk_FUN_10838110(...);
extern int thunk_FUN_1083fac0(...);
extern int thunk_FUN_108442b0(...);
extern int thunk_FUN_1085d720(...);
extern int thunk_FUN_1085da90(...);
extern int thunk_FUN_1085f4e0(...);
extern int thunk_FUN_10860e70(...);
extern int thunk_FUN_10873290(...);
extern int thunk_FUN_10874c40(...);
extern int thunk_FUN_1087e430(...);
extern int thunk_FUN_1087e530(...);
extern int thunk_FUN_1087eff0(...);
extern int thunk_FUN_10880f80(...);
extern int thunk_FUN_10891c20(...);
extern int thunk_FUN_10892d60(...);
extern int thunk_FUN_1089e580(...);
extern int thunk_FUN_108a0aa0(...);
extern int thunk_FUN_108b47a0(...);
extern int thunk_FUN_108b5220(...);
extern int thunk_FUN_108bcac0(...);
extern int thunk_FUN_108be050(...);
extern int thunk_FUN_108c7880(...);
extern int thunk_FUN_108c96c0(...);
extern int thunk_FUN_108dfd20(...);
extern int thunk_FUN_108e2540(...);
extern int thunk_FUN_108f8850(...);
extern int thunk_FUN_108f8bc0(...);
extern int thunk_FUN_108fb850(...);
extern int thunk_FUN_108fc510(...);
extern int thunk_FUN_10905580(...);
extern int thunk_FUN_109073a0(...);
extern int thunk_FUN_10916c20(...);
extern int thunk_FUN_10919c70(...);
extern int thunk_FUN_1092b810(...);
extern int thunk_FUN_1092dd80(...);
extern int thunk_FUN_10948f60(...);
extern int thunk_FUN_10949eb0(...);
extern int thunk_FUN_109543e0(...);
extern int thunk_FUN_10954990(...);
extern int thunk_FUN_10957cf0(...);
extern int thunk_FUN_10958450(...);
extern int thunk_FUN_1095b3c0(...);
extern int thunk_FUN_1095beb0(...);
extern int thunk_FUN_10961ad0(...);
extern int thunk_FUN_109622d0(...);
extern int thunk_FUN_10970540(...);
extern int thunk_FUN_10970ab0(...);
extern int thunk_FUN_10973080(...);
extern int thunk_FUN_10974ed0(...);
extern int thunk_FUN_109809c0(...);
extern int thunk_FUN_10982060(...);
extern int thunk_FUN_10988b60(...);
extern int thunk_FUN_109893a0(...);
extern int thunk_FUN_1098e810(...);
extern int thunk_FUN_1098fbc0(...);
extern int thunk_FUN_10999150(...);
extern int thunk_FUN_109998c0(...);
extern int thunk_FUN_1099d9d0(...);
extern int thunk_FUN_1099e6c0(...);
extern int thunk_FUN_109a6790(...);
extern int thunk_FUN_109a8720(...);
extern int thunk_FUN_109b6e80(...);
extern int thunk_FUN_109b7970(...);
extern int thunk_FUN_109bf2c0(...);
extern int thunk_FUN_109c0090(...);
extern int thunk_FUN_109c3ac0(...);
extern int thunk_FUN_109c4720(...);
extern int thunk_FUN_109cb7a0(...);
extern int thunk_FUN_109cc050(...);
extern int thunk_FUN_109d8930(...);
extern int thunk_FUN_109d9800(...);
extern int thunk_FUN_109e1620(...);
extern int thunk_FUN_109e2f40(...);
extern int thunk_FUN_109edf50(...);
extern int thunk_FUN_109eec10(...);
extern int thunk_FUN_109f3c80(...);
extern int thunk_FUN_109f6cb0(...);
extern int thunk_FUN_10a08d00(...);
extern int thunk_FUN_10a09850(...);
extern int thunk_FUN_10a0cd20(...);
extern int thunk_FUN_10a0d550(...);
extern int thunk_FUN_10a12ef0(...);
extern int thunk_FUN_10a13f20(...);
extern int thunk_FUN_10a1e9e0(...);
extern int thunk_FUN_10a20e10(...);
extern int thunk_FUN_10a40dc0(...);
extern int thunk_FUN_10a41440(...);
extern int thunk_FUN_10a44600(...);
extern int thunk_FUN_10a44bd0(...);
extern int thunk_FUN_10a48d70(...);
extern int thunk_FUN_10a49340(...);
extern int thunk_FUN_10a4dc00(...);
extern int thunk_FUN_10a505e0(...);
extern int thunk_FUN_10a64980(...);
extern int thunk_FUN_10a66530(...);
extern int thunk_FUN_10a711f0(...);
extern int thunk_FUN_10a71960(...);
extern int thunk_FUN_10a752c0(...);
extern int thunk_FUN_10a761e0(...);
extern int thunk_FUN_10a7cf20(...);
extern int thunk_FUN_10a7d690(...);
extern int thunk_FUN_10a803f0(...);
extern int thunk_FUN_10a80a00(...);
extern int thunk_FUN_10a83b90(...);
extern int thunk_FUN_10a84300(...);
extern int thunk_FUN_10a88c80(...);
extern int thunk_FUN_10a896e0(...);
extern int thunk_FUN_10a90fb0(...);
extern int thunk_FUN_10a920d0(...);
extern int thunk_FUN_10a9a260(...);
extern int thunk_FUN_10a9b180(...);
extern int thunk_FUN_10aa2a60(...);
extern int thunk_FUN_10aa4f70(...);
extern int thunk_FUN_10ab2ee0(...);
extern int thunk_FUN_10ab31d0(...);
extern int thunk_FUN_10ab3f60(...);
extern int thunk_FUN_10ab44a0(...);
extern int thunk_FUN_10ab6080(...);
extern int thunk_FUN_10ab60e0(...);
extern int thunk_FUN_10ab65f0(...);
extern int thunk_FUN_10abba40(...);
extern int thunk_FUN_10ae5fd0(...);
extern int thunk_FUN_10ae6740(...);
extern int thunk_FUN_10ae9000(...);
extern int thunk_FUN_10aea2b0(...);
extern int thunk_FUN_10af4f30(...);
extern int thunk_FUN_10af6380(...);
extern int thunk_FUN_10aff240(...);
extern int thunk_FUN_10affa30(...);
extern int thunk_FUN_10b03bb0(...);
extern int thunk_FUN_10b049a0(...);
extern int thunk_FUN_10b09dc0(...);
extern int thunk_FUN_10b0c920(...);
extern int thunk_FUN_10b1a790(...);
extern int thunk_FUN_10b1b570(...);
extern int thunk_FUN_10b22400(...);
extern int thunk_FUN_10b23f00(...);
extern int thunk_FUN_10b2e4f0(...);
extern int thunk_FUN_10b2ec80(...);
extern int thunk_FUN_10b31d30(...);
extern int thunk_FUN_10b33fb0(...);
extern int thunk_FUN_10b488f0(...);
extern int thunk_FUN_10b49bb0(...);
extern int thunk_FUN_10b4fd80(...);
extern int thunk_FUN_10b51060(...);
extern int thunk_FUN_10b54cd0(...);
extern int thunk_FUN_10b55440(...);
extern int thunk_FUN_10b585d0(...);
extern int thunk_FUN_10b58a40(...);
extern int thunk_FUN_10b5a460(...);
extern int thunk_FUN_10b5cb50(...);
extern int thunk_FUN_10b6e370(...);
extern int thunk_FUN_10b7b430(...);
extern int thunk_FUN_10b7b650(...);
extern int thunk_FUN_10b7b6a0(...);
extern int thunk_FUN_10b7c8e0(...);
extern int thunk_FUN_10b8e970(...);
extern int thunk_FUN_10b97990(...);
extern int thunk_FUN_10bb35c0(...);
extern int thunk_FUN_10bb5460(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_11094310(...);
extern int thunk_FUN_1109e3f0(...);
extern int thunk_FUN_1109e4d0(...);
extern int thunk_FUN_1109ed90(...);
extern int thunk_FUN_1109f0a0(...);
extern int thunk_FUN_1109f100(...);
extern int thunk_FUN_1109f140(...);
extern int thunk_FUN_1109f210(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a2880(...);
extern int thunk_FUN_110a2cd0(...);
extern int thunk_FUN_110a3100(...);
extern int thunk_FUN_110a32b0(...);
extern int thunk_FUN_110c2570(...);
extern int thunk_FUN_110c2600(...);
extern int thunk_FUN_110c2bc0(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110db240(...);
extern int thunk_FUN_110db7b0(...);
extern int thunk_FUN_110f1e00(...);
extern int thunk_FUN_110f2570(...);
extern int thunk_FUN_110f2980(...);
extern int thunk_FUN_110fc270(...);
extern int thunk_FUN_11102510(...);
extern int thunk_FUN_11102770(...);
extern int thunk_FUN_111046c0(...);
extern int thunk_FUN_111046e0(...);
extern int thunk_FUN_11107600(...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111a0cc0(...);
extern int thunk_FUN_111a0d50(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111fdc10(...);
extern int thunk_FUN_111fded0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_1125bcf0(...);
extern int thunk_FUN_1125bd80(...);
extern int thunk_FUN_1125e4e0(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_11262460(...);
extern int thunk_FUN_11262fc0(...);
extern int thunk_FUN_11263050(...);
extern int thunk_FUN_112632c0(...);
extern int thunk_FUN_11264ad0(...);
extern int thunk_FUN_11265090(...);
extern int thunk_FUN_112652a0(...);
extern int thunk_FUN_112654e0(...);
extern int thunk_FUN_112a5390(...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7da0(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a82d0(...);
extern int thunk_FUN_112a9da0(...);
extern int thunk_FUN_112aa790(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1138fd50(...);
extern int thunk_FUN_11391170(...);
extern int thunk_FUN_11391670(...);
extern int thunk_FUN_113948f0(...);
extern int thunk_FUN_11395ef0(...);
extern int thunk_FUN_11397670(...);
extern int thunk_FUN_113cf9c0(...);
extern int thunk_FUN_113cfa30(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145ad70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1145de60(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern int thunk_FUN_1148b660(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_1188d210;
extern int DAT_1188d218;
extern int DAT_121190f4;
extern int DAT_121194d0;
extern int DAT_121194d4;
extern int DAT_121194d8;
extern int DAT_121194dc;
extern int DAT_121194e0;
extern int DAT_12126b84;
extern int DAT_121a0c1c;
extern int DAT_121a0e64;
extern int _DAT_11891018;
extern int _DAT_1189101c;
extern int g_lSCObjCount;
extern int ghidra_vftable_AnacapaLauncher;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RLookupV1CertInfoAIOOp;
extern int ghidra_vftable_RNSGetAliveOp;
extern int ghidra_vftable_RNSGetCurrentChannelOp;
extern int ghidra_vftable_RNetstartScanListOp;
extern int ghidra_vftable_SCAggregateSearchableCategory;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCCertificateChain;
extern int ghidra_vftable_SCCompositeSearchable;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCEventSubscriptionImpl;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIEventSourceImpl;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCInAppMessaging;
extern int ghidra_vftable_SCInAppProductCallback;
extern int ghidra_vftable_SCInAppPurchaseCallback;
extern int ghidra_vftable_SCInAppPurchaseManager;
extern int ghidra_vftable_SCLandingPagePremiumSonosRadio;
extern int ghidra_vftable_SCLogging;
extern int ghidra_vftable_SCMusicServiceMenu;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCRecurrence;
extern int ghidra_vftable_SCResourceHelper;
extern int ghidra_vftable_SCSearchQuery;
extern int ghidra_vftable_SCServiceAccountFilter;
extern int ghidra_vftable_SCServiceAccountManager;
extern int ghidra_vftable_SCServiceDescriptorFilter;
extern int ghidra_vftable_SCSetting;
extern int ghidra_vftable_SCShareNameInput;
extern int ghidra_vftable_SCSonarCalibrationManager;
extern int ghidra_vftable_SCStream;
extern int ghidra_vftable_SCStringTemplate;
extern int ghidra_vftable_SCStringTemplateNode;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCSystemStatusManager;
extern int ghidra_vftable_SCSystemTime;
extern int ghidra_vftable_SCTime;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCWizardComponentBuilder;
extern int ghidra_vftable_SwfWrappedHelper;
extern int ghidra_vftable_TestPointHandlerSCLIB;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_stack_00000028;
extern int in_stack_0000002c;
extern undefined1 LAB_10073cae[];
extern undefined1 LAB_102770d9[];
extern undefined1 LAB_1027cbdc[];
extern undefined1 LAB_102db715[];
extern undefined1 LAB_11511cc0[];
extern undefined1 LAB_11511d7d[];
extern undefined1 LAB_11511dbd[];
extern undefined1 LAB_11511dfd[];
extern undefined1 LAB_11511e3d[];
extern undefined1 LAB_11511e7d[];
extern undefined1 LAB_11511ebd[];
extern undefined1 LAB_11511fed[];
extern undefined1 LAB_1151202d[];
extern undefined1 LAB_115120ad[];
extern undefined1 LAB_115120ed[];
extern undefined1 LAB_1151212d[];
extern undefined1 LAB_1151216d[];
extern undefined1 LAB_115121ad[];
extern undefined1 LAB_115122bd[];
extern undefined1 LAB_115123a0[];
extern undefined1 LAB_115123d0[];
extern undefined1 LAB_11512400[];
extern undefined1 LAB_11512430[];
extern undefined1 LAB_11512460[];
extern undefined1 LAB_11512490[];
extern undefined1 LAB_115124c0[];
extern undefined1 LAB_115125b0[];
extern undefined1 LAB_11512640[];
extern undefined1 LAB_11512830[];
extern undefined1 LAB_115128c0[];
extern undefined1 LAB_11512965[];
extern undefined1 LAB_115129a5[];
extern undefined1 LAB_115129e5[];
extern undefined1 LAB_11512a85[];
extern undefined1 LAB_11512f10[];
extern undefined1 LAB_115131e0[];
extern undefined1 LAB_11513210[];
extern undefined1 LAB_11513270[];
extern undefined1 LAB_115132a0[];
extern undefined1 LAB_11513700[];
extern undefined1 LAB_11514110[];
extern undefined1 LAB_11514140[];
extern undefined1 LAB_11514480[];
extern undefined1 LAB_115144b0[];
extern undefined1 LAB_11514890[];
extern undefined1 LAB_115148c0[];
extern undefined1 LAB_115148f0[];
extern undefined1 LAB_11514920[];
extern undefined1 LAB_11514950[];
extern undefined1 LAB_11514980[];
extern undefined1 LAB_115149b0[];
extern undefined1 LAB_11514a70[];
extern undefined1 LAB_11514c10[];
extern undefined1 LAB_11514c40[];
extern undefined1 LAB_11514c70[];
extern undefined1 LAB_11514f30[];
extern undefined1 LAB_11515d50[];
extern undefined1 LAB_11515d80[];
extern undefined1 LAB_11515de0[];
extern undefined1 LAB_11515e10[];
extern undefined1 LAB_11515f30[];
extern undefined1 LAB_11515fa0[];
extern undefined1 LAB_115160ad[];
extern undefined1 LAB_11516240[];
extern undefined1 LAB_11516270[];
extern undefined1 LAB_115162a0[];
extern undefined1 LAB_115162d0[];
extern undefined1 LAB_11516300[];
extern undefined1 LAB_11516330[];
extern undefined1 LAB_11516360[];
extern undefined1 LAB_11516450[];
extern undefined1 LAB_11516480[];
extern undefined1 LAB_11516570[];
extern undefined1 LAB_115165a0[];
extern undefined1 LAB_11516600[];
extern undefined1 LAB_11516630[];
extern undefined1 LAB_115167f4[];
extern undefined1 LAB_11516a2d[];
extern undefined1 LAB_11516a86[];
extern undefined1 LAB_11516acd[];
extern undefined1 LAB_11516bf0[];
extern undefined1 LAB_11516c20[];
extern undefined1 LAB_11516fb0[];
extern undefined1 LAB_11516fe0[];
extern undefined1 LAB_1151702d[];
extern undefined1 LAB_1151706d[];
extern undefined1 LAB_115170c6[];
extern undefined1 LAB_1151710d[];
extern undefined1 LAB_1151725d[];
extern undefined1 LAB_115174f0[];
extern undefined1 LAB_11517520[];
extern undefined1 LAB_11517550[];
extern undefined1 LAB_11517580[];
extern undefined1 LAB_115176dd[];
extern undefined1 LAB_1151771d[];
extern undefined1 LAB_1151779d[];
extern undefined1 LAB_1151781d[];
extern undefined1 LAB_11517865[];
extern undefined1 LAB_11517936[];
extern undefined1 LAB_11517970[];
extern undefined1 LAB_115179a0[];
extern undefined1 LAB_115179d0[];
extern undefined1 LAB_11517b4d[];
extern undefined1 LAB_11517be0[];
extern undefined1 LAB_11517c1d[];
extern undefined1 LAB_11517c76[];
extern undefined1 LAB_11517cbd[];
extern undefined1 LAB_11517d70[];
extern undefined1 LAB_11517f84[];
extern undefined1 LAB_11518030[];
extern undefined1 LAB_115181d4[];
extern undefined1 LAB_1151821d[];
extern undefined1 LAB_1151865d[];
extern undefined1 LAB_11518780[];
extern undefined1 LAB_115187f0[];
extern undefined1 LAB_11518820[];
extern undefined1 LAB_11518850[];
extern undefined1 LAB_11518880[];
extern undefined1 LAB_115188b0[];
extern undefined1 LAB_115188e0[];
extern undefined1 LAB_11518910[];
extern undefined1 LAB_11518970[];
extern undefined1 LAB_115189a0[];
extern undefined1 LAB_115189d0[];
extern undefined1 LAB_11518a90[];
extern undefined1 LAB_11518ac0[];
extern undefined1 LAB_11518af0[];
extern undefined1 LAB_1151955e[];
extern undefined1 LAB_11519757[];
extern undefined1 LAB_115199c0[];
extern undefined1 LAB_11519c0d[];
extern undefined1 LAB_11519c4d[];
extern undefined1 LAB_11519c8d[];
extern undefined1 LAB_11519ccd[];
extern undefined1 LAB_11519d0d[];
extern undefined1 LAB_11519d40[];
extern undefined1 LAB_11519d7d[];
extern undefined1 LAB_11519e90[];
extern undefined1 LAB_11519ecd[];
extern undefined1 LAB_11519f4d[];
extern undefined1 LAB_11519f8d[];
extern undefined1 LAB_1151a020[];
extern undefined1 LAB_1151a050[];
extern undefined1 LAB_1151a080[];
extern undefined1 LAB_1151a140[];
extern undefined1 LAB_1151a310[];
extern undefined1 LAB_1151a3ad[];
extern undefined1 LAB_1151a4b4[];
extern undefined1 LAB_1151ab9a[];
extern undefined1 LAB_1151aeed[];
extern undefined1 LAB_1151af2d[];
extern undefined1 LAB_1151b05d[];
extern undefined1 LAB_1151b15d[];
extern undefined1 LAB_1151b21d[];
extern undefined1 LAB_1151b2a5[];
extern undefined1 LAB_1151b300[];
extern undefined1 LAB_1151b330[];
extern undefined1 LAB_1151b390[];
extern undefined1 LAB_1151b430[];
extern undefined1 LAB_1151b4ed[];
extern undefined1 LAB_1151b52d[];
extern undefined1 LAB_1151b640[];
extern undefined1 LAB_1151b670[];
extern undefined1 LAB_1151b6a0[];
extern undefined1 LAB_1151b6d0[];
extern undefined1 LAB_1151b790[];
extern undefined1 LAB_1151b860[];
extern undefined1 LAB_1151bdfd[];
extern undefined1 LAB_1151bfe5[];
extern undefined1 LAB_1151c16d[];
extern undefined1 LAB_1151c28d[];
extern undefined1 LAB_1151c4d5[];
extern undefined1 LAB_1151c500[];
extern undefined1 LAB_1151c53d[];
extern undefined1 LAB_1151c760[];
extern undefined1 LAB_1151c865[];
extern undefined1 LAB_1151c965[];
extern undefined1 LAB_1151cd0d[];
extern undefined1 LAB_1151cd6b[];
extern undefined1 LAB_1151d280[];
extern undefined1 LAB_1151d310[];
extern undefined1 LAB_1151d540[];
extern undefined1 LAB_1151d947[];
extern undefined1 LAB_1151d994[];
extern undefined1 LAB_1151dd9d[];
extern undefined1 LAB_1151dddd[];
extern undefined1 LAB_1151de1d[];
extern undefined1 LAB_1151de5d[];
extern undefined1 LAB_1151deed[];
extern undefined1 LAB_1151df2d[];
extern undefined1 LAB_1151e0b7[];
extern undefined1 LAB_1151e1ad[];
extern undefined1 LAB_1151e1e0[];
extern undefined1 LAB_1151e21d[];
extern undefined1 LAB_1151e290[];
extern undefined1 LAB_1151e550[];
extern undefined1 LAB_1151e5b0[];
extern undefined1 LAB_1151e660[];
extern undefined1 LAB_1151ed90[];
extern undefined1 LAB_1151edc0[];
extern undefined1 LAB_1151edf0[];
extern undefined1 LAB_1151ee78[];
extern undefined1 LAB_1151eebd[];
extern undefined1 LAB_1151f1cd[];
extern undefined1 LAB_1151f29d[];
extern undefined1 LAB_1151f31d[];
extern undefined1 LAB_1151f35d[];
extern undefined1 LAB_1151f430[];
extern undefined1 LAB_1151f4f8[];
extern undefined1 LAB_1151f560[];
extern undefined1 LAB_1151f590[];
extern undefined1 LAB_1151f5c0[];
extern undefined1 LAB_1151f6c5[];
extern undefined1 LAB_1151f6fd[];
extern undefined1 LAB_1151f748[];
extern undefined1 LAB_1151f798[];
extern undefined1 LAB_115200c0[];
extern undefined1 LAB_115200f0[];
extern undefined1 LAB_11520120[];
extern undefined1 LAB_11520150[];
extern undefined1 LAB_11520180[];
extern undefined1 LAB_115201b0[];
extern undefined1 LAB_115201e0[];
extern undefined1 LAB_11520210[];
extern undefined1 LAB_11520240[];
extern undefined1 LAB_11520270[];
extern undefined1 LAB_115202a0[];
extern undefined1 LAB_115202d0[];
extern undefined1 LAB_11520300[];
extern undefined1 LAB_11520330[];
extern undefined1 LAB_115203f0[];
extern undefined1 LAB_11520420[];
extern undefined1 LAB_11520450[];
extern undefined1 LAB_11520480[];
extern undefined1 LAB_115204b0[];
extern undefined1 LAB_1152057d[];
extern undefined1 LAB_115205bd[];
extern undefined1 LAB_115207f0[];
extern undefined1 LAB_11520820[];
extern undefined1 LAB_11520880[];
extern undefined1 LAB_115208b0[];
extern undefined1 LAB_11520b60[];
extern undefined1 LAB_11520b90[];
extern undefined1 LAB_11520be0[];
extern undefined1 LAB_11520c9d[];
extern undefined1 LAB_11520d1d[];
extern undefined1 LAB_11520da4[];
extern undefined1 LAB_1152172d[];
extern undefined1 LAB_1152176d[];
extern undefined1 LAB_115225a4[];
extern undefined1 LAB_11522693[];
extern undefined1 LAB_11522705[];
extern undefined1 LAB_11522780[];
extern undefined1 LAB_11522ce5[];
extern undefined1 LAB_11522ded[];
extern undefined1 LAB_11522f55[];
extern undefined1 LAB_1152320d[];
extern undefined1 LAB_1152328d[];
extern undefined1 LAB_115232cd[];
extern undefined1 LAB_1152330d[];
extern undefined1 LAB_1152334d[];
extern undefined1 LAB_1152340d[];
extern undefined1 LAB_11523724[];
extern undefined1 LAB_11523a40[];
extern undefined1 LAB_11523a70[];
extern undefined1 LAB_11523aa0[];
extern undefined1 LAB_11523efd[];
extern undefined1 LAB_11523f45[];
extern undefined1 LAB_11524010[];
extern undefined1 LAB_11524040[];
extern undefined1 LAB_115240a0[];
extern undefined1 LAB_11524100[];
extern undefined1 LAB_1152416d[];
extern undefined1 LAB_11524233[];
extern undefined1 LAB_115246ad[];
extern undefined1 LAB_115246ed[];
extern undefined1 LAB_1152472d[];
extern undefined1 LAB_11524930[];
extern undefined1 LAB_11524960[];
extern undefined1 LAB_11524990[];
extern undefined1 LAB_115249c0[];
extern undefined1 LAB_115249f0[];
extern undefined1 LAB_11524a20[];
extern undefined1 LAB_11524a50[];
extern undefined1 LAB_11524a80[];
extern undefined1 LAB_11524ab0[];
extern undefined1 LAB_11524ae0[];
extern undefined1 LAB_11524b10[];
extern undefined1 LAB_11524b40[];
extern undefined1 LAB_11524c00[];
extern undefined1 LAB_11524c30[];
extern undefined1 LAB_11524d70[];
extern undefined1 LAB_11525754[];
extern undefined1 LAB_1152591d[];
extern undefined1 LAB_11525950[];
extern undefined1 LAB_115259f5[];
extern undefined1 LAB_11525f50[];
extern undefined1 LAB_11525f80[];
extern undefined1 LAB_11525fb0[];
extern undefined1 LAB_1152602d[];
extern undefined1 LAB_115260a0[];
extern undefined1 LAB_115260d0[];
extern undefined1 LAB_1152610d[];
extern undefined1 LAB_1152618d[];
extern undefined1 LAB_115261cd[];
extern undefined1 LAB_11526340[];
extern undefined1 LAB_11526370[];
extern undefined1 LAB_115263a0[];
extern undefined1 LAB_115263d0[];
extern undefined1 LAB_11526400[];
extern undefined1 LAB_11526430[];
extern undefined1 LAB_11526490[];
extern undefined1 LAB_115264c0[];
extern undefined1 LAB_1152652d[];
extern undefined1 LAB_115265e0[];
extern undefined1 LAB_11526610[];
extern undefined1 LAB_11526bc4[];
extern undefined1 LAB_11526c17[];
extern undefined1 LAB_11526d34[];
extern undefined1 LAB_11526ea5[];
extern undefined1 LAB_11526f1c[];
extern undefined1 LAB_11526f7d[];
extern undefined1 LAB_11526fc5[];
extern undefined1 LAB_1152704d[];
extern undefined1 LAB_11527080[];
extern undefined1 LAB_11527170[];
extern undefined1 LAB_1152745d[];
extern undefined1 LAB_115275d0[];
extern undefined1 LAB_11527600[];
extern undefined1 LAB_11527630[];
extern undefined1 LAB_11527660[];
extern undefined1 LAB_115276c0[];
extern undefined1 LAB_115276f0[];
extern undefined1 LAB_11527720[];
extern undefined1 LAB_11527a50[];
extern undefined1 LAB_11527b56[];
extern undefined1 LAB_11527c6d[];
extern undefined1 LAB_11527cfd[];
extern undefined1 LAB_1152833d[];
extern undefined1 LAB_115283dd[];
extern undefined1 LAB_11528444[];
extern undefined1 LAB_1152849d[];
extern undefined1 LAB_11528730[];
extern undefined1 LAB_11528790[];
extern undefined1 LAB_115287c0[];
extern undefined1 LAB_115287f0[];
extern undefined1 LAB_11528820[];
extern undefined1 LAB_11528850[];
extern undefined1 LAB_11528880[];
extern undefined1 LAB_115288b0[];
extern undefined1 LAB_11528940[];
extern undefined1 LAB_11528970[];
extern undefined1 LAB_115289a0[];
extern undefined1 LAB_115289d0[];
extern undefined1 LAB_11528a00[];
extern undefined1 LAB_11528a30[];
extern undefined1 LAB_11528a60[];
extern undefined1 LAB_11528ad0[];
extern undefined1 LAB_11528e4d[];
extern undefined1 LAB_11528e9d[];
extern undefined1 LAB_11528ee5[];
extern undefined1 LAB_11528fd0[];
extern undefined1 LAB_11529000[];
extern undefined1 LAB_11529030[];
extern undefined1 LAB_11529060[];
extern undefined1 LAB_115293df[];
extern undefined1 LAB_11529424[];
extern undefined1 LAB_115294a5[];
extern undefined1 LAB_115294e0[];
extern undefined1 LAB_11529624[];
extern undefined1 LAB_1152966d[];
extern undefined1 LAB_115296ad[];
extern undefined1 LAB_115296fd[];
extern undefined1 LAB_1152973d[];
extern undefined1 LAB_115297fd[];
extern undefined1 LAB_11529845[];
extern undefined1 LAB_115298a5[];
extern undefined1 LAB_115299f0[];
extern undefined1 LAB_11529a20[];
extern undefined1 LAB_11529a9e[];
extern undefined1 LAB_11529af5[];
extern undefined1 LAB_11529b35[];
extern undefined1 LAB_11529b85[];
extern undefined1 LAB_11529c0e[];
extern undefined1 LAB_11529c5d[];
extern undefined1 LAB_11529d05[];
extern undefined1 LAB_11529d55[];
extern undefined1 LAB_11529db5[];
extern undefined1 LAB_11529f3d[];
extern undefined1 LAB_11529fc6[];
extern undefined1 LAB_1152a056[];
extern undefined1 LAB_1152a0de[];
extern undefined1 LAB_1152a15e[];
extern undefined1 LAB_1152a1de[];
extern undefined1 LAB_1152a266[];
extern undefined1 LAB_1152a2b5[];
extern undefined1 LAB_1152a326[];
extern undefined1 LAB_1152a3ae[];
extern undefined1 LAB_1152a446[];
extern undefined1 LAB_1152a4ce[];
extern undefined1 LAB_1152a556[];
extern undefined1 LAB_1152a5a5[];
extern undefined1 LAB_1152a5fd[];
extern undefined1 LAB_1152a665[];
extern undefined1 LAB_1152a6d5[];
extern undefined1 LAB_1152a776[];
extern undefined1 LAB_1152a7ed[];
extern undefined1 LAB_1152a855[];
extern undefined1 LAB_1152a8d5[];
extern undefined1 LAB_1152a966[];
extern undefined1 LAB_1152aa15[];
extern undefined1 LAB_1152aafe[];
extern undefined1 LAB_1152ab75[];
extern undefined1 LAB_1152abe5[];
extern undefined1 LAB_1152ac4d[];
extern undefined1 LAB_1152ac9d[];
extern undefined1 LAB_1152acf5[];
extern undefined1 LAB_1152ad44[];
extern undefined1 LAB_1152ad84[];
extern undefined1 LAB_1152adf5[];
extern undefined1 LAB_1152ae55[];
extern undefined1 LAB_1152aebd[];
extern undefined1 LAB_1152af25[];
extern undefined1 LAB_1152af8d[];
extern undefined1 LAB_1152afe5[];
extern undefined1 LAB_1152b055[];
extern undefined1 LAB_1152b0e6[];
extern undefined1 LAB_1152b13e[];
extern undefined1 LAB_1152b1bd[];
extern undefined1 LAB_1152b1fd[];
extern undefined1 LAB_1152b23d[];
extern undefined1 LAB_1152b345[];
extern undefined1 LAB_1152b38d[];
extern undefined1 LAB_1152b3dd[];
extern undefined1 LAB_1152b425[];
extern undefined1 LAB_1152b465[];
extern int *PTR_DAT_12119128;
extern int *PTR_s_wiz_sonar_learn_to_tune_12119514;
extern int *stack0x00000004;
extern int *stack0x0000000c;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); template<class... A> int isShuttingDown(A...); };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int format(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); template<class... A> int op_eq(A...); };
struct SCStringTemplate { char _pad; SCStringTemplate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createStringTemplate(A...); template<class... A> int isTemplateStringValid(A...); };
struct SCSystemStatus { char _pad; SCSystemStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); static int onTimerExpired; };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *AND;
typedef void *CHN;
typedef void *FROM;
typedef void *LOCK;
typedef void *SELECT;
typedef void *UNLOCK;
typedef void *US;
typedef void *WARNING;
typedef void *WHERE;
struct AnacapaLauncher { char _pad; AnacapaLauncher(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Certificate { char _pad; Certificate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Command { char _pad; Command(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Descriptors { char _pad; Descriptors(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HiddenPreloadSvcs { char _pad; HiddenPreloadSvcs(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RNetstartScanListOp { char _pad; RNetstartScanListOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAudioInputResource { char _pad; SCIAudioInputResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCICachedHousehold { char _pad; SCICachedHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIEventSource { char _pad; SCIEventSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpFactory { char _pad; SCIOpFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIPropertyBag { char _pad; SCIPropertyBag(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIServiceDescriptorFilter { char _pad; SCIServiceDescriptorFilter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIServiceDescriptorManager { char _pad; SCIServiceDescriptorManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISetting { char _pad; SCISetting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIStringTemplate { char _pad; SCIStringTemplate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISystem { char _pad; SCISystem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIUrlSessionProvider { char _pad; SCIUrlSessionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWebsocketDelegate { char _pad; SCIWebsocketDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWifiDelegate { char _pad; SCIWifiDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIWizardComponentBuilder { char _pad; SCIWizardComponentBuilder(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSecurityContext { char _pad; SCSecurityContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSettingsReplicator { char _pad; SCSettingsReplicator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSystemTime { char _pad; SCSystemTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ServiceListVersion { char _pad; ServiceListVersion(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SonosId { char _pad; SonosId(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SsidMap { char _pad; SsidMap(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Timer { char _pad; Timer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct We { char _pad; We(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComopnentKeyInputEvent { char _pad; WizardComopnentKeyInputEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyActive { char _pad; WizardComponentKeyActive(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyBoldText { char _pad; WizardComponentKeyBoldText(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyCaptionList { char _pad; WizardComponentKeyCaptionList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyCenterText { char _pad; WizardComponentKeyCenterText(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyDetectLinksText { char _pad; WizardComponentKeyDetectLinksText(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyDetectMarkdownText { char _pad; WizardComponentKeyDetectMarkdownText(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyDuration { char _pad; WizardComponentKeyDuration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyID { char _pad; WizardComponentKeyID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyImageItems { char _pad; WizardComponentKeyImageItems(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyImageType { char _pad; WizardComponentKeyImageType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyImageURL { char _pad; WizardComponentKeyImageURL(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyImageURLAlt { char _pad; WizardComponentKeyImageURLAlt(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyInput { char _pad; WizardComponentKeyInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyList { char _pad; WizardComponentKeyList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyOpacity { char _pad; WizardComponentKeyOpacity(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyPinBottom { char _pad; WizardComponentKeyPinBottom(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyRotationAngle { char _pad; WizardComponentKeyRotationAngle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeySelectText { char _pad; WizardComponentKeySelectText(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyString { char _pad; WizardComponentKeyString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyType { char _pad; WizardComponentKeyType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyValue { char _pad; WizardComponentKeyValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyVideoManualControls { char _pad; WizardComponentKeyVideoManualControls(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WizardComponentKeyVideoURL { char _pad; WizardComponentKeyVideoURL(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; int __thiscall FUN_10256720(int *param_2); int __thiscall FUN_10256790(int param_2); int __thiscall FUN_10256810(int param_2); int __thiscall FUN_10256890(int *param_2); int __thiscall FUN_10256900(int param_2); int __thiscall FUN_10256980(int param_2); int __thiscall FUN_10256a00(int *param_2); int __thiscall FUN_10256a70(int param_2); int __thiscall FUN_10256af0(int param_2); int __thiscall FUN_10256de0(int *param_2); int __thiscall FUN_10256e50(int param_2); int __thiscall FUN_10256ed0(int param_2); int __thiscall FUN_10257470(int param_2); int __thiscall FUN_102574f0(int *param_2); int __thiscall FUN_10257560(int param_2); int __thiscall FUN_102575e0(int *param_2); int __thiscall FUN_10257650(int param_2); int __thiscall FUN_102576d0(int *param_2); int __thiscall FUN_10257740(int param_2); int __thiscall FUN_102577c0(int *param_2); int __thiscall FUN_10257830(int param_2); undefined4 * __thiscall FUN_10257ba0(void); int * __thiscall FUN_10258e90(int *param_2); undefined4 * __thiscall FUN_10259860(byte param_2); undefined4 * __thiscall FUN_102599d0(byte param_2); undefined4 * __thiscall FUN_10259e90(byte param_2); undefined4 * __thiscall FUN_10259f70(byte param_2); undefined4 * __thiscall FUN_10259fe0(byte param_2); void __thiscall FUN_1025a0e0(int param_2,int param_3,int param_4); int * __thiscall FUN_1025d940(int *param_2); undefined4 * __thiscall FUN_1025da50(byte param_2); void __thiscall FUN_1025dff0(int *param_2); undefined4 * __thiscall FUN_1025e410(undefined4 *param_2); undefined4 __thiscall FUN_1025e5f0(undefined4 *param_2); int * __thiscall FUN_1025ea30(int *param_2,uint *param_3); void __thiscall FUN_102607c0(int param_2); void __thiscall FUN_10260840(int *param_2); void __thiscall FUN_102627b0(undefined4 param_2); int * __thiscall FUN_10263630(int *param_2); int * __thiscall FUN_102636f0(int *param_2); int * __thiscall FUN_10263770(int *param_2); undefined4 * __thiscall FUN_10267fb0(byte param_2); undefined4 * __thiscall FUN_10268040(byte param_2); int __thiscall FUN_102680d0(byte param_2); void __thiscall FUN_10268400(int param_2,int param_3,int param_4); void __thiscall FUN_10268490(int param_2,int param_3,int param_4); void __thiscall FUN_10268640(char param_2); int * __thiscall FUN_1026db10(int *param_2); undefined4 * __thiscall FUN_1026dc20(byte param_2); void __thiscall FUN_1026e0e0(int *param_2); int * __thiscall FUN_1026e3a0(int *param_2); int * __thiscall FUN_1026e420(int *param_2); int __thiscall FUN_1026f220(int param_2); int * __thiscall FUN_10270220(int *param_2); int * __thiscall FUN_10270290(int *param_2); undefined4 * __thiscall FUN_10270680(byte param_2); undefined4 * __thiscall FUN_10270810(byte param_2); undefined4 * __thiscall FUN_10271ae0(undefined4 *param_2); void __thiscall FUN_102725d0(int param_2,int param_3); int __thiscall FUN_10274ce0(int param_2); int * __thiscall FUN_10275d00(int *param_2); undefined4 * __thiscall FUN_10275dd0(undefined4 *param_2); undefined4 * __thiscall FUN_10275e60(undefined4 *param_2); undefined4 * __thiscall FUN_10276160(undefined4 *param_2); undefined1 __thiscall FUN_102766c0(int param_2,int *param_3); undefined4 * __thiscall FUN_10276790(byte param_2); undefined4 * __thiscall FUN_10276920(byte param_2); undefined4 * __thiscall FUN_102769b0(byte param_2); void __thiscall FUN_10276f50(int param_2,int param_3,int param_4); void __thiscall FUN_10276fe0(uint param_2); void __thiscall FUN_102773f0(undefined4 *param_2); undefined1 __thiscall FUN_102777a0(int *param_2); void __thiscall FUN_10278e60(int *param_2,int param_3); undefined4 * __thiscall FUN_10279b60(undefined4 *param_2); undefined4 * __thiscall FUN_1027d5a0(undefined4 param_2); void __thiscall FUN_1027e130(int *param_2,undefined4 param_3); undefined4 * __thiscall FUN_1027ed00(undefined4 param_2); undefined4 * __thiscall FUN_1027f240(int param_2); int * __thiscall FUN_1027fb30(int *param_2); int __thiscall FUN_1027fc80(int param_2); undefined4 * __thiscall FUN_10280140(byte param_2); undefined4 * __thiscall FUN_10280280(byte param_2); undefined4 * __thiscall FUN_102803b0(byte param_2); void __thiscall FUN_10280c80(uint param_2); int * __thiscall FUN_10283b30(int *param_2); void __thiscall FUN_10283d50(undefined4 *param_2); int * __thiscall FUN_10283f20(undefined4 *param_2,int param_3,undefined4 param_4); void __thiscall FUN_10284040(undefined4 *param_2); undefined4 * __thiscall FUN_10284180(undefined4 *param_2,uint *param_3); void __thiscall FUN_10284760(undefined4 param_2); void __thiscall FUN_10285050(undefined4 *param_2,uint *param_3); int * __thiscall FUN_10285570(int *param_2); int * __thiscall FUN_10285760(int *param_2); int * __thiscall FUN_10285d80(int *param_2); int * __thiscall FUN_10285e50(int *param_2); int * __thiscall FUN_10285ec0(int *param_2); undefined4 * __thiscall FUN_10286200(byte param_2); void __thiscall FUN_102864b0(int param_2,int param_3,int param_4); void __thiscall FUN_10286d60(int param_2); void __thiscall FUN_10286eb0(int *param_2); void __thiscall FUN_10287570(undefined4 *param_2,int *param_3); int * __thiscall FUN_102877e0(int *param_2); void __thiscall FUN_1028a700(uint param_2); int * __thiscall FUN_1028b5a0(int *param_2); int * __thiscall FUN_1028b6f0(int *param_2); int * __thiscall FUN_1028b870(int *param_2); int * __thiscall FUN_1028b8f0(int *param_2); int * __thiscall FUN_1028bbd0(undefined4 *param_2,int param_3,undefined4 param_4); undefined4 * __thiscall FUN_1028bde0(undefined4 *param_2,int *param_3); undefined4 __thiscall FUN_1028c0f0(undefined4 param_2,int *param_3); undefined4 __thiscall FUN_1028c1c0(undefined4 param_2,int *param_3); undefined4 * __thiscall FUN_1028cd90(undefined4 *param_2); int * __thiscall FUN_1028d0c0(int *param_2); int * __thiscall FUN_1028d290(int *param_2); undefined4 * __thiscall FUN_1028e450(byte param_2); void __thiscall FUN_1028f140(int param_2); void __thiscall FUN_1028f1b0(int param_2); void __thiscall FUN_1028f310(int *param_2); void __thiscall FUN_1028f380(int *param_2); int * __thiscall FUN_102915e0(int *param_2); void __thiscall FUN_102934d0(int *param_2); undefined4 * __thiscall FUN_10294e70(int param_2); undefined4 * __thiscall FUN_10294f90(int param_2); undefined4 * __thiscall FUN_102953d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); undefined4 * __thiscall FUN_10297580(byte param_2); void __thiscall FUN_102986f0(int param_2); void __thiscall FUN_102987e0(int *param_2); void __thiscall FUN_10298b90(int *param_2,undefined4 param_3); undefined4 __thiscall FUN_10298c70(int *param_2); undefined4 __thiscall FUN_10298dd0(int *param_2); undefined4 __thiscall FUN_10298f30(int *param_2); void __thiscall FUN_102990d0(int *param_2); undefined4 __thiscall FUN_10299350(int *param_2); undefined4 __thiscall FUN_1029b790(int param_2); undefined4 __thiscall FUN_1029b8b0(int param_2); undefined4 __thiscall FUN_1029b9d0(int *param_2); undefined4 __thiscall FUN_1029be60(int param_2); void __thiscall FUN_1029bf70(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1029c980(undefined4 param_2); undefined4 * __thiscall FUN_1029ce90(int param_2); undefined4 * __thiscall FUN_1029cf80(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_1029d130(int *param_2); undefined4 * __thiscall FUN_1029d2d0(undefined4 *param_2); undefined4 __thiscall FUN_1029d970(int param_2); undefined4 * __thiscall FUN_1029df20(undefined1 *param_2); int * __thiscall FUN_1029e0f0(int *param_2); undefined4 * __thiscall FUN_1029e250(undefined4 *param_2); undefined4 * __thiscall FUN_1029f930(byte param_2); void __thiscall FUN_1029fe10(int param_2); void __thiscall FUN_1029fea0(int *param_2); undefined4 __thiscall FUN_102a0ef0(undefined4 *param_2); int * __thiscall FUN_102a1f10(int *param_2); int * __thiscall FUN_102a23b0(int *param_2); int * __thiscall FUN_102a25b0(int *param_2); void __thiscall FUN_102a2ce0(int param_2,int param_3); void __thiscall FUN_102a33c0(int *param_2); int __thiscall FUN_102a3580(int param_2,undefined4 param_3); void __thiscall FUN_102a3cd0(undefined4 param_2); int * __thiscall FUN_102a4110(int *param_2,uint *param_3); int * __thiscall FUN_102a4940(int *param_2,uint *param_3); int * __thiscall FUN_102a4d60(int *param_2,uint *param_3); undefined4 * __thiscall FUN_102a6750(undefined4 *param_2); undefined4 * __thiscall FUN_102a67f0(undefined4 *param_2); int * __thiscall FUN_102a6e60(int *param_2); int * __thiscall FUN_102a6fe0(int *param_2); int * __thiscall FUN_102a7120(int *param_2); int * __thiscall FUN_102a71f0(int *param_2); int * __thiscall FUN_102aa650(int *param_2); int * __thiscall FUN_102aa7e0(int *param_2); int __thiscall FUN_102aab80(uint *param_2); int __thiscall FUN_102aac70(uint *param_2); undefined4 * __thiscall FUN_102abb70(byte param_2); undefined4 * __thiscall FUN_102abca0(byte param_2); undefined4 * __thiscall FUN_102abd30(byte param_2); int __thiscall FUN_102abef0(byte param_2); undefined4 * __thiscall FUN_102abfe0(byte param_2); void __thiscall FUN_102ac5f0(int param_2,int param_3,int param_4); void __thiscall FUN_102ac6a0(int param_2,int param_3,int param_4); void __thiscall FUN_102ac730(int param_2,int param_3,int param_4); void __thiscall FUN_102bac70(int param_2,int *param_3); int * __thiscall FUN_102bc2e0(int *param_2); undefined4 * __thiscall FUN_102bc540(undefined4 param_2); int * __thiscall FUN_102bc730(undefined4 *param_2,int param_3,undefined4 param_4); undefined4 * __thiscall FUN_102bc860(undefined4 param_2); int * __thiscall FUN_102bcc90(int *param_2,undefined4 *param_3); int * __thiscall FUN_102bd350(int *param_2); void __thiscall FUN_102be420(int param_2); void __thiscall FUN_102be520(int *param_2); int * __thiscall FUN_102c0460(int *param_2); undefined4 * __thiscall FUN_102c0550(byte param_2); void __thiscall FUN_102c0be0(int *param_2); int __thiscall FUN_102c12f0(int param_2); int __thiscall FUN_102c1370(void); undefined4 * __thiscall FUN_102c1970(byte param_2); void __thiscall FUN_102c1c40(int *param_2); int * __thiscall FUN_102c2d20(int *param_2); int * __thiscall FUN_102c2ea0(int *param_2); int * __thiscall FUN_102c2fc0(int *param_2); int * __thiscall FUN_102c3040(int *param_2); int __thiscall FUN_102c3d00(int param_2); int __thiscall FUN_102c3d90(int param_2); int * __thiscall FUN_102c5210(int *param_2); int * __thiscall FUN_102c5280(int *param_2); undefined4 * __thiscall FUN_102c5750(byte param_2); int __thiscall FUN_102c8100(undefined4 param_2); bool __thiscall FUN_102c8b90(undefined4 *param_2); undefined4 __thiscall FUN_102ca630(undefined4 param_2); void __thiscall FUN_102ca690(int *param_2); int * __thiscall FUN_102caa30(int *param_2); int * __thiscall FUN_102caab0(int *param_2); undefined4 __thiscall FUN_102cb1b0(undefined4 param_2,int *param_3); int * __thiscall FUN_102cb2c0(int *param_2,uint *param_3); void __thiscall FUN_102cb410(uint param_2,undefined1 *param_3); int * __thiscall FUN_102cb730(int *param_2,uint *param_3); int __thiscall FUN_102cb990(int *param_2,undefined4 param_3); int __thiscall FUN_102cba40(int *param_2,undefined4 param_3); int * __thiscall FUN_102cbd20(int param_2); int __thiscall FUN_102cc240(int param_2); int __thiscall FUN_102cc2d0(int param_2); int * __thiscall FUN_102cd1d0(int *param_2); int * __thiscall FUN_102cd2a0(int *param_2); int __thiscall FUN_102cd3f0(uint *param_2); undefined4 * __thiscall FUN_102cd910(byte param_2); int __thiscall FUN_102cd9f0(byte param_2); void __thiscall FUN_102cdbe0(int param_2,int param_3,int param_4); void __thiscall FUN_102cf600(int *param_2,uint *param_3); undefined4 * __thiscall FUN_102cf660(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_102cf840(undefined4 *param_2); int * __thiscall FUN_102d0460(int *param_2); int * __thiscall FUN_102d09d0(int *param_2,int param_3); undefined4 * __thiscall FUN_102d1830(undefined4 *param_2,SCStr *param_3); int * __thiscall FUN_102d18b0(int *param_2,SCStr *param_3); void __thiscall FUN_102d1cc0(uint param_2); int * __thiscall FUN_102d20c0(int *param_2); int __thiscall FUN_102d3210(int param_2); int * __thiscall FUN_102d4060(int *param_2); int * __thiscall FUN_102d4130(int *param_2); undefined4 * __thiscall FUN_102d4460(byte param_2); float __thiscall FUN_102d48e0(int param_2); void __thiscall FUN_102d4990(undefined4 param_2,SCStr *param_3); void __thiscall FUN_102d4e30(int param_2); int * __thiscall FUN_102d6270(int *param_2); int * __thiscall FUN_102d6450(int *param_2); undefined4 * __thiscall FUN_102d7230(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_102d72b0(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_102d8240(int *param_2); void __thiscall FUN_102d8500(int *param_2); undefined4 * __thiscall FUN_102d85d0(undefined4 *param_2); undefined4 * __thiscall FUN_102d8b30(void *param_2,undefined4 *param_3); int __thiscall FUN_102d9d60(int param_2); undefined4 * __thiscall FUN_102da130(byte param_2); undefined4 * __thiscall FUN_102da1e0(byte param_2); undefined4 * __thiscall FUN_102da270(byte param_2); undefined4 * __thiscall FUN_102da330(byte param_2); undefined4 * __thiscall FUN_102da3f0(byte param_2); undefined4 * __thiscall FUN_102da4b0(byte param_2); undefined4 * __thiscall FUN_102da560(byte param_2); void __thiscall FUN_102da6b0(int param_2,int param_3,int param_4); undefined4 * __thiscall FUN_102db880(undefined4 *param_2,SCStr *param_3); int * __thiscall FUN_102dc060(int *param_2); int * __thiscall FUN_102dc120(int *param_2); int * __thiscall FUN_102dc280(int *param_2); int * __thiscall FUN_102dc3b0(undefined4 *param_2); int * __thiscall FUN_102dd0e0(int *param_2); undefined1 __thiscall FUN_102dda90(int *param_2); undefined4 * __thiscall FUN_102dddd0(undefined4 *param_2); int * __thiscall FUN_102de330(int *param_2); void __thiscall FUN_102de6a0(byte param_2,int param_3); undefined4 * __thiscall FUN_102de7c0(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_102de840(undefined4 *param_2,SCStr *param_3); undefined4 * __thiscall FUN_102de960(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_102dee50(SCStr *param_2); void __thiscall FUN_102deee0(int *param_2); undefined4 * __thiscall FUN_102df880(byte param_2); char * __thiscall FUN_102e4c30(char *param_2); undefined4 * __thiscall FUN_102e4cd0(undefined4 *param_2,SCStr *param_3); int * __thiscall FUN_102e58f0(int *param_2); int * __thiscall FUN_102e59d0(int *param_2); int * __thiscall FUN_102e5b10(int *param_2); int * __thiscall FUN_102e5c50(undefined4 *param_2); int * __thiscall FUN_102e5d90(int *param_2); int * __thiscall FUN_102e5e30(undefined4 *param_2); int * __thiscall FUN_102e6010(int *param_2); };
using namespace std;
void FUN_10256150(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10258020(undefined4 *param_1);
void __fastcall FUN_10258090(undefined4 *param_1);
void __fastcall FUN_10258100(undefined4 *param_1);
void __fastcall FUN_10258170(undefined4 *param_1);
void __fastcall FUN_102581e0(undefined4 *param_1);
void __fastcall FUN_10258250(undefined4 *param_1);
void __fastcall FUN_102582c0(undefined4 *param_1);
void __fastcall FUN_102586f0(undefined4 *param_1);
void __fastcall FUN_102589b0(int *param_1);
void __fastcall FUN_10258b60(undefined4 *param_1);
undefined4 * __fastcall FUN_1025a190(int param_1);
undefined4 * __fastcall FUN_1025a230(int param_1);
undefined4 * __fastcall FUN_1025a2d0(int param_1);
undefined4 * __fastcall FUN_1025a450(int param_1);
void __fastcall FUN_1025b340(int *param_1);
undefined4 * FUN_1025c790(undefined4 *param_1);
undefined4 * __fastcall FUN_1025d6c0(undefined4 *param_1);
void __fastcall FUN_1025d760(undefined4 *param_1);
void __fastcall FUN_1025d7d0(undefined4 *param_1);
void __fastcall FUN_1025d8b0(undefined4 *param_1);
undefined4 * FUN_1025e490(undefined4 *param_1);
void __fastcall FUN_1025f850(undefined4 *param_1);
undefined4 * FUN_10260b00(undefined4 *param_1);
void FUN_10263a50(undefined4 *param_1,undefined4 *param_2);
void FUN_10263af0(undefined4 *param_1,undefined4 *param_2);
void FUN_10264fe0(undefined4 param_1,undefined4 *param_2);
void FUN_10265050(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10266ab0(int param_1);
void __fastcall FUN_10266b80(undefined4 *param_1);
void __fastcall FUN_10266bf0(undefined4 *param_1);
void __fastcall FUN_10266c60(undefined4 *param_1);
void __fastcall FUN_10266cd0(undefined4 *param_1);
void __fastcall FUN_10266d40(undefined4 *param_1);
void __fastcall FUN_10266dd0(int param_1);
void __fastcall FUN_10266ff0(int *param_1);
void __fastcall FUN_10267070(int *param_1);
void __fastcall FUN_10267220(undefined4 *param_1);
int * __fastcall FUN_10267820(int *param_1);
void __fastcall FUN_10268e30(int *param_1);
void __fastcall FUN_10268eb0(int *param_1);
void __fastcall FUN_1026d930(undefined4 *param_1);
void __fastcall FUN_1026d9a0(undefined4 *param_1);
void __fastcall FUN_1026da80(undefined4 *param_1);
void FUN_1026e550(undefined4 *param_1,undefined4 *param_2);
void FUN_1026ea40(undefined4 param_1,undefined4 *param_2);
int __fastcall FUN_1026f720(undefined4 *param_1);
void __fastcall FUN_1026f870(undefined4 *param_1);
void __fastcall FUN_1026f8e0(undefined4 *param_1);
void __fastcall FUN_1026f950(undefined4 *param_1);
void __fastcall FUN_1026f9c0(undefined4 *param_1);
void __fastcall FUN_1026fa30(undefined4 *param_1);
void __fastcall FUN_1026faa0(undefined4 *param_1);
void __fastcall FUN_1026fc90(int param_1);
void __fastcall FUN_1026fe20(undefined4 *param_1);
void __stdcall FUN_102709c0(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_10270ca0(undefined4 *param_1);
void FUN_10272960(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 FUN_10272a10(int param_1,int *param_2);
undefined1 FUN_10272af0(undefined4 param_1,int param_2);
int * FUN_10272d20(int *param_1,int *param_2,int *param_3);
void FUN_10272f30(undefined4 *param_1,undefined4 *param_2);
void FUN_10272fd0(undefined4 *param_1,undefined4 *param_2);
void FUN_10273e10(undefined4 param_1,undefined4 *param_2);
void FUN_10273e80(undefined4 param_1,undefined4 *param_2);
undefined4 FUN_10273f70(int *param_1,int *param_2,int *param_3);
void FUN_102742c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
undefined1 FUN_10274370(int param_1,int *param_2);
undefined1 FUN_10274450(undefined4 param_1,int param_2);
int __fastcall FUN_10275320(undefined4 *param_1);
void __fastcall FUN_10275470(undefined4 *param_1);
void __fastcall FUN_102754e0(undefined4 *param_1);
void __fastcall FUN_10275550(undefined4 *param_1);
void __fastcall FUN_10275910(int *param_1);
void __fastcall FUN_102759c0(int *param_1);
undefined1 __stdcall FUN_102763b0(undefined4 param_1,int *param_2);
undefined1 __stdcall FUN_10276450(int param_1,int *param_2,int param_3,int *param_4);
void __stdcall FUN_10277630(undefined4 *param_1,undefined4 *param_2);
void __stdcall FUN_102776f0(undefined4 *param_1,int param_2);
undefined1 __stdcall FUN_10277880(int param_1);
void __fastcall FUN_10277ea0(int *param_1);
void __fastcall FUN_10277f40(undefined4 *param_1);
void __fastcall FUN_10278040(int *param_1);
void * FUN_10278390(uint param_1);
undefined4 * FUN_102788f0(undefined4 *param_1);
void FUN_1027cb60(int param_1);
int FUN_1027d2f0(undefined4 param_1);
void __fastcall FUN_1027f4a0(undefined4 *param_1);
void __fastcall FUN_1027f510(undefined4 *param_1);
void __fastcall FUN_1027f580(undefined4 *param_1);
void __fastcall FUN_1027f5f0(undefined4 *param_1);
void __fastcall FUN_1027f660(int *param_1);
void __fastcall FUN_1027f6c0(int *param_1);
void __fastcall FUN_1027f720(int *param_1);
void __fastcall FUN_1027f8b0(undefined4 *param_1);
void __fastcall FUN_1027f970(undefined4 *param_1);
void __fastcall FUN_1027fa50(undefined4 *param_1);
void __fastcall FUN_10281490(int *param_1);
undefined4 * FUN_10282a40(undefined4 *param_1,char *param_2);
void __fastcall FUN_10282c40(int param_1);
void __fastcall FUN_10282f10(int param_1);
void __fastcall FUN_10283480(int param_1);
int __fastcall FUN_10283860(int param_1);
void FUN_10283de0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void FUN_102840e0(undefined4 *param_1,undefined4 *param_2);
void FUN_10284d10(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10285970(undefined4 *param_1);
void __fastcall FUN_102859e0(undefined4 *param_1);
void __fastcall FUN_10285a50(undefined4 *param_1);
void __fastcall FUN_10286f30(int *param_1);
void * FUN_102871c0(uint param_1);
void __fastcall FUN_10287250(int *param_1);
undefined4 * __stdcall FUN_10287c30(undefined4 *param_1);
void FUN_10288050(void);
void __fastcall FUN_10289de0(int param_1);
void __fastcall FUN_10289f00(int param_1);
void FUN_1028a950(void);
void FUN_1028c4d0(undefined4 param_1,int param_2);
void FUN_1028c900(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_1028d710(undefined4 *param_1);
void __fastcall FUN_1028d780(undefined4 *param_1);
void __fastcall FUN_1028d7f0(undefined4 *param_1);
void __fastcall FUN_1028d860(undefined4 *param_1);
void __fastcall FUN_1028daf0(int param_1);
void __fastcall FUN_1028de00(undefined4 *param_1);
bool FUN_1028e330(undefined4 *param_1,undefined4 *param_2);
undefined4
__stdcall FUN_1028f950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13);
void * FUN_10290090(uint param_1);
undefined4 * FUN_102907c0(undefined4 *param_1,int *param_2);
undefined4 * __stdcall FUN_10291060(undefined4 *param_1,int *param_2);
undefined4 __fastcall FUN_10291e90(int *param_1);
void __stdcall FUN_10291fa0(undefined4 *param_1);
undefined4 __stdcall FUN_10292010(undefined4 param_1);
undefined4 * FUN_10292c70(undefined4 *param_1);
undefined4 __stdcall FUN_10293020(undefined4 param_1,undefined4 param_2);
void __fastcall FUN_102964c0(undefined4 *param_1);
void __fastcall FUN_10296750(undefined4 *param_1);
void __fastcall FUN_10298890(int param_1);
void __fastcall FUN_102988f0(int param_1);
void __fastcall FUN_10298960(int param_1);
void __fastcall FUN_102989c0(int param_1);
void __fastcall FUN_10298a20(int param_1);
void __fastcall FUN_10298a80(int param_1);
void __fastcall FUN_10298b30(int param_1);
void * FUN_10299500(uint param_1);
void __fastcall FUN_10299b60(int param_1);
void __fastcall FUN_1029b6d0(int param_1);
void __fastcall FUN_1029d070(undefined4 *param_1);
undefined4 * FUN_1029d380(undefined4 *param_1,undefined4 *param_2);
undefined4 * FUN_1029d610(undefined4 *param_1);
void __fastcall FUN_1029d8a0(int *param_1);
int __fastcall FUN_1029dab0(int param_1);
void FUN_1029dd80(int *param_1,int param_2);
void __fastcall FUN_1029e050(undefined4 *param_1);
undefined4 * FUN_1029e4b0(undefined4 *param_1);
void FUN_1029e960(int *param_1,char *param_2);
void __fastcall FUN_1029f430(undefined4 *param_1);
void __fastcall FUN_1029f5a0(undefined4 *param_1);
uint FUN_102a14a0(int *param_1);
void __fastcall FUN_102a1790(int param_1);
int * FUN_102a2f00(int *param_1,int *param_2,int *param_3);
void FUN_102a2fd0(int *param_1,int *param_2);
void FUN_102a30a0(undefined4 *param_1,undefined4 *param_2);
void FUN_102a3140(undefined4 *param_1,undefined4 *param_2);
int __stdcall FUN_102a5020(int param_1,int param_2,int param_3);
int FUN_102a5110(int param_1,int param_2,int param_3);
int * FUN_102a52e0(int *param_1,int *param_2,int *param_3);
void FUN_102a5810(undefined4 param_1,int *param_2,int *param_3);
void FUN_102a5ab0(undefined4 param_1,int param_2);
void FUN_102a5b60(undefined4 param_1,undefined4 *param_2);
void FUN_102a5bd0(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_102a8f80(undefined4 *param_1);
void __fastcall FUN_102a8ff0(undefined4 *param_1);
void __fastcall FUN_102a9060(undefined4 *param_1);
void __fastcall FUN_102a90d0(undefined4 *param_1);
void __fastcall FUN_102a9140(undefined4 *param_1);
void __fastcall FUN_102a91b0(undefined4 *param_1);
void __fastcall FUN_102a9220(undefined4 *param_1);
void __fastcall FUN_102a9290(undefined4 *param_1);
void __fastcall FUN_102a9300(undefined4 *param_1);
void __fastcall FUN_102a9370(undefined4 *param_1);
void __fastcall FUN_102a93e0(undefined4 *param_1);
void __fastcall FUN_102a9450(undefined4 *param_1);
void __fastcall FUN_102a94c0(int *param_1);
void __fastcall FUN_102a9520(int *param_1);
void __fastcall FUN_102a99b0(int *param_1);
void __fastcall FUN_102a9b00(int *param_1);
void __fastcall FUN_102a9bb0(int *param_1);
void __fastcall FUN_102a9cf0(int param_1);
void __fastcall FUN_102a9da0(undefined4 *param_1);
void __fastcall FUN_102a9e70(undefined4 *param_1);
void __stdcall FUN_102ac980(int *param_1,int *param_2);
void __fastcall FUN_102ad4d0(int *param_1);
void __fastcall FUN_102ad570(int *param_1);
void __fastcall FUN_102ad6c0(int *param_1);
void __fastcall FUN_102ad740(int *param_1);
int * __stdcall FUN_102ad7c0(int *param_1,int *param_2,int *param_3);
void FUN_102ada10(int param_1,int param_2);
void FUN_102adb60(int param_1,int param_2);
void * FUN_102ae180(uint param_1);
void * FUN_102ae200(uint param_1);
void * FUN_102ae270(uint param_1);
undefined4 * FUN_102ae440(undefined4 *param_1,undefined4 param_2);
void FUN_102b1f60(undefined4 param_1);
void FUN_102b2000(undefined4 param_1);
void __fastcall FUN_102b4fb0(int param_1);
void __fastcall FUN_102b5010(int param_1);
void __fastcall FUN_102b7800(int param_1);
void __fastcall FUN_102b7c50(int param_1);
void __fastcall FUN_102b7ed0(int param_1);
void __stdcall FUN_102b8490(int param_1);
void __fastcall FUN_102b8590(int param_1);
undefined4 * FUN_102ba4d0(undefined4 *param_1);
undefined1 FUN_102bb280(int *param_1);
void __fastcall FUN_102bba10(int param_1);
undefined4 * FUN_102bc5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __stdcall FUN_102bcb30(undefined4 param_1,int *param_2);
void __stdcall FUN_102bcbe0(undefined4 param_1,int *param_2);
void FUN_102bcd50(undefined4 param_1,int param_2);
undefined4 * FUN_102beb10(undefined4 *param_1);
void __fastcall FUN_102c0350(undefined4 *param_1);
void __fastcall FUN_102c03d0(undefined4 *param_1);
undefined4 * FUN_102c0620(undefined4 *param_1);
void __fastcall FUN_102c15f0(undefined4 *param_1);
void __fastcall FUN_102c1660(int *param_1);
void __fastcall FUN_102c1750(undefined4 *param_1);
undefined4 * FUN_102c1e60(undefined4 *param_1);
void __stdcall FUN_102c20b0(int *param_1);
undefined4 * __fastcall FUN_102c3e30(undefined4 *param_1);
void __fastcall FUN_102c44d0(undefined4 *param_1);
void __fastcall FUN_102c45c0(undefined4 *param_1);
void __fastcall FUN_102c46b0(undefined4 *param_1);
void __fastcall FUN_102c4720(undefined4 *param_1);
void __fastcall FUN_102c4790(undefined4 *param_1);
void __fastcall FUN_102c4800(undefined4 *param_1);
void __fastcall FUN_102c4870(undefined4 *param_1);
void __fastcall FUN_102c48e0(undefined4 *param_1);
void __fastcall FUN_102c4950(undefined4 *param_1);
void __fastcall FUN_102c49c0(undefined4 *param_1);
void __fastcall FUN_102c4a30(int *param_1);
void __fastcall FUN_102c4a90(int *param_1);
void __fastcall FUN_102c4c10(undefined4 *param_1);
void __fastcall FUN_102c4de0(undefined4 *param_1);
void __fastcall FUN_102c6b80(int param_1);
undefined4 * FUN_102c6bf0(undefined4 *param_1,int param_2);
void __fastcall FUN_102c8500(int param_1);
void __fastcall FUN_102c85b0(int param_1);
int * FUN_102c8c20(int *param_1,int *param_2);
void __stdcall FUN_102c8e30(int param_1);
bool __fastcall FUN_102c8fa0(int param_1);
void FUN_102cb090(undefined4 *param_1,undefined4 *param_2);
void FUN_102cb340(undefined4 param_1,int param_2);
void FUN_102cbb70(undefined4 param_1,int param_2);
void FUN_102cbbe0(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_102cc7b0(int *param_1);
void __fastcall FUN_102cc870(undefined4 *param_1);
void __fastcall FUN_102cc960(undefined4 *param_1);
void __fastcall FUN_102cca50(undefined4 *param_1);
void __fastcall FUN_102ccac0(undefined4 *param_1);
void __fastcall FUN_102ccb30(undefined4 *param_1);
void __fastcall FUN_102cccd0(int param_1);
void __fastcall FUN_102cce40(int param_1);
void __fastcall FUN_102cceb0(int *param_1);
void __fastcall FUN_102ce270(int *param_1);
undefined4 * FUN_102cf370(undefined4 *param_1,int param_2);
void __fastcall FUN_102cf520(int param_1);
void __fastcall FUN_102cfe50(int param_1);
void __fastcall FUN_102cffa0(int param_1);
void __fastcall FUN_102d0050(int param_1);
void __fastcall FUN_102d0c20(int param_1);
int * __stdcall FUN_102d0e60(int *param_1,int *param_2);
undefined4 * __stdcall FUN_102d0fe0(undefined4 *param_1,int *param_2);
void __stdcall FUN_102d11b0(int param_1);
void FUN_102d29a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int __fastcall FUN_102d38b0(undefined4 *param_1);
void __fastcall FUN_102d3a00(undefined4 *param_1);
void __fastcall FUN_102d3a70(undefined4 *param_1);
void __fastcall FUN_102d3ae0(undefined4 *param_1);
void __fastcall FUN_102d3c00(int param_1);
void __fastcall FUN_102d3c70(int *param_1);
void __fastcall FUN_102d3d50(int *param_1);
void __fastcall FUN_102d3db0(int *param_1);
void __fastcall FUN_102d3ec0(undefined4 *param_1);
void __fastcall FUN_102d4ed0(float *param_1);
void __fastcall FUN_102d5010(int *param_1);
void __fastcall FUN_102d5080(int *param_1);
void __fastcall FUN_102d5420(int param_1);
void __fastcall FUN_102d54b0(int *param_1);
undefined4 *
FUN_102d5690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
char * FUN_102d5b40(char *param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_102d87b0(int param_1);
void __fastcall FUN_102d95b0(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_102d9690(int *param_1);
void __fastcall FUN_102d9710(undefined4 *param_1);
void __fastcall FUN_102d97e0(undefined4 *param_1);
void __fastcall FUN_102d9870(undefined4 *param_1);
void __fastcall FUN_102d98e0(undefined4 *param_1);
void __fastcall FUN_102d9960(undefined4 *param_1);
void __fastcall FUN_102d9a10(undefined4 *param_1);
void __fastcall FUN_102d9ac0(undefined4 *param_1);
void __fastcall FUN_102d9b50(undefined4 *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_102da960(int *param_1);
void * FUN_102daa80(uint param_1);
void __fastcall FUN_102dcbf0(undefined4 *param_1);
void __fastcall FUN_102dcc60(undefined4 *param_1);
void __fastcall FUN_102dccd0(undefined4 *param_1);
void __fastcall FUN_102dcd40(int *param_1);
void FUN_102dd810(void);
undefined4 * __stdcall FUN_102dd8c0(undefined4 *param_1);
undefined4 * FUN_102dd9b0(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_102de430(undefined4 *param_1);
void __stdcall FUN_102de540(undefined1 *param_1);
undefined1 __stdcall FUN_102decb0(undefined1 *param_1);
undefined1 __stdcall FUN_102deda0(undefined1 *param_1,undefined1 *param_2);
void __fastcall FUN_102df780(undefined4 *param_1);
int * __stdcall FUN_102df930(int *param_1,undefined4 param_2,int *param_3);
int * __stdcall FUN_102dfb30(int *param_1,undefined4 param_2,int *param_3);
int * __stdcall FUN_102dfc20(int *param_1,undefined4 param_2,int *param_3);
int * __stdcall FUN_102dfd10(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
                  undefined4 param_6);
int * __stdcall FUN_102dfe90(int *param_1,undefined4 param_2,int *param_3);
undefined4 * __stdcall FUN_102e0090(undefined4 *param_1,int *param_2,int *param_3);
int * __stdcall FUN_102e0270(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4);
int * __stdcall FUN_102e0360(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4);
int * __stdcall FUN_102e04c0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4);
int * __stdcall FUN_102e09c0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int * __stdcall FUN_102e0af0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int * __stdcall FUN_102e0d40(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int * __stdcall FUN_102e0f90(int *param_1,undefined4 param_2,int *param_3);
int * __stdcall FUN_102e1190(int *param_1);
void FUN_102e1310(int *param_1,int *param_2,int *param_3);
int * __stdcall FUN_102e14c0(int *param_1,undefined4 param_2);
int * __stdcall FUN_102e1690(int *param_1,int *param_2);
int * __stdcall FUN_102e1780(int *param_1);
int * __stdcall FUN_102e1940(int *param_1,undefined4 param_2,int *param_3);
int * __stdcall FUN_102e1b40(int *param_1,undefined4 param_2);
int * __stdcall FUN_102e1d80(int *param_1,undefined4 param_2,int *param_3);
int * __stdcall FUN_102e1f80(int *param_1,undefined4 param_2);
int * __stdcall FUN_102e2140(int *param_1,undefined4 param_2,int *param_3);
int * FUN_102e2230(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_102e23b0(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_102e2560(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_102e2710(int *param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5);
int * FUN_102e2a10(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_102e2b90(int *param_1);
int * FUN_102e2d60(int *param_1,undefined4 param_2);
int * FUN_102e2f40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int * FUN_102e3200(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_102e3440(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
int * FUN_102e3660(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int * FUN_102e3820(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int * FUN_102e39e0(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_102e3b60(int *param_1);
int * FUN_102e3c70(int *param_1,undefined4 param_2);
undefined4 * FUN_102e3db0(undefined4 *param_1);
undefined4 * FUN_102e3e40(undefined4 *param_1);
int * FUN_102e3ed0(int *param_1,undefined4 param_2);
int * FUN_102e4100(int *param_1);
int * FUN_102e4240(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_102e43c0(int *param_1,undefined4 param_2);
int * FUN_102e4570(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_102e46f0(int *param_1,undefined4 param_2);
int * FUN_102e4830(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_102e49e0(int *param_1,int param_2,undefined4 param_3);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_102e4df0(int *param_1,float param_2);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_102e4eb0(int *param_1,float param_2);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_102e4f40(int *param_1,float param_2);
// Reference entry 10256150; body size 84 bytes.
#line 1 "ENTRY_10256150"

void FUN_10256150(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11511cc0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10256720; body size 87 bytes.
#line 1 "ENTRY_10256720"

int __thiscall Recovered_Bulk::FUN_10256720(int *param_2)
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


// Reference entry 10256790; body size 96 bytes.
#line 1 "ENTRY_10256790"

int __thiscall Recovered_Bulk::FUN_10256790(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11511d7d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10256810; body size 96 bytes.
#line 1 "ENTRY_10256810"

int __thiscall Recovered_Bulk::FUN_10256810(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11511dbd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10256890; body size 87 bytes.
#line 1 "ENTRY_10256890"

int __thiscall Recovered_Bulk::FUN_10256890(int *param_2)
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


// Reference entry 10256900; body size 96 bytes.
#line 1 "ENTRY_10256900"

int __thiscall Recovered_Bulk::FUN_10256900(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11511dfd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10256980; body size 96 bytes.
#line 1 "ENTRY_10256980"

int __thiscall Recovered_Bulk::FUN_10256980(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11511e3d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10256a00; body size 87 bytes.
#line 1 "ENTRY_10256a00"

int __thiscall Recovered_Bulk::FUN_10256a00(int *param_2)
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


// Reference entry 10256a70; body size 96 bytes.
#line 1 "ENTRY_10256a70"

int __thiscall Recovered_Bulk::FUN_10256a70(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11511e7d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10256af0; body size 96 bytes.
#line 1 "ENTRY_10256af0"

int __thiscall Recovered_Bulk::FUN_10256af0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11511ebd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10256de0; body size 87 bytes.
#line 1 "ENTRY_10256de0"

int __thiscall Recovered_Bulk::FUN_10256de0(int *param_2)
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


// Reference entry 10256e50; body size 96 bytes.
#line 1 "ENTRY_10256e50"

int __thiscall Recovered_Bulk::FUN_10256e50(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11511fed);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10256ed0; body size 96 bytes.
#line 1 "ENTRY_10256ed0"

int __thiscall Recovered_Bulk::FUN_10256ed0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151202d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10257470; body size 93 bytes.
#line 1 "ENTRY_10257470"

int __thiscall Recovered_Bulk::FUN_10257470(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115120ad);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102574f0; body size 87 bytes.
#line 1 "ENTRY_102574f0"

int __thiscall Recovered_Bulk::FUN_102574f0(int *param_2)
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


// Reference entry 10257560; body size 93 bytes.
#line 1 "ENTRY_10257560"

int __thiscall Recovered_Bulk::FUN_10257560(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115120ed);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102575e0; body size 87 bytes.
#line 1 "ENTRY_102575e0"

int __thiscall Recovered_Bulk::FUN_102575e0(int *param_2)
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


// Reference entry 10257650; body size 93 bytes.
#line 1 "ENTRY_10257650"

int __thiscall Recovered_Bulk::FUN_10257650(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151212d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102576d0; body size 87 bytes.
#line 1 "ENTRY_102576d0"

int __thiscall Recovered_Bulk::FUN_102576d0(int *param_2)
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


// Reference entry 10257740; body size 93 bytes.
#line 1 "ENTRY_10257740"

int __thiscall Recovered_Bulk::FUN_10257740(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151216d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102577c0; body size 87 bytes.
#line 1 "ENTRY_102577c0"

int __thiscall Recovered_Bulk::FUN_102577c0(int *param_2)
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


// Reference entry 10257830; body size 93 bytes.
#line 1 "ENTRY_10257830"

int __thiscall Recovered_Bulk::FUN_10257830(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115121ad);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10257ba0; body size 156 bytes.
#line 1 "ENTRY_10257ba0"

undefined4 * __thiscall Recovered_Bulk::FUN_10257ba0(void)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 uVar2;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115122bd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppPurchaseCallback);
  param_1[0xb] = 0;
  local_8 = (undefined4)(2);
  if (in_stack_00000028 != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*in_stack_00000028)(param_1 + 2,uVar1));
    param_1[0xb] = uVar2;
    if (in_stack_00000028 != (int *)0x0) {
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10258020; body size 76 bytes.
#line 1 "ENTRY_10258020"

void __fastcall FUN_10258020(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115123a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10258090; body size 76 bytes.
#line 1 "ENTRY_10258090"

void __fastcall FUN_10258090(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115123d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10258100; body size 76 bytes.
#line 1 "ENTRY_10258100"

void __fastcall FUN_10258100(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11512400);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10258170; body size 76 bytes.
#line 1 "ENTRY_10258170"

void __fastcall FUN_10258170(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11512430);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102581e0; body size 76 bytes.
#line 1 "ENTRY_102581e0"

void __fastcall FUN_102581e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11512460);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10258250; body size 76 bytes.
#line 1 "ENTRY_10258250"

void __fastcall FUN_10258250(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11512490);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102582c0; body size 76 bytes.
#line 1 "ENTRY_102582c0"

void __fastcall FUN_102582c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115124c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102586f0; body size 92 bytes.
#line 1 "ENTRY_102586f0"

void __fastcall FUN_102586f0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115125b0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_1[1] != 0) {
    thunk_FUN_102560a0(*param_1,param_1[1] + 0x10,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    if (param_1[1] != 0) {
      thunk_FUN_1148a50e(param_1[1],0x20);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102589b0; body size 96 bytes.
#line 1 "ENTRY_102589b0"

void __fastcall FUN_102589b0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10254af0(*param_1,param_1[1],param_1);
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


// Reference entry 10258b60; body size 143 bytes.
#line 1 "ENTRY_10258b60"

void __fastcall FUN_10258b60(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11512640);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppProductCallback);
  piVar1 = (int *)((int *)param_1[0xd]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xb]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 2);
    param_1[0xb] = 0;
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10258e90; body size 81 bytes.
#line 1 "ENTRY_10258e90"

int * __thiscall Recovered_Bulk::FUN_10258e90(int *param_2)
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


// Reference entry 10259860; body size 82 bytes.
#line 1 "ENTRY_10259860"

undefined4 * __thiscall Recovered_Bulk::FUN_10259860(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_10254af0(*puVar1,param_1[3],puVar1);
  param_1[3] = *puVar1;
  thunk_FUN_102589b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102599d0; body size 106 bytes.
#line 1 "ENTRY_102599d0"

undefined4 * __thiscall Recovered_Bulk::FUN_102599d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11512830);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10259e90; body size 164 bytes.
#line 1 "ENTRY_10259e90"

undefined4 * __thiscall Recovered_Bulk::FUN_10259e90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115128c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppProductCallback);
  piVar1 = (int *)((int *)param_1[0xd]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0xb]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 2);
    param_1[0xb] = 0;
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10259f70; body size 84 bytes.
#line 1 "ENTRY_10259f70"

undefined4 * __thiscall Recovered_Bulk::FUN_10259f70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppPurchaseCallback);
  piVar1 = (int *)((int *)param_1[0xb]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 2);
    param_1[0xb] = 0;
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10259fe0; body size 81 bytes.
#line 1 "ENTRY_10259fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10259fe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppPurchaseManager);
  thunk_FUN_10254f10(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x20);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025a0e0; body size 104 bytes.
#line 1 "ENTRY_1025a0e0"

void __thiscall Recovered_Bulk::FUN_1025a0e0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10254af0(*param_1,param_1[1],param_1);
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


// Reference entry 1025a190; body size 127 bytes.
#line 1 "ENTRY_1025a190"

undefined4 * __fastcall FUN_1025a190(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11512965);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;
  local_8 = (undefined4)(1);
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 1025a230; body size 127 bytes.
#line 1 "ENTRY_1025a230"

undefined4 * __fastcall FUN_1025a230(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115129a5);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;
  local_8 = (undefined4)(1);
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 1025a2d0; body size 127 bytes.
#line 1 "ENTRY_1025a2d0"

undefined4 * __fastcall FUN_1025a2d0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115129e5);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;
  local_8 = (undefined4)(1);
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 1025a450; body size 127 bytes.
#line 1 "ENTRY_1025a450"

undefined4 * __fastcall FUN_1025a450(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11512a85);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x30));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[0xb] = 0;
  local_8 = (undefined4)(1);
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    uVar3 = (undefined4)((**(code **)**(undefined4 **)(param_1 + 0x2c))(puVar2 + 2,uVar1));
    puVar2[0xb] = uVar3;
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 1025b340; body size 96 bytes.
#line 1 "ENTRY_1025b340"

void __fastcall FUN_1025b340(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10254af0(*param_1,param_1[1],param_1);
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


// Reference entry 1025c790; body size 98 bytes.
#line 1 "ENTRY_1025c790"

undefined4 * FUN_1025c790(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11512f10);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1025c5c0(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1025d6c0; body size 94 bytes.
#line 1 "ENTRY_1025d6c0"

undefined4 * __fastcall FUN_1025d6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppMessaging);
  param_1[2] = 0;
  param_1[3] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 1025d760; body size 76 bytes.
#line 1 "ENTRY_1025d760"

void __fastcall FUN_1025d760(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115131e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1025d7d0; body size 76 bytes.
#line 1 "ENTRY_1025d7d0"

void __fastcall FUN_1025d7d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11513210);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1025d8b0; body size 110 bytes.
#line 1 "ENTRY_1025d8b0"

void __fastcall FUN_1025d8b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11513270);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppMessaging);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1025d940; body size 81 bytes.
#line 1 "ENTRY_1025d940"

int * __thiscall Recovered_Bulk::FUN_1025d940(int *param_2)
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


// Reference entry 1025da50; body size 131 bytes.
#line 1 "ENTRY_1025da50"

undefined4 * __thiscall Recovered_Bulk::FUN_1025da50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115132a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInAppMessaging);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1025dff0; body size 80 bytes.
#line 1 "ENTRY_1025dff0"

void __thiscall Recovered_Bulk::FUN_1025dff0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xc));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 1025e410; body size 102 bytes.
#line 1 "ENTRY_1025e410"

undefined4 * __thiscall Recovered_Bulk::FUN_1025e410(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x14));
  if (piVar1 == (int *)0x0) {
    *param_2 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCTime);
    piVar1[2] = *(int *)(param_1 + 8);
    piVar1[3] = *(int *)(param_1 + 0xc);
    piVar1[4] = *(int *)(param_1 + 0x10);
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1025e490; body size 96 bytes.
#line 1 "ENTRY_1025e490"

undefined4 * FUN_1025e490(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x14));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCTime);
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1025e5f0; body size 93 bytes.
#line 1 "ENTRY_1025e5f0"

undefined4 __thiscall Recovered_Bulk::FUN_1025e5f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  iVar3 = (int)(*(int *)(param_1 + 8));
  iVar4 = (int)(*(int *)(param_1 + 0x10));
  piVar5 = (int *)((int *)*param_2);
  iVar6 = (int)((**(code **)(*piVar5 + 0x1c))());
  iVar7 = (int)((**(code **)(*piVar5 + 0x30))());
  iVar8 = (int)((**(code **)(*piVar5 + 0x38))());
  iVar8 = (int)(iVar8 + (iVar7 + iVar6 * 0x3c) * 0x3c);
  return (undefined4)(((uint)((int3)((uint)iVar8 >> 8)) << 8 | (uint)(iVar4 + (iVar2 + (iVar1 * 0x10 - iVar3) * 4) * 0x3c < iVar8)));
}


// Reference entry 1025ea30; body size 96 bytes.
#line 1 "ENTRY_1025ea30"

int * __thiscall Recovered_Bulk::FUN_1025ea30(int *param_2,uint *param_3)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_2 = (int)(0);
  param_2[1] = 0;
  uVar3 = (uint)(*param_1);
  uVar4 = (uint)(*param_3);
  if ((param_3[1] + uVar4) - 1 < (param_1[1] - 1) + uVar3) {
    uVar1 = (uint)(param_3[1]);
    uVar2 = (uint)(param_1[1]);
    *param_2 = (int)(param_3[1] + uVar4);
    param_2[1] = ((uVar3 - uVar4) - uVar1) + uVar2;
    uVar3 = (uint)(*param_1);
    uVar4 = (uint)(*param_3);
  }
  param_1[1] = -(uint)(uVar3 < uVar4) & uVar4 - uVar3;
  return (int *)(param_2);
}


// Reference entry 1025f850; body size 76 bytes.
#line 1 "ENTRY_1025f850"

void __fastcall FUN_1025f850(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11513700);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102607c0; body size 79 bytes.
#line 1 "ENTRY_102607c0"

void __thiscall Recovered_Bulk::FUN_102607c0(int param_2)
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


// Reference entry 10260840; body size 83 bytes.
#line 1 "ENTRY_10260840"

void __thiscall Recovered_Bulk::FUN_10260840(int *param_2)
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


// Reference entry 10260b00; body size 82 bytes.
#line 1 "ENTRY_10260b00"

undefined4 * FUN_10260b00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0xc));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar1[2] = 0;
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCShareNameInput);
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102627b0; body size 72 bytes.
#line 1 "ENTRY_102627b0"

void __thiscall Recovered_Bulk::FUN_102627b0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 uVar2;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0xd4))(param_1 + 0xc,param_2);
  iVar1 = (int)(**(int **)(param_1 + 0x14));
  uVar2 = (undefined1)((**(code **)(**(int **)(param_1 + 0x18) + 0x30))());
  (**(code **)(iVar1 + 0xe4))(param_1 + 0x10,uVar2);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  return;
}


// Reference entry 10263630; body size 91 bytes.
#line 1 "ENTRY_10263630"

int * __thiscall Recovered_Bulk::FUN_10263630(int *param_2)
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


// Reference entry 102636f0; body size 91 bytes.
#line 1 "ENTRY_102636f0"

int * __thiscall Recovered_Bulk::FUN_102636f0(int *param_2)
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


// Reference entry 10263770; body size 91 bytes.
#line 1 "ENTRY_10263770"

int * __thiscall Recovered_Bulk::FUN_10263770(int *param_2)
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


// Reference entry 10263a50; body size 111 bytes.
#line 1 "ENTRY_10263a50"

void FUN_10263a50(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11514110);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10263af0; body size 111 bytes.
#line 1 "ENTRY_10263af0"

void FUN_10263af0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11514140);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10264fe0; body size 84 bytes.
#line 1 "ENTRY_10264fe0"

void FUN_10264fe0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11514480);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10265050; body size 84 bytes.
#line 1 "ENTRY_10265050"

void FUN_10265050(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115144b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10266ab0; body size 84 bytes.
#line 1 "ENTRY_10266ab0"

void __fastcall FUN_10266ab0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11514890);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10266b80; body size 76 bytes.
#line 1 "ENTRY_10266b80"

void __fastcall FUN_10266b80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115148c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10266bf0; body size 76 bytes.
#line 1 "ENTRY_10266bf0"

void __fastcall FUN_10266bf0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115148f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10266c60; body size 76 bytes.
#line 1 "ENTRY_10266c60"

void __fastcall FUN_10266c60(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11514920);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10266cd0; body size 76 bytes.
#line 1 "ENTRY_10266cd0"

void __fastcall FUN_10266cd0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11514950);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10266d40; body size 76 bytes.
#line 1 "ENTRY_10266d40"

void __fastcall FUN_10266d40(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11514980);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10266dd0; body size 84 bytes.
#line 1 "ENTRY_10266dd0"

void __fastcall FUN_10266dd0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115149b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0xc));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10266ff0; body size 96 bytes.
#line 1 "ENTRY_10266ff0"

void __fastcall FUN_10266ff0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263a50(*param_1,param_1[1],param_1);
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


// Reference entry 10267070; body size 96 bytes.
#line 1 "ENTRY_10267070"

void __fastcall FUN_10267070(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263af0(*param_1,param_1[1],param_1);
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


// Reference entry 10267220; body size 324 bytes.
#line 1 "ENTRY_10267220"

void __fastcall FUN_10267220(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11514a70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLandingPagePremiumSonosRadio);
  param_1[2] = (uint)&ghidra_vftable_SCLandingPagePremiumSonosRadio;
  param_1[0x12] = (uint)&ghidra_vftable_SCLandingPagePremiumSonosRadio;
  piVar1 = (int *)((int *)param_1[0x20]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x1e]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x1c]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x1a]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x18]);
  local_8 = (undefined4)(4);
  if (piVar1 != (int *)0x0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x16]);
  local_8 = (undefined4)(5);
  if (piVar1 != (int *)0x0) {
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x12] = (uint)&ghidra_vftable_SCIActionDelegateCB;
  piVar1 = (int *)((int *)param_1[0x14]);
  local_8 = (undefined4)(6);
  if (piVar1 != (int *)0x0) {
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_10267120();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10267820; body size 116 bytes.
#line 1 "ENTRY_10267820"

int * __fastcall FUN_10267820(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)((int *)*param_1);
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = (int)(piVar2[2]);
    return (int *)(param_1);
  }
  iVar3 = (int)(*piVar2);
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar3 + 8) + 0xd));
    iVar4 = (int)(*(int *)(iVar3 + 8));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar4 + 8) + 0xd));
      iVar3 = (int)(iVar4);
      iVar4 = (int)(*(int *)(iVar4 + 8));
    }
    *param_1 = (int)(iVar3);
  }
  else {
    cVar1 = (char)(*(char *)(piVar2[1] + 0xd));
    piVar5 = (int *)((int *)piVar2[1]);
    while ((cVar1 == '\0' && (piVar2 == (int *)*piVar5))) {
      *param_1 = (int)((int)piVar5);
      cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
      piVar2 = (int *)(piVar5);
      piVar5 = (int *)((int *)piVar5[1]);
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)((int)piVar5);
      return (int *)(param_1);
    }
  }
  return (int *)(param_1);
}


// Reference entry 10267fb0; body size 106 bytes.
#line 1 "ENTRY_10267fb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10267fb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11514c10);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10268040; body size 106 bytes.
#line 1 "ENTRY_10268040"

undefined4 * __thiscall Recovered_Bulk::FUN_10268040(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11514c40);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102680d0; body size 107 bytes.
#line 1 "ENTRY_102680d0"

int __thiscall Recovered_Bulk::FUN_102680d0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11514c70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0xc));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10268400; body size 104 bytes.
#line 1 "ENTRY_10268400"

void __thiscall Recovered_Bulk::FUN_10268400(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263a50(*param_1,param_1[1],param_1);
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


// Reference entry 10268490; body size 104 bytes.
#line 1 "ENTRY_10268490"

void __thiscall Recovered_Bulk::FUN_10268490(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263af0(*param_1,param_1[1],param_1);
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


// Reference entry 10268640; body size 105 bytes.
#line 1 "ENTRY_10268640"

void __thiscall Recovered_Bulk::FUN_10268640(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11514f30);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 0xc));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10268e30; body size 96 bytes.
#line 1 "ENTRY_10268e30"

void __fastcall FUN_10268e30(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263a50(*param_1,param_1[1],param_1);
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


// Reference entry 10268eb0; body size 96 bytes.
#line 1 "ENTRY_10268eb0"

void __fastcall FUN_10268eb0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263af0(*param_1,param_1[1],param_1);
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


// Reference entry 1026d930; body size 76 bytes.
#line 1 "ENTRY_1026d930"

void __fastcall FUN_1026d930(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11515d50);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026d9a0; body size 76 bytes.
#line 1 "ENTRY_1026d9a0"

void __fastcall FUN_1026d9a0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11515d80);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026da80; body size 110 bytes.
#line 1 "ENTRY_1026da80"

void __fastcall FUN_1026da80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11515de0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLogging);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026db10; body size 81 bytes.
#line 1 "ENTRY_1026db10"

int * __thiscall Recovered_Bulk::FUN_1026db10(int *param_2)
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


// Reference entry 1026dc20; body size 131 bytes.
#line 1 "ENTRY_1026dc20"

undefined4 * __thiscall Recovered_Bulk::FUN_1026dc20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11515e10);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLogging);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1026e0e0; body size 80 bytes.
#line 1 "ENTRY_1026e0e0"

void __thiscall Recovered_Bulk::FUN_1026e0e0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xc));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 1026e3a0; body size 91 bytes.
#line 1 "ENTRY_1026e3a0"

int * __thiscall Recovered_Bulk::FUN_1026e3a0(int *param_2)
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


// Reference entry 1026e420; body size 91 bytes.
#line 1 "ENTRY_1026e420"

int * __thiscall Recovered_Bulk::FUN_1026e420(int *param_2)
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


// Reference entry 1026e550; body size 111 bytes.
#line 1 "ENTRY_1026e550"

void FUN_1026e550(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11515f30);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026ea40; body size 84 bytes.
#line 1 "ENTRY_1026ea40"

void FUN_1026ea40(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11515fa0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026f220; body size 93 bytes.
#line 1 "ENTRY_1026f220"

int __thiscall Recovered_Bulk::FUN_1026f220(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115160ad);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 1026f720; body size 236 bytes.
#line 1 "ENTRY_1026f720"

int __fastcall FUN_1026f720(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11516240);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  iVar5 = (int)(thunk_FUN_101dcfc0(&local_18));
  if (local_18 != 0) {
    iVar5 = (int)(thunk_FUN_103d6930(param_1[2]));
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    piVar3 = (int *)(local_14 + 1);
    iVar2 = (int)(*piVar3);
    iVar5 = (int)(*piVar3);
    *piVar3 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      piVar3 = (int *)(local_14 + 2);
      iVar2 = (int)(*piVar3);
      iVar5 = (int)(*piVar3);
      *piVar3 = (int)(iVar2 + -1);
      UNLOCK();
      if (iVar2 + -1 == 0) {
        iVar5 = (int)((**(code **)(*local_14 + 4))());
      }
    }
  }
  piVar3 = (int *)((int *)param_1[0xf]);
  if (piVar3 != (int *)0x0) {
    iVar5 = (int)((**(code **)(*piVar3 + 0x10))(piVar3 != (int *)(param_1) + 6));
    param_1[0xf] = 0;
  }
  piVar3 = (int *)((int *)param_1[5]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 2);
    iVar2 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar2 == 1) {
      iVar5 = (int)((**(code **)(*piVar3 + 4))());
    }
  }
  piVar3 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return (int)(iVar5);
}


// Reference entry 1026f870; body size 76 bytes.
#line 1 "ENTRY_1026f870"

void __fastcall FUN_1026f870(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11516270);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026f8e0; body size 76 bytes.
#line 1 "ENTRY_1026f8e0"

void __fastcall FUN_1026f8e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115162a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026f950; body size 76 bytes.
#line 1 "ENTRY_1026f950"

void __fastcall FUN_1026f950(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115162d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026f9c0; body size 76 bytes.
#line 1 "ENTRY_1026f9c0"

void __fastcall FUN_1026f9c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11516300);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026fa30; body size 76 bytes.
#line 1 "ENTRY_1026fa30"

void __fastcall FUN_1026fa30(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11516330);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026faa0; body size 76 bytes.
#line 1 "ENTRY_1026faa0"

void __fastcall FUN_1026faa0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11516360);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026fc90; body size 84 bytes.
#line 1 "ENTRY_1026fc90"

void __fastcall FUN_1026fc90(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11516450);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1026fe20; body size 187 bytes.
#line 1 "ENTRY_1026fe20"

void __fastcall FUN_1026fe20(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11516480);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);
        local_8 = (undefined4)(0);
        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }
    local_8 = (undefined4)(0xffffffff);
    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10270220; body size 81 bytes.
#line 1 "ENTRY_10270220"

int * __thiscall Recovered_Bulk::FUN_10270220(int *param_2)
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


// Reference entry 10270290; body size 81 bytes.
#line 1 "ENTRY_10270290"

int * __thiscall Recovered_Bulk::FUN_10270290(int *param_2)
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


// Reference entry 10270680; body size 261 bytes.
#line 1 "ENTRY_10270680"

undefined4 * __thiscall Recovered_Bulk::FUN_10270680(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11516570);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  thunk_FUN_101dcfc0(&local_18);
  if (local_18 != 0) {
    thunk_FUN_103d6930(param_1[2]);
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(local_14[1] + -1);
    local_14[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      iVar3 = (int)(local_14[2] + -1);
      local_14[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*local_14 + 4))();
      }
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar2 + 2);
    iVar3 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10270810; body size 106 bytes.
#line 1 "ENTRY_10270810"

undefined4 * __thiscall Recovered_Bulk::FUN_10270810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115165a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102709c0; body size 113 bytes.
#line 1 "ENTRY_102709c0"

void __stdcall FUN_102709c0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11516600);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10270ca0; body size 187 bytes.
#line 1 "ENTRY_10270ca0"

void __fastcall FUN_10270ca0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11516630);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);
        local_8 = (undefined4)(0);
        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }
    local_8 = (undefined4)(0xffffffff);
    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10271ae0; body size 303 bytes.
#line 1 "ENTRY_10271ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_10271ae0(undefined4 *param_2)
{
  int param_1 = (int )this;
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int *in_stack_0000002c;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_3c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = (undefined1 *)(LAB_115167f4);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (uint)(0);
  local_3c = (undefined4)(0x10271b1f);
  pvVar1 = (void *)(operator_new(0x40));
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    local_3c = (undefined4)(0);
    local_64 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (in_stack_0000002c != (int *)0x0) {
      local_64 = (undefined4)((**(code **)*in_stack_0000002c)(auStack_88));
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      LOCK();
      piVar2 = (int *)((int *)(*(int *)(param_1 + 0x40) + 4));
      *piVar2 = (int)(*piVar2 + 1);
      UNLOCK();
    }
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar2 = (int *)((int *)thunk_FUN_1026edf0(*(undefined4 *)(param_1 + 0x3c),
                                       *(undefined4 *)(param_1 + 0x40)));
  }
  piVar3 = (int *)((int *)0x0);
  local_8 = (uint)(local_8 & 0xffffff00);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  if (in_stack_0000002c != (int *)0x0) {
    local_3c = (undefined4)(0x10271bf9);
    (**(code **)(*in_stack_0000002c + 0x10))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 102725d0; body size 286 bytes.
#line 1 "ENTRY_102725d0"

void __thiscall Recovered_Bulk::FUN_102725d0(int param_2,int param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)(param_3 - param_2 >> 3);
  iVar3 = (int)(*param_1);
  uVar1 = (uint)(param_1[1] - iVar3 >> 3);
  if (uVar4 <= uVar1) {
    iVar2 = (int)(iVar3 + uVar4 * 8);
    thunk_FUN_10272d20(param_2,param_3,iVar3);
    thunk_FUN_10272fd0(iVar2,param_1[1],param_1);
    param_1[1] = iVar2;
    return;
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 3);
  if (uVar5 < uVar4) {
    if (0x1fffffff < uVar4) {
                    
      thunk_FUN_102782f0();
    }
    if (0x1fffffff - (uVar5 >> 1) < uVar5) {
      uVar5 = (uint)(0x1fffffff);
    }
    else {
      uVar5 = (uint)(uVar5 + (uVar5 >> 1));
      if (uVar5 < uVar4) {
        uVar5 = (uint)(uVar4);
      }
    }
    if (iVar3 != 0) {
      thunk_FUN_10272fd0(iVar3,param_1[1],param_1);
      iVar3 = (int)(*param_1);
      uVar1 = (uint)(param_1[2] - iVar3 & 0xfffffff8);
      iVar2 = (int)(iVar3);
      if (0xfff < uVar1) {
        iVar2 = (int)(*(int *)(iVar3 + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (iVar3 - iVar2) - 4U) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(iVar2,uVar1);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar3 = (int)(thunk_FUN_10278390(uVar5));
    *param_1 = (int)(iVar3);
    uVar1 = (uint)(0);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + uVar5 * 8;
  }
  iVar2 = (int)(param_2 + uVar1 * 8);
  thunk_FUN_10272d20(param_2,iVar2,iVar3);
  iVar3 = (int)(thunk_FUN_10273980(iVar2,param_3,param_1[1],param_1));
  param_1[1] = iVar3;
  return;
}


// Reference entry 10272960; body size 129 bytes.
#line 1 "ENTRY_10272960"

void FUN_10272960(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_20;
  int *local_1c;
  uint uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11516a2d);
  local_10 = (void *)(ExceptionList);
  uStack_18 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined1 *)((undefined1 *)&local_20);
  local_20 = (undefined4)(*param_3);
  local_1c = (int *)((int *)param_3[1]);
  puVar1 = (undefined4 *)(&local_20);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 4))();
    puVar1 = (undefined4 *)((undefined4 *)local_14);
  }
  local_14 = (undefined1 *)((undefined1 *)puVar1);
  local_8 = (undefined4)(0);
  uVar2 = (undefined4)(*param_2);
  piVar3 = (int *)((int *)param_2[1]);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar2,piVar3);
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10693350(uVar2,piVar3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10272a10; body size 177 bytes.
#line 1 "ENTRY_10272a10"

undefined1 FUN_10272a10(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_3c [32];
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11516a86);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(0);
  piVar1 = (int *)((int *)param_2[1]);
  iVar2 = (int)(*param_2);
  local_1c = (int)(iVar2);
  local_18 = (int *)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  local_8 = (undefined4)(0);
  if (iVar2 == 0) {
    uVar3 = (undefined1)(0);
  }
  else {
    thunk_FUN_106967c0(local_3c);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_14 = (uint)(1);
    uVar3 = (undefined1)(thunk_FUN_106a2a80(param_1 + 4));
  }
  if ((local_14 & 1) != 0) {
    thunk_FUN_1011f5e0();
  }
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar3);
}


// Reference entry 10272af0; body size 119 bytes.
#line 1 "ENTRY_10272af0"

undefined1 FUN_10272af0(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11516acd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 4));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  local_8 = (undefined4)(0);
  uVar2 = (undefined1)(thunk_FUN_10696830());
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar2);
}


// Reference entry 10272d20; body size 92 bytes.
#line 1 "ENTRY_10272d20"

int * FUN_10272d20(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)(param_2)) {
    return (int *)(param_3);
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
  return (int *)(param_3);
}


// Reference entry 10272f30; body size 111 bytes.
#line 1 "ENTRY_10272f30"

void FUN_10272f30(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11516bf0);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10272fd0; body size 111 bytes.
#line 1 "ENTRY_10272fd0"

void FUN_10272fd0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11516c20);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10273e10; body size 84 bytes.
#line 1 "ENTRY_10273e10"

void FUN_10273e10(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11516fb0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10273e80; body size 84 bytes.
#line 1 "ENTRY_10273e80"

void FUN_10273e80(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11516fe0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10273f70; body size 406 bytes.
#line 1 "ENTRY_10273f70"

undefined4 FUN_10273f70(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void **ppvVar5;
  char cVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151702d);
  uVar7 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar5 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while( true ) {
    ExceptionList = (void *)(ppvVar5);
    if (param_1 == (int *)(param_2)) {
      ExceptionList = (void *)(local_10);
      return (undefined4)(1);
    }
    local_8 = (undefined4)(0xffffffff);
    piVar1 = (int *)((int *)param_3[1]);
    iVar2 = (int)(*param_3);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar7);
    }
    piVar3 = (int *)((int *)param_1[1]);
    iVar4 = (int)(*param_1);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    local_8 = (undefined4)(2);
    if ((iVar4 == 0) != (iVar2 == 0)) break;
    if (iVar4 == iVar2) {
      local_8 = (undefined4)(5);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
      local_8 = (undefined4)(6);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
    else {
      cVar6 = (char)(thunk_FUN_106a1a50(iVar2));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
      local_8 = (undefined4)(8);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      if (cVar6 == '\0') {
        ExceptionList = (void *)(local_10);
        return (undefined4)(0);
      }
    }
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
    ppvVar5 = (void **)(ExceptionList);
  }
  local_8 = (undefined4)(3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  local_8 = (undefined4)(4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 102742c0; body size 129 bytes.
#line 1 "ENTRY_102742c0"

void FUN_102742c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_20;
  int *local_1c;
  uint uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151706d);
  local_10 = (void *)(ExceptionList);
  uStack_18 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined1 *)((undefined1 *)&local_20);
  local_20 = (undefined4)(*param_3);
  local_1c = (int *)((int *)param_3[1]);
  puVar1 = (undefined4 *)(&local_20);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 4))();
    puVar1 = (undefined4 *)((undefined4 *)local_14);
  }
  local_14 = (undefined1 *)((undefined1 *)puVar1);
  local_8 = (undefined4)(0);
  uVar2 = (undefined4)(*param_2);
  piVar3 = (int *)((int *)param_2[1]);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar2,piVar3);
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10693350(uVar2,piVar3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10274370; body size 177 bytes.
#line 1 "ENTRY_10274370"

undefined1 FUN_10274370(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_3c [32];
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115170c6);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(0);
  piVar1 = (int *)((int *)param_2[1]);
  iVar2 = (int)(*param_2);
  local_1c = (int)(iVar2);
  local_18 = (int *)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  local_8 = (undefined4)(0);
  if (iVar2 == 0) {
    uVar3 = (undefined1)(0);
  }
  else {
    thunk_FUN_106967c0(local_3c);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_14 = (uint)(1);
    uVar3 = (undefined1)(thunk_FUN_106a2a80(param_1 + 4));
  }
  if ((local_14 & 1) != 0) {
    thunk_FUN_1011f5e0();
  }
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar3);
}


// Reference entry 10274450; body size 119 bytes.
#line 1 "ENTRY_10274450"

undefined1 FUN_10274450(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151710d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 4));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  local_8 = (undefined4)(0);
  uVar2 = (undefined1)(thunk_FUN_10696830());
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar2);
}


// Reference entry 10274ce0; body size 93 bytes.
#line 1 "ENTRY_10274ce0"

int __thiscall Recovered_Bulk::FUN_10274ce0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151725d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 10275320; body size 236 bytes.
#line 1 "ENTRY_10275320"

int __fastcall FUN_10275320(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115174f0);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  iVar5 = (int)(thunk_FUN_101dcfc0(&local_18));
  if (local_18 != 0) {
    iVar5 = (int)(thunk_FUN_103d6930(param_1[2]));
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    piVar3 = (int *)(local_14 + 1);
    iVar2 = (int)(*piVar3);
    iVar5 = (int)(*piVar3);
    *piVar3 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      piVar3 = (int *)(local_14 + 2);
      iVar2 = (int)(*piVar3);
      iVar5 = (int)(*piVar3);
      *piVar3 = (int)(iVar2 + -1);
      UNLOCK();
      if (iVar2 + -1 == 0) {
        iVar5 = (int)((**(code **)(*local_14 + 4))());
      }
    }
  }
  piVar3 = (int *)((int *)param_1[0xf]);
  if (piVar3 != (int *)0x0) {
    iVar5 = (int)((**(code **)(*piVar3 + 0x10))(piVar3 != (int *)(param_1) + 6));
    param_1[0xf] = 0;
  }
  piVar3 = (int *)((int *)param_1[5]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 2);
    iVar2 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar2 == 1) {
      iVar5 = (int)((**(code **)(*piVar3 + 4))());
    }
  }
  piVar3 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return (int)(iVar5);
}


// Reference entry 10275470; body size 76 bytes.
#line 1 "ENTRY_10275470"

void __fastcall FUN_10275470(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11517520);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102754e0; body size 76 bytes.
#line 1 "ENTRY_102754e0"

void __fastcall FUN_102754e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11517550);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10275550; body size 76 bytes.
#line 1 "ENTRY_10275550"

void __fastcall FUN_10275550(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11517580);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10275910; body size 118 bytes.
#line 1 "ENTRY_10275910"

void __fastcall FUN_10275910(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272ea0(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x24) * 0x24);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 102759c0; body size 96 bytes.
#line 1 "ENTRY_102759c0"

void __fastcall FUN_102759c0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272fd0(*param_1,param_1[1],param_1);
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


// Reference entry 10275d00; body size 81 bytes.
#line 1 "ENTRY_10275d00"

int * __thiscall Recovered_Bulk::FUN_10275d00(int *param_2)
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


// Reference entry 10275dd0; body size 110 bytes.
#line 1 "ENTRY_10275dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10275dd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115176dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_1 != (undefined4 *)(param_2)) {
    *param_1 = (undefined4)(*param_2);
    local_8 = (undefined4)(0);
    thunk_FUN_10272300(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);
    uVar1 = (undefined4)(thunk_FUN_10129a20(param_1[2]));
    thunk_FUN_10129af0(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10275e60; body size 110 bytes.
#line 1 "ENTRY_10275e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10275e60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151771d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_1 != (undefined4 *)(param_2)) {
    *param_1 = (undefined4)(*param_2);
    local_8 = (undefined4)(0);
    thunk_FUN_10272300(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);
    uVar1 = (undefined4)(thunk_FUN_10129a20(param_1[2]));
    thunk_FUN_10129af0(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10276160; body size 110 bytes.
#line 1 "ENTRY_10276160"

undefined4 * __thiscall Recovered_Bulk::FUN_10276160(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151779d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_1 != (undefined4 *)(param_2)) {
    *param_1 = (undefined4)(*param_2);
    local_8 = (undefined4)(0);
    thunk_FUN_10272300(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);
    uVar1 = (undefined4)(thunk_FUN_10129a20(param_1[2]));
    thunk_FUN_10129af0(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102763b0; body size 105 bytes.
#line 1 "ENTRY_102763b0"

undefined1 __stdcall FUN_102763b0(undefined4 param_1,int *param_2)

{
  undefined1 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151781d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  uVar1 = (undefined1)(thunk_FUN_10696830(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(1);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 10276450; body size 169 bytes.
#line 1 "ENTRY_10276450"

undefined1 __stdcall FUN_10276450(int param_1,int *param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11517865);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  if ((param_1 == 0) == (param_3 == 0)) {
    if (param_1 == param_3) {
      uVar1 = (undefined1)(1);
    }
    else {
      uVar1 = (undefined1)(thunk_FUN_106a1a50(param_3));
    }
  }
  else {
    uVar1 = (undefined1)(0);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(uVar2);
  }
  local_8 = (undefined4)(3);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 102766c0; body size 165 bytes.
#line 1 "ENTRY_102766c0"

undefined1 __thiscall Recovered_Bulk::FUN_102766c0(int param_2,int *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 local_38 [32];
  undefined4 local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11517936);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_18 = (undefined4)(0);
  local_8 = (undefined4)(0);
  if (param_2 == 0) {
    local_11 = (undefined1)(0);
  }
  else {
    thunk_FUN_106967c0(local_38);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_18 = (undefined4)(1);
    local_11 = (undefined1)(thunk_FUN_106a2a80(param_1 + 4));
    thunk_FUN_1011f5e0();
  }
  local_8 = (undefined4)(2);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(local_11);
}


// Reference entry 10276790; body size 261 bytes.
#line 1 "ENTRY_10276790"

undefined4 * __thiscall Recovered_Bulk::FUN_10276790(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11517970);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  thunk_FUN_101dcfc0(&local_18);
  if (local_18 != 0) {
    thunk_FUN_103d6930(param_1[2]);
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(local_14[1] + -1);
    local_14[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      iVar3 = (int)(local_14[2] + -1);
      local_14[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*local_14 + 4))();
      }
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar2 + 2);
    iVar3 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10276920; body size 106 bytes.
#line 1 "ENTRY_10276920"

undefined4 * __thiscall Recovered_Bulk::FUN_10276920(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115179a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102769b0; body size 106 bytes.
#line 1 "ENTRY_102769b0"

undefined4 * __thiscall Recovered_Bulk::FUN_102769b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115179d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10276f50; body size 104 bytes.
#line 1 "ENTRY_10276f50"

void __thiscall Recovered_Bulk::FUN_10276f50(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272fd0(*param_1,param_1[1],param_1);
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


// Reference entry 10276fe0; body size 314 bytes.
#line 1 "ENTRY_10276fe0"

void __thiscall Recovered_Bulk::FUN_10276fe0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0x71c71c7 < param_2) {
                    
    thunk_FUN_102782e0();
  }
  uVar2 = (uint)(*param_1);
  uVar5 = (uint)((int)(param_1[2] - uVar2) / 0x24);
  if (0x71c71c7 - (uVar5 >> 1) < uVar5) {
    uVar5 = (uint)(0x71c71c7);
  }
  else {
    uVar5 = (uint)((uVar5 >> 1) + uVar5);
    if (uVar5 < param_2) {
      uVar5 = (uint)(param_2);
    }
  }
  if (uVar2 != 0) {
    thunk_FUN_10272ea0(uVar2,param_1[1],param_1);
    uVar2 = (uint)(*param_1);
    uVar3 = (uint)(((int)(param_1[2] - uVar2) / 0x24) * 0x24);
    uVar4 = (uint)(uVar2);
    if (0xfff < uVar3) {
      uVar4 = (uint)(*(uint *)(uVar2 - 4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uVar2 - uVar4) - 4) goto LAB_102770d9;
    }
    thunk_FUN_1148a50e(uVar4,uVar3);
    *param_1 = (uint)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (uVar5 < 0x71c71c8) {
    uVar5 = (uint)(uVar5 * 0x24);
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        *param_1 = (uint)(0);
        param_1[1] = 0;
        param_1[2] = 0;
        return;
      }
      pvVar1 = (void *)(operator_new(uVar5));
      *param_1 = (uint)((uint)pvVar1);
      param_1[1] = (uint)pvVar1;
      param_1[2] = (uint)((int)pvVar1 + uVar5);
      return;
    }
    if (uVar5 < uVar5 + 0x23) {
      pvVar1 = (void *)(operator_new(uVar5 + 0x23));
      if (pvVar1 != (void *)0x0) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void **)(uVar2 - 4) = pvVar1;
        *param_1 = (uint)(uVar2);
        param_1[1] = uVar2;
        param_1[2] = uVar2 + uVar5;
        return;
      }
LAB_102770d9:
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 102773f0; body size 105 bytes.
#line 1 "ENTRY_102773f0"

void __thiscall Recovered_Bulk::FUN_102773f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11517b4d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)(*param_2);
  thunk_FUN_10272300(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);
  uVar1 = (undefined4)(thunk_FUN_10129a20(param_1[2]));
  thunk_FUN_10129af0(uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10277630; body size 113 bytes.
#line 1 "ENTRY_10277630"

void __stdcall FUN_10277630(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11517be0);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102776f0; body size 137 bytes.
#line 1 "ENTRY_102776f0"

void __stdcall FUN_102776f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11517c1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int **)(param_2 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 4) + 4))();
  }
  local_8 = (undefined4)(0);
  uVar1 = (undefined4)(*param_1);
  piVar2 = (int *)((int *)param_1[1]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar1,piVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_10693350(uVar1,piVar2);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102777a0; body size 178 bytes.
#line 1 "ENTRY_102777a0"

undefined1 __thiscall Recovered_Bulk::FUN_102777a0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_3c [32];
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11517c76);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(0);
  piVar1 = (int *)((int *)param_2[1]);
  iVar2 = (int)(*param_2);
  local_1c = (int)(iVar2);
  local_18 = (int *)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  local_8 = (undefined4)(0);
  if (iVar2 == 0) {
    uVar3 = (undefined1)(0);
  }
  else {
    thunk_FUN_106967c0(local_3c);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    local_14 = (uint)(1);
    uVar3 = (undefined1)(thunk_FUN_106a2a80(param_1 + 8));
  }
  if ((local_14 & 1) != 0) {
    thunk_FUN_1011f5e0();
  }
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar3);
}


// Reference entry 10277880; body size 121 bytes.
#line 1 "ENTRY_10277880"

undefined1 __stdcall FUN_10277880(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11517cbd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  local_8 = (undefined4)(0);
  uVar2 = (undefined1)(thunk_FUN_10696830());
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar2);
}


// Reference entry 10277ea0; body size 118 bytes.
#line 1 "ENTRY_10277ea0"

void __fastcall FUN_10277ea0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272ea0(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x24) * 0x24);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10277f40; body size 187 bytes.
#line 1 "ENTRY_10277f40"

void __fastcall FUN_10277f40(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11517d70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar3 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)param_1[1]);
    if (puVar3 != (undefined4 *)(puVar4)) {
      do {
        piVar1 = (int *)((int *)puVar3[1]);
        local_8 = (undefined4)(0);
        if (piVar1 != (int *)0x0) {
          *puVar3 = (undefined4)(0);
          puVar3[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
        }
        puVar3 = (undefined4 *)(puVar3 + 2);
      } while (puVar3 != (undefined4 *)(puVar4));
      puVar3 = (undefined4 *)((undefined4 *)*param_1);
    }
    local_8 = (undefined4)(0xffffffff);
    uVar2 = (uint)(param_1[2] - (int)puVar3 & 0xfffffff8);
    puVar4 = (undefined4 *)(puVar3);
    if (0xfff < uVar2) {
      puVar4 = (undefined4 *)((undefined4 *)puVar3[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puVar3 + (-4 - (int)puVar4))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar4,uVar2);
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10278040; body size 96 bytes.
#line 1 "ENTRY_10278040"

void __fastcall FUN_10278040(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10272fd0(*param_1,param_1[1],param_1);
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


// Reference entry 10278390; body size 87 bytes.
#line 1 "ENTRY_10278390"

void * FUN_10278390(uint param_1)

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


// Reference entry 102788f0; body size 490 bytes.
#line 1 "ENTRY_102788f0"

undefined4 * FUN_102788f0(undefined4 *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_2c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11517f84);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar5 = (int *)((int *)0x0);
  local_8 = (undefined4)(0);
  thunk_FUN_1069fd10(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  piVar2 = (int *)((int *)thunk_FUN_1069e990(&local_14));
  piVar4 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    local_2c = (int *)((int *)0x0);
  }
  else {
    local_2c = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  uVar1 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  piVar2 = (int *)((int *)0x0);
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)(operator_new(0x54));
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCMusicServiceMenu);
      piVar3[2] = (int)piVar4;
      piVar3[3] = 0;
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      piVar3[3] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      piVar3[10] = 0;
      *(unsigned char *)((char *)&local_8 + 0) = 0xd;
      thunk_FUN_101cf1e0(piVar3 + 0xb);
      piVar3[0xd] = 0;
      *(undefined1 *)(piVar3 + 0xe) = 1;
      piVar3[0xf] = 0;
      piVar3[0x10] = 0;
      piVar3[0x11] = 0;
      piVar3[0x12] = DAT_121190f4;
      piVar3[0x13] = 0;
      piVar3[0x14] = 0;
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      thunk_FUN_10278470();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    uVar1 = (undefined1)((undefined1)local_8);
    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)(piVar3);
      if (*(code **)(*piVar3 + 0xc) != thunk_FUN_10278ee0) {
        piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      }
      (**(code **)(*piVar5 + 4))();
      piVar2 = (int *)(piVar3);
      uVar1 = (undefined1)((undefined1)local_8);
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = uVar1;
  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  local_8 = (undefined4)(0x13);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10278e60; body size 78 bytes.
#line 1 "ENTRY_10278e60"

void __thiscall Recovered_Bulk::FUN_10278e60(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11518030);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x20) + param_3 * 8));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  *param_2 = (int)((int)piVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10279b60; body size 303 bytes.
#line 1 "ENTRY_10279b60"

undefined4 * __thiscall Recovered_Bulk::FUN_10279b60(undefined4 *param_2)
{
  int param_1 = (int )this;
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int *in_stack_0000002c;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_3c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = (undefined1 *)(LAB_115181d4);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (uint)(0);
  local_3c = (undefined4)(0x10279b9f);
  pvVar1 = (void *)(operator_new(0x40));
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    local_3c = (undefined4)(0);
    local_64 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (in_stack_0000002c != (int *)0x0) {
      local_64 = (undefined4)((**(code **)*in_stack_0000002c)(auStack_88));
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      LOCK();
      piVar2 = (int *)((int *)(*(int *)(param_1 + 0x30) + 4));
      *piVar2 = (int)(*piVar2 + 1);
      UNLOCK();
    }
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar2 = (int *)((int *)thunk_FUN_10274780(*(undefined4 *)(param_1 + 0x2c),
                                       *(undefined4 *)(param_1 + 0x30)));
  }
  piVar3 = (int *)((int *)0x0);
  local_8 = (uint)(local_8 & 0xffffff00);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  if (in_stack_0000002c != (int *)0x0) {
    local_3c = (undefined4)(0x10279c79);
    (**(code **)(*in_stack_0000002c + 0x10))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1027cb60; body size 231 bytes.
#line 1 "ENTRY_1027cb60"

void FUN_1027cb60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115199c0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_110f2980(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  thunk_FUN_110f1e00(&local_14);
  thunk_FUN_112aa790(param_1,"<Command cmdline=\"SsidMap\">\n");
  if (local_14 == (char *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(*(int *)(local_14 + -0xc));
    if (iVar4 == 0) {
      pcVar3 = (char *)(local_14);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      iVar4 = (int)((int)pcVar3 - (int)(local_14 + 1));
      *(int *)(local_14 + -0xc) = iVar4;
    }
    pcVar3 = (char *)(local_14);
    if (local_14 != (char *)0x0) goto LAB_1027cbdc;
  }
  pcVar3 = (char *)("");
LAB_1027cbdc:
  thunk_FUN_1145de60(*(undefined4 *)(param_1 + 4),pcVar3,iVar4);
  thunk_FUN_112aa790(param_1,"</Command>\n");
  local_8 = (undefined4)(0);
  if (((local_14 != (char *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) &&
     (iVar4 = thunk_FUN_1123fcd0(local_14 + -0x10), iVar4 == 0)) {
    uVar2 = (undefined4)(*(undefined4 *)(local_14 + -4));
    local_14[-0xffffffff00000008] = '\0';
    local_14[-0xffffffff00000007] = '\0';
    local_14[-0xffffffff00000006] = '\0';
    local_14[-0xffffffff00000005] = '\0';
    local_14[-0xffffffff0000000c] = '\0';
    local_14[-0xffffffff0000000b] = '\0';
    local_14[-0xffffffff0000000a] = '\0';
    local_14[-0xffffffff00000009] = '\0';
    thunk_FUN_113cfb70(local_14,uVar2);
    free(local_14 + -0x10);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027d2f0; body size 160 bytes.
#line 1 "ENTRY_1027d2f0"

int FUN_1027d2f0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11519757);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x2a50));
  local_8 = (undefined4)(0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    thunk_FUN_1125bcf0(param_1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_TestPointHandlerSCLIB);
    memset(puVar2 + 0x248,0,0x2130);
  }
  local_8 = (undefined4)(0xffffffff);
  iVar3 = (int)(thunk_FUN_1125bd80(uVar1));
  if ((iVar3 != 1) && (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  ExceptionList = (void *)(local_10);
  return (int)(iVar3);
}


// Reference entry 1027d5a0; body size 125 bytes.
#line 1 "ENTRY_1027d5a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1027d5a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151821d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  local_8 = (undefined4)(0);
  thunk_FUN_1027e130(param_2,param_2);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1027e130; body size 113 bytes.
#line 1 "ENTRY_1027e130"

void __thiscall Recovered_Bulk::FUN_1027e130(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_1027e1c0(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
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


// Reference entry 1027ed00; body size 128 bytes.
#line 1 "ENTRY_1027ed00"

undefined4 * __thiscall Recovered_Bulk::FUN_1027ed00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151865d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  local_8 = (undefined4)(0);
  thunk_FUN_1027e130(param_2,param_2);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1027f240; body size 180 bytes.
#line 1 "ENTRY_1027f240"

undefined4 * __thiscall Recovered_Bulk::FUN_1027f240(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11518780);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonarCalibrationManager);
  local_8 = (undefined4)(0);
  *puVar1 = (undefined4)(0);
  param_1[3] = 0;
  pvVar2 = (void *)(operator_new(0x20));
  *(void **)pvVar2 = (void *)(pvVar2);
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 0xc) = 0x101;
  *puVar1 = (undefined4)(pvVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  thunk_FUN_1027e130(param_2 + 8,puVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_1027ee20(param_2 + 0x10);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1027f4a0; body size 76 bytes.
#line 1 "ENTRY_1027f4a0"

void __fastcall FUN_1027f4a0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115187f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027f510; body size 76 bytes.
#line 1 "ENTRY_1027f510"

void __fastcall FUN_1027f510(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11518820);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027f580; body size 76 bytes.
#line 1 "ENTRY_1027f580"

void __fastcall FUN_1027f580(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11518850);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027f5f0; body size 76 bytes.
#line 1 "ENTRY_1027f5f0"

void __fastcall FUN_1027f5f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11518880);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027f660; body size 68 bytes.
#line 1 "ENTRY_1027f660"

void __fastcall FUN_1027f660(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115188b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027f6c0; body size 68 bytes.
#line 1 "ENTRY_1027f6c0"

void __fastcall FUN_1027f6c0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115188e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027f720; body size 68 bytes.
#line 1 "ENTRY_1027f720"

void __fastcall FUN_1027f720(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11518910);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027f8b0; body size 101 bytes.
#line 1 "ENTRY_1027f8b0"

void __fastcall FUN_1027f8b0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11518970);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_AnacapaLauncher);
  thunk_FUN_112a7c30(param_1 + 9,uVar1);
  thunk_FUN_112a7f20(param_1 + 7);
  PTR_DAT_12119128 = (int *)((undefined *)0x0);
  thunk_FUN_110fc270();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027f970; body size 171 bytes.
#line 1 "ENTRY_1027f970"

void __fastcall FUN_1027f970(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115189a0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[5]);
  local_8 = (undefined4)(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027fa50; body size 128 bytes.
#line 1 "ENTRY_1027fa50"

void __fastcall FUN_1027fa50(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115189d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStream);
  if ((*(char *)(param_1 + 7) != '\0') && ((int *)param_1[2] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[2] + 0x18))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1027fb30; body size 81 bytes.
#line 1 "ENTRY_1027fb30"

int * __thiscall Recovered_Bulk::FUN_1027fb30(int *param_2)
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


// Reference entry 1027fc80; body size 102 bytes.
#line 1 "ENTRY_1027fc80"

int __thiscall Recovered_Bulk::FUN_1027fc80(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  piVar1 = (int *)((int *)(param_1 + 8));
  if (piVar1 != (int *)(param_2 + 8)) {
    iVar2 = (int)(*piVar1);
    thunk_FUN_1027e470(piVar1,*(undefined4 *)(iVar2 + 4));
    *(int *)(iVar2 + 4) = iVar2;
    *(int *)iVar2 = (int)(iVar2);
    *(int *)(iVar2 + 8) = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_1027e130(param_2 + 8,param_2);
  }
  if ((undefined4 *)(param_1 + 0x10) != (undefined4 *)(param_2 + 0x10)) {
    thunk_FUN_1027ddb0(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),param_2);
  }
  return (int)(param_1);
}


// Reference entry 10280140; body size 132 bytes.
#line 1 "ENTRY_10280140"

undefined4 * __thiscall Recovered_Bulk::FUN_10280140(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11518a90);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_AnacapaLauncher);
  thunk_FUN_112a7c30(param_1 + 9,uVar1);
  thunk_FUN_112a7f20(param_1 + 7);
  PTR_DAT_12119128 = (int *)((undefined *)0x0);
  thunk_FUN_110fc270();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x468);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10280280; body size 192 bytes.
#line 1 "ENTRY_10280280"

undefined4 * __thiscall Recovered_Bulk::FUN_10280280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11518ac0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[5]);
  local_8 = (undefined4)(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102803b0; body size 153 bytes.
#line 1 "ENTRY_102803b0"

undefined4 * __thiscall Recovered_Bulk::FUN_102803b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11518af0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStream);
  if ((*(char *)(param_1 + 7) != '\0') && ((int *)param_1[2] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[2] + 0x18))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10280c80; body size 129 bytes.
#line 1 "ENTRY_10280c80"

void __thiscall Recovered_Bulk::FUN_10280c80(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x40000000) {
    param_2 = (uint)(param_2 * 4);
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        pvVar1 = (void *)(operator_new(param_2));
        *param_1 = (uint)((uint)pvVar1);
        param_1[1] = (uint)pvVar1;
        param_1[2] = (uint)((int)pvVar1 + param_2);
        return;
      }
      *param_1 = (uint)(0);
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    if (param_2 < param_2 + 0x23) {
      pvVar1 = (void *)(operator_new(param_2 + 0x23));
      if (pvVar1 != (void *)0x0) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void **)(uVar2 - 4) = pvVar1;
        *param_1 = (uint)(uVar2);
        param_1[1] = uVar2;
        param_1[2] = uVar2 + param_2;
        return;
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10281490; body size 79 bytes.
#line 1 "ENTRY_10281490"

void __fastcall FUN_10281490(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + -0x10) < 0xffff) {
      iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + -8) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
        free((void *)(iVar1 + -0x10));
      }
    }
    *param_1 = (int)(0);
    return;
  }
  *param_1 = (int)(0);
  return;
}


// Reference entry 10282a40; body size 228 bytes.
#line 1 "ENTRY_10282a40"

undefined4 * FUN_10282a40(undefined4 *param_1,char *param_2)

{
  size_t sVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151955e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  local_8 = (undefined4)(0);
  do {
    sVar1 = (size_t)(strcspn(param_2,"\"\'&<>"));
    thunk_FUN_111a0d50(param_2,sVar1);
    switch(param_2[sVar1]) {
    case '\0':
      sVar1 = (size_t)(sVar1 - 1);
      break;
    case '\"':
      thunk_FUN_111a0cc0("&quot;");
      break;
    case '&':
      thunk_FUN_111a0cc0("&amp;");
      break;
    case '\'':
      thunk_FUN_111a0cc0("&apos;");
      break;
    case '<':
      thunk_FUN_111a0cc0(&DAT_1188d210);
      break;
    case '>':
      thunk_FUN_111a0cc0(&DAT_1188d218);
    }
    param_2 = (char *)(param_2 + sVar1 + 1);
  } while (*param_2 != '\0');
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10282c40; body size 120 bytes.
#line 1 "ENTRY_10282c40"

void __fastcall FUN_10282c40(int param_1)

{
  char cVar1;
  
  thunk_FUN_112af4e0("AnacapaLauncher",4,"kill entering");
  thunk_FUN_112a5390(*(undefined4 *)(param_1 + 0x50),1);
  thunk_FUN_112af4e0("AnacapaLauncher",1,"waiting for m_tthread.t_id = %llu...",
                     *(int *)(param_1 + 4),*(int *)(param_1 + 4) >> 0x1f);
  cVar1 = (char)(thunk_FUN_112a82d0(param_1 + 4));
  if (cVar1 == '\0') {
    thunk_FUN_112af4e0("AnacapaLauncher",1,"error: waiting for anacapa server thread to finish");
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  thunk_FUN_112af4e0("AnacapaLauncher",4,"kill leaving, cleanup should be done here");
  return;
}


// Reference entry 10282f10; body size 81 bytes.
#line 1 "ENTRY_10282f10"

void __fastcall FUN_10282f10(int param_1)

{
  thunk_FUN_112af4e0("AnacapaLauncher",4,"rebind() entering");
  thunk_FUN_112a5390(*(undefined4 *)(param_1 + 0x50),2);
  if ((*(undefined4 **)(param_1 + 0x458) != (undefined4 *)0x0) &&
     (*(int *)(*(int *)(param_1 + 0x50) + 0x124) == 0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x458))();
  }
  thunk_FUN_112af4e0("AnacapaLauncher",4,"rebind() leaving");
  return;
}


// Reference entry 10283480; body size 133 bytes.
#line 1 "ENTRY_10283480"

void __fastcall FUN_10283480(int param_1)

{
  int iVar1;
  
  thunk_FUN_112af4e0("AnacapaLauncher",4,"start hit");
  thunk_FUN_112a9da0((int *)(param_1 + 4),"anacapalauncher",LAB_10073cae,param_1,0);
  iVar1 = (int)(*(int *)(param_1 + 4));
  thunk_FUN_112af4e0("AnacapaLauncher",1,"m_tthread.t_id = %llu",iVar1,iVar1 >> 0x1f);
  iVar1 = (int)(param_1 + 0x1c);
  thunk_FUN_112a7f50(iVar1);
  if (*(char *)(param_1 + 0x4c) == '\0') {
    do {
      thunk_FUN_112a7da0(param_1 + 0x24,iVar1);
    } while (*(char *)(param_1 + 0x4c) == '\0');
  }
  thunk_FUN_112a8010(iVar1);
  thunk_FUN_112af4e0("AnacapaLauncher",4,"start leaving");
  return;
}


// Reference entry 10283860; body size 68 bytes.
#line 1 "ENTRY_10283860"

int __fastcall FUN_10283860(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(param_1 + 0x14));
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      if (*(int **)(param_1 + 8) == (int *)0x0) {
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      else {
        cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x14))());
        *(char *)(param_1 + 0x1c) = cVar1;
        if (cVar1 == '\0') {
          return (int)(0);
        }
      }
    }
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x1c))());
      *(int *)(param_1 + 0x14) = iVar2;
      return (int)(iVar2);
    }
    iVar2 = (int)(0);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return (int)(iVar2);
}


// Reference entry 10283b30; body size 220 bytes.
#line 1 "ENTRY_10283b30"

int * __thiscall Recovered_Bulk::FUN_10283b30(int *param_2)
{
  int *param_1 = (int *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11519c0d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x14));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_10283f20(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10283d50; body size 107 bytes.
#line 1 "ENTRY_10283d50"

void __thiscall Recovered_Bulk::FUN_10283d50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11519c4d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar1 = (undefined4)(*param_1);
  local_8 = (undefined4)(0);
  puVar2 = (undefined4 *)(operator_new(0x14));
  puVar2[4] = *param_2;
  *puVar2 = (undefined4)(uVar1);
  puVar2[1] = uVar1;
  puVar2[2] = uVar1;
  *(undefined2 *)(puVar2 + 3) = 0;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10283de0; body size 107 bytes.
#line 1 "ENTRY_10283de0"

void FUN_10283de0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11519c8d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  puVar1 = (undefined4 *)(operator_new(0x14));
  puVar1[4] = *param_3;
  *puVar1 = (undefined4)(param_2);
  puVar1[1] = param_2;
  puVar1[2] = param_2;
  *(undefined2 *)(puVar1 + 3) = 0;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10283f20; body size 194 bytes.
#line 1 "ENTRY_10283f20"

int * __thiscall Recovered_Bulk::FUN_10283f20(undefined4 *param_2,int param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11519ccd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)*param_1);
  if (*(char *)((int)param_2 + 0xd) == '\0') {
    local_8 = (undefined4)(0);
    piVar1 = (int *)(operator_new(0x14));
    local_8 = (undefined4)(1);
    piVar1[4] = param_2[4];
    *piVar1 = (int)((int)piVar3);
    piVar1[2] = (int)piVar3;
    *(undefined2 *)(piVar1 + 3) = 0;
    piVar1[1] = param_3;
    *(undefined1 *)(piVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((int)piVar3 + 0xd) != '\0') {
      piVar3 = (int *)(piVar1);
    }
    iVar2 = (int)(thunk_FUN_10283f20(*param_2,piVar1,param_4));
    *piVar1 = (int)(iVar2);
    iVar2 = (int)(thunk_FUN_10283f20(param_2[2],piVar1,param_4));
    piVar1[2] = iVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(piVar3);
}


// Reference entry 10284040; body size 107 bytes.
#line 1 "ENTRY_10284040"

void __thiscall Recovered_Bulk::FUN_10284040(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11519d0d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar1 = (undefined4)(*param_1);
  local_8 = (undefined4)(0);
  puVar2 = (undefined4 *)(operator_new(0x14));
  puVar2[4] = *param_2;
  *puVar2 = (undefined4)(uVar1);
  puVar2[1] = uVar1;
  puVar2[2] = uVar1;
  *(undefined2 *)(puVar2 + 3) = 0;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102840e0; body size 111 bytes.
#line 1 "ENTRY_102840e0"

void FUN_102840e0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11519d40);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10284180; body size 246 bytes.
#line 1 "ENTRY_10284180"

undefined4 * __thiscall Recovered_Bulk::FUN_10284180(undefined4 *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11519d7d);
  local_10 = (void *)(ExceptionList);
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar7 = (bool)(false);
  puVar6 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar5 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar6 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar6);
    do {
      puVar6 = (undefined4 *)(puVar2);
      bVar7 = (bool)(*param_3 <= (uint)puVar6[4]);
      if (bVar7) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar6);
        puVar5 = (undefined4 *)(puVar6);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar6[2]);
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar5 + 0xd) == '\0') && ((uint)puVar5[4] <= *param_3)) {
    *param_2 = (undefined4)(puVar5);
    *(undefined1 *)(param_2 + 1) = 0;
    return (undefined4 *)(param_2);
  }
  ExceptionList = (void *)(&local_10);
  if (param_1[1] == 0xccccccc) {
                    
    thunk_FUN_101d7220(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  local_8 = (undefined4)(0);
  piVar3 = (int *)(operator_new(0x14));
  piVar3[4] = *param_3;
  *piVar3 = (int)((int)puVar1);
  piVar3[1] = (int)puVar1;
  piVar3[2] = (int)puVar1;
  *(undefined2 *)(piVar3 + 3) = 0;
  uVar4 = (undefined4)(thunk_FUN_10286ac0(puVar6,bVar7,piVar3));
  *param_2 = (undefined4)(uVar4);
  *(undefined1 *)(param_2 + 1) = 1;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10284760; body size 71 bytes.
#line 1 "ENTRY_10284760"

void __thiscall Recovered_Bulk::FUN_10284760(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_102847c0(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x14);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x14);
  return;
}


// Reference entry 10284d10; body size 84 bytes.
#line 1 "ENTRY_10284d10"

void FUN_10284d10(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11519e90);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10285050; body size 224 bytes.
#line 1 "ENTRY_10285050"

void __thiscall Recovered_Bulk::FUN_10285050(undefined4 *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11519ecd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar7 = (bool)(false);
  puVar6 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar4 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar6 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar6);
    do {
      puVar6 = (undefined4 *)(puVar2);
      bVar7 = (bool)(*param_3 <= (uint)puVar6[4]);
      if (bVar7) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar6);
        puVar4 = (undefined4 *)(puVar6);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar6[2]);
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar4 + 0xd) == '\0') && ((uint)puVar4[4] <= *param_3)) {
    uVar5 = (undefined1)(0);
  }
  else {
    if (param_1[1] == 0xccccccc) {
                    
      thunk_FUN_101d7220(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    local_8 = (undefined4)(0);
    piVar3 = (int *)(operator_new(0x14));
    piVar3[4] = *param_3;
    *piVar3 = (int)((int)puVar1);
    piVar3[1] = (int)puVar1;
    piVar3[2] = (int)puVar1;
    *(undefined2 *)(piVar3 + 3) = 0;
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10286ac0(puVar6,bVar7,piVar3));
    uVar5 = (undefined1)(1);
  }
  *param_2 = (undefined4)(puVar4);
  *(undefined1 *)(param_2 + 1) = uVar5;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10285570; body size 220 bytes.
#line 1 "ENTRY_10285570"

int * __thiscall Recovered_Bulk::FUN_10285570(int *param_2)
{
  int *param_1 = (int *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11519f4d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x14));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_10283f20(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10285760; body size 148 bytes.
#line 1 "ENTRY_10285760"

int * __thiscall Recovered_Bulk::FUN_10285760(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11519f8d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_102871c0(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_10284aa0(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 10285970; body size 76 bytes.
#line 1 "ENTRY_10285970"

void __fastcall FUN_10285970(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151a020);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102859e0; body size 76 bytes.
#line 1 "ENTRY_102859e0"

void __fastcall FUN_102859e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151a050);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10285a50; body size 76 bytes.
#line 1 "ENTRY_10285a50"

void __fastcall FUN_10285a50(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151a080);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10285d80; body size 81 bytes.
#line 1 "ENTRY_10285d80"

int * __thiscall Recovered_Bulk::FUN_10285d80(int *param_2)
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


// Reference entry 10285e50; body size 81 bytes.
#line 1 "ENTRY_10285e50"

int * __thiscall Recovered_Bulk::FUN_10285e50(int *param_2)
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


// Reference entry 10285ec0; body size 81 bytes.
#line 1 "ENTRY_10285ec0"

int * __thiscall Recovered_Bulk::FUN_10285ec0(int *param_2)
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


// Reference entry 10286200; body size 106 bytes.
#line 1 "ENTRY_10286200"

undefined4 * __thiscall Recovered_Bulk::FUN_10286200(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151a140);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102864b0; body size 104 bytes.
#line 1 "ENTRY_102864b0"

void __thiscall Recovered_Bulk::FUN_102864b0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102840e0(*param_1,param_1[1],param_1);
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


// Reference entry 10286d60; body size 79 bytes.
#line 1 "ENTRY_10286d60"

void __thiscall Recovered_Bulk::FUN_10286d60(int param_2)
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


// Reference entry 10286eb0; body size 83 bytes.
#line 1 "ENTRY_10286eb0"

void __thiscall Recovered_Bulk::FUN_10286eb0(int *param_2)
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


// Reference entry 10286f30; body size 96 bytes.
#line 1 "ENTRY_10286f30"

void __fastcall FUN_10286f30(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102840e0(*param_1,param_1[1],param_1);
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


// Reference entry 102871c0; body size 87 bytes.
#line 1 "ENTRY_102871c0"

void * FUN_102871c0(uint param_1)

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


// Reference entry 10287250; body size 67 bytes.
#line 1 "ENTRY_10287250"

void __fastcall FUN_10287250(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = (int)(*param_1);
  cVar1 = (char)(*(char *)((int)*(int **)(iVar2 + 4) + 0xd));
  piVar4 = (int *)(*(int **)(iVar2 + 4));
  while (cVar1 == '\0') {
    thunk_FUN_102847c0(param_1,piVar4[2]);
    piVar3 = (int *)((int *)*piVar4);
    thunk_FUN_1148a50e(piVar4,0x14);
    piVar4 = (int *)(piVar3);
    cVar1 = (char)(*(char *)((int)piVar3 + 0xd));
  }
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = (int)(iVar2);
  *(int *)(iVar2 + 8) = iVar2;
  param_1[1] = 0;
  return;
}


// Reference entry 10287570; body size 206 bytes.
#line 1 "ENTRY_10287570"

void __thiscall Recovered_Bulk::FUN_10287570(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151a310);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)(*(int **)(param_1 + 4));
  piVar6 = (int *)(param_3 + 2);
  piVar5 = (int *)(param_3);
  if ((int *)(piVar6) != piVar4) {
    do {
      iVar3 = (int)(*piVar6);
      if (iVar3 != *piVar5) {
        piVar1 = (int *)((int *)piVar5[1]);
        if (piVar1 != (int *)0x0) {
          *piVar5 = (int)(0);
          piVar5[1] = 0;
          (**(code **)(*piVar1 + 8))(uVar2);
          iVar3 = (int)(*piVar6);
        }
        *piVar5 = (int)(iVar3);
        piVar1 = (int *)((int *)piVar6[1]);
        piVar5[1] = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
      }
      piVar6 = (int *)(piVar6 + 2);
      piVar5 = (int *)(piVar5 + 2);
    } while ((int *)(piVar6) != piVar4);
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  piVar6 = (int *)((int *)piVar4[-1]);
  local_8 = (undefined4)(0);
  if (piVar6 != (int *)0x0) {
    piVar4[-2] = 0;
    piVar4[-1] = 0;
    (**(code **)(*piVar6 + 8))();
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  *(int **)(param_1 + 4) = piVar4 + -2;
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102877e0; body size 150 bytes.
#line 1 "ENTRY_102877e0"

int * __thiscall Recovered_Bulk::FUN_102877e0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151a3ad);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (int)(0);
  param_2[1] = 0;
  param_2[2] = 0;
  iVar4 = (int)(*(int *)(param_1 + 0x18));
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  if (iVar1 != iVar4) {
    iVar5 = (int)(iVar4 - iVar1 >> 3);
    iVar3 = (int)(thunk_FUN_102871c0(iVar5));
    *param_2 = (int)(iVar3);
    param_2[1] = iVar3;
    param_2[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_10284aa0(iVar1,iVar4,*param_2,param_2,uVar2));
    param_2[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10287c30; body size 330 bytes.
#line 1 "ENTRY_10287c30"

undefined4 * __stdcall FUN_10287c30(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151a4b4);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_18 = (undefined4 *)(operator_new(0x14));
  local_8 = (undefined4)(0);
  if (local_18 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be5e0(uVar2));
  }
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(1);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_28 = (int *)(piVar3);
  if (piVar3 == (int *)0x0) {
    local_24 = (int *)((int *)0x0);
  }
  else {
    local_24 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_102878c0(&local_34);
  local_18 = (undefined4 *)(local_30);
  puVar4 = (undefined4 *)(local_34);
  if (local_34 != (undefined4 *)(local_30)) {
    do {
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      piVar1 = (int *)((int *)puVar4[1]);
      local_20 = (undefined4)(*puVar4);
      local_1c = (int *)(piVar1);
      local_14 = (undefined4)(local_20);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      thunk_FUN_103be9e0(local_14,0xffffffff);
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (piVar1 != (int *)0x0) {
        local_20 = (undefined4)(0);
        local_1c = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      puVar4 = (undefined4 *)(puVar4 + 2);
    } while (puVar4 != (undefined4 *)(local_18));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  thunk_FUN_101c6ae0();
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(8);
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10288050; body size 4109 bytes.
#line 1 "ENTRY_10288050"

void FUN_10288050(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151ab9a);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_106e3f50(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(1);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_106f8000(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(2);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_106fe200(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(3);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10703430(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(4);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10709bf0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(5);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10712c10(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(6);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107190f0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(7);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10651f80(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(8);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107293d0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(9);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1074b450(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(10);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1074cd90(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0xb);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10750170(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0xc);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107594d0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0xd);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10762f40(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0xe);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10767e60(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0xf);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1076ce20(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x10);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10773a50(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x11);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1077c060(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x12);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1077eba0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x13);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10783670(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x14);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1078c010(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x15);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107ce880(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x16);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107e6860(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x17);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_107eade0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x18);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108024f0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x19);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10812860(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x1a);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10819bd0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x1b);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1062a650(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x1c);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1082ad30(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x1d);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10838110(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x1e);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108442b0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x1f);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1085da90(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x20);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10860e70(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x21);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10874c40(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x22);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1087e530(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x23);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10880f80(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x24);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10892d60(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x25);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108a0aa0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x26);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108b5220(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x27);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108be050(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x28);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108c96c0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x29);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108e2540(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x2a);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108f8bc0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x2b);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_108fc510(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x2c);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109073a0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x2d);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10919c70(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x2e);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1092dd80(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x2f);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10949eb0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x30);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10954990(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x31);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10958450(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x32);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1095beb0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x33);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109622d0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x34);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10970ab0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x35);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10974ed0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x36);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10982060(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x37);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109893a0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x38);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1098fbc0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x39);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109998c0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x3a);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1099e6c0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x3b);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109a8720(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x3c);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109b7970(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x3d);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109c0090(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x3e);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109c4720(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x3f);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109cc050(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x40);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109d9800(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x41);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109e2f40(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x42);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_1061edc0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x43);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109eec10(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x44);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_109f6cb0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x45);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a09850(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x46);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a0d550(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x47);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a13f20(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x48);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a20e10(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x49);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a41440(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x4a);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a44bd0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x4b);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_105fd2c0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x4c);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a49340(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x4d);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a505e0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x4e);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a66530(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x4f);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a71960(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x50);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a761e0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x51);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a7d690(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x52);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a80a00(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x53);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a84300(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x54);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a896e0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x55);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a920d0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x56);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10a9b180(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x57);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10aa4f70(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x58);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10ab31d0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x59);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10ab44a0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x5a);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10ab60e0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x5b);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10abba40(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x5c);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10ae6740(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x5d);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10aea2b0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x5e);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10af6380(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x5f);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10affa30(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x60);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b049a0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x61);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b0c920(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x62);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b1b570(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(99);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b23f00(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(100);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b2ec80(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x65);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b33fb0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x66);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b49bb0(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x67);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b51060(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x68);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b55440(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x69);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b58a40(uVar1,pvVar2);
  }
  local_8 = (undefined4)(0xffffffff);
  pvVar2 = (void *)(operator_new(0x18));
  local_8 = (undefined4)(0x6a);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10b5cb50(uVar1,pvVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10289de0; body size 221 bytes.
#line 1 "ENTRY_10289de0"

void __fastcall FUN_10289de0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151aeed);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  thunk_FUN_10302280(param_1 + 8,"We are %d legacy wizards deep",*(undefined4 *)(param_1 + 0x28),
                     uVar4);
  if ((*(int *)(param_1 + 0x28) == 0) &&
     ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) < 8)) {
    thunk_FUN_10285570(param_1 + 0x20);
    local_8 = (undefined4)(0);
    local_18[0] = (int *)*local_18[0];
    cVar1 = (char)(*(char *)((int)local_18[0] + 0xd));
    while (cVar1 == '\0') {
      (**(code **)(*(int *)local_18[0][4] + 4))();
      piVar2 = (int *)((int *)local_18[0][2]);
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        local_18[0] = piVar2;
        piVar2 = (int *)((int *)*piVar2);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar2 + 0xd));
          local_18[0] = piVar2;
          piVar2 = (int *)((int *)*piVar2);
        }
      }
      else {
        cVar1 = (char)(*(char *)(local_18[0][1] + 0xd));
        piVar3 = (int *)((int *)local_18[0][1]);
        piVar2 = (int *)(local_18[0]);
        while ((local_18[0] = piVar3, cVar1 == '\0' && (piVar2 == (int *)local_18[0][2]))) {
          cVar1 = (char)(*(char *)(local_18[0][1] + 0xd));
          piVar3 = (int *)((int *)local_18[0][1]);
          piVar2 = (int *)(local_18[0]);
        }
      }
      cVar1 = (char)(*(char *)((int)local_18[0] + 0xd));
    }
    thunk_FUN_10284760(local_18);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10289f00; body size 205 bytes.
#line 1 "ENTRY_10289f00"

void __fastcall FUN_10289f00(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151af2d);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  thunk_FUN_10302280(param_1 + 8,"We are %d legacy wizards deep",*(undefined4 *)(param_1 + 0x28),
                     uVar4);
  if (*(int *)(param_1 + 0x28) == 1) {
    thunk_FUN_10285570(param_1 + 0x20);
    local_8 = (undefined4)(0);
    local_18[0] = (int *)*local_18[0];
    cVar1 = (char)(*(char *)((int)local_18[0] + 0xd));
    while (cVar1 == '\0') {
      (*(code *)**(undefined4 **)local_18[0][4])();
      piVar2 = (int *)((int *)local_18[0][2]);
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        local_18[0] = piVar2;
        piVar2 = (int *)((int *)*piVar2);
        while (cVar1 == '\0') {
          cVar1 = (char)(*(char *)(*piVar2 + 0xd));
          local_18[0] = piVar2;
          piVar2 = (int *)((int *)*piVar2);
        }
      }
      else {
        cVar1 = (char)(*(char *)(local_18[0][1] + 0xd));
        piVar3 = (int *)((int *)local_18[0][1]);
        piVar2 = (int *)(local_18[0]);
        while ((local_18[0] = piVar3, cVar1 == '\0' && (piVar2 == (int *)local_18[0][2]))) {
          cVar1 = (char)(*(char *)(local_18[0][1] + 0xd));
          piVar3 = (int *)((int *)local_18[0][1]);
          piVar2 = (int *)(local_18[0]);
        }
      }
      cVar1 = (char)(*(char *)((int)local_18[0] + 0xd));
    }
    thunk_FUN_10284760(local_18);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1028a700; body size 200 bytes.
#line 1 "ENTRY_1028a700"

void __thiscall Recovered_Bulk::FUN_1028a700(uint param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b05d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
  bVar8 = (bool)(false);
  puVar5 = (undefined4 *)((undefined4 *)puVar2[1]);
  cVar1 = (char)(*(char *)((int)puVar5 + 0xd));
  puVar7 = (undefined4 *)(puVar2);
  puVar4 = (undefined4 *)(puVar5);
  while (puVar3 = puVar5, cVar1 == '\0') {
    bVar8 = (bool)(param_2 <= (uint)puVar3[4]);
    if (bVar8) {
      puVar5 = (undefined4 *)((undefined4 *)*puVar3);
      puVar7 = (undefined4 *)(puVar3);
    }
    else {
      puVar5 = (undefined4 *)((undefined4 *)puVar3[2]);
    }
    cVar1 = (char)(*(char *)((int)puVar5 + 0xd));
    puVar4 = (undefined4 *)(puVar3);
  }
  if ((*(char *)((int)puVar7 + 0xd) != '\0') || (param_2 < (uint)puVar7[4])) {
    if (*(int *)(param_1 + 0x24) == 0xccccccc) {
                    
      thunk_FUN_101d7220(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    local_8 = (undefined4)(0);
    piVar6 = (int *)(operator_new(0x14));
    piVar6[4] = param_2;
    *piVar6 = (int)((int)puVar2);
    piVar6[1] = (int)puVar2;
    piVar6[2] = (int)puVar2;
    *(undefined2 *)(piVar6 + 3) = 0;
    thunk_FUN_10286ac0(puVar4,bVar8,piVar6);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1028a950; body size 1820 bytes.
#line 1 "ENTRY_1028a950"

void FUN_1028a950(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_106e1380());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_106f7150());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_106fd7f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10702ba0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10708df0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107123b0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107183d0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10649300());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10724930());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1074b0e0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1074ca20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1074ed30());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10758340());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107626d0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10767860());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1076bff0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10772f70());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1077bcd0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1077e3d0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10783320());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10786100());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107cce20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107e6130());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_107e8f30());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10801190());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10811c10());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10818140());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_106243b0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108294f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10837820());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1083fac0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1085d720());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1085f4e0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10873290());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1087e430());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1087eff0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10891c20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1089e580());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108b47a0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108bcac0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108c7880());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108dfd20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108f8850());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_108fb850());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10905580());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10916c20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1092b810());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10948f60());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109543e0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10957cf0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1095b3c0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10961ad0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10970540());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10973080());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109809c0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10988b60());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1098e810());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10999150());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1099d9d0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109a6790());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109b6e80());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109bf2c0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109c3ac0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109cb7a0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109d8930());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109e1620());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_1061e370());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109edf50());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_109f3c80());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a08d00());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a0cd20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a12ef0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a1e9e0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a40dc0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a44600());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_105f5740());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a48d70());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a4dc00());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a64980());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a711f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a752c0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a7cf20());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a803f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a83b90());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a88c80());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a90fb0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10a9a260());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10aa2a60());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ab2ee0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ab3f60());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ab6080());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ab65f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ae5fd0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10ae9000());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10af4f30());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10aff240());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b03bb0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b09dc0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b1a790());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b22400());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b2e4f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b31d30());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b488f0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b4fd80());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b54cd0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b585d0());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10b5a460());
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}


// Reference entry 1028b5a0; body size 220 bytes.
#line 1 "ENTRY_1028b5a0"

int * __thiscall Recovered_Bulk::FUN_1028b5a0(int *param_2)
{
  int *param_1 = (int *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b15d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_1028bbd0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 1028b6f0; body size 91 bytes.
#line 1 "ENTRY_1028b6f0"

int * __thiscall Recovered_Bulk::FUN_1028b6f0(int *param_2)
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


// Reference entry 1028b870; body size 91 bytes.
#line 1 "ENTRY_1028b870"

int * __thiscall Recovered_Bulk::FUN_1028b870(int *param_2)
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


// Reference entry 1028b8f0; body size 78 bytes.
#line 1 "ENTRY_1028b8f0"

int * __thiscall Recovered_Bulk::FUN_1028b8f0(int *param_2)
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


// Reference entry 1028bbd0; body size 221 bytes.
#line 1 "ENTRY_1028bbd0"

int * __thiscall Recovered_Bulk::FUN_1028bbd0(undefined4 *param_2,int param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151b21d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)((int *)*param_1);
  if (*(char *)((int)param_2 + 0xd) == '\0') {
    local_8 = (undefined4)(0);
    piVar2 = (int *)(operator_new(0x18));
    piVar2[4] = param_2[4];
    piVar1 = (int *)((int *)param_2[5]);
    piVar2[5] = (int)piVar1;
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
    local_8 = (undefined4)(1);
    iVar3 = (int)(thunk_FUN_1028bbd0(*param_2,piVar2,param_4));
    *piVar2 = (int)(iVar3);
    iVar3 = (int)(thunk_FUN_1028bbd0(param_2[2],piVar2,param_4));
    piVar2[2] = iVar3;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(piVar4);
}


// Reference entry 1028bde0; body size 389 bytes.
#line 1 "ENTRY_1028bde0"

undefined4 * __thiscall Recovered_Bulk::FUN_1028bde0(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b2a5);
  uVar7 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  puVar15 = (undefined4 *)((undefined4 *)*param_1);
  bVar16 = (bool)(false);
  puVar14 = (undefined4 *)((undefined4 *)puVar15[1]);
  cVar5 = (char)(*(char *)((int)puVar14 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_18 = (undefined4 *)(puVar15);
  puVar3 = (undefined4 *)(puVar14);
  local_10 = (void *)(ExceptionList);
  while (puVar2 = puVar14, ExceptionList = ppvVar4, cVar5 == '\0') {
    cVar5 = (char)((**(code **)(*(int *)puVar2[4] + 0x34))(uVar7));
    cVar6 = (char)((**(code **)(*(int *)*param_3 + 0x34))());
    if (cVar5 == cVar6) {
      iVar8 = (int)((**(code **)(*(int *)puVar2[4] + 0x14))());
      iVar9 = (int)((**(code **)(*(int *)*param_3 + 0x14))());
      if (iVar8 == iVar9) {
        piVar1 = (int *)((int *)puVar2[4]);
        uVar10 = (uint)((**(code **)(*(int *)*param_3 + 0x2c))());
        uVar11 = (uint)((**(code **)(*piVar1 + 0x2c))());
        cVar5 = (char)(uVar10 < uVar11);
        puVar15 = (undefined4 *)(local_18);
      }
      else {
        cVar5 = (char)(iVar8 < iVar9);
      }
    }
    if (cVar5 == '\0') {
      puVar14 = (undefined4 *)((undefined4 *)*puVar2);
      puVar15 = (undefined4 *)(puVar2);
      local_18 = (undefined4 *)(puVar2);
    }
    else {
      puVar14 = (undefined4 *)((undefined4 *)puVar2[2]);
    }
    bVar16 = (bool)(cVar5 == '\0');
    cVar5 = (char)(*(char *)((int)puVar14 + 0xd));
    ppvVar4 = (void **)(ExceptionList);
    puVar3 = (undefined4 *)(puVar2);
  }
  if ((*(char *)((int)puVar15 + 0xd) == '\0') &&
     (cVar5 = thunk_FUN_1028e330(param_3,puVar15 + 4), cVar5 == '\0')) {
    *param_2 = (undefined4)(puVar15);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  if (param_1[1] != 0xaaaaaaa) {
    iVar8 = (int)(*param_1);
    local_8 = (undefined4)(0);
    piVar12 = (int *)(operator_new(0x18));
    piVar12[4] = *param_3;
    piVar1 = (int *)((int *)param_3[1]);
    local_8 = (undefined4)(1);
    piVar12[5] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *piVar12 = (int)(iVar8);
    piVar12[1] = iVar8;
    piVar12[2] = iVar8;
    *(undefined2 *)(piVar12 + 3) = 0;
    uVar13 = (undefined4)(thunk_FUN_1028eea0(puVar3,bVar16,piVar12));
    *param_2 = (undefined4)(uVar13);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
                    
  thunk_FUN_101d7220();
}


// Reference entry 1028c0f0; body size 150 bytes.
#line 1 "ENTRY_1028c0f0"

undefined4 __thiscall Recovered_Bulk::FUN_1028c0f0(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b300);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_1028c0f0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[5]);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      param_3[4] = 0;
      param_3[5] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x18);
    ppvVar4 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1028c1c0; body size 150 bytes.
#line 1 "ENTRY_1028c1c0"

undefined4 __thiscall Recovered_Bulk::FUN_1028c1c0(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b330);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_1028c1c0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[5]);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      param_3[4] = 0;
      param_3[5] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x18);
    ppvVar4 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 1028c4d0; body size 98 bytes.
#line 1 "ENTRY_1028c4d0"

void FUN_1028c4d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151b390);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 0x14));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x18);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1028c900; body size 84 bytes.
#line 1 "ENTRY_1028c900"

void FUN_1028c900(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151b430);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1028cd90; body size 70 bytes.
#line 1 "ENTRY_1028cd90"

undefined4 * __thiscall Recovered_Bulk::FUN_1028cd90(undefined4 *param_2)
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
  return (undefined4 *)(param_1);
}


// Reference entry 1028d0c0; body size 220 bytes.
#line 1 "ENTRY_1028d0c0"

int * __thiscall Recovered_Bulk::FUN_1028d0c0(int *param_2)
{
  int *param_1 = (int *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b4ed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_1028bbd0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 1028d290; body size 220 bytes.
#line 1 "ENTRY_1028d290"

int * __thiscall Recovered_Bulk::FUN_1028d290(int *param_2)
{
  int *param_1 = (int *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b52d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_1028bbd0(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 1028d710; body size 76 bytes.
#line 1 "ENTRY_1028d710"

void __fastcall FUN_1028d710(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b640);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1028d780; body size 76 bytes.
#line 1 "ENTRY_1028d780"

void __fastcall FUN_1028d780(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b670);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1028d7f0; body size 76 bytes.
#line 1 "ENTRY_1028d7f0"

void __fastcall FUN_1028d7f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b6a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1028d860; body size 76 bytes.
#line 1 "ENTRY_1028d860"

void __fastcall FUN_1028d860(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151b6d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1028daf0; body size 111 bytes.
#line 1 "ENTRY_1028daf0"

void __fastcall FUN_1028daf0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151b790);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)(*(int *)(param_1 + 4));
  if (iVar3 != 0) {
    piVar1 = (int *)(*(int **)(iVar3 + 0x14));
    local_8 = (undefined4)(0);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1028de00; body size 105 bytes.
#line 1 "ENTRY_1028de00"

void __fastcall FUN_1028de00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0xd);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemStatusManager);
  param_1[2] = (uint)&ghidra_vftable_SCSystemStatusManager;
  thunk_FUN_1028c030(piVar1,*(undefined4 *)(*piVar1 + 4));
  thunk_FUN_1148a50e(*piVar1,0x18);
  thunk_FUN_1028c0f0(param_1 + 0xb,*(undefined4 *)(param_1[0xb] + 4));
  thunk_FUN_1148a50e(param_1[0xb],0x18);
  thunk_FUN_103d60a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1028e330; body size 107 bytes.
#line 1 "ENTRY_1028e330"

bool FUN_1028e330(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  cVar2 = (char)((**(code **)(*(int *)*param_1 + 0x34))());
  cVar3 = (char)((**(code **)(*(int *)*param_2 + 0x34))());
  if (cVar2 != cVar3) {
    return (bool)((bool)cVar2);
  }
  iVar4 = (int)((**(code **)(*(int *)*param_1 + 0x14))());
  iVar5 = (int)((**(code **)(*(int *)*param_2 + 0x14))());
  if (iVar4 == iVar5) {
    piVar1 = (int *)((int *)*param_1);
    uVar6 = (uint)((**(code **)(*(int *)*param_2 + 0x2c))());
    uVar7 = (uint)((**(code **)(*piVar1 + 0x2c))());
    return (bool)(uVar6 < uVar7);
  }
  return (bool)(iVar4 < iVar5);
}


// Reference entry 1028e450; body size 106 bytes.
#line 1 "ENTRY_1028e450"

undefined4 * __thiscall Recovered_Bulk::FUN_1028e450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151b860);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1028f140; body size 79 bytes.
#line 1 "ENTRY_1028f140"

void __thiscall Recovered_Bulk::FUN_1028f140(int param_2)
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


// Reference entry 1028f1b0; body size 79 bytes.
#line 1 "ENTRY_1028f1b0"

void __thiscall Recovered_Bulk::FUN_1028f1b0(int param_2)
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


// Reference entry 1028f310; body size 83 bytes.
#line 1 "ENTRY_1028f310"

void __thiscall Recovered_Bulk::FUN_1028f310(int *param_2)
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


// Reference entry 1028f380; body size 83 bytes.
#line 1 "ENTRY_1028f380"

void __thiscall Recovered_Bulk::FUN_1028f380(int *param_2)
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


// Reference entry 1028f950; body size 132 bytes.
#line 1 "ENTRY_1028f950"

undefined4
__stdcall FUN_1028f950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151bdfd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_106a23c0(param_5));
  local_8 = (undefined4)(0);
  uVar2 = (undefined4)(thunk_FUN_1028f450(param_1,param_2,param_3,param_4,uVar2,param_6,param_7,param_8,param_9,
                             param_10,param_11,param_12,param_13));
  thunk_FUN_1011f5e0(uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar2);
}


// Reference entry 10290090; body size 90 bytes.
#line 1 "ENTRY_10290090"

void * FUN_10290090(uint param_1)

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


// Reference entry 102907c0; body size 373 bytes.
#line 1 "ENTRY_102907c0"

undefined4 * FUN_102907c0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *this_;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151bfe5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
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
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
    local_8 = (undefined4)(4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_1);
  }
  piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0x1b0))(&param_2,param_2));
  piVar1 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  local_14 = (int *)(piVar4);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    local_8 = (undefined4)(10);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_1);
  }
  thunk_FUN_10b6e370(param_1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  local_8 = (undefined4)(0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10291060; body size 127 bytes.
#line 1 "ENTRY_10291060"

undefined4 * __stdcall FUN_10291060(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151c16d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_106a23c0(param_2));
  local_8 = (undefined4)(0);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_102909a0(&param_2,uVar2));
  uVar2 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  *param_1 = (undefined4)(uVar2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(uVar1);
  }
  thunk_FUN_1011f5e0();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102915e0; body size 220 bytes.
#line 1 "ENTRY_102915e0"

int * __thiscall Recovered_Bulk::FUN_102915e0(int *param_2)
{
  int param_1 = (int )this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151c28d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_2 = (int)(0);
  param_2[1] = 0;
  pvVar7 = (void *)(operator_new(0x18));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_2 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_1028bbd0(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 4),pvVar7,param_2));
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
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 10291e90; body size 161 bytes.
#line 1 "ENTRY_10291e90"

undefined4 __fastcall FUN_10291e90(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151c4d5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x14))(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
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
  if (piVar1 == (int *)0x0) {
    uVar3 = (undefined4)(0xffffffff);
  }
  else {
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x2c))());
  }
  local_8 = (undefined4)(5);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar3);
}


// Reference entry 10291fa0; body size 74 bytes.
#line 1 "ENTRY_10291fa0"

void __stdcall FUN_10291fa0(undefined4 *param_1)

{
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151c500);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102909a0(&local_14,&DAT_121a0c1c);
  *param_1 = (undefined4)(local_14);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10292010; body size 119 bytes.
#line 1 "ENTRY_10292010"

undefined4 __stdcall FUN_10292010(undefined4 param_1)

{
  uint uVar1;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151c53d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10292500(local_18,&DAT_121a0c1c);
  local_8 = (undefined4)(0);
  thunk_FUN_10291820(param_1);
  thunk_FUN_1028c0f0(local_18,*(undefined4 *)(local_18[0] + 4));
  thunk_FUN_1148a50e(local_18[0],0x18,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10292c70; body size 98 bytes.
#line 1 "ENTRY_10292c70"

undefined4 * FUN_10292c70(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151c760);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10292cf0(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10293020; body size 143 bytes.
#line 1 "ENTRY_10293020"

undefined4 __stdcall FUN_10293020(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151c865);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_106a23c0(param_2));
  local_8 = (undefined4)(0);
  thunk_FUN_10292500(local_18,uVar2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  thunk_FUN_10291820(param_1);
  thunk_FUN_1028c0f0(local_18,*(undefined4 *)(local_18[0] + 4));
  thunk_FUN_1148a50e(local_18[0],0x18,uVar1);
  thunk_FUN_1011f5e0();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 102934d0; body size 184 bytes.
#line 1 "ENTRY_102934d0"

void __thiscall Recovered_Bulk::FUN_102934d0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151c965);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_112af4e0("SCSystemStatus::onTimerExpired",1,"Timer %d expired!",param_2,
                     DAT_12126b84 ^ (uint)&stack0xfffffffc);
  piVar2 = (int *)((int *)thunk_FUN_10292cf0(&param_2));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*piVar1 + 0x3c))(*(undefined4 *)(param_1 + 0x1c),0,1);
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10294e70; body size 114 bytes.
#line 1 "ENTRY_10294e70"

undefined4 * __thiscall Recovered_Bulk::FUN_10294e70(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151cd0d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10294f90; body size 278 bytes.
#line 1 "ENTRY_10294f90"

undefined4 * __thiscall Recovered_Bulk::FUN_10294f90(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151cd6b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
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
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102953d0; body size 68 bytes.
#line 1 "ENTRY_102953d0"

undefined4 * __thiscall Recovered_Bulk::FUN_102953d0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111c05a0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp;
  *(undefined1 *)(param_1 + 0x1124) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 102964c0; body size 76 bytes.
#line 1 "ENTRY_102964c0"

void __fastcall FUN_102964c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151d280);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10296750; body size 103 bytes.
#line 1 "ENTRY_10296750"

void __fastcall FUN_10296750(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151d310);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLookupV1CertInfoAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RLookupV1CertInfoAIOOp;
  thunk_FUN_102988f0(uVar1);
  param_1[0x184e] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_102967e0();
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10297580; body size 134 bytes.
#line 1 "ENTRY_10297580"

undefined4 * __thiscall Recovered_Bulk::FUN_10297580(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151d540);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLookupV1CertInfoAIOOp);
  param_1[2] = (uint)&ghidra_vftable_RLookupV1CertInfoAIOOp;
  thunk_FUN_102988f0(uVar1);
  param_1[0x184e] = (uint)&ghidra_vftable_RControlAIOOpRef;
  thunk_FUN_101ba0d0();
  thunk_FUN_102967e0();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x616c);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102986f0; body size 79 bytes.
#line 1 "ENTRY_102986f0"

void __thiscall Recovered_Bulk::FUN_102986f0(int param_2)
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


// Reference entry 102987e0; body size 83 bytes.
#line 1 "ENTRY_102987e0"

void __thiscall Recovered_Bulk::FUN_102987e0(int *param_2)
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


// Reference entry 10298890; body size 76 bytes.
#line 1 "ENTRY_10298890"

void __fastcall FUN_10298890(int param_1)

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


// Reference entry 102988f0; body size 85 bytes.
#line 1 "ENTRY_102988f0"

void __fastcall FUN_102988f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6140) != 0) && (*(int **)(param_1 + 0x613c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x613c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x613c));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x613c) = 0;
    *(undefined4 *)(param_1 + 0x6140) = 0;
  }
  return;
}


// Reference entry 10298960; body size 76 bytes.
#line 1 "ENTRY_10298960"

void __fastcall FUN_10298960(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 102989c0; body size 76 bytes.
#line 1 "ENTRY_102989c0"

void __fastcall FUN_102989c0(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 10298a20; body size 76 bytes.
#line 1 "ENTRY_10298a20"

void __fastcall FUN_10298a20(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 10298a80; body size 137 bytes.
#line 1 "ENTRY_10298a80"

void __fastcall FUN_10298a80(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  memset((void *)(param_1 + 0xa4),0,0x104);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  memset((void *)(param_1 + 0x1ac),0,0x80);
  *(undefined4 *)(param_1 + 0x22c) = 0;
  return;
}


// Reference entry 10298b30; body size 76 bytes.
#line 1 "ENTRY_10298b30"

void __fastcall FUN_10298b30(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


// Reference entry 10298b90; body size 149 bytes.
#line 1 "ENTRY_10298b90"

void __thiscall Recovered_Bulk::FUN_10298b90(int *param_2,undefined4 param_3)
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


// Reference entry 10298c70; body size 272 bytes.
#line 1 "ENTRY_10298c70"

undefined4 __thiscall Recovered_Bulk::FUN_10298c70(int *param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int local_8;
  int iStack_4;
  
  *(int *)(param_1 + 0x1c) = DAT_121194dc;
  DAT_121194dc = (int)(DAT_121194dc + 1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  thunk_FUN_1145c930(&local_8,0);
  thunk_FUN_1145ad70(&local_8,30000);
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
  piVar2 = (int *)(operator_new(0x38));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    piVar2[1] = 0;
    piVar2[2] = 0;
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (puVar1 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(puVar1);
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_RNSGetAliveOp);
    *(undefined2 *)(piVar2 + 3) = 0x3eb;
    piVar2[4] = local_8;
    piVar2[5] = iStack_4;
    piVar2[0xd] = 0;
    thunk_FUN_1145c250(piVar2 + 6,puVar5,0x19);
  }
  *(int **)(param_1 + 0x14) = piVar2;
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0xc))());
  iVar6 = (int)(param_1 + 8);
  thunk_FUN_111046c0(iVar6,uVar3);
  uVar4 = (undefined4)(thunk_FUN_111046e0());
  thunk_FUN_11107600(uVar4,iVar6,uVar3);
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10298dd0; body size 272 bytes.
#line 1 "ENTRY_10298dd0"

undefined4 __thiscall Recovered_Bulk::FUN_10298dd0(int *param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int local_8;
  int iStack_4;
  
  *(int *)(param_1 + 0x1c) = DAT_121194d8;
  DAT_121194d8 = (int)(DAT_121194d8 + 1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  thunk_FUN_1145c930(&local_8,0);
  thunk_FUN_1145ad70(&local_8,10000);
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
  piVar2 = (int *)(operator_new(0x38));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    piVar2[1] = 0;
    piVar2[2] = 0;
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (puVar1 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(puVar1);
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_RNSGetCurrentChannelOp);
    *(undefined2 *)(piVar2 + 3) = 0x3eb;
    piVar2[4] = local_8;
    piVar2[5] = iStack_4;
    piVar2[0xd] = 0;
    thunk_FUN_1145c250(piVar2 + 6,puVar5,0x19);
  }
  *(int **)(param_1 + 0x14) = piVar2;
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0xc))());
  iVar6 = (int)(param_1 + 8);
  thunk_FUN_111046c0(iVar6,uVar3);
  uVar4 = (undefined4)(thunk_FUN_111046e0());
  thunk_FUN_11107600(uVar4,iVar6,uVar3);
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10298f30; body size 332 bytes.
#line 1 "ENTRY_10298f30"

undefined4 __thiscall Recovered_Bulk::FUN_10298f30(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int local_8;
  int iStack_4;
  
  *(int *)(param_1 + 0x1c) = DAT_121194e0;
  DAT_121194e0 = (int)(DAT_121194e0 + 1);
  cVar1 = (char)(*(char *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x18) = 1;
  thunk_FUN_1145c930(&local_8,0);
  uVar3 = (undefined4)(40000);
  if (cVar1 == '\0') {
    uVar3 = (undefined4)(10000);
  }
  thunk_FUN_1145ad70(&local_8,uVar3);
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar4 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar4 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar4 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  piVar4 = (int *)(operator_new(0x340c));
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    uVar2 = (undefined1)(*(undefined1 *)(param_1 + 0x20));
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x24) != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(*(undefined1 **)(param_1 + 0x24));
    }
    piVar4[1] = 0;
    piVar4[2] = 0;
    *(undefined2 *)(piVar4 + 3) = 0x3eb;
    *piVar4 = (int)((int)(uint)&ghidra_vftable_RNetstartScanListOp);
    piVar4[4] = local_8;
    piVar4[5] = iStack_4;
    piVar4[0xd] = 2;
    piVar4[0xe] = 0xff;
    *(undefined2 *)(piVar4 + 0xd02) = 0x3eb;
    *(undefined1 *)((int)piVar4 + 0x340a) = uVar2;
    thunk_FUN_1145c250(piVar4 + 6,puVar6,0x19);
    memset(piVar4 + 0xf,0,0x33cc);
  }
  *(int **)(param_1 + 0x14) = piVar4;
  uVar3 = (undefined4)((**(code **)(*piVar4 + 0xc))());
  iVar7 = (int)(param_1 + 8);
  thunk_FUN_111046c0(iVar7,uVar3);
  uVar5 = (undefined4)(thunk_FUN_111046e0());
  thunk_FUN_11107600(uVar5,iVar7,uVar3);
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 102990d0; body size 512 bytes.
#line 1 "ENTRY_102990d0"

void __thiscall Recovered_Bulk::FUN_102990d0(int *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 local_44 [8];
  int *local_3c;
  undefined1 local_38 [36];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151d947);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_3c = (int *)((int *)(param_1 + 0x1c));
  *local_3c = (int)(DAT_121194d4);
  DAT_121194d4 = (int)(DAT_121194d4 + 1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  thunk_FUN_1145c930(local_44,0,local_14);
  thunk_FUN_1145ad70(local_44,20000);
  *(undefined4 *)(param_1 + 0x1a8) = 0x104;
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x22c));
  cVar2 = (char)(thunk_FUN_113cf9c0(param_1 + 0xa4,(undefined4 *)(param_1 + 0x1a8)));
  if (cVar2 == '\0') {
    thunk_FUN_112af4e0("netstart_op",0,"%d: ns failed to get pub key",0x25a);
    *puVar1 = (undefined4)(0);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  else {
    *puVar1 = (undefined4)(0x80);
    cVar2 = (char)(thunk_FUN_113cfa30(param_1 + 0x1ac,puVar1));
    if (cVar2 == '\0') {
      thunk_FUN_112af4e0("netstart_op",0,"%d: ns failed to get pub sig",0x256);
    }
  }
  local_38[0] = 0;
  if (*(char *)(param_1 + 0x25) != '\0') {
    thunk_FUN_1109f7f0();
    thunk_FUN_1109f100(local_38,0x21);
  }
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar3 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar3 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar3;
      (**(code **)(*piVar3 + 4))();
    }
  }
  pvVar4 = (void *)(operator_new(0x608));
  local_8 = (undefined4)(0);
  if (pvVar4 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    }
    piVar3 = (int *)((int *)thunk_FUN_11102510(local_44,*(undefined1 *)(param_1 + 0x24),
                                       *(undefined1 *)(param_1 + 0x26),puVar7,local_38,
                                       param_1 + 0xa4,*(undefined4 *)(param_1 + 0x1a8),
                                       param_1 + 0x1ac,*(undefined4 *)(param_1 + 0x22c),
                                       param_1 + 0x28,*(undefined1 *)(param_1 + 0x301)));
  }
  local_8 = (undefined4)(0xffffffff);
  *(int **)(param_1 + 0x14) = piVar3;
  uVar5 = (undefined4)((**(code **)(*piVar3 + 0xc))());
  uVar8 = (uint)(-(uint)(param_1 != 0) & param_1 + 8U);
  thunk_FUN_111046c0(uVar8,uVar5);
  uVar6 = (undefined4)(thunk_FUN_111046e0());
  thunk_FUN_11107600(uVar6,uVar8,uVar5);
  ExceptionList = (void *)(local_10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10299350; body size 297 bytes.
#line 1 "ENTRY_10299350"

undefined4 __thiscall Recovered_Bulk::FUN_10299350(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151d994);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(int *)(param_1 + 0x1c) = DAT_121194d0;
  DAT_121194d0 = (int)(DAT_121194d0 + 1);
  cVar1 = (char)(*(char *)(param_1 + 0x26));
  *(undefined1 *)(param_1 + 0x18) = 1;
  thunk_FUN_1145c930(local_18,0,uVar2);
  uVar3 = (undefined4)(20000);
  if (cVar1 == '\0') {
    uVar3 = (undefined4)(10000);
  }
  thunk_FUN_1145ad70(local_18,uVar3);
  if (param_2 != *(int **)(param_1 + 0xc)) {
    piVar4 = (int *)(*(int **)(param_1 + 0x10));
    if (piVar4 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(*piVar4 + 8))();
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 == (int *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x10) = piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  pvVar5 = (void *)(operator_new(0x3c));
  local_8 = (undefined4)(0);
  if (pvVar5 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x20));
    }
    piVar4 = (int *)((int *)thunk_FUN_11102770(local_18,puVar7,0,*(undefined1 *)(param_1 + 0x26)));
  }
  *(int **)(param_1 + 0x14) = piVar4;
  local_8 = (undefined4)(0xffffffff);
  uVar3 = (undefined4)((**(code **)(*piVar4 + 0xc))());
  iVar8 = (int)(param_1 + 8);
  thunk_FUN_111046c0(iVar8,uVar3);
  uVar6 = (undefined4)(thunk_FUN_111046e0());
  thunk_FUN_11107600(uVar6,iVar8,uVar3);
  ExceptionList = (void *)(local_10);
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10299500; body size 97 bytes.
#line 1 "ENTRY_10299500"

void * FUN_10299500(uint param_1)

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


// Reference entry 10299b60; body size 65 bytes.
#line 1 "ENTRY_10299b60"

void __fastcall FUN_10299b60(int param_1)

{
  undefined2 uVar1;
  
  thunk_FUN_112af4e0("joinhh",10,"RNetstartScanListOp: doWork()");
  uVar1 = (undefined2)(thunk_FUN_1125e4e0(param_1 + 0x10,param_1 + 0x18,param_1 + 0x34,param_1 + 0x3c,
                             param_1 + 0x38,*(undefined1 *)(param_1 + 0x340a)));
  *(undefined2 *)(param_1 + 0x3408) = uVar1;
  return;
}


// Reference entry 1029b6d0; body size 128 bytes.
#line 1 "ENTRY_1029b6d0"

void __fastcall FUN_1029b6d0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151dd9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101f6530(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1029b790; body size 221 bytes.
#line 1 "ENTRY_1029b790"

undefined4 __thiscall Recovered_Bulk::FUN_1029b790(int param_2)
{
  int param_1 = (int )this;
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151dddd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)((int *)0x0);
  if ((int *)(param_1 + -8) != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))
                              (DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar4 + 4))();
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  local_8 = (undefined4)(0);
  if (param_2 == iVar2) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    sVar1 = (short)(*(short *)(iVar2 + 0xc));
    *(short *)(param_1 + 0x20) = sVar1;
    if (sVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x34);
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(undefined4 *)(param_1 + 0x14),sVar1);
      if (*(int *)(param_1 + 4) != 0) {
        piVar3 = (int *)(*(int **)(param_1 + 8));
        if (piVar3 != (int *)0x0) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          (**(code **)(*piVar3 + 8))();
        }
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 1029b8b0; body size 221 bytes.
#line 1 "ENTRY_1029b8b0"

undefined4 __thiscall Recovered_Bulk::FUN_1029b8b0(int param_2)
{
  int param_1 = (int )this;
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151de1d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)((int *)0x0);
  if ((int *)(param_1 + -8) != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))
                              (DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar4 + 4))();
  }
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  local_8 = (undefined4)(0);
  if (param_2 == iVar2) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    sVar1 = (short)(*(short *)(iVar2 + 0xc));
    *(short *)(param_1 + 0x20) = sVar1;
    if (sVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x34);
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(undefined4 *)(param_1 + 0x14),sVar1);
      if (*(int *)(param_1 + 4) != 0) {
        piVar3 = (int *)(*(int **)(param_1 + 8));
        if (piVar3 != (int *)0x0) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          (**(code **)(*piVar3 + 8))();
        }
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 1029b9d0; body size 229 bytes.
#line 1 "ENTRY_1029b9d0"

undefined4 __thiscall Recovered_Bulk::FUN_1029b9d0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  short sVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151de5d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)0x0);
  if ((int *)(param_1 + -8) != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))
                              (DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(0);
  if (param_2 == *(int **)(param_1 + 0xc)) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    sVar2 = (short)((**(code **)(**(int **)(param_1 + 0xc) + 0x18))());
    *(short *)(param_1 + 0x20) = sVar2;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      *(bool *)(param_1 + 0x11) = sVar2 == 0;
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(undefined4 *)(param_1 + 0x14),sVar2);
      *(undefined1 *)(param_1 + 0x11) = 0;
      if (*(int *)(param_1 + 4) != 0) {
        piVar1 = (int *)(*(int **)(param_1 + 8));
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          (**(code **)(*piVar1 + 8))();
        }
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 1029be60; body size 210 bytes.
#line 1 "ENTRY_1029be60"

undefined4 __thiscall Recovered_Bulk::FUN_1029be60(int param_2)
{
  int param_1 = (int )this;
  undefined2 uVar1;
  int *piVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151deed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)0x0);
  if ((int *)(param_1 + -8) != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))
                              (DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(0);
  if (param_2 == *(int *)(param_1 + 0xc)) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    uVar1 = (undefined2)(*(undefined2 *)(*(int *)(param_1 + 0xc) + 0xc));
    *(undefined2 *)(param_1 + 0x1c) = uVar1;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(undefined4 *)(param_1 + 0x14),uVar1);
      if (*(int *)(param_1 + 4) != 0) {
        piVar2 = (int *)(*(int **)(param_1 + 8));
        if (piVar2 != (int *)0x0) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          (**(code **)(*piVar2 + 8))();
        }
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  local_8 = (undefined4)(1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 1029bf70; body size 232 bytes.
#line 1 "ENTRY_1029bf70"

void __thiscall Recovered_Bulk::FUN_1029bf70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151df2d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1029c980; body size 203 bytes.
#line 1 "ENTRY_1029c980"

void __thiscall Recovered_Bulk::FUN_1029c980(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151e0b7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x6144) = param_2;
  puVar1 = (undefined4 *)(operator_new(0x4494));
  local_8 = (undefined4)(0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x6134) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6134));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 + 0x1c != 0) & param_1 + 0x6128U,param_1 + 0x1c,puVar2,20000,
                       10000,0,0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
    puVar1[0x18] = (uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp;
    *(undefined1 *)(puVar1 + 0x1124) = 0;
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_102207b0(puVar1,param_1 + 8,0);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1029ce90; body size 95 bytes.
#line 1 "ENTRY_1029ce90"

undefined4 * __thiscall Recovered_Bulk::FUN_1029ce90(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemTime);
  param_1[2] = (uint)*(ushort *)(param_2 + 4);
  param_1[3] = (uint)*(ushort *)(param_2 + 6);
  param_1[4] = (uint)*(ushort *)(param_2 + 8);
  param_1[5] = (uint)*(ushort *)(param_2 + 10);
  param_1[6] = (uint)*(ushort *)(param_2 + 0xc);
  param_1[7] = (uint)*(ushort *)(param_2 + 0xe);
  param_1[8] = (uint)*(ushort *)(param_2 + 0x10);
  param_1[9] = (uint)*(ushort *)(param_2 + 0x12);
  return (undefined4 *)(param_1);
}


// Reference entry 1029cf80; body size 165 bytes.
#line 1 "ENTRY_1029cf80"

undefined4 * __thiscall Recovered_Bulk::FUN_1029cf80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  ushort local_28;
  ushort local_26;
  ushort local_24;
  ushort local_22;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151e1ad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSystemTime);
  thunk_FUN_11262460(param_2,param_3);
  param_1[2] = (uint)local_28;
  param_1[3] = (uint)local_26;
  param_1[4] = (uint)local_24;
  param_1[5] = (uint)local_22;
  param_1[6] = (uint)local_20;
  param_1[7] = (uint)local_1e;
  param_1[8] = (uint)local_1c;
  param_1[9] = (uint)local_1a;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1029d070; body size 76 bytes.
#line 1 "ENTRY_1029d070"

void __fastcall FUN_1029d070(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151e1e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1029d130; body size 81 bytes.
#line 1 "ENTRY_1029d130"

int * __thiscall Recovered_Bulk::FUN_1029d130(int *param_2)
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


// Reference entry 1029d2d0; body size 132 bytes.
#line 1 "ENTRY_1029d2d0"

undefined4 * __thiscall Recovered_Bulk::FUN_1029d2d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x28));
  if (piVar1 == (int *)0x0) {
    *param_2 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCSystemTime);
    piVar1[2] = *(int *)(param_1 + 8);
    piVar1[3] = *(int *)(param_1 + 0xc);
    piVar1[4] = *(int *)(param_1 + 0x10);
    piVar1[5] = *(int *)(param_1 + 0x14);
    piVar1[6] = *(int *)(param_1 + 0x18);
    piVar1[7] = *(int *)(param_1 + 0x1c);
    piVar1[8] = *(int *)(param_1 + 0x20);
    piVar1[9] = *(int *)(param_1 + 0x24);
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1029d380; body size 517 bytes.
#line 1 "ENTRY_1029d380"

undefined4 * FUN_1029d380(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151e21d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar6 = (int *)((int *)0x0);
  piVar5 = (int *)((int *)0x0);
  local_8 = (undefined4)(0);
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)((undefined1 *)*param_2);
  }
  cVar1 = (char)(thunk_FUN_11263050(puVar4));
  if (cVar1 == '\0') {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((undefined1 *)*param_2);
    }
    cVar1 = (char)(thunk_FUN_11262fc0(puVar4));
    if (cVar1 == '\0') {
      puVar4 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
        puVar4 = (undefined1 *)((undefined1 *)*param_2);
      }
      thunk_FUN_112af4e0("SCSystemTime",1,"Invalid string representation: \"%s\"",puVar4,uVar2);
    }
    else {
      piVar3 = (int *)(operator_new(0x28));
      if (piVar3 != (int *)0x0) {
        *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
        piVar3[1] = 0;
        g_lSCObjCount = (int)(g_lSCObjCount + 1);
        *piVar3 = (int)((int)(uint)&ghidra_vftable_SCSystemTime);
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        piVar3[6] = 0;
        piVar3[7] = 0;
        piVar3[8] = 0;
        piVar3[9] = 0;
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(piVar3);
        piVar6 = (int *)(piVar3);
      }
    }
  }
  else {
    piVar3 = (int *)(operator_new(0x28));
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar3[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar3 = (int)((int)(uint)&ghidra_vftable_SCSystemTime);
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      piVar6 = (int *)(piVar3);
      if (*(code **)(*piVar3 + 0xc) == thunk_FUN_1029d770) {
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(piVar3);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        (**(code **)(*piVar5 + 4))();
      }
    }
  }
  *param_1 = (undefined4)(piVar6);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }
  local_8 = (undefined4)(1);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1029d610; body size 131 bytes.
#line 1 "ENTRY_1029d610"

undefined4 * FUN_1029d610(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x28));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCSystemTime);
    piVar1[2] = 0x7d1;
    piVar1[3] = 1;
    piVar1[4] = 0;
    piVar1[5] = 1;
    piVar1[6] = 0xc;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1029d8a0; body size 147 bytes.
#line 1 "ENTRY_1029d8a0"

void __fastcall FUN_1029d8a0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x24))();
    (**(code **)(*param_1 + 0x2c))();
    (**(code **)(*param_1 + 0x34))();
    (**(code **)(*param_1 + 0x3c))();
    (**(code **)(*param_1 + 0x44))();
    (**(code **)(*param_1 + 0x4c))();
    (**(code **)(*param_1 + 0x54))();
    (**(code **)(*param_1 + 0x5c))();
  }
  thunk_FUN_112632c0();
  return;
}


// Reference entry 1029d970; body size 99 bytes.
#line 1 "ENTRY_1029d970"

undefined4 __thiscall Recovered_Bulk::FUN_1029d970(int param_2)
{
  int param_1 = (int )this;
  if (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8)) {
    return (undefined4)(1);
  }
  if (*(uint *)(param_2 + 8) <= *(uint *)(param_1 + 8)) {
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0xc)) {
      return (undefined4)(1);
    }
    if (*(uint *)(param_2 + 0xc) <= *(uint *)(param_1 + 0xc)) {
      if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x14)) {
        return (undefined4)(1);
      }
      if (*(uint *)(param_2 + 0x14) <= *(uint *)(param_1 + 0x14)) {
        if (*(uint *)(param_2 + 0x18) < *(uint *)(param_1 + 0x18)) {
          return (undefined4)(1);
        }
        if (*(uint *)(param_2 + 0x18) <= *(uint *)(param_1 + 0x18)) {
          if (*(uint *)(param_2 + 0x1c) < *(uint *)(param_1 + 0x1c)) {
            return (undefined4)(1);
          }
          if (*(uint *)(param_2 + 0x1c) <= *(uint *)(param_1 + 0x1c)) {
            if (*(uint *)(param_2 + 0x20) < *(uint *)(param_1 + 0x20)) {
              return (undefined4)(1);
            }
            if (*(uint *)(param_2 + 0x20) <= *(uint *)(param_1 + 0x20)) {
              if (*(uint *)(param_2 + 0x24) < *(uint *)(param_1 + 0x24)) {
                return (undefined4)(1);
              }
              if (*(uint *)(param_2 + 0x24) <= *(uint *)(param_1 + 0x24)) {
                return (undefined4)(0);
              }
            }
          }
        }
      }
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 1029dab0; body size 66 bytes.
#line 1 "ENTRY_1029dab0"

int __fastcall FUN_1029dab0(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(*(int *)(param_1 + 8) - 0x641);
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if (((((uVar1 < 0x722b) && (*(uint *)(param_1 + 0xc) < 0xd)) && (*(uint *)(param_1 + 0x10) < 7))
      && ((*(uint *)(param_1 + 0x14) < 0x20 && (*(uint *)(param_1 + 0x18) < 0x18)))) &&
     ((*(uint *)(param_1 + 0x1c) < 0x3c &&
      ((*(uint *)(param_1 + 0x20) < 0x3c && (*(uint *)(param_1 + 0x24) < 1000)))))) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 1029dd80; body size 109 bytes.
#line 1 "ENTRY_1029dd80"

void FUN_1029dd80(int *param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x24))());
    *(undefined2 *)(param_2 + 4) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x2c))());
    *(undefined2 *)(param_2 + 6) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x34))());
    *(undefined2 *)(param_2 + 8) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x3c))());
    *(undefined2 *)(param_2 + 10) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x44))());
    *(undefined2 *)(param_2 + 0xc) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x4c))());
    *(undefined2 *)(param_2 + 0xe) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x54))());
    *(undefined2 *)(param_2 + 0x10) = uVar1;
    uVar1 = (undefined2)((**(code **)(*param_1 + 0x5c))());
    *(undefined2 *)(param_2 + 0x12) = uVar1;
  }
  return;
}


// Reference entry 1029df20; body size 143 bytes.
#line 1 "ENTRY_1029df20"

undefined4 * __thiscall Recovered_Bulk::FUN_1029df20(undefined1 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRecurrence);
  param_1[2] = 0;
  param_1[3] = 0;
  switch(*param_2) {
  case 1:
    param_1[3] = 1;
    param_1[2] = 0x3e;
    return (undefined4 *)(param_1);
  case 2:
    param_1[3] = 1;
    param_1[2] = 0x41;
    return (undefined4 *)(param_1);
  case 3:
    param_1[3] = 1;
    param_1[2] = 0x7f;
    return (undefined4 *)(param_1);
  case 4:
    param_1[3] = 1;
    param_1[2] = (uint)(byte)param_2[1];
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1029e050; body size 76 bytes.
#line 1 "ENTRY_1029e050"

void __fastcall FUN_1029e050(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151e290);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1029e0f0; body size 81 bytes.
#line 1 "ENTRY_1029e0f0"

int * __thiscall Recovered_Bulk::FUN_1029e0f0(int *param_2)
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


// Reference entry 1029e250; body size 96 bytes.
#line 1 "ENTRY_1029e250"

undefined4 * __thiscall Recovered_Bulk::FUN_1029e250(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x10));
  if (piVar1 == (int *)0x0) {
    *param_2 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCRecurrence);
    piVar1[2] = *(int *)(param_1 + 8);
    piVar1[3] = *(int *)(param_1 + 0xc);
    *param_2 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 1029e4b0; body size 89 bytes.
#line 1 "ENTRY_1029e4b0"

undefined4 * FUN_1029e4b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x10));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCRecurrence);
    piVar1[2] = 0;
    piVar1[3] = 0;
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1029e960; body size 142 bytes.
#line 1 "ENTRY_1029e960"

void FUN_1029e960(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    iVar2 = (int)((**(code **)(*param_1 + 0x1c))());
    if (iVar2 == 0) {
      param_2[0] = '\0';
      param_2[1] = '\x7f';
      return;
    }
    iVar2 = (int)((**(code **)(*param_1 + 0x1c))());
    if (iVar2 == 1) {
      uVar3 = (uint)(0);
      uVar4 = (uint)(0);
      uVar5 = (uint)(1);
      do {
        cVar1 = (char)((**(code **)(*param_1 + 0x24))(uVar4));
        if (cVar1 != '\0') {
          uVar3 = (uint)(uVar3 | uVar5);
        }
        uVar4 = (uint)(uVar4 + 1);
        uVar5 = (uint)(uVar5 * 2);
      } while (uVar4 < 7);
      param_2[1] = (char)uVar3;
      if (uVar3 == 0x3e) {
        *param_2 = (char)('\x01');
        return;
      }
      if (uVar3 == 0x41) {
        *param_2 = (char)('\x02');
        return;
      }
      *param_2 = (char)((uVar3 != 0x7f) + '\x03');
    }
  }
  return;
}


// Reference entry 1029f430; body size 76 bytes.
#line 1 "ENTRY_1029f430"

void __fastcall FUN_1029f430(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151e550);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1029f5a0; body size 187 bytes.
#line 1 "ENTRY_1029f5a0"

void __fastcall FUN_1029f5a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151e5b0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(param_1 + 0xc240b);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCResourceHelper);
  param_1[2] = (uint)&ghidra_vftable_SCResourceHelper;
  cVar2 = (char)(thunk_FUN_112a7f50(puVar1,uVar3));
  if (param_1[0x1e] != 0) {
    thunk_FUN_11391170(param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(puVar1);
  }
  thunk_FUN_112a7f20(puVar1);
  _eh_vector_destructor_iterator_(param_1 + 0xc001f,8,0x11f6,thunk_FUN_10247180);
  thunk_FUN_103d0880();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1029f930; body size 218 bytes.
#line 1 "ENTRY_1029f930"

undefined4 * __thiscall Recovered_Bulk::FUN_1029f930(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151e660);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(param_1 + 0xc240b);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCResourceHelper);
  param_1[2] = (uint)&ghidra_vftable_SCResourceHelper;
  cVar2 = (char)(thunk_FUN_112a7f50(puVar1,uVar3));
  if (param_1[0x1e] != 0) {
    thunk_FUN_11391170(param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(puVar1);
  }
  thunk_FUN_112a7f20(puVar1);
  _eh_vector_destructor_iterator_(param_1 + 0xc001f,8,0x11f6,thunk_FUN_10247180);
  thunk_FUN_103d0880();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x309034);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1029fe10; body size 79 bytes.
#line 1 "ENTRY_1029fe10"

void __thiscall Recovered_Bulk::FUN_1029fe10(int param_2)
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


// Reference entry 1029fea0; body size 83 bytes.
#line 1 "ENTRY_1029fea0"

void __thiscall Recovered_Bulk::FUN_1029fea0(int *param_2)
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


// Reference entry 102a0ef0; body size 166 bytes.
#line 1 "ENTRY_102a0ef0"

undefined4 __thiscall Recovered_Bulk::FUN_102a0ef0(undefined4 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 local_4;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x30902c));
  uVar4 = (undefined4)(0xffffffff);
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar2 = (int)(thunk_FUN_11395ef0(*(int *)(param_1 + 0x78),
                               "SELECT string_index FROM strings WHERE string_name = ? AND string_language = \'en-US\' AND string_gender = \'\' AND string_plurality = \'\'"
                               ,0xffffffff,&local_4,0));
    if (iVar2 == 0) {
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)((undefined1 *)*param_2);
      }
      thunk_FUN_1138fd50(local_4,1,puVar3,0xffffffff,0);
      iVar2 = (int)(thunk_FUN_11397670(local_4));
      if (iVar2 == 100) {
        uVar4 = (undefined4)(thunk_FUN_11391670(local_4,0));
      }
      thunk_FUN_113948f0(local_4);
    }
  }
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30902c);
  }
  return (undefined4)(uVar4);
}


// Reference entry 102a14a0; body size 69 bytes.
#line 1 "ENTRY_102a14a0"

uint FUN_102a14a0(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *_Str;
  
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)*param_1);
  }
  cVar1 = (char)(thunk_FUN_11264ad0(puVar3,0));
  if (cVar1 != '\0') {
    _Str = (char *)("");
    if ((char *)*param_1 != (char *)0x0) {
      _Str = (char *)((char *)*param_1);
    }
    uVar2 = (uint)(strtol(_Str,(char **)0x0,10));
    if (uVar2 < 0x6e) {
      return (uint)(uVar2);
    }
  }
  return (uint)(0x6e);
}


// Reference entry 102a1790; body size 94 bytes.
#line 1 "ENTRY_102a1790"

void __fastcall FUN_102a1790(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x30902c));
  piVar4 = (int *)((int *)(param_1 + 0x30007c));
  iVar3 = (int)(0x11f6);
  do {
    iVar1 = (int)(*piVar4);
    thunk_FUN_10246290(piVar4,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar1;
    *(int *)iVar1 = (int)(iVar1);
    *(int *)(iVar1 + 8) = iVar1;
    piVar4[1] = 0;
    piVar4 = (int *)(piVar4 + 2);
    iVar3 = (int)(iVar3 + -1);
  } while (iVar3 != 0);
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30902c);
  }
  return;
}


// Reference entry 102a1f10; body size 91 bytes.
#line 1 "ENTRY_102a1f10"

int * __thiscall Recovered_Bulk::FUN_102a1f10(int *param_2)
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


// Reference entry 102a23b0; body size 91 bytes.
#line 1 "ENTRY_102a23b0"

int * __thiscall Recovered_Bulk::FUN_102a23b0(int *param_2)
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


// Reference entry 102a25b0; body size 78 bytes.
#line 1 "ENTRY_102a25b0"

int * __thiscall Recovered_Bulk::FUN_102a25b0(int *param_2)
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


// Reference entry 102a2ce0; body size 286 bytes.
#line 1 "ENTRY_102a2ce0"

void __thiscall Recovered_Bulk::FUN_102a2ce0(int param_2,int param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)(param_3 - param_2 >> 3);
  iVar3 = (int)(*param_1);
  uVar1 = (uint)(param_1[1] - iVar3 >> 3);
  if (uVar4 <= uVar1) {
    iVar2 = (int)(iVar3 + uVar4 * 8);
    thunk_FUN_102a2f00(param_2,param_3,iVar3);
    thunk_FUN_102a3140(iVar2,param_1[1],param_1);
    param_1[1] = iVar2;
    return;
  }
  uVar5 = (uint)(param_1[2] - iVar3 >> 3);
  if (uVar5 < uVar4) {
    if (0x1fffffff < uVar4) {
                    
      thunk_FUN_102adcd0();
    }
    if (0x1fffffff - (uVar5 >> 1) < uVar5) {
      uVar5 = (uint)(0x1fffffff);
    }
    else {
      uVar5 = (uint)(uVar5 + (uVar5 >> 1));
      if (uVar5 < uVar4) {
        uVar5 = (uint)(uVar4);
      }
    }
    if (iVar3 != 0) {
      thunk_FUN_102a3140(iVar3,param_1[1],param_1);
      iVar3 = (int)(*param_1);
      uVar1 = (uint)(param_1[2] - iVar3 & 0xfffffff8);
      iVar2 = (int)(iVar3);
      if (0xfff < uVar1) {
        iVar2 = (int)(*(int *)(iVar3 + -4));
        uVar1 = (uint)(uVar1 + 0x23);
        if (0x1f < (iVar3 - iVar2) - 4U) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(iVar2,uVar1);
      *param_1 = (int)(0);
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar3 = (int)(thunk_FUN_102ae270(uVar5));
    *param_1 = (int)(iVar3);
    uVar1 = (uint)(0);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + uVar5 * 8;
  }
  iVar2 = (int)(param_2 + uVar1 * 8);
  thunk_FUN_102a2f00(param_2,iVar2,iVar3);
  iVar3 = (int)(thunk_FUN_102a5240(iVar2,param_3,param_1[1],param_1));
  param_1[1] = iVar3;
  return;
}


// Reference entry 102a2f00; body size 92 bytes.
#line 1 "ENTRY_102a2f00"

int * FUN_102a2f00(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)(param_2)) {
    return (int *)(param_3);
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
  return (int *)(param_3);
}


// Reference entry 102a2fd0; body size 154 bytes.
#line 1 "ENTRY_102a2fd0"

void FUN_102a2fd0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151ed90);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (param_1 != (int *)(param_2)) {
    piVar5 = (int *)(param_1 + 1);
    do {
      local_8 = (undefined4)(0xffffffff);
      thunk_FUN_102ad4d0(uVar3);
      iVar2 = (int)(*piVar5);
      local_8 = (undefined4)(0);
      if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
        iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
        if (iVar4 == 0) {
          *(undefined4 *)(iVar2 + -8) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
          free((void *)(iVar2 + -0x10));
        }
      }
      piVar1 = (int *)(piVar5 + 4);
      piVar5 = (int *)(piVar5 + 5);
    } while (piVar1 != (int *)(param_2));
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a30a0; body size 111 bytes.
#line 1 "ENTRY_102a30a0"

void FUN_102a30a0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151edc0);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a3140; body size 111 bytes.
#line 1 "ENTRY_102a3140"

void FUN_102a3140(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151edf0);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a33c0; body size 172 bytes.
#line 1 "ENTRY_102a33c0"

void __thiscall Recovered_Bulk::FUN_102a33c0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151ee78);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 4));
  iVar2 = (int)(*param_2);
  *piVar1 = (int)(iVar2);
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
  }
  iVar2 = (int)(param_2[1]);
  local_8 = (undefined4)(0);
  piVar1[1] = iVar2;
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
  }
  iVar2 = (int)(param_2[2]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  piVar1[2] = iVar2;
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar2 + -0x10),uVar3);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0xc;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a3580; body size 481 bytes.
#line 1 "ENTRY_102a3580"

int __thiscall Recovered_Bulk::FUN_102a3580(int param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151eebd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_1);
  iVar6 = (int)((param_1[1] - iVar1) / 0xc);
  if (iVar6 == 0x15555555) {
                    
    thunk_FUN_102adcb0();
  }
  uVar2 = (uint)(iVar6 + 1);
  uVar7 = (uint)((param_1[2] - iVar1) / 0xc);
  if (0x15555555 - (uVar7 >> 1) < uVar7) {
    uVar7 = (uint)(0x15555555);
  }
  else {
    uVar7 = (uint)((uVar7 >> 1) + uVar7);
    if (uVar7 < uVar2) {
      uVar7 = (uint)(uVar2);
    }
  }
  iVar3 = (int)(thunk_FUN_102ae180(uVar7));
  local_8 = (undefined4)(0);
  iVar1 = (int)(iVar3 + ((param_2 - iVar1) / 0xc) * 0xc);
  thunk_FUN_102a71f0(param_3);
  iVar6 = (int)(param_1[1]);
  iVar5 = (int)(*param_1);
  if (param_2 == iVar6) {
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    for (; iVar5 != iVar6; iVar5 = iVar5 + 0xc) {
      thunk_FUN_102a71f0(iVar5);
    }
  }
  else {
    thunk_FUN_102ad7c0(iVar5,param_2,iVar3);
    thunk_FUN_102ad7c0(param_2,param_1[1],iVar1 + 0xc);
  }
  iVar6 = (int)(*param_1);
  if (iVar6 != 0) {
    iVar5 = (int)(param_1[1]);
    if (iVar6 != iVar5) {
      do {
        thunk_FUN_102a9bb0();
        iVar6 = (int)(iVar6 + 0xc);
      } while (iVar6 != iVar5);
      iVar6 = (int)(*param_1);
    }
    uVar4 = (uint)(((param_1[2] - iVar6) / 0xc) * 0xc);
    iVar5 = (int)(iVar6);
    if (0xfff < uVar4) {
      iVar5 = (int)(*(int *)(iVar6 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar6 - iVar5) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
  }
  *param_1 = (int)(iVar3);
  param_1[1] = iVar3 + uVar2 * 0xc;
  param_1[2] = iVar3 + uVar7 * 0xc;
  ExceptionList = (void *)(local_10);
  return (int)(iVar1);
}


// Reference entry 102a3cd0; body size 71 bytes.
#line 1 "ENTRY_102a3cd0"

void __thiscall Recovered_Bulk::FUN_102a3cd0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_102a3d90(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x18);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x18);
  return;
}


// Reference entry 102a4110; body size 73 bytes.
#line 1 "ENTRY_102a4110"

int * __thiscall Recovered_Bulk::FUN_102a4110(int *param_2,uint *param_3)
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


// Reference entry 102a4940; body size 214 bytes.
#line 1 "ENTRY_102a4940"

int * __thiscall Recovered_Bulk::FUN_102a4940(int *param_2,uint *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151f1cd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102a4110(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(uint *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_102accd0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 102a4d60; body size 214 bytes.
#line 1 "ENTRY_102a4d60"

int * __thiscall Recovered_Bulk::FUN_102a4d60(int *param_2,uint *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151f29d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102a4110(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(uint *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_102accd0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 102a5020; body size 112 bytes.
#line 1 "ENTRY_102a5020"

int __stdcall FUN_102a5020(int param_1,int param_2,int param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151f31d);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0xc) {
    thunk_FUN_102a71f0(param_1);
    param_3 = (int)(param_3 + 0xc);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_3);
}


// Reference entry 102a5110; body size 113 bytes.
#line 1 "ENTRY_102a5110"

int FUN_102a5110(int param_1,int param_2,int param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151f35d);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0xc) {
    thunk_FUN_102a71f0(param_1);
    param_3 = (int)(param_3 + 0xc);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_3);
}


// Reference entry 102a52e0; body size 208 bytes.
#line 1 "ENTRY_102a52e0"

int * FUN_102a52e0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_1151f430);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (int)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 3) {
    iVar1 = (int)(*param_1);
    *param_3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    iVar1 = (int)(param_1[1]);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    param_3[1] = iVar1;
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    iVar1 = (int)(param_1[2]);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    param_3[2] = iVar1;
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_3 = (int *)(param_3 + 3);
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_3);
}


// Reference entry 102a5810; body size 161 bytes.
#line 1 "ENTRY_102a5810"

void FUN_102a5810(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151f4f8);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_3);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_3[1]);
  local_8 = (undefined4)(0);
  param_2[1] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_3[2]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_2[2] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a5ab0; body size 127 bytes.
#line 1 "ENTRY_102a5ab0"

void FUN_102a5ab0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151f560);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102ad4d0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  iVar1 = (int)(*(int *)(param_2 + 4));
  local_8 = (undefined4)(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a5b60; body size 84 bytes.
#line 1 "ENTRY_102a5b60"

void FUN_102a5b60(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151f590);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a5bd0; body size 84 bytes.
#line 1 "ENTRY_102a5bd0"

void FUN_102a5bd0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1151f5c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a6750; body size 70 bytes.
#line 1 "ENTRY_102a6750"

undefined4 * __thiscall Recovered_Bulk::FUN_102a6750(undefined4 *param_2)
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
  return (undefined4 *)(param_1);
}


// Reference entry 102a67f0; body size 70 bytes.
#line 1 "ENTRY_102a67f0"

undefined4 * __thiscall Recovered_Bulk::FUN_102a67f0(undefined4 *param_2)
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
  return (undefined4 *)(param_1);
}


// Reference entry 102a6e60; body size 229 bytes.
#line 1 "ENTRY_102a6e60"

int * __thiscall Recovered_Bulk::FUN_102a6e60(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar3 = (void *)(ExceptionList);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151f6c5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar5 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar5 != iVar1) {
    iVar2 = (int)((iVar1 - iVar5) / 0xc);
    iVar4 = (int)(thunk_FUN_102ae180(iVar2));
    *param_1 = (int)(iVar4);
    param_1[1] = iVar4;
    param_1[2] = iVar4 + iVar2 * 0xc;
    local_8 = (undefined4)(1);
    do {
      thunk_FUN_102a71f0(iVar5);
      iVar4 = (int)(iVar4 + 0xc);
      iVar5 = (int)(iVar5 + 0xc);
    } while (iVar5 != iVar1);
    param_1[1] = iVar4;
    ExceptionList = (void *)(local_10);
    return (int *)(param_1);
  }
  ExceptionList = (void *)(pvVar3);
  return (int *)(param_1);
}


// Reference entry 102a6fe0; body size 148 bytes.
#line 1 "ENTRY_102a6fe0"

int * __thiscall Recovered_Bulk::FUN_102a6fe0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151f6fd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 3);
    iVar3 = (int)(thunk_FUN_102ae270(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = iVar3;
    param_1[2] = iVar3 + iVar5 * 8;
    local_8 = (undefined4)(0);
    iVar4 = (int)(thunk_FUN_102a5240(iVar4,iVar1,iVar3,param_1,uVar2));
    param_1[1] = iVar4;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102a7120; body size 165 bytes.
#line 1 "ENTRY_102a7120"

int * __thiscall Recovered_Bulk::FUN_102a7120(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151f748);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_2[1]);
  local_8 = (undefined4)(0);
  param_1[1] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_2[2]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[2] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102a71f0; body size 165 bytes.
#line 1 "ENTRY_102a71f0"

int * __thiscall Recovered_Bulk::FUN_102a71f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1151f798);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_2[1]);
  local_8 = (undefined4)(0);
  param_1[1] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  iVar1 = (int)(param_2[2]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  param_1[2] = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102a8f80; body size 76 bytes.
#line 1 "ENTRY_102a8f80"

void __fastcall FUN_102a8f80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115200c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a8ff0; body size 76 bytes.
#line 1 "ENTRY_102a8ff0"

void __fastcall FUN_102a8ff0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115200f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9060; body size 76 bytes.
#line 1 "ENTRY_102a9060"

void __fastcall FUN_102a9060(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520120);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a90d0; body size 76 bytes.
#line 1 "ENTRY_102a90d0"

void __fastcall FUN_102a90d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520150);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9140; body size 76 bytes.
#line 1 "ENTRY_102a9140"

void __fastcall FUN_102a9140(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520180);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a91b0; body size 76 bytes.
#line 1 "ENTRY_102a91b0"

void __fastcall FUN_102a91b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115201b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9220; body size 76 bytes.
#line 1 "ENTRY_102a9220"

void __fastcall FUN_102a9220(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115201e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9290; body size 76 bytes.
#line 1 "ENTRY_102a9290"

void __fastcall FUN_102a9290(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520210);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9300; body size 76 bytes.
#line 1 "ENTRY_102a9300"

void __fastcall FUN_102a9300(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520240);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9370; body size 76 bytes.
#line 1 "ENTRY_102a9370"

void __fastcall FUN_102a9370(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520270);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a93e0; body size 76 bytes.
#line 1 "ENTRY_102a93e0"

void __fastcall FUN_102a93e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115202a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9450; body size 76 bytes.
#line 1 "ENTRY_102a9450"

void __fastcall FUN_102a9450(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115202d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a94c0; body size 68 bytes.
#line 1 "ENTRY_102a94c0"

void __fastcall FUN_102a94c0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520300);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9520; body size 68 bytes.
#line 1 "ENTRY_102a9520"

void __fastcall FUN_102a9520(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520330);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a99b0; body size 263 bytes.
#line 1 "ENTRY_102a99b0"

void __fastcall FUN_102a99b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115203f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar4 = (int)(*param_1);
  if (iVar4 != 0) {
    iVar5 = (int)(param_1[1]);
    if (iVar4 != iVar5) {
      do {
        local_8 = (undefined4)(0xffffffff);
        thunk_FUN_102ad4d0(uVar2);
        iVar1 = (int)(*(int *)(iVar4 + 4));
        local_8 = (undefined4)(0);
        if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
           (iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar3 == 0)) {
          *(undefined4 *)(iVar1 + -8) = 0;
          *(undefined4 *)(iVar1 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
          free((void *)(iVar1 + -0x10));
        }
        iVar4 = (int)(iVar4 + 0x14);
      } while (iVar4 != iVar5);
      iVar4 = (int)(*param_1);
    }
    local_8 = (undefined4)(0xffffffff);
    uVar2 = (uint)(((param_1[2] - iVar4) / 0x14) * 0x14);
    iVar5 = (int)(iVar4);
    if (0xfff < uVar2) {
      iVar5 = (int)(*(int *)(iVar4 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar4 - iVar5) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9b00; body size 96 bytes.
#line 1 "ENTRY_102a9b00"

void __fastcall FUN_102a9b00(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102a30a0(*param_1,param_1[1],param_1);
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


// Reference entry 102a9bb0; body size 245 bytes.
#line 1 "ENTRY_102a9bb0"

void __fastcall FUN_102a9bb0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11520420);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[2]);
  local_8 = (undefined4)(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_1[1]);
  local_8 = (undefined4)(1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*param_1);
  local_8 = (undefined4)(2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9cf0; body size 126 bytes.
#line 1 "ENTRY_102a9cf0"

void __fastcall FUN_102a9cf0(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520450);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102ad4d0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  iVar1 = (int)(*(int *)(param_1 + 4));
  local_8 = (undefined4)(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9da0; body size 162 bytes.
#line 1 "ENTRY_102a9da0"

void __fastcall FUN_102a9da0(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520480);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAggregateSearchableCategory);
  param_1[2] = (uint)&ghidra_vftable_SCAggregateSearchableCategory;
  if ((int *)param_1[0x1a] == (int *)0x0) {
    piVar2 = (int *)((int *)param_1[0x1b]);
  }
  else {
    (**(code **)(*(int *)param_1[0x1a] + 0x28))(uVar1);
    piVar2 = (int *)((int *)param_1[0x1b]);
    if (piVar2 != (int *)0x0) {
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0x1a] = 0;
    piVar2 = (int *)((int *)0x0);
    param_1[0x1b] = 0;
  }
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_102aa140();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102a9e70; body size 115 bytes.
#line 1 "ENTRY_102a9e70"

void __fastcall FUN_102a9e70(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115204b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCompositeSearchable);
  param_1[1] = (uint)&ghidra_vftable_SCCompositeSearchable;
  piVar1 = (int *)((int *)param_1[0x14]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_102a9f50();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102aa650; body size 81 bytes.
#line 1 "ENTRY_102aa650"

int * __thiscall Recovered_Bulk::FUN_102aa650(int *param_2)
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


// Reference entry 102aa7e0; body size 81 bytes.
#line 1 "ENTRY_102aa7e0"

int * __thiscall Recovered_Bulk::FUN_102aa7e0(int *param_2)
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


// Reference entry 102aab80; body size 181 bytes.
#line 1 "ENTRY_102aab80"

int __thiscall Recovered_Bulk::FUN_102aab80(uint *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152057d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102a4110(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(uint *)(local_1c + 0x10))) {
    if (param_1[1] == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_102accd0(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x14);
}


// Reference entry 102aac70; body size 181 bytes.
#line 1 "ENTRY_102aac70"

int __thiscall Recovered_Bulk::FUN_102aac70(uint *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115205bd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102a4110(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(uint *)(local_1c + 0x10))) {
    if (param_1[1] == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_102accd0(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x14);
}


// Reference entry 102abb70; body size 82 bytes.
#line 1 "ENTRY_102abb70"

undefined4 * __thiscall Recovered_Bulk::FUN_102abb70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_102a30a0(*puVar1,param_1[3],puVar1);
  param_1[3] = *puVar1;
  thunk_FUN_102a9b00();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102abca0; body size 106 bytes.
#line 1 "ENTRY_102abca0"

undefined4 * __thiscall Recovered_Bulk::FUN_102abca0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115207f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102abd30; body size 106 bytes.
#line 1 "ENTRY_102abd30"

undefined4 * __thiscall Recovered_Bulk::FUN_102abd30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11520820);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102abef0; body size 149 bytes.
#line 1 "ENTRY_102abef0"

int __thiscall Recovered_Bulk::FUN_102abef0(byte param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520880);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102ad4d0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  iVar1 = (int)(*(int *)(param_1 + 4));
  local_8 = (undefined4)(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102abfe0; body size 136 bytes.
#line 1 "ENTRY_102abfe0"

undefined4 * __thiscall Recovered_Bulk::FUN_102abfe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115208b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCompositeSearchable);
  param_1[1] = (uint)&ghidra_vftable_SCCompositeSearchable;
  piVar1 = (int *)((int *)param_1[0x14]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_102a9f50();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x54);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102ac5f0; body size 140 bytes.
#line 1 "ENTRY_102ac5f0"

void __thiscall Recovered_Bulk::FUN_102ac5f0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_102a9bb0();
        iVar2 = (int)(iVar2 + 0xc);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0xc) * 0xc);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar1) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar1);
  }
  *param_1 = (int)(param_2);
  param_1[1] = param_2 + param_3 * 0xc;
  param_1[2] = param_2 + param_4 * 0xc;
  return;
}


// Reference entry 102ac6a0; body size 104 bytes.
#line 1 "ENTRY_102ac6a0"

void __thiscall Recovered_Bulk::FUN_102ac6a0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102a30a0(*param_1,param_1[1],param_1);
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


// Reference entry 102ac730; body size 104 bytes.
#line 1 "ENTRY_102ac730"

void __thiscall Recovered_Bulk::FUN_102ac730(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102a3140(*param_1,param_1[1],param_1);
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


// Reference entry 102ac980; body size 156 bytes.
#line 1 "ENTRY_102ac980"

void __stdcall FUN_102ac980(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11520b60);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (param_1 != (int *)(param_2)) {
    piVar5 = (int *)(param_1 + 1);
    do {
      local_8 = (undefined4)(0xffffffff);
      thunk_FUN_102ad4d0(uVar3);
      iVar2 = (int)(*piVar5);
      local_8 = (undefined4)(0);
      if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
        iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
        if (iVar4 == 0) {
          *(undefined4 *)(iVar2 + -8) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
          free((void *)(iVar2 + -0x10));
        }
      }
      piVar1 = (int *)(piVar5 + 4);
      piVar5 = (int *)(piVar5 + 5);
    } while (piVar1 != (int *)(param_2));
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102ad4d0; body size 126 bytes.
#line 1 "ENTRY_102ad4d0"

void __fastcall FUN_102ad4d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != 0) {
    iVar3 = (int)(param_1[1]);
    if (iVar2 != iVar3) {
      do {
        thunk_FUN_102a9bb0();
        iVar2 = (int)(iVar2 + 0xc);
      } while (iVar2 != iVar3);
      iVar2 = (int)(*param_1);
    }
    uVar1 = (uint)(((param_1[2] - iVar2) / 0xc) * 0xc);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar1) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar1 = (uint)(uVar1 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar1);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 102ad570; body size 263 bytes.
#line 1 "ENTRY_102ad570"

void __fastcall FUN_102ad570(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11520b90);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar4 = (int)(*param_1);
  if (iVar4 != 0) {
    iVar5 = (int)(param_1[1]);
    if (iVar4 != iVar5) {
      do {
        local_8 = (undefined4)(0xffffffff);
        thunk_FUN_102ad4d0(uVar2);
        iVar1 = (int)(*(int *)(iVar4 + 4));
        local_8 = (undefined4)(0);
        if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
           (iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar3 == 0)) {
          *(undefined4 *)(iVar1 + -8) = 0;
          *(undefined4 *)(iVar1 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
          free((void *)(iVar1 + -0x10));
        }
        iVar4 = (int)(iVar4 + 0x14);
      } while (iVar4 != iVar5);
      iVar4 = (int)(*param_1);
    }
    local_8 = (undefined4)(0xffffffff);
    uVar2 = (uint)(((param_1[2] - iVar4) / 0x14) * 0x14);
    iVar5 = (int)(iVar4);
    if (0xfff < uVar2) {
      iVar5 = (int)(*(int *)(iVar4 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar4 - iVar5) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102ad6c0; body size 96 bytes.
#line 1 "ENTRY_102ad6c0"

void __fastcall FUN_102ad6c0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102a30a0(*param_1,param_1[1],param_1);
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


// Reference entry 102ad740; body size 96 bytes.
#line 1 "ENTRY_102ad740"

void __fastcall FUN_102ad740(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102a3140(*param_1,param_1[1],param_1);
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


// Reference entry 102ad7c0; body size 207 bytes.
#line 1 "ENTRY_102ad7c0"

int * __stdcall FUN_102ad7c0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_11520be0);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (int)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 3) {
    iVar1 = (int)(*param_1);
    *param_3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    iVar1 = (int)(param_1[1]);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    param_3[1] = iVar1;
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    iVar1 = (int)(param_1[2]);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    param_3[2] = iVar1;
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_3 = (int *)(param_3 + 3);
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_3);
}


// Reference entry 102ada10; body size 110 bytes.
#line 1 "ENTRY_102ada10"

void FUN_102ada10(int param_1,int param_2)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11520c9d);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0xc) {
    thunk_FUN_102a71f0(param_1);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102adb60; body size 110 bytes.
#line 1 "ENTRY_102adb60"

void FUN_102adb60(int param_1,int param_2)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11520d1d);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0xc) {
    thunk_FUN_102a71f0(param_1);
    ppvVar1 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102ae180; body size 90 bytes.
#line 1 "ENTRY_102ae180"

void * FUN_102ae180(uint param_1)

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


// Reference entry 102ae200; body size 87 bytes.
#line 1 "ENTRY_102ae200"

void * FUN_102ae200(uint param_1)

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


// Reference entry 102ae270; body size 87 bytes.
#line 1 "ENTRY_102ae270"

void * FUN_102ae270(uint param_1)

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


// Reference entry 102ae440; body size 115 bytes.
#line 1 "ENTRY_102ae440"

undefined4 * FUN_102ae440(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11520da4);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x14));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_103be530(param_2));
  }
  local_8 = (undefined4)(0xffffffff);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102b1f60; body size 126 bytes.
#line 1 "ENTRY_102b1f60"

void FUN_102b1f60(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int *piStack00000008;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152172d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(param_1);
  local_8 = (undefined4)(0);
  piStack00000008 = (int *)((int *)0x0);
  thunk_FUN_103beae0(&local_14,0xffffffff);
  piVar1 = (int *)(piStack00000008);
  local_8 = (undefined4)(1);
  if (piStack00000008 != (int *)0x0) {
    piStack00000008 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102b2000; body size 126 bytes.
#line 1 "ENTRY_102b2000"

void FUN_102b2000(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int *piStack00000008;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152176d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(param_1);
  local_8 = (undefined4)(0);
  piStack00000008 = (int *)((int *)0x0);
  thunk_FUN_103beae0(&local_14,0xffffffff);
  piVar1 = (int *)(piStack00000008);
  local_8 = (undefined4)(1);
  if (piStack00000008 != (int *)0x0) {
    piStack00000008 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102b4fb0; body size 70 bytes.
#line 1 "ENTRY_102b4fb0"

void __fastcall FUN_102b4fb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int **)(param_1 + 0x70) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x70));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}


// Reference entry 102b5010; body size 131 bytes.
#line 1 "ENTRY_102b5010"

void __fastcall FUN_102b5010(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x3c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x44));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  iVar2 = (int)(*(int *)(param_1 + 0x54));
  thunk_FUN_102a3ea0(param_1 + 0x54,*(undefined4 *)(iVar2 + 4));
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = (int)(iVar2);
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


// Reference entry 102b7800; body size 267 bytes.
#line 1 "ENTRY_102b7800"

void __fastcall FUN_102b7800(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115225a4);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int **)(param_1 + 0x70) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x10))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x70));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  pvVar3 = (void *)(operator_new(0x6c));
  local_8 = (undefined4)(0);
  if (pvVar3 == (void *)0x0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(thunk_FUN_111c06e0(0));
  }
  piVar6 = (int *)(*(int **)(param_1 + 0x70));
  local_8 = (undefined4)(0xffffffff);
  if (piVar6 != (int *)0x0) {
    if (*(int *)(param_1 + 0x74) != 0) {
      (**(code **)(*piVar6 + 0x10))();
      piVar6 = (int *)(*(int **)(param_1 + 0x70));
    }
    if (piVar6 != (int *)0x0) {
      iVar4 = (int)(thunk_FUN_1123fcd0(piVar6 + 1));
      if (iVar4 == 0) {
        (**(code **)*piVar6)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  *(int *)(param_1 + 0x70) = iVar2;
  if (iVar2 != 0) {
    thunk_FUN_1123fce0(iVar2 + 4);
    if (*(int **)(param_1 + 0x70) != (int *)0x0) {
      uVar5 = (undefined4)((**(code **)(**(int **)(param_1 + 0x70) + 4))(param_1 + 0x28,0));
      *(undefined4 *)(param_1 + 0x74) = uVar5;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102b7c50; body size 501 bytes.
#line 1 "ENTRY_102b7c50"

void __fastcall FUN_102b7c50(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  SCLibrary *this_;
  int *piVar4;
  int *piVar5;
  int **ppiVar6;
  int *local_2c;
  int *local_28;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11522693);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_18 = (int *)(operator_new(0x20));
  local_8 = (undefined4)(0);
  if (local_18 == (int *)0x0) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(**(int **)(*(int *)(param_1 + 0x34) + 200) + 100))(uVar2));
    uVar3 = (undefined4)(thunk_FUN_104ddfd0(-(uint)(param_1 != 0) & param_1 + 8U,uVar3));
  }
  local_8 = (undefined4)(0xffffffff);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  thunk_FUN_104deb40();
  local_18 = (int *)(operator_new(0x20));
  local_8 = (undefined4)(1);
  if (local_18 == (int *)0x0) {
    uVar3 = (undefined4)(0);
  }
  else {
    uVar3 = (undefined4)(thunk_FUN_110c2c60());
    uVar3 = (undefined4)(thunk_FUN_10b7b430(param_1 + 0x18,uVar3));
  }
  local_8 = (undefined4)(0xffffffff);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_10b7b650();
  ppiVar6 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(2);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar6));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc4))(*(undefined4 *)(param_1 + 0x10));
    uVar3 = (undefined4)((**(code **)(*piVar1 + 0x150))(&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    thunk_FUN_102a23b0(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 0x14))(*(undefined4 *)(param_1 + 0x20));
    }
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  piVar5 = (int *)((int *)thunk_FUN_1023a9c0(&local_18));
  piVar1 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  *piVar5 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(*(undefined4 *)(param_1 + 0x8c));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  local_8 = (undefined4)(0x10);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102b7ed0; body size 403 bytes.
#line 1 "ENTRY_102b7ed0"

void __fastcall FUN_102b7ed0(int param_1)

{
  int *piVar1;
  bool bVar2;
  SCLibrary *this_;
  undefined4 uVar3;
  int *piVar4;
  int **ppiVar5;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11522705);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_10b7b6a0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  bVar2 = (bool)(((SCLibrary *)(0))->isShuttingDown());
  if (!bVar2) {
    ppiVar5 = (int **)(&local_14);
    this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    uVar3 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());
    local_8 = (undefined4)(0);
    thunk_FUN_101bf370(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))(ppiVar5);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (local_24 != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*local_24 + 0x150))(&local_1c));
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      thunk_FUN_102a23b0(uVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 0x18))(*(undefined4 *)(param_1 + 0x20));
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
    }
    local_8 = (undefined4)(9);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
  }
  piVar4 = (int *)((int *)thunk_FUN_1023a9c0(&local_1c));
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(10);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(*(undefined4 *)(param_1 + 0x8c));
  }
  local_8 = (undefined4)(0xe);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102b8490; body size 118 bytes.
#line 1 "ENTRY_102b8490"

void __stdcall FUN_102b8490(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11522780);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102b8590; body size 70 bytes.
#line 1 "ENTRY_102b8590"

void __fastcall FUN_102b8590(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int **)(param_1 + 0x70) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x70));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}


// Reference entry 102ba4d0; body size 371 bytes.
#line 1 "ENTRY_102ba4d0"

undefined4 * FUN_102ba4d0(undefined4 *param_1)

{
  uint uVar1;
  SCLibrary *pSVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *local_2c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11522ce5);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar3 = (int *)((int *)(**(code **)(*(int *)pSVar2 + 0x34))(&local_14,uVar1));
  local_18 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (local_18 == (int *)0x0) {
    local_2c = (int *)((int *)0x0);
  }
  else {
    local_2c = (int *)((int *)(**(code **)(*local_18 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  piVar6 = (int *)((int *)0x0);
  piVar3 = (int *)((int *)0x0);
  piVar5 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_18 != (int *)0x0) {
    puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*local_18 + 0x20))(&local_18));
    local_14 = (int *)((int *)*puVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    *puVar4 = (undefined4)(0);
    if (local_14 == (int *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      piVar6 = (int *)((int *)(**(code **)(*local_14 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    if (local_14 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*local_14 + 0x28))(&local_18));
      piVar3 = (int *)((int *)*piVar5);
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      *piVar5 = (int)(0);
      if (piVar3 == (int *)0x0) {
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      }
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  local_8 = (undefined4)(0xc);
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102bac70; body size 159 bytes.
#line 1 "ENTRY_102bac70"

void __thiscall Recovered_Bulk::FUN_102bac70(int param_2,int *param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11522ded);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_2 != *(int *)(param_1 + 0x48)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x4c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    *(int *)(param_1 + 0x48) = param_2;
    *(int **)(param_1 + 0x4c) = param_3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
  }
  thunk_FUN_102b50c0(0);
  local_8 = (undefined4)(1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102bb280; body size 366 bytes.
#line 1 "ENTRY_102bb280"

undefined1 FUN_102bb280(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  SCLibrary *this_;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11522f55);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)(thunk_FUN_110828b0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (iVar3 == 0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_11093530("RINCON_AssociatedZPUDN",0));
  }
  if (param_1 != (int *)0x0) {
    *param_1 = (int)((int)piVar4);
  }
  if (piVar4 != (int *)0x0) {
    cVar1 = (char)((**(code **)(*piVar4 + 0x74))());
    if (cVar1 != '\0') {
      iVar5 = (int)((**(code **)(*piVar4 + 0x78))());
      if (iVar5 != 0) {
        puVar8 = (undefined4 *)(&param_1);
        this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
        uVar6 = (undefined4)(((SCLibrary *)(this_))->getSCHousehold());
        local_8 = (undefined4)(0);
        thunk_FUN_101bf370(uVar6);
        *(unsigned char *)((char *)&local_8 + 0) = 3;
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(puVar8);
        }
        *(unsigned char *)((char *)&local_8 + 0) = 2;
        if (iVar3 != 0) {
          piVar7 = (int *)((int *)(**(code **)(*local_1c + 0x1e0))(&local_14));
          piVar4 = (int *)((int *)*piVar7);
          *(unsigned char *)((char *)&local_8 + 0) = 4;
          *piVar7 = (int)(0);
          if (piVar4 == (int *)0x0) {
            piVar7 = (int *)((int *)0x0);
          }
          else {
            piVar7 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
          }
          *(unsigned char *)((char *)&local_8 + 0) = 7;
          if (local_14 != (int *)0x0) {
            (**(code **)(*local_14 + 8))();
          }
          *(unsigned char *)((char *)&local_8 + 0) = 6;
          if (piVar4 != (int *)0x0) {
            uVar2 = (undefined1)((**(code **)(*piVar4 + 0x20))());
            local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 8))();
            }
            thunk_FUN_101bf3f0();
            ExceptionList = (void *)(local_10);
            return (undefined1)(uVar2);
          }
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 8))();
          }
        }
        local_8 = (undefined4)(10);
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))();
        }
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(0);
}


// Reference entry 102bba10; body size 81 bytes.
#line 1 "ENTRY_102bba10"

void __fastcall FUN_102bba10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  thunk_FUN_102b7ed0();
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int **)(param_1 + 0x70) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x70));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  thunk_FUN_102b5010();
  return;
}


// Reference entry 102bc2e0; body size 220 bytes.
#line 1 "ENTRY_102bc2e0"

int * __thiscall Recovered_Bulk::FUN_102bc2e0(int *param_2)
{
  int *param_1 = (int *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152320d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x28));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_102bc730(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102bc540; body size 119 bytes.
#line 1 "ENTRY_102bc540"

undefined4 * __thiscall Recovered_Bulk::FUN_102bc540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152328d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar1 = (undefined4)(*param_1);
  local_8 = (undefined4)(0);
  puVar2 = (undefined4 *)(operator_new(0x28));
  thunk_FUN_10118c40(param_2);
  *puVar2 = (undefined4)(uVar1);
  puVar2[1] = uVar1;
  puVar2[2] = uVar1;
  *(undefined2 *)(puVar2 + 3) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 102bc5e0; body size 119 bytes.
#line 1 "ENTRY_102bc5e0"

undefined4 * FUN_102bc5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115232cd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  puVar1 = (undefined4 *)(operator_new(0x28));
  thunk_FUN_10118c40(param_3);
  *puVar1 = (undefined4)(param_2);
  puVar1[1] = param_2;
  puVar1[2] = param_2;
  *(undefined2 *)(puVar1 + 3) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar1);
}


// Reference entry 102bc730; body size 206 bytes.
#line 1 "ENTRY_102bc730"

int * __thiscall Recovered_Bulk::FUN_102bc730(undefined4 *param_2,int param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152330d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)*param_1);
  if (*(char *)((int)param_2 + 0xd) == '\0') {
    local_8 = (undefined4)(0);
    piVar1 = (int *)(operator_new(0x28));
    thunk_FUN_10118c40(param_2 + 4);
    *piVar1 = (int)((int)piVar3);
    piVar1[2] = (int)piVar3;
    *(undefined2 *)(piVar1 + 3) = 0;
    piVar1[1] = param_3;
    *(undefined1 *)(piVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((int)piVar3 + 0xd) != '\0') {
      piVar3 = (int *)(piVar1);
    }
    local_8 = (undefined4)(1);
    iVar2 = (int)(thunk_FUN_102bc730(*param_2,piVar1,param_4));
    *piVar1 = (int)(iVar2);
    iVar2 = (int)(thunk_FUN_102bc730(param_2[2],piVar1,param_4));
    piVar1[2] = iVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int *)(piVar3);
}


// Reference entry 102bc860; body size 119 bytes.
#line 1 "ENTRY_102bc860"

undefined4 * __thiscall Recovered_Bulk::FUN_102bc860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152334d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar1 = (undefined4)(*param_1);
  local_8 = (undefined4)(0);
  puVar2 = (undefined4 *)(operator_new(0x28));
  thunk_FUN_10118c40(param_2);
  *puVar2 = (undefined4)(uVar1);
  puVar2[1] = uVar1;
  puVar2[2] = uVar1;
  *(undefined2 *)(puVar2 + 3) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(puVar2);
}


// Reference entry 102bcb30; body size 131 bytes.
#line 1 "ENTRY_102bcb30"

void __stdcall FUN_102bcb30(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  do {
    if (cVar1 != '\0') {
      return;
    }
    thunk_FUN_102bcb30(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    uVar3 = (uint)(param_2[9]);
    if (0xf < uVar3) {
      iVar4 = (int)(param_2[4]);
      uVar6 = (uint)(uVar3 + 1);
      iVar5 = (int)(iVar4);
      if (0xfff < uVar6) {
        iVar5 = (int)(*(int *)(iVar4 + -4));
        uVar6 = (uint)(uVar3 + 0x24);
        if (0x1f < (iVar4 - iVar5) - 4U) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(iVar5,uVar6);
    }
    param_2[8] = 0;
    param_2[9] = 0xf;
    *(undefined1 *)(param_2 + 4) = 0;
    thunk_FUN_1148a50e(param_2,0x28);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_2 = (int *)(piVar2);
  } while( true );
}


// Reference entry 102bcbe0; body size 131 bytes.
#line 1 "ENTRY_102bcbe0"

void __stdcall FUN_102bcbe0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  do {
    if (cVar1 != '\0') {
      return;
    }
    thunk_FUN_102bcbe0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    uVar3 = (uint)(param_2[9]);
    if (0xf < uVar3) {
      iVar4 = (int)(param_2[4]);
      uVar6 = (uint)(uVar3 + 1);
      iVar5 = (int)(iVar4);
      if (0xfff < uVar6) {
        iVar5 = (int)(*(int *)(iVar4 + -4));
        uVar6 = (uint)(uVar3 + 0x24);
        if (0x1f < (iVar4 - iVar5) - 4U) {
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(iVar5,uVar6);
    }
    param_2[8] = 0;
    param_2[9] = 0xf;
    *(undefined1 *)(param_2 + 4) = 0;
    thunk_FUN_1148a50e(param_2,0x28);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_2 = (int *)(piVar2);
  } while( true );
}


// Reference entry 102bcc90; body size 127 bytes.
#line 1 "ENTRY_102bcc90"

int * __thiscall Recovered_Bulk::FUN_102bcc90(int *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar4 = (int)(*param_1);
  puVar7 = (undefined4 *)(*(undefined4 **)(iVar4 + 4));
  *param_2 = (int)((int)puVar7);
  cVar1 = (char)(*(char *)((int)puVar7 + 0xd));
  param_2[1] = 0;
  param_2[2] = iVar4;
  if (cVar1 == '\0') {
    uVar2 = (undefined4)(param_3[4]);
    uVar3 = (uint)(param_3[5]);
    do {
      *param_2 = (int)((int)puVar7);
      puVar6 = (undefined4 *)(param_3);
      if (0xf < uVar3) {
        puVar6 = (undefined4 *)((undefined4 *)*param_3);
      }
      puVar5 = (undefined4 *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        puVar5 = (undefined4 *)((undefined4 *)puVar7[4]);
      }
      iVar4 = (int)(thunk_FUN_102bce30(puVar5,puVar7[8],puVar6,uVar2));
      if (-1 < iVar4) {
        param_2[2] = (int)puVar7;
        puVar7 = (undefined4 *)((undefined4 *)*puVar7);
      }
      else {
        puVar7 = (undefined4 *)((undefined4 *)puVar7[2]);
      }
      param_2[1] = (uint)(-1 < iVar4);
    } while (*(char *)((int)puVar7 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 102bcd50; body size 90 bytes.
#line 1 "ENTRY_102bcd50"

void FUN_102bcd50(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (uint)(*(uint *)(param_2 + 0x24));
  if (0xf < uVar1) {
    iVar2 = (int)(*(int *)(param_2 + 0x10));
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
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0xf;
  *(undefined1 *)(param_2 + 0x10) = 0;
  thunk_FUN_1148a50e(param_2,0x28);
  return;
}


// Reference entry 102bd350; body size 220 bytes.
#line 1 "ENTRY_102bd350"

int * __thiscall Recovered_Bulk::FUN_102bd350(int *param_2)
{
  int *param_1 = (int *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152340d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  param_1[1] = 0;
  pvVar7 = (void *)(operator_new(0x28));
  *(void **)pvVar7 = (void *)(pvVar7);
  *(void **)((int)pvVar7 + 4) = pvVar7;
  *(void **)((int)pvVar7 + 8) = pvVar7;
  *(undefined2 *)((int)pvVar7 + 0xc) = 0x101;
  *param_1 = (int)((int)pvVar7);
  local_8 = (undefined4)(0);
  uVar8 = (undefined4)(thunk_FUN_102bc730(*(undefined4 *)(*param_2 + 4),pvVar7,param_2));
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
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102be420; body size 79 bytes.
#line 1 "ENTRY_102be420"

void __thiscall Recovered_Bulk::FUN_102be420(int param_2)
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


// Reference entry 102be520; body size 83 bytes.
#line 1 "ENTRY_102be520"

void __thiscall Recovered_Bulk::FUN_102be520(int *param_2)
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


// Reference entry 102beb10; body size 112 bytes.
#line 1 "ENTRY_102beb10"

undefined4 * FUN_102beb10(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11523724);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x38));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_102bd750(uVar1));
  }
  local_8 = (undefined4)(0xffffffff);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102c0350; body size 76 bytes.
#line 1 "ENTRY_102c0350"

void __fastcall FUN_102c0350(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11523a40);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c03d0; body size 110 bytes.
#line 1 "ENTRY_102c03d0"

void __fastcall FUN_102c03d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11523a70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchQuery);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c0460; body size 81 bytes.
#line 1 "ENTRY_102c0460"

int * __thiscall Recovered_Bulk::FUN_102c0460(int *param_2)
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


// Reference entry 102c0550; body size 131 bytes.
#line 1 "ENTRY_102c0550"

undefined4 * __thiscall Recovered_Bulk::FUN_102c0550(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11523aa0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchQuery);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102c0620; body size 89 bytes.
#line 1 "ENTRY_102c0620"

undefined4 * FUN_102c0620(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x10));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCSearchQuery);
    piVar1[2] = 0;
    piVar1[3] = 0;
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102c0be0; body size 80 bytes.
#line 1 "ENTRY_102c0be0"

void __thiscall Recovered_Bulk::FUN_102c0be0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xc));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 8) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


// Reference entry 102c12f0; body size 93 bytes.
#line 1 "ENTRY_102c12f0"

int __thiscall Recovered_Bulk::FUN_102c12f0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11523efd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102c1370; body size 126 bytes.
#line 1 "ENTRY_102c1370"

int __thiscall Recovered_Bulk::FUN_102c1370(void)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11523f45);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(1);
  if (in_stack_00000028 != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*in_stack_00000028)(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    if (in_stack_00000028 != (int *)0x0) {
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102c15f0; body size 76 bytes.
#line 1 "ENTRY_102c15f0"

void __fastcall FUN_102c15f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524010);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c1660; body size 68 bytes.
#line 1 "ENTRY_102c1660"

void __fastcall FUN_102c1660(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524040);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c1750; body size 110 bytes.
#line 1 "ENTRY_102c1750"

void __fastcall FUN_102c1750(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115240a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCertificateChain);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c1970; body size 131 bytes.
#line 1 "ENTRY_102c1970"

undefined4 * __thiscall Recovered_Bulk::FUN_102c1970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11524100);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCertificateChain);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102c1c40; body size 130 bytes.
#line 1 "ENTRY_102c1c40"

void __thiscall Recovered_Bulk::FUN_102c1c40(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152416d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)0x0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(0);
  (**(code **)(**(int **)(param_1 + 8) + 0x20))(param_2);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c1e60; body size 278 bytes.
#line 1 "ENTRY_102c1e60"

undefined4 * FUN_102c1e60(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524233);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)(operator_new(0x10));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCCertificateChain);
    pvVar3 = (void *)(operator_new(0x10));
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_103d56e0(uVar1));
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar2[2] = (int)piVar4;
    piVar2[3] = 0;
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      piVar2[3] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  piVar4 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar2 != (int *)0x0) {
    piVar4 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) != thunk_FUN_102c2040) {
      piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(3);
  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102c20b0; body size 81 bytes.
#line 1 "ENTRY_102c20b0"

void __stdcall FUN_102c20b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *_Memory;
  
  (**(code **)(*param_1 + 0x14))();
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x1c))());
  _Memory = (void *)((void *)thunk_FUN_1148b586(uVar2));
  iVar1 = (int)(*param_1);
  uVar2 = (undefined4)((**(code **)(iVar1 + 0x1c))());
  (**(code **)(iVar1 + 0x20))(0,_Memory,uVar2);
  thunk_FUN_112af4e0("SCSecurityContext",4,"Certificate data dump: %s",_Memory);
  free(_Memory);
  return;
}


// Reference entry 102c2d20; body size 91 bytes.
#line 1 "ENTRY_102c2d20"

int * __thiscall Recovered_Bulk::FUN_102c2d20(int *param_2)
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


// Reference entry 102c2ea0; body size 91 bytes.
#line 1 "ENTRY_102c2ea0"

int * __thiscall Recovered_Bulk::FUN_102c2ea0(int *param_2)
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


// Reference entry 102c2fc0; body size 91 bytes.
#line 1 "ENTRY_102c2fc0"

int * __thiscall Recovered_Bulk::FUN_102c2fc0(int *param_2)
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


// Reference entry 102c3040; body size 91 bytes.
#line 1 "ENTRY_102c3040"

int * __thiscall Recovered_Bulk::FUN_102c3040(int *param_2)
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


// Reference entry 102c3d00; body size 93 bytes.
#line 1 "ENTRY_102c3d00"

int __thiscall Recovered_Bulk::FUN_102c3d00(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115246ad);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102c3d90; body size 93 bytes.
#line 1 "ENTRY_102c3d90"

int __thiscall Recovered_Bulk::FUN_102c3d90(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115246ed);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102c3e30; body size 99 bytes.
#line 1 "ENTRY_102c3e30"

undefined4 * __fastcall FUN_102c3e30(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152472d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIEventSourceImpl);
  thunk_FUN_103d5ff0(uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102c44d0; body size 177 bytes.
#line 1 "ENTRY_102c44d0"

void __fastcall FUN_102c44d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524930);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
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
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c45c0; body size 177 bytes.
#line 1 "ENTRY_102c45c0"

void __fastcall FUN_102c45c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524960);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
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
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c46b0; body size 76 bytes.
#line 1 "ENTRY_102c46b0"

void __fastcall FUN_102c46b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524990);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c4720; body size 76 bytes.
#line 1 "ENTRY_102c4720"

void __fastcall FUN_102c4720(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115249c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c4790; body size 76 bytes.
#line 1 "ENTRY_102c4790"

void __fastcall FUN_102c4790(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115249f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c4800; body size 76 bytes.
#line 1 "ENTRY_102c4800"

void __fastcall FUN_102c4800(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524a20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c4870; body size 76 bytes.
#line 1 "ENTRY_102c4870"

void __fastcall FUN_102c4870(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524a50);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c48e0; body size 76 bytes.
#line 1 "ENTRY_102c48e0"

void __fastcall FUN_102c48e0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524a80);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c4950; body size 76 bytes.
#line 1 "ENTRY_102c4950"

void __fastcall FUN_102c4950(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524ab0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c49c0; body size 76 bytes.
#line 1 "ENTRY_102c49c0"

void __fastcall FUN_102c49c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524ae0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c4a30; body size 68 bytes.
#line 1 "ENTRY_102c4a30"

void __fastcall FUN_102c4a30(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524b10);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c4a90; body size 68 bytes.
#line 1 "ENTRY_102c4a90"

void __fastcall FUN_102c4a90(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524b40);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c4c10; body size 92 bytes.
#line 1 "ENTRY_102c4c10"

void __fastcall FUN_102c4c10(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11524c00);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c4de0; body size 308 bytes.
#line 1 "ENTRY_102c4de0"

void __fastcall FUN_102c4de0(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11524c30);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAccountManager);
  param_1[2] = (uint)&ghidra_vftable_SCServiceAccountManager;
  param_1[3] = (uint)&ghidra_vftable_SCServiceAccountManager;
  if ((int *)param_1[0xd] != (int *)0x0) {
    cVar2 = (char)((**(code **)(*(int *)param_1[0xd] + 0x1c))(uVar3));
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0xd] + 0x18))();
      (**(code **)(param_1[0xc] + 4))();
    }
  }
  if ((int *)param_1[0x27] != (int *)0x0) {
    cVar2 = (char)((**(code **)(*(int *)param_1[0x27] + 0x1c))());
    if (cVar2 != '\0') {
      (**(code **)(*(int *)param_1[0x27] + 0x18))();
      (**(code **)(param_1[0x26] + 4))();
    }
  }
  if (param_1[10] != 0) {
    thunk_FUN_104dec20();
    if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[10])(1);
    }
    param_1[10] = 0;
  }
  thunk_FUN_102c44d0();
  thunk_FUN_102c45c0();
  piVar1 = (int *)((int *)param_1[9]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[3] = (uint)&ghidra_vftable_SCIOpCBDelegate;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCSwfObjHHListener;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c5210; body size 81 bytes.
#line 1 "ENTRY_102c5210"

int * __thiscall Recovered_Bulk::FUN_102c5210(int *param_2)
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


// Reference entry 102c5280; body size 81 bytes.
#line 1 "ENTRY_102c5280"

int * __thiscall Recovered_Bulk::FUN_102c5280(int *param_2)
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


// Reference entry 102c5750; body size 113 bytes.
#line 1 "ENTRY_102c5750"

undefined4 * __thiscall Recovered_Bulk::FUN_102c5750(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11524d70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWrappedHelper);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102c6b80; body size 88 bytes.
#line 1 "ENTRY_102c6b80"

void __fastcall FUN_102c6b80(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x28) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
      (**(code **)(*(int *)(param_1 + 0x24) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x90) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x90) + 0x18))();
                    
                    
      (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 102c6bf0; body size 94 bytes.
#line 1 "ENTRY_102c6bf0"

undefined4 * FUN_102c6bf0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 3) {
    *param_1 = (undefined4)(0);
  }
  else {
    piVar1 = (int *)(operator_new(0xc));
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)((int *)0x0);
    }
    else {
      *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
      piVar1[1] = 0;
      g_lSCObjCount = (int)(g_lSCObjCount + 1);
      *piVar1 = (int)((int)(uint)&ghidra_vftable_SCServiceAccountFilter);
      piVar1[2] = param_2;
    }
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102c8100; body size 191 bytes.
#line 1 "ENTRY_102c8100"

int __thiscall Recovered_Bulk::FUN_102c8100(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11525754);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar4 = (int)(*(int *)(param_1 + 4));
  if (iVar4 == 0) {
    pvVar2 = (void *)(operator_new(0x30));
    local_8 = (undefined4)(0);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_10b7c8e0(param_2));
    }
    piVar5 = (int *)(*(int **)(param_1 + 4));
    local_8 = (undefined4)(0xffffffff);
    if (piVar3 != (int *)(piVar5)) {
      piVar5 = (int *)(*(int **)(param_1 + 8));
      if (piVar5 != (int *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        (**(code **)(*piVar5 + 8))(uVar1);
      }
      *(int **)(param_1 + 4) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        piVar5 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 8) = piVar3;
        (**(code **)(*piVar3 + 4))();
        piVar5 = (int *)(*(int **)(param_1 + 4));
      }
    }
    (**(code **)(*piVar5 + 0x7c))();
    iVar4 = (int)(*(int *)(param_1 + 4));
  }
  ExceptionList = (void *)(local_10);
  return (int)(iVar4);
}


// Reference entry 102c8500; body size 135 bytes.
#line 1 "ENTRY_102c8500"

void __fastcall FUN_102c8500(int param_1)

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


// Reference entry 102c85b0; body size 135 bytes.
#line 1 "ENTRY_102c85b0"

void __fastcall FUN_102c85b0(int param_1)

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


// Reference entry 102c8b90; body size 101 bytes.
#line 1 "ENTRY_102c8b90"

bool __thiscall Recovered_Bulk::FUN_102c8b90(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  iVar1 = (int)(thunk_FUN_110828b0());
  if (iVar1 != 0) {
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)((undefined1 *)*param_2);
    }
    piVar2 = (int *)((int *)thunk_FUN_110935f0(puVar3,0));
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)((**(code **)(*piVar2 + 0x54))());
      if (iVar1 == 1) {
        iVar1 = (int)((**(code **)(*piVar2 + 0x5c))());
        if ((*(byte *)(iVar1 + 500) & 1) != 0) {
          iVar1 = (int)((**(code **)(*param_1 + 0x44))(param_2));
          return (bool)(iVar1 == 0);
        }
      }
    }
  }
  return (bool)(false);
}


// Reference entry 102c8c20; body size 392 bytes.
#line 1 "ENTRY_102c8c20"

int * FUN_102c8c20(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152591d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)(thunk_FUN_110db7b0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  while( true ) {
    if (iVar3 == 0) {
      *param_1 = (int)(0);
      ExceptionList = (void *)(local_10);
      return (int *)(param_1);
    }
    thunk_FUN_110db240(&local_14);
    local_8 = (undefined4)(0);
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)((undefined1 *)*param_2);
    }
    cVar2 = (char)(thunk_FUN_111a0720(puVar6));
    piVar1 = (int *)(local_14);
    local_8 = (undefined4)(1);
    if (((local_14 != (int *)0x0) && (piVar5 = local_14 + -4, local_14[-4] < 0xffff)) &&
       (iVar4 = thunk_FUN_1123fcd0(piVar5), iVar4 == 0)) {
      piVar1[-2] = 0;
      piVar1[-3] = 0;
      thunk_FUN_113cfb70(piVar1,piVar1[-1]);
      free(piVar5);
    }
    local_8 = (undefined4)(0xffffffff);
    if (cVar2 != '\0') break;
    iVar3 = (int)(thunk_FUN_110db7b0());
  }
  local_14 = (int *)((int *)0x0);
  local_8 = (undefined4)(2);
  piVar5 = (int *)((int *)thunk_FUN_102c7a50(&param_2,iVar3));
  piVar1 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *piVar5 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  local_14 = (int *)(piVar5);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102c8e30; body size 118 bytes.
#line 1 "ENTRY_102c8e30"

void __stdcall FUN_102c8e30(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11525950);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102c8fa0; body size 432 bytes.
#line 1 "ENTRY_102c8fa0"

bool __fastcall FUN_102c8fa0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *local_38;
  int *local_34;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115259f5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int)(param_1);
  thunk_FUN_110828b0(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x34) != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(*(undefined1 **)(param_1 + 0x34));
  }
  iVar3 = (int)(thunk_FUN_110935f0(puVar7,1));
  if (iVar3 == 0) {
    ExceptionList = (void *)(local_10);
    return (bool)(false);
  }
  uVar4 = (undefined4)(thunk_FUN_1037a2b0(&local_18));
  local_8 = (undefined4)(0);
  thunk_FUN_101bf370(uVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar5 = (int *)((int *)(**(code **)(*local_38 + 0x1cc))(&local_20));
  local_1c = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar5 = (int)(0);
  if (local_1c == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*local_1c + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  local_18 = (int *)(piVar5);
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  piVar6 = (int *)((int *)thunk_FUN_102cf840(&local_28));
  piVar1 = (int *)((int *)*piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  *piVar6 = (int)(0);
  local_24 = (int *)(piVar1);
  if (piVar1 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  local_20 = (int *)(piVar6);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  cVar2 = (char)((**(code **)(*piVar1 + 0x30))(param_1 + 0x34));
  iVar3 = (int)(local_14);
  if (cVar2 != '\0') {
    if (*(int **)(local_14 + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(local_14 + 0x30) + 0x188))(local_14 + 0x34);
      if (*(int *)(iVar3 + 0x40) != 0) {
        (**(code **)(**(int **)(iVar3 + 0x30) + 0x14))(iVar3 + 0x2c);
      }
    }
    thunk_FUN_11094310();
  }
  iVar3 = (int)(*(int *)(local_14 + 0x30));
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  local_8 = (undefined4)(0xe);
  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (bool)(iVar3 != 0);
}


// Reference entry 102ca630; body size 66 bytes.
#line 1 "ENTRY_102ca630"

undefined4 __thiscall Recovered_Bulk::FUN_102ca630(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x34))(param_2));
  if (cVar1 != '\0') {
    return (undefined4)(1);
  }
  thunk_FUN_104fed90(param_2);
  thunk_FUN_104fd9b0(param_2);
  thunk_FUN_1109f7f0();
  uVar2 = (undefined4)(thunk_FUN_110a3100());
  return (undefined4)(uVar2);
}


// Reference entry 102ca690; body size 80 bytes.
#line 1 "ENTRY_102ca690"

void __thiscall Recovered_Bulk::FUN_102ca690(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 0x40)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x44));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(param_1 + 0x40) = param_2;
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x44) = piVar1;
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


// Reference entry 102caa30; body size 91 bytes.
#line 1 "ENTRY_102caa30"

int * __thiscall Recovered_Bulk::FUN_102caa30(int *param_2)
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


// Reference entry 102caab0; body size 91 bytes.
#line 1 "ENTRY_102caab0"

int * __thiscall Recovered_Bulk::FUN_102caab0(int *param_2)
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


// Reference entry 102cb090; body size 111 bytes.
#line 1 "ENTRY_102cb090"

void FUN_102cb090(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11525f50);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 2) {
    piVar1 = (int *)((int *)param_1[1]);
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      *param_1 = (undefined4)(0);
      param_1[1] = 0;
      (**(code **)(*piVar1 + 8))(uVar3);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cb1b0; body size 150 bytes.
#line 1 "ENTRY_102cb1b0"

undefined4 __thiscall Recovered_Bulk::FUN_102cb1b0(undefined4 param_2,int *param_3)
{
  undefined4 param_1 = (undefined4 )this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11525f80);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_102cb1b0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    piVar3 = (int *)((int *)param_3[6]);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      param_3[5] = 0;
      param_3[6] = 0;
      (**(code **)(*piVar3 + 8))(uVar5);
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x1c);
    ppvVar4 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 102cb2c0; body size 73 bytes.
#line 1 "ENTRY_102cb2c0"

int * __thiscall Recovered_Bulk::FUN_102cb2c0(int *param_2,uint *param_3)
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


// Reference entry 102cb340; body size 98 bytes.
#line 1 "ENTRY_102cb340"

void FUN_102cb340(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11525fb0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 0x18));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_1148a50e(param_2,0x1c);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cb410; body size 108 bytes.
#line 1 "ENTRY_102cb410"

void __thiscall Recovered_Bulk::FUN_102cb410(uint param_2,undefined1 *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  uVar3 = (uint)(iVar1 - iVar2 >> 3);
  if (param_2 < uVar3) {
    iVar2 = (int)(iVar2 + param_2 * 8);
    thunk_FUN_102cb090(iVar2,iVar1,param_1);
    param_1[1] = iVar2;
    return;
  }
  if (uVar3 < param_2) {
    if ((uint)(param_1[2] - iVar2 >> 3) < param_2) {
      thunk_FUN_102cb4a0(param_2,param_3);
      return;
    }
    iVar2 = (int)(thunk_FUN_102ce2f0(iVar1,param_2 - uVar3,*param_3));
    param_1[1] = iVar2;
  }
  return;
}


// Reference entry 102cb730; body size 221 bytes.
#line 1 "ENTRY_102cb730"

int * __thiscall Recovered_Bulk::FUN_102cb730(int *param_2,uint *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152602d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102cb2c0(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(uint *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_102cddc0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 102cb990; body size 130 bytes.
#line 1 "ENTRY_102cb990"

int __thiscall Recovered_Bulk::FUN_102cb990(int *param_2,undefined4 param_3)
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
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 102cba40; body size 130 bytes.
#line 1 "ENTRY_102cba40"

int __thiscall Recovered_Bulk::FUN_102cba40(int *param_2,undefined4 param_3)
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
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 102cbb70; body size 85 bytes.
#line 1 "ENTRY_102cbb70"

void FUN_102cbb70(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115260a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_2 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cbbe0; body size 84 bytes.
#line 1 "ENTRY_102cbbe0"

void FUN_102cbbe0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115260d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[1]);
  if (piVar1 != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cbd20; body size 89 bytes.
#line 1 "ENTRY_102cbd20"

int * __thiscall Recovered_Bulk::FUN_102cbd20(int param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152610d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102cc240; body size 93 bytes.
#line 1 "ENTRY_102cc240"

int __thiscall Recovered_Bulk::FUN_102cc240(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152618d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102cc2d0; body size 93 bytes.
#line 1 "ENTRY_102cc2d0"

int __thiscall Recovered_Bulk::FUN_102cc2d0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115261cd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102cc7b0; body size 88 bytes.
#line 1 "ENTRY_102cc7b0"

void __fastcall FUN_102cc7b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11526340);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  local_8 = (undefined4)(0);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cc870; body size 177 bytes.
#line 1 "ENTRY_102cc870"

void __fastcall FUN_102cc870(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11526370);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
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
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cc960; body size 177 bytes.
#line 1 "ENTRY_102cc960"

void __fastcall FUN_102cc960(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115263a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
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
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101d3630();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cca50; body size 76 bytes.
#line 1 "ENTRY_102cca50"

void __fastcall FUN_102cca50(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115263d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102ccac0; body size 76 bytes.
#line 1 "ENTRY_102ccac0"

void __fastcall FUN_102ccac0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11526400);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102ccb30; body size 76 bytes.
#line 1 "ENTRY_102ccb30"

void __fastcall FUN_102ccb30(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11526430);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cccd0; body size 111 bytes.
#line 1 "ENTRY_102cccd0"

void __fastcall FUN_102cccd0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11526490);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)(*(int *)(param_1 + 4));
  if (iVar3 != 0) {
    piVar1 = (int *)(*(int **)(iVar3 + 0x18));
    local_8 = (undefined4)(0);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cce40; body size 84 bytes.
#line 1 "ENTRY_102cce40"

void __fastcall FUN_102cce40(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115264c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cceb0; body size 96 bytes.
#line 1 "ENTRY_102cceb0"

void __fastcall FUN_102cceb0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102cb090(*param_1,param_1[1],param_1);
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


// Reference entry 102cd1d0; body size 81 bytes.
#line 1 "ENTRY_102cd1d0"

int * __thiscall Recovered_Bulk::FUN_102cd1d0(int *param_2)
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


// Reference entry 102cd2a0; body size 81 bytes.
#line 1 "ENTRY_102cd2a0"

int * __thiscall Recovered_Bulk::FUN_102cd2a0(int *param_2)
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


// Reference entry 102cd3f0; body size 188 bytes.
#line 1 "ENTRY_102cd3f0"

int __thiscall Recovered_Bulk::FUN_102cd3f0(uint *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152652d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_102cb2c0(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(uint *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_102cddc0(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x14);
}


// Reference entry 102cd910; body size 106 bytes.
#line 1 "ENTRY_102cd910"

undefined4 * __thiscall Recovered_Bulk::FUN_102cd910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115265e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102cd9f0; body size 107 bytes.
#line 1 "ENTRY_102cd9f0"

int __thiscall Recovered_Bulk::FUN_102cd9f0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11526610);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)(*(int **)(param_1 + 8));
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102cdbe0; body size 104 bytes.
#line 1 "ENTRY_102cdbe0"

void __thiscall Recovered_Bulk::FUN_102cdbe0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102cb090(*param_1,param_1[1],param_1);
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


// Reference entry 102ce270; body size 96 bytes.
#line 1 "ENTRY_102ce270"

void __fastcall FUN_102ce270(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_102cb090(*param_1,param_1[1],param_1);
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


// Reference entry 102cf370; body size 82 bytes.
#line 1 "ENTRY_102cf370"

undefined4 * FUN_102cf370(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0xc));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCServiceDescriptorFilter);
    piVar1[2] = param_2;
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 102cf520; body size 77 bytes.
#line 1 "ENTRY_102cf520"

void __fastcall FUN_102cf520(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_10b7b6a0();
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
                    
                    
  (**(code **)(*(int *)(param_1 + 0x14) + 8))();
  return;
}


// Reference entry 102cf600; body size 69 bytes.
#line 1 "ENTRY_102cf600"

void __thiscall Recovered_Bulk::FUN_102cf600(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_102cb2c0(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 102cf660; body size 311 bytes.
#line 1 "ENTRY_102cf660"

undefined4 * __thiscall Recovered_Bulk::FUN_102cf660(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11526bc4);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar4 = (void *)(operator_new(0x14));
  local_8 = (undefined4)(0);
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)thunk_FUN_103be5e0(uVar3));
  }
  local_8 = (undefined4)(0xffffffff);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (undefined4)(1);
  if (piVar5 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piVar6 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  if ((*(char *)(param_1 + 0x40) == '\0') || (*(char *)(param_1 + 0x148) == '\0')) {
    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    local_8 = (undefined4)(5);
  }
  else {
    uVar7 = (uint)(0);
    uVar3 = (uint)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 3);
    if (uVar3 != 0) {
      do {
        uVar1 = (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x34) + uVar7 * 8));
        if ((param_3 == (int *)0x0) ||
           (cVar2 = (**(code **)(*param_3 + 0x14))(uVar1), cVar2 != '\0')) {
          thunk_FUN_103be9e0(uVar1,0xffffffff);
        }
        uVar7 = (uint)(uVar7 + 1);
      } while (uVar7 < uVar3);
    }
    *param_2 = (undefined4)(piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    local_8 = (undefined4)(6);
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 102cf840; body size 225 bytes.
#line 1 "ENTRY_102cf840"

undefined4 * __thiscall Recovered_Bulk::FUN_102cf840(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11526c17);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)(*(int **)(param_1 + 0x54));
  if (piVar3 == (int *)0x0) {
    pvVar2 = (void *)(operator_new(0x100));
    local_8 = (undefined4)(0);
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)thunk_FUN_102c3f10(param_1));
    }
    piVar4 = (int *)(*(int **)(param_1 + 0x54));
    local_8 = (undefined4)(0xffffffff);
    if (piVar3 != (int *)(piVar4)) {
      piVar4 = (int *)(*(int **)(param_1 + 0x58));
      if (piVar4 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        (**(code **)(*piVar4 + 8))();
      }
      *(int **)(param_1 + 0x54) = piVar3;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
        piVar4 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        *(int **)(param_1 + 0x58) = piVar3;
        (**(code **)(*piVar3 + 4))();
        piVar4 = (int *)(*(int **)(param_1 + 0x54));
      }
    }
    thunk_FUN_10b8e970(-(uint)(piVar4 != (int *)0x0) & (uint)(piVar4 + 6));
    piVar3 = (int *)(*(int **)(param_1 + 0x54));
  }
  *param_2 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 102cfe50; body size 266 bytes.
#line 1 "ENTRY_102cfe50"

void __fastcall FUN_102cfe50(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11526d34);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (uint)(thunk_FUN_110c2600(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar6 = (uint)(0);
  if (uVar2 != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x34) + uVar6 * 8) == 0) {
        uVar3 = (undefined4)(thunk_FUN_110c2570(uVar6));
        pvVar4 = (void *)(operator_new(0x18));
        local_8 = (undefined4)(0);
        if (pvVar4 == (void *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)thunk_FUN_1039f6c0(uVar3));
        }
        piVar7 = (int *)((int *)(*(int *)(param_1 + 0x34) + uVar6 * 8));
        local_8 = (undefined4)(0xffffffff);
        if (piVar5 != (int *)*piVar7) {
          piVar1 = (int *)((int *)piVar7[1]);
          if (piVar1 != (int *)0x0) {
            *piVar7 = (int)(0);
            piVar7[1] = 0;
            (**(code **)(*piVar1 + 8))();
          }
          *piVar7 = (int)((int)piVar5);
          if (piVar5 == (int *)0x0) {
            piVar7[1] = 0;
          }
          else {
            piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
            piVar7[1] = (int)piVar5;
            (**(code **)(*piVar5 + 4))();
          }
        }
      }
      uVar6 = (uint)(uVar6 + 1);
    } while (uVar6 < uVar2);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102cffa0; body size 135 bytes.
#line 1 "ENTRY_102cffa0"

void __fastcall FUN_102cffa0(int param_1)

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


// Reference entry 102d0050; body size 135 bytes.
#line 1 "ENTRY_102d0050"

void __fastcall FUN_102d0050(int param_1)

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


// Reference entry 102d0460; body size 1105 bytes.
#line 1 "ENTRY_102d0460"

int * __thiscall Recovered_Bulk::FUN_102d0460(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  int *local_5c;
  int *local_54;
  int *local_4c;
  int *local_44;
  int *local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11526ea5);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_24 = (int *)(param_1);
  piVar5 = (int *)((int *)createPropertyBag());
  piVar1 = (int *)((int *)*piVar5);
  local_8 = (undefined4)(0);
  *piVar5 = (int)(0);
  if (piVar1 == (int *)0x0) {
    local_5c = (int *)((int *)0x0);
  }
  else {
    local_5c = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar4));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  piVar5 = (int *)(operator_new(0xc));
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    *piVar5 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar5[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar5 = (int)((int)(uint)&ghidra_vftable_SCServiceDescriptorFilter);
    piVar5[2] = 0;
    (**(code **)(*piVar5 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (piVar5 == (int *)0x0) {
    local_54 = (int *)((int *)0x0);
  }
  else {
    local_54 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  piVar6 = (int *)((int *)(**(code **)(*param_1 + 0x1c))(&local_20,piVar5));
  piVar5 = (int *)((int *)*piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  *piVar6 = (int)(0);
  if (piVar5 == (int *)0x0) {
    local_4c = (int *)((int *)0x0);
  }
  else {
    local_4c = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar5 + 0x18))();
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep((char *)(local_24 + 0x52));
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("ServiceListVersion");
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  (**(code **)(*piVar1 + 0x1c))(&local_14,&local_1c);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  iVar7 = (int)(thunk_FUN_1109f7f0());
  pcVar2 = (char *)(*(char **)(iVar7 + 0xfc));
  if ((pcVar2 != (char *)0x0) && (*(int *)(pcVar2 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0(pcVar2 + -0x10);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  pcVar8 = (char *)("");
  if (pcVar2 != (char *)0x0) {
    pcVar8 = (char *)(pcVar2);
  }
  ((SCStr *)((SCStr *)&local_18))->int_allocRep(pcVar8);
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  if (((pcVar2 != (char *)0x0) && (piVar6 = (int *)(pcVar2 + -0x10), *piVar6 < 0xffff)) &&
     (iVar7 = thunk_FUN_1123fcd0(piVar6), iVar7 == 0)) {
    pcVar2[-0xffffffff00000008] = '\0';
    pcVar2[-0xffffffff00000007] = '\0';
    pcVar2[-0xffffffff00000006] = '\0';
    pcVar2[-0xffffffff00000005] = '\0';
    pcVar2[-0xffffffff0000000c] = '\0';
    pcVar2[-0xffffffff0000000b] = '\0';
    pcVar2[-0xffffffff0000000a] = '\0';
    pcVar2[-0xffffffff00000009] = '\0';
    thunk_FUN_113cfb70(pcVar2,*(undefined4 *)(pcVar2 + -4));
    free(piVar6);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SonosId");
  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  (**(code **)(*piVar1 + 0x1c))(&local_1c,&local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 0x15;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  piVar9 = (int *)((int *)createPropertyBag());
  piVar6 = (int *)((int *)*piVar9);
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  *piVar9 = (int)(0);
  if (piVar6 == (int *)0x0) {
    local_44 = (int *)((int *)0x0);
  }
  else {
    local_44 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x19;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x18;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("Descriptors");
  *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
  (**(code **)(*piVar1 + 0x4c))(&local_1c,piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x18)));
  cVar3 = (char)((**(code **)(*piVar5 + 0x1c))());
  while (cVar3 != '\0') {
    piVar10 = (int *)((int *)thunk_FUN_102caef0(&local_20,piVar5));
    piVar9 = (int *)((int *)*piVar10);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
    *piVar10 = (int)(0);
    if (piVar9 == (int *)0x0) {
      piVar10 = (int *)((int *)0x0);
    }
    else {
      piVar10 = (int *)((int *)(**(code **)(*piVar9 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
    if (piVar9 == (int *)0x0) {
      piVar13 = (int *)((int *)0x0);
    }
    else {
      ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIPropertyBag");
      *(unsigned char *)((char *)&local_8 + 0) = 0x20;
      puVar11 = (undefined4 *)((undefined4 *)(**(code **)*piVar9)(&local_28,&local_14));
      piVar13 = (int *)((int *)*puVar11);
      *puVar11 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x22;
      if (local_28 != (int *)0x0) {
        (**(code **)(*local_28 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x23;
      ((SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (int *)((int *)0x0);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x24;
    if (piVar13 != (int *)0x0) {
      uVar12 = (undefined4)((**(code **)(*piVar9 + 0x20))(&local_1c));
      *(unsigned char *)((char *)&local_8 + 0) = 0x25;
      (**(code **)(*piVar6 + 0x4c))(uVar12,piVar13);
      *(unsigned char *)((char *)&local_8 + 0) = 0x26;
      ((SCStr *)((SCStr *)&local_1c))->int_release();
      local_1c = (undefined4)(0);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x27;
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x28;
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x18)));
    cVar3 = (char)((**(code **)(*piVar5 + 0x1c))());
  }
  *param_2 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 0x29;
  if (local_44 != (int *)0x0) {
    (**(code **)(*local_44 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x2a;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x2b;
  if (local_4c != (int *)0x0) {
    (**(code **)(*local_4c + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x2c)));
  if (local_54 != (int *)0x0) {
    (**(code **)(*local_54 + 8))();
  }
  local_8 = (undefined4)(0x2d);
  if (local_5c != (int *)0x0) {
    (**(code **)(*local_5c + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 102d09d0; body size 386 bytes.
#line 1 "ENTRY_102d09d0"

int * __thiscall Recovered_Bulk::FUN_102d09d0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11526f1c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (uint)(thunk_FUN_110c2600(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar7 = (uint)(0);
  if (uVar2 != 0) {
    do {
      uVar3 = (undefined4)(thunk_FUN_110c2570(uVar7));
      iVar4 = (int)(thunk_FUN_110c2bc0());
      if (iVar4 == param_3) {
        iVar4 = (int)(uVar7 * 8);
        if (*(int *)(*(int *)(param_1 + 0x34) + iVar4) == 0) {
          pvVar5 = (void *)(operator_new(0x18));
          local_8 = (undefined4)(0);
          if (pvVar5 == (void *)0x0) {
            piVar6 = (int *)((int *)0x0);
          }
          else {
            piVar6 = (int *)((int *)thunk_FUN_1039f6c0(uVar3));
          }
          piVar8 = (int *)((int *)(*(int *)(param_1 + 0x34) + iVar4));
          local_8 = (undefined4)(0xffffffff);
          if (piVar6 != (int *)*piVar8) {
            piVar1 = (int *)((int *)piVar8[1]);
            if (piVar1 != (int *)0x0) {
              *piVar8 = (int)(0);
              piVar8[1] = 0;
              (**(code **)(*piVar1 + 8))();
            }
            *piVar8 = (int)((int)piVar6);
            if (piVar6 == (int *)0x0) {
              piVar8[1] = 0;
            }
            else {
              piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
              piVar8[1] = (int)piVar6;
              (**(code **)(*piVar6 + 4))();
            }
          }
        }
        piVar6 = (int *)(*(int **)(*(int *)(param_1 + 0x34) + 4 + iVar4));
        piVar8 = (int *)(*(int **)(*(int *)(param_1 + 0x34) + iVar4));
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))();
        }
        local_8 = (undefined4)(1);
        *param_2 = (int)((int)piVar8);
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))();
        }
        local_8 = (undefined4)(2);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))();
        }
        ExceptionList = (void *)(local_10);
        return (int *)(param_2);
      }
      uVar7 = (uint)(uVar7 + 1);
    } while (uVar7 < uVar2);
  }
  if (param_3 != 0) {
    thunk_FUN_112af4e0(&DAT_1186d2ee,1,
                       "int_getServiceDescriptorForServiceType() failed to find entry for svcType %d"
                       ,param_3);
  }
  *param_2 = (int)(0);
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 102d0c20; body size 455 bytes.
#line 1 "ENTRY_102d0c20"

void __fastcall FUN_102d0c20(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  SCLibrary *pSVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  int *piStack_48;
  int **ppiStack_44;
  uint uStack_40;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11526f7d);
  local_10 = (void *)(ExceptionList);
  uStack_40 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (int)(param_1);
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    ppiStack_44 = (int **)((int **)0x102d0c5b);
    cVar4 = (char)((**(code **)(**(int **)(param_1 + 0x7c) + 0x1c))());
    if (cVar4 != '\0') {
      ppiStack_44 = (int **)((int **)0x102d0c68);
      (**(code **)(*(int *)(param_1 + 0x78) + 4))();
    }
  }
  ppiStack_44 = (int **)((int **)0x102d0c6d);
  pSVar5 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ppiStack_44 = (int **)(&local_18);
  piStack_48 = (int *)((int *)0x102d0c78);
  piVar6 = (int *)((int *)(**(code **)(*(int *)pSVar5 + 0x18))());
  piVar1 = (int *)((int *)*piVar6);
  local_8 = (undefined4)(0);
  *piVar6 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    piStack_48 = (int *)((int *)0x102d0c95);
    piVar6 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  piStack_48 = (int *)((int *)0x0);
  if (local_18 != (int *)0x0) {
    piStack_48 = (int *)((int *)0x102d0cae);
    (**(code **)(*local_18 + 8))();
    piStack_48 = (int *)((int *)extraout_ECX);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    ((SCStr *)((SCStr *)&piStack_48))->int_allocRep("HiddenPreloadSvcs");
    piVar7 = (int *)((int *)(**(code **)(*piVar1 + 0x98))(&local_20));
    piVar1 = (int *)((int *)*piVar7);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    *piVar7 = (int)(0);
    local_1c = (int *)(piVar1);
    if (piVar1 == (int *)0x0) {
      piVar7 = (int *)((int *)0x0);
    }
    else {
      piStack_48 = (int *)((int *)0x102d0cef);
      piVar7 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    local_18 = (int *)(piVar7);
    if (local_20 != (int *)0x0) {
      piStack_48 = (int *)((int *)0x102d0d08);
      (**(code **)(*local_20 + 8))();
    }
    iVar3 = (int)(local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (piVar1 != (int *)0x0) {
      piStack_48 = (int *)(&local_28);
      puVar8 = (undefined4 *)((undefined4 *)thunk_FUN_101da240());
      local_20 = (int *)((int *)*puVar8);
      piVar7 = (int *)((int *)0x0);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
      local_1c = (int *)((int *)0x0);
      local_18 = (int *)((int *)0x0);
      piStack_48 = (int *)((int *)0x102d0d40);
      (**(code **)(*(int *)(iVar3 + 0x78) + 4))();
      piVar2 = (int *)(*(int **)(local_14 + 0x80));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(local_14 + 0x7c) = 0;
        *(undefined4 *)(local_14 + 0x80) = 0;
        piStack_48 = (int *)((int *)0x102d0d5b);
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(local_14 + 0x7c) = piVar1;
      piStack_48 = (int *)((int *)0x102d0d68);
      uVar9 = (undefined4)((**(code **)(*piVar1 + 0xc))());
      *(undefined4 *)(local_14 + 0x80) = uVar9;
      if (*(int **)(local_14 + 0x7c) == (int *)0x0) {
        piStack_48 = (int *)((int *)0x11883b7c);
        thunk_FUN_112af4e0("SCLibrary",1);
      }
      else {
        piStack_48 = (int *)(local_20);
        (**(code **)(**(int **)(local_14 + 0x7c) + 0x14))();
      }
      piVar1 = (int *)(local_24);
      *(unsigned char *)((char *)&local_8 + 0) = 10;
      if (local_24 != (int *)0x0) {
        local_28 = (undefined4)(0);
        local_24 = (int *)((int *)0x0);
        piStack_48 = (int *)((int *)0x102d0db4);
        (**(code **)(*piVar1 + 8))();
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
    if (piVar7 != (int *)0x0) {
      piStack_48 = (int *)((int *)0x102d0dc3);
      (**(code **)(*piVar7 + 8))();
    }
  }
  local_8 = (undefined4)(0xc);
  if (piVar6 != (int *)0x0) {
    piStack_48 = (int *)((int *)0x102d0dd5);
    (**(code **)(*piVar6 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d0e60; body size 179 bytes.
#line 1 "ENTRY_102d0e60"

int * __stdcall FUN_102d0e60(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11526fc5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  uVar2 = (undefined4)(thunk_FUN_103a3ed0(param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar3 = (int *)((int *)thunk_FUN_102d09d0(&param_2,uVar2));
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(0);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102d0fe0; body size 290 bytes.
#line 1 "ENTRY_102d0fe0"

undefined4 * __stdcall FUN_102d0fe0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_1152704d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar6 = (int *)((int *)0x0);
  piVar5 = (int *)((int *)0x0);
  uVar7 = (undefined4)(0);
  local_8 = (int)(0);
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_110828b0(puVar4,0,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  param_2 = (int *)((int *)thunk_FUN_110935f0(puVar4,uVar7));
  if (param_2 != (int *)0x0) {
    uVar1 = (uint)((**(code **)(*param_2 + 0x58))());
    uVar2 = (uint)((**(code **)(*param_2 + 0x58))());
    iVar3 = (int)(((uVar2 & 1) - 1) + (uVar1 & 0xffffff7f));
    if (iVar3 != 0) {
      thunk_FUN_103a3e50(&param_2,iVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if ((param_2 != (int *)0x0) && ((char)*param_2 != '\0')) {
        piVar5 = (int *)((int *)(**(code **)(*local_14 + 0x20))(&local_14,&param_2));
        piVar6 = (int *)((int *)*piVar5);
        *(unsigned char *)((char *)&local_8 + 0) = 2;
        *piVar5 = (int)(0);
        if (piVar6 == (int *)0x0) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
        }
        *(unsigned char *)((char *)&local_8 + 0) = 3;
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))();
        }
      }
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((SCStr *)((SCStr *)&param_2))->int_release();
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    }
  }
  *param_1 = (undefined4)(piVar6);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }
  local_8 = (int)(5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102d11b0; body size 118 bytes.
#line 1 "ENTRY_102d11b0"

void __stdcall FUN_102d11b0(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11527080);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if ((param_1 != 0) && (*(int *)(param_1 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(param_1 + -0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined4 *)(param_1 + -0xc) = 0;
      thunk_FUN_113cfb70(param_1,*(undefined4 *)(param_1 + -4));
      free((void *)(param_1 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d1830; body size 103 bytes.
#line 1 "ENTRY_102d1830"

undefined4 * __thiscall Recovered_Bulk::FUN_102d1830(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIServiceDescriptorFilter"));
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


// Reference entry 102d18b0; body size 325 bytes.
#line 1 "ENTRY_102d18b0"

int * __thiscall Recovered_Bulk::FUN_102d18b0(int *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  SCStr *this_;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_ = (SCStr *)(param_3);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11527170);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar2 = (bool)(((SCStr *)(param_3))->op_eq("SCIServiceDescriptorManager"));
  if (bVar2) {
    *param_2 = (int)((int)param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      ExceptionList = (void *)(local_10);
      return (int *)(param_2);
    }
  }
  else {
    bVar2 = (bool)(((SCStr *)(this_))->op_eq("SCIEventSource"));
    if (bVar2) {
      piVar4 = (int *)((int *)param_1[8]);
      *param_2 = (int)((int)piVar4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
        ExceptionList = (void *)(local_10);
        return (int *)(param_2);
      }
    }
    else {
      bVar2 = (bool)(((SCStr *)(this_))->op_eq("SCIPropertyBag"));
      if (bVar2) {
        piVar4 = (int *)((int *)thunk_FUN_102d0460(&param_3));
        *param_2 = (int)(0);
        iVar1 = (int)(*piVar4);
        *piVar4 = (int)(0);
        *param_2 = (int)(iVar1);
        local_8 = (undefined4)(0);
        if (param_3 != (SCStr *)0x0) {
          (**(code **)(*(int *)param_3 + 8))();
          ExceptionList = (void *)(local_10);
          return (int *)(param_2);
        }
      }
      else {
        bVar2 = (bool)(((SCStr *)(this_))->op_eq("SCIObj"));
        if (!bVar2) {
          *param_2 = (int)(0);
          ExceptionList = (void *)(local_10);
          return (int *)(param_2);
        }
        *param_2 = (int)((int)param_1);
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 4))(uVar3);
        }
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 102d1cc0; body size 105 bytes.
#line 1 "ENTRY_102d1cc0"

void __thiscall Recovered_Bulk::FUN_102d1cc0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  uVar3 = (uint)(iVar1 - iVar2 >> 3);
  if (param_2 < uVar3) {
    iVar2 = (int)(iVar2 + param_2 * 8);
    thunk_FUN_102cb090(iVar2,iVar1,param_1);
    param_1[1] = iVar2;
    return;
  }
  if (uVar3 < param_2) {
    if ((uint)(param_1[2] - iVar2 >> 3) < param_2) {
      thunk_FUN_102cb4a0(param_2,&param_2);
      return;
    }
    iVar2 = (int)(thunk_FUN_102ce2f0(iVar1,param_2 - uVar3,param_2));
    param_1[1] = iVar2;
  }
  return;
}


// Reference entry 102d20c0; body size 91 bytes.
#line 1 "ENTRY_102d20c0"

int * __thiscall Recovered_Bulk::FUN_102d20c0(int *param_2)
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


// Reference entry 102d29a0; body size 95 bytes.
#line 1 "ENTRY_102d29a0"

void FUN_102d29a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 102d3210; body size 93 bytes.
#line 1 "ENTRY_102d3210"

int __thiscall Recovered_Bulk::FUN_102d3210(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152745d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_8 = (undefined4)(0);
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1,uVar1));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  ExceptionList = (void *)(local_10);
  return (int)(param_1);
}


// Reference entry 102d38b0; body size 236 bytes.
#line 1 "ENTRY_102d38b0"

int __fastcall FUN_102d38b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115275d0);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  iVar5 = (int)(thunk_FUN_101dcfc0(&local_18));
  if (local_18 != 0) {
    iVar5 = (int)(thunk_FUN_103d6930(param_1[2]));
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    piVar3 = (int *)(local_14 + 1);
    iVar2 = (int)(*piVar3);
    iVar5 = (int)(*piVar3);
    *piVar3 = (int)(iVar2 + -1);
    UNLOCK();
    if (iVar2 + -1 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      piVar3 = (int *)(local_14 + 2);
      iVar2 = (int)(*piVar3);
      iVar5 = (int)(*piVar3);
      *piVar3 = (int)(iVar2 + -1);
      UNLOCK();
      if (iVar2 + -1 == 0) {
        iVar5 = (int)((**(code **)(*local_14 + 4))());
      }
    }
  }
  piVar3 = (int *)((int *)param_1[0xf]);
  if (piVar3 != (int *)0x0) {
    iVar5 = (int)((**(code **)(*piVar3 + 0x10))(piVar3 != (int *)(param_1) + 6));
    param_1[0xf] = 0;
  }
  piVar3 = (int *)((int *)param_1[5]);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar3 + 2);
    iVar2 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar2 == 1) {
      iVar5 = (int)((**(code **)(*piVar3 + 4))());
    }
  }
  piVar3 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar3 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    iVar5 = (int)((**(code **)(*piVar3 + 8))());
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return (int)(iVar5);
}


// Reference entry 102d3a00; body size 76 bytes.
#line 1 "ENTRY_102d3a00"

void __fastcall FUN_102d3a00(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11527600);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d3a70; body size 76 bytes.
#line 1 "ENTRY_102d3a70"

void __fastcall FUN_102d3a70(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11527630);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d3ae0; body size 76 bytes.
#line 1 "ENTRY_102d3ae0"

void __fastcall FUN_102d3ae0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11527660);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d3c00; body size 86 bytes.
#line 1 "ENTRY_102d3c00"

void __fastcall FUN_102d3c00(int param_1)

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
  thunk_FUN_102d3d50();
  return;
}


// Reference entry 102d3c70; body size 77 bytes.
#line 1 "ENTRY_102d3c70"

void __fastcall FUN_102d3c70(int *param_1)

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


// Reference entry 102d3d50; body size 65 bytes.
#line 1 "ENTRY_102d3d50"

void __fastcall FUN_102d3d50(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_102d3db0();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 102d3db0; body size 150 bytes.
#line 1 "ENTRY_102d3db0"

void __fastcall FUN_102d3db0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115276c0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[2]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    (**(code **)(*piVar1 + 8))(uVar3);
  }
  iVar2 = (int)(*param_1);
  local_8 = (undefined4)(1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + -8) = 0;
      *(undefined4 *)(iVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
      free((void *)(iVar2 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d3ec0; body size 312 bytes.
#line 1 "ENTRY_102d3ec0"

void __fastcall FUN_102d3ec0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115276f0);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSetting);
  param_1[2] = (uint)&ghidra_vftable_SCSetting;
  piVar2 = (int *)((int *)param_1[0x16]);
  local_8 = (undefined4)(0);
  if (piVar2 != (int *)0x0) {
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    (**(code **)(*piVar2 + 8))(uVar4);
  }
  piVar2 = (int *)((int *)param_1[0x14]);
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
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 0x11)))->int_release();
  param_1[0x11] = 0;
  local_8 = (undefined4)(2);
  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = 0;
  piVar2 = (int *)((int *)param_1[0xe]);
  local_8 = (undefined4)(3);
  if (piVar2 != (int *)0x0) {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(4);
  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  local_8 = (undefined4)(5);
  ((SCStr *)((SCStr *)(param_1 + 9)))->int_release();
  param_1[9] = 0;
  local_8 = (undefined4)(6);
  param_1[2] = (uint)&ghidra_vftable_SCTimerUser;
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d4060; body size 81 bytes.
#line 1 "ENTRY_102d4060"

int * __thiscall Recovered_Bulk::FUN_102d4060(int *param_2)
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


// Reference entry 102d4130; body size 81 bytes.
#line 1 "ENTRY_102d4130"

int * __thiscall Recovered_Bulk::FUN_102d4130(int *param_2)
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


// Reference entry 102d4460; body size 261 bytes.
#line 1 "ENTRY_102d4460"

undefined4 * __thiscall Recovered_Bulk::FUN_102d4460(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11527720);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl);
  thunk_FUN_101dcfc0(&local_18);
  if (local_18 != 0) {
    thunk_FUN_103d6930(param_1[2]);
  }
  if (local_14 != (int *)0x0) {
    LOCK();
    iVar3 = (int)(local_14[1] + -1);
    local_14[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)*local_14)(uVar4);
      LOCK();
      iVar3 = (int)(local_14[2] + -1);
      local_14[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*local_14 + 4))();
      }
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(param_1) + 6);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)((int *)param_1[5]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = (int *)(piVar2 + 2);
    iVar3 = (int)(*piVar1);
    *piVar1 = (int)(*piVar1 + -1);
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (piVar2 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x40);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102d48e0; body size 136 bytes.
#line 1 "ENTRY_102d48e0"

float __thiscall Recovered_Bulk::FUN_102d48e0(int param_2)
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


// Reference entry 102d4990; body size 118 bytes.
#line 1 "ENTRY_102d4990"

void __thiscall Recovered_Bulk::FUN_102d4990(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  char *pcVar2;
  SCStr aSStack_14 [4];
  undefined4 uStack_10;
  
  uStack_10 = (undefined4)(0x102d49a4);
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCSettingsReplicator:onRefreshed"));
  if (bVar1) {
    thunk_FUN_102d87b0();
    return;
  }
  uStack_10 = (undefined4)(0x102d49c1);
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCSettingsReplicator:onSuccess"));
  if (bVar1) {
    uStack_10 = (undefined4)(*(undefined4 *)(param_1 + 4));
    pcVar2 = (char *)("SCISetting:onSuccess");
  }
  else {
    uStack_10 = (undefined4)(0x102d49e0);
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCSettingsReplicator:onError"));
    if (!bVar1) {
      return;
    }
    uStack_10 = (undefined4)(*(undefined4 *)(param_1 + 4));
    pcVar2 = (char *)("SCISetting:onError");
  }
  ((SCStr *)(aSStack_14))->int_allocRep(pcVar2);
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 102d4e30; body size 87 bytes.
#line 1 "ENTRY_102d4e30"

void __thiscall Recovered_Bulk::FUN_102d4e30(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 102d4ed0; body size 133 bytes.
#line 1 "ENTRY_102d4ed0"

void __fastcall FUN_102d4ed0(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_102d4a40();
  return;
}


// Reference entry 102d5010; body size 77 bytes.
#line 1 "ENTRY_102d5010"

void __fastcall FUN_102d5010(int *param_1)

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


// Reference entry 102d5080; body size 65 bytes.
#line 1 "ENTRY_102d5080"

void __fastcall FUN_102d5080(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_102d3db0();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 102d5420; body size 108 bytes.
#line 1 "ENTRY_102d5420"

void __fastcall FUN_102d5420(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4 *)puVar1[1] = 0;
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    local_4 = (int)(param_1);
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_102d3db0();
      thunk_FUN_1148a50e(puVar1,0x14);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    local_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_102d29a0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&local_4);
  }
  return;
}


// Reference entry 102d54b0; body size 69 bytes.
#line 1 "ENTRY_102d54b0"

void __fastcall FUN_102d54b0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_102d3db0();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  return;
}


// Reference entry 102d5690; body size 107 bytes.
#line 1 "ENTRY_102d5690"

undefined4 *
FUN_102d5690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11527a50);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)((undefined4 *)
           thunk_FUN_102d5720(&local_14,param_2,param_3,param_4,
                              DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102d5b40; body size 177 bytes.
#line 1 "ENTRY_102d5b40"

char * FUN_102d5b40(char *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  SCStr *this_;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11527b56);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  local_8 = (undefined4)(0);
  local_14 = (undefined4)(1);
  piVar2 = (int *)((int *)thunk_FUN_102d5e20(local_18,param_3,uVar1));
  local_8 = (undefined4)(1);
  this_ = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if ((SCStr *)*piVar2 != (SCStr *)0x0) {
    this_ = (SCStr *)((SCStr *)*piVar2);
  }
  ((SCStr *)(this_))->format(param_1);
  local_8 = (undefined4)(2);
  ((SCStr *)(local_18))->int_release();
  ExceptionList = (void *)(local_10);
  return (char *)(param_1);
}


// Reference entry 102d5d00; body size 157 bytes.
#line 1 "ENTRY_102d5d00"

SCStr * FUN_102d5d00(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("public");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("restricted");
    return (SCStr *)(param_1);
  case 2:
    ((SCStr *)(param_1))->int_allocRep("restricted-admin");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("protected");
    return (SCStr *)(param_1);
  case 4:
    ((SCStr *)(param_1))->int_allocRep("protected-admin");
    return (SCStr *)(param_1);
  case 5:
    ((SCStr *)(param_1))->int_allocRep("player");
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("");
    return (SCStr *)(param_1);
  }
}


// Reference entry 102d5e20; body size 261 bytes.
#line 1 "ENTRY_102d5e20"

SCStr * FUN_102d5e20(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("device");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("set");
    return (SCStr *)(param_1);
  case 2:
    ((SCStr *)(param_1))->int_allocRep("controller");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("household");
    return (SCStr *)(param_1);
  case 4:
    ((SCStr *)(param_1))->int_allocRep("account");
    return (SCStr *)(param_1);
  case 5:
    ((SCStr *)(param_1))->int_allocRep("alarm");
    return (SCStr *)(param_1);
  case 6:
    ((SCStr *)(param_1))->int_allocRep("equalizer");
    return (SCStr *)(param_1);
  case 7:
    ((SCStr *)(param_1))->int_allocRep("dateTime");
    return (SCStr *)(param_1);
  case 8:
    ((SCStr *)(param_1))->int_allocRep("musicLibrary");
    return (SCStr *)(param_1);
  case 9:
    ((SCStr *)(param_1))->int_allocRep("business");
    return (SCStr *)(param_1);
  case 10:
    ((SCStr *)(param_1))->int_allocRep("ble");
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("");
    return (SCStr *)(param_1);
  }
}


// Reference entry 102d6270; body size 213 bytes.
#line 1 "ENTRY_102d6270"

int * __thiscall Recovered_Bulk::FUN_102d6270(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11527c6d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  (**(code **)(*param_1 + 0x44))(local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  piVar2 = (int *)((int *)thunk_FUN_1029e2d0(&local_18,local_14));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(5);
  ((SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 102d6450; body size 213 bytes.
#line 1 "ENTRY_102d6450"

int * __thiscall Recovered_Bulk::FUN_102d6450(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11527cfd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  (**(code **)(*param_1 + 0x44))(local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  piVar2 = (int *)((int *)thunk_FUN_1029d380(&local_18,local_14));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(5);
  ((SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 102d7230; body size 103 bytes.
#line 1 "ENTRY_102d7230"

undefined4 * __thiscall Recovered_Bulk::FUN_102d7230(undefined4 *param_2,SCStr *param_3)
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


// Reference entry 102d72b0; body size 103 bytes.
#line 1 "ENTRY_102d72b0"

undefined4 * __thiscall Recovered_Bulk::FUN_102d72b0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISetting"));
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


// Reference entry 102d8240; body size 101 bytes.
#line 1 "ENTRY_102d8240"

void __thiscall Recovered_Bulk::FUN_102d8240(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152833d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_2 != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(*param_2 + 0x14))(&param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    local_8 = (undefined4)(0);
    (**(code **)(*param_1 + 0x48))(uVar1);
    local_8 = (undefined4)(1);
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d8500; body size 101 bytes.
#line 1 "ENTRY_102d8500"

void __thiscall Recovered_Bulk::FUN_102d8500(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115283dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_2 != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(*param_2 + 0x14))(&param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    local_8 = (undefined4)(0);
    (**(code **)(*param_1 + 0x48))(uVar1);
    local_8 = (undefined4)(1);
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d85d0; body size 320 bytes.
#line 1 "ENTRY_102d85d0"

undefined4 * __thiscall Recovered_Bulk::FUN_102d85d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int *in_stack_0000002c;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_3c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = (undefined1 *)(LAB_11528444);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (uint)(0);
  local_3c = (undefined4)(0x102d8611);
  pvVar1 = (void *)(operator_new(0x40));
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    local_3c = (undefined4)(0);
    local_64 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (in_stack_0000002c != (int *)0x0) {
      local_64 = (undefined4)((**(code **)*in_stack_0000002c)(auStack_88));
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      LOCK();
      piVar2 = (int *)((int *)(*(int *)(param_1 + 0x50) + 4));
      *piVar2 = (int)(*piVar2 + 1);
      UNLOCK();
    }
    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar2 = (int *)((int *)thunk_FUN_102d2c80(*(undefined4 *)(param_1 + 0x4c),
                                       *(undefined4 *)(param_1 + 0x50)));
  }
  piVar3 = (int *)((int *)0x0);
  local_8 = (uint)(local_8 & 0xffffff00);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x30))();
  }
  *param_2 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  if (in_stack_0000002c != (int *)0x0) {
    local_3c = (undefined4)(0x102d86fa);
    (**(code **)(*in_stack_0000002c + 0x10))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 102d87b0; body size 183 bytes.
#line 1 "ENTRY_102d87b0"

void __fastcall FUN_102d87b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  float10 fVar4;
  SCStr aSStack_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152849d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x14))
                              (&local_14,param_1 + 0x24,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    piVar1 = (int *)((int *)*piVar2);
    local_8 = (undefined4)(0);
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
      uVar3 = (undefined4)((**(code **)(*piVar1 + 0x14))());
      switch(uVar3) {
      case 0:
        (**(code **)(*piVar1 + 0x28))(0);
        thunk_FUN_102d7b30();
        break;
      case 1:
        (**(code **)(*piVar1 + 0x24))(0);
        thunk_FUN_102d8010();
        break;
      case 2:
        uVar3 = (undefined4)(0);
        fVar4 = (float10)((float10)(**(code **)(*piVar1 + 0x2c))(0));
        thunk_FUN_102d7db0((double)fVar4,uVar3);
        break;
      case 3:
        (**(code **)(*piVar1 + 0x20))(aSStack_18);
        *(unsigned char *)((char *)&local_8 + 0) = 5;
        thunk_FUN_102d82c0();
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
        ((SCStr *)(aSStack_18))->int_release();
      }
    }
    local_8 = (undefined4)(7);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d8b30; body size 267 bytes.
#line 1 "ENTRY_102d8b30"

undefined4 * __thiscall Recovered_Bulk::FUN_102d8b30(void *param_2,undefined4 *param_3)
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
                    
    thunk_FUN_102daa60();
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
  _Dst = (void *)((void *)thunk_FUN_102daa80(uVar5));
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


// Reference entry 102d95b0; body size 76 bytes.
#line 1 "ENTRY_102d95b0"

void __fastcall FUN_102d95b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11528730);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d9690; body size 81 bytes.
#line 1 "ENTRY_102d9690"

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

void __fastcall FID_conflict__Tidy_102d9690(int *param_1)

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


// Reference entry 102d9710; body size 157 bytes.
#line 1 "ENTRY_102d9710"

void __fastcall FUN_102d9710(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplate);
  iVar2 = (int)(param_1[2]);
  if (param_1[3] - iVar2 >> 2 != 0) {
    do {
      puVar1 = (undefined4 *)(*(undefined4 **)(iVar2 + uVar4 * 4));
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      uVar4 = (uint)(uVar4 + 1);
      iVar2 = (int)(param_1[2]);
    } while (uVar4 < (uint)(param_1[3] - iVar2 >> 2));
  }
  if (iVar2 != 0) {
    uVar4 = (uint)(param_1[4] - iVar2 & 0xfffffffc);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102d97e0; body size 105 bytes.
#line 1 "ENTRY_102d97e0"

void __fastcall FUN_102d97e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11528790);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d9870; body size 83 bytes.
#line 1 "ENTRY_102d9870"

void __fastcall FUN_102d9870(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115287c0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d98e0; body size 83 bytes.
#line 1 "ENTRY_102d98e0"

void __fastcall FUN_102d98e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115287f0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d9960; body size 127 bytes.
#line 1 "ENTRY_102d9960"

void __fastcall FUN_102d9960(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11528820);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d9a10; body size 127 bytes.
#line 1 "ENTRY_102d9a10"

void __fastcall FUN_102d9a10(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11528850);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d9ac0; body size 105 bytes.
#line 1 "ENTRY_102d9ac0"

void __fastcall FUN_102d9ac0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11528880);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d9b50; body size 149 bytes.
#line 1 "ENTRY_102d9b50"

void __fastcall FUN_102d9b50(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115288b0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  local_8 = (undefined4)(2);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(3);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102d9d60; body size 250 bytes.
#line 1 "ENTRY_102d9d60"

int __thiscall Recovered_Bulk::FUN_102d9d60(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  void *_Src;
  void *_Dst;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  size_t _Size;
  uint uVar6;
  
  piVar1 = (int *)((int *)(param_1 + 8));
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  if (piVar1 != (int *)(param_2 + 8)) {
    _Src = (void *)(*(void **)(param_2 + 8));
    _Size = (size_t)(*(int *)(param_2 + 0xc) - (int)_Src);
    iVar3 = (int)(*piVar1);
    uVar6 = (uint)((int)_Size >> 2);
    uVar4 = (uint)(*(int *)(param_1 + 0x10) - iVar3 >> 2);
    if (uVar4 < uVar6) {
      if (0x3fffffff < uVar6) {
                    
        thunk_FUN_102daa60();
      }
      if (0x3fffffff - (uVar4 >> 1) < uVar4) {
        uVar2 = (uint)(0x3fffffff);
      }
      else {
        uVar2 = (uint)((uVar4 >> 1) + uVar4);
        if (uVar2 < uVar6) {
          uVar2 = (uint)(uVar6);
        }
      }
      if (iVar3 != 0) {
        uVar4 = (uint)(uVar4 * 4);
        iVar5 = (int)(iVar3);
        if (0xfff < uVar4) {
          iVar5 = (int)(*(int *)(iVar3 + -4));
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (iVar3 - iVar5) - 4U) {
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(iVar5,uVar4);
        *piVar1 = (int)(0);
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      iVar3 = (int)(thunk_FUN_102daa80(uVar2));
      *piVar1 = (int)(iVar3);
      *(int *)(param_1 + 0xc) = iVar3;
      *(uint *)(param_1 + 0x10) = iVar3 + uVar2 * 4;
    }
    _Dst = (void *)((void *)*piVar1);
    memmove(_Dst,_Src,_Size);
    *(size_t *)(param_1 + 0xc) = _Size + (int)_Dst;
  }
  return (int)(param_1);
}


// Reference entry 102da130; body size 126 bytes.
#line 1 "ENTRY_102da130"

undefined4 * __thiscall Recovered_Bulk::FUN_102da130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11528940);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102da1e0; body size 104 bytes.
#line 1 "ENTRY_102da1e0"

undefined4 * __thiscall Recovered_Bulk::FUN_102da1e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11528970);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102da270; body size 104 bytes.
#line 1 "ENTRY_102da270"

undefined4 * __thiscall Recovered_Bulk::FUN_102da270(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115289a0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102da330; body size 148 bytes.
#line 1 "ENTRY_102da330"

undefined4 * __thiscall Recovered_Bulk::FUN_102da330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115289d0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102da3f0; body size 148 bytes.
#line 1 "ENTRY_102da3f0"

undefined4 * __thiscall Recovered_Bulk::FUN_102da3f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11528a00);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102da4b0; body size 126 bytes.
#line 1 "ENTRY_102da4b0"

undefined4 * __thiscall Recovered_Bulk::FUN_102da4b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11528a30);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102da560; body size 170 bytes.
#line 1 "ENTRY_102da560"

undefined4 * __thiscall Recovered_Bulk::FUN_102da560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11528a60);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  local_8 = (undefined4)(2);
  ((SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  local_8 = (undefined4)(3);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_release();
  param_1[1] = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringTemplateNode);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102da6b0; body size 89 bytes.
#line 1 "ENTRY_102da6b0"

void __thiscall Recovered_Bulk::FUN_102da6b0(int param_2,int param_3,int param_4)
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


// Reference entry 102da960; body size 81 bytes.
#line 1 "ENTRY_102da960"

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

void __fastcall FID_conflict__Tidy_102da960(int *param_1)

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


// Reference entry 102daa80; body size 87 bytes.
#line 1 "ENTRY_102daa80"

void * FUN_102daa80(uint param_1)

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


// Reference entry 102dac80; body size 146 bytes.
#line 1 "ENTRY_102dac80"

undefined4 * FUN_102dac80(undefined4 *param_1,SCStr *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11528ad0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar2 = (bool)(((SCStringTemplate *)(param_2))->isTemplateStringValid());
  if (bVar2) {
    puVar4 = (undefined4 *)((undefined4 *)((SCStringTemplate *)((SCStr *)&local_14))->createStringTemplate());
    *param_1 = (undefined4)(0);
    uVar1 = (undefined4)(*puVar4);
    *puVar4 = (undefined4)(0);
    *param_1 = (undefined4)(uVar1);
    local_8 = (undefined4)(0);
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))(uVar3);
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102db610; body size 417 bytes.
#line 1 "ENTRY_102db610"

undefined4 FUN_102db610(SCStr *param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = (char *)("");
  if (*(char **)param_1 != (char *)0x0) {
    pcVar7 = (char *)(*(char **)param_1);
  }
  pcVar2 = strstr(pcVar7,"{{");
  uVar3 = (uint)(((SCStr *)(param_1))->length());
  pcVar1 = (char *)(pcVar7 + uVar3);
  uVar3 = (uint)(((SCStr *)(param_1))->length());
  if (uVar3 != 0) {
    while( true ) {
      if (pcVar2 == (char *)0x0) {
        return (undefined4)(1);
      }
      pcVar4 = strstr(pcVar7,"}}");
      pcVar5 = (char *)(strstr(pcVar7,"||"));
      pcVar6 = (char *)(strstr(pcVar7,"??"));
      pcVar7 = (char *)(strstr(pcVar7,"::"));
      if (pcVar2 + 2 < pcVar1) {
        pcVar2 = strstr(pcVar2 + 2,"{{");
      }
      else {
        pcVar2 = (char *)((char *)0x0);
      }
      if ((pcVar4 == (char *)0x0) || ((pcVar2 != (char *)0x0 && (pcVar2 < pcVar4)))) break;
      if ((pcVar5 == (char *)0x0) || (pcVar4 <= pcVar5)) {
LAB_102db715:
        if ((pcVar7 != (char *)0x0) && (pcVar7 < pcVar4)) {
          if (pcVar6 == (char *)0x0) {
            return (undefined4)(0);
          }
          if (pcVar4 < pcVar6) {
            return (undefined4)(0);
          }
        }
      }
      else {
        if (((pcVar5 + 2 < pcVar1) && (pcVar2 = strstr(pcVar5 + 2,"||"), pcVar2 != (char *)0x0)) &&
           (pcVar2 < pcVar4)) {
          return (undefined4)(0);
        }
        if ((pcVar6 != (char *)0x0) && (pcVar6 < pcVar5)) {
          return (undefined4)(0);
        }
        if (pcVar7 != (char *)0x0) {
          if (pcVar7 < pcVar5) {
            return (undefined4)(0);
          }
          goto LAB_102db715;
        }
      }
      if ((pcVar6 != (char *)0x0) && (pcVar6 < pcVar4)) {
        if ((pcVar6 + 2 < pcVar1) &&
           ((pcVar2 = strstr(pcVar6 + 2,"??"), pcVar2 != (char *)0x0 && (pcVar2 < pcVar4)))) {
          return (undefined4)(0);
        }
        if (pcVar7 == (char *)0x0) {
          return (undefined4)(0);
        }
        if (pcVar4 < pcVar7) {
          return (undefined4)(0);
        }
        if (((pcVar7 + 2 < pcVar1) && (pcVar7 = strstr(pcVar7 + 2,"::"), pcVar7 != (char *)0x0)) &&
           (pcVar7 < pcVar4)) {
          return (undefined4)(0);
        }
      }
      pcVar7 = (char *)(pcVar4 + 2);
      if (pcVar1 <= pcVar4 + 2) {
        pcVar7 = (char *)(pcVar1);
      }
      pcVar2 = strstr(pcVar7,"{{");
    }
  }
  return (undefined4)(0);
}


// Reference entry 102db880; body size 103 bytes.
#line 1 "ENTRY_102db880"

undefined4 * __thiscall Recovered_Bulk::FUN_102db880(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIStringTemplate"));
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


// Reference entry 102dc060; body size 91 bytes.
#line 1 "ENTRY_102dc060"

int * __thiscall Recovered_Bulk::FUN_102dc060(int *param_2)
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


// Reference entry 102dc120; body size 248 bytes.
#line 1 "ENTRY_102dc120"

int * __thiscall Recovered_Bulk::FUN_102dc120(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11528e4d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }
  local_8 = (undefined4)(0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIUrlSessionProvider");
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
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102dc280; body size 242 bytes.
#line 1 "ENTRY_102dc280"

int * __thiscall Recovered_Bulk::FUN_102dc280(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11528e9d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }
  local_8 = (undefined4)(0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIUrlSessionProvider");
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
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102dc3b0; body size 188 bytes.
#line 1 "ENTRY_102dc3b0"

int * __thiscall Recovered_Bulk::FUN_102dc3b0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11528ee5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIUrlSessionProvider");
    local_8 = (undefined4)(0);
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
    local_8 = (undefined4)(3);
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102dcbf0; body size 76 bytes.
#line 1 "ENTRY_102dcbf0"

void __fastcall FUN_102dcbf0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11528fd0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102dcc60; body size 76 bytes.
#line 1 "ENTRY_102dcc60"

void __fastcall FUN_102dcc60(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11529000);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102dccd0; body size 76 bytes.
#line 1 "ENTRY_102dccd0"

void __fastcall FUN_102dccd0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11529030);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)param_1[1]);
  if (piVar1 != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102dcd40; body size 68 bytes.
#line 1 "ENTRY_102dcd40"

void __fastcall FUN_102dcd40(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11529060);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102dd0e0; body size 81 bytes.
#line 1 "ENTRY_102dd0e0"

int * __thiscall Recovered_Bulk::FUN_102dd0e0(int *param_2)
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


// Reference entry 102dd810; body size 124 bytes.
#line 1 "ENTRY_102dd810"

void FUN_102dd810(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint local_d10;
  char local_d0c [36];
  undefined1 local_ce8 [3300];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_d10);
  pcVar1 = (char *)(local_d0c);
  local_d0c[0] = '\0';
  uVar3 = (undefined4)(0x21);
  thunk_FUN_1109f7f0(pcVar1,0x21);
  thunk_FUN_1109f100(pcVar1,uVar3);
  puVar4 = (uint *)(&local_d10);
  if (local_d0c[0] != '\0') {
    puVar2 = (undefined1 *)(local_ce8);
    thunk_FUN_1109f7f0(puVar2,&local_d10);
    thunk_FUN_1109f140(puVar2,puVar4);
    if (1 < local_d10) {
      thunk_FUN_1148ac28();
      return;
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102dd8c0; body size 183 bytes.
#line 1 "ENTRY_102dd8c0"

undefined4 * __stdcall FUN_102dd8c0(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115293df);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0xd8));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_10bb5460(1));
  }
  piVar4 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar1));
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(1);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = (undefined4)(2);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102dd9b0; body size 115 bytes.
#line 1 "ENTRY_102dd9b0"

undefined4 * FUN_102dd9b0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11529424);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x70));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_102dc8c0(param_2));
  }
  local_8 = (undefined4)(0xffffffff);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102dda90; body size 653 bytes.
#line 1 "ENTRY_102dda90"

undefined1 __thiscall Recovered_Bulk::FUN_102dda90(int *param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  SCLibrary *pSVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uStack_50;
  undefined4 uStack_48;
  int **ppiStack_44;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115294a5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  if (*(int **)(*(int *)(pSVar2 + 0x4c) + 0xe8) != (int *)0x0) {
    ppiStack_44 = (int **)(&local_20);
    uStack_48 = (undefined4)(0x102ddadb);
    piVar3 = (int *)((int *)(**(code **)(**(int **)(*(int *)(pSVar2 + 0x4c) + 0xe8) + 4))());
    piVar5 = (int *)((int *)*piVar3);
    local_8 = (undefined4)(0);
    *piVar3 = (int)(0);
    if (piVar5 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (piVar5 == (int *)0x0) {
      local_1c = (int *)((int *)0x0);
      piVar5 = (int *)((int *)0x0);
    }
    else {
      ppiStack_44 = (int **)((int **)0x102ddb16);
      ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIUrlSessionProvider");
      ppiStack_44 = (int **)(&local_18);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      uStack_48 = (undefined4)(0x102ddb28);
      puVar4 = (undefined4 *)((undefined4 *)(**(code **)*piVar5)());
      piVar5 = (int *)((int *)*puVar4);
      *puVar4 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      local_1c = (int *)(piVar5);
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      ((SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (undefined4)(0);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x20))();
    }
    local_8 = (undefined4)(10);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
  }
  if ((char)param_2 == '\0') {
    ppiStack_44 = (int **)((int **)0x102ddc65);
    pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
    ppiStack_44 = (int **)((int **)0x102ddc6c);
    puVar4 = (undefined4 *)((undefined4 *)((SCLibrary *)(pSVar2))->getSCHousehold());
    ppiStack_44 = (int **)(&local_1c);
    local_8 = (undefined4)(0xf);
    uStack_48 = (undefined4)(0x102ddc81);
    piVar3 = (int *)((int *)(**(code **)(*(int *)*puVar4 + 0x1d8))());
    piVar5 = (int *)((int *)*piVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    *piVar3 = (int)(0);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      uStack_48 = (undefined4)(0x102ddc9b);
      piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    if (local_1c != (int *)0x0) {
      uStack_48 = (undefined4)(0x102ddcb4);
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    if (local_18 != (int *)0x0) {
      uStack_48 = (undefined4)(0x102ddcc4);
      (**(code **)(*local_18 + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x14)));
    uStack_48 = (undefined4)(0x102ddccf);
    thunk_FUN_10bb35c0();
    uStack_48 = (undefined4)(0);
    uVar1 = (undefined1)(thunk_FUN_1109e4d0());
    uStack_48 = (undefined4)(0);
    *(undefined1 *)(param_1 + 0x3c) = uVar1;
    ((SCStr *)((SCStr *)&uStack_50))->int_allocRep("SCISystem:globalForgetHousehold");
    thunk_FUN_103d65f0();
    local_8 = (undefined4)(0x16);
    if (piVar5 != (int *)0x0) {
      uStack_48 = (undefined4)(0x102ddd06);
      (**(code **)(*piVar5 + 8))();
    }
  }
  else {
    ppiStack_44 = (int **)((int **)0x102ddbbb);
    thunk_FUN_101da860();
    local_8 = (undefined4)(0xb);
    thunk_FUN_103c6c80();
    piVar5 = (int *)(local_20);
    local_8 = (undefined4)(0xc);
    if (local_20 != (int *)0x0) {
      local_20 = (int *)((int *)0x0);
      (**(code **)(*piVar5 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
    ppiStack_44 = (int **)((int **)0x102ddbfd);
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0());
    local_8 = (undefined4)(0xd);
    (**(code **)(*(int *)*puVar4 + 0x54))();
    local_8 = (undefined4)(0xe);
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
    local_8 = (undefined4)(0xffffffff);
    uVar1 = (undefined1)(thunk_FUN_1109e3f0());
    *(undefined1 *)(param_1 + 0x3c) = uVar1;
    thunk_FUN_110f2980();
    thunk_FUN_110f2570();
    uStack_50 = (undefined4)(0x102ddc4f);
    ppiStack_44 = (int **)((int **)param_1);
    ((SCStr *)((SCStr *)&uStack_48))->int_allocRep("SCISystem:globalFactoryReset");
    thunk_FUN_103d65f0();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(*(undefined1 *)(param_1 + 0x3c));
}


// Reference entry 102dddd0; body size 100 bytes.
#line 1 "ENTRY_102dddd0"

undefined4 * __thiscall Recovered_Bulk::FUN_102dddd0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115294e0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x84))(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 102dde60; body size 117 bytes.
#line 1 "ENTRY_102dde60"

void __stdcall FUN_102dde60(SCStr *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  SCStr *local_30;
  char local_2c [40];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_30);
  local_30 = (SCStr *)(param_1);
  uVar3 = (undefined4)(thunk_FUN_11265090(0x25,&DAT_1186d2ee));
  uVar3 = (undefined4)(thunk_FUN_111fded0(uVar3));
  uVar1 = (undefined1)(thunk_FUN_101dce50());
  local_30 = (SCStr *)((SCStr *)((uint)(*(unsigned short *)((char *)&local_30 + 1)) << 8 | (uint)(uVar1)));
  cVar2 = (char)(thunk_FUN_111fdc10(local_30,uVar3,local_2c,0x25));
  if (cVar2 == '\0') {
    pcVar4 = (char *)("");
  }
  else {
    pcVar4 = (char *)(local_2c);
  }
  ((SCStr *)(param_1))->int_allocRep(pcVar4);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102ddf30; body size 70 bytes.
#line 1 "ENTRY_102ddf30"

void __stdcall FUN_102ddf30(SCStr *param_1)

{
  SCStr *local_4c;
  char local_48 [68];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_4c);
  local_4c = (SCStr *)(param_1);
  thunk_FUN_1109f210(local_48,0x41);
  ((SCStr *)(param_1))->int_allocRep(local_48);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102ddf90; body size 88 bytes.
#line 1 "ENTRY_102ddf90"

void __stdcall FUN_102ddf90(SCStr *param_1)

{
  SCStr *local_80c;
  char local_808 [2052];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_80c);
  local_80c = (SCStr *)(param_1);
  thunk_FUN_1109ed90(local_808,0x800);
  ((SCStr *)(param_1))->int_allocRep(local_808);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102de270; body size 79 bytes.
#line 1 "ENTRY_102de270"

void __stdcall FUN_102de270(SCStr *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  SCStr *local_2c;
  char local_28 [36];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_2c);
  pcVar1 = (char *)(local_28);
  uVar2 = (undefined4)(0x21);
  local_2c = (SCStr *)(param_1);
  local_28[0] = '\0';
  thunk_FUN_1109f7f0(pcVar1,0x21);
  thunk_FUN_1109f100(pcVar1,uVar2);
  ((SCStr *)(param_1))->int_allocRep(local_28);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102de330; body size 191 bytes.
#line 1 "ENTRY_102de330"

int * __thiscall Recovered_Bulk::FUN_102de330(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11529624);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x4c) == 0) {
    pvVar3 = (void *)(operator_new(0x40));
    local_8 = (undefined4)(0);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_10b97990());
    }
    local_8 = (undefined4)(0xffffffff);
    if (piVar4 != *(int **)(param_1 + 0x4c)) {
      piVar1 = (int *)(*(int **)(param_1 + 0x50));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(int **)(param_1 + 0x4c) = piVar4;
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      else {
        piVar4 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        *(int **)(param_1 + 0x50) = piVar4;
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  piVar4 = (int *)(*(int **)(param_1 + 0x4c));
  *param_2 = (int)((int)piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 102de430; body size 194 bytes.
#line 1 "ENTRY_102de430"

undefined4 * FUN_102de430(undefined4 *param_1)

{
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152966d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)0x0);
  local_18 = (int *)((int *)0x0);
  if (pSVar2 != (SCLibrary *)0x0) {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCISystem");
    local_8 = (undefined4)(0);
    puVar3 = (undefined4 *)((undefined4 *)(*(code *)**(undefined4 **)pSVar2)(&local_1c,&local_14,uVar1));
    piVar4 = (int *)((int *)*puVar3);
    *puVar3 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    local_18 = (int *)(piVar4);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    local_8 = (undefined4)(3);
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(0);
  }
  local_8 = (undefined4)(4);
  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(5);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102de540; body size 132 bytes.
#line 1 "ENTRY_102de540"

void __stdcall FUN_102de540(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 local_218 [516];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115296ad);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(param_1);
  }
  local_8 = (undefined4)(0);
  thunk_FUN_1109f0a0(puVar1,local_218,0x201);
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)&param_1))->int_release();
  ExceptionList = (void *)(local_10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 102de6a0; body size 131 bytes.
#line 1 "ENTRY_102de6a0"

void __thiscall Recovered_Bulk::FUN_102de6a0(byte param_2,int param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  bVar2 = (bool)(false);
  uVar5 = (uint)(1 << (param_2 & 0x1f));
  cVar3 = (char)(thunk_FUN_112a7f50(param_1 + 0x4c));
  uVar1 = (uint)(*(uint *)(param_1 + 0x38));
  if (param_3 == 0) {
    uVar5 = (uint)(uVar1 & ~uVar5);
  }
  else {
    uVar5 = (uint)(uVar1 | uVar5);
  }
  *(uint *)(param_1 + 0x38) = uVar5;
  if (((uVar1 != 0) != (uVar5 != 0)) && (*(int *)(param_1 + 0x48) == 0)) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    bVar2 = (bool)(true);
  }
  if (cVar3 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x4c);
  }
  if (bVar2) {
    iVar4 = (int)(param_1 + 0x24);
    if (param_1 == 0xc) {
      iVar4 = (int)(0);
    }
    thunk_FUN_1106b190(iVar4,0,0);
  }
  return;
}


// Reference entry 102de7c0; body size 103 bytes.
#line 1 "ENTRY_102de7c0"

undefined4 * __thiscall Recovered_Bulk::FUN_102de7c0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISystem"));
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


// Reference entry 102de840; body size 229 bytes.
#line 1 "ENTRY_102de840"

undefined4 * __thiscall Recovered_Bulk::FUN_102de840(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115296fd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISystem"));
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
  local_8 = (undefined4)(0);
  if (piVar4 == (int *)0x0) {
    if (param_1[2] == 0) {
      *param_2 = (undefined4)(0);
      ExceptionList = (void *)(local_10);
      return (undefined4 *)(param_2);
    }
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x80))());
    (**(code **)*puVar3)(param_2,param_3);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(piVar4);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 102de960; body size 233 bytes.
#line 1 "ENTRY_102de960"

undefined4 * __thiscall Recovered_Bulk::FUN_102de960(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  SCStr *this_;
  bool bVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_ = (SCStr *)(param_3);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152973d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISystem"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    thunk_FUN_102de840(&param_3,this_);
    local_8 = (undefined4)(0);
    if (param_3 != (SCStr *)0x0) {
      *param_2 = (undefined4)(param_3);
      ExceptionList = (void *)(local_10);
      return (undefined4 *)(param_2);
    }
    bVar1 = (bool)(((SCStr *)(this_))->op_eq("SCIObj"));
    if (bVar1) {
      *param_2 = (undefined4)(param_1);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))();
      }
      local_8 = (undefined4)(2);
      if (param_3 != (SCStr *)0x0) {
        (**(code **)(*(int *)param_3 + 8))();
      }
    }
    else {
      *param_2 = (undefined4)(0);
      local_8 = (undefined4)(3);
      if (param_3 != (SCStr *)0x0) {
        (**(code **)(*(int *)param_3 + 8))(uVar2);
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 102decb0; body size 101 bytes.
#line 1 "ENTRY_102decb0"

undefined1 __stdcall FUN_102decb0(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115297fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(param_1);
  }
  uVar1 = (undefined1)(thunk_FUN_110a2880(puVar2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(1);
  ((SCStr *)((SCStr *)&param_1))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 102deda0; body size 133 bytes.
#line 1 "ENTRY_102deda0"

undefined1 __stdcall FUN_102deda0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11529845);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(param_2);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (param_1 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(param_1);
  }
  uVar1 = (undefined1)(thunk_FUN_110a2cd0(puVar3,puVar2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (undefined1 *)((undefined1 *)0x0);
  local_8 = (undefined4)(3);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
}


// Reference entry 102dee50; body size 108 bytes.
#line 1 "ENTRY_102dee50"

void __thiscall Recovered_Bulk::FUN_102dee50(SCStr *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 local_8;
  undefined1 *local_4;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x38) + 0x20));
  if (piVar1 != (int *)0x0) {
    local_8 = (undefined4)(thunk_FUN_112652a0(0x25));
    bVar2 = (bool)(((SCStr *)(param_2))->op_eq("prod"));
    if (bVar2) {
      local_4 = (undefined1 *)((undefined1 *)0x0);
    }
    else {
      local_4 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)param_2 != (undefined1 *)0x0) {
        local_4 = (undefined1 *)(*(undefined1 **)param_2);
      }
    }
    uVar3 = (undefined4)(1);
    (**(code **)(*piVar1 + 8))(&local_8,&local_4,1);
    thunk_FUN_112654e0(uVar3);
  }
  return;
}


// Reference entry 102deee0; body size 509 bytes.
#line 1 "ENTRY_102deee0"

void __thiscall Recovered_Bulk::FUN_102deee0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_115298a5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x68) != 0) {
    local_14 = (int)(param_1);
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("totalDeviceMemory");
    piVar1 = (int *)(param_2);
    local_8 = (undefined4)(0);
    (**(code **)(*param_2 + 0x30))(&local_14,uVar3);
    uVar4 = (undefined4)(thunk_FUN_1148b660());
    **(undefined4 **)(param_1 + 0x68) = uVar4;
    local_8 = (undefined4)(1);
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_8 = (undefined4)(0xffffffff);
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("maxHeapMemory");
    local_8 = (undefined4)(2);
    (**(code **)(*piVar1 + 0x30))(&local_14);
    uVar4 = (undefined4)(thunk_FUN_1148b660());
    *(undefined4 *)(*(int *)(param_1 + 0x68) + 4) = uVar4;
    local_8 = (undefined4)(3);
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_8 = (undefined4)(0xffffffff);
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("availableHeapMemory");
    local_8 = (undefined4)(4);
    (**(code **)(*piVar1 + 0x30))(&local_14);
    uVar4 = (undefined4)(thunk_FUN_1148b660());
    *(undefined4 *)(*(int *)(param_1 + 0x68) + 0xc) = uVar4;
    local_8 = (undefined4)(5);
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_8 = (undefined4)(0xffffffff);
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("usedHeapMemory");
    local_8 = (undefined4)(6);
    (**(code **)(*piVar1 + 0x30))(&local_14);
    uVar4 = (undefined4)(thunk_FUN_1148b660());
    *(undefined4 *)(*(int *)(param_1 + 0x68) + 8) = uVar4;
    local_8 = (undefined4)(7);
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_8 = (undefined4)(0xffffffff);
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("lowMemoryThreshold");
    local_8 = (undefined4)(8);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0x24))(&local_14));
    *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x10) = uVar4;
    local_8 = (undefined4)(9);
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_8 = (undefined4)(0xffffffff);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("isLowMemory");
    local_8 = (undefined4)(10);
    uVar2 = (undefined1)((**(code **)(*piVar1 + 0x3c))(&param_2));
    *(undefined1 *)(*(int *)(param_1 + 0x68) + 0x14) = uVar2;
    local_8 = (undefined4)(0xb);
    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (int *)((int *)0x0);
    local_8 = (undefined4)(0xffffffff);
    if (*(int *)(param_1 + 0x6c) != 0) {
      LOCK();
      piVar1 = (int *)((int *)(*(int *)(param_1 + 0x6c) + 4));
      *piVar1 = (int)(*piVar1 + 1);
      UNLOCK();
    }
    thunk_FUN_110a32b0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102df780; body size 110 bytes.
#line 1 "ENTRY_102df780"

void __fastcall FUN_102df780(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_115299f0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardComponentBuilder);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102df880; body size 131 bytes.
#line 1 "ENTRY_102df880"

undefined4 * __thiscall Recovered_Bulk::FUN_102df880(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11529a20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardComponentBuilder);
  piVar1 = (int *)((int *)param_1[3]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102df930; body size 409 bytes.
#line 1 "ENTRY_102df930"

int * __stdcall FUN_102df930(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11529a9e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,0x17);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x1c))(&local_18,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x28))(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  param_3 = (int *)(piVar1);
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  param_3 = (int *)((int *)0x0);
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xf);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102dfb30; body size 185 bytes.
#line 1 "ENTRY_102dfb30"

int * __stdcall FUN_102dfb30(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11529af5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2560(&param_3,param_2,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102dfc20; body size 185 bytes.
#line 1 "ENTRY_102dfc20"

int * __stdcall FUN_102dfc20(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11529b35);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e23b0(&param_3,param_2,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102dfd10; body size 300 bytes.
#line 1 "ENTRY_102dfd10"

int * __stdcall FUN_102dfd10(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
                  undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11529b85);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_3,param_4,param_6,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  piVar2 = (int *)((int *)thunk_FUN_102e2710(&local_14,param_2));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_5 != 0) {
    ((SCStr *)((SCStr *)&param_6))->int_allocRep("WizardComponentKeyCaptionList");
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    (**(code **)(*piVar1 + 0x58))(&param_6,param_5);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ((SCStr *)((SCStr *)&param_6))->int_release();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(8);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102dfe90; body size 409 bytes.
#line 1 "ENTRY_102dfe90"

int * __stdcall FUN_102dfe90(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11529c0e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,9);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x1c))(&local_18,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x28))(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  param_3 = (int *)(piVar1);
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  param_3 = (int *)((int *)0x0);
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xf);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e0090; body size 125 bytes.
#line 1 "ENTRY_102e0090"

undefined4 * __stdcall FUN_102e0090(undefined4 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11529c5d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  thunk_FUN_103be9e0(param_2,0xffffffff);
  *param_1 = (undefined4)(param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(uVar1);
  }
  local_8 = (undefined4)(1);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102e0270; body size 188 bytes.
#line 1 "ENTRY_102e0270"

int * __stdcall FUN_102e0270(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11529d05);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2f40(&param_3,param_2,param_4,param_3,
                                     DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e0360; body size 274 bytes.
#line 1 "ENTRY_102e0360"

int * __stdcall FUN_102e0360(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11529d55);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2560(&param_2,param_2,param_4,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&param_4))->int_allocRep("WizardComponentKeyImageURL");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x1c))(&param_4,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&param_4))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&param_4))->int_allocRep("WizardComponentKeyImageType");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x28))(&param_4,4);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&param_4))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e04c0; body size 274 bytes.
#line 1 "ENTRY_102e04c0"

int * __stdcall FUN_102e04c0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_11529db5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e23b0(&param_2,param_2,param_4,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&param_4))->int_allocRep("WizardComponentKeyImageURL");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x1c))(&param_4,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&param_4))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&param_4))->int_allocRep("WizardComponentKeyImageType");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x28))(&param_4,4);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&param_4))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e09c0; body size 241 bytes.
#line 1 "ENTRY_102e09c0"

int * __stdcall FUN_102e09c0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11529f3d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_3,param_4,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  piVar2 = (int *)((int *)thunk_FUN_102e3440(&local_14,param_2));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(6);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e0af0; body size 463 bytes.
#line 1 "ENTRY_102e0af0"

int * __stdcall FUN_102e0af0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_11529fc6);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,0x1b);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyList");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x58))(&local_18,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("WizardComponentKeyCaptionList");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x58))(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_3))->int_allocRep("WizardComponentKeyImageItems");
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  (**(code **)(*piVar1 + 0x58))(&param_3,param_4);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&param_3))->int_release();
  param_3 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  param_4 = (int *)(piVar1);
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  param_4 = (int *)((int *)0x0);
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0x11);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e0d40; body size 463 bytes.
#line 1 "ENTRY_102e0d40"

int * __stdcall FUN_102e0d40(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a056);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,0xc);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyImageURL");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x1c))(&local_18,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("WizardComponentKeyImageType");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x28))(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_3))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  (**(code **)(*piVar1 + 0x1c))(&param_3,param_4);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&param_3))->int_release();
  param_3 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  param_4 = (int *)(piVar1);
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  param_4 = (int *)((int *)0x0);
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0x11);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e0f90; body size 409 bytes.
#line 1 "ENTRY_102e0f90"

int * __stdcall FUN_102e0f90(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a0de);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,6);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyList");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x58))(&local_18,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x28))(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  param_3 = (int *)(piVar1);
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  param_3 = (int *)((int *)0x0);
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xf);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e1190; body size 301 bytes.
#line 1 "ENTRY_102e1190"

int * __stdcall FUN_102e1190(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a15e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,0x18);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xb);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e1310; body size 334 bytes.
#line 1 "ENTRY_102e1310"

void FUN_102e1310(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  SCStr *this_;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a1de);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar3 = (int *)((int *)createSCStringArray());
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if ((param_2 != (int *)0x0) && (iVar4 = (**(code **)(*param_2 + 0x14))(), iVar4 != 0)) {
    uVar2 = (uint)(0);
    do {
      (**(code **)(*param_2 + 0x18))(uVar2);
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      local_14 = (undefined4)(0);
      ((SCStr *)(this_))->format((char *)&local_14);
      (**(code **)(*piVar1 + 0x24))(&local_14);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      ((SCStr *)((SCStr *)&local_14))->int_release();
      uVar2 = (uint)(uVar2 + 1);
      local_14 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      uVar5 = (uint)((**(code **)(*param_2 + 0x14))());
    } while (uVar2 < uVar5);
  }
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyImageItems");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*param_1 + 0x58))(&local_14,piVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  local_8 = (undefined4)(10);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102e14c0; body size 355 bytes.
#line 1 "ENTRY_102e14c0"

int * __stdcall FUN_102e14c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a266);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,10);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyValue");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x28))(&local_18,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xd);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e1690; body size 182 bytes.
#line 1 "ENTRY_102e1690"

int * __stdcall FUN_102e1690(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152a2b5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e3ed0(&param_2,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e1780; body size 354 bytes.
#line 1 "ENTRY_102e1780"

int * __stdcall FUN_102e1780(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a326);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,5);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyActive");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x40))(&local_18,1);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xd);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e1940; body size 409 bytes.
#line 1 "ENTRY_102e1940"

int * __stdcall FUN_102e1940(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a3ae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,0x19);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyList");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x58))(&local_18,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x28))(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  param_3 = (int *)(piVar1);
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  param_3 = (int *)((int *)0x0);
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xf);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e1b40; body size 461 bytes.
#line 1 "ENTRY_102e1b40"

int * __stdcall FUN_102e1b40(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a446);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_24,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,1);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyDetectMarkdownText");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x40))(&local_18,1);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("WizardComponentKeyDetectLinksText");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x40))(&local_1c,1);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_20))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  (**(code **)(*piVar1 + 0x1c))(&local_20,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&local_20))->int_release();
  local_20 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0x11);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e1d80; body size 409 bytes.
#line 1 "ENTRY_102e1d80"

int * __stdcall FUN_102e1d80(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a4ce);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,7);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x1c))(&local_18,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x28))(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  param_3 = (int *)(piVar1);
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  param_3 = (int *)((int *)0x0);
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xf);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e1f80; body size 355 bytes.
#line 1 "ENTRY_102e1f80"

int * __stdcall FUN_102e1f80(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a556);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,0);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x1c))(&local_18,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0;
  piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xd);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e2140; body size 185 bytes.
#line 1 "ENTRY_102e2140"

int * __stdcall FUN_102e2140(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152a5a5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e49e0(&param_3,param_2,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_103be9e0(piVar1,0xffffffff);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e2230; body size 300 bytes.
#line 1 "ENTRY_102e2230"

int * FUN_102e2230(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152a5fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,0x17);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x28))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e23b0; body size 346 bytes.
#line 1 "ENTRY_102e23b0"

int * FUN_102e23b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152a665);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,4);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComopnentKeyInputEvent");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyPinBottom");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar1 + 0x40))(local_14,1);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e2560; body size 346 bytes.
#line 1 "ENTRY_102e2560"

int * FUN_102e2560(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152a6d5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,4);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x28))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyPinBottom");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar1 + 0x40))(local_14,1);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e2710; body size 610 bytes.
#line 1 "ENTRY_102e2710"

int * FUN_102e2710(int *param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  SCStr *this_;
  uint uVar6;
  int *local_34;
  int *local_30;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a776);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,0xb);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyList");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x58))(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_3,param_4);
  }
  thunk_FUN_102e1310(piVar1);
  if (param_3 != (int *)0x0) {
    uVar3 = (undefined4)(createSCStringArray());
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    thunk_FUN_101ccf90(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
    iVar4 = (int)((**(code **)(*param_3 + 0x14))());
    if (iVar4 != 0) {
      uVar6 = (uint)(0);
      do {
        (**(code **)(*param_3 + 0x18))(uVar6);
        *(unsigned char *)((char *)&local_8 + 0) = 0xd;
        local_14 = (undefined4)(0);
        ((SCStr *)(this_))->format((char *)&local_14);
        (**(code **)(*local_34 + 0x24))(&local_14);
        *(unsigned char *)((char *)&local_8 + 0) = 0xe;
        ((SCStr *)((SCStr *)&local_14))->int_release();
        uVar6 = (uint)(uVar6 + 1);
        local_14 = (undefined4)(0);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
        uVar5 = (uint)((**(code **)(*param_3 + 0x14))());
      } while (uVar6 < uVar5);
    }
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyImageItems");
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    (**(code **)(*piVar1 + 0x58))(&local_14,local_34);
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    ((SCStr *)((SCStr *)&local_14))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
  }
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 0x12;
  (**(code **)(*piVar1 + 0x28))(&local_14,param_5);
  *(unsigned char *)((char *)&local_8 + 0) = 0x13;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x14)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(0x15);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e2a10; body size 300 bytes.
#line 1 "ENTRY_102e2a10"

int * FUN_102e2a10(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152a7ed);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,9);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x28))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e2b90; body size 360 bytes.
#line 1 "ENTRY_102e2b90"

int * FUN_102e2b90(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152a855);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)((int *)createPropertyBag());
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyID");
  iVar2 = (int)(DAT_121a0e64);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  DAT_121a0e64 = (int)(DAT_121a0e64 + 1);
  (**(code **)(*piVar1 + 0x28))(local_14,iVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyOpacity");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x28))(local_14,10);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyRotationAngle");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x28))(local_14,0);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyDuration");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar1 + 0x28))(local_14,0xfffffc18);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xc);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e2d60; body size 383 bytes.
#line 1 "ENTRY_102e2d60"

int * FUN_102e2d60(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152a8d5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x28))(local_14,3);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyImageURL");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x1c))(local_14,&param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyImageURLAlt");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar1 + 0x1c))(local_14,&stack0x0000000c);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyImageType");
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  (**(code **)(*piVar1 + 0x28))(local_14,4);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  local_8 = (undefined4)(0x10);
  ((SCStr *)((SCStr *)&stack0x0000000c))->int_release();
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e2f40; body size 454 bytes.
#line 1 "ENTRY_102e2f40"

int * FUN_102e2f40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  SCStr *this_;
  int *local_1c;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152a966);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(&local_14,4);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x1c))(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x28))(&local_14,param_4);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_18))->int_allocRep("WizardComponentKeyImageURL");
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  local_14 = (undefined4)(0);
  ((SCStr *)(this_))->format((char *)&local_14);
  (**(code **)(*piVar1 + 0x1c))(local_18,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((SCStr *)(local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_18))->int_allocRep("WizardComponentKeyImageType");
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  (**(code **)(*piVar1 + 0x28))(local_18,4);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((SCStr *)(local_18))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e3200; body size 317 bytes.
#line 1 "ENTRY_102e3200"

int * FUN_102e3200(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152aa15);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(local_14,2);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyImageURL");
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  (**(code **)(*piVar1 + 0x1c))(local_14,&param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyImageType");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x28))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(0xc);
  ((SCStr *)((SCStr *)&param_2))->int_release();
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e3440; body size 428 bytes.
#line 1 "ENTRY_102e3440"

int * FUN_102e3440(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  SCStr *this_;
  int *local_1c;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152aafe);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x28))(&local_14,0x11);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)(local_18))->int_allocRep("WizardComponentKeyImageURL");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  local_14 = (undefined4)(0);
  ((SCStr *)(this_))->format((char *)&local_14);
  (**(code **)(*piVar1 + 0x1c))(local_18,&local_14);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)(local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)(local_18))->int_allocRep("WizardComponentKeyImageType");
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  (**(code **)(*piVar1 + 0x28))(local_18,4);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((SCStr *)(local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_3,param_4);
  }
  thunk_FUN_102e1310(piVar1);
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd)));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  local_8 = (undefined4)(0xe);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e3660; body size 347 bytes.
#line 1 "ENTRY_102e3660"

int * FUN_102e3660(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152ab75);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,0x1b);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyList");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x58))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyCaptionList");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x58))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyImageItems");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar1 + 0x58))(local_14,param_4);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e3820; body size 347 bytes.
#line 1 "ENTRY_102e3820"

int * FUN_102e3820(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152abe5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,0xc);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyImageURL");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyImageType");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x28))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_4);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e39e0; body size 300 bytes.
#line 1 "ENTRY_102e39e0"

int * FUN_102e39e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152ac4d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,6);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyList");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x58))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x28))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e3b60; body size 206 bytes.
#line 1 "ENTRY_102e3b60"

int * FUN_102e3b60(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152ac9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,0x18);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(6);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e3c70; body size 253 bytes.
#line 1 "ENTRY_102e3c70"

int * FUN_102e3c70(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152acf5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,10);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyValue");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x28))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e3db0; body size 112 bytes.
#line 1 "ENTRY_102e3db0"

undefined4 * FUN_102e3db0(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152ad44);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x10));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_102df5d0(uVar1));
  }
  local_8 = (undefined4)(0xffffffff);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102e3e40; body size 112 bytes.
#line 1 "ENTRY_102e3e40"

undefined4 * FUN_102e3e40(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152ad84);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pvVar2 = (void *)(operator_new(0x10));
  local_8 = (undefined4)(0);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_102df5d0(uVar1));
  }
  local_8 = (undefined4)(0xffffffff);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 102e3ed0; body size 437 bytes.
#line 1 "ENTRY_102e3ed0"

int * FUN_102e3ed0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152adf5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,0x1a);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyBoldText");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x40))(local_14,1);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyCenterText");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar1 + 0x40))(local_14,1);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeySelectText");
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  (**(code **)(*piVar1 + 0x40))(local_14,0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyDetectLinksText");
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  (**(code **)(*piVar1 + 0x40))(local_14,0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e4100; body size 252 bytes.
#line 1 "ENTRY_102e4100"

int * FUN_102e4100(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152ae55);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,5);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyActive");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x40))(local_14,1);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e4240; body size 300 bytes.
#line 1 "ENTRY_102e4240"

int * FUN_102e4240(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152aebd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,0x19);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyList");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x58))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x28))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e43c0; body size 345 bytes.
#line 1 "ENTRY_102e43c0"

int * FUN_102e43c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152af25);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,1);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyDetectMarkdownText");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x40))(local_14,1);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyDetectLinksText");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x40))(local_14,1);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e4570; body size 300 bytes.
#line 1 "ENTRY_102e4570"

int * FUN_102e4570(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152af8d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,7);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyInput");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x28))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e46f0; body size 253 bytes.
#line 1 "ENTRY_102e46f0"

int * FUN_102e46f0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152afe5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,0);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyString");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e4830; body size 346 bytes.
#line 1 "ENTRY_102e4830"

int * FUN_102e4830(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152b055);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_102e2b90(&local_18,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar1 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  (**(code **)(*piVar1 + 0x28))(local_14,0xd);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyVideoURL");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x1c))(local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyVideoManualControls");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x40))(local_14,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)(local_14))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyActive");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar1 + 0x40))(local_14,0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)(local_14))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e49e0; body size 429 bytes.
#line 1 "ENTRY_102e49e0"

int * FUN_102e49e0(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_24;
  SCStr local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152b0e6);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)(local_20))->int_allocRep((&PTR_s_wiz_sonar_learn_to_tune_12119514)[param_2]);
  local_8 = (undefined4)(1);
  piVar3 = (int *)((int *)thunk_FUN_102e2b90(&local_24,uVar2));
  piVar1 = (int *)((int *)*piVar3);
  local_8 = (undefined4)(2);
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("WizardComponentKeyType");
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  (**(code **)(*piVar1 + 0x28))(&param_2,0xd);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (int)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&local_14))->int_allocRep("WizardComponentKeyVideoURL");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  (**(code **)(*piVar1 + 0x1c))(&local_14,local_20);
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&local_18))->int_allocRep("WizardComponentKeyVideoManualControls");
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*piVar1 + 0x40))(&local_18,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep("WizardComponentKeyActive");
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  (**(code **)(*piVar1 + 0x40))(&local_1c,0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  *param_1 = (int)((int)piVar1);
  (**(code **)(*piVar1 + 4))();
  local_8 = (undefined4)(0xe);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  local_8 = (undefined4)(0xf);
  ((SCStr *)(local_20))->int_release();
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e4c30; body size 101 bytes.
#line 1 "ENTRY_102e4c30"

char * __thiscall Recovered_Bulk::FUN_102e4c30(char *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1152b13e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  local_8 = (undefined4)(0);
  ((SCStr *)(param_1))->format(param_2);
  ExceptionList = (void *)(local_10);
  return (char *)(param_2);
}


// Reference entry 102e4cd0; body size 103 bytes.
#line 1 "ENTRY_102e4cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_102e4cd0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIWizardComponentBuilder"));
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


// Reference entry 102e4df0; body size 115 bytes.
#line 1 "ENTRY_102e4df0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4df0(int *param_1,float param_2)

{
  uint uVar1;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152b1bd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyDuration");
  local_8 = (undefined4)(0);
  (**(code **)(*param_1 + 0x28))(local_14,(int)(param_2 * _DAT_1189101c),uVar1);
  local_8 = (undefined4)(1);
  ((SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102e4eb0; body size 115 bytes.
#line 1 "ENTRY_102e4eb0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4eb0(int *param_1,float param_2)

{
  uint uVar1;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152b1fd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyOpacity");
  local_8 = (undefined4)(0);
  (**(code **)(*param_1 + 0x28))(local_14,(int)(param_2 * _DAT_11891018),uVar1);
  local_8 = (undefined4)(1);
  ((SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102e4f40; body size 115 bytes.
#line 1 "ENTRY_102e4f40"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4f40(int *param_1,float param_2)

{
  uint uVar1;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152b23d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ((SCStr *)(local_14))->int_allocRep("WizardComponentKeyRotationAngle");
  local_8 = (undefined4)(0);
  (**(code **)(*param_1 + 0x28))(local_14,(int)(param_2 * _DAT_1189101c),uVar1);
  local_8 = (undefined4)(1);
  ((SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 102e58f0; body size 171 bytes.
#line 1 "ENTRY_102e58f0"

int * __thiscall Recovered_Bulk::FUN_102e58f0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152b345);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIAudioInputResource");
    local_8 = (undefined4)(0);
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
    local_8 = (undefined4)(3);
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e59d0; body size 248 bytes.
#line 1 "ENTRY_102e59d0"

int * __thiscall Recovered_Bulk::FUN_102e59d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152b38d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }
  local_8 = (undefined4)(0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCICachedHousehold");
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
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e5b10; body size 248 bytes.
#line 1 "ENTRY_102e5b10"

int * __thiscall Recovered_Bulk::FUN_102e5b10(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152b3dd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }
  local_8 = (undefined4)(0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIWebsocketDelegate");
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
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e5c50; body size 169 bytes.
#line 1 "ENTRY_102e5c50"

int * __thiscall Recovered_Bulk::FUN_102e5c50(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152b425);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIWifiDelegate");
    local_8 = (undefined4)(0);
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
    local_8 = (undefined4)(3);
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e5d90; body size 91 bytes.
#line 1 "ENTRY_102e5d90"

int * __thiscall Recovered_Bulk::FUN_102e5d90(int *param_2)
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


// Reference entry 102e5e30; body size 169 bytes.
#line 1 "ENTRY_102e5e30"

int * __thiscall Recovered_Bulk::FUN_102e5e30(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1152b465);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (int)(0);
  if (param_2 != (undefined4 *)0x0) {
    local_14 = (int *)(param_1);
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIOpFactory");
    local_8 = (undefined4)(0);
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
    local_8 = (undefined4)(3);
    ((SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 102e6010; body size 78 bytes.
#line 1 "ENTRY_102e6010"

int * __thiscall Recovered_Bulk::FUN_102e6010(int *param_2)
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


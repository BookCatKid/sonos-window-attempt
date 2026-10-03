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
extern int FUN_100487ed(...);
extern int FUN_1005a7b3(...);
extern int FUN_1005ef7a(...);
extern int FUN_10065348(...);
extern int FUN_10070892(...);
extern int FUN_1007d574(...);
extern int FUN_1008b877(...);
extern int FUN_1008d97e(...);
extern int FUN_11124310(...);
extern int FUN_112a8970(...);
extern int FUN_112a9570(...);
extern int FUN_112a9f40(...);
extern int FUN_112afbd0(...);
extern int FUN_112d1390(...);
extern int FUN_112d26d0(...);
extern int FUN_112d3650(...);
extern int FUN_1130a090(...);
extern int FUN_1130a370(...);
extern int FUN_11313540(...);
extern int FUN_113433c0(...);
extern int FUN_113434e0(...);
extern int FUN_11343830(...);
extern int FUN_11345e50(...);
extern int FUN_11345ed0(...);
extern int FUN_11346450(...);
extern int FUN_11354c60(...);
extern int FUN_11358b90(...);
extern int FUN_1135a0c0(...);
extern int FUN_11363e40(...);
extern int FUN_11371c00(...);
extern int FUN_11372dd0(...);
extern int FUN_1137e990(...);
extern int FUN_113851a0(...);
extern int FUN_1139c2c0(...);
extern int FUN_1139f3d0(...);
extern int FUN_1139f580(...);
extern int FUN_113a0d30(...);
extern int FUN_113a10a0(...);
extern int FUN_113a1ee0(...);
extern int FUN_113a82c0(...);
extern int FUN_113b08d0(...);
extern int FUN_1141d980(...);
extern int FUN_11423510(...);
extern int FUN_1143b9b0(...);
extern int FUN_1146c0d0(...);
extern int FUN_1146c240(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _Mtx_destroy_in_situ(...);
extern __declspec(dllimport) int _Mtx_init_in_situ(...);
extern __declspec(dllimport) int _Mtx_lock(...);
extern __declspec(dllimport) int _Mtx_unlock(...);
extern __declspec(dllimport) int _Throw_C_error(...);
extern __declspec(dllimport) int _Xbad_function_call(...);
extern int __ArrayUnwind(...);
extern __declspec(dllimport) int __CxxFrameHandler3(...);
extern int ___scrt_is_ucrt_dll_in_use(...);
extern __declspec(dllimport) int __acrt_iob_func(...);
extern __declspec(dllimport) int __current_exception(...);
extern __declspec(dllimport) int __current_exception_context(...);
extern __declspec(dllimport) int __std_exception_copy(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern __declspec(dllimport) int __stdio_common_vfprintf(...);
extern __declspec(dllimport) int __stdio_common_vsprintf(...);
extern __declspec(dllimport) int __stdio_common_vsscanf(...);
extern __declspec(dllimport) int _cexit(...);
extern __declspec(dllimport) int _close(...);
extern int _eh_vector_constructor_iterator_(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _isnan(...);
extern __declspec(dllimport) int _lseek(...);
extern __declspec(dllimport) int _strdup(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int abort(...);
extern __declspec(dllimport) int crt_at_quick_exit(...);
extern __declspec(dllimport) int execute_onexit_table(...);
extern __declspec(dllimport) int exit(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int isalpha(...);
extern __declspec(dllimport) int isdigit(...);
extern int lx(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int png_zalloc(...);
extern __declspec(dllimport) int register_onexit_function(...);
extern int s(...);
extern __declspec(dllimport) int strchr(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strrchr(...);
extern __declspec(dllimport) int strtol(...);
extern __declspec(dllimport) int strtoul(...);
extern int swi(...);
extern __declspec(dllimport) int terminate(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101b9120(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101badc0(...);
extern int thunk_FUN_101c3fc0(...);
extern int thunk_FUN_10bf66a0(...);
extern int thunk_FUN_10bf6a10(...);
extern int thunk_FUN_10bfb3d0(...);
extern int thunk_FUN_10e460f0(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106b260(...);
extern int thunk_FUN_110721b0(...);
extern int thunk_FUN_1107e1f0(...);
extern int thunk_FUN_1107e200(...);
extern int thunk_FUN_1107e550(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11095e00(...);
extern int thunk_FUN_11095e10(...);
extern int thunk_FUN_11096350(...);
extern int thunk_FUN_1109de60(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110cb560(...);
extern int thunk_FUN_110ce370(...);
extern int thunk_FUN_110cead0(...);
extern int thunk_FUN_110d3140(...);
extern int thunk_FUN_110d3ac0(...);
extern int thunk_FUN_110d55a0(...);
extern int thunk_FUN_110d5760(...);
extern int thunk_FUN_110d5780(...);
extern int thunk_FUN_110facf0(...);
extern int thunk_FUN_11108ca0(...);
extern int thunk_FUN_11108d30(...);
extern int thunk_FUN_11111ca0(...);
extern int thunk_FUN_11115d10(...);
extern int thunk_FUN_111191d0(...);
extern int thunk_FUN_11119580(...);
extern int thunk_FUN_11119940(...);
extern int thunk_FUN_11119cb0(...);
extern int thunk_FUN_1111c700(...);
extern int thunk_FUN_1111cf00(...);
extern int thunk_FUN_1111d190(...);
extern int thunk_FUN_1111de10(...);
extern int thunk_FUN_1111e210(...);
extern int thunk_FUN_1111f4b0(...);
extern int thunk_FUN_11123c70(...);
extern int thunk_FUN_11128570(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112a730(...);
extern int thunk_FUN_1113af60(...);
extern int thunk_FUN_1113f0e0(...);
extern int thunk_FUN_1113f590(...);
extern int thunk_FUN_111401c0(...);
extern int thunk_FUN_11140420(...);
extern int thunk_FUN_11148fb0(...);
extern int thunk_FUN_111491e0(...);
extern int thunk_FUN_1114d110(...);
extern int thunk_FUN_1114ef60(...);
extern int thunk_FUN_1114f320(...);
extern int thunk_FUN_11156160(...);
extern int thunk_FUN_11156310(...);
extern int thunk_FUN_111564a0(...);
extern int thunk_FUN_11156630(...);
extern int thunk_FUN_111567c0(...);
extern int thunk_FUN_111569a0(...);
extern int thunk_FUN_11156b30(...);
extern int thunk_FUN_11156cc0(...);
extern int thunk_FUN_11156e50(...);
extern int thunk_FUN_11156fe0(...);
extern int thunk_FUN_11157170(...);
extern int thunk_FUN_11157300(...);
extern int thunk_FUN_11157490(...);
extern int thunk_FUN_11157620(...);
extern int thunk_FUN_111577b0(...);
extern int thunk_FUN_11157940(...);
extern int thunk_FUN_11157af0(...);
extern int thunk_FUN_1115c410(...);
extern int thunk_FUN_1115c4e0(...);
extern int thunk_FUN_1115ed60(...);
extern int thunk_FUN_11160050(...);
extern int thunk_FUN_11160980(...);
extern int thunk_FUN_11160b70(...);
extern int thunk_FUN_11167180(...);
extern int thunk_FUN_11169ca0(...);
extern int thunk_FUN_11169f40(...);
extern int thunk_FUN_1116e480(...);
extern int thunk_FUN_111704f0(...);
extern int thunk_FUN_11172590(...);
extern int thunk_FUN_11175fe0(...);
extern int thunk_FUN_11177120(...);
extern int thunk_FUN_11179a20(...);
extern int thunk_FUN_11179a70(...);
extern int thunk_FUN_11179c30(...);
extern int thunk_FUN_11179ca0(...);
extern int thunk_FUN_11179d10(...);
extern int thunk_FUN_11179d80(...);
extern int thunk_FUN_11179de0(...);
extern int thunk_FUN_111879d0(...);
extern int thunk_FUN_1118b7b0(...);
extern int thunk_FUN_1118d4f0(...);
extern int thunk_FUN_1118ec30(...);
extern int thunk_FUN_1118ee50(...);
extern int thunk_FUN_11192d60(...);
extern int thunk_FUN_1119ad30(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3ca0(...);
extern int thunk_FUN_111a4170(...);
extern int thunk_FUN_111a42a0(...);
extern int thunk_FUN_111a45e0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111a5f10(...);
extern int thunk_FUN_111a6260(...);
extern int thunk_FUN_111a66c0(...);
extern int thunk_FUN_111a6a30(...);
extern int thunk_FUN_111a6f10(...);
extern int thunk_FUN_111a7100(...);
extern int thunk_FUN_111a7300(...);
extern int thunk_FUN_111a86c0(...);
extern int thunk_FUN_111a8780(...);
extern int thunk_FUN_111a8920(...);
extern int thunk_FUN_111a8930(...);
extern int thunk_FUN_111ac070(...);
extern int thunk_FUN_111af700(...);
extern int thunk_FUN_111be320(...);
extern int thunk_FUN_111bed40(...);
extern int thunk_FUN_111c0480(...);
extern int thunk_FUN_111c1530(...);
extern int thunk_FUN_111c1810(...);
extern int thunk_FUN_111c1d40(...);
extern int thunk_FUN_111c25c0(...);
extern int thunk_FUN_111c29a0(...);
extern int thunk_FUN_111c2c00(...);
extern int thunk_FUN_111c3d40(...);
extern int thunk_FUN_111c7970(...);
extern int thunk_FUN_111c7b30(...);
extern int thunk_FUN_111c7f50(...);
extern int thunk_FUN_111c8350(...);
extern int thunk_FUN_111c85c0(...);
extern int thunk_FUN_111c87b0(...);
extern int thunk_FUN_111c8f80(...);
extern int thunk_FUN_111c9000(...);
extern int thunk_FUN_111d0010(...);
extern int thunk_FUN_111d2fc0(...);
extern int thunk_FUN_111d34c0(...);
extern int thunk_FUN_111d35e0(...);
extern int thunk_FUN_111e8d70(...);
extern int thunk_FUN_111e9460(...);
extern int thunk_FUN_111f1980(...);
extern int thunk_FUN_111f4960(...);
extern int thunk_FUN_111f6c30(...);
extern int thunk_FUN_111fed00(...);
extern int thunk_FUN_11202480(...);
extern int thunk_FUN_11202570(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_1122b5e0(...);
extern int thunk_FUN_11231440(...);
extern int thunk_FUN_112334a0(...);
extern int thunk_FUN_112341b0(...);
extern int thunk_FUN_11234290(...);
extern int thunk_FUN_11235fb0(...);
extern int thunk_FUN_112368f0(...);
extern int thunk_FUN_11237dd0(...);
extern int thunk_FUN_11238060(...);
extern int thunk_FUN_1123a890(...);
extern int thunk_FUN_1123bf80(...);
extern int thunk_FUN_1123ecd0(...);
extern int thunk_FUN_1123ef30(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11240be0(...);
extern int thunk_FUN_11240cc0(...);
extern int thunk_FUN_11241dd0(...);
extern int thunk_FUN_11241ee0(...);
extern int thunk_FUN_11243220(...);
extern int thunk_FUN_11244d80(...);
extern int thunk_FUN_11244ee0(...);
extern int thunk_FUN_11246370(...);
extern int thunk_FUN_112470f0(...);
extern int thunk_FUN_11247c50(...);
extern int thunk_FUN_11247e90(...);
extern int thunk_FUN_11248330(...);
extern int thunk_FUN_11248b40(...);
extern int thunk_FUN_11249230(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124ae40(...);
extern int thunk_FUN_1124c8a0(...);
extern int thunk_FUN_1124cc10(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124eb30(...);
extern int thunk_FUN_1124ecb0(...);
extern int thunk_FUN_1124eda0(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f0e0(...);
extern int thunk_FUN_1124f190(...);
extern int thunk_FUN_1124fdc0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112505b0(...);
extern int thunk_FUN_11250a70(...);
extern int thunk_FUN_11253c70(...);
extern int thunk_FUN_1125a250(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1125b030(...);
extern int thunk_FUN_1125b880(...);
extern int thunk_FUN_1125d9d0(...);
extern int thunk_FUN_112611c0(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_112624a0(...);
extern int thunk_FUN_112637d0(...);
extern int thunk_FUN_11265ef0(...);
extern int thunk_FUN_11266700(...);
extern int thunk_FUN_11269bc0(...);
extern int thunk_FUN_1126d350(...);
extern int thunk_FUN_1126d6d0(...);
extern int thunk_FUN_11272de0(...);
extern int thunk_FUN_11273f80(...);
extern int thunk_FUN_112743a0(...);
extern int thunk_FUN_112747a0(...);
extern int thunk_FUN_11274880(...);
extern int thunk_FUN_11274a70(...);
extern int thunk_FUN_112752d0(...);
extern int thunk_FUN_11275f40(...);
extern int thunk_FUN_11276000(...);
extern int thunk_FUN_1127a020(...);
extern int thunk_FUN_1127a510(...);
extern int thunk_FUN_1127ac70(...);
extern int thunk_FUN_1127af20(...);
extern int thunk_FUN_1127bbb0(...);
extern int thunk_FUN_1127c4e0(...);
extern int thunk_FUN_1127c6b0(...);
extern int thunk_FUN_1127ca70(...);
extern int thunk_FUN_1127fa70(...);
extern int thunk_FUN_112816c0(...);
extern int thunk_FUN_112818d0(...);
extern int thunk_FUN_11281f90(...);
extern int thunk_FUN_11282620(...);
extern int thunk_FUN_11284370(...);
extern int thunk_FUN_11285a90(...);
extern int thunk_FUN_11285aa0(...);
extern int thunk_FUN_11285ab0(...);
extern int thunk_FUN_11285d80(...);
extern int thunk_FUN_11286500(...);
extern int thunk_FUN_112869b0(...);
extern int thunk_FUN_11286ff0(...);
extern int thunk_FUN_11287860(...);
extern int thunk_FUN_11287870(...);
extern int thunk_FUN_11287890(...);
extern int thunk_FUN_112878d0(...);
extern int thunk_FUN_11287ac0(...);
extern int thunk_FUN_1128c260(...);
extern int thunk_FUN_1128f080(...);
extern int thunk_FUN_1128f0a0(...);
extern int thunk_FUN_1128f0f0(...);
extern int thunk_FUN_1128f110(...);
extern int thunk_FUN_1128f160(...);
extern int thunk_FUN_1128f1b0(...);
extern int thunk_FUN_1128f200(...);
extern int thunk_FUN_1128f250(...);
extern int thunk_FUN_1128f6e0(...);
extern int thunk_FUN_112942e0(...);
extern int thunk_FUN_11294d60(...);
extern int thunk_FUN_112960d0(...);
extern int thunk_FUN_11296ca0(...);
extern int thunk_FUN_11297ec0(...);
extern int thunk_FUN_11298310(...);
extern int thunk_FUN_112983c0(...);
extern int thunk_FUN_11298430(...);
extern int thunk_FUN_11299700(...);
extern int thunk_FUN_1129e4e0(...);
extern int thunk_FUN_1129e920(...);
extern int thunk_FUN_1129ec00(...);
extern int thunk_FUN_1129fa70(...);
extern int thunk_FUN_1129fc20(...);
extern int thunk_FUN_112a0b40(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112a82d0(...);
extern int thunk_FUN_112a9690(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112aa310(...);
extern int thunk_FUN_112ac820(...);
extern int thunk_FUN_112afbd0(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_112c4ae0(...);
extern int thunk_FUN_112c6c00(...);
extern int thunk_FUN_112c8b80(...);
extern int thunk_FUN_112c9cb0(...);
extern int thunk_FUN_112ca470(...);
extern int thunk_FUN_112ea860(...);
extern int thunk_FUN_112eeea0(...);
extern int thunk_FUN_112ef180(...);
extern int thunk_FUN_112effc0(...);
extern int thunk_FUN_112f0000(...);
extern int thunk_FUN_112f2220(...);
extern int thunk_FUN_112f36a0(...);
extern int thunk_FUN_112f4790(...);
extern int thunk_FUN_1138faf0(...);
extern int thunk_FUN_113949e0(...);
extern int thunk_FUN_11395200(...);
extern int thunk_FUN_11397ee0(...);
extern int thunk_FUN_113b9ec0(...);
extern int thunk_FUN_113c1ba0(...);
extern int thunk_FUN_113c1c50(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113d1d90(...);
extern int thunk_FUN_113d2fb0(...);
extern int thunk_FUN_113d3650(...);
extern int thunk_FUN_113d8ef0(...);
extern int thunk_FUN_113d91d0(...);
extern int thunk_FUN_113daff0(...);
extern int thunk_FUN_113e2f30(...);
extern int thunk_FUN_113e5e30(...);
extern int thunk_FUN_113e9960(...);
extern int thunk_FUN_113e99a0(...);
extern int thunk_FUN_11408fc0(...);
extern int thunk_FUN_114096a0(...);
extern int thunk_FUN_1140d570(...);
extern int thunk_FUN_1140e8f0(...);
extern int thunk_FUN_11410360(...);
extern int thunk_FUN_11411940(...);
extern int thunk_FUN_11413ac0(...);
extern int thunk_FUN_11413b90(...);
extern int thunk_FUN_11413d00(...);
extern int thunk_FUN_11414d70(...);
extern int thunk_FUN_114156d0(...);
extern int thunk_FUN_114157a0(...);
extern int thunk_FUN_11417320(...);
extern int thunk_FUN_11417bb0(...);
extern int thunk_FUN_1141c860(...);
extern int thunk_FUN_11422150(...);
extern int thunk_FUN_114228a0(...);
extern int thunk_FUN_11423ed0(...);
extern int thunk_FUN_11423f00(...);
extern int thunk_FUN_114262c0(...);
extern int thunk_FUN_11429910(...);
extern int thunk_FUN_1142b1a0(...);
extern int thunk_FUN_114343d0(...);
extern int thunk_FUN_11436790(...);
extern int thunk_FUN_1143e810(...);
extern int thunk_FUN_11440330(...);
extern int thunk_FUN_11445f70(...);
extern int thunk_FUN_11448410(...);
extern int thunk_FUN_1144dbb0(...);
extern int thunk_FUN_1144dd80(...);
extern int thunk_FUN_114586f0(...);
extern int thunk_FUN_11458700(...);
extern int thunk_FUN_11458860(...);
extern int thunk_FUN_11459ad0(...);
extern int thunk_FUN_1145ad70(...);
extern int thunk_FUN_1145ae30(...);
extern int thunk_FUN_1145af00(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c460(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1145cb70(...);
extern int thunk_FUN_1145ddd0(...);
extern int thunk_FUN_1145de30(...);
extern int thunk_FUN_1145e260(...);
extern int thunk_FUN_1145e270(...);
extern int thunk_FUN_1145eb60(...);
extern int thunk_FUN_1145ed60(...);
extern int thunk_FUN_1146bd60(...);
extern int thunk_FUN_1146bf20(...);
extern int thunk_FUN_1146c180(...);
extern int thunk_FUN_1146cad0(...);
extern int thunk_FUN_1147b530(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148af70(...);
extern int thunk_FUN_1148b586(...);
extern int thunk_FUN_1148b596(...);
extern int thunk_FUN_1148bb2d(...);
extern int thunk_FUN_1148c90a(...);
extern int thunk_FUN_1148d1ec(...);
extern int DAT_1186d2ee;
extern int DAT_1187b728;
extern int DAT_118872bc;
extern int DAT_1188db18;
extern int DAT_11892e78;
extern int DAT_1189dca4;
extern int DAT_118a1c50;
extern int DAT_118b3060;
extern int DAT_119361e8;
extern int DAT_1194bf40;
extern int DAT_119c9c20;
extern int DAT_119cd1a8;
extern int DAT_119cd1ac;
extern int DAT_119cd1b0;
extern int DAT_119e0b2c;
extern int DAT_119e7b58;
extern int DAT_119fb2b8;
extern int DAT_119fb300;
extern int DAT_119fb400;
extern int DAT_11a02ef0;
extern int DAT_11a02f70;
extern int DAT_11bfcf18;
extern int DAT_11bfe690;
extern int DAT_11bfe698;
extern int DAT_11bfe6a0;
extern int DAT_11bfe6a8;
extern int DAT_11bfe6b0;
extern int DAT_11bfe6b8;
extern int DAT_11c00418;
extern int DAT_11c00448;
extern int DAT_11c00478;
extern int DAT_11c004a8;
extern int DAT_11d330dc;
extern int DAT_1205bd78;
extern int DAT_1205ce40;
extern int DAT_120604e8;
extern int DAT_12121d88;
extern int DAT_12121e6c;
extern int DAT_12121e80;
extern int DAT_12121ea4;
extern int DAT_12121eac;
extern int DAT_12121ed0;
extern int DAT_12121ed8;
extern int DAT_12126b84;
extern int DAT_122e8a1c;
extern int DAT_122e8a24;
extern int DAT_122f5600;
extern int DAT_122f5650;
extern int DAT_122f5674;
extern int DAT_122f57d4;
extern int DAT_122f57d8;
extern int DAT_122f5800;
extern int DAT_122f583c;
extern int DAT_122f583d;
extern int DAT_122f5de0;
extern int DAT_122f6978;
extern int DAT_122f697c;
extern int DAT_122f6bd8;
extern int DAT_122f6bdc;
extern int DAT_122f6c18;
extern int DAT_122f6c20;
extern int DAT_122f6ca0;
extern int DAT_122f6d28;
extern int DAT_122f6d4c;
extern int DAT_122f6d50;
extern int DAT_122f6d88;
extern int DAT_122f6d90;
extern int DAT_122f6d94;
extern int DAT_122f6da0;
extern int DAT_122f7030;
extern int DAT_122f7034;
extern int DAT_122f7050;
extern int DAT_122f7054;
extern int DAT_122f7060;
extern int DAT_122f7134;
extern int DAT_122f73fc;
extern int DAT_122fa560;
extern int DAT_122fa598;
extern int DAT_122faa80;
extern int DAT_122fabe0;
extern int DAT_122fabec;
extern int UNK_11bfcdc0;
extern int UNK_11bfcdc4;
extern int _DAT_119d7b20;
extern int _DAT_119df2d0;
extern int _DAT_11c03cec;
extern int _DAT_11c03cf0;
extern int _UNK_119d7b28;
extern int _UNK_119df2d4;
extern int _UNK_119df2d8;
extern int _UNK_119df2dc;
extern int ghidra_vftable_ChunkLengthParser;
extern int ghidra_vftable_MusicPlaybackQuality;
extern int ghidra_vftable_RAesDecoder;
extern int ghidra_vftable_RAesEncoder;
extern int ghidra_vftable_RAsyncNullIOSession;
extern int ghidra_vftable_RBrowseContentProvider;
extern int ghidra_vftable_RCRInParam;
extern int ghidra_vftable_RCRInParamDeepCopy;
extern int ghidra_vftable_RCROutParamShallowCopy;
extern int ghidra_vftable_RCRResultParser;
extern int ghidra_vftable_RCompoundAsyncIOOperation;
extern int ghidra_vftable_RContentProvider;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_REncryptedDataDecoder;
extern int ghidra_vftable_REncryptedDataEncoder;
extern int ghidra_vftable_REncryptedStringDecoder;
extern int ghidra_vftable_REncryptedStringEmitter;
extern int ghidra_vftable_REncryptedStringEncoder;
extern int ghidra_vftable_RHTControl;
extern int ghidra_vftable_RHTTPRequest;
extern int ghidra_vftable_RHTTPSeekableDataProvider;
extern int ghidra_vftable_RHttpBaseNoRedirectAIOOp;
extern int ghidra_vftable_RIPNetStartListenerBase;
extern int ghidra_vftable_RIPNetStartListenerDevDisc;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RJsonWriterBase;
extern int ghidra_vftable_RKVReport;
extern int ghidra_vftable_RKVReportData;
extern int ghidra_vftable_RKeyValuePairsQueryParams;
extern int ghidra_vftable_RLastFMRequest;
extern int ghidra_vftable_RLastFMResultParser;
extern int ghidra_vftable_RMSearchNotifyHandler;
extern int ghidra_vftable_RMemoryBufferStream;
extern int ghidra_vftable_RMusicServiceListCB;
extern int ghidra_vftable_RMusicServicesDirectory;
extern int ghidra_vftable_RNotifyBodyParser;
extern int ghidra_vftable_RReadFileStream;
extern int ghidra_vftable_RReportCategoryInfo;
extern int ghidra_vftable_RReportFileLoader;
extern int ghidra_vftable_RReportFileParser;
extern int ghidra_vftable_RReportFileParserCB;
extern int ghidra_vftable_RReportUploaderInfo;
extern int ghidra_vftable_RRestoreAVTStateAIOOp;
extern int ghidra_vftable_RSOAPComplexInParam;
extern int ghidra_vftable_RSOAPFaultWriter;
extern int ghidra_vftable_RSOAPWriter;
extern int ghidra_vftable_RSonosContentProviderImpl;
extern int ghidra_vftable_RSonosContentProviderMediaSessions;
extern int ghidra_vftable_RSonosGetExtendedMetadataTextParam;
extern int ghidra_vftable_RSonosGetObjIDsForAlbumAIOOp;
extern int ghidra_vftable_RSonosGetObjIDsForTrackAIOOp;
extern int ghidra_vftable_RSonosParamRX;
extern int ghidra_vftable_RSonosPositionInformationParam;
extern int ghidra_vftable_RSonosRelatedActionsParam;
extern int ghidra_vftable_RSonosRelatedInfoParam;
extern int ghidra_vftable_RStringBuilder;
extern int ghidra_vftable_RStringStream;
extern int ghidra_vftable_RStringTableParserCB;
extern int ghidra_vftable_RSystemPropertiesManager;
extern int ghidra_vftable_RSystemTime;
extern int ghidra_vftable_RTrackMetaDataCacheCB;
extern int ghidra_vftable_RTrackMetaDataObjCB;
extern int ghidra_vftable_RUnsubscribeRequest;
extern int ghidra_vftable_RUsageDataSharing;
extern int ghidra_vftable_RXMLParserBase;
extern int ghidra_vftable_RXMLRPCAsyncIOOperation;
extern int ghidra_vftable_RXMLRPCInParam;
extern int ghidra_vftable_RXmlBuffer;
extern int ghidra_vftable_RXmlStaticBuffer;
extern int ghidra_vftable_RXmlWriter;
extern int ghidra_vftable_RZoneGroupStateProcessor;
extern int ghidra_vftable_RefCountBase;
extern int ghidra_vftable_RxmlWritableStreamWriter;
extern int ghidra_vftable_SwfObjArray;
extern int ghidra_vftable_SwfObjCPPerformActionOp;
extern int ghidra_vftable_SwfObjIndexListener;
extern int ghidra_vftable_SwfObjLastFMCP;
extern int ghidra_vftable_SwfObjObject;
extern int ghidra_vftable_SwfObjWebSvcCP;
extern int ghidra_vftable_SwfWorkerThread;
extern int ghidra_vftable_TestPointHandler;
extern int ghidra_vftable_ZPConnRec;
extern int ghidra_vftable_nonstd_expected_lite_bad_expected_access;
extern int ghidra_vftable_nonstd_optional_lite_bad_optional_access;
extern int ghidra_vftable_nonstd_variants_bad_variant_access;
extern int ghidra_vftable_sonos_RootCACertBundle_Metadata;
extern int ghidra_vftable_sonos_SettingsFile;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_bad_alloc;
extern int ghidra_vftable_std_exception;
extern int ghidra_vftable_std_logic_error;
extern int ghidra_vftable_type_info;
extern int in_AL;
extern int in_EAX;
extern int in_EDX;
extern int in_stack_00000014;
extern int in_stack_0000001c;
extern int in_stack_00000020;
extern int in_stack_00000024;
extern int uRam00000000;
extern int uStack00000009;
extern int uStack0000000a;
extern int uStack0000000b;
extern int uStack_4;
extern int uStack_8;
extern int uStack_88;
extern int unaff_EBP;
extern int unaff_EBX;
extern int unaff_EDI;
extern int unaff_ESI;
extern undefined1 LAB_100841f3[];
extern undefined1 LAB_10088519[];
extern undefined1 LAB_1116d5a2[];
extern undefined1 LAB_1131bf60[];
extern undefined1 LAB_1131bf90[];
extern undefined1 LAB_11330030[];
extern undefined1 LAB_113311c0[];
extern undefined1 LAB_11332d30[];
extern undefined1 LAB_1134c3a0[];
extern undefined1 LAB_1136b2a0[];
extern undefined1 LAB_113b0822[];
extern undefined1 LAB_113e2340[];
extern undefined1 LAB_113e2360[];
extern undefined1 LAB_114234b2[];
extern undefined1 LAB_1145c278[];
extern undefined1 LAB_117c16d0[];
extern undefined1 LAB_117cf11d[];
extern undefined1 LAB_117d1628[];
extern int *PTR_DAT_1211df30;
extern int *PTR_DAT_12120e30;
extern int *PTR_FUN_12126b48;
extern int *PTR_WideCharToMultiByte_12122534;
extern int *PTR_free_12121e64;
extern int *PTR_s_NS2_MSG_KEEP_ALIVE_11a03004;
extern int *stack0x00000000;
extern int *stack0x00000004;
extern int *stack0x00000008;
extern int *stack0x0000000c;
extern int *stack0x00000010;
extern int *stack0x00000014;
extern int *stack0xfffffff4;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std { template<class... A> int _Throw_C_error(A...); template<class... A> int _Xbad_function_call(A...);}
typedef void *CLIENT_KEY_INT;
typedef void *CLIENT_KEY_PERF;
typedef void *CLIENT_KEY_PROD;
typedef void *CLIENT_KEY_STAGE;
typedef void *CLIENT_KEY_TEST;
typedef void *CLOSE;
typedef void *DELETE;
typedef void *EXPAT_ENTROPY_DEBUG;
typedef void *HTTP;
typedef void *HWND;
typedef void *LOCK;
typedef void *LPCRITICAL_SECTION;
typedef void *LPLONG;
typedef void *MD5;
typedef void *S;
typedef void *SHA1;
typedef void *SHA224;
typedef void *SHA256;
typedef void *SHA384;
typedef void *SHA512;
typedef void *TIMERPROC;
typedef void *UNLOCK;
typedef void *UNRECOVERED_JUMPTABLE;
typedef void *WARNING;
typedef void *X_;
typedef void *_func_void_void_ptr;
struct Array { char _pad; Array(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Call { char _pad; Call(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CloseHandle { char _pad; CloseHandle(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTimeServer { char _pad; CurrentTimeServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Debug { char _pad; Debug(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DeleteCriticalSection { char _pad; DeleteCriticalSection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Entropy { char _pad; Entropy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ExitProcess { char _pad; ExitProcess(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FindClose { char _pad; FindClose(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetTickCount { char _pad; GetTickCount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HTSatChanMapSet { char _pad; HTSatChanMapSet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Libraries { char _pad; Libraries(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Match { char _pad; Match(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NetStart { char _pad; NetStart(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Object { char _pad; Object(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OnAlarmsChanged { char _pad; OnAlarmsChanged(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_10 { char _pad; Ordinal_10(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_115 { char _pad; Ordinal_115(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_22 { char _pad; Ordinal_22(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_23 { char _pad; Ordinal_23(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_3 { char _pad; Ordinal_3(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ordinal_4 { char _pad; Ordinal_4(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Potential { char _pad; Potential(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RDMValue { char _pad; RDMValue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RadioList { char _pad; RadioList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Reason { char _pad; Reason(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ReleaseSemaphore { char _pad; ReleaseSemaphore(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ResetEvent { char _pad; ResetEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SatRoomUUID { char _pad; SatRoomUUID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Session { char _pad; Session(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetEvent { char _pad; SetEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetTimer { char _pad; SetTimer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Single { char _pad; Single(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Software { char _pad; Software(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SortOrder { char _pad; SortOrder(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SwfObjIndexListener { char _pad; SwfObjIndexListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Switch { char _pad; Switch(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UNK_11bfcdc0 { char _pad; UNK_11bfcdc0(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UNK_11bfcdc4 { char _pad; UNK_11bfcdc4(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UsageMetrics { char _pad; UsageMetrics(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct WaitForSingleObject { char _pad; WaitForSingleObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; void __thiscall FUN_11103e70(int param_2); int __thiscall FUN_11108cf0(int *param_2); undefined4 * __thiscall FUN_1110b060(undefined4 param_2); void __thiscall FUN_1110ef60(undefined4 param_2); void __thiscall FUN_1110f120(int param_2); void __thiscall FUN_11110b90(uint *param_2); undefined4 __thiscall FUN_111115e0(uint param_2); void __thiscall FUN_11112590(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 __thiscall FUN_11113bb0(undefined4 *param_2,undefined1 *param_3); uint __thiscall FUN_11113c60(undefined4 param_2,char param_3); int __thiscall FUN_11115a00(int param_2); void __thiscall FUN_1111a090(undefined4 param_2); int * __thiscall FUN_1111d1f0(int *param_2); void __thiscall FUN_11122950(undefined4 param_2); undefined4 __thiscall FUN_11125cd0(undefined4 param_2,int param_3); void __thiscall FUN_11127ac0(int param_2); void __thiscall FUN_11127b10(int param_2); void __thiscall FUN_11127bc0(int param_2); void __thiscall FUN_11127c00(int param_2); void __thiscall FUN_11127c40(int param_2); void __thiscall FUN_1112bb60(int param_2); undefined4 __thiscall FUN_111307b0(undefined4 param_2); undefined4 __thiscall FUN_111307e0(undefined4 param_2); undefined4 __thiscall FUN_11135390(int param_2); undefined4 __thiscall FUN_111354c0(int param_2); undefined4 __thiscall FUN_11135ae0(int param_2); undefined4 __thiscall FUN_11137410(undefined4 param_2); int __thiscall FUN_111382a0(int param_2); undefined4 __thiscall FUN_11138590(uint param_2,int param_3); undefined4 __thiscall FUN_11139850(byte param_2); undefined4 __thiscall FUN_1113be80(int param_2,int param_3); void __thiscall FUN_1113f110(int param_2); void __thiscall FUN_11140c20(undefined4 param_2); void __thiscall FUN_11147f30(undefined4 param_2); void __thiscall FUN_11147f60(undefined4 param_2); void __thiscall FUN_11149270(int param_2); void __thiscall FUN_111492c0(undefined4 param_2,char *param_3); void __thiscall FUN_1114a6f0(uint param_2); undefined4 * __thiscall FUN_1114da10(byte param_2); undefined1 __thiscall FUN_11150470(int *param_2,undefined4 param_3); void __thiscall FUN_11158070(short param_2); void __thiscall FUN_111580a0(short param_2); void __thiscall FUN_111580d0(short param_2); void __thiscall FUN_11158120(undefined4 param_2); void __thiscall FUN_11158140(short param_2); void __thiscall FUN_11158170(byte param_2); void __thiscall FUN_111581a0(short param_2); void __thiscall FUN_11158240(byte param_2); void __thiscall FUN_11158270(short param_2); void __thiscall FUN_111582a0(byte param_2); void __thiscall FUN_111582d0(short param_2); void __thiscall FUN_11158300(byte param_2); void __thiscall FUN_11158330(short param_2); void __thiscall FUN_11158360(short param_2); void __thiscall FUN_11158390(short param_2); void __thiscall FUN_111583c0(byte param_2); void __thiscall FUN_11158420(short param_2); void __thiscall FUN_11159cc0(undefined4 param_2); void __thiscall FUN_1115ebe0(int param_2); undefined4 __thiscall FUN_111611f0(int param_2); undefined4 __thiscall FUN_111619e0(byte param_2); void __thiscall FUN_11162290(undefined4 param_2); void __thiscall FUN_11163e50(undefined4 *param_2); undefined4 __thiscall FUN_111644c0(int param_2,int param_3); undefined4 __thiscall FUN_111663d0(undefined4 param_2,short *param_3); undefined4 * __thiscall FUN_11167050(undefined4 param_2,undefined4 param_3); void __thiscall FUN_11167580(int param_2); void __thiscall FUN_11167760(undefined4 param_2,byte param_3); int __thiscall FUN_11169c60(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1116d580(int param_2); undefined4 __thiscall FUN_1116ea70(undefined4 param_2); int __thiscall FUN_111704b0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_111711d0(int *param_2,undefined4 param_3); undefined4 __thiscall FUN_11172e30(byte param_2); void __thiscall FUN_11174050(int param_2); undefined4 __thiscall FUN_111767c0(uint param_2); void __thiscall FUN_11179720(undefined4 param_2); int __thiscall FUN_11179ac0(undefined4 param_2); int __thiscall FUN_11179b10(undefined4 param_2); int __thiscall FUN_11179b60(undefined4 param_2); int __thiscall FUN_11179bb0(int *param_2); int __thiscall FUN_11179bf0(int *param_2); undefined4 __thiscall FUN_1118c3e0(uint param_2); void __thiscall FUN_1118d4c0(undefined4 param_2); undefined4 __thiscall FUN_1118f4d0(void *param_2,uint param_3); undefined4 __thiscall FUN_11191ec0(byte param_2); void __thiscall FUN_11193490(int param_2); undefined4 * __thiscall FUN_11194190(undefined4 param_2,undefined4 param_3); void __thiscall FUN_111941f0(int param_2); undefined4 __thiscall FUN_1119ace0(undefined4 param_2,short *param_3); void __thiscall FUN_1119bdf0(int param_2); void __thiscall FUN_1119c0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5); void __thiscall FUN_1119c190(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9); void __thiscall FUN_111a00f0(int param_2); void __thiscall FUN_111a05e0(int param_2); bool __thiscall FUN_111a62a0(undefined4 param_2); int __thiscall FUN_111a72b0(int *param_2); void __thiscall FUN_111a8780(undefined4 param_2); void __thiscall FUN_111ab110(uint param_2); undefined4 __thiscall FUN_111be750(int param_2); undefined4 __thiscall FUN_111c1270(undefined4 *param_2); undefined4 __thiscall FUN_111c1290(undefined4 *param_2); undefined4 __thiscall FUN_111c12b0(undefined4 *param_2); undefined4 __thiscall FUN_111c12d0(undefined4 *param_2); void __thiscall FUN_111c1390(undefined4 *param_2); void __thiscall FUN_111c13d0(undefined4 *param_2); void __thiscall FUN_111c1460(undefined4 *param_2); undefined4 __thiscall FUN_111c1bd0(undefined4 param_2,int param_3); int * __thiscall FUN_111c2330(int *param_2); void __thiscall FUN_111c2590(undefined4 param_2); int __thiscall FUN_111c2670(undefined4 param_2); undefined4 __thiscall FUN_111c3f50(byte param_2); undefined4 __thiscall FUN_111c4040(byte param_2); void __thiscall FUN_111c5e90(undefined4 param_2,undefined4 param_3,int *param_4); void __thiscall FUN_111c7940(undefined4 param_2); int __thiscall FUN_111c79d0(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_111cb020(int param_2,undefined4 param_3); undefined4 * __thiscall FUN_111d00e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_111d60f0(byte param_2); undefined4 * __thiscall FUN_111d6130(byte param_2); undefined4 * __thiscall FUN_111d6180(byte param_2); undefined4 * __thiscall FUN_111d6c10(byte param_2); undefined4 * __thiscall FUN_111d6c50(byte param_2); undefined4 * __thiscall FUN_111d6c90(byte param_2); undefined4 * __thiscall FUN_111d6cd0(byte param_2); undefined4 * __thiscall FUN_111d7050(byte param_2); undefined4 * __thiscall FUN_111d73c0(byte param_2); undefined4 * __thiscall FUN_111d7530(byte param_2); undefined4 __thiscall FUN_111e2cb0(undefined4 param_2); void __thiscall FUN_111f4a70(undefined4 param_2,undefined4 param_3); void __thiscall FUN_111f5630(undefined4 param_2); void __thiscall FUN_111f5990(undefined4 param_2); undefined4 __thiscall FUN_111f6e80(int param_2); undefined4 * __thiscall FUN_111f7790(undefined4 param_2); undefined1 __thiscall FUN_111fc550(undefined4 param_2); void __thiscall FUN_111fc6a0(undefined4 param_2); undefined1 __thiscall FUN_111fc6d0(undefined4 param_2); undefined1 __thiscall FUN_111fc820(undefined4 param_2); undefined4 * __thiscall FUN_111fe350(undefined4 param_2); undefined4 * __thiscall FUN_111fedd0(byte param_2); undefined4 * __thiscall FUN_111ff0f0(byte param_2); void __thiscall FUN_111ff660(undefined4 param_2,undefined4 param_3,undefined4 param_4); int __thiscall FUN_11200a70(undefined4 param_2); void __thiscall FUN_112022a0(undefined4 param_2); undefined4 * __thiscall FUN_11203a40(undefined4 *param_2); void __thiscall FUN_112045a0(int *param_2); void __thiscall FUN_112046d0(undefined4 *param_2); undefined1 * __thiscall FUN_11204720(undefined1 *param_2); void __thiscall FUN_112056a0(undefined4 param_2); undefined4 __thiscall FUN_11205a50(byte param_2); void __thiscall FUN_11208430(undefined4 *param_2); undefined4 __thiscall FUN_11208e90(byte param_2); undefined4 __thiscall FUN_1120bb50(byte param_2); undefined4 __thiscall FUN_1120cc70(byte param_2); undefined4 __thiscall FUN_112145b0(byte param_2); undefined4 __thiscall FUN_11217580(byte param_2); undefined4 __thiscall FUN_11218090(byte param_2); undefined4 __thiscall FUN_11218ca0(byte param_2); undefined4 * __thiscall FUN_11219c80(byte param_2); undefined4 * __thiscall FUN_1121b020(byte param_2); undefined4 __thiscall FUN_1121b960(byte param_2); undefined4 __thiscall FUN_1121dcd0(byte param_2); undefined4 __thiscall FUN_112220c0(byte param_2); undefined4 __thiscall FUN_112238d0(byte param_2); undefined4 __thiscall FUN_11227f90(byte param_2); void __thiscall FUN_1122add0(int *param_2); undefined4 * __thiscall FUN_1122b5a0(int param_2); undefined4 * __thiscall FUN_1122b640(undefined4 param_2); undefined4 * __thiscall FUN_1122b690(int param_2); undefined4 * __thiscall FUN_1122bbf0(byte param_2); undefined4 * __thiscall FUN_1122bc30(byte param_2); undefined1 __thiscall FUN_1122e250(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); undefined4 * __thiscall FUN_11230240(int *param_2); undefined4 * __thiscall FUN_11231890(byte param_2); void __thiscall FUN_11232970(undefined4 *param_2); undefined4 * __thiscall FUN_112363e0(byte param_2); void __thiscall FUN_112382e0(undefined4 param_2,undefined4 param_3,int *param_4); undefined1 __thiscall FUN_11238b30(undefined4 param_2,int param_3); void __thiscall FUN_11239ce0(int param_2); void __thiscall FUN_11239de0(undefined4 param_2); void __thiscall FUN_1123ef00(int *param_2); undefined4 __thiscall FUN_1123f580(byte param_2); undefined4 * __thiscall FUN_112432f0(int param_2); undefined4 * __thiscall FUN_11243380(int param_2); undefined4 * __thiscall FUN_11243600(byte param_2); undefined4 * __thiscall FUN_11243670(byte param_2); int __thiscall FUN_112482e0(byte param_2); void __thiscall FUN_11249e30(undefined4 param_2,undefined4 param_3); void __thiscall FUN_1124d500(int param_2,int param_3); undefined4 * __thiscall FUN_1124f540(byte param_2); undefined4 * __thiscall FUN_1124f5e0(byte param_2); undefined4 * __thiscall FUN_1124f7c0(byte param_2); undefined4 * __thiscall FUN_1124fbb0(byte param_2); int __thiscall FUN_1124fec0(undefined4 param_2); int __thiscall FUN_1124ff50(undefined4 param_2); int __thiscall FUN_11250060(undefined4 param_2); int __thiscall FUN_112500b0(undefined4 param_2); void __thiscall FUN_11253cd0(char *param_2); void __thiscall FUN_11253d30(char *param_2); void __thiscall FUN_11254500(char *param_2); undefined4 __thiscall FUN_11257750(undefined1 *param_2,undefined4 param_3); undefined4 __thiscall FUN_11257790(undefined1 *param_2,undefined4 param_3); void __thiscall FUN_11258890(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_1125ac90(undefined1 *param_2,int param_3); undefined4 * __thiscall FUN_1125b920(byte param_2); undefined4 * __thiscall FUN_1125bcf0(undefined4 param_2); undefined4 * __thiscall FUN_1125bd40(byte param_2); undefined4 * __thiscall FUN_1125d870(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_1125d9f0(byte param_2); undefined4 * __thiscall FUN_1125da40(byte param_2); undefined4 * __thiscall FUN_1125da90(byte param_2); undefined4 * __thiscall FUN_11261f40(byte param_2); undefined4 * __thiscall FUN_11262460(undefined4 param_2,undefined4 param_3); void __thiscall FUN_11262cc0(char param_2); undefined4 * __thiscall FUN_11264740(undefined4 param_2); undefined4 * __thiscall FUN_11266450(undefined1 *param_2,undefined4 param_3); undefined4 * __thiscall FUN_11266490(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_11266cd0(byte param_2); undefined4 __thiscall FUN_11268b60(undefined4 *param_2); undefined4 __thiscall FUN_1126b940(uint param_2); undefined4 __thiscall FUN_1126bf80(int param_2); uint __thiscall FUN_1126ca20(void *param_2,uint param_3); undefined4 __thiscall FUN_1126cb40(undefined4 param_2,undefined4 param_3); int __thiscall FUN_1126d3a0(uint *param_2); void __thiscall FUN_11270240(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_11270b00(byte param_2); undefined4 * __thiscall FUN_11270b40(byte param_2); /* WARNING: Switch with 1 destination removed at 0x11273f0c : 6 cases all go to same destination */ void __thiscall FUN_11273ef0(undefined4 *param_2); undefined4 * __thiscall FUN_11274040(undefined1 param_2); undefined4 * __thiscall FUN_112740e0(undefined1 *param_2,undefined4 param_3); undefined4 * __thiscall FUN_11274140(undefined4 param_2); undefined4 * __thiscall FUN_112741e0(byte param_2); void __thiscall FUN_11274540(char *param_2); void __thiscall FUN_11274a70(char *param_2); void __thiscall FUN_11278b20(char *param_2); undefined1 __thiscall FUN_1127a280(int param_2); undefined1 * __thiscall FUN_1127a510(uint param_2); undefined1 __thiscall FUN_1127afa0(undefined4 *param_2,int param_3); void __thiscall FUN_1127b030(char *param_2,undefined4 param_3); int __thiscall FUN_11281670(undefined4 param_2); undefined4 * __thiscall FUN_11281d20(byte param_2); void __thiscall FUN_11283190(undefined4 param_2,undefined4 param_3); void __thiscall FUN_11283ad0(undefined2 param_2,undefined4 param_3); void __thiscall FUN_11283d00(undefined2 param_2,undefined4 param_3); void __thiscall FUN_11283fc0(undefined2 param_2,undefined4 param_3); uint __thiscall FUN_112840c0(undefined2 param_2,undefined4 param_3); uint __thiscall FUN_11284310(undefined2 param_2,undefined4 param_3); uint __thiscall FUN_11285720(undefined2 param_2,undefined4 param_3); uint __thiscall FUN_112879c0(uint param_2,undefined4 param_3); undefined4 __thiscall FUN_112882c0(undefined4 param_2); undefined4 __thiscall FUN_11288300(undefined4 param_2); undefined4 * __thiscall FUN_11289300(undefined4 param_2,undefined4 param_3); void __thiscall FUN_112893b0(void *param_2,uint *param_3); undefined4 __thiscall FUN_11289400(uint param_2); uint __thiscall FUN_11289420(uint param_2); int __thiscall FUN_11289440(int param_2); int __thiscall FUN_1128af90(int param_2); undefined4 * __thiscall FUN_11291db0(int *param_2); undefined4 * __thiscall FUN_11291df0(int *param_2); undefined4 * __thiscall FUN_112937c0(undefined4 param_2); bool __thiscall FUN_112938b0(long param_2); bool __thiscall FUN_112938e0(long param_2); undefined4 * __thiscall FUN_112949a0(int param_2,undefined4 param_3); undefined4 * __thiscall FUN_1129c130(undefined4 *param_2); undefined4 * __thiscall FUN_1129cdc0(byte param_2); void __thiscall FUN_112e9650(undefined4 *param_2); void __thiscall FUN_112e9670(undefined4 *param_2); void __thiscall FUN_112e9690(undefined4 *param_2); void __thiscall FUN_112e96b0(undefined4 *param_2); void __thiscall FUN_112e9750(undefined4 *param_2); void __thiscall FUN_112e9780(undefined4 *param_2); void __thiscall FUN_112e98b0(undefined4 *param_2); void __thiscall FUN_112e98d0(undefined4 *param_2); void __thiscall FUN_112e98f0(undefined4 *param_2); void __thiscall FUN_112e9910(undefined4 *param_2); int __thiscall FUN_112edd20(byte param_2); int __thiscall FUN_112edd70(byte param_2); void __thiscall FUN_112ee190(undefined4 *param_2); void __thiscall FUN_112ee340(char param_2); void __thiscall FUN_112ee390(char param_2); void __thiscall FUN_112ee620(undefined4 *param_2); int __thiscall FUN_112f4060(byte param_2); undefined4 * __thiscall FUN_11459280(byte param_2); undefined4 __thiscall FUN_1145a880(undefined4 param_2,uint param_3); undefined4 * __thiscall FUN_1148b118(byte param_2); };
using namespace std;
undefined4 * __fastcall FUN_110f8eb0(undefined4 *param_1);
void __fastcall FUN_110f9660(int param_1);
void FUN_110fc270(void);
void __fastcall FUN_110ff4e0(int param_1);
int __fastcall FUN_111002e0(int param_1);
int __fastcall FUN_11100300(int param_1);
void __fastcall FUN_11100320(int param_1);
undefined4 __fastcall FUN_11101900(int param_1);
uint __fastcall FUN_11101940(int *param_1);
void FUN_11101c70(char *param_1);
bool FUN_11102250(void);
void __fastcall FUN_111045e0(int *param_1);
void __fastcall FUN_11106f40(int param_1);
void __stdcall FUN_11108ca0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_11109990(undefined4 *param_1);
void FUN_1110d700(undefined1 *param_1);
void __fastcall FUN_1110f4a0(int param_1);
void __stdcall FUN_1110fc20(int param_1,int param_2);
void __fastcall FUN_1110ff50(int *param_1);
undefined4 FUN_11111570(void);
void __fastcall FUN_11111e40(int param_1);
void __fastcall FUN_111135f0(int param_1);
int __fastcall FUN_1111b0a0(int param_1);
void FUN_1111c6a0(void);
undefined4 * __fastcall FUN_1111ecc0(undefined4 *param_1);
void __fastcall FUN_1111f410(int param_1);
int __stdcall FUN_1111fc80(undefined4 param_1);
int __fastcall FUN_11122380(int param_1);
void __stdcall FUN_111242a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_11125d90(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_111280b0(int param_1,int param_2);
void __fastcall FUN_11128100(int *param_1);
uint FUN_11128ff0(int param_1,int *param_2);
void __fastcall FUN_1112bdb0(int *param_1);
void __fastcall FUN_1112bfd0(int param_1);
undefined4 __stdcall FUN_1112c280(int param_1);
int __fastcall FUN_1112cd10(int param_1);
uint __fastcall FUN_1112ea40(int param_1);
undefined1 __fastcall FUN_11130320(undefined1 *param_1);
void __stdcall FUN_11132b40(int param_1,int param_2);
bool FUN_111342b0(void);
undefined1 FUN_11135050(int param_1);
undefined1 FUN_11135420(int param_1);
undefined1 FUN_11135460(int param_1);
undefined1 FUN_11135a30(int param_1);
undefined1 FUN_11135a70(int param_1);
undefined4 FUN_11135ab0(int param_1);
void __fastcall FUN_11136170(undefined4 *param_1);
int __fastcall FUN_11137120(int param_1);
void __fastcall FUN_11138180(int param_1);
void __fastcall FUN_11138260(int param_1);
undefined4 __fastcall FUN_111389e0(int param_1);
void FUN_11139450(void);
void __fastcall FUN_11139470(undefined4 *param_1);
void __stdcall FUN_1113a820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
void __stdcall FUN_1113b500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1113b580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 __fastcall FUN_1113cf20(int param_1);
int __fastcall FUN_1113da80(int param_1);
int __fastcall FUN_1113dab0(int param_1);
uint __fastcall FUN_1113de60(uint param_1);
int __fastcall FUN_1113df70(int param_1);
int __fastcall FUN_1113dfa0(int param_1);
int __fastcall FUN_1113dfd0(int param_1);
char * FUN_1113e4f0(char *param_1,uint param_2);
void FUN_1113f0e0(undefined4 param_1);
undefined4 FUN_1113f9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_1114a740(int param_1);
void __fastcall FUN_1114b950(int param_1);
void __fastcall FUN_1114d980(undefined4 *param_1);
void __fastcall FUN_1114f4f0(undefined4 *param_1);
void __fastcall FUN_11150140(int param_1);
void __fastcall FUN_11151f00(undefined4 param_1);
void __fastcall FUN_11152240(int param_1);
void __fastcall FUN_11152270(int param_1);
void __fastcall FUN_111522a0(int param_1);
void __fastcall FUN_11159df0(int param_1);
undefined1 * FUN_1115c530(char param_1);
undefined4 * __fastcall FUN_1115c810(undefined4 *param_1);
void __fastcall FUN_1115ed20(undefined4 param_1);
void __stdcall FUN_1115ee10(int param_1,int param_2);
bool FUN_1115f330(undefined4 param_1);
bool FUN_1115f360(undefined4 param_1);
bool FUN_1115f390(undefined4 param_1);
bool FUN_1115ff80(undefined4 param_1);
bool FUN_1115ffd0(undefined4 param_1);
void __fastcall FUN_11161dd0(undefined4 param_1);
undefined4 * __fastcall FUN_11164710(undefined4 *param_1);
undefined4 __fastcall FUN_111662d0(int param_1);
int * __fastcall FUN_11167970(int *param_1);
undefined4 __fastcall FUN_11169430(int param_1);
void __fastcall FUN_11169670(int param_1);
undefined4 * __fastcall FUN_1116a8e0(undefined4 *param_1);
void __fastcall FUN_1116b4a0(undefined4 *param_1);
int __stdcall FUN_1116b5c0(undefined4 param_1);
void __stdcall FUN_1116c930(undefined4 param_1);
undefined4 * __fastcall FUN_1116fe20(undefined4 *param_1);
undefined4 * __fastcall FUN_11171c40(undefined4 *param_1);
void __fastcall FUN_11172750(int *param_1);
void __stdcall FUN_11173390(int param_1,int param_2);
void __stdcall FUN_11174520(int param_1,int param_2);
void FUN_11175630(undefined4 param_1,undefined4 param_2);
void FUN_11175740(TIMERPROC param_1,UINT param_2);
void __fastcall FUN_11175cc0(undefined4 *param_1);
void __stdcall FUN_11175fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __stdcall FUN_11179a20(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_1117e0a0(undefined4 *param_1);
undefined4 * __fastcall FUN_1117e0e0(undefined4 *param_1);
undefined4 * __fastcall FUN_1117e120(undefined4 *param_1);
undefined4 * __fastcall FUN_1117e160(undefined4 *param_1);
undefined4 * __fastcall FUN_1117e1a0(undefined4 *param_1);
void __fastcall FUN_1117fbc0(int *param_1);
void __fastcall FUN_11180020(int *param_1);
void __fastcall FUN_11187ac0(int param_1);
void __fastcall FUN_111888f0(int param_1);
void __fastcall FUN_11189230(int *param_1);
void __stdcall FUN_111898b0(int param_1,int param_2);
void __stdcall FUN_11189900(int param_1,int param_2);
void __fastcall FUN_1118d1f0(int param_1);
undefined4 * __fastcall FUN_1118d8f0(undefined4 *param_1);
void __fastcall FUN_1118dce0(int *param_1);
void __fastcall FUN_1118dd60(int *param_1);
void __fastcall FUN_1118ecb0(int *param_1);
void FUN_11191dc0(void);
bool __stdcall FUN_11192d20(undefined4 param_1);
void FUN_11193c40(void);
void __fastcall FUN_11195470(undefined4 *param_1);
undefined4 FUN_1119cfc0(int param_1);
void __fastcall FUN_111a0360(int param_1);
void __fastcall FUN_111a03a0(int param_1);
void __fastcall FUN_111a03e0(int param_1);
void __fastcall FUN_111a0620(int param_1);
int __fastcall FUN_111a2cb0(int *param_1);
char * __fastcall FUN_111a32a0(undefined4 *param_1);
int FUN_111a3d30(void);
undefined4 * __fastcall FUN_111a4b00(undefined4 *param_1);
void FUN_111a5a00(void);
undefined4 __stdcall FUN_111a6a00(undefined4 param_1,undefined4 param_2);
void FUN_111a6f10(void);
undefined4 FUN_111a72e0(int *param_1);
undefined4 * FUN_111a7590(undefined4 param_1);
void FUN_111a7630(undefined4 *param_1);
undefined1 __fastcall FUN_111a92e0(int param_1);
void FUN_111abf70(int *param_1);
void FUN_111ac070(undefined4 param_1,undefined4 param_2);
int FUN_111ac1c0(undefined4 param_1,undefined4 param_2);
void FUN_111af700(int param_1);
void FUN_111b1d50(int *param_1);
void FUN_111bdc10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int __fastcall FUN_111bec60(int param_1);
undefined4 FUN_111bf4b0(int param_1,int *param_2);
void FUN_111c0380(int param_1,undefined4 *param_2,int param_3);
int FUN_111c0480(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_111c0a60(void);
void __fastcall FUN_111c0a80(undefined4 *param_1);
void __fastcall FUN_111c0b90(undefined4 *param_1);
void __fastcall FUN_111c12f0(int param_1);
void __fastcall FUN_111c1320(int param_1);
void __fastcall FUN_111c1340(int param_1);
void __fastcall FUN_111c1360(int param_1);
undefined4 __fastcall FUN_111c1e90(int param_1);
uint __fastcall FUN_111c2060(int param_1);
undefined4 * __fastcall FUN_111c2fe0(undefined4 *param_1);
void __fastcall FUN_111c3980(int *param_1);
void __fastcall FUN_111c39b0(undefined4 *param_1);
void __fastcall FUN_111c3a70(int *param_1);
void FUN_111c3ae0(void);
char FUN_111c4830(int param_1);
void __fastcall FUN_111c63d0(int param_1);
undefined4 * __fastcall FUN_111c9fb0(undefined4 *param_1);
undefined4 * __fastcall FUN_111ca1e0(undefined4 *param_1);
undefined4 * __fastcall FUN_111ca210(undefined4 *param_1);
uint * __fastcall FUN_111ca240(uint *param_1);
undefined4 * __fastcall FUN_111cfd00(undefined4 *param_1);
void __fastcall FUN_111d2ee0(int param_1);
void __fastcall FUN_111d3230(undefined4 *param_1);
void __fastcall FUN_111d3270(undefined4 *param_1);
void __fastcall FUN_111d32b0(int param_1);
void __fastcall FUN_111d3300(int *param_1);
void __fastcall FUN_111d3330(int param_1);
void __fastcall FUN_111d33f0(int *param_1);
void __fastcall FUN_111d3430(int *param_1);
void FUN_111d3c60(void);
void __fastcall FUN_111d3e40(undefined4 *param_1);
void __fastcall FUN_111d43a0(undefined4 *param_1);
void __fastcall FUN_111d4600(undefined4 *param_1);
void __fastcall FUN_111d4650(undefined4 *param_1);
void __fastcall FUN_111d46e0(undefined4 *param_1);
void __fastcall FUN_111d4700(undefined4 *param_1);
void __fastcall FUN_111d4720(undefined4 *param_1);
void __fastcall FUN_111d4740(undefined4 *param_1);
void __fastcall FUN_111d4930(undefined4 *param_1);
void __fastcall FUN_111d4970(undefined4 *param_1);
void __fastcall FUN_111d49b0(undefined4 *param_1);
void __fastcall FUN_111d4c70(undefined4 *param_1);
void __fastcall FUN_111d4d80(undefined4 *param_1);
int __stdcall FUN_111d5210(undefined4 param_1);
int __stdcall FUN_111d5240(undefined4 param_1);
int __stdcall FUN_111d5270(undefined4 param_1);
void FUN_111d7620(undefined1 *param_1);
void __fastcall FUN_111d7bc0(int param_1);
void __fastcall FUN_111d9cc0(int *param_1);
void __fastcall FUN_111dbb80(int param_1);
short __stdcall FUN_111dd8b0(undefined4 param_1);
short __stdcall FUN_111df370(undefined4 param_1);
void FUN_111dfcf0(void);
void __fastcall FUN_111dfd30(int param_1);
void __fastcall FUN_111e08c0(int param_1);
undefined4 FUN_111e3f50(undefined4 param_1);
int __fastcall FUN_111e4690(int param_1);
void __fastcall FUN_111e7f20(int param_1);
undefined4 __fastcall FUN_111f17b0(int param_1);
undefined4 FUN_111f1920(int param_1);
void FUN_111f75b0(undefined4 param_1);
void __fastcall FUN_111f7820(undefined4 *param_1);
char * FUN_111fd510(undefined4 param_1);
void FUN_111fd570(void *param_1);
void FUN_111fd590(void *param_1);
void __fastcall FUN_111feb30(undefined4 *param_1);
void __fastcall FUN_111fed10(undefined4 *param_1);
void __fastcall FUN_111ff630(int param_1);
undefined4 FUN_11200570(void);
void __fastcall FUN_112007a0(int param_1);
void __fastcall FUN_11202140(int param_1);
undefined4 FUN_112023b0(char *param_1);
undefined4 FUN_11202440(char *param_1);
void FUN_11205330(void);
int __fastcall FUN_11205490(int param_1);
undefined4 __fastcall FUN_11206ea0(int *param_1);
void __fastcall FUN_1122bd10(int param_1);
char * __fastcall FUN_1122ded0(char *param_1);
void __fastcall FUN_1122e860(int *param_1);
void __fastcall FUN_112313f0(undefined4 *param_1);
void __fastcall FUN_112314f0(undefined4 *param_1);
void __fastcall FUN_11231550(undefined4 *param_1);
undefined4 FUN_11231b20(void);
void __fastcall FUN_11232950(int param_1);
undefined4 FUN_11232ce0(char *param_1);
void __fastcall FUN_112338b0(int *param_1);
void FUN_11234510(void);
void FUN_11234620(void);
undefined4 FUN_11234fd0(char *param_1,int param_2);
void __fastcall FUN_11236060(undefined4 *param_1);
void FUN_11236110(void);
int __fastcall FUN_112365a0(int param_1);
int __fastcall FUN_11236630(int param_1);
int __fastcall FUN_11236650(int param_1);
int __fastcall FUN_11236680(int param_1);
int __fastcall FUN_112366c0(int param_1);
undefined4 FUN_11237be0(char *param_1);
int __fastcall FUN_11237cf0(int param_1);
int __fastcall FUN_11237da0(undefined4 *param_1);
void __fastcall FUN_11238260(int param_1);
void __fastcall FUN_11239d30(int param_1);
void __fastcall FUN_11239db0(int param_1);
void FUN_11240b40(undefined4 *param_1);
void __fastcall FUN_112419e0(int param_1);
void __fastcall FUN_11241ca0(int param_1);
undefined1 __fastcall FUN_11242ad0(int param_1);
undefined1 __fastcall FUN_11242af0(int param_1);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 * __fastcall FUN_11243350(undefined4 *param_1);
void __fastcall FUN_11243480(undefined4 *param_1);
void __fastcall FUN_11243770(int *param_1);
void __fastcall FUN_112437a0(int *param_1);
void FUN_11243860(undefined4 param_1);
undefined4 * __fastcall FUN_11244d80(undefined4 *param_1);
undefined4 FUN_112454d0(int param_1);
undefined2 FUN_112454f0(ushort param_1);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ short FUN_11246be0(undefined4 param_1);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ short FUN_112471a0(undefined4 param_1);
void __stdcall FUN_11247c30(undefined4 param_1);
void __fastcall FUN_112482b0(int param_1);
void FUN_11248330(void);
undefined4 * __fastcall FUN_11249060(undefined4 *param_1);
void FUN_11249a70(void);
undefined1 __stdcall FUN_11249df0(undefined4 param_1,undefined4 param_2);
undefined4 * __fastcall FUN_1124a2d0(undefined4 *param_1);
undefined1 __fastcall FUN_1124ae40(int param_1);
void __fastcall FUN_1124b7f0(int param_1);
uint __stdcall FUN_1124ce80(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 __fastcall FUN_1124d1e0(int param_1);
uint __fastcall FUN_1124d5b0(int param_1);
uint __fastcall FUN_1124d630(int param_1);
undefined4 * __fastcall FUN_1124dee0(undefined4 *param_1);
void __fastcall FUN_1124eb60(undefined4 *param_1);
void __fastcall FUN_1124ecc0(undefined4 *param_1);
void __fastcall FUN_1124ed10(undefined4 *param_1);
void __fastcall FUN_1124ed70(undefined4 *param_1);
void __fastcall FUN_1124f160(undefined4 *param_1);
void FUN_1125033f(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_112519d0(int param_1);
undefined1 * __fastcall FUN_11252830(int param_1);
void __fastcall FUN_11253c70(int param_1);
void __fastcall FUN_11253df0(int param_1);
ulong FUN_11255f20(char *param_1);
ulong __fastcall FUN_112576a0(char *param_1);
undefined4 __fastcall FUN_112578f0(int param_1);
void FUN_11258440(void);
short __fastcall FUN_11259e40(int param_1);
short __fastcall FUN_11259ef0(int param_1);
void __fastcall FUN_1125b8f0(undefined4 *param_1);
void FUN_1125bcb0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1125cee0(undefined4 param_1,undefined4 *param_2,uint param_3);
bool __fastcall FUN_1125cf00(char *param_1);
void __fastcall FUN_1125d9a0(undefined4 *param_1);
void FUN_1125fd30(char *param_1);
void FUN_112607d0(undefined1 param_1);
void __fastcall FUN_11260bd0(int param_1);
void __fastcall FUN_11261f10(undefined4 *param_1);
void __fastcall FUN_11261f90(int param_1);
void __fastcall FUN_11262c80(int param_1);
void __fastcall FUN_11262ca0(undefined8 *param_1);
void __fastcall FUN_11264450(int param_1);
undefined4 FUN_11264a40(char *param_1);
void FUN_11264cd0(char *param_1,char param_2);
void __fastcall FUN_11266870(undefined4 *param_1);
void __stdcall FUN_11269b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
void __stdcall FUN_11269b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
void __stdcall FUN_11269b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_1126bf20(void);
void __fastcall FUN_1126bf60(int *param_1);
void __fastcall FUN_1126cb20(int param_1);
void __stdcall FUN_1126d350(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_1126dd90(undefined4 *param_1);
int FUN_1126e750(uint *param_1,uint *param_2);
int FUN_1126efa0(int param_1);
void __fastcall FUN_11270ae0(undefined4 *param_1);
void __fastcall FUN_11272c50(int param_1);
void FUN_11273960(char *param_1,char *param_2,int param_3);
void FUN_112739b0(uint *param_1,int param_2);
void FUN_112739e0(char *param_1);
void __fastcall FUN_11274170(undefined4 *param_1);
void __fastcall FUN_112742f0(int param_1);
void __stdcall FUN_112747a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __stdcall FUN_11274b30(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void __fastcall FUN_112765b0(undefined4 *param_1);
void __fastcall FUN_11276e20(int param_1);
char __fastcall FUN_11277fc0(int param_1);
char __fastcall FUN_11278b70(int param_1);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 * __fastcall FUN_11279fe0(undefined4 *param_1);
undefined * FUN_1127a220(uint param_1);
undefined1 * FUN_1127c6d0(undefined4 param_1);
void FUN_1127cc30(void);
undefined4 FUN_1127ccf0(int param_1,int param_2);
undefined4 * __fastcall FUN_1127d050(undefined4 *param_1);
void __fastcall FUN_1127dee0(int param_1);
char * FUN_1127e380(int param_1);
void __stdcall FUN_11280320(undefined4 param_1);
undefined4 * __fastcall FUN_11281730(undefined4 *param_1);
void __fastcall FUN_11281970(undefined4 *param_1);
undefined4 __fastcall FUN_11283440(int param_1);
void __fastcall FUN_11286500(int param_1);
undefined4 * __fastcall FUN_1128abd0(undefined4 *param_1);
undefined4 __fastcall FUN_1128e030(int param_1);
undefined4 * __fastcall FUN_1128f310(undefined4 *param_1);
undefined4 __fastcall FUN_112929b0(int param_1);
undefined4 __fastcall FUN_112929f0(int param_1);
void __fastcall FUN_11292a30(int param_1);
void __fastcall FUN_11292a60(int param_1);
undefined4 * __fastcall FUN_11292af0(undefined4 *param_1);
bool __fastcall FUN_11292dc0(int param_1);
int FUN_11293aa0(void);
void FUN_11293e20(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);
void __stdcall FUN_112942e0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_11294820(undefined4 *param_1);
undefined4 * __fastcall FUN_112949f0(undefined4 *param_1);
void FUN_11297630(undefined4 param_1);
void __fastcall FUN_112983c0(int param_1);
undefined4 FUN_11299740(int param_1);
undefined4 FUN_11299c80(uint param_1);
bool FUN_11299d40(void);
undefined4 * __fastcall FUN_1129b080(undefined4 *param_1);
void __fastcall FUN_1129b2a0(int param_1);
undefined4 FUN_1129bb20(char *param_1,undefined4 param_2);
void __fastcall FUN_1129c7e0(undefined4 *param_1);
void FUN_1129d2a0(undefined1 param_1,undefined4 *param_2);
void FUN_1129e050(void *param_1);
void FUN_1129e0d0(int param_1,undefined4 param_2);
undefined4 FUN_1129e4e0(int *param_1,int param_2);
void FUN_1129e510(undefined4 *param_1);
void FUN_1129e530(undefined4 *param_1);
void FUN_1129e790(undefined4 *param_1);
void FUN_1129e8e0(int param_1);
void FUN_1129ee10(undefined4 *param_1);
bool FUN_1129eea0(int *param_1);
void FUN_1129eef0(undefined4 *param_1);
int FUN_112a0060(int *param_1,int *param_2);
int FUN_112a0ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
char * FUN_112a0af0(ushort param_1);
undefined4 FUN_112a0c30(int param_1);
uint FUN_112a1060(undefined4 *param_1);
void FUN_112a1350(int param_1);
void FUN_112a2890(int param_1,undefined4 param_2);
undefined4 FUN_112a28d0(int param_1);
void FUN_112a2b30(int param_1);
undefined4 FUN_112a3190(int param_1,int param_2);
undefined4 FUN_112a31c0(int param_1);
undefined4 FUN_112a3470(int param_1);
void FUN_112a5340(int param_1);
undefined4 FUN_112a7b20(int *param_1);
undefined4 FUN_112a7c30(int param_1);
void FUN_112a7f20(undefined4 *param_1);
void FUN_112a8cc0(void);
undefined4 FUN_112a9120(int param_1,int param_2);
void FUN_112a94d0(int param_1);
void FUN_112a97a0(undefined4 *param_1);
void FUN_112a97e0(undefined4 *param_1);
void FUN_112a9800(undefined4 *param_1);
undefined4 FUN_112a9f10(int param_1);
char * FUN_112aae70(uint param_1);
void FUN_112ab370(undefined4 *param_1);
void * FUN_112ac970(undefined4 param_1,char *param_2);
void FUN_112af4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_112b0270(undefined4 param_1,int param_2,undefined4 param_3);
longlong FUN_112b0310(void);
void FUN_112b08c0(undefined4 *param_1);
void FUN_112b7100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_112b71c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_112b7460(int *param_1,int *param_2);
void FUN_112bb1a0(void);
void FUN_112bdff0(int param_1);
void FUN_112be040(int param_1);
void FUN_112bee50(int *param_1,int param_2);
void FUN_112bee90(int *param_1,int param_2);
uint FUN_112c0400(char *param_1);
undefined4 FUN_112c0480(short *param_1);
undefined4 FUN_112c35a0(int param_1,undefined1 param_2);
undefined4 FUN_112c4a90(char *param_1,int param_2,undefined4 param_3);
undefined4 FUN_112c4c80(undefined1 *param_1,int param_2,undefined4 param_3);
undefined4 FUN_112c4db0(byte *param_1,int param_2);
uint FUN_112c7fa0(int param_1,uint param_2);
void FUN_112c8760(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_112c8b80(int *param_1);
void FUN_112c8c00(undefined4 *param_1);
undefined4 FUN_112c9310(undefined4 param_1,undefined4 param_2);
void FUN_112ca420(undefined4 param_1,undefined1 param_2);
void * FUN_112cc570(char *param_1,undefined4 *param_2);
void FUN_112d12d0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_112d2860(int param_1);
undefined4 * __fastcall FUN_112ece50(undefined4 *param_1);
undefined4 __fastcall FUN_112ed180(undefined4 param_1);
void __fastcall FUN_112ed6d0(int param_1);
void __fastcall FUN_112ee460(int param_1);
void __fastcall FUN_112ee480(int param_1);
void FUN_112eeea0(int param_1);
void FUN_112efba0(int *param_1);
void __stdcall FUN_112effc0(undefined4 param_1,undefined4 param_2);
bool FUN_112f0920(void);
void FUN_112f1710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_112f1740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_112f1770(code *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __stdcall FUN_112f4220(undefined4 param_1,undefined4 param_2);
bool __fastcall FUN_112f4240(int param_1);
void FUN_112f4f20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __stdcall FUN_112f4f70(undefined4 param_1);
void __stdcall FUN_112f4fa0(undefined4 param_1);
void __stdcall FUN_112f4fd0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_112f50c0(uint param_1,uint param_2,uint param_3,uint param_4);
void FUN_112f5390(void *param_1);
int FUN_11309ca0(int param_1,int param_2,undefined4 param_3);
int FUN_1130a830(undefined4 param_1,int param_2);
undefined4 FUN_1130e990(int param_1,int param_2);
void FUN_113119f0(int param_1);
void FUN_11312cc0(int *param_1);
undefined8 FUN_11312ea0(double param_1);
void FUN_1131bf10(undefined4 param_1);
void FUN_1131ce80(int param_1);
int FUN_1131e2b0(int param_1);
undefined4 FUN_1131e870(int param_1,undefined1 *param_2);
void FUN_11322670(undefined4 param_1,int param_2);
short FUN_113244b0(int param_1);
undefined4 FUN_113262d0(int param_1,undefined4 param_2);
undefined4 FUN_1132ad30(int param_1);
void FUN_1132c340(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4);
undefined4 * FUN_11339ce0(undefined4 param_1);
char FUN_1133b7c0(int param_1);
undefined4 FUN_1133d590(char *param_1);
ushort FUN_1133d960(int param_1,int param_2);
undefined4 FUN_1133d9b0(int param_1,char param_2);
void FUN_1133f8f0(int param_1,uint param_2);
void * FUN_11343640(int param_1,size_t param_2,undefined4 param_3);
void FUN_11345e20(int param_1,int param_2);
void FUN_11346220(undefined4 param_1,undefined4 param_2,char *param_3);
int FUN_11346330(undefined4 *param_1,int param_2,int param_3,undefined4 param_4);
void FUN_1134a840(int *param_1,int param_2,int param_3);
void FUN_1134bee0(int *param_1,int param_2,int param_3);
void FUN_1134c120(undefined4 param_1,int param_2);
void FUN_11353dc0(int *param_1);
void FUN_11358b70(undefined4 param_1,undefined4 param_2);
void FUN_11358d40(void);
void FUN_1135a6a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
undefined4 FUN_1135a780(int *param_1,int param_2);
void FUN_1135a7d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1135a820(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
undefined1 FUN_1135b7f0(int param_1,int param_2);
float10 FUN_1135edf0(uint param_1);
void FUN_11363c30(int param_1);
undefined4 FUN_11363d20(int param_1);
int FUN_11363d60(int *param_1);
void FUN_11364b10(int param_1,int param_2,int param_3);
void FUN_113656b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1136a9a0(undefined4 param_1,undefined4 param_2);
void FUN_1136c990(int param_1,int param_2);
undefined4 FUN_1136cf50(int param_1);
undefined1 FUN_1136d2a0(int param_1,int param_2);
int FUN_1136d2c0(int param_1,short param_2);
void FUN_11372760(int *param_1,int param_2,undefined1 param_3);
void FUN_11372830(int *param_1,int param_2,undefined4 param_3);
undefined4 FUN_11372d90(int *param_1);
void FUN_11373210(undefined4 *param_1,undefined4 param_2);
void FUN_1137efc0(int param_1);
void FUN_1137f070(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void FUN_11380c50(int param_1,int param_2);
void FUN_11381bd0(int param_1,int param_2);
undefined4 FUN_1138e820(int param_1);
void FUN_1138fad0(undefined4 param_1,undefined4 param_2,int param_3);
undefined4 FUN_11395a40(undefined4 param_1,undefined4 param_2);
undefined4 FUN_113961e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_11396b90(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_11397c20(int param_1,void *param_2,size_t param_3);
void FUN_11397d20(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1139afd0(int param_1);
int FUN_1139c370(byte *param_1);
byte * FUN_1139d960(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_113a0f60(int *param_1);
void FUN_113a10f0(undefined4 *param_1);
void FUN_113a1d40(int param_1);
void FUN_113a2d10(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void * FUN_113b07a0(undefined4 param_1,int param_2);
undefined4 FUN_113b99b0(undefined4 param_1,undefined4 *param_2);
undefined * FUN_113ba010(uint param_1);
undefined4 FUN_113bcb10(byte *param_1,int param_2,uint *param_3);
void FUN_113bcd30(undefined4 param_1,undefined4 *param_2);
void FUN_113bcdf0(undefined4 param_1,undefined4 *param_2);
void FUN_113bce30(undefined4 param_1,undefined4 *param_2);
void FUN_113bce70(undefined4 param_1,undefined4 *param_2);
void FUN_113be100(undefined4 param_1,undefined4 *param_2);
void FUN_113be140(undefined4 param_1,undefined4 *param_2);
void FUN_113be180(undefined4 param_1,undefined4 *param_2);
undefined4 FUN_113be290(int param_1);
void FUN_113bf660(void *param_1);
void * FUN_113bf690(void);
uint FUN_113c08f0(int param_1,char *param_2,byte *param_3);
void FUN_113c5d60(undefined4 param_1,int param_2,int param_3);
undefined1 FUN_113cfa30(undefined4 *param_1,uint *param_2);
void FUN_113cfb70(undefined1 *param_1,int param_2);
void FUN_113d1d90(char *param_1);
bool FUN_113d2fb0(undefined4 param_1,undefined4 param_2);
uint FUN_113d35c0(undefined4 param_1);
void FUN_113d3650(int *param_1);
bool FUN_113d9fa0(uint param_1);
void FUN_113da1c0(int param_1,undefined1 param_2,undefined4 param_3);
undefined4 FUN_113db910(short param_1);
undefined4 FUN_113dc7a0(int param_1);
undefined4 FUN_113dc7f0(int param_1);
int FUN_113dcf00(int param_1);
undefined4 FUN_113dcfc0(undefined1 param_1);
void FUN_113dd030(int param_1,int param_2);
undefined4 FUN_113dd980(char param_1);
uint FUN_113def90(int param_1);
undefined4 FUN_113e0d50(undefined4 param_1);
int FUN_113e2b00(uint param_1,uint param_2);
int FUN_113e30a0(int *param_1);
void FUN_113e4820(undefined4 *param_1);
ushort FUN_113e5b80(undefined2 *param_1,int param_2);
void FUN_113e5f90(int param_1,undefined4 param_2);
void FUN_113e5fb0(int param_1,undefined4 param_2);
void FUN_113e7aa0(int param_1);
void FUN_113e9960(int *param_1);
void FUN_113e9dd0(undefined4 *param_1);
undefined * FUN_113e9f00(int param_1);
undefined4 FUN_113e9fd0(int param_1);
undefined4 FUN_113ea020(int param_1);
char * FUN_113ea0d0(int param_1);
undefined4 FUN_113ea110(int param_1);
undefined4 FUN_113ea140(int param_1);
undefined4 FUN_113f16e0(int *param_1,int param_2);
undefined4 FUN_113fd670(int param_1,int *param_2,undefined4 *param_3);
undefined4 FUN_113ff120(int *param_1,short param_2);
undefined4 FUN_11407d80(undefined4 param_1,uint param_2,undefined4 param_3);
char * FUN_11408600(undefined4 param_1);
void FUN_11408f30(undefined4 *param_1);
undefined4 FUN_1140ad00(int *param_1);
undefined4 FUN_1140ad60(int *param_1);
undefined4 FUN_1140add0(int *param_1);
undefined * FUN_1140b600(undefined4 param_1);
void FUN_1140c060(void *param_1);
void FUN_1140c7a0(void *param_1);
undefined4 FUN_1140d440(int *param_1);
undefined * FUN_1140d570(undefined4 param_1);
void FUN_1140d5f0(undefined8 *param_1);
void FUN_1140e740(undefined4 *param_1,undefined4 *param_2);
void FUN_114101c0(undefined4 *param_1,undefined4 *param_2);
void FUN_114116a0(undefined4 *param_1,undefined4 *param_2);
uint FUN_114156d0(int *param_1,uint param_2);
undefined4 FUN_11417820(undefined4 *param_1,undefined4 param_2);
int FUN_114194c0(uint param_1,uint param_2);
void FUN_1141a470(void);
void FUN_1141a680(undefined4 *param_1);
undefined4
FUN_1141c450(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7);
undefined4 FUN_1141f3b0(int *param_1,undefined4 param_2);
undefined4 FUN_11420a00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_114233e0(undefined4 *param_1);
void FUN_11423ed0(undefined1 *param_1,int param_2);
void FUN_11423f00(undefined1 *param_1,int param_2);
undefined4 FUN_11425630(int param_1,int param_2);
undefined4 FUN_11427d10(int param_1,size_t param_2);
undefined4 FUN_114294e0(int param_1,undefined8 *param_2);
undefined4 FUN_1142c330(int *param_1);
int FUN_1142f800(undefined4 *param_1,undefined4 param_2,int param_3);
void FUN_11437ac0(int *param_1);
void FUN_11437b00(undefined8 *param_1);
int FUN_11439e00(int param_1,undefined4 param_2,void *param_3,uint param_4,byte param_5,
                undefined1 *param_6);
bool FUN_1143e930(int param_1);
void FUN_1143ea00(int param_1);
undefined4 FUN_1143ea90(void);
void FUN_1143f0b0(int param_1);
void FUN_1143f0f0(int param_1);
void FUN_114402a0(undefined4 *param_1);
void FUN_11442340(undefined4 *param_1,undefined4 *param_2);
void FUN_114470e0(uint *param_1,int param_2);
int FUN_11447120(int param_1,int param_2);
int FUN_11447170(int param_1,uint param_2);
int FUN_11447da0(int *param_1);
undefined4 FUN_1144d660(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_1144db20(int param_1);
undefined4 FUN_11450930(uint param_1,undefined4 param_2);
undefined4 FUN_11452100(int param_1);
void FUN_11452210(void);
undefined1 FUN_114556e0(void);
undefined4 FUN_11456d50(undefined4 param_1);
undefined4 FUN_11456de0(undefined4 param_1);
undefined4 __fastcall FUN_11456f80(int *param_1);
undefined4 FUN_11457440(uint param_1);
undefined4 FUN_114574b0(int param_1);
undefined4 FUN_11457c60(undefined4 param_1);
undefined4 FUN_11457d20(int param_1);
undefined4 FUN_11457ec0(undefined4 param_1);
undefined4 FUN_11457fd0(undefined4 param_1);
undefined4 FUN_11458170(undefined4 param_1);
undefined4 __fastcall FUN_11458880(int param_1);
undefined4 __fastcall FUN_11458940(int param_1);
int __fastcall FUN_11458970(int param_1);
undefined4 __fastcall FUN_11458ad0(int param_1);
void __fastcall FUN_114591a0(undefined4 *param_1);
void __stdcall FUN_114593e0(undefined4 param_1,undefined4 param_2);
bool __fastcall FUN_11459400(int param_1);
void FUN_1145a270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __stdcall FUN_1145a2b0(undefined4 param_1);
void __stdcall FUN_1145a2e0(undefined4 param_1);
void __stdcall FUN_1145a730(undefined4 param_1,undefined4 param_2);
void FUN_1145aba0(undefined4 param_1);
undefined4 FUN_1145abd0(undefined4 param_1);
void __fastcall FUN_1145ac40(int *param_1);
void __fastcall FUN_1145ac80(int *param_1);
void __fastcall FUN_1145acc0(int *param_1);
undefined4 FUN_1145af00(int *param_1,int *param_2);
undefined4 FUN_1145af30(int *param_1,int *param_2);
undefined4 FUN_1145af90(int *param_1);
undefined4 FUN_1145afb0(int *param_1);
int FUN_1145c140(uint param_1);
void FUN_1145c200(void);
char * FUN_1145c250(char *param_1,char *param_2,int param_3);
void FUN_1145dde0(undefined4 *param_1);
void FUN_1145e030(char *param_1,char param_2);
void FUN_1145e270(int param_1);
void FUN_1145ed60(int param_1);
undefined4 FUN_11460550(uint *param_1,uint param_2);
bool FUN_11460600(int *param_1,int param_2,int param_3);
bool FUN_11464ab0(int param_1);
undefined1 FUN_11464b20(int param_1,int *param_2);
undefined4 FUN_11466400(int param_1,uint param_2,uint param_3);
void FUN_1146bd60(int param_1,undefined4 param_2);
void FUN_1146bd90(int param_1,undefined4 param_2);
void FUN_1146bf20(int param_1,undefined4 param_2);
void FUN_1146c180(int param_1,undefined4 param_2);
void FUN_1146c740(int param_1,undefined4 param_2);
void FUN_1146c960(int param_1,uint param_2,uint param_3,char *param_4);
void FUN_11472b30(int param_1);
void FUN_11472b70(int param_1);
void FUN_11472bb0(int param_1);
void FUN_11472f90(int param_1);
void FUN_11473cd0(int param_1);
void FUN_11473d10(int param_1);
void FUN_11473d50(int param_1);
void FUN_11473d90(int param_1);
void FUN_11474440(int *param_1,undefined1 *param_2);
void FUN_1147b2f0(int param_1,void *param_2);
void * FUN_1147b4b0(int param_1,size_t param_2);
void FUN_11480a00(int param_1);
void FUN_11480f20(int param_1,int param_2,undefined8 *param_3);
void FUN_11480f60(int param_1,int param_2);
void FUN_11483100(undefined4 param_1,uint param_2);
void FUN_11489290(int param_1);
void FUN_11489320(int param_1);
void FUN_1148a3b3(void);
undefined4 FUN_1148a3e4(undefined4 *param_1);
void FUN_1148a6cc(void);
void FUN_1148a93d(undefined4 param_1);
void __fastcall FUN_1148ac28(int param_1);
/* Library Function - Single Match _dtol3_getbits Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */ undefined8 __cdeclFUN_1148afb8(void);
void FUN_1148b60c(void);
void FUN_1148c019(void);
void FUN_1148c290(uint param_1);
void FUN_1148c2d0(void);
/* Library Function - Single Match __allshr Library: Visual Studio */ undefined8 __fastcallFUN_1148c320(byte param_1,int param_2);
/* Library Function - Single Match __allshl Library: Visual Studio */ longlong __fastcallFUN_1148c510(byte param_1,int param_2);
/* Library Function - Single Match __aullshr Library: Visual Studio */ ulonglong __fastcallFUN_1148c690(byte param_1,uint param_2);
void FUN_1148c6d1(int param_1);
void FUN_1148c6f2(int param_1);
bool FUN_1148c762(int param_1);
void FUN_1148c783(int param_1,int param_2,uint param_3);
void FUN_1148c7bb(int param_1,int param_2,uint param_3);
bool FUN_1148c85a(int param_1,int param_2,uint param_3);
undefined4 * __fastcall FUN_1148c90a(undefined4 *param_1);
void FUN_1148c928(void);
void FUN_1148c94c(void);
void FUN_11504692(void);
// Reference entry 110f8eb0; body size 53 bytes.
#line 1 "ENTRY_110f8eb0"

undefined4 * __fastcall FUN_110f8eb0(undefined4 *param_1)

{
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf8;
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0x10000);
  param_1[3] = (undefined4)(0);
  *(undefined2 *)((int)param_1 + 0x11) = 0xffff;
  param_1[5] = (undefined4)(99999);
  *(undefined2 *)(param_1 + 6) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 110f9660; body size 35 bytes.
#line 1 "ENTRY_110f9660"

void __fastcall FUN_110f9660(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      (**(code **)*puVar1)(3);
      return;
    }
    thunk_FUN_1148b596(puVar1 + -1,4);
  }
  return;
}


// Reference entry 110fc270; body size 42 bytes.
#line 1 "ENTRY_110fc270"

void FUN_110fc270(void)

{
  if (DAT_122e8a1c != '\0') {
    free(PTR_DAT_1211df30);
    PTR_DAT_1211df30 = (int *)(&DAT_1186d2ee);
    DAT_122e8a1c = (int)('\0');
  }
  return;
}


// Reference entry 110ff4e0; body size 49 bytes.
#line 1 "ENTRY_110ff4e0"

void __fastcall FUN_110ff4e0(int param_1)

{
  if ((*(char *)(param_1 + 0x1a34) == '\0') && (*(char *)(param_1 + 0x1a35) == '\0')) {
    thunk_FUN_1107e1f0(param_1);
  }
  *(undefined1 *)(param_1 + 0x1a34) = 1;
  *(undefined4 *)(param_1 + 0x1a24) = 6;
  return;
}


// Reference entry 111002e0; body size 22 bytes.
#line 1 "ENTRY_111002e0"

int __fastcall FUN_111002e0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x1a24));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 3) && (iVar1 != 4)) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 11100300; body size 21 bytes.
#line 1 "ENTRY_11100300"

int __fastcall FUN_11100300(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x1a24));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (iVar1 != 10)) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 11100320; body size 36 bytes.
#line 1 "ENTRY_11100320"

void __fastcall FUN_11100320(int param_1)

{
  *(undefined2 *)(param_1 + 0x28) = 0x101;
  SetEvent(*(HANDLE *)(param_1 + 0x2c));
  thunk_FUN_112a82d0(param_1 + 4);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  return;
}


// Reference entry 11101900; body size 46 bytes.
#line 1 "ENTRY_11101900"

undefined4 __fastcall FUN_11101900(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x13dc) != '\0') {
    thunk_FUN_110facf0(1);
    *(undefined4 *)(param_1 + 0x1a24) = 6;
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11101940; body size 37 bytes.
#line 1 "ENTRY_11101940"

uint __fastcall FUN_11101940(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x10))());
  uVar2 = (uint)((**(code **)(*(int *)param_1[1] + 4))(param_1));
  (**(code **)*param_1)(1);
  return (uint)(uVar1 | uVar2);
}


// Reference entry 11101c70; body size 50 bytes.
#line 1 "ENTRY_11101c70"

void FUN_11101c70(char *param_1)

{
  if (DAT_122e8a1c != '\0') {
    free(PTR_DAT_1211df30);
  }
  PTR_DAT_1211df30 = (int *)(_strdup(param_1));
  DAT_122e8a1c = (int)('\x01');
  return;
}


// Reference entry 11102250; body size 26 bytes.
#line 1 "ENTRY_11102250"

bool FUN_11102250(void)

{
  short sVar1;
  short sVar2;
  
  sVar1 = (short)(thunk_FUN_110ce370());
  sVar2 = (short)(thunk_FUN_11272de0());
  return (bool)(sVar1 == sVar2);
}


// Reference entry 11103e70; body size 45 bytes.
#line 1 "ENTRY_11103e70"

void __thiscall Recovered_Bulk::FUN_11103e70(int param_2)
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


// Reference entry 111045e0; body size 43 bytes.
#line 1 "ENTRY_111045e0"

void __fastcall FUN_111045e0(int *param_1)

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


// Reference entry 11106f40; body size 39 bytes.
#line 1 "ENTRY_11106f40"

void __fastcall FUN_11106f40(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x28));
  if (iVar1 != 0) {
    thunk_FUN_1125d9d0();
    thunk_FUN_1148a50e(iVar1,4);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


// Reference entry 11108ca0; body size 57 bytes.
#line 1 "ENTRY_11108ca0"

void __stdcall FUN_11108ca0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_11108ca0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x20);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 11108cf0; body size 49 bytes.
#line 1 "ENTRY_11108cf0"

int __thiscall Recovered_Bulk::FUN_11108cf0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11108d30(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 11109990; body size 48 bytes.
#line 1 "ENTRY_11109990"

undefined4 * __fastcall FUN_11109990(undefined4 *param_1)

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


// Reference entry 1110b060; body size 56 bytes.
#line 1 "ENTRY_1110b060"

undefined4 * __thiscall Recovered_Bulk::FUN_1110b060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(param_2,"Array");
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjArray);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1110d700; body size 63 bytes.
#line 1 "ENTRY_1110d700"

void FUN_1110d700(undefined1 *param_1)

{
  thunk_FUN_111a6a30(&DAT_119c9c20,*param_1);
  thunk_FUN_111a6a30("minute",param_1[1]);
  thunk_FUN_111a6a30("second",param_1[2]);
  return;
}


// Reference entry 1110ef60; body size 32 bytes.
#line 1 "ENTRY_1110ef60"

void __thiscall Recovered_Bulk::FUN_1110ef60(undefined4 param_2)
{
  int param_1 = (int )this;
  FUN_10070892(param_2);
  if (*(char *)(param_1 + 0x34) == '\0') {
    thunk_FUN_1111c700();
  }
  return;
}


// Reference entry 1110f120; body size 45 bytes.
#line 1 "ENTRY_1110f120"

void __thiscall Recovered_Bulk::FUN_1110f120(int param_2)
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


// Reference entry 1110f4a0; body size 30 bytes.
#line 1 "ENTRY_1110f4a0"

void __fastcall FUN_1110f4a0(int param_1)

{
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(param_1 + 0x68);
  return;
}


// Reference entry 1110fc20; body size 60 bytes.
#line 1 "ENTRY_1110fc20"

void __stdcall FUN_1110fc20(int param_1,int param_2)

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


// Reference entry 1110ff50; body size 43 bytes.
#line 1 "ENTRY_1110ff50"

void __fastcall FUN_1110ff50(int *param_1)

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


// Reference entry 11110b90; body size 59 bytes.
#line 1 "ENTRY_11110b90"

void __thiscall Recovered_Bulk::FUN_11110b90(uint *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (*(char *)(param_1 + 0x170) != '\0') {
    thunk_FUN_11119580();
    return;
  }
  thunk_FUN_111191d0();
  if (param_2 != (uint *)0x0) {
    uVar1 = (uint)(thunk_FUN_111a7100("OnAlarmsChanged",0,0));
    *param_2 = (uint)(*param_2 | uVar1);
  }
  return;
}


// Reference entry 11111570; body size 50 bytes.
#line 1 "ENTRY_11111570"

undefined4 FUN_11111570(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_110828b0());
  iVar2 = (int)((*(code *)**(undefined4 **)(iVar2 + 0x1c))());
  if (iVar2 != 0) {
    cVar1 = (char)(thunk_FUN_110d3ac0());
    if (cVar1 != '\0') {
      iVar2 = (int)(thunk_FUN_110cb560());
      if (iVar2 != 0) {
        return (undefined4)(*(undefined4 *)(iVar2 + 0x2c));
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 111115e0; body size 36 bytes.
#line 1 "ENTRY_111115e0"

undefined4 __thiscall Recovered_Bulk::FUN_111115e0(uint param_2)
{
  int param_1 = (int )this;
  if ((uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 2) <= param_2) {
    return (undefined4)(0);
  }
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 * 4));
}


// Reference entry 11111e40; body size 21 bytes.
#line 1 "ENTRY_11111e40"

void __fastcall FUN_11111e40(int param_1)

{
  if (*(char *)(param_1 + 0x14d) == -1) {
    thunk_FUN_11119cb0();
    thunk_FUN_1115c410();
    return;
  }
  return;
}


// Reference entry 11112590; body size 36 bytes.
#line 1 "ENTRY_11112590"

void __thiscall Recovered_Bulk::FUN_11112590(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0xc7e) = 1;
  *(undefined4 *)(param_1 + 0xc8c) = param_4;
  thunk_FUN_11115d10(param_2,param_3);
  return;
}


// Reference entry 111135f0; body size 21 bytes.
#line 1 "ENTRY_111135f0"

void __fastcall FUN_111135f0(int param_1)

{
  if (*(char *)(param_1 + 0x14c) == -1) {
    thunk_FUN_11119cb0();
    thunk_FUN_1115c4e0();
    return;
  }
  return;
}


// Reference entry 11113bb0; body size 48 bytes.
#line 1 "ENTRY_11113bb0"

undefined4 __thiscall Recovered_Bulk::FUN_11113bb0(undefined4 *param_2,undefined1 *param_3)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x140));
  *param_3 = (undefined1)(*(undefined1 *)(param_1 + 0x144));
  if (*(int *)(param_1 + 0x140) == -1) {
    thunk_FUN_1111cf00();
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11113c60; body size 59 bytes.
#line 1 "ENTRY_11113c60"

uint __thiscall Recovered_Bulk::FUN_11113c60(undefined4 param_2,char param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 local_10 [16];
  
  if ((*(int *)(param_1 + 0x168) != 0 || *(int *)(param_1 + 0x16c) != 0) && (param_3 == '\0')) {
    uVar1 = (uint)(thunk_FUN_11111ca0(param_2,local_10,0));
    return (uint)(uVar1);
  }
  uVar1 = (uint)(thunk_FUN_11119940());
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 11115a00; body size 47 bytes.
#line 1 "ENTRY_11115a00"

int __thiscall Recovered_Bulk::FUN_11115a00(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x8c));
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x90)) {
      return (int)(0);
    }
    if (*(int *)(*piVar1 + 0x1c) == param_2) break;
    piVar1 = (int *)(piVar1 + 1);
  }
  return (int)(*piVar1);
}


// Reference entry 1111a090; body size 40 bytes.
#line 1 "ENTRY_1111a090"

void __thiscall Recovered_Bulk::FUN_1111a090(undefined4 param_2)
{
  int param_1 = (int )this;
  FUN_10065348(param_2);
  if (*(int *)(param_1 + 0x24) == 0) {
    thunk_FUN_110828b0(param_1);
    thunk_FUN_11095e00();
  }
  return;
}


// Reference entry 1111b0a0; body size 42 bytes.
#line 1 "ENTRY_1111b0a0"

int __fastcall FUN_1111b0a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0x81);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("CurrentTimeServer");
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 1111c6a0; body size 37 bytes.
#line 1 "ENTRY_1111c6a0"

void FUN_1111c6a0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110828b0());
  if ((iVar1 != 0) && (DAT_122e8a24 != 0)) {
    *(undefined1 *)(DAT_122e8a24 + 0x4d) = 0;
    thunk_FUN_11096350(DAT_122e8a24);
  }
  return;
}


// Reference entry 1111d1f0; body size 39 bytes.
#line 1 "ENTRY_1111d1f0"

int * __thiscall Recovered_Bulk::FUN_1111d1f0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_2);
    *param_2 = (int)(0);
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
    *param_1 = (int)(iVar1);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return (int *)(param_1);
}


// Reference entry 1111ecc0; body size 39 bytes.
#line 1 "ENTRY_1111ecc0"

undefined4 * __fastcall FUN_1111ecc0(undefined4 *param_1)

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


// Reference entry 1111f410; body size 38 bytes.
#line 1 "ENTRY_1111f410"

void __fastcall FUN_1111f410(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1111f4b0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x28);
  }
  return;
}


// Reference entry 1111fc80; body size 27 bytes.
#line 1 "ENTRY_1111fc80"

int __stdcall FUN_1111fc80(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_1111e210(local_8,param_1));
  return (int)(*piVar1 + 0x10);
}


// Reference entry 11122380; body size 43 bytes.
#line 1 "ENTRY_11122380"

int __fastcall FUN_11122380(int param_1)

{
  if (*(HANDLE *)(param_1 + 0xc084) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc084));
    *(undefined4 *)(param_1 + 0xc084) = 0xffffffff;
    return (int)(param_1 + 0xc088);
  }
  return (int)(0);
}


// Reference entry 11122950; body size 57 bytes.
#line 1 "ENTRY_11122950"

void __thiscall Recovered_Bulk::FUN_11122950(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x14));
  if (puVar1 != *(undefined4 **)(param_1 + 0x18)) {
    *puVar1 = (undefined4)(param_2);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    thunk_FUN_11123c70();
    return;
  }
  thunk_FUN_1111de10(puVar1,&param_2);
  thunk_FUN_11123c70();
  return;
}


// Reference entry 111242a0; body size 45 bytes.
#line 1 "ENTRY_111242a0"

void __stdcall FUN_111242a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = (undefined4)(0xffffffff);
  local_4 = (undefined4)(0xffffffff);
  FUN_11124310(param_1,param_2,param_3,&local_8);
  return;
}


// Reference entry 11125cd0; body size 34 bytes.
#line 1 "ENTRY_11125cd0"

undefined4 __thiscall Recovered_Bulk::FUN_11125cd0(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (param_3 != 0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(*(int *)(param_1 + 0xc068) + 4))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 11125d90; body size 41 bytes.
#line 1 "ENTRY_11125d90"

void FUN_11125d90(undefined4 param_1,undefined4 param_2)

{
 try {
  uint *puVar1;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101b9120(param_1,0xffffffff,param_2,0,&stack0x0000000c));
  __stdio_common_vsscanf(*puVar1 | 1,puVar1[1]);
  return;

 } catch (...) { }
}


// Reference entry 11127ac0; body size 59 bytes.
#line 1 "ENTRY_11127ac0"

void __thiscall Recovered_Bulk::FUN_11127ac0(int param_2)
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


// Reference entry 11127b10; body size 59 bytes.
#line 1 "ENTRY_11127b10"

void __thiscall Recovered_Bulk::FUN_11127b10(int param_2)
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


// Reference entry 11127bc0; body size 45 bytes.
#line 1 "ENTRY_11127bc0"

void __thiscall Recovered_Bulk::FUN_11127bc0(int param_2)
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


// Reference entry 11127c00; body size 45 bytes.
#line 1 "ENTRY_11127c00"

void __thiscall Recovered_Bulk::FUN_11127c00(int param_2)
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


// Reference entry 11127c40; body size 45 bytes.
#line 1 "ENTRY_11127c40"

void __thiscall Recovered_Bulk::FUN_11127c40(int param_2)
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


// Reference entry 111280b0; body size 60 bytes.
#line 1 "ENTRY_111280b0"

void __stdcall FUN_111280b0(int param_1,int param_2)

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


// Reference entry 11128100; body size 43 bytes.
#line 1 "ENTRY_11128100"

void __fastcall FUN_11128100(int *param_1)

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


// Reference entry 11128ff0; body size 46 bytes.
#line 1 "ENTRY_11128ff0"

uint FUN_11128ff0(int param_1,int *param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    uVar1 = (undefined4)((**(code **)(*param_2 + 0x28))());
    uVar2 = (uint)(thunk_FUN_11177120(param_1,uVar1));
    return (uint)(uVar2);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1112bb60; body size 45 bytes.
#line 1 "ENTRY_1112bb60"

void __thiscall Recovered_Bulk::FUN_1112bb60(int param_2)
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


// Reference entry 1112bdb0; body size 43 bytes.
#line 1 "ENTRY_1112bdb0"

void __fastcall FUN_1112bdb0(int *param_1)

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


// Reference entry 1112bfd0; body size 61 bytes.
#line 1 "ENTRY_1112bfd0"

void __fastcall FUN_1112bfd0(int param_1)

{
  if (*(char *)(param_1 + 0x36) == '\0') {
    *(undefined1 *)(param_1 + 0x36) = 1;
    (**(code **)(**(int **)(param_1 + 0x24) + 0x28))();
    (**(code **)(**(int **)(param_1 + 0x28) + 0x28))();
    thunk_FUN_1125a250(0,*(undefined4 *)(param_1 + 0x24));
    thunk_FUN_112611c0();
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
    return;
  }
  return;
}


// Reference entry 1112c280; body size 25 bytes.
#line 1 "ENTRY_1112c280"

undefined4 __stdcall FUN_1112c280(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = (undefined4)(FUN_10065348());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 1112cd10; body size 28 bytes.
#line 1 "ENTRY_1112cd10"

int __fastcall FUN_1112cd10(int param_1)

{
  thunk_FUN_1127a020();
  *(undefined4 *)(param_1 + 0x508) = 0;
  return (int)(param_1);
}


// Reference entry 1112ea40; body size 41 bytes.
#line 1 "ENTRY_1112ea40"

uint __fastcall FUN_1112ea40(int param_1)

{
  uint in_EAX;
  
  if ((*(uint *)(param_1 + 4) < 3) && (in_EAX = thunk_FUN_1127ca70(), (char)in_EAX == '\0')) {
    return (uint)((uint)(*(int *)(param_1 + 4) != 0));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 11130320; body size 30 bytes.
#line 1 "ENTRY_11130320"

undefined1 __fastcall FUN_11130320(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1127c6b0(1));
  if (0 < iVar1) {
    thunk_FUN_1127af20(iVar1);
    return (undefined1)(*param_1);
  }
  return (undefined1)(0);
}


// Reference entry 111307b0; body size 38 bytes.
#line 1 "ENTRY_111307b0"

undefined4 __thiscall Recovered_Bulk::FUN_111307b0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("HTSatChanMapSet",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 111307e0; body size 38 bytes.
#line 1 "ENTRY_111307e0"

undefined4 __thiscall Recovered_Bulk::FUN_111307e0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("SatRoomUUID",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 11132b40; body size 59 bytes.
#line 1 "ENTRY_11132b40"

void __stdcall FUN_11132b40(int param_1,int param_2)

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


// Reference entry 111342b0; body size 38 bytes.
#line 1 "ENTRY_111342b0"

bool FUN_111342b0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(thunk_FUN_110cead0());
  uVar1 = (undefined4)(thunk_FUN_110cead0(uVar1));
  iVar2 = (int)(thunk_FUN_1111d190(uVar1));
  return (bool)(iVar2 < 0);
}


// Reference entry 11135050; body size 46 bytes.
#line 1 "ENTRY_11135050"

undefined1 FUN_11135050(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_110d3ac0());
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x51e) == '\0')) &&
     (*(char *)(param_1 + 0x551) != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11135390; body size 38 bytes.
#line 1 "ENTRY_11135390"

undefined4 __thiscall Recovered_Bulk::FUN_11135390(int param_2)
{
  int param_1 = (int )this;
  if (((*(char *)(param_1 + 0x20) != '\0') || (*(char *)(param_2 + 0x520) != '\0')) &&
     (*(int *)(param_2 + 0x53c) != 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11135420; body size 48 bytes.
#line 1 "ENTRY_11135420"

undefined1 FUN_11135420(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_110d3ac0());
  if (cVar1 == '\0') {
    return (undefined1)(0);
  }
  if ((*(char *)(param_1 + 0x51e) != '\0') && (cVar1 = FUN_1005a7b3(), cVar1 == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 11135460; body size 48 bytes.
#line 1 "ENTRY_11135460"

undefined1 FUN_11135460(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x520) == '\0') {
    return (undefined1)(0);
  }
  cVar1 = (char)(thunk_FUN_110d3140());
  if ((cVar1 != '\0') && (cVar1 = thunk_FUN_110d55a0(), cVar1 == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 111354c0; body size 19 bytes.
#line 1 "ENTRY_111354c0"

undefined4 __thiscall Recovered_Bulk::FUN_111354c0(int param_2)
{
  int param_1 = (int )this;
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_2 + 0x538) >> 8)) << 8 | (uint)(*(int *)(param_2 + 0x538) == *(int *)(param_1 + 0x20))));
}


// Reference entry 11135a30; body size 46 bytes.
#line 1 "ENTRY_11135a30"

undefined1 FUN_11135a30(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_110d3ac0());
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x51e) == '\0')) &&
     (*(char *)(param_1 + 0x520) == '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11135a70; body size 48 bytes.
#line 1 "ENTRY_11135a70"

undefined1 FUN_11135a70(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x520) != '\0') {
    cVar1 = (char)(thunk_FUN_110d5780());
    if (cVar1 != '\0') {
      cVar1 = (char)(FUN_100487ed());
      if (cVar1 != '\0') {
        return (undefined1)(1);
      }
    }
  }
  return (undefined1)(0);
}


// Reference entry 11135ab0; body size 32 bytes.
#line 1 "ENTRY_11135ab0"

undefined4 FUN_11135ab0(int param_1)

{
  if ((*(char *)(param_1 + 0x520) != '\0') && (*(int *)(param_1 + 0x53c) == 2)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11135ae0; body size 19 bytes.
#line 1 "ENTRY_11135ae0"

undefined4 __thiscall Recovered_Bulk::FUN_11135ae0(int param_2)
{
  int param_1 = (int )this;
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_2 + 0x528) >> 8)) << 8 | (uint)(*(int *)(param_2 + 0x528) == *(int *)(param_1 + 0x20))));
}


// Reference entry 11136170; body size 61 bytes.
#line 1 "ENTRY_11136170"

void __fastcall FUN_11136170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemPropertiesManager);
  thunk_FUN_112a7f20(param_1 + 0xc);
  thunk_FUN_110721b0(param_1 + 9,*(undefined4 *)(param_1[9] + 4));
  thunk_FUN_1148a50e(param_1[9],0x14);
  thunk_FUN_10bfb3d0();
  return;
}


// Reference entry 11137120; body size 37 bytes.
#line 1 "ENTRY_11137120"

int __fastcall FUN_11137120(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("RDMValue");
  thunk_FUN_112505b0(iVar1);
  return (int)(param_1);
}


// Reference entry 11137410; body size 21 bytes.
#line 1 "ENTRY_11137410"

undefined4 __thiscall Recovered_Bulk::FUN_11137410(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_101ba530(param_2);
  return (undefined4)(param_1);
}


// Reference entry 11138180; body size 36 bytes.
#line 1 "ENTRY_11138180"

void __fastcall FUN_11138180(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x60));
  thunk_FUN_10e460f0(*puVar1,*(undefined4 *)(param_1 + 100),puVar1);
  *(undefined4 *)(param_1 + 100) = *puVar1;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}


// Reference entry 11138260; body size 33 bytes.
#line 1 "ENTRY_11138260"

void __fastcall FUN_11138260(int param_1)

{
  if (((*(char *)(param_1 + 0x70) == '\0') && (*(int *)(param_1 + 0x6c) == 0)) &&
     (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2 != 0)) {
    *(undefined4 *)(param_1 + 0x6c) = 1;
  }
  return;
}


// Reference entry 111382a0; body size 32 bytes.
#line 1 "ENTRY_111382a0"

int __thiscall Recovered_Bulk::FUN_111382a0(int param_2)
{
  int param_1 = (int )this;
  if ((param_2 != 0) && (param_2 == 1)) {
    return (int)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2);
  }
  return (int)(*(int *)(param_1 + 0x6c));
}


// Reference entry 11138590; body size 50 bytes.
#line 1 "ENTRY_11138590"

undefined4 __thiscall Recovered_Bulk::FUN_11138590(uint param_2,int param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if ((param_3 == 0) || (param_3 != 1)) {
    uVar1 = (uint)(*(uint *)(param_1 + 0x6c));
  }
  else {
    uVar1 = (uint)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2);
  }
  if (param_2 < uVar1) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x60) + param_2 * 4));
  }
  return (undefined4)(0);
}


// Reference entry 111389e0; body size 52 bytes.
#line 1 "ENTRY_111389e0"

undefined4 __fastcall FUN_111389e0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(0);
  uVar3 = (uint)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2);
  if (uVar3 != 0) {
    do {
      cVar1 = (char)(thunk_FUN_110d5760());
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 11139450; body size 19 bytes.
#line 1 "ENTRY_11139450"

void FUN_11139450(void)

{
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  return;
}


// Reference entry 11139470; body size 49 bytes.
#line 1 "ENTRY_11139470"

void __fastcall FUN_11139470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringTableParserCB);
  if ((FILE *)param_1[0x92] != (FILE *)0x0) {
    fclose((FILE *)param_1[0x92]);
  }
  if ((void *)param_1[0x91] != (void *)0x0) {
    free((void *)param_1[0x91]);
  }
  return;
}


// Reference entry 11139850; body size 45 bytes.
#line 1 "ENTRY_11139850"

undefined4 __thiscall Recovered_Bulk::FUN_11139850(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x47c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1113a820; body size 30 bytes.
#line 1 "ENTRY_1113a820"

void __stdcall FUN_1113a820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  thunk_FUN_1113af60(param_1,param_2,param_3,param_4,0,param_5);
  return;
}


// Reference entry 1113b500; body size 28 bytes.
#line 1 "ENTRY_1113b500"

void __stdcall FUN_1113b500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_1113af60(param_1,param_2,param_3,param_4,1,0);
  return;
}


// Reference entry 1113b580; body size 39 bytes.
#line 1 "ENTRY_1113b580"

void FUN_1113b580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_11269bc0(param_1,0,0,0,param_2,param_3,param_4,&DAT_1188db18,0,0);
  return;
}


// Reference entry 1113be80; body size 37 bytes.
#line 1 "ENTRY_1113be80"

undefined4 __thiscall Recovered_Bulk::FUN_1113be80(int param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if ((param_3 != 0) && (param_2 != 0)) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc06c) + 4))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 1113cf20; body size 16 bytes.
#line 1 "ENTRY_1113cf20"

undefined4 __fastcall FUN_1113cf20(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(thunk_FUN_111a66c0());
  return (undefined4)(uVar1);
}


// Reference entry 1113da80; body size 27 bytes.
#line 1 "ENTRY_1113da80"

int __fastcall FUN_1113da80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  piVar2 = (int *)(piVar1);
  if (*piVar1 != 0) {
    piVar2 = (int *)((int *)0x0);
  }
  if ((piVar2 == (int *)0x0) || (iVar3 = piVar2[0x18], iVar3 == 0)) {
    iVar3 = (int)(piVar1[5]);
  }
  return (int)(iVar3);
}


// Reference entry 1113dab0; body size 27 bytes.
#line 1 "ENTRY_1113dab0"

int __fastcall FUN_1113dab0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  piVar2 = (int *)(piVar1);
  if (*piVar1 != 0) {
    piVar2 = (int *)((int *)0x0);
  }
  if ((piVar2 == (int *)0x0) || (iVar3 = piVar2[0x15], iVar3 == 0)) {
    iVar3 = (int)(piVar1[5]);
  }
  return (int)(iVar3);
}


// Reference entry 1113de60; body size 50 bytes.
#line 1 "ENTRY_1113de60"

uint __fastcall FUN_1113de60(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_4;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  uStack_4 = (undefined4)(param_1 & 0xffffff);
  piVar2 = (int *)(piVar1);
  if (*piVar1 != 0) {
    piVar2 = (int *)((int *)0x0);
  }
  if ((piVar2 == (int *)0x0) || (iVar3 = piVar2[0x1e], iVar3 == 0)) {
    iVar3 = (int)(piVar1[0x10]);
  }
  thunk_FUN_11246370(iVar3,(int)&uStack_4 + 3);
  return (uint)(uStack_4 >> 0x18);
}


// Reference entry 1113df70; body size 27 bytes.
#line 1 "ENTRY_1113df70"

int __fastcall FUN_1113df70(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  piVar2 = (int *)(piVar1);
  if (*piVar1 != 0) {
    piVar2 = (int *)((int *)0x0);
  }
  if ((piVar2 == (int *)0x0) || (iVar3 = piVar2[0x1a], iVar3 == 0)) {
    iVar3 = (int)(piVar1[0xc]);
  }
  return (int)(iVar3);
}


// Reference entry 1113dfa0; body size 27 bytes.
#line 1 "ENTRY_1113dfa0"

int __fastcall FUN_1113dfa0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  piVar2 = (int *)(piVar1);
  if (*piVar1 != 0) {
    piVar2 = (int *)((int *)0x0);
  }
  if ((piVar2 == (int *)0x0) || (iVar3 = piVar2[0x1b], iVar3 == 0)) {
    iVar3 = (int)(piVar1[0xd]);
  }
  return (int)(iVar3);
}


// Reference entry 1113dfd0; body size 27 bytes.
#line 1 "ENTRY_1113dfd0"

int __fastcall FUN_1113dfd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  piVar2 = (int *)(piVar1);
  if (*piVar1 != 0) {
    piVar2 = (int *)((int *)0x0);
  }
  if ((piVar2 == (int *)0x0) || (iVar3 = piVar2[0x1d], iVar3 == 0)) {
    iVar3 = (int)(piVar1[0xf]);
  }
  return (int)(iVar3);
}


// Reference entry 1113e4f0; body size 55 bytes.
#line 1 "ENTRY_1113e4f0"

char * FUN_1113e4f0(char *param_1,uint param_2)

{
  uint uVar1;
  
  do {
    param_1 = (char *)(param_1 + -1);
    uVar1 = (uint)(param_2 / 10);
    *param_1 = (char)((char)param_2 + (char)uVar1 * -10 + '0');
    param_2 = (uint)(uVar1);
  } while (uVar1 != 0);
  return (char *)(param_1);
}


// Reference entry 1113f0e0; body size 30 bytes.
#line 1 "ENTRY_1113f0e0"

void FUN_1113f0e0(undefined4 param_1)

{
  FUN_10070892(param_1);
  thunk_FUN_11140420(param_1);
  return;
}


// Reference entry 1113f110; body size 59 bytes.
#line 1 "ENTRY_1113f110"

void __thiscall Recovered_Bulk::FUN_1113f110(int param_2)
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


// Reference entry 1113f9e0; body size 36 bytes.
#line 1 "ENTRY_1113f9e0"

undefined4 FUN_1113f9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_1113f590(param_1));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_111a5f10(param_2,param_3));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 11140c20; body size 38 bytes.
#line 1 "ENTRY_11140c20"

void __thiscall Recovered_Bulk::FUN_11140c20(undefined4 param_2)
{
  int param_1 = (int )this;
  FUN_10065348(param_2);
  if (*(int *)(param_1 + 0x18) == 0) {
    thunk_FUN_111401c0(param_2);
  }
  return;
}


// Reference entry 11147f30; body size 34 bytes.
#line 1 "ENTRY_11147f30"

void __thiscall Recovered_Bulk::FUN_11147f30(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x34) = param_2;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1 + 8,param_2));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 11147f60; body size 34 bytes.
#line 1 "ENTRY_11147f60"

void __thiscall Recovered_Bulk::FUN_11147f60(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1 + 8,param_2));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 11149270; body size 59 bytes.
#line 1 "ENTRY_11149270"

void __thiscall Recovered_Bulk::FUN_11149270(int param_2)
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


// Reference entry 111492c0; body size 37 bytes.
#line 1 "ENTRY_111492c0"

void __thiscall Recovered_Bulk::FUN_111492c0(undefined4 param_2,char *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(strncmp(param_3,"S:",2));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x420) = 0;
  }
  return;
}


// Reference entry 1114a6f0; body size 58 bytes.
#line 1 "ENTRY_1114a6f0"

void __thiscall Recovered_Bulk::FUN_1114a6f0(uint param_2)
{
  int *param_1 = (int *)this;
  if ((uint)((param_1[2] - *param_1) / 0xc08) < param_2) {
    if (0x154725 < param_2) {
                    
      thunk_FUN_111491e0();
    }
    thunk_FUN_11148fb0(param_2);
  }
  return;
}


// Reference entry 1114a740; body size 17 bytes.
#line 1 "ENTRY_1114a740"

void __fastcall FUN_1114a740(int param_1)

{
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  thunk_FUN_113d3650(param_1 + 0x10);
  return;
}


// Reference entry 1114b950; body size 58 bytes.
#line 1 "ENTRY_1114b950"

void __fastcall FUN_1114b950(int param_1)

{
  if (*(char *)(param_1 + 0x420) != '\0') {
    if (*(int *)(param_1 + 0x834) == 3) {
      thunk_FUN_1114d110(2);
      return;
    }
    thunk_FUN_1114d110(4);
    *(undefined1 *)(*(int *)(param_1 + 0x868) + 0x4cc) = 1;
  }
  return;
}


// Reference entry 1114d980; body size 25 bytes.
#line 1 "ENTRY_1114d980"

void __fastcall FUN_1114d980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjLastFMCP);
  thunk_FUN_11231440();
  thunk_FUN_11167180();
  return;
}


// Reference entry 1114da10; body size 51 bytes.
#line 1 "ENTRY_1114da10"

undefined4 * __thiscall Recovered_Bulk::FUN_1114da10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjLastFMCP);
  thunk_FUN_11231440();
  thunk_FUN_11167180();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x144);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1114f4f0; body size 52 bytes.
#line 1 "ENTRY_1114f4f0"

void __fastcall FUN_1114f4f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjCPPerformActionOp);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_SwfObjCPPerformActionOp);
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  thunk_FUN_111a6f10();
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  thunk_FUN_111a4f00();
  return;
}


// Reference entry 11150140; body size 27 bytes.
#line 1 "ENTRY_11150140"

void __fastcall FUN_11150140(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((**(code **)(**(int **)(param_1 + 0xc) + 0x44))
                    (*(undefined4 *)(param_1 + 0x10),param_1 + 0x14));
  *(undefined2 *)(param_1 + 0x416) = uVar1;
  return;
}


// Reference entry 11150470; body size 43 bytes.
#line 1 "ENTRY_11150470"

undefined1 __thiscall Recovered_Bulk::FUN_11150470(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    cVar1 = (char)((**(code **)(*param_2 + 0x6c))(param_3,param_1));
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return (undefined1)(1);
}


// Reference entry 11151f00; body size 29 bytes.
#line 1 "ENTRY_11151f00"

void __fastcall FUN_11151f00(undefined4 param_1)

{
  thunk_FUN_1113f0e0(param_1,0);
  thunk_FUN_1109f7f0(param_1);
  thunk_FUN_1109de60();
  return;
}


// Reference entry 11152240; body size 34 bytes.
#line 1 "ENTRY_11152240"

void __fastcall FUN_11152240(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1123fcd0(param_1 + -0x10));
  if ((iVar1 == 0) && ((undefined4 *)(param_1 + -0x14) != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)(param_1 + -0x14))(1);
  }
  return;
}


// Reference entry 11152270; body size 34 bytes.
#line 1 "ENTRY_11152270"

void __fastcall FUN_11152270(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1123fcd0(param_1 + -0x10));
  if ((iVar1 == 0) && ((undefined4 *)(param_1 + -0x14) != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)(param_1 + -0x14))(1);
  }
  return;
}


// Reference entry 111522a0; body size 34 bytes.
#line 1 "ENTRY_111522a0"

void __fastcall FUN_111522a0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1123fcd0(param_1 + -0x10));
  if ((iVar1 == 0) && ((undefined4 *)(param_1 + -0x14) != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)(param_1 + -0x14))(1);
  }
  return;
}


// Reference entry 11158070; body size 27 bytes.
#line 1 "ENTRY_11158070"

void __thiscall Recovered_Bulk::FUN_11158070(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156160((int)param_2);
  *(short *)(param_1 + 0x58) = param_2;
  return;
}


// Reference entry 111580a0; body size 30 bytes.
#line 1 "ENTRY_111580a0"

void __thiscall Recovered_Bulk::FUN_111580a0(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111564a0((int)param_2);
  *(short *)(param_1 + 400) = param_2;
  return;
}


// Reference entry 111580d0; body size 30 bytes.
#line 1 "ENTRY_111580d0"

void __thiscall Recovered_Bulk::FUN_111580d0(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156630((int)param_2);
  *(short *)(param_1 + 0x168) = param_2;
  return;
}


// Reference entry 11158120; body size 26 bytes.
#line 1 "ENTRY_11158120"

void __thiscall Recovered_Bulk::FUN_11158120(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111567c0(param_2);
  *(ushort *)(param_1 + 0x6e) = (ushort)param_2 & 0xff;
  return;
}


// Reference entry 11158140; body size 30 bytes.
#line 1 "ENTRY_11158140"

void __thiscall Recovered_Bulk::FUN_11158140(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111569a0((int)param_2);
  *(short *)(param_1 + 0x118) = param_2;
  return;
}


// Reference entry 11158170; body size 27 bytes.
#line 1 "ENTRY_11158170"

void __thiscall Recovered_Bulk::FUN_11158170(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156b30(param_2);
  *(ushort *)(param_1 + 0x140) = (ushort)param_2;
  return;
}


// Reference entry 111581a0; body size 30 bytes.
#line 1 "ENTRY_111581a0"

void __thiscall Recovered_Bulk::FUN_111581a0(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156e50((int)param_2);
  *(short *)(param_1 + 0x17c) = param_2;
  return;
}


// Reference entry 11158240; body size 27 bytes.
#line 1 "ENTRY_11158240"

void __thiscall Recovered_Bulk::FUN_11158240(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156fe0(param_2);
  *(ushort *)(param_1 + 200) = (ushort)param_2;
  return;
}


// Reference entry 11158270; body size 30 bytes.
#line 1 "ENTRY_11158270"

void __thiscall Recovered_Bulk::FUN_11158270(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156310((int)param_2);
  *(short *)(param_1 + 0x8c) = param_2;
  return;
}


// Reference entry 111582a0; body size 27 bytes.
#line 1 "ENTRY_111582a0"

void __thiscall Recovered_Bulk::FUN_111582a0(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11156cc0(param_2);
  *(ushort *)(param_1 + 0xb4) = (ushort)param_2;
  return;
}


// Reference entry 111582d0; body size 30 bytes.
#line 1 "ENTRY_111582d0"

void __thiscall Recovered_Bulk::FUN_111582d0(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157af0((int)param_2);
  *(short *)(param_1 + 0xa0) = param_2;
  return;
}


// Reference entry 11158300; body size 27 bytes.
#line 1 "ENTRY_11158300"

void __thiscall Recovered_Bulk::FUN_11158300(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157170(param_2);
  *(ushort *)(param_1 + 300) = (ushort)param_2;
  return;
}


// Reference entry 11158330; body size 30 bytes.
#line 1 "ENTRY_11158330"

void __thiscall Recovered_Bulk::FUN_11158330(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157300((int)param_2);
  *(short *)(param_1 + 0x104) = param_2;
  return;
}


// Reference entry 11158360; body size 30 bytes.
#line 1 "ENTRY_11158360"

void __thiscall Recovered_Bulk::FUN_11158360(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157490((int)param_2);
  *(short *)(param_1 + 0x154) = param_2;
  return;
}


// Reference entry 11158390; body size 30 bytes.
#line 1 "ENTRY_11158390"

void __thiscall Recovered_Bulk::FUN_11158390(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157620((int)param_2);
  *(short *)(param_1 + 0xf0) = param_2;
  return;
}


// Reference entry 111583c0; body size 30 bytes.
#line 1 "ENTRY_111583c0"

void __thiscall Recovered_Bulk::FUN_111583c0(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111577b0((ushort)param_2);
  *(ushort *)(param_1 + 0xdc) = (ushort)param_2;
  return;
}


// Reference entry 11158420; body size 27 bytes.
#line 1 "ENTRY_11158420"

void __thiscall Recovered_Bulk::FUN_11158420(short param_2)
{
  int param_1 = (int )this;
  thunk_FUN_11157940((int)param_2);
  *(short *)(param_1 + 0x68) = param_2;
  return;
}


// Reference entry 11159cc0; body size 33 bytes.
#line 1 "ENTRY_11159cc0"

void __thiscall Recovered_Bulk::FUN_11159cc0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x40) == 0) {
    thunk_FUN_1113f0e0(param_1,0);
  }
  FUN_10070892(param_2);
  return;
}


// Reference entry 11159df0; body size 51 bytes.
#line 1 "ENTRY_11159df0"

void __fastcall FUN_11159df0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x34));
  if (piVar1 != *(int **)(param_1 + 0x38)) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = (int *)(piVar1 + 1);
    } while (piVar1 != *(int **)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    return;
  }
  *(int **)(param_1 + 0x38) = piVar1;
  return;
}


// Reference entry 1115c530; body size 38 bytes.
#line 1 "ENTRY_1115c530"

undefined1 * FUN_1115c530(char param_1)

{
  if (param_1 != '\0') {
    if (param_1 == '\x01') {
      return (undefined1 *)(&DAT_119cd1ac);
    }
    if (param_1 == '\x02') {
      return (undefined1 *)(&DAT_119cd1b0);
    }
  }
  return (undefined1 *)(&DAT_119cd1a8);
}


// Reference entry 1115c810; body size 60 bytes.
#line 1 "ENTRY_1115c810"

undefined4 * __fastcall FUN_1115c810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfWorkerThread);
  param_1[9] = (undefined4)(0);
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  thunk_FUN_112a9cf0(param_1 + 7);
  thunk_FUN_112a9cf0(param_1 + 0x15);
  thunk_FUN_112aa310(param_1 + 0xb);
  return (undefined4 *)(param_1);
}


// Reference entry 1115ebe0; body size 45 bytes.
#line 1 "ENTRY_1115ebe0"

void __thiscall Recovered_Bulk::FUN_1115ebe0(int param_2)
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


// Reference entry 1115ed20; body size 19 bytes.
#line 1 "ENTRY_1115ed20"

void __fastcall FUN_1115ed20(undefined4 param_1)

{
  thunk_FUN_1115ed60();
  thunk_FUN_11095e00(param_1);
  return;
}


// Reference entry 1115ee10; body size 60 bytes.
#line 1 "ENTRY_1115ee10"

void __stdcall FUN_1115ee10(int param_1,int param_2)

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


// Reference entry 1115f330; body size 28 bytes.
#line 1 "ENTRY_1115f330"

bool FUN_1115f330(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1));
  if (iVar1 != 0) {
    return (bool)(*(int *)(iVar1 + 0x44) == 1);
  }
  return (bool)(false);
}


// Reference entry 1115f360; body size 28 bytes.
#line 1 "ENTRY_1115f360"

bool FUN_1115f360(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1));
  if (iVar1 != 0) {
    return (bool)(*(int *)(iVar1 + 0x40) == 1);
  }
  return (bool)(false);
}


// Reference entry 1115f390; body size 36 bytes.
#line 1 "ENTRY_1115f390"

bool FUN_1115f390(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3c) != -1)) {
    return (bool)(*(int *)(iVar1 + 0x3c) != 0);
  }
  return (bool)(false);
}


// Reference entry 1115ff80; body size 28 bytes.
#line 1 "ENTRY_1115ff80"

bool FUN_1115ff80(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1));
  if (iVar1 != 0) {
    return (bool)(*(int *)(iVar1 + 0x44) != -1);
  }
  return (bool)(false);
}


// Reference entry 1115ffd0; body size 28 bytes.
#line 1 "ENTRY_1115ffd0"

bool FUN_1115ffd0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11160050(param_1));
  if (iVar1 != 0) {
    return (bool)(*(int *)(iVar1 + 0x40) != -1);
  }
  return (bool)(false);
}


// Reference entry 111611f0; body size 49 bytes.
#line 1 "ENTRY_111611f0"

undefined4 __thiscall Recovered_Bulk::FUN_111611f0(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x18) != 0) {
    if (param_2 != *(int *)(param_1 + 0x38)) {
      if (*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x38)) {
        thunk_FUN_11160980(param_2);
      }
      *(int *)(param_1 + 0x38) = param_2;
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 111619e0; body size 50 bytes.
#line 1 "ENTRY_111619e0"

undefined4 __thiscall Recovered_Bulk::FUN_111619e0(byte param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = (uint)((uint)param_2);
    if (uVar1 != *(uint *)(param_1 + 0x70)) {
      if (*(uint *)(param_1 + 0x3c) == *(uint *)(param_1 + 0x70)) {
        thunk_FUN_11160b70(uVar1);
      }
      *(uint *)(param_1 + 0x70) = uVar1;
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11161dd0; body size 19 bytes.
#line 1 "ENTRY_11161dd0"

void __fastcall FUN_11161dd0(undefined4 param_1)

{
  thunk_FUN_1115ed60();
  thunk_FUN_11095e00(param_1);
  return;
}


// Reference entry 11162290; body size 33 bytes.
#line 1 "ENTRY_11162290"

void __thiscall Recovered_Bulk::FUN_11162290(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x30) == 0) {
    thunk_FUN_1113f0e0(param_1,0);
  }
  FUN_10070892(param_2);
  return;
}


// Reference entry 11163e50; body size 48 bytes.
#line 1 "ENTRY_11163e50"

void __thiscall Recovered_Bulk::FUN_11163e50(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x2e0) < 5) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x10 + *(int *)(param_1 + 0x2e0) * 0x90));
    for (iVar1 = (int)(0x24); iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(*param_2);
      param_2 = (undefined4 *)(param_2 + 1);
      puVar2 = (undefined4 *)(puVar2 + 1);
    }
    *(int *)(param_1 + 0x2e0) = *(int *)(param_1 + 0x2e0) + 1;
  }
  return;
}


// Reference entry 111644c0; body size 37 bytes.
#line 1 "ENTRY_111644c0"

undefined4 __thiscall Recovered_Bulk::FUN_111644c0(int param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if ((param_3 == 0) && (param_2 == 0)) {
    return (undefined4)(1);
  }
                    
                    
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc070) + 4))());
  return (undefined4)(uVar1);
}


// Reference entry 11164710; body size 31 bytes.
#line 1 "ENTRY_11164710"

undefined4 * __fastcall FUN_11164710(undefined4 *param_1)

{
  thunk_FUN_111a4bc0(0,"SwfObjIndexListener");
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjIndexListener);
  return (undefined4 *)(param_1);
}


// Reference entry 111662d0; body size 54 bytes.
#line 1 "ENTRY_111662d0"

undefined4 __fastcall FUN_111662d0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x14)) {
  default:
    return (undefined4)(6);
  case 1:
    return (undefined4)(0);
  case 2:
    return (undefined4)(4);
  case 3:
    return (undefined4)(1);
  case 4:
    return (undefined4)(5);
  case 5:
    return (undefined4)(3);
  case 6:
    return (undefined4)(2);
  }
}


// Reference entry 111663d0; body size 57 bytes.
#line 1 "ENTRY_111663d0"

undefined4 __thiscall Recovered_Bulk::FUN_111663d0(undefined4 param_2,short *param_3)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  if ((*param_3 == 0) || (*param_3 == 0x3ea)) {
    thunk_FUN_11128910();
    puVar1 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x28));
    }
    thunk_FUN_11128570(puVar1);
  }
  return (undefined4)(1);
}


// Reference entry 11167050; body size 52 bytes.
#line 1 "ENTRY_11167050"

undefined4 * __thiscall Recovered_Bulk::FUN_11167050(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1114ef60(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjWebSvcCP);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  *(undefined1 *)(param_1 + 10) = 1;
  return (undefined4 *)(param_1);
}


// Reference entry 11167580; body size 45 bytes.
#line 1 "ENTRY_11167580"

void __thiscall Recovered_Bulk::FUN_11167580(int param_2)
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


// Reference entry 11167760; body size 52 bytes.
#line 1 "ENTRY_11167760"

void __thiscall Recovered_Bulk::FUN_11167760(undefined4 param_2,byte param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(99);
  if (param_3 == 0) {
    uVar1 = (undefined4)(0x40);
  }
  thunk_FUN_1106a8d0((uint)param_3 * 0x40 + param_1 + 0x670,param_2,uVar1);
  return;
}


// Reference entry 11167970; body size 42 bytes.
#line 1 "ENTRY_11167970"

int * __fastcall FUN_11167970(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x98))());
  iVar1 = (int)(*piVar2);
  uVar3 = (undefined4)((**(code **)(*param_1 + 0xe0))());
  (**(code **)(iVar1 + 0xdc))(uVar3);
  return (int *)(piVar2);
}


// Reference entry 11169430; body size 21 bytes.
#line 1 "ENTRY_11169430"

undefined4 __fastcall FUN_11169430(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x41c) == (int *)0x0) {
    return (undefined4)(0);
  }
                    
                    
  uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x41c) + 0xc4))());
  return (undefined4)(uVar1);
}


// Reference entry 11169670; body size 24 bytes.
#line 1 "ENTRY_11169670"

void __fastcall FUN_11169670(int param_1)

{
  int iVar1;
  
  if ((0 < *(int *)(param_1 + 0x24)) &&
     (iVar1 = *(int *)(param_1 + 0x24) + -1, *(int *)(param_1 + 0x24) = iVar1, iVar1 == 0)) {
    thunk_FUN_1112a730();
    return;
  }
  return;
}


// Reference entry 11169c60; body size 40 bytes.
#line 1 "ENTRY_11169c60"

int __thiscall Recovered_Bulk::FUN_11169c60(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_11169ca0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 1116a8e0; body size 39 bytes.
#line 1 "ENTRY_1116a8e0"

undefined4 * __fastcall FUN_1116a8e0(undefined4 *param_1)

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


// Reference entry 1116b4a0; body size 50 bytes.
#line 1 "ENTRY_1116b4a0"

void __fastcall FUN_1116b4a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_ZPConnRec);
  free((void *)param_1[1]);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  return;
}


// Reference entry 1116b5c0; body size 27 bytes.
#line 1 "ENTRY_1116b5c0"

int __stdcall FUN_1116b5c0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_11169f40(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 1116c930; body size 19 bytes.
#line 1 "ENTRY_1116c930"

void __stdcall FUN_1116c930(undefined4 param_1)

{
  thunk_FUN_1116e480(0,param_1,0x3e9);
  return;
}


// Reference entry 1116d580; body size 51 bytes.
#line 1 "ENTRY_1116d580"

void __thiscall Recovered_Bulk::FUN_1116d580(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x1c) + 8))());
      goto LAB_1116d5a2;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0x20));
LAB_1116d5a2:
  if (iVar2 == param_2) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


// Reference entry 1116ea70; body size 38 bytes.
#line 1 "ENTRY_1116ea70"

undefined4 __thiscall Recovered_Bulk::FUN_1116ea70(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("SortOrder",0));
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 1116fe20; body size 39 bytes.
#line 1 "ENTRY_1116fe20"

undefined4 * __fastcall FUN_1116fe20(undefined4 *param_1)

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


// Reference entry 111704b0; body size 40 bytes.
#line 1 "ENTRY_111704b0"

int __thiscall Recovered_Bulk::FUN_111704b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_111704f0(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 111711d0; body size 55 bytes.
#line 1 "ENTRY_111711d0"

void __thiscall Recovered_Bulk::FUN_111711d0(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (undefined4)(thunk_FUN_101c3fc0(param_3));
  iVar2 = (int)(thunk_FUN_111704f0(local_8,param_3,uVar1));
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 11171c40; body size 39 bytes.
#line 1 "ENTRY_11171c40"

undefined4 * __fastcall FUN_11171c40(undefined4 *param_1)

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


// Reference entry 11172750; body size 34 bytes.
#line 1 "ENTRY_11172750"

void __fastcall FUN_11172750(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    thunk_FUN_11172590();
  }
  return;
}


// Reference entry 11172e30; body size 35 bytes.
#line 1 "ENTRY_11172e30"

undefined4 __thiscall Recovered_Bulk::FUN_11172e30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11172590();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 11173390; body size 36 bytes.
#line 1 "ENTRY_11173390"

void __stdcall FUN_11173390(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    thunk_FUN_11172590();
  }
  return;
}


// Reference entry 11174050; body size 45 bytes.
#line 1 "ENTRY_11174050"

void __thiscall Recovered_Bulk::FUN_11174050(int param_2)
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


// Reference entry 11174520; body size 59 bytes.
#line 1 "ENTRY_11174520"

void __stdcall FUN_11174520(int param_1,int param_2)

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


// Reference entry 11175630; body size 53 bytes.
#line 1 "ENTRY_11175630"

void FUN_11175630(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0());
  iVar2 = (int)(thunk_FUN_113b9ec0(uVar1,&DAT_1187b728));
  if (iVar2 == 0) {
    return;
  }
  thunk_FUN_111a66c0(param_1,param_2);
  return;
}


// Reference entry 11175740; body size 19 bytes.
#line 1 "ENTRY_11175740"

void FUN_11175740(TIMERPROC param_1,UINT param_2)

{
  SetTimer((HWND)0x0,0,param_2,param_1);
  return;
}


// Reference entry 11175cc0; body size 38 bytes.
#line 1 "ENTRY_11175cc0"

void __fastcall FUN_11175cc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTrackMetaDataCacheCB);
  if (param_1[6] != 0) {
    *(int *)(param_1[2] + 8) = (param_1[0x32] * 4 - *(int *)(param_1[2] + 0xc)) + param_1[6];
  }
  thunk_FUN_11202570();
  return;
}


// Reference entry 11175fc0; body size 22 bytes.
#line 1 "ENTRY_11175fc0"

void __stdcall FUN_11175fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11175fe0(param_1,param_2,0,param_3);
  return;
}


// Reference entry 111767c0; body size 38 bytes.
#line 1 "ENTRY_111767c0"

undefined4 __thiscall Recovered_Bulk::FUN_111767c0(uint param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 <= param_2) && (param_2 < param_1[1] + uVar1)) {
    return (undefined4)(*(undefined4 *)(param_1[3] + (param_2 - uVar1) * 4));
  }
  return (undefined4)(0);
}


// Reference entry 11179720; body size 33 bytes.
#line 1 "ENTRY_11179720"

void __thiscall Recovered_Bulk::FUN_11179720(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_11179a70(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 11179a20; body size 57 bytes.
#line 1 "ENTRY_11179a20"

void __stdcall FUN_11179a20(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_11179a20(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 11179ac0; body size 60 bytes.
#line 1 "ENTRY_11179ac0"

int __thiscall Recovered_Bulk::FUN_11179ac0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11179c30(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_111a0940(local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 11179b10; body size 60 bytes.
#line 1 "ENTRY_11179b10"

int __thiscall Recovered_Bulk::FUN_11179b10(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11179ca0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_111a0940(local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 11179b60; body size 60 bytes.
#line 1 "ENTRY_11179b60"

int __thiscall Recovered_Bulk::FUN_11179b60(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11179d10(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_111a0940(local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 11179bb0; body size 49 bytes.
#line 1 "ENTRY_11179bb0"

int __thiscall Recovered_Bulk::FUN_11179bb0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11179d80(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 11179bf0; body size 49 bytes.
#line 1 "ENTRY_11179bf0"

int __thiscall Recovered_Bulk::FUN_11179bf0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11179de0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 1117e0a0; body size 48 bytes.
#line 1 "ENTRY_1117e0a0"

undefined4 * __fastcall FUN_1117e0a0(undefined4 *param_1)

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


// Reference entry 1117e0e0; body size 48 bytes.
#line 1 "ENTRY_1117e0e0"

undefined4 * __fastcall FUN_1117e0e0(undefined4 *param_1)

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


// Reference entry 1117e120; body size 48 bytes.
#line 1 "ENTRY_1117e120"

undefined4 * __fastcall FUN_1117e120(undefined4 *param_1)

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


// Reference entry 1117e160; body size 48 bytes.
#line 1 "ENTRY_1117e160"

undefined4 * __fastcall FUN_1117e160(undefined4 *param_1)

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


// Reference entry 1117e1a0; body size 48 bytes.
#line 1 "ENTRY_1117e1a0"

undefined4 * __fastcall FUN_1117e1a0(undefined4 *param_1)

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


// Reference entry 1117fbc0; body size 28 bytes.
#line 1 "ENTRY_1117fbc0"

void __fastcall FUN_1117fbc0(int *param_1)

{
  thunk_FUN_11179a70(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 11180020; body size 28 bytes.
#line 1 "ENTRY_11180020"

void __fastcall FUN_11180020(int *param_1)

{
  thunk_FUN_11179a70(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 11187ac0; body size 54 bytes.
#line 1 "ENTRY_11187ac0"

void __fastcall FUN_11187ac0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 8) + -4));
  puVar2 = (undefined4 *)(operator_new(0xc));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (undefined4)(0);
    *(undefined4 **)(iVar1 + 0x14) = puVar2;
    *puVar2 = (undefined4)(0);
    return;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  uRam00000000 = (int)(0);
  return;
}


// Reference entry 111888f0; body size 42 bytes.
#line 1 "ENTRY_111888f0"

void __fastcall FUN_111888f0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110c2c60());
  if (iVar1 != 0) {
    thunk_FUN_1118ec30(*(undefined4 *)(param_1 + 0x1c),-(uint)(param_1 != 0) & param_1 + 8U);
  }
  return;
}


// Reference entry 11189230; body size 33 bytes.
#line 1 "ENTRY_11189230"

void __fastcall FUN_11189230(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_11179a70(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 111898b0; body size 60 bytes.
#line 1 "ENTRY_111898b0"

void __stdcall FUN_111898b0(int param_1,int param_2)

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


// Reference entry 11189900; body size 60 bytes.
#line 1 "ENTRY_11189900"

void __stdcall FUN_11189900(int param_1,int param_2)

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


// Reference entry 1118c3e0; body size 25 bytes.
#line 1 "ENTRY_1118c3e0"

undefined4 __thiscall Recovered_Bulk::FUN_1118c3e0(uint param_2)
{
  int param_1 = (int )this;
  if ((*(char *)(param_1 + 0x68) != '\0') && (param_2 <= *(uint *)(param_1 + 0x44))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1118d1f0; body size 44 bytes.
#line 1 "ENTRY_1118d1f0"

void __fastcall FUN_1118d1f0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110c2c60());
  if (iVar1 != 0) {
    thunk_FUN_1118ee50(param_1 + 8,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,param_1 + 0x24);
  }
  return;
}


// Reference entry 1118d4c0; body size 33 bytes.
#line 1 "ENTRY_1118d4c0"

void __thiscall Recovered_Bulk::FUN_1118d4c0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_1118d4f0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 1118d8f0; body size 48 bytes.
#line 1 "ENTRY_1118d8f0"

undefined4 * __fastcall FUN_1118d8f0(undefined4 *param_1)

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


// Reference entry 1118dce0; body size 28 bytes.
#line 1 "ENTRY_1118dce0"

void __fastcall FUN_1118dce0(int *param_1)

{
  thunk_FUN_1118d4f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 1118dd60; body size 28 bytes.
#line 1 "ENTRY_1118dd60"

void __fastcall FUN_1118dd60(int *param_1)

{
  thunk_FUN_1118d4f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x24);
  return;
}


// Reference entry 1118ecb0; body size 33 bytes.
#line 1 "ENTRY_1118ecb0"

void __fastcall FUN_1118ecb0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_1118d4f0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int *)(iVar1 + 8) = iVar1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 1118f4d0; body size 57 bytes.
#line 1 "ENTRY_1118f4d0"

undefined4 __thiscall Recovered_Bulk::FUN_1118f4d0(void *param_2,uint param_3)
{
  int param_1 = (int )this;
  size_t sVar1;
  
  if ((param_3 == 0) && (param_2 == (void *)0x0)) {
    return (undefined4)(1);
  }
  if ((*(FILE **)(param_1 + 0xc078) != (FILE *)0x0) &&
     (sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0xc078)), param_3 <= sVar1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11191dc0; body size 19 bytes.
#line 1 "ENTRY_11191dc0"

void FUN_11191dc0(void)

{
  thunk_FUN_111fed00();
  thunk_FUN_1114f320();
  return;
}


// Reference entry 11191ec0; body size 42 bytes.
#line 1 "ENTRY_11191ec0"

undefined4 __thiscall Recovered_Bulk::FUN_11191ec0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_111fed00();
  thunk_FUN_1114f320();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11192d20; body size 18 bytes.
#line 1 "ENTRY_11192d20"

bool __stdcall FUN_11192d20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11192d60(param_1));
  return (bool)(iVar1 != -1);
}


// Reference entry 11193490; body size 45 bytes.
#line 1 "ENTRY_11193490"

void __thiscall Recovered_Bulk::FUN_11193490(int param_2)
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


// Reference entry 11193c40; body size 27 bytes.
#line 1 "ENTRY_11193c40"

void FUN_11193c40(void)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a7100("onRatingsChanged",0,0));
  thunk_FUN_1106b260(uVar1);
  return;
}


// Reference entry 11194190; body size 54 bytes.
#line 1 "ENTRY_11194190"

undefined4 * __thiscall Recovered_Bulk::FUN_11194190(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTrackMetaDataObjCB);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 111941f0; body size 45 bytes.
#line 1 "ENTRY_111941f0"

void __thiscall Recovered_Bulk::FUN_111941f0(int param_2)
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


// Reference entry 11195470; body size 52 bytes.
#line 1 "ENTRY_11195470"

void __fastcall FUN_11195470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RRestoreAVTStateAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RRestoreAVTStateAIOOp);
  param_1[0xd] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  param_1[10] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 1119ace0; body size 63 bytes.
#line 1 "ENTRY_1119ace0"

undefined4 __thiscall Recovered_Bulk::FUN_1119ace0(undefined4 param_2,short *param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x34) = 1;
  if (*param_3 != 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x24));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return (undefined4)(1);
}


// Reference entry 1119bdf0; body size 38 bytes.
#line 1 "ENTRY_1119bdf0"

void __thiscall Recovered_Bulk::FUN_1119bdf0(int param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (param_2 != 0) {
    thunk_FUN_1119ad30(param_2);
  }
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 4))(param_1);
  }
  return;
}


// Reference entry 1119c0c0; body size 30 bytes.
#line 1 "ENTRY_1119c0c0"

void __thiscall Recovered_Bulk::FUN_1119c0c0(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
{
  int param_1 = (int )this;
  thunk_FUN_1118b7b0(*(undefined4 *)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}


// Reference entry 1119c190; body size 50 bytes.
#line 1 "ENTRY_1119c190"

void __thiscall Recovered_Bulk::FUN_1119c190(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
{
  int param_1 = (int )this;
  thunk_FUN_111879d0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}


// Reference entry 1119cfc0; body size 36 bytes.
#line 1 "ENTRY_1119cfc0"

undefined4 FUN_1119cfc0(int param_1)

{
  if ((((param_1 != 0xff) && (param_1 != 0)) && (param_1 != 1)) &&
     ((param_1 != 2 && (param_1 != 8)))) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 111a00f0; body size 45 bytes.
#line 1 "ENTRY_111a00f0"

void __thiscall Recovered_Bulk::FUN_111a00f0(int param_2)
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


// Reference entry 111a0360; body size 42 bytes.
#line 1 "ENTRY_111a0360"

void __fastcall FUN_111a0360(int param_1)

{
  if (*(char *)(param_1 + 0x1c) == '\0') {
    thunk_FUN_1107e1f0(param_1);
    thunk_FUN_1107e550(param_1);
    thunk_FUN_1107e200(param_1);
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return;
}


// Reference entry 111a03a0; body size 47 bytes.
#line 1 "ENTRY_111a03a0"

void __fastcall FUN_111a03a0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1c) != '\0')) {
    thunk_FUN_11095e00(iVar1);
    thunk_FUN_11096350(iVar1);
    thunk_FUN_11095e10(iVar1);
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 111a03e0; body size 42 bytes.
#line 1 "ENTRY_111a03e0"

void __fastcall FUN_111a03e0(int param_1)

{
  if (*(char *)(param_1 + 0x1c) != '\0') {
    thunk_FUN_11095e00(param_1);
    thunk_FUN_11096350(param_1);
    thunk_FUN_11095e10(param_1);
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// Reference entry 111a05e0; body size 49 bytes.
#line 1 "ENTRY_111a05e0"

void __thiscall Recovered_Bulk::FUN_111a05e0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  piVar2 = (int *)((int *)(param_1 + 4));
  if (iVar1 != 0) {
    while (iVar1 != param_2) {
      piVar2 = (int *)((int *)(iVar1 + 4));
      iVar1 = (int)(*piVar2);
      if (iVar1 == 0) {
        return;
      }
    }
    *piVar2 = (int)(*(int *)(iVar1 + 4));
    *(undefined4 *)(param_2 + 4) = 0;
  }
  return;
}


// Reference entry 111a0620; body size 24 bytes.
#line 1 "ENTRY_111a0620"

void __fastcall FUN_111a0620(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  while (piVar1 != (int *)0x0) {
    iVar2 = (int)(*piVar1);
    piVar1 = (int *)((int *)piVar1[1]);
    (**(code **)(iVar2 + 4))();
  }
  return;
}


// Reference entry 111a2cb0; body size 34 bytes.
#line 1 "ENTRY_111a2cb0"

int __fastcall FUN_111a2cb0(int *param_1)

{
  int iVar1;
  
  if ((*param_1 == 6) && ((int *)param_1[2] != (int *)0x0)) {
    iVar1 = (int)((**(code **)(*(int *)param_1[2] + 0x20))());
    if (iVar1 == 8) {
      return (int)(param_1[2]);
    }
  }
  return (int)(0);
}


// Reference entry 111a32a0; body size 62 bytes.
#line 1 "ENTRY_111a32a0"

char * __fastcall FUN_111a32a0(undefined4 *param_1)

{
  char *pcVar1;
  
  switch(*param_1) {
  default:
    return (char *)("");
  case 1:
    return (char *)("null");
  case 2:
    pcVar1 = (char *)("");
    if ((char *)param_1[2] != (char *)0x0) {
      pcVar1 = (char *)((char *)param_1[2]);
    }
    break;
  case 3:
    return (char *)((char *)param_1[2]);
  case 5:
    pcVar1 = (char *)("true");
    if (param_1[2] == 0) {
      pcVar1 = (char *)("false");
    }
    return (char *)(pcVar1);
  }
  return (char *)(pcVar1);
}


// Reference entry 111a3d30; body size 56 bytes.
#line 1 "ENTRY_111a3d30"

int FUN_111a3d30(void)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)((float10)thunk_FUN_111a3ca0());
  iVar1 = (int)(_isnan((double)fVar2));
  if (iVar1 != 0) {
    return (int)(0);
  }
  return (int)((int)fVar2);
}


// Reference entry 111a4b00; body size 48 bytes.
#line 1 "ENTRY_111a4b00"

undefined4 * __fastcall FUN_111a4b00(undefined4 *param_1)

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


// Reference entry 111a5a00; body size 25 bytes.
#line 1 "ENTRY_111a5a00"

void FUN_111a5a00(void)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a32a0());
  thunk_FUN_111a42a0(uVar1);
  return;
}


// Reference entry 111a62a0; body size 34 bytes.
#line 1 "ENTRY_111a62a0"

bool __thiscall Recovered_Bulk::FUN_111a62a0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
  }
  iVar1 = (int)(thunk_FUN_113b9ec0(param_2,puVar2));
  return (bool)(iVar1 == 0);
}


// Reference entry 111a6a00; body size 28 bytes.
#line 1 "ENTRY_111a6a00"

undefined4 __stdcall FUN_111a6a00(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_111a4170(param_1);
  thunk_FUN_111a45e0(param_2);
  return (undefined4)(0);
}


// Reference entry 111a6f10; body size 54 bytes.
#line 1 "ENTRY_111a6f10"

void FUN_111a6f10(void)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_111a7300(DAT_12126b84 );

  return;

 } catch (...) { }
}


// Reference entry 111a72b0; body size 27 bytes.
#line 1 "ENTRY_111a72b0"

int __thiscall Recovered_Bulk::FUN_111a72b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    *param_2 = (int)(*piVar1);
    return (int)(piVar1[1]);
  }
  return (int)(0);
}


// Reference entry 111a72e0; body size 25 bytes.
#line 1 "ENTRY_111a72e0"

undefined4 FUN_111a72e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(*piVar1);
    return (undefined4)(piVar1[1]);
  }
  return (undefined4)(0);
}


// Reference entry 111a7590; body size 47 bytes.
#line 1 "ENTRY_111a7590"

undefined4 * FUN_111a7590(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x14));
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_111a4bc0(param_1,"Object");
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwfObjObject);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 111a7630; body size 35 bytes.
#line 1 "ENTRY_111a7630"

void FUN_111a7630(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = (int)(thunk_FUN_1123fcd0(param_1 + 1));
    if (iVar1 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  return;
}


// Reference entry 111a8780; body size 63 bytes.
#line 1 "ENTRY_111a8780"

void __thiscall Recovered_Bulk::FUN_111a8780(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  _Dst = (void *)((void *)thunk_FUN_111a8930(param_2));
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  thunk_FUN_111a86c0(_Dst,iVar1 - iVar2 >> 2,param_2);
  return;
}


// Reference entry 111a92e0; body size 30 bytes.
#line 1 "ENTRY_111a92e0"

undefined1 __fastcall FUN_111a92e0(int param_1)

{
  char cVar1;
  
  if ((uint)(*(int *)(*(int *)(param_1 + 4) + 0x18) - *(int *)(*(int *)(param_1 + 4) + 0x14) >> 2)
      <= *(uint *)(param_1 + 0xc)) {
    cVar1 = (char)(thunk_FUN_111a6260());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 111ab110; body size 46 bytes.
#line 1 "ENTRY_111ab110"

void __thiscall Recovered_Bulk::FUN_111ab110(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 <= (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14) >> 2)) {
    return;
  }
  if (param_2 < 0x40000000) {
    thunk_FUN_111a8780();
    return;
  }
                    
  thunk_FUN_111a8920();
}


// Reference entry 111abf70; body size 29 bytes.
#line 1 "ENTRY_111abf70"

void FUN_111abf70(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  thunk_FUN_111af700(param_1);
                    
  exit(1);
}


// Reference entry 111ac070; body size 34 bytes.
#line 1 "ENTRY_111ac070"

void FUN_111ac070(undefined4 param_1,undefined4 param_2)

{
 try {
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(param_1,param_2,0,&stack0x0000000c));
  __stdio_common_vfprintf(*puVar1,puVar1[1]);
  return;

 } catch (...) { }
}


// Reference entry 111ac1c0; body size 48 bytes.
#line 1 "ENTRY_111ac1c0"

int FUN_111ac1c0(undefined4 param_1,undefined4 param_2)

{
 try {
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(param_1,0xffffffff,param_2,0,&stack0x0000000c));
  iVar2 = (int)(__stdio_common_vsprintf(*puVar1 | 1,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (int)(iVar2);

 } catch (...) { }
}


// Reference entry 111af700; body size 37 bytes.
#line 1 "ENTRY_111af700"

void FUN_111af700(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// Reference entry 111b1d50; body size 22 bytes.
#line 1 "ENTRY_111b1d50"

void FUN_111b1d50(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x31;
  (**(code **)*param_1)(param_1);
  return;
}


// Reference entry 111bdc10; body size 34 bytes.
#line 1 "ENTRY_111bdc10"

void FUN_111bdc10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 4))(param_2,param_3,param_4,&stack0x00000014);
  }
  return;

 } catch (...) { }
}


// Reference entry 111be750; body size 22 bytes.
#line 1 "ENTRY_111be750"

undefined4 __thiscall Recovered_Bulk::FUN_111be750(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x10) == param_2) {
    return (undefined4)(0);
  }
  *(int *)(param_1 + 0x10) = param_2;
  return (undefined4)(1);
}


// Reference entry 111bec60; body size 45 bytes.
#line 1 "ENTRY_111bec60"

int __fastcall FUN_111bec60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(thunk_FUN_111bed40());
  if (-1 < iVar1) {
    iVar2 = (int)(thunk_FUN_113e2f30(param_1 + 0x18));
    if (iVar2 != 0) {
      iVar1 = (int)(thunk_FUN_111be320());
      return (int)(iVar1);
    }
  }
  return (int)(iVar1);
}


// Reference entry 111bf4b0; body size 50 bytes.
#line 1 "ENTRY_111bf4b0"

undefined4 FUN_111bf4b0(int param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((char *)(param_1 + 0x110));
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  if ((pcVar2 != (char *)(param_1 + 0x111)) && (*(int *)(param_1 + 0x18) != 0)) {
    *param_2 = (int)(param_1 + 0x110);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 111c0380; body size 51 bytes.
#line 1 "ENTRY_111c0380"

void FUN_111c0380(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_2 != (undefined4 *)0x0) && (param_3 == 0x20)) {
    uVar1 = (undefined4)(param_2[1]);
    uVar2 = (undefined4)(param_2[2]);
    uVar3 = (undefined4)(param_2[3]);
    *(undefined4 *)(param_1 + 0x14c) = *param_2;
    *(undefined4 *)(param_1 + 0x150) = uVar1;
    *(undefined4 *)(param_1 + 0x154) = uVar2;
    *(undefined4 *)(param_1 + 0x158) = uVar3;
    uVar1 = (undefined4)(param_2[5]);
    uVar2 = (undefined4)(param_2[6]);
    uVar3 = (undefined4)(param_2[7]);
    *(undefined4 *)(param_1 + 0x15c) = param_2[4];
    *(undefined4 *)(param_1 + 0x160) = uVar1;
    *(undefined4 *)(param_1 + 0x164) = uVar2;
    *(undefined4 *)(param_1 + 0x168) = uVar3;
    *(undefined4 *)(param_1 + 0x148) = 0x20;
  }
  return;
}


// Reference entry 111c0480; body size 51 bytes.
#line 1 "ENTRY_111c0480"

int FUN_111c0480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)((uint *)thunk_FUN_101a6c80(param_1,param_2,param_3,0,&stack0x00000010));
  iVar2 = (int)(__stdio_common_vsprintf(*puVar1 | 2,puVar1[1]));
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (int)(iVar2);

 } catch (...) { }
}


// Reference entry 111c0a60; body size 22 bytes.
#line 1 "ENTRY_111c0a60"

void FUN_111c0a60(void)

{
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  return;
}


// Reference entry 111c0a80; body size 56 bytes.
#line 1 "ENTRY_111c0a80"

void __fastcall FUN_111c0a80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpBaseNoRedirectAIOOp);
  if ((undefined4 *)param_1[0x91f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x91f])(1);
  }
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 111c0b90; body size 56 bytes.
#line 1 "ENTRY_111c0b90"

void __fastcall FUN_111c0b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RXMLRPCAsyncIOOperation);
  if ((undefined4 *)param_1[0x28ee] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x28ee])(1);
  }
  thunk_FUN_11235fb0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 111c1270; body size 26 bytes.
#line 1 "ENTRY_111c1270"

undefined4 __thiscall Recovered_Bulk::FUN_111c1270(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x2474));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x2470));
  param_2[1] = (undefined4)(uVar1);
  return (undefined4)(1);
}


// Reference entry 111c1290; body size 20 bytes.
#line 1 "ENTRY_111c1290"

undefined4 __thiscall Recovered_Bulk::FUN_111c1290(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x50));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x4c));
  param_2[1] = (undefined4)(uVar1);
  return (undefined4)(1);
}


// Reference entry 111c12b0; body size 20 bytes.
#line 1 "ENTRY_111c12b0"

undefined4 __thiscall Recovered_Bulk::FUN_111c12b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x50));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x4c));
  param_2[1] = (undefined4)(uVar1);
  return (undefined4)(1);
}


// Reference entry 111c12d0; body size 20 bytes.
#line 1 "ENTRY_111c12d0"

undefined4 __thiscall Recovered_Bulk::FUN_111c12d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x50));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x4c));
  param_2[1] = (undefined4)(uVar1);
  return (undefined4)(1);
}


// Reference entry 111c12f0; body size 31 bytes.
#line 1 "ENTRY_111c12f0"

void __fastcall FUN_111c12f0(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(0);
  if (*(int *)(param_1 + 0x2478) != 0) {
    uVar1 = (undefined2)(*(undefined2 *)(param_1 + 0x5c));
  }
  (**(code **)(**(int **)(param_1 + 0x54) + 4))(*(undefined4 *)(param_1 + 0xc),uVar1);
  return;
}


// Reference entry 111c1320; body size 21 bytes.
#line 1 "ENTRY_111c1320"

void __fastcall FUN_111c1320(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x54) + 4))
            (*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x5c));
  return;
}


// Reference entry 111c1340; body size 21 bytes.
#line 1 "ENTRY_111c1340"

void __fastcall FUN_111c1340(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x54) + 4))
            (*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x5c));
  return;
}


// Reference entry 111c1360; body size 21 bytes.
#line 1 "ENTRY_111c1360"

void __fastcall FUN_111c1360(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x54) + 4))
            (*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x5c));
  return;
}


// Reference entry 111c1390; body size 49 bytes.
#line 1 "ENTRY_111c1390"

void __thiscall Recovered_Bulk::FUN_111c1390(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_1124ae40());
  if (cVar2 != '\0') {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x30));
    *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x2c));
    param_2[1] = (undefined4)(uVar1);
    return;
  }
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x38));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x34));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 111c13d0; body size 18 bytes.
#line 1 "ENTRY_111c13d0"

void __thiscall Recovered_Bulk::FUN_111c13d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x68));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 100));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 111c1460; body size 57 bytes.
#line 1 "ENTRY_111c1460"

void __thiscall Recovered_Bulk::FUN_111c1460(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char cVar2;
  
  if ((*(int *)(param_1 + 8) != 0) && (cVar2 = thunk_FUN_1124ae40(), cVar2 != '\0')) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x30));
    *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x2c));
    param_2[1] = (undefined4)(uVar1);
    return;
  }
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x38));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x34));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 111c1bd0; body size 41 bytes.
#line 1 "ENTRY_111c1bd0"

undefined4 __thiscall Recovered_Bulk::FUN_111c1bd0(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(int *)(param_1 + 0x58) = param_3;
  if ((&DAT_122f5650)[param_3] != 0) {
    uVar1 = (undefined4)(thunk_FUN_11241ee0(param_1));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 111c1e90; body size 62 bytes.
#line 1 "ENTRY_111c1e90"

undefined4 __fastcall FUN_111c1e90(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(8));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)((uint)&ghidra_vftable_RAsyncNullIOSession);
    puVar1[1] = (undefined4)(-(uint)(param_1 != 0) & param_1 + 0x60U);
    *(undefined4 **)(param_1 + 8) = puVar1;
    return (undefined4)(0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return (undefined4)(0);
}


// Reference entry 111c2060; body size 55 bytes.
#line 1 "ENTRY_111c2060"

uint __fastcall FUN_111c2060(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int *)(param_1 + -0x50) == 2) {
    if (*(char *)(param_1 + 0x4422) != '\0') {
      in_EAX = (uint)(thunk_FUN_11241dd0());
    }
    if (*(char *)(param_1 + 0x4421) == '\0') {
                    
                    
      uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x4424) + 0xc))());
      return (uint)(uVar1);
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 111c2330; body size 59 bytes.
#line 1 "ENTRY_111c2330"

int * __thiscall Recovered_Bulk::FUN_111c2330(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)(param_2)) {
    iVar1 = (int)(*param_2);
    *param_2 = (int)(0);
    iVar2 = (int)(*param_1);
    *param_1 = (int)(iVar1);
    if (iVar2 != 0) {
      thunk_FUN_1124d790();
      thunk_FUN_1148a50e(iVar2,0x20);
    }
    return (int *)(param_1);
  }
  return (int *)(param_1);
}


// Reference entry 111c2590; body size 33 bytes.
#line 1 "ENTRY_111c2590"

void __thiscall Recovered_Bulk::FUN_111c2590(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_111c25c0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 111c2670; body size 62 bytes.
#line 1 "ENTRY_111c2670"

int __thiscall Recovered_Bulk::FUN_111c2670(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_111c29a0(local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (cVar1 = thunk_FUN_111c3d40(param_2,local_4 + 0x10), cVar1 == '\0')) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 111c2fe0; body size 48 bytes.
#line 1 "ENTRY_111c2fe0"

undefined4 * __fastcall FUN_111c2fe0(undefined4 *param_1)

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


// Reference entry 111c3980; body size 28 bytes.
#line 1 "ENTRY_111c3980"

void __fastcall FUN_111c3980(int *param_1)

{
  thunk_FUN_111c25c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 111c39b0; body size 44 bytes.
#line 1 "ENTRY_111c39b0"

void __fastcall FUN_111c39b0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_111c2c00(*param_1,param_1[1] + 0x10);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x2c);
  }
  return;
}


// Reference entry 111c3a70; body size 28 bytes.
#line 1 "ENTRY_111c3a70"

void __fastcall FUN_111c3a70(int *param_1)

{
  thunk_FUN_111c25c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 111c3ae0; body size 55 bytes.
#line 1 "ENTRY_111c3ae0"

void FUN_111c3ae0(void)

{
  thunk_FUN_1124ef40();
  thunk_FUN_1124f0e0();
  thunk_FUN_1124d790();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  return;
}


// Reference entry 111c3f50; body size 48 bytes.
#line 1 "ENTRY_111c3f50"

undefined4 __thiscall Recovered_Bulk::FUN_111c3f50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa914);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c4040; body size 38 bytes.
#line 1 "ENTRY_111c4040"

undefined4 __thiscall Recovered_Bulk::FUN_111c4040(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11286500();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x494);
  }
  return (undefined4)(param_1);
}


// Reference entry 111c4830; body size 62 bytes.
#line 1 "ENTRY_111c4830"

char FUN_111c4830(int param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = (char)(thunk_FUN_1125b030(param_1,0));
    if (cVar1 == '\0') {
      thunk_FUN_112b0270("control_client",4,"Failed to add custom header -- buffer is full?");
    }
    return (char)(cVar1);
  }
  return (char)('\0');
}


// Reference entry 111c5e90; body size 48 bytes.
#line 1 "ENTRY_111c5e90"

void __thiscall Recovered_Bulk::FUN_111c5e90(undefined4 param_2,undefined4 param_3,int *param_4)
{
  int param_1 = (int )this;
  int local_4;
  
  *(undefined1 *)(param_1 + 0xa45) = 1;
  local_4 = (int)(param_1);
  thunk_FUN_11250a70(param_2,param_3,&local_4);
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(local_4);
  }
  return;
}


// Reference entry 111c63d0; body size 55 bytes.
#line 1 "ENTRY_111c63d0"

void __fastcall FUN_111c63d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x235d) != '\0') {
    uVar1 = (undefined4)(thunk_FUN_112869b0(0,0,param_1 + 0x2344,param_1 + 0x235e,param_1 + 0x237f));
    thunk_FUN_112ea860(uVar1);
  }
  return;
}


// Reference entry 111c7940; body size 33 bytes.
#line 1 "ENTRY_111c7940"

void __thiscall Recovered_Bulk::FUN_111c7940(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_111c7970(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x44);
  return;
}


// Reference entry 111c79d0; body size 40 bytes.
#line 1 "ENTRY_111c79d0"

int __thiscall Recovered_Bulk::FUN_111c79d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_111c7b30(local_8,param_2,param_3));
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 111c9fb0; body size 48 bytes.
#line 1 "ENTRY_111c9fb0"

undefined4 * __fastcall FUN_111c9fb0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x44));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 111ca1e0; body size 39 bytes.
#line 1 "ENTRY_111ca1e0"

undefined4 * __fastcall FUN_111ca1e0(undefined4 *param_1)

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


// Reference entry 111ca210; body size 39 bytes.
#line 1 "ENTRY_111ca210"

undefined4 * __fastcall FUN_111ca210(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x5c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 111ca240; body size 61 bytes.
#line 1 "ENTRY_111ca240"

uint * __fastcall FUN_111ca240(uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  *param_1 = (uint)(0);
  param_1[1] = (uint)(0);
  pvVar1 = (void *)(operator_new(0x18ab));
  if (pvVar1 != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void **)(uVar2 - 4) = pvVar1;
    *(uint*)uVar2 = (uint)((uint)(uVar2));
    *(uint *)(uVar2 + 4) = uVar2;
    *param_1 = (uint)(uVar2);
    return (uint *)(param_1);
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 111cb020; body size 51 bytes.
#line 1 "ENTRY_111cb020"

int * __thiscall Recovered_Bulk::FUN_111cb020(int param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  
  *param_1 = (int)(0);
  cVar1 = (char)(thunk_FUN_111f1980(param_2,param_3));
  if (cVar1 != '\0') {
    iVar2 = (int)(param_2 + 1);
    if ((char)param_3 == '\0') {
      iVar2 = (int)(param_2);
    }
    *param_1 = (int)(iVar2);
  }
  return (int *)(param_1);
}


// Reference entry 111cfd00; body size 39 bytes.
#line 1 "ENTRY_111cfd00"

undefined4 * __fastcall FUN_111cfd00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0xff);
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[0xa5] = (undefined4)(0);
  *(undefined1 *)((int)param_1 + 0x191) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 111d00e0; body size 61 bytes.
#line 1 "ENTRY_111d00e0"

undefined4 * __thiscall Recovered_Bulk::FUN_111d00e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111d0010(param_2);
  param_1[0x524] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosPositionInformationParam);
  *(undefined1 *)(param_1 + 0x525) = 0;
  *(undefined1 *)((int)param_1 + 0x1595) = 0;
  *(undefined1 *)((int)param_1 + 0x15a5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 111d2ee0; body size 41 bytes.
#line 1 "ENTRY_111d2ee0"

void __fastcall FUN_111d2ee0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 != 0) {
    if (0x1f < (iVar1 - *(int *)(iVar1 + -4)) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    thunk_FUN_1148a50e(*(int *)(iVar1 + -4),0x18ab);
  }
  return;
}


// Reference entry 111d3230; body size 44 bytes.
#line 1 "ENTRY_111d3230"

void __fastcall FUN_111d3230(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_111c8f80(*param_1,param_1[1] + 8);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x24);
  }
  return;
}


// Reference entry 111d3270; body size 44 bytes.
#line 1 "ENTRY_111d3270"

void __fastcall FUN_111d3270(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_111c9000(*param_1,param_1[1] + 8);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x5c);
  }
  return;
}


// Reference entry 111d32b0; body size 60 bytes.
#line 1 "ENTRY_111d32b0"

void __fastcall FUN_111d32b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_111d35e0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    if (0x1f < (iVar1 - *(int *)(iVar1 + -4)) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
    thunk_FUN_1148a50e(*(int *)(iVar1 + -4),0x18ab);
  }
  return;
}


// Reference entry 111d3300; body size 28 bytes.
#line 1 "ENTRY_111d3300"

void __fastcall FUN_111d3300(int *param_1)

{
  thunk_FUN_111c7970(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x44);
  return;
}


// Reference entry 111d3330; body size 38 bytes.
#line 1 "ENTRY_111d3330"

void __fastcall FUN_111d3330(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_111d34c0();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x44);
  }
  return;
}


// Reference entry 111d33f0; body size 51 bytes.
#line 1 "ENTRY_111d33f0"

void __fastcall FUN_111d33f0(int *param_1)

{
  int iVar1;
  
  thunk_FUN_111c7f50(param_1,*param_1);
  iVar1 = (int)(*(int *)(*param_1 + -4));
  if (0x1f < (*param_1 - iVar1) - 4U) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_1148a50e(iVar1,0x18ab);
  return;
}


// Reference entry 111d3430; body size 28 bytes.
#line 1 "ENTRY_111d3430"

void __fastcall FUN_111d3430(int *param_1)

{
  thunk_FUN_111c7970(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x44);
  return;
}


// Reference entry 111d3c60; body size 23 bytes.
#line 1 "ENTRY_111d3c60"

void FUN_111d3c60(void)

{
  thunk_FUN_1124eda0();
  thunk_FUN_1124f190();
  return;
}


// Reference entry 111d3e40; body size 33 bytes.
#line 1 "ENTRY_111d3e40"

void __fastcall FUN_111d3e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderMediaSessions);
  thunk_FUN_112a7f20(param_1 + 2);
  thunk_FUN_111d2fc0();
  return;
}


// Reference entry 111d43a0; body size 42 bytes.
#line 1 "ENTRY_111d43a0"

void __fastcall FUN_111d43a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosGetExtendedMetadataTextParam);
  thunk_FUN_112341b0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4600; body size 58 bytes.
#line 1 "ENTRY_111d4600"

void __fastcall FUN_111d4600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForAlbumAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForAlbumAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForAlbumAIOOp);
  param_1[0x89] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11202570();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 111d4650; body size 58 bytes.
#line 1 "ENTRY_111d4650"

void __fastcall FUN_111d4650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForTrackAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForTrackAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSonosGetObjIDsForTrackAIOOp);
  param_1[0xc9] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_11202570();
  thunk_FUN_11261f10();
  return;
}


// Reference entry 111d46e0; body size 25 bytes.
#line 1 "ENTRY_111d46e0"

void __fastcall FUN_111d46e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4700; body size 25 bytes.
#line 1 "ENTRY_111d4700"

void __fastcall FUN_111d4700(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4720; body size 25 bytes.
#line 1 "ENTRY_111d4720"

void __fastcall FUN_111d4720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4740; body size 25 bytes.
#line 1 "ENTRY_111d4740"

void __fastcall FUN_111d4740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4930; body size 42 bytes.
#line 1 "ENTRY_111d4930"

void __fastcall FUN_111d4930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosRelatedActionsParam);
  thunk_FUN_1125acd0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4970; body size 46 bytes.
#line 1 "ENTRY_111d4970"

void __fastcall FUN_111d4970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosRelatedInfoParam);
  free((void *)param_1[0x524]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d49b0; body size 25 bytes.
#line 1 "ENTRY_111d49b0"

void __fastcall FUN_111d49b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4c70; body size 25 bytes.
#line 1 "ENTRY_111d4c70"

void __fastcall FUN_111d4c70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d4d80; body size 25 bytes.
#line 1 "ENTRY_111d4d80"

void __fastcall FUN_111d4d80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  return;
}


// Reference entry 111d5210; body size 27 bytes.
#line 1 "ENTRY_111d5210"

int __stdcall FUN_111d5210(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_111c85c0(local_8,param_1));
  return (int)(*piVar1 + 0x28);
}


// Reference entry 111d5240; body size 27 bytes.
#line 1 "ENTRY_111d5240"

int __stdcall FUN_111d5240(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_111c8350(local_8,param_1));
  return (int)(*piVar1 + 0x20);
}


// Reference entry 111d5270; body size 27 bytes.
#line 1 "ENTRY_111d5270"

int __stdcall FUN_111d5270(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_111c87b0(local_8,param_1));
  return (int)(*piVar1 + 0x20);
}


// Reference entry 111d60f0; body size 41 bytes.
#line 1 "ENTRY_111d60f0"

undefined4 * __thiscall Recovered_Bulk::FUN_111d60f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderImpl);
  thunk_FUN_1124d790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6130; body size 59 bytes.
#line 1 "ENTRY_111d6130"

undefined4 * __thiscall Recovered_Bulk::FUN_111d6130(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderMediaSessions);
  thunk_FUN_112a7f20(param_1 + 2);
  thunk_FUN_111d2fc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1868);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6180; body size 41 bytes.
#line 1 "ENTRY_111d6180"

undefined4 * __thiscall Recovered_Bulk::FUN_111d6180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosContentProviderImpl);
  thunk_FUN_1124d790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6c10; body size 51 bytes.
#line 1 "ENTRY_111d6c10"

undefined4 * __thiscall Recovered_Bulk::FUN_111d6c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4e0c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6c50; body size 51 bytes.
#line 1 "ENTRY_111d6c50"

undefined4 * __thiscall Recovered_Bulk::FUN_111d6c50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5370);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6c90; body size 51 bytes.
#line 1 "ENTRY_111d6c90"

undefined4 * __thiscall Recovered_Bulk::FUN_111d6c90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1490);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d6cd0; body size 51 bytes.
#line 1 "ENTRY_111d6cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_111d6cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x15a8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d7050; body size 51 bytes.
#line 1 "ENTRY_111d7050"

undefined4 * __thiscall Recovered_Bulk::FUN_111d7050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18bc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d73c0; body size 51 bytes.
#line 1 "ENTRY_111d73c0"

undefined4 * __thiscall Recovered_Bulk::FUN_111d73c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x39bc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d7530; body size 51 bytes.
#line 1 "ENTRY_111d7530"

undefined4 * __thiscall Recovered_Bulk::FUN_111d7530(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosParamRX);
  thunk_FUN_1124ecb0();
  thunk_FUN_1124eb30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x15f8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111d7620; body size 31 bytes.
#line 1 "ENTRY_111d7620"

void FUN_111d7620(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  param_1[0x401] = (undefined1)(0);
  param_1[0x802] = (undefined1)(0);
  *(undefined2 *)(param_1 + 0xc03) = 1;
  return;
}


// Reference entry 111d7bc0; body size 47 bytes.
#line 1 "ENTRY_111d7bc0"

void __fastcall FUN_111d7bc0(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pvVar1 = (void *)(operator_new(0x18ab));
  if (pvVar1 != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void **)(uVar2 - 4) = pvVar1;
    *(uint *)(param_1 + 4) = uVar2;
    return;
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 111d9cc0; body size 51 bytes.
#line 1 "ENTRY_111d9cc0"

void __fastcall FUN_111d9cc0(int *param_1)

{
  int iVar1;
  
  thunk_FUN_111c7f50(param_1,*param_1);
  iVar1 = (int)(*(int *)(*param_1 + -4));
  if (0x1f < (*param_1 - iVar1) - 4U) {
                    
    _invalid_parameter_noinfo_noreturn();
  }
  thunk_FUN_1148a50e(iVar1,0x18ab);
  return;
}


// Reference entry 111dbb80; body size 41 bytes.
#line 1 "ENTRY_111dbb80"

void __fastcall FUN_111dbb80(int param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    if ((*(char *)(param_1 + 0x41) != '\0') && (*(int *)(param_1 + 0x38) != 0)) {
      thunk_FUN_101badc0();
      return;
    }
  }
  else if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_101badc0();
    return;
  }
  return;
}


// Reference entry 111dd8b0; body size 53 bytes.
#line 1 "ENTRY_111dd8b0"

short __stdcall FUN_111dd8b0(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_111e8d70(param_1));
  if ((sVar1 == 0x3fc) || (sVar1 == 0x40d)) {
    sVar1 = (short)(thunk_FUN_111e8d70(param_1));
  }
  return (short)(sVar1);
}


// Reference entry 111df370; body size 53 bytes.
#line 1 "ENTRY_111df370"

short __stdcall FUN_111df370(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_111e9460(param_1));
  if ((sVar1 == 0x3fc) || (sVar1 == 0x40d)) {
    sVar1 = (short)(thunk_FUN_111e9460(param_1));
  }
  return (short)(sVar1);
}


// Reference entry 111dfcf0; body size 44 bytes.
#line 1 "ENTRY_111dfcf0"

void FUN_111dfcf0(void)

{
  thunk_FUN_11234290();
  return;
}


// Reference entry 111dfd30; body size 20 bytes.
#line 1 "ENTRY_111dfd30"

void __fastcall FUN_111dfd30(int param_1)

{
  if (*(char *)(param_1 + 0x148d) != '\0') {
    thunk_FUN_1124fdc0();
    return;
  }
  return;
}


// Reference entry 111e08c0; body size 25 bytes.
#line 1 "ENTRY_111e08c0"

void __fastcall FUN_111e08c0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x1490) + 0x20))
            (&DAT_1187b728,*(undefined4 *)(param_1 + 0x149c));
  return;
}


// Reference entry 111e2cb0; body size 58 bytes.
#line 1 "ENTRY_111e2cb0"

undefined4 __thiscall Recovered_Bulk::FUN_111e2cb0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111c1810(param_2));
  thunk_FUN_111f6c30(*(undefined4 *)(param_1 + 0x107ec),*(undefined4 *)(param_1 + 0x107f0),
                     *(undefined1 *)(*(int *)(param_1 + 0xd8d8) + 0x108c));
  return (undefined4)(uVar1);
}


// Reference entry 111e3f50; body size 30 bytes.
#line 1 "ENTRY_111e3f50"

undefined4 FUN_111e3f50(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_111c8350(local_8,param_1));
  return (undefined4)(*(undefined4 *)(*piVar1 + 0x20));
}


// Reference entry 111e4690; body size 25 bytes.
#line 1 "ENTRY_111e4690"

int __fastcall FUN_111e4690(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) == 0) || (iVar1 = 0x191, *(int *)(param_1 + 4) == 1)) {
    iVar1 = (int)(9);
  }
  return (int)(iVar1 + param_1);
}


// Reference entry 111e7f20; body size 60 bytes.
#line 1 "ENTRY_111e7f20"

void __fastcall FUN_111e7f20(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xeb30) + 4))();
  (**(code **)(*(int *)(param_1 + 0xfd60) + 4))();
  (**(code **)(*(int *)(param_1 + 0xd8e0) + 4))();
  thunk_FUN_11253c70();
  return;
}


// Reference entry 111f17b0; body size 36 bytes.
#line 1 "ENTRY_111f17b0"

undefined4 __fastcall FUN_111f17b0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 9) != '\0') {
    iVar1 = (int)(strncmp((char *)(param_1 + 0x11),"favorites",9));
    if (iVar1 != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 111f1920; body size 25 bytes.
#line 1 "ENTRY_111f1920"

undefined4 FUN_111f1920(int param_1)

{
  if (((param_1 != 0x16) && (param_1 != 0x15)) && (param_1 != 0x14)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 111f4a70; body size 32 bytes.
#line 1 "ENTRY_111f4a70"

void __thiscall Recovered_Bulk::FUN_111f4a70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_111f4960(*(undefined4 *)(*(int *)(param_1 + 0xd8dc) + 0x165c),
                     *(int *)(param_1 + 0xd8dc) + 2,param_3);
  return;
}


// Reference entry 111f5630; body size 23 bytes.
#line 1 "ENTRY_111f5630"

void __thiscall Recovered_Bulk::FUN_111f5630(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x20))(param_2);
  return;
}


// Reference entry 111f5990; body size 33 bytes.
#line 1 "ENTRY_111f5990"

void __thiscall Recovered_Bulk::FUN_111f5990(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(param_1 + 8);
  if (param_1 == 4) {
    iVar1 = (int)(0);
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))(iVar1,param_2);
  return;
}


// Reference entry 111f6e80; body size 32 bytes.
#line 1 "ENTRY_111f6e80"

undefined4 __thiscall Recovered_Bulk::FUN_111f6e80(int param_2)
{
  int param_1 = (int )this;
  if ((param_2 != 0) && (param_2 != *(int *)(param_1 + 0x1520))) {
    *(int *)(param_1 + 0x1520) = param_2;
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 111f75b0; body size 46 bytes.
#line 1 "ENTRY_111f75b0"

void FUN_111f75b0(undefined4 param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (undefined4)(__acrt_iob_func(1));
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(uVar1,param_1,0,&stack0x00000008));
  __stdio_common_vfprintf(*puVar2,puVar2[1]);
  return;

 } catch (...) { }
}


// Reference entry 111f7790; body size 55 bytes.
#line 1 "ENTRY_111f7790"

undefined4 * __thiscall Recovered_Bulk::FUN_111f7790(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1125b880(param_1,LAB_100841f3,LAB_10088519);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZoneGroupStateProcessor);
  param_1[3] = (undefined4)(0);
  *(undefined1 *)(param_1 + 4) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 111f7820; body size 42 bytes.
#line 1 "ENTRY_111f7820"

void __fastcall FUN_111f7820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNotifyBodyParser);
  if ((void *)param_1[0x304] != (void *)((int)param_1 + 0x40f)) {
    free((void *)param_1[0x304]);
  }
  FUN_1003d5d7();
  return;
}


// Reference entry 111fc550; body size 52 bytes.
#line 1 "ENTRY_111fc550"

undefined1 __thiscall Recovered_Bulk::FUN_111fc550(undefined4 param_2)
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


// Reference entry 111fc6a0; body size 35 bytes.
#line 1 "ENTRY_111fc6a0"

void __thiscall Recovered_Bulk::FUN_111fc6a0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_111c1530(param_2);
  if (399 < *(int *)(param_1 + 0x442c)) {
    *(undefined1 *)(param_1 + 0x4430) = 1;
  }
  return;
}


// Reference entry 111fc6d0; body size 52 bytes.
#line 1 "ENTRY_111fc6d0"

undefined1 __thiscall Recovered_Bulk::FUN_111fc6d0(undefined4 param_2)
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


// Reference entry 111fc820; body size 52 bytes.
#line 1 "ENTRY_111fc820"

undefined1 __thiscall Recovered_Bulk::FUN_111fc820(undefined4 param_2)
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


// Reference entry 111fd510; body size 52 bytes.
#line 1 "ENTRY_111fd510"

char * FUN_111fd510(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (char *)("CLIENT_KEY_PROD");
  case 1:
    return (char *)("CLIENT_KEY_PERF");
  case 2:
    return (char *)("CLIENT_KEY_STAGE");
  case 3:
    return (char *)("CLIENT_KEY_TEST");
  case 4:
    return (char *)("CLIENT_KEY_INT");
  default:
    return (char *)("");
  }
}


// Reference entry 111fd570; body size 23 bytes.
#line 1 "ENTRY_111fd570"

void FUN_111fd570(void *param_1)

{
  thunk_FUN_113cfb70(param_1,0x80);
                    
                    
  free(param_1);
  return;
}


// Reference entry 111fd590; body size 23 bytes.
#line 1 "ENTRY_111fd590"

void FUN_111fd590(void *param_1)

{
  thunk_FUN_113cfb70(param_1,0x100);
                    
                    
  free(param_1);
  return;
}


// Reference entry 111fe350; body size 59 bytes.
#line 1 "ENTRY_111fe350"

undefined4 * __thiscall Recovered_Bulk::FUN_111fe350(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  param_1[1] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 2,0);
  param_1[5] = (undefined4)(param_2);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RBrowseContentProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 111feb30; body size 24 bytes.
#line 1 "ENTRY_111feb30"

void __fastcall FUN_111feb30(undefined4 *param_1)

{
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  return;
}


// Reference entry 111fed10; body size 24 bytes.
#line 1 "ENTRY_111fed10"

void __fastcall FUN_111fed10(undefined4 *param_1)

{
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  return;
}


// Reference entry 111fedd0; body size 46 bytes.
#line 1 "ENTRY_111fedd0"

undefined4 * __thiscall Recovered_Bulk::FUN_111fedd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111ff0f0; body size 49 bytes.
#line 1 "ENTRY_111ff0f0"

undefined4 * __thiscall Recovered_Bulk::FUN_111ff0f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RContentProvider);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x428);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 111ff630; body size 19 bytes.
#line 1 "ENTRY_111ff630"

void __fastcall FUN_111ff630(int param_1)

{
  *(undefined2 *)(param_1 + 0x40c) = 1;
  *(undefined1 *)(param_1 + 0x40f) = 0;
  return;
}


// Reference entry 111ff660; body size 63 bytes.
#line 1 "ENTRY_111ff660"

void __thiscall Recovered_Bulk::FUN_111ff660(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x808) + 8))(param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 0x80c) = 1;
  *(undefined2 *)(param_1 + 0x80f) = 0;
  *(undefined1 *)(param_1 + 0xc10) = 0;
  *(undefined4 *)(param_1 + 0x1414) = 0;
  return;
}


// Reference entry 11200570; body size 18 bytes.
#line 1 "ENTRY_11200570"

undefined4 FUN_11200570(void)

{
  undefined4 *in_stack_0000001c;
  
  *in_stack_0000001c = (undefined4)(0);
  return (undefined4)(1000);
}


// Reference entry 112007a0; body size 32 bytes.
#line 1 "ENTRY_112007a0"

void __fastcall FUN_112007a0(int param_1)

{
  if (*(char *)(param_1 + 0x50c) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x408) + 0x2c))();
    *(undefined1 *)(param_1 + 0x50c) = 0;
  }
  return;
}


// Reference entry 11200a70; body size 58 bytes.
#line 1 "ENTRY_11200a70"

int __thiscall Recovered_Bulk::FUN_11200a70(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_111c1810(param_2));
  if (iVar1 == 0) {
    if (*(short *)(param_1 + 0x5c) == 0) {
      iVar1 = (int)((**(code **)(*(int *)(param_1 + -8) + 8))());
      if ((iVar1 == 0) && (*(char *)(param_1 + 0xd7e0) != '\0')) {
        *(undefined2 *)(param_1 + 0x5c) = 0x2bd;
      }
    }
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 11202140; body size 22 bytes.
#line 1 "ENTRY_11202140"

void __fastcall FUN_11202140(int param_1)

{
  int iStack00000004;
  
  iStack00000004 = (int)(param_1 + 4);
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    return;
  }
  return;
}


// Reference entry 112022a0; body size 35 bytes.
#line 1 "ENTRY_112022a0"

void __thiscall Recovered_Bulk::FUN_112022a0(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x10))());
  (**(code **)(*piVar1 + 4))(param_1 + -4,1);
  return;
}


// Reference entry 112023b0; body size 49 bytes.
#line 1 "ENTRY_112023b0"

undefined4 FUN_112023b0(char *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(*param_1);
  if (cVar1 != '\0') {
    while (iVar2 = isalpha((int)cVar1), iVar2 != 0) {
      cVar1 = (char)(param_1[1]);
      param_1 = (char *)(param_1 + 1);
      if (cVar1 == '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 11202440; body size 49 bytes.
#line 1 "ENTRY_11202440"

undefined4 FUN_11202440(char *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(*param_1);
  if (cVar1 != '\0') {
    while (iVar2 = isdigit((int)cVar1), iVar2 != 0) {
      cVar1 = (char)(param_1[1]);
      param_1 = (char *)(param_1 + 1);
      if (cVar1 == '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 11203a40; body size 47 bytes.
#line 1 "ENTRY_11203a40"

undefined4 * __thiscall Recovered_Bulk::FUN_11203a40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  thunk_FUN_11265ef0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUnsubscribeRequest);
  uVar1 = (undefined4)(*param_2);
  param_1[0x215b] = (undefined4)(param_2[1]);
  param_1[0x215a] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 112045a0; body size 57 bytes.
#line 1 "ENTRY_112045a0"

void __thiscall Recovered_Bulk::FUN_112045a0(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(0);
  if (*(int *)(param_1 + -0x40) != 0) {
    iVar3 = (int)(param_1 + -0x348);
    do {
      cVar1 = (char)((**(code **)(*param_2 + 4))(iVar3));
      if (cVar1 == '\0') {
        return;
      }
      uVar2 = (uint)(uVar2 + 1);
      iVar3 = (int)(iVar3 + 0x81);
    } while (uVar2 < *(uint *)(param_1 + -0x40));
  }
  return;
}


// Reference entry 112046d0; body size 18 bytes.
#line 1 "ENTRY_112046d0"

void __thiscall Recovered_Bulk::FUN_112046d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + -0x38));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + -0x3c));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 11204720; body size 57 bytes.
#line 1 "ENTRY_11204720"

undefined1 * __thiscall Recovered_Bulk::FUN_11204720(undefined1 *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (undefined1)(0);
  pcVar2 = (char *)((char *)(param_1 + -0x30));
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130((char *)(param_1 + -0x30),(int)pcVar2 - (param_1 + -0x2f));
  return (undefined1 *)(param_2);
}


// Reference entry 11205330; body size 49 bytes.
#line 1 "ENTRY_11205330"

void FUN_11205330(void)

{
  thunk_FUN_11286ff0();
  FUN_1008b877();
  return;
}


// Reference entry 11205490; body size 43 bytes.
#line 1 "ENTRY_11205490"

int __fastcall FUN_11205490(int param_1)

{
  if (DAT_122f5600 != 0) {
    thunk_FUN_1123a890(param_1 + -0x680,*(undefined4 *)(param_1 + -0x3c),0xe10,0);
  }
  return (int)(param_1 + -0x35b);
}


// Reference entry 112056a0; body size 53 bytes.
#line 1 "ENTRY_112056a0"

void __thiscall Recovered_Bulk::FUN_112056a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + -0x17) = 0;
  if (*(char *)(param_1 + -0x35b) != '\0') {
    if (DAT_122f5600 != 0) {
      thunk_FUN_1123bf80(param_1 + -0x680,param_2);
    }
    *(undefined1 *)(param_1 + -0x35b) = 0;
  }
  return;
}


// Reference entry 11205a50; body size 48 bytes.
#line 1 "ENTRY_11205a50"

undefined4 __thiscall Recovered_Bulk::FUN_11205a50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_11287ac0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11206ea0; body size 52 bytes.
#line 1 "ENTRY_11206ea0"

undefined4 __fastcall FUN_11206ea0(int *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)((char *)(**(code **)(*param_1 + 4))());
  pcVar2 = (char *)(strstr(pcVar1,"&token"));
  if (pcVar2 != (char *)0x0) {
    pcVar1 = (char *)(strstr(pcVar1,"&subst"));
    if (pcVar1 != (char *)0x0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11208430; body size 51 bytes.
#line 1 "ENTRY_11208430"

void __thiscall Recovered_Bulk::FUN_11208430(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x370) < 5) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0xa0 + *(int *)(param_1 + 0x370) * 0x90));
    for (iVar1 = (int)(0x24); iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(*param_2);
      param_2 = (undefined4 *)(param_2 + 1);
      puVar2 = (undefined4 *)(puVar2 + 1);
    }
    *(int *)(param_1 + 0x370) = *(int *)(param_1 + 0x370) + 1;
  }
  return;
}


// Reference entry 11208e90; body size 48 bytes.
#line 1 "ENTRY_11208e90"

undefined4 __thiscall Recovered_Bulk::FUN_11208e90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_112624a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1120bb50; body size 48 bytes.
#line 1 "ENTRY_1120bb50"

undefined4 __thiscall Recovered_Bulk::FUN_1120bb50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1120cc70; body size 48 bytes.
#line 1 "ENTRY_1120cc70"

undefined4 __thiscall Recovered_Bulk::FUN_1120cc70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f0a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 112145b0; body size 41 bytes.
#line 1 "ENTRY_112145b0"

undefined4 __thiscall Recovered_Bulk::FUN_112145b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x74c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11217580; body size 48 bytes.
#line 1 "ENTRY_11217580"

undefined4 __thiscall Recovered_Bulk::FUN_11217580(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f160();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11218090; body size 48 bytes.
#line 1 "ENTRY_11218090"

undefined4 __thiscall Recovered_Bulk::FUN_11218090(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f1b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11218ca0; body size 48 bytes.
#line 1 "ENTRY_11218ca0"

undefined4 __thiscall Recovered_Bulk::FUN_11218ca0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f200();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11219c80; body size 47 bytes.
#line 1 "ENTRY_11219c80"

undefined4 * __thiscall Recovered_Bulk::FUN_11219c80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11203e10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTControl);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1121b020; body size 47 bytes.
#line 1 "ENTRY_1121b020"

undefined4 * __thiscall Recovered_Bulk::FUN_1121b020(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11203e10();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServicesDirectory);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1121b960; body size 41 bytes.
#line 1 "ENTRY_1121b960"

undefined4 __thiscall Recovered_Bulk::FUN_1121b960(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1121dcd0; body size 48 bytes.
#line 1 "ENTRY_1121dcd0"

undefined4 __thiscall Recovered_Bulk::FUN_1121dcd0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f250();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 112220c0; body size 41 bytes.
#line 1 "ENTRY_112220c0"

undefined4 __thiscall Recovered_Bulk::FUN_112220c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 112238d0; body size 48 bytes.
#line 1 "ENTRY_112238d0"

undefined4 __thiscall Recovered_Bulk::FUN_112238d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f0f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11227f90; body size 48 bytes.
#line 1 "ENTRY_11227f90"

undefined4 __thiscall Recovered_Bulk::FUN_11227f90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_1128f080();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 1122add0; body size 55 bytes.
#line 1 "ENTRY_1122add0"

void __thiscall Recovered_Bulk::FUN_1122add0(int *param_2)
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


// Reference entry 1122b5a0; body size 48 bytes.
#line 1 "ENTRY_1122b5a0"

undefined4 * __thiscall Recovered_Bulk::FUN_1122b5a0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_nonstd_optional_lite_bad_optional_access);
  return (undefined4 *)(param_1);
}


// Reference entry 1122b640; body size 58 bytes.
#line 1 "ENTRY_1122b640"

undefined4 * __thiscall Recovered_Bulk::FUN_1122b640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 local_8;
  undefined1 local_4;
  
  local_8 = (undefined4)(param_2);
  local_4 = (undefined1)(1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(&local_8,param_1 + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1122b690; body size 48 bytes.
#line 1 "ENTRY_1122b690"

undefined4 * __thiscall Recovered_Bulk::FUN_1122b690(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_logic_error);
  return (undefined4 *)(param_1);
}


// Reference entry 1122bbf0; body size 45 bytes.
#line 1 "ENTRY_1122bbf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1122bbf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1122bc30; body size 45 bytes.
#line 1 "ENTRY_1122bc30"

undefined4 * __thiscall Recovered_Bulk::FUN_1122bc30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1122bd10; body size 21 bytes.
#line 1 "ENTRY_1122bd10"

void __fastcall FUN_1122bd10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_10bf66a0(*(undefined4 *)(param_1 + 8)));
  thunk_FUN_10bf6a10(uVar1);
  return;
}


// Reference entry 1122ded0; body size 38 bytes.
#line 1 "ENTRY_1122ded0"

char * __fastcall FUN_1122ded0(char *param_1)

{
  undefined1 local_c [12];
  
  if (*param_1 != '\0') {
    return (char *)(param_1 + 4);
  }
  thunk_FUN_1122b5e0();
                    
  _CxxThrowException(local_c,(ThrowInfo *)&DAT_1205bd78);
}


// Reference entry 1122e250; body size 62 bytes.
#line 1 "ENTRY_1122e250"

undefined1 __thiscall Recovered_Bulk::FUN_1122e250(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)
{
  int *param_1 = (int *)this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_1123ecd0(param_2,param_3,param_4,param_5,param_6));
  (**(code **)(*param_1 + 0x5c))("<UsageMetrics>");
  (**(code **)(*param_1 + 0x5c))("<ver>2</ver>");
  return (undefined1)(uVar1);
}


// Reference entry 1122e860; body size 21 bytes.
#line 1 "ENTRY_1122e860"

void __fastcall FUN_1122e860(int *param_1)

{
  (**(code **)(*param_1 + 0x5c))("</UsageMetrics>");
  thunk_FUN_1123ef30();
  return;
}


// Reference entry 11230240; body size 58 bytes.
#line 1 "ENTRY_11230240"

undefined4 * __thiscall Recovered_Bulk::FUN_11230240(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  *param_1 = (undefined4)(param_2);
  (**(code **)(*param_2 + 100))(param_1 + 1);
  (**(code **)(*(int *)*param_1 + 0x6c))(&stack0xfffffff4);
  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 112313f0; body size 62 bytes.
#line 1 "ENTRY_112313f0"

void __fastcall FUN_112313f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMRequest);
  param_1[0x1b4d] = (undefined4)((uint)&ghidra_vftable_RLastFMResultParser);
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  thunk_FUN_11285ab0();
  thunk_FUN_1124a3f0();
  return;
}


// Reference entry 112314f0; body size 62 bytes.
#line 1 "ENTRY_112314f0"

void __fastcall FUN_112314f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMRequest);
  param_1[0x1b4d] = (undefined4)((uint)&ghidra_vftable_RLastFMResultParser);
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  thunk_FUN_11285ab0();
  thunk_FUN_1124a3f0();
  return;
}


// Reference entry 11231550; body size 25 bytes.
#line 1 "ENTRY_11231550"

void __fastcall FUN_11231550(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMResultParser);
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  return;
}


// Reference entry 11231890; body size 51 bytes.
#line 1 "ENTRY_11231890"

undefined4 * __thiscall Recovered_Bulk::FUN_11231890(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMResultParser);
  thunk_FUN_112341b0();
  FUN_1003d5d7();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x464);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11231b20; body size 38 bytes.
#line 1 "ENTRY_11231b20"

undefined4 FUN_11231b20(void)

{
  undefined4 *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined4 *in_stack_00000024;
  
  *in_stack_0000001c = (undefined4)(0);
  *in_stack_00000020 = (undefined4)(0);
  *in_stack_00000024 = (undefined4)(0);
  return (undefined4)(0x2bd);
}


// Reference entry 11232950; body size 21 bytes.
#line 1 "ENTRY_11232950"

void __fastcall FUN_11232950(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x54) + 4))
            (*(undefined4 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x5c));
  return;
}


// Reference entry 11232970; body size 49 bytes.
#line 1 "ENTRY_11232970"

void __thiscall Recovered_Bulk::FUN_11232970(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_1124ae40());
  if (cVar2 != '\0') {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x30));
    *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x2c));
    param_2[1] = (undefined4)(uVar1);
    return;
  }
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x38));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x34));
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 11232ce0; body size 58 bytes.
#line 1 "ENTRY_11232ce0"

undefined4 FUN_11232ce0(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"HTTP/1.1 ",9));
  if (iVar1 != 0) {
    iVar1 = (int)(strncmp(param_1,"HTTP/1.0 ",9));
    if (iVar1 != 0) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 112338b0; body size 52 bytes.
#line 1 "ENTRY_112338b0"

void __fastcall FUN_112338b0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_112334a0(1));
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x30))(0);
    return;
  }
  if (iVar1 == 0xb) {
    thunk_FUN_11240be0((int)param_1 + -0x7192);
  }
  return;
}


// Reference entry 11234510; body size 22 bytes.
#line 1 "ENTRY_11234510"

void FUN_11234510(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_11299700();
  return;
}


// Reference entry 11234620; body size 22 bytes.
#line 1 "ENTRY_11234620"

void FUN_11234620(void)

{
  thunk_FUN_11203e10();
  thunk_FUN_11299700();
  return;
}


// Reference entry 11234fd0; body size 44 bytes.
#line 1 "ENTRY_11234fd0"

undefined4 FUN_11234fd0(char *param_1,int param_2)

{
  long lVar1;
  char *local_4;
  
  lVar1 = (long)(strtol(param_1,&local_4,10));
  if ((*local_4 == '.') && (param_2 <= lVar1)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11236060; body size 26 bytes.
#line 1 "ENTRY_11236060"

void __fastcall FUN_11236060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCInParam);
  thunk_FUN_11285ab0();
  thunk_FUN_11285ab0();
  return;
}


// Reference entry 11236110; body size 20 bytes.
#line 1 "ENTRY_11236110"

void FUN_11236110(void)

{
  thunk_FUN_11285ab0();
  thunk_FUN_11285ab0();
  return;
}


// Reference entry 112363e0; body size 49 bytes.
#line 1 "ENTRY_112363e0"

undefined4 * __thiscall Recovered_Bulk::FUN_112363e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLRPCInParam);
  thunk_FUN_11285ab0();
  thunk_FUN_11285ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112365a0; body size 26 bytes.
#line 1 "ENTRY_112365a0"

int __fastcall FUN_112365a0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x3038));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3016 + param_1) == '\0')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 11236630; body size 26 bytes.
#line 1 "ENTRY_11236630"

int __fastcall FUN_11236630(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x3038));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3016 + param_1) == '\f')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 11236650; body size 37 bytes.
#line 1 "ENTRY_11236650"

int __fastcall FUN_11236650(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x3038));
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if (((1 < uVar1) && (*(char *)(uVar1 + 0x3016 + param_1) == '\x06')) &&
     (*(char *)(uVar1 + 0x3015 + param_1) == '\f')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 11236680; body size 47 bytes.
#line 1 "ENTRY_11236680"

int __fastcall FUN_11236680(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x3038));
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if ((((2 < uVar1) && (*(char *)(uVar1 + 0x3016 + param_1) == '\b')) &&
      (*(char *)(uVar1 + 0x3015 + param_1) == '\x06')) &&
     (*(char *)(uVar1 + 0x3014 + param_1) == '\f')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 112366c0; body size 26 bytes.
#line 1 "ENTRY_112366c0"

int __fastcall FUN_112366c0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x3038));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x3016 + param_1) == '\r')) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 11237be0; body size 58 bytes.
#line 1 "ENTRY_11237be0"

undefined4 FUN_11237be0(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"HTTP/1.1 ",9));
  if (iVar1 != 0) {
    iVar1 = (int)(strncmp(param_1,"HTTP/1.0 ",9));
    if (iVar1 != 0) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 11237cf0; body size 49 bytes.
#line 1 "ENTRY_11237cf0"

int __fastcall FUN_11237cf0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)(0x1c);
  uVar3 = (uint)(0);
  if (*(uint *)(param_1 + 0x380) != 0) {
    do {
      iVar1 = (int)(thunk_FUN_11237dd0());
      uVar3 = (uint)(uVar3 + 1);
      iVar2 = (int)(iVar2 + iVar1);
    } while (uVar3 < *(uint *)(param_1 + 0x380));
  }
  return (int)(iVar2);
}


// Reference entry 11237da0; body size 30 bytes.
#line 1 "ENTRY_11237da0"

int __fastcall FUN_11237da0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(thunk_FUN_11285d80(*param_1));
  iVar2 = (int)(thunk_FUN_11237dd0());
  return (int)(iVar2 + iVar1 + 0x1e);
}


// Reference entry 11238260; body size 43 bytes.
#line 1 "ENTRY_11238260"

void __fastcall FUN_11238260(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (*(int *)(param_1 + 0x5c4) != 0) {
    do {
      thunk_FUN_11238060(0);
      uVar1 = (uint)(uVar1 + 1);
    } while (uVar1 < *(uint *)(param_1 + 0x5c4));
  }
  return;
}


// Reference entry 112382e0; body size 48 bytes.
#line 1 "ENTRY_112382e0"

void __thiscall Recovered_Bulk::FUN_112382e0(undefined4 param_2,undefined4 param_3,int *param_4)
{
  int param_1 = (int )this;
  int local_4;
  
  *(undefined1 *)(param_1 + 0x434c) = 1;
  local_4 = (int)(param_1);
  thunk_FUN_112368f0(param_2,param_3,&local_4);
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(local_4);
  }
  return;
}


// Reference entry 11238b30; body size 42 bytes.
#line 1 "ENTRY_11238b30"

undefined1 __thiscall Recovered_Bulk::FUN_11238b30(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (param_3 != 0) {
    cVar1 = (char)((**(code **)(*(int *)(param_1 + 0x1310) + 4))(param_2,param_3));
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 11239ce0; body size 59 bytes.
#line 1 "ENTRY_11239ce0"

void __thiscall Recovered_Bulk::FUN_11239ce0(int param_2)
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


// Reference entry 11239d30; body size 16 bytes.
#line 1 "ENTRY_11239d30"

void __fastcall FUN_11239d30(int param_1)

{
  if (*(int **)(param_1 + 0x990) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x990) + 0x10))();
    return;
  }
  return;
}


// Reference entry 11239db0; body size 22 bytes.
#line 1 "ENTRY_11239db0"

void __fastcall FUN_11239db0(int param_1)

{
  int iStack00000004;
  
  iStack00000004 = (int)(param_1 + 4);
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    return;
  }
  return;
}


// Reference entry 11239de0; body size 54 bytes.
#line 1 "ENTRY_11239de0"

void __thiscall Recovered_Bulk::FUN_11239de0(undefined4 param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x990));
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = param_2;
    if (0 < *(int *)(param_1 + 8)) {
      thunk_FUN_111c1d40(*(int *)(param_1 + 8));
      piVar1 = (int *)(*(int **)(param_1 + 0x990));
    }
    (**(code **)(*piVar1 + 4))(param_1 + -4,1);
  }
  return;
}


// Reference entry 1123ef00; body size 28 bytes.
#line 1 "ENTRY_1123ef00"

void __thiscall Recovered_Bulk::FUN_1123ef00(int *param_2)
{
  int param_1 = (int )this;
  (**(code **)(*param_2 + 4))(*(undefined4 *)(param_1 + 0xc574),*(undefined4 *)(param_1 + 0xc578));
  return;
}


// Reference entry 1123f580; body size 48 bytes.
#line 1 "ENTRY_1123f580"

undefined4 __thiscall Recovered_Bulk::FUN_1123f580(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_11203e10();
  thunk_FUN_11299700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68c);
  }
  return (undefined4)(param_1);
}


// Reference entry 11240b40; body size 31 bytes.
#line 1 "ENTRY_11240b40"

void FUN_11240b40(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
    free(param_1);
    param_1 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 112419e0; body size 58 bytes.
#line 1 "ENTRY_112419e0"

void __fastcall FUN_112419e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined4)(*(undefined4 *)(param_1 + 0x24));
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x2c));
  uVar3 = (undefined4)(*(undefined4 *)(param_1 + 0x28));
  thunk_FUN_1145c930(puVar1,0);
  *(undefined4 *)(param_1 + 0x34) = *puVar1;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
  thunk_FUN_1145ad70(puVar1,uVar2);
  thunk_FUN_1145ad70((undefined4 *)(param_1 + 0x34),uVar3);
  return;
}


// Reference entry 11241ca0; body size 60 bytes.
#line 1 "ENTRY_11241ca0"

void __fastcall FUN_11241ca0(int param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\0') {
    thunk_FUN_112a7f50(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x2c) = 1;
    ReleaseSemaphore(*(HANDLE *)(param_1 + 8),1,(LPLONG)0x0);
    thunk_FUN_112a8010(param_1 + 0x48);
    thunk_FUN_112a82d0(param_1 + 0x30);
  }
  return;
}


// Reference entry 11242ad0; body size 18 bytes.
#line 1 "ENTRY_11242ad0"

undefined1 __fastcall FUN_11242ad0(int param_1)

{
  if ((*(int *)(param_1 + 4) == 2) && (*(int *)(param_1 + 0x10) != 0)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 11242af0; body size 18 bytes.
#line 1 "ENTRY_11242af0"

undefined1 __fastcall FUN_11242af0(int param_1)

{
  if ((*(int *)(param_1 + 4) == 1) && (*(int *)(param_1 + 0x14) != 0)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 112432f0; body size 48 bytes.
#line 1 "ENTRY_112432f0"

undefined4 * __thiscall Recovered_Bulk::FUN_112432f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_nonstd_expected_lite_bad_expected_access);
  return (undefined4 *)(param_1);
}


// Reference entry 11243350; body size 31 bytes.
#line 1 "ENTRY_11243350"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_11243350(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)(_UNK_119df2dc);
  uVar3 = (undefined4)(_UNK_119df2d8);
  uVar2 = (undefined4)(_UNK_119df2d4);
  uVar1 = (undefined4)(_DAT_119df2d0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RJsonWriterBase);
  param_1[9] = (undefined4)(0);
  param_1[1] = (undefined4)(uVar1);
  param_1[2] = (undefined4)(uVar2);
  param_1[3] = (undefined4)(uVar3);
  param_1[4] = (undefined4)(uVar4);
  param_1[5] = (undefined4)(uVar1);
  param_1[6] = (undefined4)(uVar2);
  param_1[7] = (undefined4)(uVar3);
  param_1[8] = (undefined4)(uVar4);
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 *)(param_1);
}


// Reference entry 11243380; body size 48 bytes.
#line 1 "ENTRY_11243380"

undefined4 * __thiscall Recovered_Bulk::FUN_11243380(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_nonstd_variants_bad_variant_access);
  return (undefined4 *)(param_1);
}


// Reference entry 11243480; body size 17 bytes.
#line 1 "ENTRY_11243480"

void __fastcall FUN_11243480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  return;
}


// Reference entry 11243600; body size 45 bytes.
#line 1 "ENTRY_11243600"

undefined4 * __thiscall Recovered_Bulk::FUN_11243600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11243670; body size 45 bytes.
#line 1 "ENTRY_11243670"

undefined4 * __thiscall Recovered_Bulk::FUN_11243670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11243770; body size 36 bytes.
#line 1 "ENTRY_11243770"

void __fastcall FUN_11243770(int *param_1)

{
  (**(code **)(*param_1 + 4))(&DAT_119361e8,1);
  *(undefined1 *)(param_1[9] + 4 + (int)param_1) = 0;
  if (-1 < param_1[9] + -1) {
    param_1[9] = (int)(param_1[9] + -1);
  }
  return;
}


// Reference entry 112437a0; body size 36 bytes.
#line 1 "ENTRY_112437a0"

void __fastcall FUN_112437a0(int *param_1)

{
  (**(code **)(*param_1 + 4))(&DAT_118872bc,1);
  *(undefined1 *)(param_1[9] + 4 + (int)param_1) = 0;
  if (-1 < param_1[9] + -1) {
    param_1[9] = (int)(param_1[9] + -1);
  }
  return;
}


// Reference entry 11243860; body size 53 bytes.
#line 1 "ENTRY_11243860"

void FUN_11243860(undefined4 param_1)

{
  undefined1 auStack_2c [4];
  undefined1 local_28 [36];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_2c);
  thunk_FUN_10118c40(param_1);
  thunk_FUN_11243220();
                    
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1205ce40);
}


// Reference entry 11244d80; body size 21 bytes.
#line 1 "ENTRY_11244d80"

undefined4 * __fastcall FUN_11244d80(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKeyValuePairsQueryParams);
  return (undefined4 *)(param_1);
}


// Reference entry 112454d0; body size 17 bytes.
#line 1 "ENTRY_112454d0"

undefined4 FUN_112454d0(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)(param_1 + -0x412) >> 8)) << 8 | (uint)((ushort)(param_1 + -0x412) < 4)));
}


// Reference entry 112454f0; body size 61 bytes.
#line 1 "ENTRY_112454f0"

undefined2 FUN_112454f0(ushort param_1)

{
  if ((((param_1 < 0x3f2) || (0x3fb < param_1)) && ((param_1 < 8000 || (8999 < param_1)))) &&
     (param_1 != 0x40c)) {
    return (undefined2)(0);
  }
  return (undefined2)(1);
}


// Reference entry 11246be0; body size 23 bytes.
#line 1 "ENTRY_11246be0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_11246be0(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_112470f0(param_1));
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ short)(sVar1 + _DAT_11c03cf0);
}


// Reference entry 112471a0; body size 23 bytes.
#line 1 "ENTRY_112471a0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_112471a0(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = (short)(thunk_FUN_112470f0(param_1));
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ short)(sVar1 + _DAT_11c03cec);
}


// Reference entry 11247c30; body size 16 bytes.
#line 1 "ENTRY_11247c30"

void __stdcall FUN_11247c30(undefined4 param_1)

{
  thunk_FUN_11247c50(param_1,0x3d,0x26);
  return;
}


// Reference entry 112482b0; body size 30 bytes.
#line 1 "ENTRY_112482b0"

void __fastcall FUN_112482b0(int param_1)

{
  thunk_FUN_112a7f20(param_1 + 0x4e8);
  thunk_FUN_1128f6e0();
  return;
}


// Reference entry 112482e0; body size 56 bytes.
#line 1 "ENTRY_112482e0"

int __thiscall Recovered_Bulk::FUN_112482e0(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_112a7f20(param_1 + 0x4e8);
  thunk_FUN_1128f6e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x4f0);
  }
  return (int)(param_1);
}


// Reference entry 11248330; body size 63 bytes.
#line 1 "ENTRY_11248330"

void FUN_11248330(void)

{
  int iVar1;
  
  iVar1 = (int)(DAT_122f5674);
  if (DAT_122f5674 != 0) {
    thunk_FUN_112a7f20(DAT_122f5674 + 0x4e8);
    thunk_FUN_1128f6e0();
    thunk_FUN_1148a50e(iVar1,0x4f0);
  }
  DAT_122f5674 = (int)(0);
  return;
}


// Reference entry 11249060; body size 61 bytes.
#line 1 "ENTRY_11249060"

undefined4 * __fastcall FUN_11249060(undefined4 *param_1)

{
  thunk_FUN_11273f80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReport);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  thunk_FUN_1145c930(param_1 + 4,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RKVReportData);
  *(undefined1 *)(param_1 + 6) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 11249a70; body size 27 bytes.
#line 1 "ENTRY_11249a70"

void FUN_11249a70(void)

{
  thunk_FUN_11249230();
  return;
}


// Reference entry 11249df0; body size 49 bytes.
#line 1 "ENTRY_11249df0"

undefined1 __stdcall FUN_11249df0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_112747a0(param_1,0,0);
  thunk_FUN_11274a70(param_2);
  thunk_FUN_11274880(param_1);
  return (undefined1)(1);
}


// Reference entry 11249e30; body size 26 bytes.
#line 1 "ENTRY_11249e30"

void __thiscall Recovered_Bulk::FUN_11249e30(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_11249230(param_2,param_3));
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}


// Reference entry 1124a2d0; body size 31 bytes.
#line 1 "ENTRY_1124a2d0"

undefined4 * __fastcall FUN_1124a2d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPRequest);
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 0x40b) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1124ae40; body size 28 bytes.
#line 1 "ENTRY_1124ae40"

undefined1 __fastcall FUN_1124ae40(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    return (undefined1)(0);
  }
  if (*(char *)(param_1 + 0x4424) != '\0') {
    return (undefined1)(*(undefined1 *)(param_1 + 0x4425));
  }
  return (undefined1)(1);
}


// Reference entry 1124b7f0; body size 57 bytes.
#line 1 "ENTRY_1124b7f0"

void __fastcall FUN_1124b7f0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  thunk_FUN_112b0270("asyncio",4,"Session status 0x%x connected %d wantWrite %d wantRead %d",
                     *(undefined4 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0xc),
                     *(undefined1 *)(param_1 + 0x4485),*(undefined1 *)(param_1 + 0x4484));
  return;
}


// Reference entry 1124ce80; body size 19 bytes.
#line 1 "ENTRY_1124ce80"

uint __stdcall FUN_1124ce80(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = (undefined4)(0);
  }
  return (uint)((uint)param_3 & 0xffffff00);
}


// Reference entry 1124d1e0; body size 29 bytes.
#line 1 "ENTRY_1124d1e0"

undefined4 __fastcall FUN_1124d1e0(int param_1)

{
  if ((*(char *)(param_1 + 0x854) != '\0') &&
     (*(int *)(param_1 + 0x858) != *(int *)(param_1 + 0x85c))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1124d500; body size 62 bytes.
#line 1 "ENTRY_1124d500"

void __thiscall Recovered_Bulk::FUN_1124d500(int param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  do {
    if (param_3 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xc) == 3) {
      iVar1 = (int)(thunk_FUN_1124cc10(param_2,param_3));
    }
    else {
      if (*(int *)(param_1 + 0xc) != 4) {
        return;
      }
      iVar1 = (int)(thunk_FUN_1124c8a0(param_2,param_3));
    }
    param_2 = (int)(param_2 + iVar1);
    param_3 = (int)(param_3 - iVar1);
  } while( true );
}


// Reference entry 1124d5b0; body size 19 bytes.
#line 1 "ENTRY_1124d5b0"

uint __fastcall FUN_1124d5b0(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0xc) != 3) && (uVar1 = *(int *)(param_1 + 0xc) - 4, uVar1 != 0)) {
    return (uint)(uVar1 & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 1124d630; body size 19 bytes.
#line 1 "ENTRY_1124d630"

uint __fastcall FUN_1124d630(int param_1)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0xc) != 1) && (uVar1 = *(int *)(param_1 + 0xc) - 2, uVar1 != 0)) {
    return (uint)(uVar1 & 0xffffff00);
  }
  return (uint)(1);
}


// Reference entry 1124dee0; body size 38 bytes.
#line 1 "ENTRY_1124dee0"

undefined4 * __fastcall FUN_1124dee0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCROutParamShallowCopy);
  param_1[0xd] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1124eb60; body size 43 bytes.
#line 1 "ENTRY_1124eb60"

void __fastcall FUN_1124eb60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParamDeepCopy);
  free((void *)param_1[0x16]);
  free((void *)param_1[0x17]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParam);
  thunk_FUN_11285ab0();
  return;
}


// Reference entry 1124ecc0; body size 53 bytes.
#line 1 "ENTRY_1124ecc0"

void __fastcall FUN_1124ecc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRResultParser);
  param_1[0x4a] = (undefined4)((uint)&ghidra_vftable_REncryptedStringDecoder);
  param_1[8] = (undefined4)((uint)&ghidra_vftable_RAesDecoder);
  thunk_FUN_113d3650(param_1 + 0x16);
  param_1[8] = (undefined4)((uint)&ghidra_vftable_REncryptedDataDecoder);
  FUN_1003d5d7();
  return;
}


// Reference entry 1124ed10; body size 53 bytes.
#line 1 "ENTRY_1124ed10"

void __fastcall FUN_1124ed10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedStringEmitter);
  param_1[0x3f] = (undefined4)((uint)&ghidra_vftable_REncryptedStringEncoder);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RAesEncoder);
  thunk_FUN_113d3650(param_1 + 0xb);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_REncryptedDataEncoder);
  thunk_FUN_11285ab0();
  return;
}


// Reference entry 1124ed70; body size 31 bytes.
#line 1 "ENTRY_1124ed70"

void __fastcall FUN_1124ed70(undefined4 *param_1)

{
  param_1[8] = (undefined4)((uint)&ghidra_vftable_RSOAPComplexInParam);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPComplexInParam);
  thunk_FUN_11285aa0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  return;
}


// Reference entry 1124f160; body size 25 bytes.
#line 1 "ENTRY_1124f160"

void __fastcall FUN_1124f160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPFaultWriter);
  thunk_FUN_11285ab0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  return;
}


// Reference entry 1124f540; body size 41 bytes.
#line 1 "ENTRY_1124f540"

undefined4 * __thiscall Recovered_Bulk::FUN_1124f540(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParam);
  thunk_FUN_11285ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x58);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124f5e0; body size 41 bytes.
#line 1 "ENTRY_1124f5e0"

undefined4 * __thiscall Recovered_Bulk::FUN_1124f5e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCRInParam);
  thunk_FUN_11285ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124f7c0; body size 53 bytes.
#line 1 "ENTRY_1124f7c0"

undefined4 * __thiscall Recovered_Bulk::FUN_1124f7c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[8] = (undefined4)((uint)&ghidra_vftable_RSOAPComplexInParam);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPComplexInParam);
  thunk_FUN_11285aa0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124fbb0; body size 47 bytes.
#line 1 "ENTRY_1124fbb0"

undefined4 * __thiscall Recovered_Bulk::FUN_1124fbb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPFaultWriter);
  thunk_FUN_11285ab0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSOAPWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1124fec0; body size 46 bytes.
#line 1 "ENTRY_1124fec0"

int __thiscall Recovered_Bulk::FUN_1124fec0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  if (uVar1 < 0x19) {
    *(uint *)(param_1 + 8) = uVar1 + 1;
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  param_1 = (int)(uVar1 * 0x60 + param_1);
  (**(code **)(*(int *)(param_1 + 0x28) + 4))(param_2);
  return (int)(param_1 + 0x28);
}


// Reference entry 1124ff50; body size 63 bytes.
#line 1 "ENTRY_1124ff50"

int __thiscall Recovered_Bulk::FUN_1124ff50(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 4));
  if (uVar1 < 0x10) {
    *(uint *)(param_1 + 4) = uVar1 + 1;
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  (**(code **)(*(int *)(param_1 + 0x2e8 + uVar1 * 0x38) + 4))(param_2);
  return (int)(param_1 + uVar1 * 0x38 + 0x2e8);
}


// Reference entry 11250060; body size 55 bytes.
#line 1 "ENTRY_11250060"

int __thiscall Recovered_Bulk::FUN_11250060(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  if (uVar1 < 0x10) {
    *(uint *)(param_1 + 8) = uVar1 + 1;
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  param_1 = (int)(uVar1 * 0x60 + param_1);
  (**(code **)(*(int *)(param_1 + 0xc30) + 4))(param_2);
  return (int)(param_1 + 0xc30);
}


// Reference entry 112500b0; body size 57 bytes.
#line 1 "ENTRY_112500b0"

int __thiscall Recovered_Bulk::FUN_112500b0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x2a4));
  if (uVar1 < 0xc) {
    *(uint *)(param_1 + 0x2a4) = uVar1 + 1;
  }
  else {
    uVar1 = (uint)(uVar1 - 1);
  }
  (**(code **)(*(int *)(param_1 + 4 + uVar1 * 0x38) + 4))(param_2);
  return (int)(param_1 + uVar1 * 0x38 + 4);
}


// Reference entry 1125033f; body size 46 bytes.
#line 1 "ENTRY_1125033f"

void FUN_1125033f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 4) = 7;
  uVar1 = (undefined4)(thunk_FUN_1148b586(param_3));
  *(undefined4 *)(unaff_EDI + 0x10) = param_3;
  *(undefined4 *)(unaff_EDI + 8) = uVar1;
  *(undefined4 *)(unaff_EDI + 0xc) = uVar1;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined1 *)(unaff_EDI + 0x31) = 0;
  return;
}


// Reference entry 112519d0; body size 48 bytes.
#line 1 "ENTRY_112519d0"

void __fastcall FUN_112519d0(int param_1)

{
  if (*(int *)(param_1 + 0x2a8) == -1) {
    return;
  }
  param_1 = (int)(param_1 + *(int *)(param_1 + 0x2a8) * 0x38);
  if (*(int *)(param_1 + 8) == 9) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
    return;
  }
  thunk_FUN_1124fdc0();
  return;
}


// Reference entry 11252830; body size 39 bytes.
#line 1 "ENTRY_11252830"

undefined1 * __fastcall FUN_11252830(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    return (undefined1 *)((undefined1 *)(param_1 + 0x38));
  case 6:
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x10));
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 11253c70; body size 45 bytes.
#line 1 "ENTRY_11253c70"

void __fastcall FUN_11253c70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x38));
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)((undefined4 *)(param_1 + 0x28 + iVar1 * 4));
    do {
      *puVar2 = (undefined4)(0);
      puVar2 = (undefined4 *)(puVar2 + -1);
      iVar1 = (int)(iVar1 + -1);
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


// Reference entry 11253cd0; body size 62 bytes.
#line 1 "ENTRY_11253cd0"

void __thiscall Recovered_Bulk::FUN_11253cd0(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  free(*(void **)(param_1 + 0x58));
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  _Dst = (void *)((void *)thunk_FUN_1148b586(pcVar2 + (1 - (int)(param_2 + 1))));
  *(void **)(param_1 + 0x58) = _Dst;
  memcpy(_Dst,param_2,(size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
  return;
}


// Reference entry 11253d30; body size 62 bytes.
#line 1 "ENTRY_11253d30"

void __thiscall Recovered_Bulk::FUN_11253d30(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  free(*(void **)(param_1 + 0x34));
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  _Dst = (void *)((void *)thunk_FUN_1148b586(pcVar2 + (1 - (int)(param_2 + 1))));
  *(void **)(param_1 + 0x34) = _Dst;
  memcpy(_Dst,param_2,(size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
  return;
}


// Reference entry 11253df0; body size 32 bytes.
#line 1 "ENTRY_11253df0"

void __fastcall FUN_11253df0(int param_1)

{
  if (*(int *)(param_1 + 0x2a8) != -1) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0xc + *(int *)(param_1 + 0x2a8) * 0x38) + 4))();
    return;
  }
  return;
}


// Reference entry 11254500; body size 41 bytes.
#line 1 "ENTRY_11254500"

void __thiscall Recovered_Bulk::FUN_11254500(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  (**(code **)(*param_1 + 4))(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 11255f20; body size 37 bytes.
#line 1 "ENTRY_11255f20"

ulong FUN_11255f20(char *param_1)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)(strchr(param_1,0x2d));
  if (pcVar1 != (char *)0x0) {
    uVar2 = (ulong)(strtoul(pcVar1 + 1,(char **)0x0,0x10));
    return (ulong)(uVar2);
  }
  return (ulong)(0);
}


// Reference entry 112576a0; body size 34 bytes.
#line 1 "ENTRY_112576a0"

ulong __fastcall FUN_112576a0(char *param_1)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)(strchr(param_1,0x2d));
  if (pcVar1 != (char *)0x0) {
    uVar2 = (ulong)(strtoul(pcVar1 + 1,(char **)0x0,0x10));
    return (ulong)(uVar2);
  }
  return (ulong)(0);
}


// Reference entry 11257750; body size 41 bytes.
#line 1 "ENTRY_11257750"

undefined4 __thiscall Recovered_Bulk::FUN_11257750(undefined1 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *param_2 = (undefined1)(0);
  if (*(int *)(param_1 + 0x1f0) != 0) {
    thunk_FUN_1145c250(param_2,*(int *)(param_1 + 0x1f0),param_3);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11257790; body size 41 bytes.
#line 1 "ENTRY_11257790"

undefined4 __thiscall Recovered_Bulk::FUN_11257790(undefined1 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *param_2 = (undefined1)(0);
  if (*(int *)(param_1 + 0x1ec) != 0) {
    thunk_FUN_1145c250(param_2,*(int *)(param_1 + 0x1ec),param_3);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 112578f0; body size 60 bytes.
#line 1 "ENTRY_112578f0"

undefined4 __fastcall FUN_112578f0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x1ec) != 0) {
    return (undefined4)(1);
  }
  pcVar3 = (char *)((char *)(param_1 + 8));
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  if ((3 < (uint)((int)pcVar3 - (param_1 + 9))) &&
     (iVar2 = strncmp("X_#",(char *)(param_1 + 8),3), iVar2 == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11258440; body size 59 bytes.
#line 1 "ENTRY_11258440"

void FUN_11258440(void)

{
  int local_c;
  undefined1 local_8 [4];
  int local_4;
  
  local_c = (int)(0);
  do {
    thunk_FUN_113d2fb0(&local_c,4);
    thunk_FUN_1145c930(local_8,0);
  } while (local_c << 8 == local_4);
  return;
}


// Reference entry 11258890; body size 44 bytes.
#line 1 "ENTRY_11258890"

void __thiscall Recovered_Bulk::FUN_11258890(undefined4 param_2,undefined4 param_3)
{
  char *param_1 = (char *)this;
  byte bVar1;
  
  bVar1 = (byte)(*param_1 != '\0' | 2);
  if (param_1[1] == '\0') {
    bVar1 = (byte)(*param_1 != '\0');
  }
  thunk_FUN_1145c720(param_2,param_3,&DAT_119e0b2c,bVar1);
  return;
}


// Reference entry 11259e40; body size 25 bytes.
#line 1 "ENTRY_11259e40"

short __fastcall FUN_11259e40(int param_1)

{
  short sVar1;
  
  sVar1 = (short)(*(short *)(param_1 + 0x44a));
  if (sVar1 == 0) {
    sVar1 = (short)(*(short *)(param_1 + 0x446) + 0x1bb);
  }
  return (short)(sVar1);
}


// Reference entry 11259ef0; body size 24 bytes.
#line 1 "ENTRY_11259ef0"

short __fastcall FUN_11259ef0(int param_1)

{
  short sVar1;
  
  sVar1 = (short)(*(short *)(param_1 + 0x448));
  if (sVar1 == 0) {
    sVar1 = (short)(*(short *)(param_1 + 0x446) + 0x2b);
  }
  return (short)(sVar1);
}


// Reference entry 1125ac90; body size 43 bytes.
#line 1 "ENTRY_1125ac90"

int * __thiscall Recovered_Bulk::FUN_1125ac90(undefined1 *param_2,int param_3)
{
  int *param_1 = (int *)this;
  param_1[2] = (int)(param_3);
  *param_1 = (int)((int)param_2);
  *param_2 = (undefined1)(0);
  *(undefined1 *)(*param_1 + 1) = 0;
  param_1[1] = (int)(*param_1);
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 1125b8f0; body size 35 bytes.
#line 1 "ENTRY_1125b8f0"

void __fastcall FUN_1125b8f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLParserBase);
  thunk_FUN_112c8b80(param_1[1]);
  param_1[1] = (undefined4)(0);
  thunk_FUN_11285a90();
  return;
}


// Reference entry 1125b920; body size 58 bytes.
#line 1 "ENTRY_1125b920"

undefined4 * __thiscall Recovered_Bulk::FUN_1125b920(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXMLParserBase);
  thunk_FUN_112c8b80(param_1[1]);
  param_1[1] = (undefined4)(0);
  thunk_FUN_11285a90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1125bcb0; body size 43 bytes.
#line 1 "ENTRY_1125bcb0"

void FUN_1125bcb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1145c250(&DAT_122f57d8,param_1,0x25);
  thunk_FUN_1145c250(&DAT_122f5800,param_2,0x25);
  DAT_122f57d4 = (int)(1);
  return;
}


// Reference entry 1125bcf0; body size 36 bytes.
#line 1 "ENTRY_1125bcf0"

undefined4 * __thiscall Recovered_Bulk::FUN_1125bcf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_TestPointHandler);
  param_1[1] = (undefined4)(param_2);
  thunk_FUN_11244d80();
  return (undefined4 *)(param_1);
}


// Reference entry 1125bd40; body size 44 bytes.
#line 1 "ENTRY_1125bd40"

undefined4 * __thiscall Recovered_Bulk::FUN_1125bd40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_TestPointHandler);
  thunk_FUN_11244ee0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x920);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1125cee0; body size 25 bytes.
#line 1 "ENTRY_1125cee0"

undefined4 FUN_1125cee0(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  if (param_3 < 6) {
    return (undefined4)(0);
  }
  *param_2 = (undefined4)(0);
  *(undefined2 *)(param_2 + 1) = 0;
  return (undefined4)(1);
}


// Reference entry 1125cf00; body size 21 bytes.
#line 1 "ENTRY_1125cf00"

bool __fastcall FUN_1125cf00(char *param_1)

{
  return (bool)(((((param_1[5] != '\0' || param_1[4] != '\0') || param_1[3] != '\0') || param_1[2] != '\0')
         || param_1[1] != '\0') || *param_1 != '\0');
}


// Reference entry 1125d870; body size 59 bytes.
#line 1 "ENTRY_1125d870"

undefined4 * __thiscall Recovered_Bulk::FUN_1125d870(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0xffffffff);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerDevDisc);
  return (undefined4 *)(param_1);
}


// Reference entry 1125d9a0; body size 28 bytes.
#line 1 "ENTRY_1125d9a0"

void __fastcall FUN_1125d9a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  if ((*(char *)(param_1 + 5) == '\0') && (param_1[3] != -1)) {
    Ordinal_3(param_1[3]);
  }
  return;
}


// Reference entry 1125d9f0; body size 54 bytes.
#line 1 "ENTRY_1125d9f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1125d9f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  if ((*(char *)(param_1 + 5) == '\0') && (param_1[3] != -1)) {
    Ordinal_3(param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1125da40; body size 54 bytes.
#line 1 "ENTRY_1125da40"

undefined4 * __thiscall Recovered_Bulk::FUN_1125da40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  if ((*(char *)(param_1 + 5) == '\0') && (param_1[3] != -1)) {
    Ordinal_3(param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1125da90; body size 57 bytes.
#line 1 "ENTRY_1125da90"

undefined4 * __thiscall Recovered_Bulk::FUN_1125da90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RIPNetStartListenerBase);
  if ((*(char *)(param_1 + 5) == '\0') && (param_1[3] != -1)) {
    Ordinal_3(param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x81c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1125fd30; body size 53 bytes.
#line 1 "ENTRY_1125fd30"

void FUN_1125fd30(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = (char *)(param_1);
    do {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)(pcVar2 + 1);
    } while (cVar1 != '\0');
    thunk_FUN_112c6c00(param_1,(int)pcVar2 - (int)(param_1 + 1),0);
    return;
  }
  thunk_FUN_112c6c00(0,0,0);
  return;
}


// Reference entry 112607d0; body size 26 bytes.
#line 1 "ENTRY_112607d0"

void FUN_112607d0(undefined1 param_1)

{
  if (DAT_122f583d == '\0') {
    DAT_122f583c = (int)(param_1);
    DAT_122f583d = (int)('\x01');
  }
  return;
}


// Reference entry 11260bd0; body size 62 bytes.
#line 1 "ENTRY_11260bd0"

void __fastcall FUN_11260bd0(int param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0xc) != -1) {
    Ordinal_3(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  cVar1 = (char)(thunk_FUN_112611c0());
  if (cVar1 == '\0') {
    thunk_FUN_112b0270("hwmon",4,"failed to re-bind NetStart socket!");
  }
  return;
}


// Reference entry 11261f10; body size 31 bytes.
#line 1 "ENTRY_11261f10"

void __fastcall FUN_11261f10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCompoundAsyncIOOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  return;
}


// Reference entry 11261f40; body size 53 bytes.
#line 1 "ENTRY_11261f40"

undefined4 * __thiscall Recovered_Bulk::FUN_11261f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCompoundAsyncIOOperation);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11261f90; body size 33 bytes.
#line 1 "ENTRY_11261f90"

void __fastcall FUN_11261f90(int param_1)

{
  if (((*(int *)(param_1 + 0x10) != -1) && (*(int *)(param_1 + 0x14) != 0)) &&
     ((&DAT_122f5650)[*(int *)(param_1 + 0x10)] != 0)) {
    thunk_FUN_11240cc0(*(int *)(param_1 + 0x14));
  }
  return;
}


// Reference entry 11262460; body size 45 bytes.
#line 1 "ENTRY_11262460"

undefined4 * __thiscall Recovered_Bulk::FUN_11262460(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSystemTime);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  thunk_FUN_112637d0(param_2,param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 11262c80; body size 18 bytes.
#line 1 "ENTRY_11262c80"

void __fastcall FUN_11262c80(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}


// Reference entry 11262ca0; body size 21 bytes.
#line 1 "ENTRY_11262ca0"

void __fastcall FUN_11262ca0(undefined8 *param_1)

{
  *param_1 = (undefined8)(0);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 0xc) = 0;
  return;
}


// Reference entry 11262cc0; body size 37 bytes.
#line 1 "ENTRY_11262cc0"

void __thiscall Recovered_Bulk::FUN_11262cc0(char param_2)
{
  undefined2 *param_1 = (undefined2 *)this;
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = (undefined2)(*param_1);
  }
  return;
}


// Reference entry 11264450; body size 30 bytes.
#line 1 "ENTRY_11264450"

void __fastcall FUN_11264450(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x107d1;
  *(undefined4 *)(param_1 + 8) = 0x10000;
  *(undefined4 *)(param_1 + 0xc) = 0xc;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}


// Reference entry 11264740; body size 21 bytes.
#line 1 "ENTRY_11264740"

undefined4 * __thiscall Recovered_Bulk::FUN_11264740(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 6) = 1;
  return (undefined4 *)(param_1);
}


// Reference entry 11264a40; body size 19 bytes.
#line 1 "ENTRY_11264a40"

undefined4 FUN_11264a40(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11264cd0; body size 31 bytes.
#line 1 "ENTRY_11264cd0"

void FUN_11264cd0(char *param_1,char param_2)

{
  char *pcVar1;
  
  if (param_1 != (char *)0x0) {
    pcVar1 = (char *)(strrchr(param_1,(int)param_2));
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = (char)('\0');
    }
  }
  return;
}


// Reference entry 11266450; body size 50 bytes.
#line 1 "ENTRY_11266450"

undefined4 * __thiscall Recovered_Bulk::FUN_11266450(undefined1 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11287890();
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringBuilder);
  param_1[1] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  *param_2 = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11266490; body size 47 bytes.
#line 1 "ENTRY_11266490"

undefined4 * __thiscall Recovered_Bulk::FUN_11266490(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11287860();
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RStringStream);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11266870; body size 28 bytes.
#line 1 "ENTRY_11266870"

void __fastcall FUN_11266870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPSeekableDataProvider);
  thunk_FUN_11266700();
  thunk_FUN_112878d0();
  return;
}


// Reference entry 11266cd0; body size 54 bytes.
#line 1 "ENTRY_11266cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_11266cd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPSeekableDataProvider);
  thunk_FUN_11266700();
  thunk_FUN_112878d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x12348);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11268b60; body size 40 bytes.
#line 1 "ENTRY_11268b60"

undefined4 __thiscall Recovered_Bulk::FUN_11268b60(undefined4 *param_2)
{
  int param_1 = (int )this;
  if ((*(char *)(param_1 + 0x44b4) != '\0') && (*(char *)(param_1 + 0x4a8) == '\0')) {
    *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x44b8));
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11269b00; body size 45 bytes.
#line 1 "ENTRY_11269b00"

void __stdcall FUN_11269b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  thunk_FUN_11269bc0(param_1,param_2,param_3,param_4,0,0,param_5,"DELETE",param_6,param_7);
  return;
}


// Reference entry 11269b40; body size 45 bytes.
#line 1 "ENTRY_11269b40"

void __stdcall FUN_11269b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  thunk_FUN_11269bc0(param_1,param_2,param_3,param_4,0,0,param_5,&DAT_11892e78,param_6,param_7);
  return;
}


// Reference entry 11269b80; body size 45 bytes.
#line 1 "ENTRY_11269b80"

void __stdcall FUN_11269b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  thunk_FUN_11269bc0(param_1,param_2,param_3,param_4,0,0,param_5,&DAT_1189dca4,param_6,param_7);
  return;
}


// Reference entry 1126b940; body size 22 bytes.
#line 1 "ENTRY_1126b940"

undefined4 __thiscall Recovered_Bulk::FUN_1126b940(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 <= *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 0xc) = param_2;
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1126bf20; body size 43 bytes.
#line 1 "ENTRY_1126bf20"

void FUN_1126bf20(void)

{
  thunk_FUN_112960d0();
  thunk_FUN_11297ec0();
  thunk_FUN_11408fc0();
  thunk_FUN_112ef180();
  DAT_122f5de0 = (int)(0);
  thunk_FUN_11248330();
  FUN_1007d574();
  return;
}


// Reference entry 1126bf60; body size 17 bytes.
#line 1 "ENTRY_1126bf60"

void __fastcall FUN_1126bf60(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0xc))();
  return;
}


// Reference entry 1126bf80; body size 23 bytes.
#line 1 "ENTRY_1126bf80"

undefined4 __thiscall Recovered_Bulk::FUN_1126bf80(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(int *)(param_1 + 0xc) + param_2);
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  if (uVar2 <= *(uint *)(param_1 + 8)) {
    uVar1 = (uint)(uVar2);
  }
  *(uint *)(param_1 + 0xc) = uVar1;
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 1126ca20; body size 58 bytes.
#line 1 "ENTRY_1126ca20"

uint __thiscall Recovered_Bulk::FUN_1126ca20(void *param_2,uint param_3)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  uint in_EAX;
  
  if (param_3 < *(uint *)(param_1 + 8)) {
    memcpy(*(void **)(param_1 + 4),param_2,param_3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3;
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 4));
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - param_3;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
    *puVar1 = (undefined1)(0);
    return (uint)(((uint)((int3)((uint)puVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1126cb20; body size 17 bytes.
#line 1 "ENTRY_1126cb20"

void __fastcall FUN_1126cb20(int param_1)

{
                    
                    
  (**(code **)(*(int *)(param_1 + 0x8554) + 4))();
  return;
}


// Reference entry 1126cb40; body size 53 bytes.
#line 1 "ENTRY_1126cb40"

undefined4 __thiscall Recovered_Bulk::FUN_1126cb40(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  if (param_1[0x215a] == 0) {
    cVar1 = (char)((**(code **)(*param_1 + 0x48))(param_2,param_3));
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
    param_1[0x215a] = (int)(-0x7ffffff9);
  }
  return (undefined4)(0);
}


// Reference entry 1126d350; body size 57 bytes.
#line 1 "ENTRY_1126d350"

void __stdcall FUN_1126d350(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_1126d350(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x38);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 1126d3a0; body size 59 bytes.
#line 1 "ENTRY_1126d3a0"

int __thiscall Recovered_Bulk::FUN_1126d3a0(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1126d6d0(local_c,param_2);
  if (((*(char *)(local_4 + 0xd) != '\0') || (*param_2 < *(uint *)(local_4 + 0x10))) ||
     ((*param_2 == *(uint *)(local_4 + 0x10) && (param_2[1] < *(uint *)(local_4 + 0x14))))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 1126dd90; body size 48 bytes.
#line 1 "ENTRY_1126dd90"

undefined4 * __fastcall FUN_1126dd90(undefined4 *param_1)

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


// Reference entry 1126e750; body size 58 bytes.
#line 1 "ENTRY_1126e750"

int FUN_1126e750(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(*param_1);
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if (uVar1 < *param_2) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  if (uVar1 == *param_2) {
    return (int)(((uint)((int3)(param_1[1] >> 8)) << 8 | (uint)(param_1[1] < param_2[1])));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 1126efa0; body size 30 bytes.
#line 1 "ENTRY_1126efa0"

int FUN_1126efa0(int param_1)

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


// Reference entry 11270240; body size 41 bytes.
#line 1 "ENTRY_11270240"

void __thiscall Recovered_Bulk::FUN_11270240(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  __time64_t _Var1;
  
  _Var1 = (__time64_t)(_time64((__time64_t *)0x0));
  (**(code **)(*param_1 + 8))(param_2,param_3,_Var1,0);
  return;
}


// Reference entry 11270ae0; body size 22 bytes.
#line 1 "ENTRY_11270ae0"

void __fastcall FUN_11270ae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSearchNotifyHandler);
  if (param_1[3] != -1) {
    Ordinal_3(param_1[3]);
  }
  return;
}


// Reference entry 11270b00; body size 48 bytes.
#line 1 "ENTRY_11270b00"

undefined4 * __thiscall Recovered_Bulk::FUN_11270b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSearchNotifyHandler);
  if (param_1[3] != -1) {
    Ordinal_3(param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11270b40; body size 48 bytes.
#line 1 "ENTRY_11270b40"

undefined4 * __thiscall Recovered_Bulk::FUN_11270b40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMSearchNotifyHandler);
  if (param_1[3] != -1) {
    Ordinal_3(param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11272c50; body size 47 bytes.
#line 1 "ENTRY_11272c50"

void __fastcall FUN_11272c50(int param_1)

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


// Reference entry 11273960; body size 58 bytes.
#line 1 "ENTRY_11273960"

void FUN_11273960(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)(*param_1);
  if (cVar1 == '\0') {
    *param_2 = (char)('\0');
    return;
  }
  iVar2 = (int)(0);
  do {
    if (param_3 + -1 <= iVar2) break;
    if ((cVar1 != '.') && (cVar1 != '-')) {
      *param_2 = (char)(cVar1);
      param_2 = (char *)(param_2 + 1);
      iVar2 = (int)(iVar2 + 1);
    }
    cVar1 = (char)(param_1[1]);
    param_1 = (char *)(param_1 + 1);
  } while (cVar1 != '\0');
  *param_2 = (char)('\0');
  return;
}


// Reference entry 112739b0; body size 28 bytes.
#line 1 "ENTRY_112739b0"

void FUN_112739b0(uint *param_1,int param_2)

{
  *param_1 = (uint)((uint)*(byte *)(param_2 + 1));
  param_1[1] = (uint)((uint)*(byte *)(param_2 + 2));
  param_1[2] = (uint)(*(uint *)(param_2 + 4));
  return;
}


// Reference entry 112739e0; body size 51 bytes.
#line 1 "ENTRY_112739e0"

void FUN_112739e0(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)(strchr(param_1,0x2d));
  if (pcVar1 != (char *)0x0) {
    pcVar2 = (char *)(pcVar1 + 6);
    while ((pcVar1 = pcVar1 + 1, pcVar1 < pcVar2 && ((byte)(*pcVar1 - 0x30U) < 10))) {
      *pcVar1 = (char)('0');
    }
  }
  return;
}


// Reference entry 11273ef0; body size 50 bytes.
#line 1 "ENTRY_11273ef0"

/* WARNING: Switch with 1 destination removed at 0x11273f0c : 6 cases all go to same destination */ void __thiscall Recovered_Bulk::FUN_11273ef0(undefined4 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = (undefined4)((undefined4)*param_1);
  uStack_4 = (undefined4)((undefined4)((ulonglong)*param_1 >> 0x20));
  *param_2 = (undefined4)(local_8);
  param_2[1] = (undefined4)(uStack_4);
  return;
}


// Reference entry 11274040; body size 56 bytes.
#line 1 "ENTRY_11274040"

undefined4 * __thiscall Recovered_Bulk::FUN_11274040(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *(undefined1 *)(param_1 + 0x405) = param_2;
  param_1[2] = (undefined4)(param_1 + 5);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlBuffer);
  param_1[3] = (undefined4)(0x1000);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 112740e0; body size 51 bytes.
#line 1 "ENTRY_112740e0"

undefined4 * __thiscall Recovered_Bulk::FUN_112740e0(undefined1 *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[3] = (undefined4)(param_3);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlStaticBuffer);
  param_1[2] = (undefined4)(param_2);
  param_1[4] = (undefined4)(0);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_2 = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 11274140; body size 30 bytes.
#line 1 "ENTRY_11274140"

undefined4 * __thiscall Recovered_Bulk::FUN_11274140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RxmlWritableStreamWriter);
  return (undefined4 *)(param_1);
}


// Reference entry 11274170; body size 36 bytes.
#line 1 "ENTRY_11274170"

void __fastcall FUN_11274170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlBuffer);
  if ((undefined4 *)param_1[2] != param_1 + 5) {
    free((undefined4 *)param_1[2]);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlWriter);
  return;
}


// Reference entry 112741e0; body size 61 bytes.
#line 1 "ENTRY_112741e0"

undefined4 * __thiscall Recovered_Bulk::FUN_112741e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlBuffer);
  if ((undefined4 *)param_1[2] != param_1 + 5) {
    free((undefined4 *)param_1[2]);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RXmlWriter);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1018);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112742f0; body size 58 bytes.
#line 1 "ENTRY_112742f0"

void __fastcall FUN_112742f0(int param_1)

{
  undefined1 *puVar1;
  undefined1 *_Memory;
  
  _Memory = (undefined1 *)(*(undefined1 **)(param_1 + 8));
  puVar1 = (undefined1 *)((undefined1 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0xc) = 0x1000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((undefined1 *)(_Memory) != puVar1) {
    free(_Memory);
    *(undefined1 **)(param_1 + 8) = puVar1;
    puVar1[*(int *)(param_1 + 0x10)] = (undefined1)(0);
    return;
  }
  *_Memory = (undefined1)(0);
  return;
}


// Reference entry 11274540; body size 41 bytes.
#line 1 "ENTRY_11274540"

void __thiscall Recovered_Bulk::FUN_11274540(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  (**(code **)(*param_1 + 8))(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 112747a0; body size 24 bytes.
#line 1 "ENTRY_112747a0"

void __stdcall FUN_112747a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_112743a0(param_1,param_2,param_3,1,0);
  return;
}


// Reference entry 11274a70; body size 41 bytes.
#line 1 "ENTRY_11274a70"

void __thiscall Recovered_Bulk::FUN_11274a70(char *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  (**(code **)(*param_1 + 4))(param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}


// Reference entry 11274b30; body size 24 bytes.
#line 1 "ENTRY_11274b30"

void __stdcall FUN_11274b30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_112743a0(param_1,param_2,param_3,0,0);
  return;
}


// Reference entry 112765b0; body size 48 bytes.
#line 1 "ENTRY_112765b0"

void __fastcall FUN_112765b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileLoader);
  param_1[0x14a] = (undefined4)((uint)&ghidra_vftable_RReportCategoryInfo);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RReportUploaderInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RReportFileParser);
  FUN_1003d5d7();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportFileParserCB);
  return;
}


// Reference entry 11276e20; body size 36 bytes.
#line 1 "ENTRY_11276e20"

void __fastcall FUN_11276e20(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_1 + 0x528);
  *(undefined2 *)(param_1 + 0x52c) = 0;
  *(undefined1 *)(param_1 + 0x62e) = 0;
  return;
}


// Reference entry 11277fc0; body size 52 bytes.
#line 1 "ENTRY_11277fc0"

char __fastcall FUN_11277fc0(int param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(*(int *)(param_1 + 0x118) != 0);
  if (bVar1) {
    thunk_FUN_112752d0();
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    thunk_FUN_112752d0();
    return (char)(bVar1 + '\x01');
  }
  return (char)(bVar1);
}


// Reference entry 11278b20; body size 40 bytes.
#line 1 "ENTRY_11278b20"

void __thiscall Recovered_Bulk::FUN_11278b20(char *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 unaff_EDI;
  void *pvStack_10;
  undefined1 *puStack_c;
  char *pcStack_8;
  
  if (*(int *)(param_1 + 0x118) != 0) {
    pcStack_8 = (char *)(param_2);
    puStack_c = (undefined1 *)((undefined1 *)0x11278b36);
    thunk_FUN_11275f40();
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
    return;
  }
  pcStack_8 = (char *)((char *)0xffffffff);

  iVar1 = (int)(*(int *)(param_1 + 0x11c) + 0x164);
  cVar3 = (char)(thunk_FUN_112a7f50(iVar1,DAT_12126b84 ,unaff_EDI));
  pcStack_8 = (char *)((char *)0x0);
  pcVar5 = (char *)("");
  if (param_2 != (char *)0x0) {
    pcVar5 = (char *)(param_2);
  }
  pcVar4 = (char *)(pcVar5);
  do {
    cVar2 = (char)(*pcVar4);
    pcVar4 = (char *)(pcVar4 + 1);
  } while (cVar2 != '\0');
  thunk_FUN_1012d130(pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  if (cVar3 != '\0') {
    thunk_FUN_112a8010(iVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 11278b70; body size 63 bytes.
#line 1 "ENTRY_11278b70"

char __fastcall FUN_11278b70(int param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(*(int *)(param_1 + 0x118) != 0);
  if (bVar1) {
    thunk_FUN_11276000(param_1 + 0x121);
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    thunk_FUN_11276000(param_1 + 0x121);
    return (char)(bVar1 + '\x01');
  }
  return (char)(bVar1);
}


// Reference entry 11279fe0; body size 43 bytes.
#line 1 "ENTRY_11279fe0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_11279fe0(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = (undefined8)(_UNK_119d7b28);
  uVar1 = (undefined8)(_DAT_119d7b20);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(1);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 10) = uVar1;
  param_1[0xc] = (undefined4)(0xffffffff);
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 *)(param_1);
}


// Reference entry 1127a220; body size 31 bytes.
#line 1 "ENTRY_1127a220"

undefined * FUN_1127a220(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0x12) {
    return (undefined *)((&PTR_DAT_12120e30)[param_1]);
  }
  puVar1 = (undefined *)(&DAT_1194bf40);
  if (param_1 != 0xffffffff) {
    puVar1 = (undefined *)((undefined *)0x0);
  }
  return (undefined *)(puVar1);
}


// Reference entry 1127a280; body size 37 bytes.
#line 1 "ENTRY_1127a280"

undefined1 __thiscall Recovered_Bulk::FUN_1127a280(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(0);
  do {
    if (*(int *)(param_1 + uVar1 * 4) == param_2) {
      return (undefined1)(1);
    }
    uVar1 = (uint)(uVar1 + 1);
  } while (uVar1 < 0xd);
  return (undefined1)(0);
}


// Reference entry 1127a510; body size 31 bytes.
#line 1 "ENTRY_1127a510"

undefined1 * __thiscall Recovered_Bulk::FUN_1127a510(uint param_2)
{
  int param_1 = (int )this;
  if (*(uint *)(param_1 + 4) <= param_2) {
    return (undefined1 *)(&DAT_1186d2ee);
  }
  return (undefined1 *)((undefined1 *)(param_2 * 0x50 + 0x3c + param_1));
}


// Reference entry 1127afa0; body size 60 bytes.
#line 1 "ENTRY_1127afa0"

undefined1 __thiscall Recovered_Bulk::FUN_1127afa0(undefined4 *param_2,int param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[1]);
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[3]);
  *(undefined4 *)(param_1 + param_3 * 0x50 + 8) = *param_2;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x14) = uVar3;
  uVar1 = (undefined4)(param_2[5]);
  uVar2 = (undefined4)(param_2[6]);
  uVar3 = (undefined4)(param_2[7]);
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x18) = param_2[4];
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x24) = uVar3;
  uVar1 = (undefined4)(param_2[9]);
  uVar2 = (undefined4)(param_2[10]);
  uVar3 = (undefined4)(param_2[0xb]);
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x28) = param_2[8];
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x34) = uVar3;
  uVar1 = (undefined4)(param_2[0xd]);
  uVar2 = (undefined4)(param_2[0xe]);
  uVar3 = (undefined4)(param_2[0xf]);
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x38) = param_2[0xc];
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x44) = uVar3;
  uVar1 = (undefined4)(param_2[0x11]);
  uVar2 = (undefined4)(param_2[0x12]);
  uVar3 = (undefined4)(param_2[0x13]);
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x48) = param_2[0x10];
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + param_3 * 0x50 + 0x54) = uVar3;
  return (undefined1)(*param_1);
}


// Reference entry 1127b030; body size 57 bytes.
#line 1 "ENTRY_1127b030"

void __thiscall Recovered_Bulk::FUN_1127b030(char *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char *pcVar1;
  char *pcVar2;
  
  thunk_FUN_1145c250(param_1 + 0x34,param_3,0x19);
  pcVar1 = (char *)(param_2);
  do {
    pcVar2 = (char *)(pcVar1);
    pcVar1 = (char *)(pcVar2 + 1);
  } while (*pcVar2 != '\0');
  thunk_FUN_1127ac70(param_2,pcVar2);
  return;
}


// Reference entry 1127c6d0; body size 39 bytes.
#line 1 "ENTRY_1127c6d0"

undefined1 * FUN_1127c6d0(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (int)(thunk_FUN_1127c4e0(3,param_1));
  if (-1 < iVar1) {
    puVar2 = (undefined1 *)((undefined1 *)thunk_FUN_1127a510(iVar1));
    return (undefined1 *)(puVar2);
  }
  return (undefined1 *)(&DAT_1186d2ee);
}


// Reference entry 1127cc30; body size 18 bytes.
#line 1 "ENTRY_1127cc30"

void FUN_1127cc30(void)

{
 try {
  thunk_FUN_1127bbb0(&stack0x00000004,&stack0x00000008);
  return;

 } catch (...) { }
}


// Reference entry 1127ccf0; body size 28 bytes.
#line 1 "ENTRY_1127ccf0"

undefined4 FUN_1127ccf0(int param_1,int param_2)

{
  if (((param_1 == 0x2b) && (param_2 != 0)) && (param_2 != 0xc)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1127d050; body size 45 bytes.
#line 1 "ENTRY_1127d050"

undefined4 * __fastcall FUN_1127d050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  *(undefined1 *)((int)param_1 + 0x84b) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  param_1[0x223] = (undefined4)(0);
  *(undefined1 *)((int)param_1 + 0x44a) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 1127dee0; body size 37 bytes.
#line 1 "ENTRY_1127dee0"

void __fastcall FUN_1127dee0(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  *(undefined1 *)(param_1 + 0x44a) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x84b) = 0;
  return;
}


// Reference entry 1127e380; body size 40 bytes.
#line 1 "ENTRY_1127e380"

char * FUN_1127e380(int param_1)

{
  if (param_1 == 0) {
    return (char *)("");
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return (char *)((char *)0x0);
    }
    return (char *)("RadioList");
  }
  return (char *)("Software");
}


// Reference entry 11280320; body size 22 bytes.
#line 1 "ENTRY_11280320"

void __stdcall FUN_11280320(undefined4 param_1)

{
  thunk_FUN_1127fa70(&DAT_1186d2ee,&DAT_1186d2ee,param_1);
  return;
}


// Reference entry 11281670; body size 60 bytes.
#line 1 "ENTRY_11281670"

int __thiscall Recovered_Bulk::FUN_11281670(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  thunk_FUN_11281f90(param_2);
  return (int)(param_1);
}


// Reference entry 11281730; body size 48 bytes.
#line 1 "ENTRY_11281730"

undefined4 * __fastcall FUN_11281730(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  _eh_vector_constructor_iterator_(param_1 + 1,0x144,0x100,thunk_FUN_112816c0,thunk_FUN_112818d0);
  return (undefined4 *)(param_1);
}


// Reference entry 11281970; body size 19 bytes.
#line 1 "ENTRY_11281970"

void __fastcall FUN_11281970(undefined4 *param_1)

{
  thunk_FUN_11282620();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServiceListCB);
  return;
}


// Reference entry 11281d20; body size 44 bytes.
#line 1 "ENTRY_11281d20"

undefined4 * __thiscall Recovered_Bulk::FUN_11281d20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11282620();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServiceListCB);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x160);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11283190; body size 62 bytes.
#line 1 "ENTRY_11283190"

void __thiscall Recovered_Bulk::FUN_11283190(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 8) == '\0') {
    thunk_FUN_1145c720(param_2,param_3,"ratingIcon_%u");
    return;
  }
  thunk_FUN_1145c720(param_2,param_3,"ratingIcon_%s_%u",param_1 + 8,*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 11283440; body size 35 bytes.
#line 1 "ENTRY_11283440"

undefined4 __fastcall FUN_11283440(int param_1)

{
  if (((*(char *)(param_1 + 0x12d) != '\x03') && (*(int *)(param_1 + 0x134) != 0x12f)) &&
     (*(int *)(param_1 + 0x134) != 500)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11283ad0; body size 30 bytes.
#line 1 "ENTRY_11283ad0"

void __thiscall Recovered_Bulk::FUN_11283ad0(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined2 *)(param_1 + 0x128) = param_2;
  thunk_FUN_11284370(param_3);
  return;
}


// Reference entry 11283d00; body size 30 bytes.
#line 1 "ENTRY_11283d00"

void __thiscall Recovered_Bulk::FUN_11283d00(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined2 *)(param_1 + 0x126) = param_2;
  thunk_FUN_11284370(param_3);
  return;
}


// Reference entry 11283fc0; body size 27 bytes.
#line 1 "ENTRY_11283fc0"

void __thiscall Recovered_Bulk::FUN_11283fc0(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  *(undefined2 *)(param_1 + 0x124) = param_2;
  thunk_FUN_11284370(param_3);
  return;
}


// Reference entry 112840c0; body size 57 bytes.
#line 1 "ENTRY_112840c0"

uint __thiscall Recovered_Bulk::FUN_112840c0(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (**(uint **)(param_1 + 0x158) == *(uint *)(param_1 + 0x150)) {
    return (uint)(**(uint **)(param_1 + 0x158) & 0xffffff00);
  }
  *(undefined2 *)(*(int *)(param_1 + 0x148) + 0x128) = param_2;
  uVar1 = (uint)(thunk_FUN_11284370(param_3));
  return (uint)(uVar1);
}


// Reference entry 11284310; body size 57 bytes.
#line 1 "ENTRY_11284310"

uint __thiscall Recovered_Bulk::FUN_11284310(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (**(uint **)(param_1 + 0x158) == *(uint *)(param_1 + 0x150)) {
    return (uint)(**(uint **)(param_1 + 0x158) & 0xffffff00);
  }
  *(undefined2 *)(*(int *)(param_1 + 0x148) + 0x126) = param_2;
  uVar1 = (uint)(thunk_FUN_11284370(param_3));
  return (uint)(uVar1);
}


// Reference entry 11285720; body size 54 bytes.
#line 1 "ENTRY_11285720"

uint __thiscall Recovered_Bulk::FUN_11285720(undefined2 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (**(uint **)(param_1 + 0x158) == *(uint *)(param_1 + 0x150)) {
    return (uint)(**(uint **)(param_1 + 0x158) & 0xffffff00);
  }
  *(undefined2 *)(*(int *)(param_1 + 0x148) + 0x124) = param_2;
  uVar1 = (uint)(thunk_FUN_11284370(param_3));
  return (uint)(uVar1);
}


// Reference entry 11286500; body size 45 bytes.
#line 1 "ENTRY_11286500"

void __fastcall FUN_11286500(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x42c));
  if (iVar1 != 0) {
    thunk_FUN_11294d60();
    thunk_FUN_1148a50e(iVar1,0xc);
    *(undefined4 *)(param_1 + 0x42c) = 0;
  }
  return;
}


// Reference entry 112879c0; body size 44 bytes.
#line 1 "ENTRY_112879c0"

uint __thiscall Recovered_Bulk::FUN_112879c0(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x10))());
  if (param_2 < uVar1) {
    return (uint)(uVar1 & 0xffffff00);
  }
  uVar1 = (uint)((**(code **)(*param_1 + 8))(param_2 - uVar1,param_3));
  return (uint)(uVar1);
}


// Reference entry 112882c0; body size 49 bytes.
#line 1 "ENTRY_112882c0"

undefined4 __thiscall Recovered_Bulk::FUN_112882c0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11247e90(param_2,*param_1,param_1[1]));
  if ((uint)param_1[1] <= iVar1 + 3U) {
    return (undefined4)(0);
  }
  *param_1 = (int)(*param_1 + iVar1);
  param_1[1] = (int)(param_1[1] - iVar1);
  return (undefined4)(1);
}


// Reference entry 11288300; body size 46 bytes.
#line 1 "ENTRY_11288300"

undefined4 __thiscall Recovered_Bulk::FUN_11288300(undefined4 param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_1145c250(*param_1,param_2,param_1[1]));
  if ((uint)param_1[1] <= uVar1) {
    return (undefined4)(0);
  }
  *param_1 = (int)(*param_1 + uVar1);
  param_1[1] = (int)(param_1[1] - uVar1);
  return (undefined4)(1);
}


// Reference entry 11289300; body size 47 bytes.
#line 1 "ENTRY_11289300"

undefined4 * __thiscall Recovered_Bulk::FUN_11289300(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11287870();
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMemoryBufferStream);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 112893b0; body size 56 bytes.
#line 1 "ENTRY_112893b0"

void __thiscall Recovered_Bulk::FUN_112893b0(void *param_2,uint *param_3)
{
  int param_1 = (int )this;
  uint _Size;
  
  _Size = (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc));
  if (*param_3 <= _Size) {
    _Size = (uint)(*param_3);
  }
  if (_Size != 0) {
    memcpy(param_2,(void *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)),_Size);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + _Size;
  }
  *param_3 = (uint)(_Size);
  return;
}


// Reference entry 11289400; body size 22 bytes.
#line 1 "ENTRY_11289400"

undefined4 __thiscall Recovered_Bulk::FUN_11289400(uint param_2)
{
  int param_1 = (int )this;
  if (param_2 <= *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 0xc) = param_2;
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11289420; body size 26 bytes.
#line 1 "ENTRY_11289420"

uint __thiscall Recovered_Bulk::FUN_11289420(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 8));
  if (param_2 <= uVar1) {
    *(uint *)(param_1 + 0xc) = uVar1 - param_2;
    return (uint)(((uint)((int3)(uVar1 - param_2 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 11289440; body size 25 bytes.
#line 1 "ENTRY_11289440"

int __thiscall Recovered_Bulk::FUN_11289440(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(param_2 + *(int *)(param_1 + 0xc));
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if (*(uint *)(param_1 + 8) < uVar1) {
    return (int)((uint)uVar2 << 8);
  }
  *(uint *)(param_1 + 0xc) = uVar1;
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 1128abd0; body size 35 bytes.
#line 1 "ENTRY_1128abd0"

undefined4 * __fastcall FUN_1128abd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(5);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 1128af90; body size 26 bytes.
#line 1 "ENTRY_1128af90"

int __thiscall Recovered_Bulk::FUN_1128af90(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)((**(code **)**(undefined4 **)(param_1 + 0xca0))());
  return (int)(*(int *)(iVar1 + 8) + param_2 * 0x24);
}


// Reference entry 1128e030; body size 52 bytes.
#line 1 "ENTRY_1128e030"

undefined4 __fastcall FUN_1128e030(int param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = (uint)(0);
  pbVar2 = (byte *)((byte *)(param_1 + 0xcd9));
  while( true ) {
    cVar1 = (char)(thunk_FUN_1128c260());
    if ((cVar1 != '\0') && ((*pbVar2 & 2) != 0)) break;
    uVar3 = (uint)(uVar3 + 1);
    pbVar2 = (byte *)(pbVar2 + 0x24);
    if (3 < uVar3) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 1128f310; body size 33 bytes.
#line 1 "ENTRY_1128f310"

undefined4 * __fastcall FUN_1128f310(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_MusicPlaybackQuality);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 11291db0; body size 50 bytes.
#line 1 "ENTRY_11291db0"

undefined4 * __thiscall Recovered_Bulk::FUN_11291db0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedStringDecoder);
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = (undefined4)(0);
  thunk_FUN_1145e270(param_1 + 4);
  param_1[7] = (undefined4)(param_2);
  (**(code **)(*param_2 + 8))();
  return (undefined4 *)(param_1);
}


// Reference entry 11291df0; body size 45 bytes.
#line 1 "ENTRY_11291df0"

undefined4 * __thiscall Recovered_Bulk::FUN_11291df0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REncryptedStringEncoder);
  *(undefined2 *)(param_1 + 1) = 0x101;
  thunk_FUN_1145ed60(param_1 + 2);
  param_1[5] = (undefined4)(param_2);
  (**(code **)(*param_2 + 8))();
  return (undefined4 *)(param_1);
}


// Reference entry 112929b0; body size 47 bytes.
#line 1 "ENTRY_112929b0"

undefined4 __fastcall FUN_112929b0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0xc))());
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_1145e260(param_1 + 0x10));
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 112929f0; body size 47 bytes.
#line 1 "ENTRY_112929f0"

undefined4 __fastcall FUN_112929f0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0xc))());
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_1145eb60(param_1 + 8));
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 11292a30; body size 35 bytes.
#line 1 "ENTRY_11292a30"

void __fastcall FUN_11292a30(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  thunk_FUN_1145e270(param_1 + 0x10);
                    
                    
  (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  return;
}


// Reference entry 11292a60; body size 30 bytes.
#line 1 "ENTRY_11292a60"

void __fastcall FUN_11292a60(int param_1)

{
  *(undefined2 *)(param_1 + 4) = 0x101;
  thunk_FUN_1145ed60(param_1 + 8);
                    
                    
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  return;
}


// Reference entry 11292af0; body size 45 bytes.
#line 1 "ENTRY_11292af0"

undefined4 * __fastcall FUN_11292af0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUsageDataSharing);
  param_1[1] = (undefined4)(0xffffffff);
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[0xb] = (undefined4)(2);
  thunk_FUN_112a9cf0(param_1 + 0xc);
  return (undefined4 *)(param_1);
}


// Reference entry 11292dc0; body size 43 bytes.
#line 1 "ENTRY_11292dc0"

bool __fastcall FUN_11292dc0(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x30));
  iVar1 = (int)(*(int *)(param_1 + 4));
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x30);
  }
  return (bool)(iVar1 == 0);
}


// Reference entry 112937c0; body size 40 bytes.
#line 1 "ENTRY_112937c0"

undefined4 * __thiscall Recovered_Bulk::FUN_112937c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11287860();
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReadFileStream);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 112938b0; body size 27 bytes.
#line 1 "ENTRY_112938b0"

bool __thiscall Recovered_Bulk::FUN_112938b0(long param_2)
{
  int param_1 = (int )this;
  long lVar1;
  
  lVar1 = (long)(_lseek(*(int *)(param_1 + 4),param_2,0));
  return (bool)(lVar1 != -1);
}


// Reference entry 112938e0; body size 27 bytes.
#line 1 "ENTRY_112938e0"

bool __thiscall Recovered_Bulk::FUN_112938e0(long param_2)
{
  int param_1 = (int )this;
  long lVar1;
  
  lVar1 = (long)(_lseek(*(int *)(param_1 + 4),param_2,1));
  return (bool)(lVar1 != -1);
}


// Reference entry 11293aa0; body size 47 bytes.
#line 1 "ENTRY_11293aa0"

int FUN_11293aa0(void)

{
  int local_8;
  int local_4;
  
  thunk_FUN_1145c930(&local_8,0);
  return (int)(local_4 / 1000 + local_8 * 1000);
}


// Reference entry 11293e20; body size 54 bytes.
#line 1 "ENTRY_11293e20"

void FUN_11293e20(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  thunk_FUN_1145c930(param_1,0);
  uVar1 = (undefined4)(param_1[1]);
  *param_3 = (undefined4)(*param_1);
  param_3[1] = (undefined4)(uVar1);
  thunk_FUN_1145ad70(param_1,param_2);
  thunk_FUN_1145ad70(param_3,param_4);
  return;
}


// Reference entry 112942e0; body size 57 bytes.
#line 1 "ENTRY_112942e0"

void __stdcall FUN_112942e0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_112942e0(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x18);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 11294820; body size 48 bytes.
#line 1 "ENTRY_11294820"

undefined4 * __fastcall FUN_11294820(undefined4 *param_1)

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


// Reference entry 112949a0; body size 57 bytes.
#line 1 "ENTRY_112949a0"

undefined4 * __thiscall Recovered_Bulk::FUN_112949a0(int param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)(0x1000000);
  param_1[2] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_112effc0(param_3,param_1 + 1);
    thunk_FUN_112eeea0(param_1[2]);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 112949f0; body size 57 bytes.
#line 1 "ENTRY_112949f0"

undefined4 * __fastcall FUN_112949f0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0x1000000);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  pvVar1 = (void *)(malloc(0xc0));
  param_1[1] = (undefined4)(pvVar1);
  thunk_FUN_113daff0(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 11297630; body size 24 bytes.
#line 1 "ENTRY_11297630"

void FUN_11297630(undefined4 param_1)

{
  thunk_FUN_11296ca0(param_1);
  thunk_FUN_11298430();
  thunk_FUN_112983c0();
  return;
}


// Reference entry 112983c0; body size 43 bytes.
#line 1 "ENTRY_112983c0"

void __fastcall FUN_112983c0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 4));
  thunk_FUN_11298310();
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 4);
  }
  return;
}


// Reference entry 11299740; body size 43 bytes.
#line 1 "ENTRY_11299740"

undefined4 FUN_11299740(int param_1)

{
  if (param_1 == 2) {
    return (undefined4)(0x81000008);
  }
  if (param_1 != 0xd) {
    if (param_1 != 0x8c) {
      return (undefined4)(0x80000002);
    }
    return (undefined4)(0x80000026);
  }
  return (undefined4)(0x81000009);
}


// Reference entry 11299c80; body size 27 bytes.
#line 1 "ENTRY_11299c80"

undefined4 FUN_11299c80(uint param_1)

{
  if ((-1 < (int)param_1) && (param_1 < 10)) {
    return (undefined4)(*(undefined4 *)(&DAT_12121d88 + param_1 * 4));
  }
  return (undefined4)(0xb);
}


// Reference entry 11299d40; body size 19 bytes.
#line 1 "ENTRY_11299d40"

bool FUN_11299d40(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_11248b40(0x12));
  return (bool)(cVar1 != '\0');
}


// Reference entry 1129b080; body size 42 bytes.
#line 1 "ENTRY_1129b080"

undefined4 * __fastcall FUN_1129b080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_ChunkLengthParser);
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1129b2a0; body size 34 bytes.
#line 1 "ENTRY_1129b2a0"

void __fastcall FUN_1129b2a0(int param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// Reference entry 1129bb20; body size 63 bytes.
#line 1 "ENTRY_1129bb20"

undefined4 FUN_1129bb20(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = (char)(*param_1);
  pcVar3 = (char *)(param_1);
  while( true ) {
    if (cVar1 == '\0') {
      thunk_FUN_1145c460(param_1,param_2);
      return (undefined4)(1);
    }
    iVar2 = (int)(isalpha((int)*param_1));
    if (iVar2 != 0) break;
    pcVar3 = (char *)(pcVar3 + 1);
    cVar1 = (char)(*pcVar3);
  }
  return (undefined4)(0);
}


// Reference entry 1129c130; body size 54 bytes.
#line 1 "ENTRY_1129c130"

undefined4 * __thiscall Recovered_Bulk::FUN_1129c130(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    (**(code **)*param_1)(0);
  }
  *(undefined1 *)(param_1 + 6) = 0xff;
  uVar1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(uVar1);
  *(undefined1 *)(param_1 + 6) = 1;
  return (undefined4 *)(param_1);
}


// Reference entry 1129c7e0; body size 36 bytes.
#line 1 "ENTRY_1129c7e0"

void __fastcall FUN_1129c7e0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 6) != -1) {
    switch(*(char *)(param_1 + 6)) {
    case '\0':
      (**(code **)*param_1)(0);
    }
  }
  return;
}


// Reference entry 1129cdc0; body size 56 bytes.
#line 1 "ENTRY_1129cdc0"

undefined4 * __thiscall Recovered_Bulk::FUN_1129cdc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (*(char *)(param_1 + 6) != -1) {
    switch(*(char *)(param_1 + 6)) {
    case '\0':
      (**(code **)*param_1)(0);
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1129d2a0; body size 35 bytes.
#line 1 "ENTRY_1129d2a0"

void FUN_1129d2a0(undefined1 param_1,undefined4 *param_2)

{
  switch(param_1) {
  case 0:
    (**(code **)*param_2)(0);
  }
  return;
}


// Reference entry 1129e050; body size 38 bytes.
#line 1 "ENTRY_1129e050"

void FUN_1129e050(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0xc) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0xc));
    }
    free(param_1);
  }
  return;
}


// Reference entry 1129e0d0; body size 53 bytes.
#line 1 "ENTRY_1129e0d0"

void FUN_1129e0d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(malloc(0x10));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(param_2);
    puVar1[3] = (undefined4)(0);
    if (param_1 < 0) {
      param_1 = (int)(1);
    }
    puVar1[2] = (undefined4)(0);
    puVar1[1] = (undefined4)(param_1);
  }
  return;
}


// Reference entry 1129e4e0; body size 34 bytes.
#line 1 "ENTRY_1129e4e0"

undefined4 FUN_1129e4e0(int *param_1,int param_2)

{
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < (int)(uint)*(ushort *)(param_1 + 1))
     ) {
    return (undefined4)(*(undefined4 *)(*param_1 + param_2 * 4));
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 1129e510; body size 23 bytes.
#line 1 "ENTRY_1129e510"

void FUN_1129e510(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }
  return;
}


// Reference entry 1129e530; body size 27 bytes.
#line 1 "ENTRY_1129e530"

void FUN_1129e530(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(1);
  }
  return;
}


// Reference entry 1129e790; body size 55 bytes.
#line 1 "ENTRY_1129e790"

void FUN_1129e790(undefined4 *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (param_1 != (undefined4 *)0x0) {
    _Memory = (void *)((void *)*param_1);
    while (_Memory != (void *)0x0) {
      pvVar1 = (void *)(*(void **)((int)_Memory + 8));
      free(_Memory);
      _Memory = (void *)(pvVar1);
    }
    thunk_FUN_112a7f20();
    return;
  }
  return;
}


// Reference entry 1129e8e0; body size 48 bytes.
#line 1 "ENTRY_1129e8e0"

void FUN_1129e8e0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(malloc(param_1 + 0x10));
  if (piVar1 != (int *)0x0) {
    piVar1[2] = (int)(0);
    *piVar1 = (int)((int)(piVar1 + 4));
    piVar1[1] = (int)((int)(piVar1 + 4) + param_1);
    piVar1[3] = (int)(0);
  }
  return;
}


// Reference entry 1129ee10; body size 29 bytes.
#line 1 "ENTRY_1129ee10"

void FUN_1129ee10(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
  }
  return;
}


// Reference entry 1129eea0; body size 56 bytes.
#line 1 "ENTRY_1129eea0"

bool FUN_1129eea0(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return (bool)(false);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
    param_1[5] = (int)(0);
  }
  iVar1 = (int)(_close(*param_1));
  return (bool)(iVar1 != -1);
}


// Reference entry 1129eef0; body size 17 bytes.
#line 1 "ENTRY_1129eef0"

void FUN_1129eef0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FindClose((HANDLE)*param_1);
  }
  return;
}


// Reference entry 112a0060; body size 56 bytes.
#line 1 "ENTRY_112a0060"

int FUN_112a0060(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_1[5] - param_2[5]);
  if ((((iVar1 == 0) && (iVar1 = param_1[4] - param_2[4], iVar1 == 0)) &&
      (iVar1 = param_1[3] - param_2[3], iVar1 == 0)) &&
     ((iVar1 = param_1[2] - param_2[2], iVar1 == 0 && (iVar1 = param_1[1] - param_2[1], iVar1 == 0))
     )) {
    return (int)(*param_1 - *param_2);
  }
  return (int)(iVar1);
}


// Reference entry 112a0ac0; body size 37 bytes.
#line 1 "ENTRY_112a0ac0"

int FUN_112a0ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(thunk_FUN_1129fa70(*(undefined4 *)(param_1 + 0x70),param_2,param_3,param_4));
  iVar2 = (int)(0);
  if (-1 < iVar1) {
    iVar2 = (int)(iVar1);
  }
  return (int)(iVar2);
}


// Reference entry 112a0af0; body size 59 bytes.
#line 1 "ENTRY_112a0af0"

char * FUN_112a0af0(ushort param_1)

{
  ushort uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)(&DAT_119e7b58);
  if (99 < param_1) {
    uVar1 = (ushort)(100);
    do {
      if (uVar1 == 0) {
        return (char *)("No Reason");
      }
      if (uVar1 == param_1) {
        return (char *)(*(char **)(puVar2 + 4));
      }
      uVar1 = (ushort)(*(ushort *)(puVar2 + 8));
      puVar2 = (undefined *)(puVar2 + 8);
    } while (uVar1 <= param_1);
  }
  return (char *)("No Reason");
}


// Reference entry 112a0c30; body size 51 bytes.
#line 1 "ENTRY_112a0c30"

undefined4 FUN_112a0c30(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0xb8) != '\0') && (*(int *)(param_1 + 0xb4) != 0)) {
    *(undefined1 *)(param_1 + 0xb8) = 0;
    uVar1 = (undefined4)(thunk_FUN_1129fc20(*(undefined4 *)(param_1 + 0x70),"0\r\n\r\n",5));
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 112a1060; body size 40 bytes.
#line 1 "ENTRY_112a1060"

uint FUN_112a1060(undefined4 *param_1)

{
  char cVar1;
  uint in_EAX;
  char *pcVar2;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (pcVar2 = (char *)*param_1, in_EAX = 0, pcVar2 != (char *)0x0)) {
    for (; (cVar1 = (char)(*pcVar2, cVar1 == '\t' || (cVar1 == ' '))); pcVar2 = pcVar2 + 1) {
    }
    *param_1 = (undefined4)(pcVar2);
    return (uint)(((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(cVar1 == '\0')));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 112a1350; body size 21 bytes.
#line 1 "ENTRY_112a1350"

void FUN_112a1350(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  thunk_FUN_1129ec00();
  return;
}


// Reference entry 112a2890; body size 46 bytes.
#line 1 "ENTRY_112a2890"

void FUN_112a2890(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113b9ec0(param_2,"connection"));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 100) = 1;
  }
  thunk_FUN_1129e920();
  return;
}


// Reference entry 112a28d0; body size 54 bytes.
#line 1 "ENTRY_112a28d0"

undefined4 FUN_112a28d0(int param_1)

{
  if ((*(char *)(param_1 + 0x75) != '\0') && (*(char *)(param_1 + 0x74) != '\0')) {
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined1 *)(param_1 + 0xb8) = 1;
    return (undefined4)(1);
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return (undefined4)(1);
}


// Reference entry 112a2b30; body size 56 bytes.
#line 1 "ENTRY_112a2b30"

void FUN_112a2b30(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(_errno());
  if (*piVar1 == 2) {
    *(undefined2 *)(param_1 + 0x3c) = 0x194;
    return;
  }
  if (*piVar1 != 0xd) {
    *(undefined2 *)(param_1 + 0x3c) = 500;
    return;
  }
  *(undefined2 *)(param_1 + 0x3c) = 0x193;
  return;
}


// Reference entry 112a3190; body size 32 bytes.
#line 1 "ENTRY_112a3190"

undefined4 FUN_112a3190(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(uint)*(ushort *)(param_1 + 4) <= param_2) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(thunk_FUN_1129e4e0());
  return (undefined4)(uVar1);
}


// Reference entry 112a31c0; body size 47 bytes.
#line 1 "ENTRY_112a31c0"

undefined4 FUN_112a31c0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1129e4e0(param_1,*(ushort *)(param_1 + 4) - 1));
  if ((*(short *)(param_1 + 4) != 0) && ((*piVar1 == 0 || (piVar1[1] == 0)))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 112a3470; body size 33 bytes.
#line 1 "ENTRY_112a3470"

undefined4 FUN_112a3470(int param_1)

{
  undefined4 uVar1;
  
  if ((int)(uint)DAT_122f697c <= param_1) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(thunk_FUN_1129e4e0(&DAT_122f6978,param_1));
  return (undefined4)(uVar1);
}


// Reference entry 112a5340; body size 56 bytes.
#line 1 "ENTRY_112a5340"

void FUN_112a5340(int param_1)

{
  if (param_1 != 0) {
    if (*(short *)(param_1 + 0xba) != 0) {
      thunk_FUN_112a9690(param_1 + 0x30);
    }
    if (*(short *)(param_1 + 0xbc) != 0) {
      thunk_FUN_112a9690();
      return;
    }
  }
  return;
}


// Reference entry 112a7b20; body size 61 bytes.
#line 1 "ENTRY_112a7b20"

undefined4 FUN_112a7b20(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    param_1[9] = (int)(1);
    ReleaseSemaphore((HANDLE)param_1[7],*param_1,(LPLONG)0x0);
    WaitForSingleObject(param_1 + 8,0xffffffff);
    param_1[9] = (int)(0);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 112a7c30; body size 45 bytes.
#line 1 "ENTRY_112a7c30"

undefined4 FUN_112a7c30(int param_1)

{
  if (param_1 == 0) {
    return (undefined4)(0);
  }
  CloseHandle(*(HANDLE *)(param_1 + 0x20));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  CloseHandle(*(HANDLE *)(param_1 + 0x1c));
  return (undefined4)(1);
}


// Reference entry 112a7f20; body size 37 bytes.
#line 1 "ENTRY_112a7f20"

void FUN_112a7f20(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && ((HANDLE)*param_1 != (HANDLE)0x0)) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 112a8cc0; body size 61 bytes.
#line 1 "ENTRY_112a8cc0"

void FUN_112a8cc0(void)

{
  undefined1 local_194 [400];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_194);
  Ordinal_115(0x202,local_194);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 112a9120; body size 33 bytes.
#line 1 "ENTRY_112a9120"

undefined4 FUN_112a9120(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = (undefined4)(FUN_112a8970());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 112a94d0; body size 31 bytes.
#line 1 "ENTRY_112a94d0"

void FUN_112a94d0(int param_1)

{
 try {
  if (param_1 != 0) {
    FUN_112a9570(param_1,&stack0x00000008);
                    
    exit(1);
  }
  return;

 } catch (...) { }
}


// Reference entry 112a97a0; body size 22 bytes.
#line 1 "ENTRY_112a97a0"

void FUN_112a97a0(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && ((HANDLE)*param_1 != (HANDLE)0x0)) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}


// Reference entry 112a97e0; body size 17 bytes.
#line 1 "ENTRY_112a97e0"

void FUN_112a97e0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    SetEvent((HANDLE)*param_1);
  }
  return;
}


// Reference entry 112a9800; body size 17 bytes.
#line 1 "ENTRY_112a9800"

void FUN_112a9800(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    ResetEvent((HANDLE)*param_1);
  }
  return;
}


// Reference entry 112a9f10; body size 33 bytes.
#line 1 "ENTRY_112a9f10"

undefined4 FUN_112a9f10(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    return (undefined4)(0);
  }
  if ((*(char *)(param_1 + 0x60) == '\0') && (cVar1 = FUN_112a9f40(param_1), cVar1 == '\0')) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 112aae70; body size 40 bytes.
#line 1 "ENTRY_112aae70"

char * FUN_112aae70(uint param_1)

{
  char *pcVar1;
  
  if ((param_1 & 2) != 0) {
    return (char *)("application/octet");
  }
  if ((param_1 & 4) != 0) {
    return (char *)("text/plain");
  }
  pcVar1 = (char *)("text/html");
  if ((param_1 & 8) == 0) {
    pcVar1 = (char *)("text/xml");
  }
  return (char *)(pcVar1);
}


// Reference entry 112ab370; body size 41 bytes.
#line 1 "ENTRY_112ab370"

void FUN_112ab370(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1145ddd0(param_1[1],*(undefined4 *)(param_1[1] + 0xc)));
  thunk_FUN_112a0b40(*param_1,uVar1);
  thunk_FUN_1145de30(param_1[1]);
  return;
}


// Reference entry 112ac970; body size 61 bytes.
#line 1 "ENTRY_112ac970"

void * FUN_112ac970(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  if (param_2 == (char *)0x0) {
    return (void *)((void *)0x0);
  }
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  _Dst = (void *)((void *)thunk_FUN_112ac820(param_1,pcVar2 + (1 - (int)(param_2 + 1))));
  memcpy(_Dst,param_2,(size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
  return (void *)(_Dst);
}


// Reference entry 112af4e0; body size 26 bytes.
#line 1 "ENTRY_112af4e0"

void FUN_112af4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  FUN_112afbd0(param_1,param_2,param_3,&stack0x00000010);
  return;

 } catch (...) { }
}


// Reference entry 112b0270; body size 38 bytes.
#line 1 "ENTRY_112b0270"

void FUN_112b0270(undefined4 param_1,int param_2,undefined4 param_3)

{
 try {
  int iVar1;
  
  iVar1 = (int)(param_2 + -3);
  if (param_2 < 3) {
    iVar1 = (int)(0);
  }
  thunk_FUN_112afbd0(param_1,iVar1,param_3,&stack0x00000010);
  return;

 } catch (...) { }
}


// Reference entry 112b0310; body size 30 bytes.
#line 1 "ENTRY_112b0310"

longlong FUN_112b0310(void)

{
  __time64_t _Var1;
  
  _Var1 = (__time64_t)(_time64((__time64_t *)0x0));
  return (longlong)(_Var1 + ((unsigned long long)(DAT_122f6bdc) << 32 | (unsigned long long)(DAT_122f6bd8)));
}


// Reference entry 112b08c0; body size 47 bytes.
#line 1 "ENTRY_112b08c0"

void FUN_112b08c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  
  if (param_1 != (undefined4 *)0x0) {
    _Memory = (undefined4 *)((undefined4 *)*param_1);
    while (_Memory != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)((undefined4 *)*_Memory);
      free(_Memory);
      _Memory = (undefined4 *)(puVar1);
    }
    *param_1 = (undefined4)(0);
  }
  return;
}


// Reference entry 112b7100; body size 60 bytes.
#line 1 "ENTRY_112b7100"

void FUN_112b7100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x91b8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x91b8) + 8))
              (param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x91bc));
    return;
  }
  Ordinal_4(param_2,param_3,param_4);
  return;
}


// Reference entry 112b71c0; body size 59 bytes.
#line 1 "ENTRY_112b71c0"

void FUN_112b71c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(undefined4 **)(param_1 + 0x91b8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x91b8))
              (param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x91bc));
    return;
  }
  Ordinal_23(param_2,param_3,param_4);
  return;
}


// Reference entry 112b7460; body size 39 bytes.
#line 1 "ENTRY_112b7460"

uint FUN_112b7460(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(*param_1 - *param_2 < 0);
  if (*param_1 != *param_2 && !bVar1) {
    return (uint)(1);
  }
  if (bVar1) {
    return (uint)(0);
  }
  return (uint)((uint)~(param_1[1] - param_2[1]) >> 0x1f);
}


// Reference entry 112bb1a0; body size 37 bytes.
#line 1 "ENTRY_112bb1a0"

void FUN_112bb1a0(void)

{
  GetTickCount();
  return;
}


// Reference entry 112bdff0; body size 56 bytes.
#line 1 "ENTRY_112bdff0"

void FUN_112bdff0(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
    (*(code *)PTR_free_12121e64)(*(undefined4 *)(param_1 + 4));
    (*(code *)PTR_free_12121e64)(*(undefined4 *)(param_1 + 8));
    (*(code *)PTR_free_12121e64)(param_1);
    param_1 = (int)(iVar1);
  }
  return;
}


// Reference entry 112be040; body size 47 bytes.
#line 1 "ENTRY_112be040"

void FUN_112be040(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    iVar1 = (int)(*(int *)(param_1 + 0x1c));
    (*(code *)PTR_free_12121e64)(*(undefined4 *)(param_1 + 0x18));
    (*(code *)PTR_free_12121e64)(param_1);
    param_1 = (int)(iVar1);
  }
  return;
}


// Reference entry 112bee50; body size 41 bytes.
#line 1 "ENTRY_112bee50"

void FUN_112bee50(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    for (iVar2 = (int)(*(int *)(iVar1 + 0xc)); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      iVar1 = (int)(iVar2);
    }
    *(int *)(iVar1 + 0xc) = param_2;
    return;
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 112bee90; body size 41 bytes.
#line 1 "ENTRY_112bee90"

void FUN_112bee90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (iVar1 != 0) {
    for (iVar2 = (int)(*(int *)(iVar1 + 0x1c)); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1c)) {
      iVar1 = (int)(iVar2);
    }
    *(int *)(iVar1 + 0x1c) = param_2;
    return;
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 112c0400; body size 24 bytes.
#line 1 "ENTRY_112c0400"

uint FUN_112c0400(char *param_1)

{
  if ((*param_1 == -2) &&
     (param_1 = (char *)(((uint)((int3)((uint)param_1 >> 8)) << 8 | (uint)(param_1[1])) & 0xffffffc0),
     (char)param_1 == -0x40)) {
    return (uint)(((uint)((int3)((uint)param_1 >> 8)) << 8 | (uint)(1)));
  }
  return (uint)((uint)param_1 & 0xffffff00);
}


// Reference entry 112c0480; body size 55 bytes.
#line 1 "ENTRY_112c0480"

undefined4 FUN_112c0480(short *param_1)

{
  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) &&
     (((param_1[3] == 0 && (param_1[4] == 0)) && (param_1[5] == -1)))) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 112c35a0; body size 57 bytes.
#line 1 "ENTRY_112c35a0"

undefined4 FUN_112c35a0(int param_1,undefined1 param_2)

{
  if (*(short *)(param_1 + 0x45c) != 0) {
    return (undefined4)(6);
  }
  if ((undefined1 *)(param_1 + 0x436U) <= *(undefined1 **)(param_1 + 0x44c)) {
    return (undefined4)(7);
  }
  **(undefined1 **)(param_1 + 0x44c) = param_2;
  *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x44c) + 1;
  return (undefined4)(0);
}


// Reference entry 112c4a90; body size 58 bytes.
#line 1 "ENTRY_112c4a90"

undefined4 FUN_112c4a90(char *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    return (undefined4)(0xffffffff);
  }
  *param_1 = (char)((DAT_12121e6c != 0) * '\x04' + '\x01');
  thunk_FUN_112c4ae0(param_1,param_2,param_3);
  *param_1 = (char)('\0');
  return (undefined4)(0);
}


// Reference entry 112c4c80; body size 42 bytes.
#line 1 "ENTRY_112c4c80"

undefined4 FUN_112c4c80(undefined1 *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    return (undefined4)(0xffffffff);
  }
  *param_1 = (undefined1)(5);
  thunk_FUN_112c4ae0(param_1,param_2,param_3);
  *param_1 = (undefined1)(0);
  return (undefined4)(0);
}


// Reference entry 112c4db0; body size 25 bytes.
#line 1 "ENTRY_112c4db0"

undefined4 FUN_112c4db0(byte *param_1,int param_2)

{
  if ((param_2 != 0) && ((*param_1 & 10) == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 112c7fa0; body size 20 bytes.
#line 1 "ENTRY_112c7fa0"

uint FUN_112c7fa0(int param_1,uint param_2)

{
  if (1 < param_2) {
    return (uint)((uint)*(byte *)(param_1 + 1));
  }
  return (uint)(0xffffffff);
}


// Reference entry 112c8760; body size 18 bytes.
#line 1 "ENTRY_112c8760"

void FUN_112c8760(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    thunk_FUN_113d1d90();
    return;
  }
  return;
}


// Reference entry 112c8b80; body size 42 bytes.
#line 1 "ENTRY_112c8b80"

void FUN_112c8b80(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      thunk_FUN_112ca470(*param_1);
      *param_1 = (int)(0);
    }
    free(param_1);
  }
  return;
}


// Reference entry 112c8c00; body size 16 bytes.
#line 1 "ENTRY_112c8c00"

void FUN_112c8c00(undefined4 *param_1)

{
  thunk_FUN_112c9cb0(*param_1);
  return;
}


// Reference entry 112c9310; body size 62 bytes.
#line 1 "ENTRY_112c9310"

undefined4 FUN_112c9310(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(FUN_112d26d0("EXPAT_ENTROPY_DEBUG",0));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(__acrt_iob_func(2,"expat: Entropy: %s --> 0x%0*lx (%lu bytes)\n",param_1,8,param_2,4));
    thunk_FUN_111ac070(uVar2);
  }
  return (undefined4)(param_2);
}


// Reference entry 112ca420; body size 35 bytes.
#line 1 "ENTRY_112ca420"

void FUN_112ca420(undefined4 param_1,undefined1 param_2)

{
  undefined1 uStack00000009;
  
  uStack00000009 = (undefined1)(0);
  FUN_112d3650(param_1,0,&param_2,0);
  return;
}


// Reference entry 112cc570; body size 63 bytes.
#line 1 "ENTRY_112cc570"

void * FUN_112cc570(char *param_1,undefined4 *param_2)

{
  char cVar1;
  void *_Dst;
  int iVar2;
  
  iVar2 = (int)(0);
  cVar1 = (char)(*param_1);
  while (cVar1 != '\0') {
    iVar2 = (int)(iVar2 + 1);
    cVar1 = (char)(param_1[iVar2]);
  }
  _Dst = (void *)((void *)(*(code *)*param_2)(iVar2 + 1U));
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_1,iVar2 + 1U);
    return (void *)(_Dst);
  }
  return (void *)((void *)0x0);
}


// Reference entry 112d12d0; body size 58 bytes.
#line 1 "ENTRY_112d12d0"

void FUN_112d12d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(param_1 + 0x1d8));
  while (iVar1 = iVar2, iVar1 != 0) {
    param_1 = (int)(iVar1);
    iVar2 = (int)(*(int *)(iVar1 + 0x1d8));
  }
  FUN_112d1390(param_1,param_2,"CLOSE",param_3);
  *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + -1;
  return;
}


// Reference entry 112d2860; body size 35 bytes.
#line 1 "ENTRY_112d2860"

undefined4 FUN_112d2860(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*(int *)(param_1 + 0x1d8));
  while (iVar1 = iVar2, iVar1 != 0) {
    param_1 = (int)(iVar1);
    iVar2 = (int)(*(int *)(iVar1 + 0x1d8));
  }
  return (undefined4)(*(undefined4 *)(param_1 + 0x1ec));
}


// Reference entry 112e9650; body size 19 bytes.
#line 1 "ENTRY_112e9650"

void __thiscall Recovered_Bulk::FUN_112e9650(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 112e9670; body size 19 bytes.
#line 1 "ENTRY_112e9670"

void __thiscall Recovered_Bulk::FUN_112e9670(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 112e9690; body size 19 bytes.
#line 1 "ENTRY_112e9690"

void __thiscall Recovered_Bulk::FUN_112e9690(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 112e96b0; body size 19 bytes.
#line 1 "ENTRY_112e96b0"

void __thiscall Recovered_Bulk::FUN_112e96b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 112e9750; body size 17 bytes.
#line 1 "ENTRY_112e9750"

void __thiscall Recovered_Bulk::FUN_112e9750(undefined4 *param_2)
{
  int param_1 = (int )this;
  (**(code **)(param_1 + 4))(*param_2);
  return;
}


// Reference entry 112e9780; body size 17 bytes.
#line 1 "ENTRY_112e9780"

void __thiscall Recovered_Bulk::FUN_112e9780(undefined4 *param_2)
{
  int param_1 = (int )this;
  (**(code **)(param_1 + 4))(*param_2);
  return;
}


// Reference entry 112e98b0; body size 19 bytes.
#line 1 "ENTRY_112e98b0"

void __thiscall Recovered_Bulk::FUN_112e98b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 112e98d0; body size 19 bytes.
#line 1 "ENTRY_112e98d0"

void __thiscall Recovered_Bulk::FUN_112e98d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 112e98f0; body size 19 bytes.
#line 1 "ENTRY_112e98f0"

void __thiscall Recovered_Bulk::FUN_112e98f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 112e9910; body size 19 bytes.
#line 1 "ENTRY_112e9910"

void __thiscall Recovered_Bulk::FUN_112e9910(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 112ece50; body size 53 bytes.
#line 1 "ENTRY_112ece50"

undefined4 * __fastcall FUN_112ece50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = (undefined4)((uint)&ghidra_vftable_sonos_RootCACertBundle_Metadata);
  memset(param_1 + 6,0,0x82);
  param_1[0x27] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 112ed180; body size 18 bytes.
#line 1 "ENTRY_112ed180"

undefined4 __fastcall FUN_112ed180(undefined4 param_1)

{
  _Mtx_init_in_situ(param_1,2);
  return (undefined4)(param_1);
}


// Reference entry 112ed6d0; body size 31 bytes.
#line 1 "ENTRY_112ed6d0"

void __fastcall FUN_112ed6d0(int param_1)

{
  _Mtx_destroy_in_situ(param_1 + 8);
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  return;
}


// Reference entry 112edd20; body size 60 bytes.
#line 1 "ENTRY_112edd20"

int __thiscall Recovered_Bulk::FUN_112edd20(byte param_2)
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


// Reference entry 112edd70; body size 60 bytes.
#line 1 "ENTRY_112edd70"

int __thiscall Recovered_Bulk::FUN_112edd70(byte param_2)
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


// Reference entry 112ee190; body size 19 bytes.
#line 1 "ENTRY_112ee190"

void __thiscall Recovered_Bulk::FUN_112ee190(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 112ee340; body size 58 bytes.
#line 1 "ENTRY_112ee340"

void __thiscall Recovered_Bulk::FUN_112ee340(char param_2)
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


// Reference entry 112ee390; body size 58 bytes.
#line 1 "ENTRY_112ee390"

void __thiscall Recovered_Bulk::FUN_112ee390(char param_2)
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


// Reference entry 112ee460; body size 22 bytes.
#line 1 "ENTRY_112ee460"

void __fastcall FUN_112ee460(int param_1)

{
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 112ee480; body size 20 bytes.
#line 1 "ENTRY_112ee480"

void __fastcall FUN_112ee480(int param_1)

{
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 112ee620; body size 19 bytes.
#line 1 "ENTRY_112ee620"

void __thiscall Recovered_Bulk::FUN_112ee620(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 112eeea0; body size 36 bytes.
#line 1 "ENTRY_112eeea0"

void FUN_112eeea0(int param_1)

{
  LOCK();
  *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  UNLOCK();
  if (DAT_122f6ca0 != 0) {
    thunk_FUN_112f2220(param_1);
  }
  return;
}


// Reference entry 112efba0; body size 56 bytes.
#line 1 "ENTRY_112efba0"

void FUN_112efba0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x46);
  LOCK();
  iVar2 = (int)(*piVar1);
  *piVar1 = (int)(*piVar1 + -1);
  UNLOCK();
  if (DAT_122f6ca0 != 0) {
    thunk_FUN_112f2220(param_1);
  }
  if ((iVar2 < 2) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x10))(1);
  }
  return;
}


// Reference entry 112effc0; body size 46 bytes.
#line 1 "ENTRY_112effc0"

void __stdcall FUN_112effc0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_112f0000(param_1,param_2);
  return;
}


// Reference entry 112f0920; body size 50 bytes.
#line 1 "ENTRY_112f0920"

bool FUN_112f0920(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (int)(_Mtx_lock(&DAT_122f6c20));
  if (iVar1 == 0) {
    bVar2 = (bool)(DAT_122f6c18 != 0);
    _Mtx_unlock(&DAT_122f6c20);
    return (bool)(bVar2);
  }
                    
  std::_Throw_C_error(iVar1);
}


// Reference entry 112f1710; body size 37 bytes.
#line 1 "ENTRY_112f1710"

void FUN_112f1710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  if (*(code **)(param_1 + 0x124) != (code *)0x0) {
    (**(code **)(param_1 + 0x124))(param_2,param_3,param_4,&stack0x00000014);
  }
  return;

 } catch (...) { }
}


// Reference entry 112f1740; body size 37 bytes.
#line 1 "ENTRY_112f1740"

void FUN_112f1740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  if (*(code **)(param_1 + 0x670) != (code *)0x0) {
    (**(code **)(param_1 + 0x670))(param_2,param_3,param_4,&stack0x00000014);
  }
  return;

 } catch (...) { }
}


// Reference entry 112f1770; body size 31 bytes.
#line 1 "ENTRY_112f1770"

void FUN_112f1770(code *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  if (param_1 != (code *)0x0) {
    (*param_1)(param_2,param_3,param_4,&stack0x00000014);
  }
  return;

 } catch (...) { }
}


// Reference entry 112f4060; body size 55 bytes.
#line 1 "ENTRY_112f4060"

int __thiscall Recovered_Bulk::FUN_112f4060(byte param_2)
{
  int param_1 = (int )this;
  _Mtx_destroy_in_situ(param_1 + 8);
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (int)(param_1);
}


// Reference entry 112f4220; body size 18 bytes.
#line 1 "ENTRY_112f4220"

void __stdcall FUN_112f4220(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_112f4790(param_1,param_2,0);
  return;
}


// Reference entry 112f4240; body size 63 bytes.
#line 1 "ENTRY_112f4240"

bool __fastcall FUN_112f4240(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(0);
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = (int)(0);
    do {
      iVar2 = (int)(iVar2 + 0xc);
      uVar1 = (uint)(uVar1 + 1);
      *(undefined1 *)(*(int *)(param_1 + 8) + -4 + iVar2) = 0;
    } while (uVar1 < *(uint *)(param_1 + 0xc));
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  iVar2 = (int)(thunk_FUN_112f36a0(*(undefined4 *)(param_1 + 0x14),&DAT_118b3060));
  *(int *)(param_1 + 0x18) = iVar2;
  return (bool)(iVar2 != 0);
}


// Reference entry 112f4f20; body size 34 bytes.
#line 1 "ENTRY_112f4f20"

void FUN_112f4f20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_2,param_3,param_4,&stack0x00000014);
  }
  return;

 } catch (...) { }
}


// Reference entry 112f4f70; body size 39 bytes.
#line 1 "ENTRY_112f4f70"

void __stdcall FUN_112f4f70(undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = (undefined4)(param_1);
  local_8 = (undefined4)(0);
  thunk_FUN_112f4790(&local_c,1,1);
  return;
}


// Reference entry 112f4fa0; body size 39 bytes.
#line 1 "ENTRY_112f4fa0"

void __stdcall FUN_112f4fa0(undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = (undefined4)(param_1);
  local_8 = (undefined4)(0);
  thunk_FUN_112f4790(&local_c,1,0);
  return;
}


// Reference entry 112f4fd0; body size 38 bytes.
#line 1 "ENTRY_112f4fd0"

void __stdcall FUN_112f4fd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = (undefined4)(param_1);
  local_8 = (undefined4)(param_2);
  thunk_FUN_112f4790(&local_c,1,0);
  return;
}


// Reference entry 112f50c0; body size 51 bytes.
#line 1 "ENTRY_112f50c0"

undefined4 FUN_112f50c0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if ((((param_3 <= param_1) && (param_1 < param_3 + param_4)) && (param_2 <= param_4)) &&
     (param_1 - param_3 <= param_4 - param_2)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 112f5390; body size 37 bytes.
#line 1 "ENTRY_112f5390"

void FUN_112f5390(void *param_1)

{
  if (*(void **)((int)param_1 + 0x70) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x70));
  }
  memset(param_1,0,0x78);
  return;
}


// Reference entry 11309ca0; body size 54 bytes.
#line 1 "ENTRY_11309ca0"

int FUN_11309ca0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  if (param_2 != *(int *)(iVar1 + 4)) {
    uVar2 = (undefined4)(*(undefined4 *)(param_1 + 4));
    *(int *)(iVar1 + 0x48) = param_1;
    *(undefined4 *)(iVar1 + 0x34) = param_3;
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
    *(int *)(iVar1 + 4) = param_2;
    *(byte *)(iVar1 + 9) = (param_2 != 1) - 1U & 100;
  }
  return (int)(iVar1);
}


// Reference entry 1130a830; body size 31 bytes.
#line 1 "ENTRY_1130a830"

int FUN_1130a830(undefined4 param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((char *)(param_2 + 4));
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
    if (-1 < cVar1) break;
  } while (pcVar2 < (char *)(param_2 + 0xdU));
  return (int)((int)pcVar2 - param_2);
}


// Reference entry 1130e990; body size 45 bytes.
#line 1 "ENTRY_1130e990"

undefined4 FUN_1130e990(int param_1,int param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((**(code **)(*(int *)(param_1 + 4) + 0x4c))
                    (*(int *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4)));
  *(undefined2 *)(*(int *)(param_1 + 0xc) + param_2 * 2) = uVar1;
  return (undefined4)(((uint)((short)((uint)*(int *)(param_1 + 0xc) >> 0x10)) << 16 | (uint)(*(undefined2 *)(*(int *)(param_1 + 0xc) + param_2 * 2))));
}


// Reference entry 113119f0; body size 32 bytes.
#line 1 "ENTRY_113119f0"

void FUN_113119f0(int param_1)

{
  for (; (((*(char *)(param_1 + -1) != '\0' || (*(char *)(param_1 + -2) != '\0')) ||
          (*(char *)(param_1 + -3) != '\0')) || (*(char *)(param_1 + -4) != '\0'));
      param_1 = param_1 + -1) {
  }
  return;
}


// Reference entry 11312cc0; body size 25 bytes.
#line 1 "ENTRY_11312cc0"

void FUN_11312cc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_1);
  *(char *)(param_1 + 6) = (char)param_1[6] + '\x01';
  piVar1 = (int *)((int *)(iVar2 + 0x110));
  *piVar1 = (int)(*piVar1 + 1);
  *(undefined2 *)(iVar2 + 0x114) = 0;
  return;
}


// Reference entry 11312ea0; body size 55 bytes.
#line 1 "ENTRY_11312ea0"

undefined8 FUN_11312ea0(double param_1)

{
  undefined8 uVar1;
  
  if (param_1 <= DAT_11a02f70) {
    return (undefined8)(0x8000000000000000);
  }
  if (DAT_11a02ef0 <= param_1) {
    return (undefined8)(0x7fffffffffffffff);
  }
  uVar1 = (undefined8)(thunk_FUN_1148af70());
  return (undefined8)(uVar1);
}


// Reference entry 1131bf10; body size 58 bytes.
#line 1 "ENTRY_1131bf10"

void FUN_1131bf10(undefined4 param_1)

{
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  local_4 = (undefined4)(param_1);
  local_18 = (undefined1 *)(LAB_1131bf60);
  local_14 = (undefined1 *)(LAB_1131bf90);
  local_10 = (undefined4)(0);
  local_1c = (undefined4)(0);
  FUN_113851a0(&local_1c,param_1);
  return;
}


// Reference entry 1131ce80; body size 60 bytes.
#line 1 "ENTRY_1131ce80"

void FUN_1131ce80(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x32) == 0) {
    iVar2 = (int)(*(int *)(param_1 + 0x74));
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
    uVar1 = (undefined2)(*(undefined2 *)(*(int *)(iVar2 + 0x40) + (uint)*(ushort *)(param_1 + 0x46) * 2));
    (**(code **)(iVar2 + 0x50))
              (iVar2,(uint)(((uint)((char)uVar1) << 8 | (uint)((char)((ushort)uVar1 >> 8))) &
                           *(ushort *)(iVar2 + 0x1a)) + *(int *)(iVar2 + 0x38),param_1 + 0x20);
  }
  return;
}


// Reference entry 1131e2b0; body size 63 bytes.
#line 1 "ENTRY_1131e2b0"

int FUN_1131e2b0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)(*(byte **)(param_1 + 0x28));
  if (2 < *pbVar2) {
    iVar3 = (int)(FUN_1130a370(pbVar2));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      return (int)(iVar3);
    }
  }
  bVar1 = (byte)(*pbVar2);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (bVar1 != 0) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return (int)(0);
}


// Reference entry 1131e870; body size 46 bytes.
#line 1 "ENTRY_1131e870"

undefined4 FUN_1131e870(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  if ((param_2[4] & 1) == 0) {
    switch(*param_2) {
    case 0x2b:
    case 0x2d:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x9a:
    case 0xa8:
    case 0xa9:
    case 0xac:
    case 0xae:
      break;
    case 0x2c:
      if (((*(short *)(param_1 + 0x14) == 0) && (*(int *)(param_2 + 0xc) != 0)) &&
         (FUN_113a82c0(param_1,*(int *)(param_2 + 0xc)), *(short *)(param_1 + 0x14) != 0)) {
        *(undefined2 *)(param_1 + 0x14) = 0;
        if (*(int *)(param_2 + 0x10) != 0) {
          FUN_113a82c0(param_1,*(int *)(param_2 + 0x10));
        }
      }
      break;
    default:
      return (undefined4)(0);
    case 0x30:
      if ((*(int *)(param_2 + 0xc) != 0) &&
         (iVar1 = FUN_113a82c0(param_1,*(int *)(param_2 + 0xc)), iVar1 == 2)) {
        return (undefined4)(2);
      }
      break;
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      if (((**(char **)(param_2 + 0xc) != -0x5c) ||
          (iVar1 = *(int *)(*(char **)(param_2 + 0xc) + 0x28), iVar1 == 0)) ||
         (*(int *)(iVar1 + 0x38) == 0)) {
        if (**(char **)(param_2 + 0x10) != -0x5c) {
          return (undefined4)(0);
        }
        iVar1 = (int)(*(int *)(*(char **)(param_2 + 0x10) + 0x28));
        if (iVar1 == 0) {
          return (undefined4)(0);
        }
        if (*(int *)(iVar1 + 0x38) == 0) {
          return (undefined4)(0);
        }
      }
      break;
    case 0xa4:
      if (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18)) {
        *(undefined2 *)(param_1 + 0x14) = 1;
        return (undefined4)(2);
      }
    }
  }
  return (undefined4)(1);
}


// Reference entry 11322670; body size 29 bytes.
#line 1 "ENTRY_11322670"

void FUN_11322670(undefined4 param_1,int param_2)

{
  *(ushort *)(param_2 + 0x10) = *(ushort *)(param_2 + 0x10) | 1;
  if ((*(byte *)(param_2 + 0x10) & 0x60) != 0) {
    FUN_11345ed0();
    return;
  }
  return;
}


// Reference entry 113244b0; body size 50 bytes.
#line 1 "ENTRY_113244b0"

short FUN_113244b0(int param_1)

{
  if (param_1 == 0x31) {
    return (short)(1);
  }
  if (param_1 == 0x32) {
    return (short)(0x100);
  }
  if (param_1 == 0x2d) {
    return (short)(0x80);
  }
  return (short)(2 << ((char)param_1 - 0x35U & 0x1f));
}


// Reference entry 113262d0; body size 58 bytes.
#line 1 "ENTRY_113262d0"

undefined4 FUN_113262d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0);
  iVar1 = (int)(**(int **)(param_1 + 0x3c));
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      uVar2 = (undefined4)((**(code **)(iVar1 + 0x20))(*(int **)(param_1 + 0x3c),param_2));
    }
    if (*(char *)(param_1 + 0x11) != '\x05') {
      *(char *)(param_1 + 0x11) = (char)param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0xc);
  return (undefined4)(uVar2);
}


// Reference entry 1132ad30; body size 38 bytes.
#line 1 "ENTRY_1132ad30"

undefined4 FUN_1132ad30(int param_1)

{
  undefined4 uVar1;
  
  if ((DAT_122f7034 == 0) ||
     (uVar1 = DAT_122f7050, DAT_122f7030 < *(int *)(param_1 + 0xc) + *(int *)(param_1 + 8))) {
    uVar1 = (undefined4)(DAT_122f6da0);
  }
  return (undefined4)(uVar1);
}


// Reference entry 1132c340; body size 47 bytes.
#line 1 "ENTRY_1132c340"

void FUN_1132c340(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 8))(param_1,&param_1,4,param_2,param_3));
  if (iVar1 == 0) {
    *param_4 = (uint)((uint)param_1 >> 0x18 | ((uint)param_1 & 0xff0000) >> 8 |
               ((uint)param_1 & 0xff00) << 8 | (int)param_1 << 0x18);
  }
  return;
}


// Reference entry 11339ce0; body size 51 bytes.
#line 1 "ENTRY_11339ce0"

undefined4 * FUN_11339ce0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)FUN_11358b90(0x200,0));
  if (puVar1 != (undefined4 *)0x0) {
    memset(puVar1 + 1,0,0x1fc);
    *puVar1 = (undefined4)(param_1);
  }
  return (undefined4 *)(puVar1);
}


// Reference entry 1133b7c0; body size 22 bytes.
#line 1 "ENTRY_1133b7c0"

char FUN_1133b7c0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)('\0');
  if (*(char *)(*(int *)(param_1 + 4) + 0x11) != '\0') {
    cVar1 = (char)((*(char *)(*(int *)(param_1 + 4) + 0x12) != '\0') + '\x01');
  }
  return (char)(cVar1);
}


// Reference entry 1133d590; body size 56 bytes.
#line 1 "ENTRY_1133d590"

undefined4 FUN_1133d590(char *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = (char)(param_1[1] & 0xf1);
  param_1[0x32] = (char)('\0');
  param_1[0x33] = (char)('\0');
  if (((*param_1 == '\0') && (*(short *)(param_1 + 0x46) != 0)) &&
     (*(char *)(*(int *)(param_1 + 0x74) + 8) != '\0')) {
    *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + -1;
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(FUN_1130a090(param_1));
  return (undefined4)(uVar1);
}


// Reference entry 1133d960; body size 61 bytes.
#line 1 "ENTRY_1133d960"

ushort FUN_1133d960(int param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_1 == 0) {
    return (ushort)(0);
  }
  if (-1 < param_2) {
    puVar1 = (ushort *)((ushort *)(*(int *)(param_1 + 4) + 0x18));
    *puVar1 = (ushort)(*puVar1 & 0xfff3);
    puVar1 = (ushort *)((ushort *)(*(int *)(param_1 + 4) + 0x18));
    *puVar1 = (ushort)(*puVar1 | (short)param_2 * 4);
  }
  return (ushort)(*(ushort *)(*(int *)(param_1 + 4) + 0x18) >> 2 & 3);
}


// Reference entry 1133d9b0; body size 61 bytes.
#line 1 "ENTRY_1133d9b0"

undefined4 FUN_1133d9b0(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 4));
  if (((*(byte *)(iVar1 + 0x18) & 2) != 0) && ((param_2 != '\0') != (bool)*(char *)(iVar1 + 0x11)))
  {
    return (undefined4)(8);
  }
  *(bool *)(iVar1 + 0x11) = param_2 != '\0';
  *(bool *)(iVar1 + 0x12) = param_2 == '\x02';
  return (undefined4)(0);
}


// Reference entry 1133f8f0; body size 53 bytes.
#line 1 "ENTRY_1133f8f0"

void FUN_1133f8f0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x6c) != 0) {
    param_1 = (int)(*(int *)(param_1 + 0x6c));
  }
  if (((*(uint *)(param_1 + 0x54) & 1 << ((byte)param_2 & 0x1f)) == 0) &&
     (*(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 1 << (param_2 & 0x1f), param_2 == 1))
  {
    FUN_1135a0c0(param_1);
  }
  return;
}


// Reference entry 11343640; body size 61 bytes.
#line 1 "ENTRY_11343640"

void * FUN_11343640(int param_1,size_t param_2,undefined4 param_3)

{
  void *_Dst;
  
  if (param_1 == 0) {
    _Dst = (void *)((void *)FUN_11358b90(param_2,param_3));
  }
  else {
    _Dst = (void *)((void *)FUN_113434e0(param_1));
  }
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_2);
  }
  return (void *)(_Dst);
}


// Reference entry 11345e20; body size 37 bytes.
#line 1 "ENTRY_11345e20"

void FUN_11345e20(int param_1,int param_2)

{
  *(int *)(param_1 + 0x40) = param_2;
  if ((param_2 == 0) && (*(int *)(param_1 + 0x104) == 0)) {
    return;
  }
  FUN_11345e50();
  return;
}


// Reference entry 11346220; body size 58 bytes.
#line 1 "ENTRY_11346220"

void FUN_11346220(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *local_8;
  uint local_4;
  
  local_8 = (char *)(param_3);
  local_4 = (uint)(0);
  if (param_3 != (char *)0x0) {
    pcVar1 = (char *)(param_3 + 1);
    do {
      cVar2 = (char)(*param_3);
      param_3 = (char *)(param_3 + 1);
    } while (cVar2 != '\0');
    local_4 = (uint)((int)param_3 - (int)pcVar1 & 0x3fffffff);
  }
  FUN_11346450(param_1,param_2,&local_8,0);
  return;
}


// Reference entry 11346330; body size 55 bytes.
#line 1 "ENTRY_11346330"

int FUN_11346330(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_3 + 4) != 0) {
    iVar1 = (int)(FUN_11346450(*param_1,0x6f,param_3,param_4));
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x1100;
      *(int *)(iVar1 + 0xc) = param_2;
      return (int)(iVar1);
    }
  }
  return (int)(param_2);
}


// Reference entry 1134a840; body size 63 bytes.
#line 1 "ENTRY_1134a840"

void FUN_1134a840(int *param_1,int param_2,int param_3)

{
  if ((*(uint *)(param_2 + 4) & 0x40000000) != 0) {
    if (((*(uint *)(param_3 + 4) & 0x80000) != 0) || ((*(uint *)(*param_1 + 0x20) & 0x80) == 0)) {
      FUN_11345ed0(param_1,"unsafe use of %s()",*(undefined4 *)(param_3 + 0x20));
    }
  }
  return;
}


// Reference entry 1134bee0; body size 55 bytes.
#line 1 "ENTRY_1134bee0"

void FUN_1134bee0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (int)(*param_1);
    iVar2 = (int)(0);
    if (param_2 != -1) {
      iVar2 = (int)(param_2);
    }
    *(byte *)(param_1 + iVar1 * 5 + -2) = (byte)iVar2;
    if ((param_3 != -1) &&
       (param_1[iVar1 * 5 + -1] = param_1[iVar1 * 5 + -1] | 0x20, iVar2 != param_3)) {
      *(byte *)(param_1 + iVar1 * 5 + -2) = (byte)iVar2 | 2;
    }
  }
  return;
}


// Reference entry 1134c120; body size 62 bytes.
#line 1 "ENTRY_1134c120"

void FUN_1134c120(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if (((param_2 != 0) && (piVar3 = *(int **)(param_2 + 0x14), piVar3 != (int *)0x0)) &&
     ((*(uint *)(param_2 + 4) & 0x800) == 0)) {
    iVar4 = (int)(*piVar3);
    uVar2 = (uint)(0);
    if (0 < iVar4) {
      piVar3 = (int *)(piVar3 + 1);
      do {
        iVar1 = (int)(*piVar3);
        piVar3 = (int *)(piVar3 + 5);
        uVar2 = (uint)(uVar2 | *(uint *)(iVar1 + 4));
        iVar4 = (int)(iVar4 + -1);
      } while (iVar4 != 0);
    }
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | uVar2 & 0x200104;
  }
  return;
}


// Reference entry 11353dc0; body size 38 bytes.
#line 1 "ENTRY_11353dc0"

void FUN_11353dc0(int *param_1)

{
  if (param_1[2] == 0) {
    if ((param_1[0x1b] == 0) && ((*(byte *)(*param_1 + 0x4c) & 8) == 0)) {
      *(undefined1 *)((int)param_1 + 0x17) = 1;
    }
    FUN_11372dd0();
    return;
  }
  return;
}


// Reference entry 11358b70; body size 22 bytes.
#line 1 "ENTRY_11358b70"

void FUN_11358b70(undefined4 param_1,undefined4 param_2)

{
 try {
  FUN_11371c00(param_1,param_2,&stack0x0000000c);
  return;

 } catch (...) { }
}


// Reference entry 11358d40; body size 59 bytes.
#line 1 "ENTRY_11358d40"

void FUN_11358d40(void)

{
  if ((-1 < DAT_122f6d94) && (((0 < DAT_122f6d94 || (DAT_122f6d90 != 0)) && (DAT_122f6d88 != 0)))) {
    (*(code *)(uint)(DAT_12121ed8))(DAT_122f6d88);
    if (DAT_122f6d88 != 0) {
                    
                    
      (*(code *)(uint)(DAT_12121ed0))();
      return;
    }
  }
  return;
}


// Reference entry 1135a6a0; body size 32 bytes.
#line 1 "ENTRY_1135a6a0"

void FUN_1135a6a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4,param_5);
  return;
}


// Reference entry 1135a780; body size 30 bytes.
#line 1 "ENTRY_1135a780"

undefined4 FUN_1135a780(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
                    
                    
    uVar1 = (undefined4)((**(code **)(*param_1 + 0x14))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 1135a7d0; body size 28 bytes.
#line 1 "ENTRY_1135a7d0"

void FUN_1135a7d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 1135a820; body size 32 bytes.
#line 1 "ENTRY_1135a820"

void FUN_1135a820(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3,param_4,param_5);
  return;
}


// Reference entry 1135b7f0; body size 42 bytes.
#line 1 "ENTRY_1135b7f0"

undefined1 FUN_1135b7f0(int param_1,int param_2)

{
  if (((-1 < param_2) && (*(char *)(param_1 + 0xc) == '\0')) &&
     ((*(int *)(param_1 + 0xe8) == 0 || (*(char *)(*(int *)(param_1 + 0xe8) + 0x2b) != '\x02')))) {
    *(char *)(param_1 + 4) = (char)param_2;
  }
  return (undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 1135edf0; body size 59 bytes.
#line 1 "ENTRY_1135edf0"

float10 FUN_1135edf0(uint param_1)

{
  double *pdVar1;
  double dVar2;
  double local_8;
  
  local_8 = (double)(DAT_118a1c50);
  if (param_1 != 0) {
    pdVar1 = (double *)((double *)&DAT_119fb2b8);
    dVar2 = (double)(DAT_118a1c50);
    do {
      if ((param_1 & 1) != 0) {
        dVar2 = (double)(dVar2 * *pdVar1);
        local_8 = (double)(dVar2);
      }
      pdVar1 = (double *)(pdVar1 + 1);
      param_1 = (uint)((int)param_1 >> 1);
    } while (param_1 != 0);
  }
  return (float10)((float10)local_8);
}


// Reference entry 11363c30; body size 35 bytes.
#line 1 "ENTRY_11363c30"

void FUN_11363c30(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  while ((iVar1 != 0 && (((byte)*(undefined4 *)(iVar1 + 0x38) & 3) != 2))) {
    iVar1 = (int)(*(int *)(iVar1 + 0x14));
  }
  return;
}


// Reference entry 11363d20; body size 44 bytes.
#line 1 "ENTRY_11363d20"

undefined4 FUN_11363d20(int param_1)

{
  if ((((*(uint *)(param_1 + 0x20) & 0x10000000) != 0) && (*(int *)(param_1 + 0x164) == 0)) &&
     (*(int *)(param_1 + 0xbc) == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11363d60; body size 61 bytes.
#line 1 "ENTRY_11363d60"

int FUN_11363d60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*param_1);
  if (*(char *)(iVar1 + 0xa5) == '\0') {
    iVar2 = (int)(FUN_11354c60(iVar1,param_1 + 1));
    if (iVar2 != 0) {
      param_1[9] = (int)(param_1[9] + 1);
      param_1[3] = (int)(iVar2);
      return (int)(iVar2);
    }
    if (*(char *)(iVar1 + 0x59) != '\0') {
      *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x10;
      return (int)(0);
    }
  }
  return (int)(0);
}


// Reference entry 11364b10; body size 62 bytes.
#line 1 "ENTRY_11364b10"

void FUN_11364b10(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    if (param_2 != 0) {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x8c + (uint)*(byte *)(param_1 + 0x13) * 4) = param_2;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        return;
      }
    }
  }
  else if (*(int *)(param_1 + 0x1c) < param_3) {
    *(int *)(param_1 + 0x1c) = param_3;
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}


// Reference entry 113656b0; body size 61 bytes.
#line 1 "ENTRY_113656b0"

void FUN_113656b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_4;
  
  local_1c = (undefined4)(param_1);
  local_4 = (undefined4)(param_3);
  local_18 = (undefined1 *)(LAB_11330030);
  local_14 = (undefined1 *)(LAB_113311c0);
  local_10 = (undefined4)(0);
  FUN_113851a0(&local_1c,param_2);
  return;
}


// Reference entry 1136a9a0; body size 53 bytes.
#line 1 "ENTRY_1136a9a0"

void FUN_1136a9a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  
  local_1c = (undefined4)(param_1);
  local_14 = (undefined1 *)(LAB_1136b2a0);
  local_10 = (undefined1 *)(LAB_11332d30);
  local_18 = (undefined1 *)(LAB_1134c3a0);
  FUN_113851a0(&local_1c,param_2);
  return;
}


// Reference entry 1136c990; body size 39 bytes.
#line 1 "ENTRY_1136c990"

void FUN_1136c990(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 + (&DAT_122f6d28)[param_1]);
  (&DAT_122f6d28)[param_1] = uVar1;
  if ((uint)(&DAT_122f6d50)[param_1] < uVar1) {
    (&DAT_122f6d50)[param_1] = uVar1;
  }
  return;
}


// Reference entry 1136cf50; body size 43 bytes.
#line 1 "ENTRY_1136cf50"

undefined4 FUN_1136cf50(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 4) != 0) &&
      (*(undefined1 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x10)) = 0,
      *(int *)(param_1 + 0xc) != 0)) && ((*(byte *)(param_1 + 0x15) & 4) == 0)) {
    uVar1 = (undefined4)(FUN_1139c2c0());
    return (undefined4)(uVar1);
  }
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1136d2a0; body size 26 bytes.
#line 1 "ENTRY_1136d2a0"

undefined1 FUN_1136d2a0(int param_1,int param_2)

{
  if (-1 < param_2) {
    return (undefined1)(*(undefined1 *)(*(int *)(param_1 + 4) + 0xd + param_2 * 0x14));
  }
  return (undefined1)(0x44);
}


// Reference entry 1136d2c0; body size 41 bytes.
#line 1 "ENTRY_1136d2c0"

int FUN_1136d2c0(int param_1,short param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = (int)(0);
  if (*(ushort *)(param_1 + 0x34) != 0) {
    psVar2 = (short *)(*(short **)(param_1 + 4));
    do {
      if (param_2 == *psVar2) {
        return (int)(iVar1);
      }
      iVar1 = (int)(iVar1 + 1);
      psVar2 = (short *)(psVar2 + 1);
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x34));
  }
  return (int)(-1);
}


// Reference entry 11372760; body size 52 bytes.
#line 1 "ENTRY_11372760"

void FUN_11372760(int *param_1,int param_2,undefined1 param_3)

{
  if (param_2 < 0) {
    param_2 = (int)(param_1[0x1b] + -1);
  }
  if (*(char *)(*param_1 + 0x51) != '\0') {
    DAT_122f7054 = (int)(param_3);
    return;
  }
  *(undefined1 *)(param_1[0x1a] + param_2 * 0x14) = param_3;
  return;
}


// Reference entry 11372830; body size 51 bytes.
#line 1 "ENTRY_11372830"

void FUN_11372830(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 < 0) {
    param_2 = (int)(param_1[0x1b] + -1);
  }
  if (*(char *)(*param_1 + 0x51) != '\0') {
    DAT_122f7060 = (int)(param_3);
    return;
  }
  *(undefined4 *)(param_1[0x1a] + param_2 * 0x14 + 0xc) = param_3;
  return;
}


// Reference entry 11372d90; body size 33 bytes.
#line 1 "ENTRY_11372d90"

undefined4 FUN_11372d90(int *param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(*param_1 + 0x1cc) != 0) && (param_1[0xc] != 0)) {
    uVar1 = (undefined4)(FUN_1139f580());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 11373210; body size 47 bytes.
#line 1 "ENTRY_11373210"

void FUN_11373210(undefined4 *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  
  if (param_1[0x1f] != 0) {
    FUN_113433c0(*param_1,param_1[0x1f]);
  }
  uVar1 = (undefined4)(FUN_11371c00(*param_1,param_2,&stack0x0000000c));
  param_1[0x1f] = (undefined4)(uVar1);
  return;

 } catch (...) { }
}


// Reference entry 1137efc0; body size 31 bytes.
#line 1 "ENTRY_1137efc0"

void FUN_1137efc0(int param_1)

{
  if (((*(ushort *)(param_1 + 8) & 0x2400) == 0) && (*(int *)(param_1 + 0x18) == 0)) {
    return;
  }
  FUN_113a10a0();
  return;
}


// Reference entry 1137f070; body size 56 bytes.
#line 1 "ENTRY_1137f070"

void FUN_1137f070(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(ushort *)(param_1 + 2) & 0x2400) != 0) {
    FUN_113a2d10(param_1,param_2,param_3);
    return;
  }
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  *(undefined2 *)(param_1 + 2) = 4;
  return;
}


// Reference entry 11380c50; body size 43 bytes.
#line 1 "ENTRY_11380c50"

void FUN_11380c50(int param_1,int param_2)

{
  if (0x1f < param_2) {
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 0x80000000;
    return;
  }
  *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 1 << (param_2 - 1U & 0x1f);
  return;
}


// Reference entry 11381bd0; body size 61 bytes.
#line 1 "ENTRY_11381bd0"

void FUN_11381bd0(int param_1,int param_2)

{
  if ((*(uint *)(param_2 + 4) & 0x800) != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      FUN_11345ed0(param_1,"sub-select returns %d columns - expected %d",
                   **(undefined4 **)(*(int *)(param_2 + 0x14) + 0x1c),1);
    }
    return;
  }
  FUN_11345ed0();
  return;
}


// Reference entry 1138e820; body size 21 bytes.
#line 1 "ENTRY_1138e820"

undefined4 FUN_1138e820(int param_1)

{
  if ((*(uint *)(param_1 + 0x20) & 0x10000001) == 1) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1138fad0; body size 24 bytes.
#line 1 "ENTRY_1138fad0"

void FUN_1138fad0(undefined4 param_1,undefined4 param_2,int param_3)

{
  thunk_FUN_1138faf0(param_1,param_2,param_3,param_3 >> 0x1f);
  return;
}


// Reference entry 11395a40; body size 29 bytes.
#line 1 "ENTRY_11395a40"

undefined4 FUN_11395a40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_11395200());
  if (iVar1 != 0) {
    return (undefined4)(0);
  }
  uVar2 = (undefined4)(FUN_11358b90(param_1,param_2));
  return (undefined4)(uVar2);
}


// Reference entry 113961e0; body size 33 bytes.
#line 1 "ENTRY_113961e0"

undefined4 FUN_113961e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_11395200());
  if (iVar1 != 0) {
    return (undefined4)(0);
  }
  uVar2 = (undefined4)(FUN_11363e40(param_1,param_2,param_3));
  return (undefined4)(uVar2);
}


// Reference entry 11396b90; body size 58 bytes.
#line 1 "ENTRY_11396b90"

void FUN_11396b90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((*(ushort *)(puVar1 + 2) & 0x2400) != 0) {
    FUN_113a2d10(puVar1,param_2,param_3);
    return;
  }
  *puVar1 = (undefined4)(param_2);
  puVar1[1] = (undefined4)(param_3);
  *(undefined2 *)(puVar1 + 2) = 4;
  return;
}


// Reference entry 11397c20; body size 63 bytes.
#line 1 "ENTRY_11397c20"

void FUN_11397c20(int param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x10) + param_3);
  if (*(uint *)(param_1 + 8) <= uVar1) {
    FUN_11313540();
    return;
  }
  if (param_3 != 0) {
    *(uint *)(param_1 + 0x10) = uVar1;
    memcpy((void *)((*(int *)(param_1 + 4) - param_3) + uVar1),param_2,param_3);
  }
  return;
}


// Reference entry 11397d20; body size 22 bytes.
#line 1 "ENTRY_11397d20"

void FUN_11397d20(undefined4 param_1,undefined4 param_2)

{
 try {
  thunk_FUN_11397ee0(param_1,param_2,&stack0x0000000c);
  return;

 } catch (...) { }
}


// Reference entry 1139afd0; body size 56 bytes.
#line 1 "ENTRY_1139afd0"

undefined4 FUN_1139afd0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (((*(ushort *)(param_1 + 8) & 0x202) == 0x202) && (*(char *)(param_1 + 10) == '\x01')) {
      return (undefined4)(*(undefined4 *)(param_1 + 0x10));
    }
    if ((*(ushort *)(param_1 + 8) & 1) == 0) {
      uVar1 = (undefined4)(FUN_1139f3d0(param_1,1));
      return (undefined4)(uVar1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 1139c370; body size 46 bytes.
#line 1 "ENTRY_1139c370"

int FUN_1139c370(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (int)(0);
  bVar1 = (byte)(*param_1);
  while (bVar1 != 0) {
    param_1 = (byte *)(param_1 + 1);
    iVar2 = (int)(((uint)(byte)(&DAT_119fb300)[bVar1] + iVar2) * -0x61c8864f);
    bVar1 = (byte)(*param_1);
  }
  return (int)(iVar2);
}


// Reference entry 1139d960; body size 62 bytes.
#line 1 "ENTRY_1139d960"

byte * FUN_1139d960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)((byte *)FUN_11343830(param_1,param_2,param_3));
  if (pbVar3 != (byte *)0x0) {
    bVar2 = (byte)(*pbVar3);
    pbVar4 = (byte *)(pbVar3);
    while (bVar2 != 0) {
      if (((&DAT_119fb400)[bVar2] & 1) != 0) {
        *pbVar4 = (byte)(0x20);
      }
      pbVar1 = (byte *)(pbVar4 + 1);
      pbVar4 = (byte *)(pbVar4 + 1);
      bVar2 = (byte)(*pbVar1);
    }
  }
  return (byte *)(pbVar3);
}


// Reference entry 113a0f60; body size 25 bytes.
#line 1 "ENTRY_113a0f60"

void FUN_113a0f60(int *param_1)

{
  FUN_113a0d30(param_1);
  *(undefined4 *)(*param_1 + 4) = 1;
  return;
}


// Reference entry 113a10f0; body size 63 bytes.
#line 1 "ENTRY_113a10f0"

void FUN_113a10f0(undefined4 *param_1)

{
  ushort uVar1;
  
  uVar1 = (ushort)(*(ushort *)(param_1 + 2));
  if ((uVar1 & 0x2000) != 0) {
    FUN_1137e990(param_1,*param_1);
    uVar1 = (ushort)(*(ushort *)(param_1 + 2));
  }
  if ((uVar1 & 0x400) != 0) {
    (*(code *)param_1[9])(param_1[4]);
  }
  *(undefined2 *)(param_1 + 2) = 1;
  return;
}


// Reference entry 113a1d40; body size 30 bytes.
#line 1 "ENTRY_113a1d40"

void FUN_113a1d40(int param_1)

{
  FUN_113a1ee0(param_1,1);
  *(undefined4 *)(**(int **)(param_1 + 0x30) + 4) = 1;
  return;
}


// Reference entry 113a2d10; body size 49 bytes.
#line 1 "ENTRY_113a2d10"

void FUN_113a2d10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(ushort *)(param_1 + 2) & 0x2400) != 0) {
    FUN_113a10f0(param_1);
  }
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  *(undefined2 *)(param_1 + 2) = 4;
  return;
}


// Reference entry 113b07a0; body size 23 bytes.
#line 1 "ENTRY_113b07a0"

void * FUN_113b07a0(undefined4 param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  void *_Dst;
  int iVar3;
  size_t _Size;
  
  iVar1 = (int)(FUN_113b08d0(param_1));
  if (iVar1 == 0) {
    return (void *)((void *)0x0);
  }
  sVar2 = (size_t)((*(code *)PTR_WideCharToMultiByte_12122534)(param_2 == 0,0,iVar1,0xffffffff,0,0,0,0));
  if (sVar2 != 0) {
    _Size = (size_t)(sVar2);
    _Dst = (void *)((void *)FUN_11358b90(sVar2,(int)sVar2 >> 0x1f));
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,_Size);
      iVar3 = (int)((*(code *)PTR_WideCharToMultiByte_12122534)
                        (param_2 == 0,0,iVar1,0xffffffff,_Dst,sVar2,0,0));
      if (iVar3 != 0) goto LAB_113b0822;
      thunk_FUN_113949e0(_Dst);
    }
  }
  _Dst = (void *)((void *)0x0);
LAB_113b0822:
  if (DAT_12121e80 == 0) {
    (*(code *)(uint)(DAT_12121ea4))(iVar1);
  }
  else {
    if (DAT_122f6d88 != 0) {
      (*(code *)(uint)(DAT_12121ed0))(DAT_122f6d88);
    }
    iVar3 = (int)((*(code *)(uint)(DAT_12121eac))(iVar1));
    DAT_122f6d28 = (int)(DAT_122f6d28 - iVar3);
    DAT_122f6d4c = (int)(DAT_122f6d4c + -1);
    (*(code *)(uint)(DAT_12121ea4))(iVar1);
    if (DAT_122f6d88 != 0) {
      (*(code *)(uint)(DAT_12121ed8))(DAT_122f6d88);
      return (void *)(_Dst);
    }
  }
  return (void *)(_Dst);
}


// Reference entry 113b99b0; body size 19 bytes.
#line 1 "ENTRY_113b99b0"

undefined4 FUN_113b99b0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (undefined4)(0);
    *(undefined2 *)(param_2 + 1) = 0;
  }
  return (undefined4)(0);
}


// Reference entry 113ba010; body size 20 bytes.
#line 1 "ENTRY_113ba010"

undefined * FUN_113ba010(uint param_1)

{
  if (0x17 < param_1) {
    return (undefined *)((undefined *)0x0);
  }
  return (undefined *)((&PTR_s_NS2_MSG_KEEP_ALIVE_11a03004)[param_1 * 2]);
}


// Reference entry 113bcb10; body size 32 bytes.
#line 1 "ENTRY_113bcb10"

undefined4 FUN_113bcb10(byte *param_1,int param_2,uint *param_3)

{
  if (param_2 != 0) {
    if (*param_1 < 0x18) {
      *param_3 = (uint)((uint)*param_1);
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 113bcd30; body size 48 bytes.
#line 1 "ENTRY_113bcd30"

void FUN_113bcd30(undefined4 param_1,undefined4 *param_2)

{
  undefined1 local_1c [28];
  
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,0x13,0,0);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113bcdf0; body size 48 bytes.
#line 1 "ENTRY_113bcdf0"

void FUN_113bcdf0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 local_1c [28];
  
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,10,0,0);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113bce30; body size 48 bytes.
#line 1 "ENTRY_113bce30"

void FUN_113bce30(undefined4 param_1,undefined4 *param_2)

{
  undefined1 local_1c [28];
  
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,0,0,0);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113bce70; body size 48 bytes.
#line 1 "ENTRY_113bce70"

void FUN_113bce70(undefined4 param_1,undefined4 *param_2)

{
  undefined1 local_1c [28];
  
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,0x16,0,0);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113be100; body size 48 bytes.
#line 1 "ENTRY_113be100"

void FUN_113be100(undefined4 param_1,undefined4 *param_2)

{
  undefined1 local_1c [28];
  
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,0x14,0,0);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113be140; body size 48 bytes.
#line 1 "ENTRY_113be140"

void FUN_113be140(undefined4 param_1,undefined4 *param_2)

{
  undefined1 local_1c [28];
  
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,0x10,0,0);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113be180; body size 48 bytes.
#line 1 "ENTRY_113be180"

void FUN_113be180(undefined4 param_1,undefined4 *param_2)

{
  undefined1 local_1c [28];
  
  thunk_FUN_113c1c50(local_1c,param_1,*param_2,0x15,0,0);
  thunk_FUN_113c1ba0(local_1c,param_2);
  return;
}


// Reference entry 113be290; body size 45 bytes.
#line 1 "ENTRY_113be290"

undefined4 FUN_113be290(int param_1)

{
  if ((*(int *)(param_1 + 2) == 0) && (*(int *)(param_1 + 6) == 0)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 113bf660; body size 33 bytes.
#line 1 "ENTRY_113bf660"

void FUN_113bf660(void *param_1)

{
  if (param_1 != (void *)0x0) {
    thunk_FUN_113e9960(param_1);
    *(undefined2 *)((int)param_1 + 4) = 0;
    free(param_1);
  }
  return;
}


// Reference entry 113bf690; body size 43 bytes.
#line 1 "ENTRY_113bf690"

void * FUN_113bf690(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(malloc(8));
  if (pvVar1 != (void *)0x0) {
    thunk_FUN_113e99a0(pvVar1);
    thunk_FUN_113e9960(pvVar1);
    *(undefined2 *)((int)pvVar1 + 4) = 0;
  }
  return (void *)(pvVar1);
}


// Reference entry 113c08f0; body size 45 bytes.
#line 1 "ENTRY_113c08f0"

uint FUN_113c08f0(int param_1,char *param_2,byte *param_3)

{
  uint in_EAX;
  
  if (*param_2 == '\0') {
    return (uint)(in_EAX & 0xffffff00);
  }
  return (uint)((uint)((uint)(1 < param_1) * 2 + 0x10 + (uint)*param_3 <= *(uint *)(param_2 + 0x10)));
}


// Reference entry 113c5d60; body size 20 bytes.
#line 1 "ENTRY_113c5d60"

void FUN_113c5d60(undefined4 param_1,int param_2,int param_3)

{
  malloc(param_2 * param_3);
  return;
}


// Reference entry 113cfa30; body size 61 bytes.
#line 1 "ENTRY_113cfa30"

undefined1 FUN_113cfa30(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((0x7f < *param_2) && (DAT_122f7134 != '\0')) {
    puVar2 = (undefined4 *)(&DAT_122f73fc);
    for (iVar1 = (int)(0x20); iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = (undefined4)(*puVar2);
      puVar2 = (undefined4 *)(puVar2 + 1);
      param_1 = (undefined4 *)(param_1 + 1);
    }
    *param_2 = (uint)(0x80);
    return (undefined1)(1);
  }
  *param_2 = (uint)(0);
  return (undefined1)(0);
}


// Reference entry 113cfb70; body size 28 bytes.
#line 1 "ENTRY_113cfb70"

void FUN_113cfb70(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined1)(0);
    param_1 = (undefined1 *)(param_1 + 1);
  }
  return;
}


// Reference entry 113d1d90; body size 60 bytes.
#line 1 "ENTRY_113d1d90"

void FUN_113d1d90(char *param_1)

{
  char cVar1;
  
  cVar1 = (char)(*param_1);
  if (cVar1 == '\x02') {
    thunk_FUN_1140e8f0();
    return;
  }
  if (cVar1 == '\x03') {
    thunk_FUN_11410360();
    return;
  }
  if (cVar1 == '\x01') {
    thunk_FUN_11411940();
    return;
  }
                    
                    
                    
  abort();
  return;
}


// Reference entry 113d2fb0; body size 28 bytes.
#line 1 "ENTRY_113d2fb0"

bool FUN_113d2fb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(thunk_FUN_113d8ef0(param_1,param_2));
  iVar2 = (int)(thunk_FUN_114096a0(uVar1));
  return (bool)(iVar2 == 0);
}


// Reference entry 113d35c0; body size 45 bytes.
#line 1 "ENTRY_113d35c0"

uint FUN_113d35c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113d91d0(param_1));
  if (iVar1 == 0) {
    return (uint)(0);
  }
  if (*(int *)(iVar1 + 8) == 0) {
    return (uint)(0);
  }
  return (uint)((*(uint *)(*(int *)(iVar1 + 8) + 4) >> 2 & 0x3c0) >> 3);
}


// Reference entry 113d3650; body size 48 bytes.
#line 1 "ENTRY_113d3650"

void FUN_113d3650(int *param_1)

{
  if (*param_1 == -0x703c1362) {
    *param_1 = (int)(0);
    thunk_FUN_113cfb70(param_1 + 0x13,0x10);
    FUN_1008d97e();
    return;
  }
  return;
}


// Reference entry 113d9fa0; body size 21 bytes.
#line 1 "ENTRY_113d9fa0"

bool FUN_113d9fa0(uint param_1)

{
  return (bool)((param_1 & 0x7fffffff) - 1 < 6);
}


// Reference entry 113da1c0; body size 58 bytes.
#line 1 "ENTRY_113da1c0"

void FUN_113da1c0(int param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 uStack00000009;
  undefined1 uStack0000000a;
  undefined1 uStack0000000b;
  
  uStack00000009 = (undefined1)((undefined1)((uint)param_3 >> 0x10));
  uStack0000000a = (undefined1)((undefined1)((uint)param_3 >> 8));
  uStack0000000b = (undefined1)((undefined1)param_3);
  (**(code **)(*(int *)(param_1 + 0x3c) + 0x14))(param_1,&param_2,4);
  return;
}


// Reference entry 113db910; body size 52 bytes.
#line 1 "ENTRY_113db910"

undefined4 FUN_113db910(short param_1)

{
  int iVar1;
  short sVar2;
  
  iVar1 = (int)(0);
  sVar2 = (short)(0x18);
  do {
    if (sVar2 == param_1) {
      return (undefined4)(*(undefined4 *)(&UNK_11bfcdc4 + iVar1 * 0xc));
    }
    iVar1 = (int)(iVar1 + 1);
    sVar2 = (short)(*(short *)(&UNK_11bfcdc0 + iVar1 * 0xc));
  } while (sVar2 != 0);
  return (undefined4)(0);
}


// Reference entry 113dc7a0; body size 50 bytes.
#line 1 "ENTRY_113dc7a0"

undefined4 FUN_113dc7a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(0);
  iVar2 = (int)(4);
  do {
    if (iVar2 == param_1) {
      return (undefined4)(((uint)((short)((uint)(iVar1 * 3) >> 0x10)) << 16 | (uint)(*(undefined2 *)(&UNK_11bfcdc0 + iVar1 * 0xc))));
    }
    iVar1 = (int)(iVar1 + 1);
    iVar2 = (int)(*(int *)(&UNK_11bfcdc4 + iVar1 * 0xc));
  } while (iVar2 != 0);
  return (undefined4)(0);
}


// Reference entry 113dc7f0; body size 26 bytes.
#line 1 "ENTRY_113dc7f0"

undefined4 FUN_113dc7f0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x34));
  if ((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x38), iVar1 == 0)) {
    return (undefined4)(0xffffffff);
  }
  return (undefined4)(*(undefined4 *)(iVar1 + 0x6c));
}


// Reference entry 113dcf00; body size 40 bytes.
#line 1 "ENTRY_113dcf00"

int FUN_113dcf00(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint3)((uint)(param_1 + -3) >> 8));
  switch(param_1 + -3) {
  case 0:
    return (int)(((uint)(uVar1) << 8 | (uint)(1)));
  default:
    return (int)((uint)uVar1 << 8);
  case 2:
    return (int)(((uint)(uVar1) << 8 | (uint)(2)));
  case 5:
    return (int)(((uint)(uVar1) << 8 | (uint)(3)));
  case 6:
    return (int)(((uint)(uVar1) << 8 | (uint)(4)));
  case 7:
    return (int)(((uint)(uVar1) << 8 | (uint)(5)));
  case 8:
    return (int)(((uint)(uVar1) << 8 | (uint)(6)));
  }
}


// Reference entry 113dcfc0; body size 57 bytes.
#line 1 "ENTRY_113dcfc0"

undefined4 FUN_113dcfc0(undefined1 param_1)

{
  switch(param_1) {
  case 1:
    return (undefined4)(3);
  case 2:
    return (undefined4)(5);
  case 3:
    return (undefined4)(8);
  case 4:
    return (undefined4)(9);
  case 5:
    return (undefined4)(10);
  case 6:
    return (undefined4)(0xb);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 113dd030; body size 33 bytes.
#line 1 "ENTRY_113dd030"

void FUN_113dd030(int param_1,int param_2)

{
  if (*(char *)(param_2 + 9) == '\n') {
    *(undefined1 **)(*(int *)(param_1 + 0x3c) + 0x14) = LAB_113e2360;
    return;
  }
  *(undefined1 **)(*(int *)(param_1 + 0x3c) + 0x14) = LAB_113e2340;
  return;
}


// Reference entry 113dd980; body size 30 bytes.
#line 1 "ENTRY_113dd980"

undefined4 FUN_113dd980(char param_1)

{
  if (param_1 == '\x01') {
    return (undefined4)(1);
  }
  if (param_1 != '\x03') {
    return (undefined4)(0);
  }
  return (undefined4)(4);
}


// Reference entry 113def90; body size 28 bytes.
#line 1 "ENTRY_113def90"

uint FUN_113def90(int param_1)

{
  if (param_1 == 1) {
    return (uint)(1);
  }
  if ((param_1 != 2) && (param_1 - 4U != 0)) {
    return (uint)(param_1 - 4U & 0xffffff00);
  }
  return (uint)(3);
}


// Reference entry 113e0d50; body size 46 bytes.
#line 1 "ENTRY_113e0d50"

undefined4 FUN_113e0d50(undefined4 param_1)

{
  switch(param_1) {
  default:
    return (undefined4)(0x4000);
  case 1:
    return (undefined4)(0x200);
  case 2:
    return (undefined4)(0x400);
  case 3:
    return (undefined4)(0x800);
  case 4:
    return (undefined4)(0x1000);
  }
}


// Reference entry 113e2b00; body size 44 bytes.
#line 1 "ENTRY_113e2b00"

int FUN_113e2b00(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(DAT_122fa560 ^ param_1 ^ param_2);
  return (int)(-1 - ((int)(-(uVar1 >> 1) | -uVar1) >> 0x1f));
}


// Reference entry 113e30a0; body size 45 bytes.
#line 1 "ENTRY_113e30a0"

int FUN_113e30a0(int *param_1)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return (int)(-0x7100);
  }
  if ((0x1a < param_1[1]) && (iVar1 = thunk_FUN_113e5e30(param_1,1,0), iVar1 != 0)) {
    return (int)(iVar1);
  }
  return (int)(0);
}


// Reference entry 113e4820; body size 40 bytes.
#line 1 "ENTRY_113e4820"

void FUN_113e4820(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)param_1[3]);
    free((void *)*param_1);
    free(param_1);
    param_1 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 113e5b80; body size 53 bytes.
#line 1 "ENTRY_113e5b80"

ushort FUN_113e5b80(undefined2 *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = (ushort)(((uint)((char)*param_1) << 8 | (uint)((char)((ushort)*param_1 >> 8))));
  if (param_2 == 1) {
    return (ushort)(~(uVar1 - ((uVar1 == 0xfeff) + 0x201)));
  }
  return (ushort)(uVar1);
}


// Reference entry 113e5f90; body size 22 bytes.
#line 1 "ENTRY_113e5f90"

void FUN_113e5f90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  **(undefined8 **)(param_1 + 100) = 0;
  return;
}


// Reference entry 113e5fb0; body size 23 bytes.
#line 1 "ENTRY_113e5fb0"

void FUN_113e5fb0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}


// Reference entry 113e7aa0; body size 56 bytes.
#line 1 "ENTRY_113e7aa0"

void FUN_113e7aa0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x3c));
  if ((iVar1 != 0) && (*(void **)(iVar1 + 0x480) != (void *)0x0)) {
    *(int *)(iVar1 + 0x448) = *(int *)(iVar1 + 0x448) - *(int *)(iVar1 + 0x484);
    free(*(void **)(iVar1 + 0x480));
    *(undefined4 *)(iVar1 + 0x480) = 0;
  }
  return;
}


// Reference entry 113e9960; body size 41 bytes.
#line 1 "ENTRY_113e9960"

void FUN_113e9960(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != -1)) {
    Ordinal_22(*param_1,2);
    Ordinal_3(*param_1);
    *param_1 = (int)(-1);
  }
  return;
}


// Reference entry 113e9dd0; body size 31 bytes.
#line 1 "ENTRY_113e9dd0"

void FUN_113e9dd0(undefined4 *param_1)

{
  undefined4 local_4;
  
  local_4 = (undefined4)(1);
  Ordinal_10(*param_1,0x8004667e,&local_4);
  return;
}


// Reference entry 113e9f00; body size 33 bytes.
#line 1 "ENTRY_113e9f00"

undefined * FUN_113e9f00(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (undefined *)(&DAT_11bfcf18);
  iVar2 = (int)(0x1302);
  do {
    if (iVar2 == param_1) {
      return (undefined *)(puVar1);
    }
    iVar2 = (int)(*(int *)(puVar1 + 0x10));
    puVar1 = (undefined *)(puVar1 + 0x10);
  } while (iVar2 != 0);
  return (undefined *)((undefined *)0x0);
}


// Reference entry 113e9fd0; body size 39 bytes.
#line 1 "ENTRY_113e9fd0"

undefined4 FUN_113e9fd0(int param_1)

{
  switch(*(undefined1 *)(param_1 + 10)) {
  case 3:
  case 4:
  case 8:
  case 9:
  case 10:
  case 0xb:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 113ea020; body size 32 bytes.
#line 1 "ENTRY_113ea020"

undefined4 FUN_113ea020(int param_1)

{
  switch(*(undefined1 *)(param_1 + 10)) {
  case 5:
  case 6:
  case 7:
  case 8:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 113ea0d0; body size 50 bytes.
#line 1 "ENTRY_113ea0d0"

char * FUN_113ea0d0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (undefined *)(&DAT_11bfcf18);
  iVar2 = (int)(0x1302);
  do {
    if (iVar2 == param_1) {
      if (puVar1 == (undefined *)0x0) {
        return (char *)("unknown");
      }
      return (char *)(*(char **)(puVar1 + 4));
    }
    iVar2 = (int)(*(int *)(puVar1 + 0x10));
    puVar1 = (undefined *)(puVar1 + 0x10);
  } while (iVar2 != 0);
  return (char *)("unknown");
}


// Reference entry 113ea110; body size 38 bytes.
#line 1 "ENTRY_113ea110"

undefined4 FUN_113ea110(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(*(char *)(param_1 + 10));
  if ((cVar1 != '\x02') && (cVar1 != '\x03')) {
    if (cVar1 != '\x04') {
      return (undefined4)(0);
    }
    return (undefined4)(4);
  }
  return (undefined4)(1);
}


// Reference entry 113ea140; body size 49 bytes.
#line 1 "ENTRY_113ea140"

undefined4 FUN_113ea140(int param_1)

{
  switch(*(undefined1 *)(param_1 + 10)) {
  case 1:
  case 2:
  case 3:
  case 7:
    return (undefined4)(1);
  case 4:
    return (undefined4)(4);
  default:
    return (undefined4)(0);
  case 9:
  case 10:
    return (undefined4)(2);
  }
}


// Reference entry 113f16e0; body size 46 bytes.
#line 1 "ENTRY_113f16e0"

undefined4 FUN_113f16e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(0);
  iVar1 = (int)(**(int **)(*param_1 + 0x18));
  while( true ) {
    if (iVar1 == 0) {
      return (undefined4)(0);
    }
    if (iVar1 == param_2) break;
    iVar1 = (int)((*(int **)(*param_1 + 0x18))[iVar2 + 1]);
    iVar2 = (int)(iVar2 + 1);
  }
  return (undefined4)(1);
}


// Reference entry 113fd670; body size 47 bytes.
#line 1 "ENTRY_113fd670"

undefined4 FUN_113fd670(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_2 = (int)(*(int *)(*(int *)(param_1 + 0x3c) + 0x42c));
  *param_3 = (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x430));
  uVar1 = (undefined4)(0);
  if (*param_2 == 0) {
    uVar1 = (undefined4)(0xffff9400);
  }
  return (undefined4)(uVar1);
}


// Reference entry 113ff120; body size 62 bytes.
#line 1 "ENTRY_113ff120"

undefined4 FUN_113ff120(int *param_1,short param_2)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  
  psVar3 = (short *)(*(short **)(*param_1 + 0x80));
  if (psVar3 != (short *)0x0) {
    sVar2 = (short)(*psVar3);
    while (sVar2 != 0) {
      if (sVar2 == param_2) {
        return (undefined4)(1);
      }
      psVar1 = (short *)(psVar3 + 1);
      psVar3 = (short *)(psVar3 + 1);
      sVar2 = (short)(*psVar1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11407d80; body size 44 bytes.
#line 1 "ENTRY_11407d80"

undefined4 FUN_11407d80(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_111c0480(param_1,param_2,"%s key size",param_3));
  if ((-1 < (int)uVar1) && (uVar1 < param_2)) {
    return (undefined4)(0);
  }
  return (undefined4)(0xffffd680);
}


// Reference entry 11408600; body size 55 bytes.
#line 1 "ENTRY_11408600"

char * FUN_11408600(undefined4 param_1)

{
  switch(param_1) {
  default:
    return (char *)((char *)0x0);
  case 3:
    return (char *)("MD5");
  case 5:
    return (char *)("SHA1");
  case 8:
    return (char *)("SHA224");
  case 9:
    return (char *)("SHA256");
  case 10:
    return (char *)("SHA384");
  case 0xb:
    return (char *)("SHA512");
  }
}


// Reference entry 11408f30; body size 30 bytes.
#line 1 "ENTRY_11408f30"

void FUN_11408f30(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && ((HANDLE)*param_1 != (HANDLE)0x0)) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = (undefined4)(0);
  }
  return;
}


// Reference entry 1140ad00; body size 35 bytes.
#line 1 "ENTRY_1140ad00"

undefined4 FUN_1140ad00(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    return (undefined4)(0xffffc180);
  }
  UNRECOVERED_JUMPTABLE = (code *)(*(code **)(*param_1 + 0x18));
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return (undefined4)(0xffffc100);
  }
                    
                    
  uVar1 = (undefined4)((*UNRECOVERED_JUMPTABLE)());
  return (undefined4)(uVar1);
}


// Reference entry 1140ad60; body size 35 bytes.
#line 1 "ENTRY_1140ad60"

undefined4 FUN_1140ad60(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    return (undefined4)(0xffffc180);
  }
  UNRECOVERED_JUMPTABLE = (code *)(*(code **)(*param_1 + 0x1c));
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return (undefined4)(0xffffc100);
  }
                    
                    
  uVar1 = (undefined4)((*UNRECOVERED_JUMPTABLE)());
  return (undefined4)(uVar1);
}


// Reference entry 1140add0; body size 26 bytes.
#line 1 "ENTRY_1140add0"

undefined4 FUN_1140add0(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
                    
                    
    uVar1 = (undefined4)((**(code **)(*param_1 + 8))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 1140b600; body size 44 bytes.
#line 1 "ENTRY_1140b600"

undefined * FUN_1140b600(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return (undefined *)(&DAT_11c00418);
  case 2:
    return (undefined *)(&DAT_11c00448);
  case 3:
    return (undefined *)(&DAT_11c00478);
  case 4:
    return (undefined *)(&DAT_11c004a8);
  default:
    return (undefined *)((undefined *)0x0);
  }
}


// Reference entry 1140c060; body size 34 bytes.
#line 1 "ENTRY_1140c060"

void FUN_1140c060(void *param_1)

{
  void *pvVar1;
  
  while (param_1 != (void *)0x0) {
    pvVar1 = (void *)(*(void **)((int)param_1 + 0x18));
    free(param_1);
    param_1 = (void *)(pvVar1);
  }
  return;
}


// Reference entry 1140c7a0; body size 34 bytes.
#line 1 "ENTRY_1140c7a0"

void FUN_1140c7a0(void *param_1)

{
  void *pvVar1;
  
  while (param_1 != (void *)0x0) {
    pvVar1 = (void *)(*(void **)((int)param_1 + 0xc));
    free(param_1);
    param_1 = (void *)(pvVar1);
  }
  return;
}


// Reference entry 1140d440; body size 34 bytes.
#line 1 "ENTRY_1140d440"

undefined4 FUN_1140d440(int *param_1)

{
  undefined4 uVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[2] != 0)) {
    uVar1 = (undefined4)(FUN_1005ef7a());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0xffffaf00);
}


// Reference entry 1140d570; body size 58 bytes.
#line 1 "ENTRY_1140d570"

undefined * FUN_1140d570(undefined4 param_1)

{
  switch(param_1) {
  case 3:
    return (undefined *)(&DAT_11bfe690);
  default:
    return (undefined *)((undefined *)0x0);
  case 5:
    return (undefined *)(&DAT_11bfe698);
  case 8:
    return (undefined *)(&DAT_11bfe6a0);
  case 9:
    return (undefined *)(&DAT_11bfe6a8);
  case 10:
    return (undefined *)(&DAT_11bfe6b0);
  case 0xb:
    return (undefined *)(&DAT_11bfe6b8);
  }
}


// Reference entry 1140d5f0; body size 19 bytes.
#line 1 "ENTRY_1140d5f0"

void FUN_1140d5f0(undefined8 *param_1)

{
  *param_1 = (undefined8)(0);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


// Reference entry 1140e740; body size 57 bytes.
#line 1 "ENTRY_1140e740"

void FUN_1140e740(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (undefined4)(param_2[1]);
  uVar2 = (undefined4)(param_2[2]);
  uVar3 = (undefined4)(param_2[3]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  param_1[2] = (undefined4)(uVar2);
  param_1[3] = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_2[5]);
  uVar2 = (undefined4)(param_2[6]);
  uVar3 = (undefined4)(param_2[7]);
  param_1[4] = (undefined4)(param_2[4]);
  param_1[5] = (undefined4)(uVar1);
  param_1[6] = (undefined4)(uVar2);
  param_1[7] = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_2[9]);
  uVar2 = (undefined4)(param_2[10]);
  uVar3 = (undefined4)(param_2[0xb]);
  param_1[8] = (undefined4)(param_2[8]);
  param_1[9] = (undefined4)(uVar1);
  param_1[10] = (undefined4)(uVar2);
  param_1[0xb] = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_2[0xd]);
  uVar2 = (undefined4)(param_2[0xe]);
  uVar3 = (undefined4)(param_2[0xf]);
  param_1[0xc] = (undefined4)(param_2[0xc]);
  param_1[0xd] = (undefined4)(uVar1);
  param_1[0xe] = (undefined4)(uVar2);
  param_1[0xf] = (undefined4)(uVar3);
  uVar1 = (undefined4)(param_2[0x11]);
  uVar2 = (undefined4)(param_2[0x12]);
  uVar3 = (undefined4)(param_2[0x13]);
  param_1[0x10] = (undefined4)(param_2[0x10]);
  param_1[0x11] = (undefined4)(uVar1);
  param_1[0x12] = (undefined4)(uVar2);
  param_1[0x13] = (undefined4)(uVar3);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  return;
}


// Reference entry 114101c0; body size 20 bytes.
#line 1 "ENTRY_114101c0"

void FUN_114101c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = (int)(0x17); iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = (undefined4)(*param_2);
    param_2 = (undefined4 *)(param_2 + 1);
    param_1 = (undefined4 *)(param_1 + 1);
  }
  return;
}


// Reference entry 114116a0; body size 20 bytes.
#line 1 "ENTRY_114116a0"

void FUN_114116a0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = (int)(0x1b); iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = (undefined4)(*param_2);
    param_2 = (undefined4 *)(param_2 + 1);
    param_1 = (undefined4 *)(param_1 + 1);
  }
  return;
}


// Reference entry 114156d0; body size 44 bytes.
#line 1 "ENTRY_114156d0"

uint FUN_114156d0(int *param_1,uint param_2)

{
  if ((uint)*(ushort *)((int)param_1 + 6) * 0x20 <= param_2) {
    return (uint)(0);
  }
  return (uint)(*(uint *)(*param_1 + (param_2 >> 5) * 4) >> ((byte)param_2 & 0x1f) & 1);
}


// Reference entry 11417820; body size 31 bytes.
#line 1 "ENTRY_11417820"

undefined4 FUN_11417820(undefined4 *param_1,undefined4 param_2)

{
  if (*(short *)((int)param_1 + 6) != 0) {
    thunk_FUN_11448410(*param_1,*(short *)((int)param_1 + 6),param_2);
  }
  return (undefined4)(0);
}


// Reference entry 114194c0; body size 45 bytes.
#line 1 "ENTRY_114194c0"

int FUN_114194c0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(DAT_122fa560 ^ param_1 ^ param_2);
  return (int)((int)(-(uVar1 >> 1) | -uVar1) >> 0x1f);
}


// Reference entry 1141a470; body size 16 bytes.
#line 1 "ENTRY_1141a470"

void FUN_1141a470(void)

{
  thunk_FUN_11413ac0();
  return;
}


// Reference entry 1141a680; body size 38 bytes.
#line 1 "ENTRY_1141a680"

void FUN_1141a680(undefined4 *param_1)

{
  memset(param_1,0,0x7c);
  *param_1 = (undefined4)(1);
                    
                    
  (*(code *)PTR_FUN_12126b48)();
  return;
}


// Reference entry 1141c450; body size 63 bytes.
#line 1 "ENTRY_1141c450"

undefined4
FUN_1141c450(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x70) == 1) && ((*(int *)(param_1 + 0x74) != 0 || (param_4 != 0)))) {
    uVar1 = (undefined4)(FUN_1141d980(param_1,param_2,param_3,param_4,param_5,param_6,0xffffffff,param_7));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0xffffbf80);
}


// Reference entry 1141f3b0; body size 56 bytes.
#line 1 "ENTRY_1141f3b0"

undefined4 FUN_1141f3b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 6) {
    return (undefined4)(0xffffb180);
  }
  iVar1 = (int)(thunk_FUN_11436790(param_1,&param_1));
  if (iVar1 != 0) {
    return (undefined4)(0xffffc600);
  }
  uVar2 = (undefined4)(thunk_FUN_11440330(param_2,param_1));
  return (undefined4)(uVar2);
}


// Reference entry 11420a00; body size 61 bytes.
#line 1 "ENTRY_11420a00"

undefined4 FUN_11420a00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = (undefined4)(thunk_FUN_114228a0(param_1,param_3,param_4));
    return (undefined4)(uVar1);
  }
  if (param_2 != 0) {
    return (undefined4)(0xffffffdf);
  }
  uVar1 = (undefined4)(thunk_FUN_11422150(param_1,param_3,param_4));
  return (undefined4)(uVar1);
}


// Reference entry 114233e0; body size 62 bytes.
#line 1 "ENTRY_114233e0"

void FUN_114233e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [128];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&iStack_8c);
  if (param_1[4] == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  iVar4 = (int)(0);
  uVar2 = (undefined4)(0);
  puVar1 = (undefined4 *)(param_1);
  if (0 < (int)param_1[4]) {
    do {
      iStack_8c = (int)(0);
      if (puVar1[9] == 1) {
        uVar2 = (undefined4)(1);
      }
      uStack_88 = (undefined4)(uVar2);
      iVar3 = (int)((*(code *)puVar1[5])(puVar1[6],auStack_84,0x80,&iStack_8c));
      if (iVar3 != 0) break;
      if (iStack_8c != 0) {
        iVar3 = (int)(FUN_11423510(param_1,iVar4,auStack_84,iStack_8c));
        if (iVar3 != 0) goto LAB_114234b2;
        puVar1[7] = (undefined4)(puVar1[7] + iStack_8c);
      }
      iVar4 = (int)(iVar4 + 1);
      uVar2 = (undefined4)(uStack_88);
      puVar1 = (undefined4 *)(puVar1 + 5);
    } while (iVar4 < (int)param_1[4]);
  }
  thunk_FUN_11423ed0(auStack_84,0x80);
LAB_114234b2:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11423ed0; body size 28 bytes.
#line 1 "ENTRY_11423ed0"

void FUN_11423ed0(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined1)(0);
    param_1 = (undefined1 *)(param_1 + 1);
  }
  return;
}


// Reference entry 11423f00; body size 38 bytes.
#line 1 "ENTRY_11423f00"

void FUN_11423f00(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(param_1);
  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *puVar1 = (undefined1)(0);
      puVar1 = (undefined1 *)(puVar1 + 1);
    }
  }
  free(param_1);
  return;
}


// Reference entry 11425630; body size 32 bytes.
#line 1 "ENTRY_11425630"

undefined4 FUN_11425630(int param_1,int param_2)

{
  if ((param_2 != 0) && (param_2 != 1)) {
    return (undefined4)(0xffffb080);
  }
  *(int *)(param_1 + 0x68) = param_2;
  return (undefined4)(0);
}


// Reference entry 11427d10; body size 58 bytes.
#line 1 "ENTRY_11427d10"

undefined4 FUN_11427d10(int param_1,size_t param_2)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    return (undefined4)(0xffffff75);
  }
  pvVar1 = (void *)(calloc(1,param_2));
  *(void **)(param_1 + 0x20) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return (undefined4)(0xffffff73);
  }
  *(size_t *)(param_1 + 0x24) = param_2;
  return (undefined4)(0);
}


// Reference entry 114294e0; body size 38 bytes.
#line 1 "ENTRY_114294e0"

undefined4 FUN_114294e0(int param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    return (undefined4)(0xffffff77);
  }
  *param_2 = (undefined8)(*(undefined8 *)(param_1 + 0x30));
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x38);
  return (undefined4)(0);
}


// Reference entry 1142c330; body size 51 bytes.
#line 1 "ENTRY_1142c330"

undefined4 FUN_1142c330(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    return (undefined4)(0);
  }
  if (*param_1 != 1) {
    *param_1 = (int)(0);
    return (undefined4)(0xffffff77);
  }
  uVar1 = (undefined4)(thunk_FUN_1144dbb0(param_1 + 2));
  *param_1 = (int)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1142f800; body size 19 bytes.
#line 1 "ENTRY_1142f800"

int FUN_1142f800(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  size_t _Size;
  void *_Dst;
  void *_Src;
  int iStack_10;
  void *pvStack_c;
  void *pvStack_8;
  size_t sStack_4;
  
  if (param_3 != 0x20) {
    return (int)(-0x87);
  }
  _Src = (void *)((void *)0x0);
  pvStack_c = (void *)((void *)0x0);
  pvStack_8 = (void *)((void *)0x0);
  sStack_4 = (size_t)(0);
  iStack_10 = (int)(0);
  param_3 = (int)(0);
  puVar4 = (undefined4 *)(calloc(0x20,1));
  if (puVar4 == (undefined4 *)0x0) {
    _Size = (size_t)(0);
    _Dst = (void *)((void *)0x0);
    iVar6 = (int)(-0x8d);
  }
  else {
    param_3 = (int)(0x20);
    uVar1 = (undefined4)(param_1[1]);
    uVar2 = (undefined4)(param_1[2]);
    uVar3 = (undefined4)(param_1[3]);
    *puVar4 = (undefined4)(*param_1);
    puVar4[1] = (undefined4)(uVar1);
    puVar4[2] = (undefined4)(uVar2);
    puVar4[3] = (undefined4)(uVar3);
    uVar1 = (undefined4)(param_1[5]);
    uVar2 = (undefined4)(param_1[6]);
    uVar3 = (undefined4)(param_1[7]);
    puVar4[4] = (undefined4)(param_1[4]);
    puVar4[5] = (undefined4)(uVar1);
    puVar4[6] = (undefined4)(uVar2);
    puVar4[7] = (undefined4)(uVar3);
    iVar6 = (int)(thunk_FUN_11429910(param_2,0x20,&pvStack_c));
    _Src = (void *)(pvStack_8);
    _Size = (size_t)(sStack_4);
    _Dst = (void *)(pvStack_c);
    if (iVar6 == 0) {
      iVar5 = (int)(thunk_FUN_1144dd80(0x2000009,puVar4,0x20,pvStack_8,0x20,&iStack_10));
      _Size = (size_t)(sStack_4);
      _Dst = (void *)(pvStack_c);
      iVar6 = (int)(-0x86);
      if (iVar5 != -0x86) {
        iVar6 = (int)(iVar5);
      }
    }
  }
  thunk_FUN_11423f00(puVar4,param_3);
  if (_Src != (void *)0x0) {
    if (_Dst == (void *)0x0) {
      return (int)(-0x97);
    }
    if (_Size != 0) {
      memcpy(_Dst,_Src,_Size);
    }
    thunk_FUN_11423f00(_Src,_Size);
  }
  if (iVar6 == 0) {
    iVar6 = (int)(0);
    if (iStack_10 != 0x20) {
      iVar6 = (int)(-0x84);
    }
    return (int)(iVar6);
  }
  return (int)(iVar6);
}


// Reference entry 11437ac0; body size 49 bytes.
#line 1 "ENTRY_11437ac0"

void FUN_11437ac0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      thunk_FUN_11423f00(*param_1,param_1[1]);
    }
    free((void *)param_1[2]);
    thunk_FUN_11423ed0(param_1,0xc);
  }
  return;
}


// Reference entry 11437b00; body size 19 bytes.
#line 1 "ENTRY_11437b00"

void FUN_11437b00(undefined8 *param_1)

{
  *param_1 = (undefined8)(0);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


// Reference entry 11439e00; body size 57 bytes.
#line 1 "ENTRY_11439e00"

int FUN_11439e00(int param_1,undefined4 param_2,void *param_3,uint param_4,byte param_5,
                undefined1 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  thunk_FUN_114157a0(local_10);
  thunk_FUN_114157a0(local_8);
  iVar6 = (int)(thunk_FUN_114156d0(param_1 + 0x34,0));
  if (iVar6 == 1) {
    iVar6 = (int)(thunk_FUN_114156d0(param_2,0));
    *param_6 = (undefined1)(iVar6 == 0);
    iVar6 = (int)(thunk_FUN_11413d00(local_10,param_2));
    if (((iVar6 == 0) && (iVar6 = thunk_FUN_11417bb0(local_8,param_1 + 0x34,param_2), iVar6 == 0))
       && (iVar6 = thunk_FUN_11417320(local_10,local_8,*param_6), iVar6 == 0)) {
      memset(param_3,0,param_4 + 1);
      if (param_4 != 0) {
        uVar8 = (uint)(0);
        do {
          uVar9 = (uint)(0);
          uVar10 = (uint)(uVar8);
          if (param_5 != 0) {
            do {
              cVar4 = (char)(thunk_FUN_114156d0(local_10,uVar10));
              bVar5 = (byte)((byte)uVar9);
              uVar9 = (uint)(uVar9 + 1);
              *(byte *)((int)param_3 + uVar8) =
                   *(byte *)((int)param_3 + uVar8) | cVar4 << (bVar5 & 0x1f);
              uVar10 = (uint)(uVar10 + param_4);
            } while (uVar9 < param_5);
          }
          uVar8 = (uint)(uVar8 + 1);
        } while (uVar8 < param_4);
      }
      bVar5 = (byte)(0);
      uVar8 = (uint)(1);
      if (param_4 != 0) {
        do {
          bVar2 = (byte)(*(byte *)(uVar8 + (int)param_3));
          bVar7 = (byte)(bVar2 ^ bVar5);
          cVar4 = (char)('\x01' - (bVar7 & 1));
          bVar3 = (byte)(*(char *)((uVar8 - 1) + (int)param_3) * cVar4);
          pbVar1 = (byte *)((byte *)((uVar8 - 1) + (int)param_3));
          *pbVar1 = (byte)(*pbVar1 | cVar4 * -0x80);
          *(byte *)(uVar8 + (int)param_3) = bVar3 ^ bVar7;
          bVar5 = (byte)(bVar3 & bVar7 | bVar2 & bVar5);
          uVar8 = (uint)(uVar8 + 1);
        } while (uVar8 <= param_4);
      }
    }
    thunk_FUN_11414d70(local_8);
    thunk_FUN_11414d70(local_10);
    return (int)(iVar6);
  }
  return (int)(-0x4f80);
}


// Reference entry 1143e930; body size 24 bytes.
#line 1 "ENTRY_1143e930"

bool FUN_1143e930(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11413b90(param_1 + 0x10,0));
  return (bool)(iVar1 == 0);
}


// Reference entry 1143ea00; body size 54 bytes.
#line 1 "ENTRY_1143ea00"

void FUN_1143ea00(int param_1)

{
  thunk_FUN_1143e810(param_1);
  thunk_FUN_114157a0(param_1 + 0x60);
  thunk_FUN_114157a0(param_1 + 0x68);
  thunk_FUN_114157a0(param_1 + 0x70);
  thunk_FUN_114157a0();
  return;
}


// Reference entry 1143ea90; body size 23 bytes.
#line 1 "ENTRY_1143ea90"

undefined4 FUN_1143ea90(void)

{
  undefined4 uVar1;
  int in_stack_00000014;
  
  if (in_stack_00000014 == 0) {
    return (undefined4)(0xffffb080);
  }
  uVar1 = (undefined4)(FUN_1143b9b0());
  return (undefined4)(uVar1);
}


// Reference entry 1143f0b0; body size 42 bytes.
#line 1 "ENTRY_1143f0b0"

void FUN_1143f0b0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_11414d70(param_1);
    thunk_FUN_11414d70(param_1 + 8);
    thunk_FUN_11414d70();
    return;
  }
  return;
}


// Reference entry 1143f0f0; body size 36 bytes.
#line 1 "ENTRY_1143f0f0"

void FUN_1143f0f0(int param_1)

{
  thunk_FUN_114157a0(param_1);
  thunk_FUN_114157a0(param_1 + 8);
  thunk_FUN_114157a0();
  return;
}


// Reference entry 114402a0; body size 16 bytes.
#line 1 "ENTRY_114402a0"

void FUN_114402a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}


// Reference entry 11442340; body size 20 bytes.
#line 1 "ENTRY_11442340"

void FUN_11442340(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = (int)(0x36); iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = (undefined4)(*param_2);
    param_2 = (undefined4 *)(param_2 + 1);
    param_1 = (undefined4 *)(param_1 + 1);
  }
  return;
}


// Reference entry 114470e0; body size 47 bytes.
#line 1 "ENTRY_114470e0"

void FUN_114470e0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  if ((param_2 != 0) && (puVar3 = param_1 + param_2 + -1, param_1 <= puVar3)) {
    do {
      uVar1 = (uint)(*puVar3);
      uVar2 = (uint)(*param_1);
      *param_1 = (uint)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
      param_1 = (uint *)(param_1 + 1);
      *puVar3 = (uint)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
      puVar3 = (uint *)(puVar3 + -1);
    } while (param_1 <= puVar3);
  }
  return;
}


// Reference entry 11447120; body size 59 bytes.
#line 1 "ENTRY_11447120"

int FUN_11447120(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    iVar2 = (int)(param_2);
    param_2 = (int)(iVar2 + -1);
    if (param_2 < 0) {
      return (int)(0);
    }
    uVar1 = (uint)(*(uint *)(param_1 + param_2 * 4));
  } while (uVar1 == 0);
  uVar4 = (uint)(0x80000000);
  uVar3 = (uint)(0);
  do {
    if ((uVar4 & uVar1) != 0) break;
    uVar3 = (uint)(uVar3 + 1);
    uVar4 = (uint)(uVar4 >> 1);
  } while (uVar3 < 0x20);
  return (int)(iVar2 * 0x20 - uVar3);
}


// Reference entry 11447170; body size 54 bytes.
#line 1 "ENTRY_11447170"

int FUN_11447170(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(0);
  uVar2 = (uint)(0);
  if (param_2 != 0) {
    do {
      iVar1 = (int)(uVar2 * 4);
      uVar2 = (uint)(uVar2 + 1);
      uVar3 = (uint)(uVar3 | *(uint *)(param_1 + iVar1));
    } while (uVar2 < param_2);
  }
  return (int)((int)(-((DAT_122fa560 ^ uVar3) >> 1) | -(DAT_122fa560 ^ uVar3)) >> 0x1f);
}


// Reference entry 11447da0; body size 60 bytes.
#line 1 "ENTRY_11447da0"

int FUN_11447da0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(0x20);
  iVar1 = (int)(*param_1);
  uVar2 = (uint)((iVar1 * 2 + 4U & 8) + iVar1);
  do {
    uVar3 = (uint)(uVar3 >> 1);
    uVar2 = (uint)(uVar2 * (2 - iVar1 * uVar2));
  } while (7 < uVar3);
  return (int)(~uVar2 + 1);
}


// Reference entry 1144d660; body size 47 bytes.
#line 1 "ENTRY_1144d660"

undefined4 FUN_1144d660(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == 0x5500100) {
    uVar1 = (undefined4)(thunk_FUN_11445f70(param_1 + 4,param_2,param_3,(char)param_1[3]));
    uVar1 = (undefined4)(thunk_FUN_114262c0(uVar1));
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 1144db20; body size 28 bytes.
#line 1 "ENTRY_1144db20"

undefined4 FUN_1144db20(int param_1)

{
  undefined4 uVar1;
  
  if (0xff < *(uint *)(param_1 + 4)) {
    return (undefined4)(0xffffff79);
  }
  uVar1 = (undefined4)(thunk_FUN_1142b1a0());
  return (undefined4)(uVar1);
}


// Reference entry 11450930; body size 62 bytes.
#line 1 "ENTRY_11450930"

undefined4 FUN_11450930(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 & 0xffffff00) != 0x7000300) {
    param_1 = (uint)(0);
  }
  iVar1 = (int)(thunk_FUN_1140d570(param_1 & 0xff));
  if (iVar1 == 0) {
    return (undefined4)(0xffffff7a);
  }
  uVar2 = (undefined4)(thunk_FUN_1141c860(param_2,1,param_1 & 0xff));
  return (undefined4)(uVar2);
}


// Reference entry 11452100; body size 58 bytes.
#line 1 "ENTRY_11452100"

undefined4 FUN_11452100(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) == 2) {
      iVar2 = (int)(*(int *)(param_1 + 0x1c));
    }
    else {
      if (*(int *)(param_1 + 0x18) != 3) {
        return (undefined4)(0xffffff69);
      }
      iVar2 = (int)(*(int *)(param_1 + 0x1c));
      if (iVar2 == 1) {
        uVar1 = (undefined4)(thunk_FUN_114343d0());
        return (undefined4)(uVar1);
      }
    }
    if (iVar2 == 0) {
      return (undefined4)(0xffffff69);
    }
    *(int *)(param_1 + 0x1c) = iVar2 + -1;
  }
  return (undefined4)(0);
}


// Reference entry 11452210; body size 59 bytes.
#line 1 "ENTRY_11452210"

void FUN_11452210(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(&DAT_122fa598);
  iVar2 = (int)(0x20);
  do {
    puVar1[1] = (undefined4)(1);
    *puVar1 = (undefined4)(3);
    thunk_FUN_114343d0(puVar1 + -6);
    puVar1 = (undefined4 *)(puVar1 + 10);
    iVar2 = (int)(iVar2 + -1);
  } while (iVar2 != 0);
  DAT_122faa80 = (int)(0);
  return;
}


// Reference entry 114556e0; body size 55 bytes.
#line 1 "ENTRY_114556e0"

undefined1 FUN_114556e0(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_11458700());
  if (cVar1 != '\0') {
    return (undefined1)(4);
  }
  cVar1 = (char)(thunk_FUN_114586f0());
  if (cVar1 != '\0') {
    return (undefined1)(2);
  }
  cVar1 = (char)(thunk_FUN_11458860());
  return (undefined1)(cVar1 != '\0');
}


// Reference entry 11456d50; body size 51 bytes.
#line 1 "ENTRY_11456d50"

undefined4 FUN_11456d50(undefined4 param_1)

{
  switch(param_1) {
  case 0x15:
  case 0x1a:
  case 0x22:
  case 0x27:
  case 0x38:
    return (undefined4)(0);
  default:
    return (undefined4)(0xffffffff);
  case 0x1c:
    return (undefined4)(1);
  case 0x1f:
    return (undefined4)(3);
  case 0x20:
  case 0x21:
    return (undefined4)(2);
  }
}


// Reference entry 11456de0; body size 45 bytes.
#line 1 "ENTRY_11456de0"

undefined4 FUN_11456de0(undefined4 param_1)

{
  switch(param_1) {
  case 0x10:
  case 0x14:
  case 0x18:
  case 0x1c:
  case 0x1d:
  case 0x20:
  case 0x23:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x30:
  case 0x32:
  case 0x37:
  case 0x38:
  case 0x3a:
    return (undefined4)(0);
  default:
    return (undefined4)(1);
  case 0x12:
    return (undefined4)(2);
  case 0x31:
  case 0x3d:
  case 0x3e:
    return (undefined4)(0xffffffff);
  }
}


// Reference entry 11456f80; body size 47 bytes.
#line 1 "ENTRY_11456f80"

undefined4 __fastcall FUN_11456f80(int *param_1)

{
  char cVar1;
  
  if ((param_1[0x35] & 0x1010000U) == 0) {
    cVar1 = (char)((**(code **)(*param_1 + 4))());
    if ((cVar1 != '\0') || (((byte)param_1[0x36] & 0xf) == 6)) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11457440; body size 20 bytes.
#line 1 "ENTRY_11457440"

undefined4 FUN_11457440(uint param_1)

{
  if ((param_1 < 0x3f) && (param_1 != 0x1b)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 114574b0; body size 50 bytes.
#line 1 "ENTRY_114574b0"

undefined4 FUN_114574b0(int param_1)

{
  if (((((param_1 != 0x29) && (param_1 != 0x2e)) && (param_1 != 0x30)) &&
      ((param_1 != 0x2b && (param_1 != 0x37)))) &&
     ((param_1 != 0x39 && ((param_1 != 0x3a && (param_1 != 0x3b)))))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11457c60; body size 30 bytes.
#line 1 "ENTRY_11457c60"

undefined4 FUN_11457c60(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x37:
  case 0x38:
  case 0x3a:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 11457d20; body size 25 bytes.
#line 1 "ENTRY_11457d20"

undefined4 FUN_11457d20(int param_1)

{
  if (((param_1 != 0x1d) && (param_1 != 0x23)) && (param_1 != 0x37)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11457ec0; body size 32 bytes.
#line 1 "ENTRY_11457ec0"

undefined4 FUN_11457ec0(undefined4 param_1)

{
  switch(param_1) {
  case 0x16:
  case 0x17:
  case 0x1d:
  case 0x21:
  case 0x23:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 11457fd0; body size 32 bytes.
#line 1 "ENTRY_11457fd0"

undefined4 FUN_11457fd0(undefined4 param_1)

{
  switch(param_1) {
  case 0x29:
  case 0x2b:
  case 0x2f:
  case 0x30:
  case 0x3a:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 11458170; body size 30 bytes.
#line 1 "ENTRY_11458170"

undefined4 FUN_11458170(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 2:
  case 3:
  case 5:
  case 7:
  case 9:
  case 10:
  case 0xe:
  case 0x11:
  case 0x1f:
  case 0x20:
  case 0x2c:
    return (undefined4)(1);
  default:
    return (undefined4)(0);
  }
}


// Reference entry 11458880; body size 28 bytes.
#line 1 "ENTRY_11458880"

undefined4 __fastcall FUN_11458880(int param_1)

{
  if (((*(byte *)(param_1 + 0xd6) & 1) == 0) && ((*(uint *)(param_1 + 0xdc) >> 0x1d & 1) == 0)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 11458940; body size 20 bytes.
#line 1 "ENTRY_11458940"

undefined4 __fastcall FUN_11458940(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xd8) & 0x30000000);
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(uVar1 == 0x30000000)));
}


// Reference entry 11458970; body size 27 bytes.
#line 1 "ENTRY_11458970"

int __fastcall FUN_11458970(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xd0));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if (((iVar1 != 0x1d) && (iVar1 != 0x23)) && (iVar1 != 0x37)) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 11458ad0; body size 29 bytes.
#line 1 "ENTRY_11458ad0"

undefined4 __fastcall FUN_11458ad0(int param_1)

{
  if (((*(uint *)(param_1 + 0xd4) >> 0x1a & 1) != 0) && ((*(uint *)(param_1 + 0xd4) & 0x6000) != 0))
  {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 114591a0; body size 37 bytes.
#line 1 "ENTRY_114591a0"

void __fastcall FUN_114591a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_SettingsFile);
  _Mtx_destroy_in_situ(param_1 + 2);
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
  }
  return;
}


// Reference entry 11459280; body size 61 bytes.
#line 1 "ENTRY_11459280"

undefined4 * __thiscall Recovered_Bulk::FUN_11459280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_SettingsFile);
  _Mtx_destroy_in_situ(param_1 + 2);
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 114593e0; body size 18 bytes.
#line 1 "ENTRY_114593e0"

void __stdcall FUN_114593e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11459ad0(param_1,param_2,0);
  return;
}


// Reference entry 11459400; body size 63 bytes.
#line 1 "ENTRY_11459400"

bool __fastcall FUN_11459400(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(0);
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = (int)(0);
    do {
      iVar2 = (int)(iVar2 + 0xc);
      uVar1 = (uint)(uVar1 + 1);
      *(undefined1 *)(*(int *)(param_1 + 8) + -4 + iVar2) = 0;
    } while (uVar1 < *(uint *)(param_1 + 0xc));
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  iVar2 = (int)(thunk_FUN_1145cb70(*(undefined4 *)(param_1 + 0x14),&DAT_118b3060));
  *(int *)(param_1 + 0x18) = iVar2;
  return (bool)(iVar2 != 0);
}


// Reference entry 1145a270; body size 34 bytes.
#line 1 "ENTRY_1145a270"

void FUN_1145a270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_2,param_3,param_4,&stack0x00000014);
  }
  return;

 } catch (...) { }
}


// Reference entry 1145a2b0; body size 39 bytes.
#line 1 "ENTRY_1145a2b0"

void __stdcall FUN_1145a2b0(undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = (undefined4)(param_1);
  local_8 = (undefined4)(0);
  thunk_FUN_11459ad0(&local_c,1,1);
  return;
}


// Reference entry 1145a2e0; body size 39 bytes.
#line 1 "ENTRY_1145a2e0"

void __stdcall FUN_1145a2e0(undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = (undefined4)(param_1);
  local_8 = (undefined4)(0);
  thunk_FUN_11459ad0(&local_c,1,0);
  return;
}


// Reference entry 1145a730; body size 38 bytes.
#line 1 "ENTRY_1145a730"

void __stdcall FUN_1145a730(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = (undefined4)(param_1);
  local_8 = (undefined4)(param_2);
  thunk_FUN_11459ad0(&local_c,1,0);
  return;
}


// Reference entry 1145a880; body size 54 bytes.
#line 1 "ENTRY_1145a880"

undefined4 __thiscall Recovered_Bulk::FUN_1145a880(undefined4 param_2,uint param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_111c0480(param_2,param_3,"%u.%u-%05u",*(undefined1 *)(param_1 + 1),
                             *(undefined1 *)(param_1 + 2),*(undefined4 *)(param_1 + 4)));
  if ((0 < (int)uVar1) && (uVar1 < param_3)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1145aba0; body size 32 bytes.
#line 1 "ENTRY_1145aba0"

void FUN_1145aba0(undefined4 param_1)

{
  undefined1 local_8 [8];
  
  thunk_FUN_1145c930(local_8,0);
  thunk_FUN_1145ae30(local_8,param_1);
  return;
}


// Reference entry 1145abd0; body size 61 bytes.
#line 1 "ENTRY_1145abd0"

undefined4 FUN_1145abd0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_8 [8];
  
  thunk_FUN_1145c930(local_8,0);
  cVar1 = (char)(thunk_FUN_1145af00(param_1,local_8));
  if (cVar1 != '\0') {
    uVar2 = (undefined4)(thunk_FUN_1145ae30(param_1,local_8));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 1145ac40; body size 20 bytes.
#line 1 "ENTRY_1145ac40"

void __fastcall FUN_1145ac40(int *param_1)

{
  undefined1 local_8 [8];
  
  (**(code **)(*param_1 + 4))(local_8);
  return;
}


// Reference entry 1145ac80; body size 20 bytes.
#line 1 "ENTRY_1145ac80"

void __fastcall FUN_1145ac80(int *param_1)

{
  undefined1 local_8 [8];
  
  (**(code **)(*param_1 + 4))(local_8);
  return;
}


// Reference entry 1145acc0; body size 20 bytes.
#line 1 "ENTRY_1145acc0"

void __fastcall FUN_1145acc0(int *param_1)

{
  undefined1 local_8 [8];
  
  (**(code **)(*param_1 + 4))(local_8);
  return;
}


// Reference entry 1145af00; body size 30 bytes.
#line 1 "ENTRY_1145af00"

undefined4 FUN_1145af00(int *param_1,int *param_2)

{
  if ((*param_1 <= *param_2) && ((*param_1 != *param_2 || (param_1[1] < param_2[1])))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1145af30; body size 30 bytes.
#line 1 "ENTRY_1145af30"

undefined4 FUN_1145af30(int *param_1,int *param_2)

{
  if ((*param_1 <= *param_2) && ((*param_1 != *param_2 || (param_1[1] <= param_2[1])))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1145af90; body size 24 bytes.
#line 1 "ENTRY_1145af90"

undefined4 FUN_1145af90(int *param_1)

{
  if ((*param_1 == 0x7fffffff) && (param_1[1] == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1145afb0; body size 21 bytes.
#line 1 "ENTRY_1145afb0"

undefined4 FUN_1145afb0(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 1145c140; body size 61 bytes.
#line 1 "ENTRY_1145c140"

int FUN_1145c140(uint param_1)

{
  int iVar1;
  
  if (-1 < (int)param_1) {
    return (int)((param_1 >> 2) + (param_1 / 400 - param_1 / 100));
  }
  iVar1 = (int)(FUN_1145c140(~param_1));
  return (int)(-1 - iVar1);
}


// Reference entry 1145c200; body size 54 bytes.
#line 1 "ENTRY_1145c200"

void FUN_1145c200(void)

{
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  thunk_FUN_1145c930(local_8,0);
  thunk_FUN_1145c930(local_10,0);
  return;
}


// Reference entry 1145c250; body size 54 bytes.
#line 1 "ENTRY_1145c250"

char * FUN_1145c250(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2);
  if (param_3 == 0) {
LAB_1145c278:
    do {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)(pcVar2 + 1);
    } while (cVar1 != '\0');
  }
  else {
    do {
      param_3 = (int)(param_3 + -1);
      if (param_3 == 0) {
        *param_1 = (char)('\0');
        goto LAB_1145c278;
      }
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)(pcVar2 + 1);
      *param_1 = (char)(cVar1);
      param_1 = (char *)(param_1 + 1);
    } while (cVar1 != '\0');
  }
  return (char *)(pcVar2 + (-1 - (int)param_2));
}


// Reference entry 1145dde0; body size 60 bytes.
#line 1 "ENTRY_1145dde0"

void FUN_1145dde0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = (undefined4)(0);
    if (param_1[2] == 0) {
      if ((void *)*param_1 != (void *)0x0) {
        free((void *)*param_1);
      }
      *param_1 = (undefined4)(0);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }
  return;
}


// Reference entry 1145e030; body size 61 bytes.
#line 1 "ENTRY_1145e030"

void FUN_1145e030(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (char)(*param_1);
  if (cVar1 == '\0') {
    return;
  }
  do {
    if (cVar1 == '+') {
      *param_1 = (char)('-');
    }
    else if (cVar1 == '/') {
      *param_1 = (char)('_');
    }
    else if (cVar1 == '=') {
      if (param_2 != '\0') {
        *param_1 = (char)('\0');
        return;
      }
      *param_1 = (char)('.');
    }
    cVar1 = (char)(param_1[1]);
    param_1 = (char *)(param_1 + 1);
  } while (cVar1 != '\0');
  return;
}


// Reference entry 1145e270; body size 18 bytes.
#line 1 "ENTRY_1145e270"

void FUN_1145e270(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  return;
}


// Reference entry 1145ed60; body size 18 bytes.
#line 1 "ENTRY_1145ed60"

void FUN_1145ed60(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  return;
}


// Reference entry 11460550; body size 32 bytes.
#line 1 "ENTRY_11460550"

undefined4 FUN_11460550(uint *param_1,uint param_2)

{
  if (((param_1 != (uint *)0x0) && (((uint)param_1 & 3) == 0)) && (param_2 < 0x1000000)) {
    *param_1 = (uint)(param_2);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 11460600; body size 26 bytes.
#line 1 "ENTRY_11460600"

bool FUN_11460600(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = (int)(*param_1);
  if (param_2 == iVar1) {
    *param_1 = (int)(param_3);
    iVar1 = (int)(param_2);
  }
  UNLOCK();
  return (bool)(iVar1 == param_2);
}


// Reference entry 11464ab0; body size 21 bytes.
#line 1 "ENTRY_11464ab0"

bool FUN_11464ab0(int param_1)

{
  return (bool)(10000 < param_1 - 95000U);
}


// Reference entry 11464b20; body size 61 bytes.
#line 1 "ENTRY_11464b20"

undefined1 FUN_11464b20(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (*(int *)(param_1 + 0x240) != 0)) {
    piVar1 = (int *)((int *)((int)*(int **)(param_1 + 0x244) + *(int *)(param_1 + 0x240) * 5));
    do {
      piVar2 = (int *)((int *)((int)piVar1 + -5));
      if (*param_2 == *piVar2) {
        return (undefined1)(*(undefined1 *)((int)piVar1 + -1));
      }
      piVar1 = (int *)(piVar2);
    } while (*(int **)(param_1 + 0x244) < piVar2);
  }
  return (undefined1)(0);
}


// Reference entry 11466400; body size 58 bytes.
#line 1 "ENTRY_11466400"

undefined4 FUN_11466400(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 < (uint)(0xffffffff / (ulonglong)param_3)) {
      uVar1 = (undefined4)(thunk_FUN_1147b530(param_1,param_2 * param_3));
      return (undefined4)(uVar1);
    }
    thunk_FUN_1146cad0(param_1,"Potential overflow in png_zalloc()");
  }
  return (undefined4)(0);
}


// Reference entry 1146bd60; body size 32 bytes.
#line 1 "ENTRY_1146bd60"

void FUN_1146bd60(int param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x78) & 0x400000) != 0) {
    thunk_FUN_1146cad0();
    return;
  }
                    
  thunk_FUN_1146c180(param_1,param_2);
}


// Reference entry 1146bd90; body size 32 bytes.
#line 1 "ENTRY_1146bd90"

void FUN_1146bd90(int param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x78) & 0x200000) != 0) {
    thunk_FUN_1146cad0();
    return;
  }
                    
  thunk_FUN_1146c180(param_1,param_2);
}


// Reference entry 1146bf20; body size 54 bytes.
#line 1 "ENTRY_1146bf20"

void FUN_1146bf20(int param_1,undefined4 param_2)

{
  undefined1 local_d8 [216];
  
  if (param_1 == 0) {
                    
    thunk_FUN_1146c180(0);
  }
  FUN_1146c240(param_1,local_d8,param_2);
                    
  thunk_FUN_1146c180(param_1,local_d8);
}


// Reference entry 1146c180; body size 38 bytes.
#line 1 "ENTRY_1146c180"

void FUN_1146c180(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x4c) != (code *)0x0)) {
    (**(code **)(param_1 + 0x4c))(param_1,param_2);
  }
  FUN_1146c0d0(param_1,param_2);
  pcVar1 = (code *)((code *)swi(3));
  (*pcVar1)();
  return;
}


// Reference entry 1146c740; body size 40 bytes.
#line 1 "ENTRY_1146c740"

void FUN_1146c740(int param_1,undefined4 param_2)

{
  if (((param_1 != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) &&
     (*(int *)(param_1 + 0x44) != 0)) {
    (**(code **)(param_1 + 0x40))(*(int *)(param_1 + 0x44),param_2);
  }
                    
  ExitProcess(0);
}


// Reference entry 1146c960; body size 61 bytes.
#line 1 "ENTRY_1146c960"

void FUN_1146c960(int param_1,uint param_2,uint param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  
  if ((param_1 != 0) && (param_3 < param_2)) {
    uVar1 = (uint)(param_3);
    if ((param_4 != (char *)0x0) && (cVar2 = *param_4, cVar2 != '\0')) {
      do {
        if (param_2 - 1 <= uVar1) break;
        *(char *)(param_1 + uVar1) = cVar2;
        uVar1 = (uint)(uVar1 + 1);
        cVar2 = (char)(param_4[uVar1 - param_3]);
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + uVar1) = 0;
  }
  return;
}


// Reference entry 11472b30; body size 48 bytes.
#line 1 "ENTRY_11472b30"

void FUN_11472b30(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
      thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x2001000;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
  }
  return;
}


// Reference entry 11472b70; body size 48 bytes.
#line 1 "ENTRY_11472b70"

void FUN_11472b70(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
      thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x2001200;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
  }
  return;
}


// Reference entry 11472bb0; body size 48 bytes.
#line 1 "ENTRY_11472bb0"

void FUN_11472bb0(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
      thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x1000;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
  }
  return;
}


// Reference entry 11472f90; body size 48 bytes.
#line 1 "ENTRY_11472f90"

void FUN_11472f90(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
      thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x2001000;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
  }
  return;
}


// Reference entry 11473cd0; body size 48 bytes.
#line 1 "ENTRY_11473cd0"

void FUN_11473cd0(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
      thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x4000000;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
  }
  return;
}


// Reference entry 11473d10; body size 48 bytes.
#line 1 "ENTRY_11473d10"

void FUN_11473d10(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
      thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x400;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
  }
  return;
}


// Reference entry 11473d50; body size 48 bytes.
#line 1 "ENTRY_11473d50"

void FUN_11473d50(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
      thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x40000;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
  }
  return;
}


// Reference entry 11473d90; body size 48 bytes.
#line 1 "ENTRY_11473d90"

void FUN_11473d90(int param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
      thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x2001000;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
  }
  return;
}


// Reference entry 11474440; body size 53 bytes.
#line 1 "ENTRY_11474440"

void FUN_11474440(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 9) == '\x10') {
    for (iVar2 = (int)((uint)*(byte *)((int)param_1 + 10) * *param_1); iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = (undefined1)(*param_2);
      *param_2 = (undefined1)(param_2[1]);
      param_2[1] = (undefined1)(uVar1);
      param_2 = (undefined1 *)(param_2 + 2);
    }
  }
  return;
}


// Reference entry 1147b2f0; body size 45 bytes.
#line 1 "ENTRY_1147b2f0"

void FUN_1147b2f0(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    if (*(code **)(param_1 + 0x260) != (code *)0x0) {
                    
                    
      (**(code **)(param_1 + 0x260))();
      return;
    }
    free(param_2);
  }
  return;
}


// Reference entry 1147b4b0; body size 50 bytes.
#line 1 "ENTRY_1147b4b0"

void * FUN_1147b4b0(int param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    return (void *)((void *)0x0);
  }
  if ((param_1 != 0) && (*(code **)(param_1 + 0x25c) != (code *)0x0)) {
                    
                    
    pvVar1 = (void *)((void *)(**(code **)(param_1 + 0x25c))());
    return (void *)(pvVar1);
  }
  pvVar1 = (void *)(malloc(param_2));
  return (void *)(pvVar1);
}


// Reference entry 11480a00; body size 28 bytes.
#line 1 "ENTRY_11480a00"

void FUN_11480a00(int param_1)

{
  if (*(code **)(param_1 + 0x5c) != (code *)0x0) {
                    
                    
    (**(code **)(param_1 + 0x5c))();
    return;
  }
                    
  thunk_FUN_1146c180(param_1,"Call to NULL read function");
}


// Reference entry 11480f20; body size 51 bytes.
#line 1 "ENTRY_11480f20"

void FUN_11480f20(int param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    uVar1 = (undefined8)(*param_3);
    uVar2 = (undefined2)(*(undefined2 *)(param_3 + 1));
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
    *(undefined8 *)(param_2 + 0xaa) = uVar1;
    *(undefined2 *)(param_2 + 0xb2) = uVar2;
  }
  return;
}


// Reference entry 11480f60; body size 32 bytes.
#line 1 "ENTRY_11480f60"

void FUN_11480f60(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x78) | 0x700000);
  if (param_2 == 0) {
    uVar1 = (uint)(*(uint *)(param_1 + 0x78) & 0xff8fffff);
  }
  *(uint *)(param_1 + 0x78) = uVar1;
  return;
}


// Reference entry 11483100; body size 62 bytes.
#line 1 "ENTRY_11483100"

void FUN_11483100(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(1);
  while ((uVar2 = param_2 & 0xff, uVar2 - 0x41 < 0x3a && ((uVar2 < 0x5b || (0x60 < uVar2))))) {
    iVar1 = (int)(iVar1 + 1);
    param_2 = (uint)(param_2 >> 8);
    if (4 < iVar1) {
      return;
    }
  }
                    
  thunk_FUN_1146bf20(param_1,"invalid chunk type");
}


// Reference entry 11489290; body size 21 bytes.
#line 1 "ENTRY_11489290"

void FUN_11489290(int param_1)

{
  if (*(code **)(param_1 + 0x178) != (code *)0x0) {
                    
                    
    (**(code **)(param_1 + 0x178))();
    return;
  }
  return;
}


// Reference entry 11489320; body size 28 bytes.
#line 1 "ENTRY_11489320"

void FUN_11489320(int param_1)

{
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
                    
                    
    (**(code **)(param_1 + 0x58))();
    return;
  }
                    
  thunk_FUN_1146c180(param_1,"Call to NULL write function");
}


// Reference entry 1148a3b3; body size 16 bytes.
#line 1 "ENTRY_1148a3b3"

void FUN_1148a3b3(void)

{
  char in_AL;
  uint unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  uint unaff_EDI;
  
  if (in_AL == '\0') {
    __ArrayUnwind(unaff_ESI,unaff_EBX,unaff_EDI,*(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


// Reference entry 1148a3e4; body size 46 bytes.
#line 1 "ENTRY_1148a3e4"

undefined4 FUN_1148a3e4(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)((int *)*param_1);
  if (*piVar1 != -0x1f928c9d) {
    return (undefined4)(0);
  }
  puVar3 = (undefined4 *)((undefined4 *)__current_exception());
  *puVar3 = (undefined4)(piVar1);
  uVar2 = (undefined4)(param_1[1]);
  puVar3 = (undefined4 *)((undefined4 *)__current_exception_context());
  *puVar3 = (undefined4)(uVar2);
                    
  terminate();
}


// Reference entry 1148a6cc; body size 41 bytes.
#line 1 "ENTRY_1148a6cc"

void FUN_1148a6cc(void)

{
  int iVar1;
  
  iVar1 = (int)(___scrt_is_ucrt_dll_in_use());
  if (iVar1 != 0) {
    execute_onexit_table(&DAT_122fabe0);
    return;
  }
  iVar1 = (int)(thunk_FUN_1148d1ec());
  if (iVar1 != 0) {
    return;
  }
                    
                    
  _cexit();
  return;
}


// Reference entry 1148a93d; body size 35 bytes.
#line 1 "ENTRY_1148a93d"

void FUN_1148a93d(undefined4 param_1)

{
  if (DAT_122fabec == -1) {
    crt_at_quick_exit();
    return;
  }
  register_onexit_function(&DAT_122fabec,param_1);
  return;
}


// Reference entry 1148ac28; body size 17 bytes.
#line 1 "ENTRY_1148ac28"

void __fastcall FUN_1148ac28(int param_1)

{
  if (param_1 == DAT_12126b84) {
    return;
  }
  thunk_FUN_1148bb2d();
  return;
}


// Reference entry 1148afb8; body size 54 bytes.
#line 1 "ENTRY_1148afb8"

/* Library Function - Single Match
    _dtol3_getbits
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

undefined8 __cdeclFUN_1148afb8(void)

{
  byte bVar1;
  uint in_EAX;
  byte bVar2;
  uint in_EDX;
  uint uVar3;
  
  uVar3 = (uint)(in_EDX & 0x1fffff | 0x100000);
  bVar2 = (byte)((char)(in_EDX >> 0x14) - 0x33);
  if (in_EDX >> 0x14 < 0x433) {
    bVar1 = (byte)(-bVar2 & 0x1f);
    return (/* Library Function - Single Match _dtol3_getbits Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */ undefined8)(((unsigned long long)(uVar3 >> (-bVar2 & 0x1f)) << 32 | (unsigned long long)(in_EAX >> bVar1 | uVar3 << 0x20 - bVar1)));
  }
  return (/* Library Function - Single Match _dtol3_getbits Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */ undefined8)(((unsigned long long)(uVar3 << (bVar2 & 0x1f) | in_EAX >> 0x20 - (bVar2 & 0x1f)) << 32 | (unsigned long long)(in_EAX << (bVar2 & 0x1f))));
}


// Reference entry 1148b118; body size 35 bytes.
#line 1 "ENTRY_1148b118"

undefined4 * __thiscall Recovered_Bulk::FUN_1148b118(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_type_info);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1148b60c; body size 20 bytes.
#line 1 "ENTRY_1148b60c"

void FUN_1148b60c(void)

{
  char in_AL;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (in_AL == '\0') {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),unaff_EBX,
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}


// Reference entry 1148c019; body size 20 bytes.
#line 1 "ENTRY_1148c019"

void FUN_1148c019(void)

{
  char in_AL;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (in_AL == '\0') {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10),unaff_EBX,
                  *(_func_void_void_ptr **)(unaff_EBP + 0x1c));
  }
  return;
}


// Reference entry 1148c290; body size 56 bytes.
#line 1 "ENTRY_1148c290"

void FUN_1148c290(uint param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  operator_new(param_1);
  FUN_1148c2d0();
  return;

 } catch (...) { }
}


// Reference entry 1148c2d0; body size 16 bytes.
#line 1 "ENTRY_1148c2d0"

void FUN_1148c2d0(void)

{
 try {
  int unaff_EBP;

  return;

 } catch (...) { }
}


// Reference entry 1148c320; body size 33 bytes.
#line 1 "ENTRY_1148c320"

/* Library Function - Single Match
    __allshr
   
   Library: Visual Studio */

undefined8 __fastcallFUN_1148c320(byte param_1,int param_2)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = (int)(param_2 >> 0x1f);
  if (0x3f < param_1) {
    return (/* Library Function - Single Match Library: Visual Studio */ undefined8)(((unsigned long long)(iVar1) << 32 | (unsigned long long)(iVar1)));
  }
  if (param_1 < 0x20) {
    return (/* Library Function - Single Match Library: Visual Studio */ undefined8)(((unsigned long long)(param_2 >> (param_1 & 0x1f)) << 32 | (unsigned long long)(in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f))));
  }
  return (/* Library Function - Single Match Library: Visual Studio */ undefined8)(((unsigned long long)(iVar1) << 32 | (unsigned long long)(param_2 >> (param_1 & 0x1f))));
}


// Reference entry 1148c510; body size 31 bytes.
#line 1 "ENTRY_1148c510"

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcallFUN_1148c510(byte param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return (/* Library Function - Single Match Library: Visual Studio */ longlong)(0);
  }
  if (param_1 < 0x20) {
    return (/* Library Function - Single Match Library: Visual Studio */ longlong)(((unsigned long long)(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f)) << 32 | (unsigned long long)(in_EAX << (param_1 & 0x1f))));
  }
  return (/* Library Function - Single Match Library: Visual Studio */ longlong)((ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20);
}


// Reference entry 1148c690; body size 31 bytes.
#line 1 "ENTRY_1148c690"

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio */

ulonglong __fastcallFUN_1148c690(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return (/* Library Function - Single Match Library: Visual Studio */ ulonglong)(0);
  }
  if (param_1 < 0x20) {
    return (/* Library Function - Single Match Library: Visual Studio */ ulonglong)(((unsigned long long)(param_2 >> (param_1 & 0x1f)) << 32 | (unsigned long long)(in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f))));
  }
  return (/* Library Function - Single Match Library: Visual Studio */ ulonglong)((ulonglong)(param_2 >> (param_1 & 0x1f)));
}


// Reference entry 1148c6d1; body size 27 bytes.
#line 1 "ENTRY_1148c6d1"

void FUN_1148c6d1(int param_1)

{
  code *pcVar1;
  
  if (param_1 + 0xee3f1280U < 0xc5) {
    pcVar1 = (code *)((code *)swi(3));
    (*pcVar1)();
    return;
  }
  return;
}


// Reference entry 1148c6f2; body size 31 bytes.
#line 1 "ENTRY_1148c6f2"

void FUN_1148c6f2(int param_1)

{
  code *pcVar1;
  
  if (param_1 + 0xee3f1280U < 0xc5) {
    pcVar1 = (code *)((code *)swi(0x29));
    (*pcVar1)();
  }
  return;
}


// Reference entry 1148c762; body size 27 bytes.
#line 1 "ENTRY_1148c762"

bool FUN_1148c762(int param_1)

{
  return (bool)(param_1 + 0xee3f1280U < 0xc5);
}


// Reference entry 1148c783; body size 45 bytes.
#line 1 "ENTRY_1148c783"

void FUN_1148c783(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  
  if ((param_3 < (param_1 - param_2) + 0xee3f1280U) && (param_1 + 0xee3f1280U < 0xc5)) {
    pcVar1 = (code *)((code *)swi(3));
    (*pcVar1)();
    return;
  }
  return;
}


// Reference entry 1148c7bb; body size 49 bytes.
#line 1 "ENTRY_1148c7bb"

void FUN_1148c7bb(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  
  if ((param_3 < (param_1 - param_2) + 0xee3f1280U) && (param_1 + 0xee3f1280U < 0xc5)) {
    pcVar1 = (code *)((code *)swi(0x29));
    (*pcVar1)();
  }
  return;
}


// Reference entry 1148c85a; body size 26 bytes.
#line 1 "ENTRY_1148c85a"

bool FUN_1148c85a(int param_1,int param_2,uint param_3)

{
  return (bool)(param_3 < (param_1 - param_2) + 0xee3f1280U);
}


// Reference entry 1148c90a; body size 24 bytes.
#line 1 "ENTRY_1148c90a"

undefined4 * __fastcall FUN_1148c90a(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[1] = (undefined4)("bad allocation");
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_bad_alloc);
  return (undefined4 *)(param_1);
}


// Reference entry 1148c928; body size 28 bytes.
#line 1 "ENTRY_1148c928"

void FUN_1148c928(void)

{
  undefined1 local_10 [12];
  
  thunk_FUN_1148c90a();
                    
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_120604e8);
}


// Reference entry 1148c94c; body size 28 bytes.
#line 1 "ENTRY_1148c94c"

void FUN_1148c94c(void)

{
  undefined1 local_10 [12];
  
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 11504692; body size 39 bytes.
#line 1 "ENTRY_11504692"

void FUN_11504692(void)

{
 try {
  thunk_FUN_1148ac28(&stack0x00000000);
  thunk_FUN_1148ac28();
                    
  __CxxFrameHandler3();

 } catch (...) { }
}


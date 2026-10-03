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
extern int FUN_1140beb0(...);
extern int FUN_11418e60(...);
extern int FUN_11419070(...);
extern int FUN_1141d1c0(...);
extern int FUN_1141f520(...);
extern int FUN_1141fd70(...);
extern int FUN_11420160(...);
extern int FUN_114233e0(...);
extern int FUN_11423510(...);
extern int FUN_11427450(...);
extern int FUN_1142bf40(...);
extern int FUN_1142bfb0(...);
extern int FUN_1142e520(...);
extern int FUN_11433f90(...);
extern int FUN_11438a50(...);
extern int FUN_11439020(...);
extern int FUN_1143b9b0(...);
extern int FUN_11442880(...);
extern int FUN_11443110(...);
extern int FUN_11445810(...);
extern int FUN_11445b00(...);
extern int FUN_1144cbe0(...);
extern int FUN_1144d8f0(...);
extern int FUN_1144ed50(...);
extern int FUN_1144f270(...);
extern int FUN_11450880(...);
extern int FUN_11451c40(...);
extern int FUN_11480af0(...);
extern int FUN_11487dc0(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _stricmp(...);
extern __declspec(dllimport) int abort(...);
extern __declspec(dllimport) int atof(...);
extern __declspec(dllimport) int configure_narrow_argv(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int ferror(...);
extern __declspec(dllimport) int fflush(...);
extern __declspec(dllimport) int floor(...);
extern __declspec(dllimport) int fopen(...);
extern __declspec(dllimport) int fseek(...);
extern __declspec(dllimport) int ftell(...);
extern int func_0x100144e3(...);
extern int func_0x10059b29(...);
extern int func_0x1005f6eb(...);
extern int func_0x10061c16(...);
extern int func_0x10064786(...);
extern int func_0x1006fefb(...);
extern int func_0x10074983(...);
extern int func_0x10075ec8(...);
extern int func_0x100867cd(...);
extern int func_0x10088f28(...);
extern int func_0x1008cce0(...);
extern int func_0x1009197a(...);
extern int func_0x100996c5(...);
extern int func_0x11427500(...);
extern int func_0x11428cb0(...);
extern int func_0x11430bf0(...);
extern __declspec(dllimport) int longjmp(...);
extern int nCopyright(...);
extern int operator_new(...);
extern __declspec(dllimport) int setbuf(...);
extern __declspec(dllimport) int strchr(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_105ba370(...);
extern int thunk_FUN_10648750(...);
extern int thunk_FUN_10648810(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1140b1f0(...);
extern int thunk_FUN_1140c520(...);
extern int thunk_FUN_1140ccc0(...);
extern int thunk_FUN_1140cd70(...);
extern int thunk_FUN_1140ce80(...);
extern int thunk_FUN_1140d570(...);
extern int thunk_FUN_1140d620(...);
extern int thunk_FUN_1140d850(...);
extern int thunk_FUN_1140e740(...);
extern int thunk_FUN_114101c0(...);
extern int thunk_FUN_114116a0(...);
extern int thunk_FUN_11412800(...);
extern int thunk_FUN_11412b80(...);
extern int thunk_FUN_11413ac0(...);
extern int thunk_FUN_11413b90(...);
extern int thunk_FUN_11413d00(...);
extern int thunk_FUN_11414c10(...);
extern int thunk_FUN_11414d70(...);
extern int thunk_FUN_114157a0(...);
extern int thunk_FUN_114161b0(...);
extern int thunk_FUN_114168b0(...);
extern int thunk_FUN_11416950(...);
extern int thunk_FUN_11417640(...);
extern int thunk_FUN_11417820(...);
extern int thunk_FUN_11417910(...);
extern int thunk_FUN_11419f70(...);
extern int thunk_FUN_1141a490(...);
extern int thunk_FUN_1141b160(...);
extern int thunk_FUN_1141b2f0(...);
extern int thunk_FUN_1141b990(...);
extern int thunk_FUN_1141c570(...);
extern int thunk_FUN_1141c860(...);
extern int thunk_FUN_1141c8c0(...);
extern int thunk_FUN_1141fa30(...);
extern int thunk_FUN_11423710(...);
extern int thunk_FUN_11423ed0(...);
extern int thunk_FUN_11423f00(...);
extern int thunk_FUN_114262c0(...);
extern int thunk_FUN_1142b920(...);
extern int thunk_FUN_1142be90(...);
extern int thunk_FUN_1142ddf0(...);
extern int thunk_FUN_114312b0(...);
extern int thunk_FUN_11433a20(...);
extern int thunk_FUN_114343d0(...);
extern int thunk_FUN_114381d0(...);
extern int thunk_FUN_11438fb0(...);
extern int thunk_FUN_114390c0(...);
extern int thunk_FUN_11439480(...);
extern int thunk_FUN_1143def0(...);
extern int thunk_FUN_1143e4d0(...);
extern int thunk_FUN_1143e710(...);
extern int thunk_FUN_1143e810(...);
extern int thunk_FUN_1143e930(...);
extern int thunk_FUN_1143e990(...);
extern int thunk_FUN_1143ea00(...);
extern int thunk_FUN_1143ea50(...);
extern int thunk_FUN_1143ea90(...);
extern int thunk_FUN_11442340(...);
extern int thunk_FUN_1144bdf0(...);
extern int thunk_FUN_1144c070(...);
extern int thunk_FUN_1144c420(...);
extern int thunk_FUN_1144cf70(...);
extern int thunk_FUN_1144dbb0(...);
extern int thunk_FUN_1144e6d0(...);
extern int thunk_FUN_1144f140(...);
extern int thunk_FUN_11450230(...);
extern int thunk_FUN_11450330(...);
extern int thunk_FUN_114503d0(...);
extern int thunk_FUN_11450ff0(...);
extern int thunk_FUN_114510f0(...);
extern int thunk_FUN_11451200(...);
extern int thunk_FUN_11452150(...);
extern int thunk_FUN_11452ec0(...);
extern int thunk_FUN_11453260(...);
extern int thunk_FUN_11454b90(...);
extern int thunk_FUN_11455d80(...);
extern int thunk_FUN_11458550(...);
extern int thunk_FUN_1145a760(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c600(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1145cf60(...);
extern int thunk_FUN_1145d330(...);
extern int thunk_FUN_1145d640(...);
extern int thunk_FUN_114605e0(...);
extern int thunk_FUN_11460600(...);
extern int thunk_FUN_114621a0(...);
extern int thunk_FUN_114631f0(...);
extern int thunk_FUN_11463440(...);
extern int thunk_FUN_11463790(...);
extern int thunk_FUN_11463d10(...);
extern int thunk_FUN_11464230(...);
extern int thunk_FUN_114642b0(...);
extern int thunk_FUN_11465990(...);
extern int thunk_FUN_11465be0(...);
extern int thunk_FUN_11465e10(...);
extern int thunk_FUN_1146b640(...);
extern int thunk_FUN_1146bd60(...);
extern int thunk_FUN_1146bd90(...);
extern int thunk_FUN_1146bdc0(...);
extern int thunk_FUN_1146c180(...);
extern int thunk_FUN_1146c1b0(...);
extern int thunk_FUN_1146c960(...);
extern int thunk_FUN_1146cad0(...);
extern int thunk_FUN_11471170(...);
extern int thunk_FUN_114745b0(...);
extern int thunk_FUN_11474680(...);
extern int thunk_FUN_114746b0(...);
extern int thunk_FUN_114746d0(...);
extern int thunk_FUN_114746e0(...);
extern int thunk_FUN_11474710(...);
extern int thunk_FUN_11474730(...);
extern int thunk_FUN_11474760(...);
extern int thunk_FUN_11474780(...);
extern int thunk_FUN_11474d10(...);
extern int thunk_FUN_11475590(...);
extern int thunk_FUN_114757b0(...);
extern int thunk_FUN_11476040(...);
extern int thunk_FUN_11479520(...);
extern int thunk_FUN_1147a0a0(...);
extern int thunk_FUN_1147b1c0(...);
extern int thunk_FUN_1147b2f0(...);
extern int thunk_FUN_1147b370(...);
extern int thunk_FUN_1147b4b0(...);
extern int thunk_FUN_1147b530(...);
extern int thunk_FUN_1147c0d0(...);
extern int thunk_FUN_11480a00(...);
extern int thunk_FUN_11480a30(...);
extern int thunk_FUN_11482900(...);
extern int thunk_FUN_11488e30(...);
extern int thunk_FUN_114892b0(...);
extern int thunk_FUN_11489320(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ae00(...);
extern int thunk_FUN_1148c975(...);
extern int thunk_FUN_1148cb90(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_118a1c40;
extern int DAT_118c8274;
extern int DAT_11a02ea0;
extern int DAT_11bfec44;
extern int DAT_11c00368;
extern int DAT_11c008b0;
extern int DAT_11c033e8;
extern int DAT_11c05460;
extern int DAT_11c0838c;
extern int DAT_11c08394;
extern int DAT_12126b84;
extern int DAT_121a2480;
extern int DAT_121a2488;
extern int DAT_121a24ac;
extern int DAT_121a24b4;
extern int DAT_122fa1d0;
extern int DAT_122fa1d1;
extern int DAT_122fa1d4;
extern int DAT_122fa1d8;
extern int DAT_122fa560;
extern int DAT_122fa584;
extern int DAT_122fa594;
extern int DAT_122fa598;
extern int DAT_122fa59c;
extern int DAT_122fab84;
extern int DAT_122fac08;
extern int DAT_122fb14c;
extern int DAT_122fb15c;
extern int DAT_122fb160;
extern int _DAT_11880f98;
extern int _DAT_119caf38;
extern int _DAT_11c05420;
extern int _DAT_11c063c8;
extern int _DAT_11c06b38;
extern int _DAT_12126b5c;
extern int _DAT_122f78c4;
extern int _DAT_122fa574;
extern int ghidra_vftable_sonos_ISettingsFile;
extern int ghidra_vftable_sonos_SettingsFileObfuscateCB;
extern int ghidra_vftable_sonos_StringProvider;
extern int ghidra_vftable_sonos_model_Info;
extern int ghidra_vftable_type_info;
extern int in_EAX;
extern undefined1 LAB_10044021[];
extern undefined1 LAB_1140bfbb[];
extern undefined1 LAB_1140cc17[];
extern undefined1 LAB_1141a637[];
extern undefined1 LAB_1141c1a1[];
extern undefined1 LAB_1141da3d[];
extern undefined1 LAB_1143422b[];
extern undefined1 LAB_11438bb8[];
extern undefined1 LAB_1145079a[];
extern undefined1 LAB_1145fce0[];
extern undefined1 LAB_11462154[];
extern undefined1 LAB_1147a719[];
extern int *PTR_11964a5c;
extern int *PTR_DAT_11bfefc0;
extern int *PTR_DAT_11c02818;
extern int *PTR_FUN_12126b50;
extern int *PTR_FUN_12126b54;
extern int *stack0xffffffec;
extern int *stack0xfffffff0;
extern int *stack0xfffffff8;
typedef void *AFTER;
typedef void *ASCII;
typedef void *BEFORE;
typedef void *BEGIN;
typedef void *CONTROL;
typedef void *CRC;
typedef void *E9;
typedef void *END;
typedef void *KEY;
typedef void *LOCK;
typedef void *LPCRITICAL_SECTION;
typedef void *PNG;
typedef void *PNG_TRANSFORM_STRIP_FILLER;
typedef void *PUBLIC;
typedef void *RINCON_;
typedef void *SYMFONISK;
typedef void *U;
typedef void *UNLOCK;
typedef void *WARNING;
struct Andreas { char _pad; Andreas(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Application { char _pad; Application(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct April { char _pad; April(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Can { char _pad; Can(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Compression { char _pad; Compression(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Cosmin { char _pad; Cosmin(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Dilger { char _pad; Dilger(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnterCriticalSection { char _pad; EnterCriticalSection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Eric { char _pad; Eric(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Glenn { char _pad; Glenn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Group { char _pad; Group(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Guy { char _pad; Guy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ignoring { char _pad; Ignoring(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Inc { char _pad; Inc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Insufficient { char _pad; Insufficient(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Interlace { char _pad; Interlace(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct LeaveCriticalSection { char _pad; LeaveCriticalSection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Memory { char _pad; Memory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Not { char _pad; Not(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Only { char _pad; Only(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Out { char _pad; Out(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Pehrson { char _pad; Pehrson(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Randers { char _pad; Randers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Read { char _pad; Read(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Row { char _pad; Row(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Schalnat { char _pad; Schalnat(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Truta { char _pad; Truta(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unknown { char _pad; Unknown(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Write { char _pad; Write(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11455250(undefined4 param_2,int param_3,undefined4 param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_11455480(undefined1 *param_2,int param_3,char param_4); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11455570(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_11458570(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_114585c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_11458fc0(undefined1 *param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_1145ab30(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_1148a120(undefined4 param_2,undefined4 param_3); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_1140b9b0(int *param_1,int param_2,int param_3,uint param_4,undefined4 param_5,undefined4 param_6);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1140bf80(int param_1,int *param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1140c020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1140c4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1140c7d0(int *param_1,byte *param_2,byte param_3,byte param_4,byte param_5,byte param_6,
                code *param_7,undefined4 param_8);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1140cae0(int param_1,char *param_2,undefined4 param_3);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_11412820(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11412880(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_114199f0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11419d00(int param_1,int param_2,int param_3,int param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1141a4a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1141a4b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1141a590(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6,undefined4 param_7,int param_8,undefined4 param_9,int param_10,
                undefined4 param_11);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1141c010(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1141c100(int param_1,code *param_2,undefined4 param_3,uint param_4,void *param_5,
                undefined1 *param_6);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1141c4a0(int param_1,code *param_2,undefined4 param_3,int param_4,uint param_5,int param_6,
                uint param_7,byte *param_8);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1141c510(int param_1,int param_2,int param_3,int param_4,undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1141f5b0(undefined4 *param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1141fcc0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11423950(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11423a40(int param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11423aa0(int param_1,char *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11423e20(undefined1 *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11425cf0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114260f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114261d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114261e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114261f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11426200(undefined4 param_1,ushort *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11426250(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11426260(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11426270(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11426280(undefined4 param_1,ushort *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11426690(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11426ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11426d40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114273d0(undefined4 param_1,void *param_2,size_t param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte FUN_114281c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte FUN_11428200(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11428240(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11428520(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11428880(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114293e0(int param_1,void *param_2,size_t param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114299d0(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_1142afa0(ushort *param_1,void *param_2,uint param_3,void *param_4,uint param_5,uint *param_6);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1142bda0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_1142bdd0(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1142c370(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1142d440(ushort *param_1,void *param_2,size_t param_3,void *param_4,undefined4 param_5,
                size_t *param_6,int *param_7);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_1142d560(void);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_1142d570(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1142e060(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1142e480(uint *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1142e720(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1142ef90(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1142f120(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1142f150(int *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11430f40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11431290(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11431a50(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11431c60(int param_1,char param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11432430(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114326b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11433c50(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11433cd0(ushort *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                undefined4 param_5,int param_6,int param_7,int param_8);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11433d70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11433dd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11434190(undefined4 param_1,undefined4 param_2,void *param_3,size_t param_4,void *param_5,
            size_t param_6);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11434bd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11434d10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11434d60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11435f10(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11435f30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11436e10(undefined *param_1,undefined *param_2,int *param_3,int *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_11438ad0(undefined4 *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11438df0(uint *param_1,uint param_2,void *param_3,int param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11438eb0(int *param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11438f00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11438f20(uint *param_1,uint param_2,void *param_3,uint param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11439170(uint *param_1,uint param_2,void *param_3,uint param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11439290(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_114393c0(uint *param_1,uint param_2,void *param_3,uint param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11439430(uint *param_1,uint param_2,void *param_3,uint param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_114394b0(uint *param_1,uint param_2,undefined4 param_3,void *param_4,uint param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11439520(uint *param_1,uint param_2,void *param_3,uint param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * FUN_1143df40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1143dfe0(short param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * FUN_1143e010(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1143e020(undefined4 *param_1,int param_2,int param_3,int param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1143e0c0(undefined4 param_1,int param_2,int param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1143e220(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1143e6f0(undefined4 param_1,undefined4 *param_2);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_1143e8d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1143e950(int param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1143e9f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1143f300(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11442c60(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4,int param_5,
                 byte *param_6);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11446060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114460a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11447060(uint *param_1,int param_2,int param_3,uint param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114471c0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1144c650(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1144c880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1144d290(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1144d550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1144db50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1144dc80(uint *param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1144ead0(uint *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4,
                      uint param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1144f360(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114511b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114519c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11451a90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11451e80(undefined4 param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11452b50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11452b60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11452b80(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11452bf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11452c30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11453700(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,void *param_5,
                 uint param_6,uint *param_7,int param_8,undefined4 param_9,undefined4 param_10);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11454b40(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114552f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_11455550(undefined1 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_114555d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_114555e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_114555f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11455600(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11455670(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11455680(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11455690(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_114556a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_114556c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11455730(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11455740(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11455760(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11455790(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_114557a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_114557d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455800(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455810(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455820(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455840(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455850(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455870(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455880(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_114558a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_114558b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_114558c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_114558d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_114558e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_114558f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455910(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455930(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455950(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455970(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455990(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_114559a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_114559b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_114559c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_114559e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455a00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455a20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455a40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455a60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455a80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455aa0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455ac0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455ae0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455af0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455b00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455b20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455b40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455b60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455b80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455ba0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455bc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455be0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455bf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455c00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455c20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455c30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455c50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455c60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455c70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455c90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11455cb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455cd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455cf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455d00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455d10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455d20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455d30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455d40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11455d50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11455d60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11455d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11455fc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11456030(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11456180(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11456510(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11456520(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11456810(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_11456820(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_11456840(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11456860(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11456870(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11456880(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11456890(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_114568a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114568b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 __fastcall FUN_114568c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11456f40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11456f70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11456fd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11456fe0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11456ff0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_11457000(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11457030(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_11457060(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11457070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11457230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11457260(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11457280(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_114572a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_11457300(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_11457310(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11457330(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11457340(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11457390(char *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * FUN_11457550(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined * FUN_11457bf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458290(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_114582a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11458330(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114583c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_11458560(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_11458580(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_114585a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_11458650(undefined4 *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_114586e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_11458710(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11458750(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458770(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_114587e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_114587f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458810(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458850(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_114588b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_114588e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458920(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458960(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_114589a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_114589c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_114589d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458a10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458a80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458aa0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458ab0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11458ac0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_11458b00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11458ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_11459180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11459190(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114591d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11459240(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_11459490(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1145ac60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1145aca0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145ace0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145ad00(int *param_1,int *param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ longlong FUN_1145ae70(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145b020(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1145b150(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145c5e0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145c900(undefined4 *param_1,void *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1145dae0(undefined4 *param_1,size_t param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145db30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1145de50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145dfe0(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1145e250(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1145eb50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145f340(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145f840(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145fbe0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1145fd60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11460030(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11460050(int param_1,int param_2,undefined1 *param_3,uint param_4,undefined2 param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11460330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11460340(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11460390(int param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114603f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114604b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114604c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11460530(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11460580(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_114605c0(int *param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_114605f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11460620(int *param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11460640(int *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11460de0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114620f0(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11463a60(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11463fd0(int param_1,int param_2,int param_3,uint param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_11464ad0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_11464ae0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_11464af0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11464b00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_11464b10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11465910(int *param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11465970(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11465a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11465d60(int param_1,uint param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11465dd0(int param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11465f30(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11466fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1146ae50(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1146bb80(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1146bc70(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1146bc90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1146c780(int param_1,char *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1146c8f0(int param_1,char *param_2);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_11472410(int param_1,undefined4 param_2,double param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11472a30(int param_1,undefined4 param_2,undefined4 param_3);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_11472bf0(int param_1,double param_2,double param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11472e10(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114739a0(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_114739c0(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11474490(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114744b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114744d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114745c0(int param_1,undefined2 param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114747a0(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114747f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11474b50(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11474ba0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11474bc0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11474dc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11474de0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11475f30(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11476000(int param_1,undefined4 param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476460(int param_1,int param_2,undefined4 *param_3,uint *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_114764f0(int param_1,int param_2);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4
FUN_11476510(int param_1,int param_2,double *param_3,double *param_4,double *param_5,double *param_6
            ,double *param_7,double *param_8,double *param_9,double *param_10);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4
FUN_11476650(int param_1,int param_2,double *param_3,double *param_4,double *param_5,double *param_6
            ,double *param_7,double *param_8,double *param_9,double *param_10,double *param_11);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_114767b0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
            undefined4 *param_10,undefined4 *param_11);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11476880(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
            undefined4 *param_10);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476950(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476970(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11476990(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114769b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_114769e0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476a20(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11476a70(int param_1,int param_2);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ undefined4 FUN_11476a90(int param_1,int param_2,double *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476ae0(int param_1,int param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476b20(int param_1,int param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476c00(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476c20(int param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11476c40(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476c60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476c70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11476c80(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11476cf0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            uint *param_6,uint *param_7,undefined4 *param_8,undefined4 *param_9);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11476dd0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11476e40(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11476f60(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 FUN_11476f80(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11477000(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11477070(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_114770e0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_11477120(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11477160(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11477180(int param_1,int param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114771c0(int param_1,int param_2,uint *param_3,double *param_4,double *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_11477230(int param_1,int param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4
FUN_114772d0(int param_1,int param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11477330(int param_1,int param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11477370(int param_1,int param_2,uint *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_114773b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114773d0(int param_1,int param_2,int *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11477410(int param_1,int param_2,undefined4 *param_3,uint *param_4,int *param_5);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_114774c0(int param_1,int param_2,undefined4 *param_3,int *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11477520(int param_1,int param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11477560(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_11477580(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114775a0(int param_1);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ float10 FUN_114775e0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11477640(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114776b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114776f0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11477730(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114777a0(int param_1,int param_2);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ float10 FUN_114777e0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11477840(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114778b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114778f0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11477930(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_114779a0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11477aa0(short *param_1,undefined1 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11477b50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_11477c30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11478f70(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11478f90(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11478fb0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11478ff0(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11479010(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11479260(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11479270(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11479280(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114792a0(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114792c0(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114792e0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11479320(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11479340(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114793a0(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114793c0(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1147a650(int param_1,int param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1147b330(int param_1,void *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1147b350(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1147b4f0(int param_1,size_t param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1147c2b0(undefined1 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1147db40(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114809c0(int param_1,void *param_2,size_t param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_11480ce0(int param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11481530(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11481550(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11481570(int param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11481590(int param_1,uint param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11481640(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11481720(int param_1,int param_2,undefined8 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11481890(int param_1,int param_2,char *param_3,int param_4,void *param_5,size_t param_6);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11481a00(int param_1,int param_2,uint param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11481fe0(int param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11482010(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11482670(int param_1,int param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_114828c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11482cc0(int param_1,int param_2,int param_3,uint param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11482ea0(int param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_11483720(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short FUN_11484380(byte *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11489230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11489250(int param_1,void *param_2,size_t param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1148a51f(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1148ab66(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1148abb8(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1148b111(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1148c718(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1148c7f8(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1148cb26(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1148cb2b(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_11809080(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_118090f0(void);
// Reference entry 1140b9b0; body size 109 bytes.
#line 1 "ENTRY_1140b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_1140b9b0(int *param_1,int param_2,int param_3,uint param_4,undefined4 param_5,undefined4 param_6
            )

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((param_2 != 0) || (param_4 != 0)) && (param_3 == 0)) || (iVar2 = *param_1, iVar2 == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffc180);
  }
  if (param_4 == 0) {
    uVar1 = (undefined4)(thunk_FUN_1140d570(param_2));
    param_4 = (uint)(thunk_FUN_1140ce80(uVar1));
    param_4 = (uint)(param_4 & 0xff);
    if (param_4 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffc180);
    }
    iVar2 = (int)(*param_1);
  }
  if (*(code **)(iVar2 + 0x10) != (code *)0x0) {
    uVar1 = (undefined4)((**(code **)(iVar2 + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffc100);
}


// Reference entry 1140bf80; body size 122 bytes.
#line 1 "ENTRY_1140bf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1140bf80(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  do {
    if (*(uint *)(param_1 + 4) == param_3) {
      piVar3 = (int *)(*(int **)(param_1 + 8));
      piVar4 = (int *)(param_2);
      uVar2 = (uint)(param_3);
      while (uVar1 = uVar2 - 4, 3 < uVar2) {
        if (*piVar3 != *piVar4) goto LAB_1140bfbb;
        piVar3 = (int *)(piVar3 + 1);
        piVar4 = (int *)(piVar4 + 1);
        uVar2 = (uint)(uVar1);
      }
      if (uVar1 == 0xfffffffc) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
      }
LAB_1140bfbb:
      if ((char)*piVar3 == (char)*piVar4) {
        if (uVar1 == 0xfffffffd) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
        }
        if (*(char *)((int)piVar3 + 1) == *(char *)((int)piVar4 + 1)) {
          if (uVar1 == 0xfffffffe) {
            return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
          }
          if (*(char *)((int)piVar3 + 2) == *(char *)((int)piVar4 + 2)) {
            if (uVar1 == 0xffffffff) {
              return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
            }
            if (*(char *)((int)piVar3 + 3) == *(char *)((int)piVar4 + 3)) {
              return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
            }
          }
        }
      }
    }
    param_1 = (int)(*(int *)(param_1 + 0x18));
    if (param_1 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
    }
  } while( true );
}


// Reference entry 1140c020; body size 50 bytes.
#line 1 "ENTRY_1140c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1140c020(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)((void *)*param_1);
  while (_Memory != (void *)0x0) {
    *param_1 = (undefined4)(*(undefined4 *)((int)_Memory + 0x18));
    free(*(void **)((int)_Memory + 8));
    free(*(void **)((int)_Memory + 0x14));
    free(_Memory);
    _Memory = (void *)((void *)*param_1);
  }
  return;
}


// Reference entry 1140c4e0; body size 23 bytes.
#line 1 "ENTRY_1140c4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1140c4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1140beb0(param_1,param_2,10,param_3);
  return;
}


// Reference entry 1140c7d0; body size 203 bytes.
#line 1 "ENTRY_1140c7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1140c7d0(int *param_1,byte *param_2,byte param_3,byte param_4,byte param_5,byte param_6,
                code *param_7,undefined4 param_8)

{
  byte bVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  
  pbVar5 = (byte *)(param_2);
  piVar3 = (int *)(param_1);
  pcVar2 = (char *)((char *)*param_1);
  if ((int)param_2 - (int)pcVar2 < 1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x60);
  }
  if (*pcVar2 != '0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x62);
  }
  *param_1 = (int)((int)(pcVar2 + 1));
  iVar7 = (int)(thunk_FUN_1140c520(param_1,param_2,&param_1));
  bVar6 = (byte)(param_6);
  if (iVar7 == 0) {
    pbVar8 = (byte *)((byte *)*piVar3);
    if ((byte *)((int)param_1 + (int)pbVar8) != pbVar5) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x66);
    }
    while (pbVar8 < pbVar5) {
      bVar1 = (byte)(*pbVar8);
      *piVar3 = (int)((int)(pbVar8 + 1));
      if ((bVar1 & param_3) != param_4) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x62);
      }
      iVar7 = (int)(thunk_FUN_1140c520(piVar3,pbVar5,&param_1));
      piVar4 = (int *)(param_1);
      if (iVar7 != 0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar7);
      }
      if ((((bVar1 & param_5) == bVar6) && (param_7 != (code *)0x0)) &&
         (iVar7 = (*param_7)(param_8,bVar1,*piVar3,param_1), iVar7 != 0)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar7);
      }
      pbVar8 = (byte *)((byte *)(*piVar3 + (int)piVar4));
      *piVar3 = (int)((int)pbVar8);
    }
    iVar7 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar7);
}


// Reference entry 1140cae0; body size 372 bytes.
#line 1 "ENTRY_1140cae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1140cae0(int param_1,char *param_2,undefined4 param_3)

{
  FILE *_File;
  int iVar1;
  size_t sVar2;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined1 auStack_404 [1024];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_410);
  if (param_1 == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  _File = (FILE *)(fopen(param_2,"rb"));
  if (_File == (FILE *)0x0) {
    thunk_FUN_1148ac28();
    return;
  }
  setbuf(_File,(char *)0x0);
  uStack_408 = (undefined4)(0);
  uStack_410 = (undefined8)(0);
  iVar1 = (int)(thunk_FUN_1140d620(&uStack_410,param_1,0));
  if ((iVar1 == 0) && (iVar1 = thunk_FUN_1140d850(&uStack_410), iVar1 == 0)) {
    sVar2 = (size_t)(fread(auStack_404,1,0x400,_File));
    while (sVar2 != 0) {
      iVar1 = (int)(FUN_1005ef7a(&uStack_410,auStack_404,sVar2));
      if (iVar1 != 0) goto LAB_1140cc17;
      sVar2 = (size_t)(fread(auStack_404,1,0x400,_File));
    }
    iVar1 = (int)(ferror(_File));
    if (iVar1 == 0) {
      thunk_FUN_1140ccc0(&uStack_410,param_3);
    }
  }
LAB_1140cc17:
  thunk_FUN_11423ed0(auStack_404,0x400);
  fclose(_File);
  thunk_FUN_1140cd70(&uStack_410);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11412820; body size 68 bytes.
#line 1 "ENTRY_11412820"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11412820(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)((int *)0x122fb0e0);
  if (_DAT_122f78c4 == 0) {
    piVar3 = (int *)(&DAT_11c008b0);
    iVar1 = (int)(DAT_11c008b0);
    while (iVar1 != 0) {
      *piVar2 = (int)(iVar1);
      piVar3 = (int *)(piVar3 + 2);
      piVar2 = (int *)(piVar2 + 1);
      iVar1 = (int)(*piVar3);
    }
    *piVar2 = (int)(0);
    _DAT_122f78c4 = (int)(1);
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x122fb0e0);
}


// Reference entry 11412880; body size 25 bytes.
#line 1 "ENTRY_11412880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11412880(int *param_1)

{
  if (*param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffff9f00);
  }
  param_1[9] = (int)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114199f0; body size 368 bytes.
#line 1 "ENTRY_114199f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_114199f0(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  iVar1 = (int)(thunk_FUN_11413d00(param_1 + 8,param_2 + 8));
  if (iVar1 == 0) {
    iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x10,param_2 + 0x10));
    if (iVar1 == 0) {
      iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x18,param_2 + 0x18));
      if (iVar1 == 0) {
        iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x20,param_2 + 0x20));
        if (iVar1 == 0) {
          iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x28,param_2 + 0x28));
          if (iVar1 == 0) {
            iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x30,param_2 + 0x30));
            if (iVar1 == 0) {
              iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x38,param_2 + 0x38));
              if (iVar1 == 0) {
                iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x40,param_2 + 0x40));
                if (iVar1 == 0) {
                  iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x50,param_2 + 0x50));
                  if (iVar1 == 0) {
                    iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x58,param_2 + 0x58));
                    if (iVar1 == 0) {
                      iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x48,param_2 + 0x48));
                      if (iVar1 == 0) {
                        iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x60,param_2 + 0x60));
                        if (iVar1 == 0) {
                          iVar1 = (int)(thunk_FUN_11413d00(param_1 + 0x68,param_2 + 0x68));
                          if (iVar1 == 0) {
                            *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
                            *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
                            return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  thunk_FUN_11419f70(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11419d00; body size 196 bytes.
#line 1 "ENTRY_11419d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11419d00(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11413b90(param_1 + 8,0));
  if (iVar1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4080);
  }
  iVar1 = (int)(thunk_FUN_11413b90(param_1 + 0x20,0));
  if (iVar1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4080);
  }
  iVar1 = (int)(thunk_FUN_11413b90(param_1 + 0x28,0));
  if (iVar1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4080);
  }
  iVar1 = (int)(thunk_FUN_11413b90(param_1 + 0x18,0));
  if (iVar1 != 0) {
    iVar1 = (int)(thunk_FUN_11413b90(param_1 + 0x10,0));
    if (iVar1 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4080);
    }
    if ((((param_2 == 0) || (iVar1 = thunk_FUN_11413d00(param_2,param_1 + 0x30), iVar1 == 0)) &&
        ((param_3 == 0 || (iVar1 = thunk_FUN_11413d00(param_3,param_1 + 0x38), iVar1 == 0)))) &&
       ((param_4 == 0 || (iVar1 = thunk_FUN_11413d00(param_4,param_1 + 0x40), iVar1 == 0)))) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1 + -0x4080);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4080);
}


// Reference entry 1141a4a0; body size 8 bytes.
#line 1 "ENTRY_1141a4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1141a4a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x74));
}


// Reference entry 1141a4b0; body size 8 bytes.
#line 1 "ENTRY_1141a4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1141a4b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x70));
}


// Reference entry 1141a590; body size 180 bytes.
#line 1 "ENTRY_1141a590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1141a590(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6,undefined4 param_7,int param_8,undefined4 param_9,int param_10,
                undefined4 param_11)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = (int)(thunk_FUN_11416950(param_1 + 8,param_2,param_3));
    if (iVar1 != 0) goto LAB_1141a637;
    uVar2 = (undefined4)(thunk_FUN_11417910(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (param_4 != 0) {
    iVar1 = (int)(thunk_FUN_11416950(param_1 + 0x20,param_4,param_5));
    if (iVar1 != 0) goto LAB_1141a637;
  }
  if (param_6 != 0) {
    iVar1 = (int)(thunk_FUN_11416950(param_1 + 0x28,param_6,param_7));
    if (iVar1 != 0) goto LAB_1141a637;
  }
  if (param_8 != 0) {
    iVar1 = (int)(thunk_FUN_11416950(param_1 + 0x18,param_8,param_9));
    if (iVar1 != 0) goto LAB_1141a637;
  }
  if (param_10 != 0) {
    iVar1 = (int)(thunk_FUN_11416950(param_1 + 0x10,param_10,param_11));
    if (iVar1 != 0) {
LAB_1141a637:
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1 + -0x4080);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 1141c010; body size 192 bytes.
#line 1 "ENTRY_1141c010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1141c010(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_408;
  undefined1 auStack_404 [1024];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_408);
  iVar1 = (int)(*(int *)(param_1 + 4));
  uStack_408 = (undefined4)(param_5);
  if ((*(int *)(param_1 + 0x70) == 0) && (iVar1 - 0x10U < 0x3f1)) {
    iVar2 = (int)(thunk_FUN_1141b2f0(param_1,param_2,param_3,param_5,auStack_404));
    if (iVar2 == 0) {
      FUN_11419070(auStack_404,iVar1,param_6,param_7,param_4);
    }
    thunk_FUN_11423ed0(auStack_404,0x400);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1141c100; body size 181 bytes.
#line 1 "ENTRY_1141c100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1141c100(int param_1,code *param_2,undefined4 param_3,uint param_4,void *param_5,
                undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  if ((param_4 <= param_4 + 0xb) && (param_4 + 0xb <= *(uint *)(param_1 + 4))) {
    iVar2 = (int)((*(uint *)(param_1 + 4) - param_4) + -3);
    *param_6 = (undefined1)(0);
    if (param_2 != (code *)0x0) {
      param_6[1] = (undefined1)(2);
      pcVar3 = (char *)(param_6 + 2);
      do {
        if (iVar2 == 0) {
          *pcVar3 = (char)('\0');
          if (param_4 != 0) {
            memcpy(pcVar3 + 1,param_5,param_4);
          }
          iVar2 = (int)(thunk_FUN_1141b990(param_1,param_6,param_6));
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
        }
        iVar2 = (int)(iVar2 + -1);
        iVar4 = (int)(100);
        do {
          iVar1 = (int)((*param_2)(param_3,pcVar3,1));
          if (*pcVar3 != '\0') break;
          iVar4 = (int)(iVar4 + -1);
          if (iVar4 == 0) goto LAB_1141c1a1;
        } while (iVar1 == 0);
        if ((iVar4 == 0) || (iVar1 != 0)) {
LAB_1141c1a1:
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1 + -0x4480);
        }
        pcVar3 = (char *)(pcVar3 + 1);
      } while( true );
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4080);
}


// Reference entry 1141c4a0; body size 43 bytes.
#line 1 "ENTRY_1141c4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1141c4a0(int param_1,code *param_2,undefined4 param_3,int param_4,uint param_5,int param_6,
                uint param_7,byte *param_8)

{
  uint _Size;
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if ((*(int *)(param_1 + 0x70) != 1) || ((*(int *)(param_1 + 0x74) == 0 && (param_4 == 0)))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4080);
  }
  if ((((param_4 == 0) && (param_5 == 0)) || (param_6 != 0)) && (param_2 != (code *)0x0)) {
    _Size = (uint)(*(uint *)(param_1 + 4));
    if (param_4 != 0) {
      uVar3 = (undefined4)(thunk_FUN_1140d570(param_4));
      uVar4 = (uint)(thunk_FUN_1140ce80(uVar3));
      if ((uVar4 & 0xff) == 0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4080);
      }
      if (param_5 != (uVar4 & 0xff)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4080);
      }
    }
    iVar6 = (int)(*(int *)(param_1 + 0x74));
    if (*(int *)(param_1 + 0x74) == 0) {
      iVar6 = (int)(param_4);
    }
    uVar3 = (undefined4)(thunk_FUN_1140d570(iVar6));
    bVar1 = (byte)(thunk_FUN_1140ce80(uVar3));
    uVar4 = (uint)((uint)bVar1);
    if (bVar1 != 0) {
      if (param_7 == 0xffffffff) {
        if (uVar4 * 2 <= _Size) {
          param_7 = (uint)(uVar4);
          if (_Size < uVar4 * 2 + 2) {
            param_7 = (uint)((_Size - uVar4) - 2);
          }
LAB_1141da3d:
          memset(param_8,0,_Size);
          iVar5 = (int)(thunk_FUN_11413ac0(param_1 + 8));
          iVar7 = (int)((_Size - param_7) - uVar4);
          param_8[iVar7 + -2] = (byte)(1);
          pbVar9 = (byte *)(param_8 + iVar7 + -1);
          iVar7 = (int)((*param_2)(param_3,pbVar9,param_7));
          if (iVar7 != 0) {
            return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar7 + -0x4480);
          }
          pbVar10 = (byte *)(pbVar9 + param_7);
          iVar7 = (int)(FUN_11418e60(param_6,param_5,pbVar9,param_7,pbVar10,iVar6));
          if (iVar7 == 0) {
            uVar8 = (uint)((uint)((iVar5 - 1U & 7) == 0));
            iVar6 = (int)(FUN_1141d1c0(param_8 + uVar8,((_Size - uVar8) - uVar4) + -1,pbVar10,uVar4,iVar6));
            if (iVar6 == 0) {
              cVar2 = (char)(thunk_FUN_11413ac0(param_1 + 8));
              *param_8 = (byte)(*param_8 & (byte)(0xff >> ((char)_Size * '\b' - (cVar2 + -1) & 0x1fU)));
              pbVar10[uVar4] = (byte)(0xbc);
              iVar6 = (int)(thunk_FUN_1141b2f0(param_1,param_2,param_3,param_8,param_8));
              return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar6);
            }
            return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar6);
          }
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar7);
        }
      }
      else if ((-1 < (int)param_7) && (param_7 + 2 + uVar4 <= _Size)) goto LAB_1141da3d;
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4080);
}


// Reference entry 1141c510; body size 70 bytes.
#line 1 "ENTRY_1141c510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1141c510(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_2 != 0) || (param_3 != 0)) && (param_4 == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffbf80);
  }
  iVar2 = (int)(param_2);
  if (*(int *)(param_1 + 0x74) != 0) {
    iVar2 = (int)(*(int *)(param_1 + 0x74));
  }
  uVar1 = (undefined4)(thunk_FUN_1141c570(param_1,param_2,param_3,param_4,iVar2,0xffffffff,param_5));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1141f5b0; body size 202 bytes.
#line 1 "ENTRY_1141f5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1141f5b0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_3 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff94);
  }
  param_3 = (int)(param_3 + param_2);
  iVar1 = (int)(thunk_FUN_1140b1f0(param_1));
  if (iVar1 == 1) {
    uStack_8 = (undefined4)(*param_1);
    uStack_4 = (undefined4)(param_1[1]);
    iVar1 = (int)(thunk_FUN_1140b1f0(&uStack_8));
    if (iVar1 != 1) {
      uVar2 = (undefined4)(thunk_FUN_1141c8c0(0,param_2,&param_3));
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
    }
    uVar2 = (undefined4)(thunk_FUN_1141c8c0(uStack_4,param_2,&param_3));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
  }
  iVar1 = (int)(thunk_FUN_1140b1f0(param_1));
  if (iVar1 != 2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffc680);
  }
  iVar1 = (int)(FUN_1141f520(param_1));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(FUN_11420160());
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
  }
  uVar2 = (undefined4)(FUN_1141fd70(&param_3,param_2,param_1));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
}


// Reference entry 1141fcc0; body size 125 bytes.
#line 1 "ENTRY_1141fcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1141fcc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *_Memory;
  int iVar1;
  undefined4 uStack_4;
  
  _Memory = (void *)(calloc(1,0x826));
  if (_Memory == (void *)0x0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x3f80);
  }
  uStack_4 = (undefined4)(0);
  iVar1 = (int)(thunk_FUN_1141fa30(param_1,_Memory,0x826));
  if (-1 < iVar1) {
    iVar1 = (int)(thunk_FUN_114381d0("-----BEGIN PUBLIC KEY-----\n","-----END PUBLIC KEY-----\n",
                               (int)_Memory + (0x826 - iVar1),iVar1,param_2,param_3,&uStack_4));
  }
  free(_Memory);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11423950; body size 59 bytes.
#line 1 "ENTRY_11423950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11423950(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)((*(code *)PTR_FUN_12126b50)(param_1 + 0x1a4));
  if (iVar1 == 0) {
    iVar1 = (int)(FUN_114233e0(param_1));
    iVar2 = (int)((*(code *)PTR_FUN_12126b54)(param_1 + 0x1a4));
    if (iVar2 != 0) {
      iVar1 = (int)(-0x1e);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11423a40; body size 69 bytes.
#line 1 "ENTRY_11423a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11423a40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)((*(code *)PTR_FUN_12126b50)(param_1 + 0x1a4));
  if (iVar1 == 0) {
    iVar1 = (int)(FUN_11423510(param_1,0x14,param_2,param_3));
    iVar2 = (int)((*(code *)PTR_FUN_12126b54)(param_1 + 0x1a4));
    if (iVar2 != 0) {
      iVar1 = (int)(-0x1e);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11423aa0; body size 498 bytes.
#line 1 "ENTRY_11423aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11423aa0(int param_1,char *param_2)

{
  FILE *pFVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  uint _Count;
  uint uStack_428;
  undefined1 auStack_424 [32];
  undefined1 auStack_404 [1024];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_428);
  pFVar1 = (FILE *)(fopen(param_2,"rb"));
  if (pFVar1 == (FILE *)0x0) {
    thunk_FUN_1148ac28();
    return;
  }
  setbuf(pFVar1,(char *)0x0);
  fseek(pFVar1,0,2);
  uStack_428 = (uint)(ftell(pFVar1));
  fseek(pFVar1,0,0);
  _Count = (uint)(uStack_428);
  if (0x400 < uStack_428) {
    _Count = (uint)(0x400);
  }
  uStack_428 = (uint)(_Count);
  sVar2 = (size_t)(fread(auStack_404,1,_Count,pFVar1));
  if ((sVar2 == _Count) && (iVar3 = (*(code *)PTR_FUN_12126b50)(param_1 + 0x1a4), iVar3 == 0)) {
    iVar3 = (int)(FUN_11423510(param_1,0x14,auStack_404,uStack_428));
    iVar4 = (int)((*(code *)PTR_FUN_12126b54)(param_1 + 0x1a4));
    if (iVar4 == 0) {
      fclose(pFVar1);
      thunk_FUN_11423ed0(auStack_404,0x400);
      if (iVar3 == 0) {
        iVar3 = (int)(thunk_FUN_11423710(param_1,auStack_424,0x20));
        if (iVar3 == 0) {
          pFVar1 = (FILE *)(fopen(param_2,"wb"));
          if (pFVar1 == (FILE *)0x0) {
            thunk_FUN_11423ed0(auStack_424,0x20);
          }
          else {
            setbuf(pFVar1,(char *)0x0);
            fwrite(auStack_424,1,0x20,pFVar1);
            thunk_FUN_11423ed0(auStack_424,0x20);
            fclose(pFVar1);
          }
        }
        else {
          thunk_FUN_11423ed0(auStack_424,0x20);
        }
      }
    }
    else {
      fclose(pFVar1);
      thunk_FUN_11423ed0(auStack_404,0x400);
    }
  }
  else {
    fclose(pFVar1);
    thunk_FUN_11423ed0(auStack_404,0x400);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11423e20; body size 28 bytes.
#line 1 "ENTRY_11423e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11423e20(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined1)(0);
    param_1 = (undefined1 *)(param_1 + 1);
  }
  return;
}


// Reference entry 11425cf0; body size 85 bytes.
#line 1 "ENTRY_11425cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11425cf0(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_12126b50)(&DAT_122fb14c);
  if (DAT_122fa1d1 != '\0') {
    (*(code *)PTR_FUN_12126b54)(&DAT_122fb14c);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff77);
  }
  DAT_122fa1d4 = (int)(param_1);
  DAT_122fa1d8 = (int)(param_2);
  (*(code *)PTR_FUN_12126b54)(&DAT_122fb14c);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114260f0; body size 3 bytes.
#line 1 "ENTRY_114260f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114260f0(void)

{
  return;
}


// Reference entry 114261d0; body size 6 bytes.
#line 1 "ENTRY_114261d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114261d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
}


// Reference entry 114261e0; body size 6 bytes.
#line 1 "ENTRY_114261e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114261e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
}


// Reference entry 114261f0; body size 3 bytes.
#line 1 "ENTRY_114261f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114261f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11426200; body size 58 bytes.
#line 1 "ENTRY_11426200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11426200(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = (ushort)(*param_2);
  if ((uVar1 & 0xff00) == 0x7100) {
    uVar2 = (ushort)(uVar1 & 0xff);
    if ((uVar1 & 0xcf00) != 0x4100) {
      uVar2 = (ushort)(0);
    }
    if ((uVar2 & 0xc0) != 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff79);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
}


// Reference entry 11426250; body size 6 bytes.
#line 1 "ENTRY_11426250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11426250(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
}


// Reference entry 11426260; body size 6 bytes.
#line 1 "ENTRY_11426260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11426260(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
}


// Reference entry 11426270; body size 3 bytes.
#line 1 "ENTRY_11426270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11426270(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11426280; body size 37 bytes.
#line 1 "ENTRY_11426280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11426280(undefined4 param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  if (((*param_2 & 0xcf00) != 0x4100) || (uVar1 = 0xffffff79, (*param_2 & 0xc0) == 0)) {
    uVar1 = (undefined4)(0xffffff7a);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11426690; body size 61 bytes.
#line 1 "ENTRY_11426690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11426690(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  if (*param_1 == 1) {
    uVar1 = (undefined4)(thunk_FUN_1144cf70(param_1 + 6));
  }
  else {
    uVar1 = (undefined4)(0xffffff79);
  }
  memset(param_1,0,0x1b8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11426ab0; body size 23 bytes.
#line 1 "ENTRY_11426ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11426ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x11427500(param_1,0,param_2,param_3);
  return;
}


// Reference entry 11426d40; body size 23 bytes.
#line 1 "ENTRY_11426d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11426d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x11427500(param_1,1,param_2,param_3);
  return;
}


// Reference entry 114273d0; body size 102 bytes.
#line 1 "ENTRY_114273d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114273d0(undefined4 param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  void *_Dst;
  
  _Dst = (void *)((void *)0x0);
  sVar2 = (size_t)(0);
  if (param_3 != 0) {
    _Dst = (void *)(calloc(param_3,1));
    if (_Dst == (void *)0x0) {
      thunk_FUN_11423f00(0,0);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff73);
    }
    memcpy(_Dst,param_2,param_3);
    sVar2 = (size_t)(param_3);
  }
  uVar1 = (undefined4)(FUN_11427450(param_1,_Dst,param_3));
  thunk_FUN_11423f00(_Dst,sVar2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 114281c0; body size 40 bytes.
#line 1 "ENTRY_114281c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte FUN_114281c0(void)

{
  byte bVar1;
  
  (*(code *)PTR_FUN_12126b50)(&DAT_122fb15c);
  bVar1 = (byte)(DAT_122fa1d0 & 1);
  (*(code *)PTR_FUN_12126b54)(&DAT_122fb15c);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(bVar1);
}


// Reference entry 11428200; body size 40 bytes.
#line 1 "ENTRY_11428200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte FUN_11428200(void)

{
  byte bVar1;
  
  (*(code *)PTR_FUN_12126b50)(&DAT_122fb15c);
  bVar1 = (byte)(DAT_122fa1d0 & 1);
  (*(code *)PTR_FUN_12126b54)(&DAT_122fb15c);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(bVar1);
}


// Reference entry 11428240; body size 42 bytes.
#line 1 "ENTRY_11428240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11428240(int *param_1)

{
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      thunk_FUN_1144c420(param_1 + 3);
    }
    param_1[1] = (int)(param_1[1] & 0xfffffffc);
    *param_1 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11428520; body size 23 bytes.
#line 1 "ENTRY_11428520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11428520(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x11428cb0(param_1,param_2,param_3,0);
  return;
}


// Reference entry 11428880; body size 23 bytes.
#line 1 "ENTRY_11428880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11428880(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x11428cb0(param_1,param_2,param_3,1);
  return;
}


// Reference entry 114293e0; body size 73 bytes.
#line 1 "ENTRY_114293e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114293e0(int param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff75);
  }
  _Dst = (void *)(calloc(1,param_3));
  *(void **)(param_1 + 0x20) = _Dst;
  if (_Dst == (void *)0x0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff73);
  }
  *(size_t *)(param_1 + 0x24) = param_3;
  memcpy(_Dst,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114299d0; body size 25 bytes.
#line 1 "ENTRY_114299d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114299d0(int *param_1,int param_2)

{
  if ((*param_1 == 0) && (param_2 == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1142afa0; body size 143 bytes.
#line 1 "ENTRY_1142afa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_1142afa0(ushort *param_1,void *param_2,uint param_3,void *param_4,uint param_5,uint *param_6)

{
  ushort uVar1;
  
  uVar1 = (ushort)(*param_1);
  if (((((uVar1 & 0x7000) != 0x1000) && ((uVar1 & 0x7000) != 0x2000)) &&
      ((uVar1 & 0xcfff) != 0x4001)) &&
     (((uVar1 & 0xcf00) != 0x4100 && ((uVar1 & 0xcf00) != 0x4200)))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
  }
  if (param_5 < param_3) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff76);
  }
  memcpy(param_4,param_2,param_3);
  memset((void *)(param_3 + (int)param_4),0,param_5 - param_3);
  *param_6 = (uint)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1142bda0; body size 30 bytes.
#line 1 "ENTRY_1142bda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1142bda0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_1142b920(param_1,param_2,param_2 + 4,param_3,param_4);
  return;
}


// Reference entry 1142bdd0; body size 147 bytes.
#line 1 "ENTRY_1142bdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_1142bdd0(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  uVar1 = (ushort)(*param_1);
  uVar3 = (ushort)(uVar1 & 0x7000);
  if ((uVar3 == 0x1000) || (uVar3 == 0x2000)) {
    uVar2 = (undefined4)(FUN_1142bf40(param_5,param_6));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
  }
  if (uVar1 == 0x7001) {
    uVar2 = (undefined4)(thunk_FUN_11450230(param_1,param_3,param_4,param_5,param_6,param_7));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
  }
  if (((uVar1 & 0xcf00) == 0x4100) && (uVar3 == 0x7000)) {
    uVar2 = (undefined4)(thunk_FUN_11450ff0(param_1,param_5,param_6,param_7));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
}


// Reference entry 1142c370; body size 119 bytes.
#line 1 "ENTRY_1142c370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1142c370(int *param_1,int *param_2)

{
  int *_Dst;
  int iVar1;
  
  if ((*param_1 != 0) && (*param_2 == 0)) {
    _Dst = (int *)(param_2 + 2);
    memset(_Dst,0,0xe0);
    if (*param_1 == 1) {
      *param_2 = (int)(1);
      iVar1 = (int)(func_0x1006fefb(param_1 + 2,_Dst));
      if (iVar1 == 0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
      }
    }
    else {
      iVar1 = (int)(-0x89);
    }
    if (*param_2 != 0) {
      if (*param_2 == 1) {
        thunk_FUN_1144dbb0(_Dst);
      }
      *param_2 = (int)(0);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x89);
}


// Reference entry 1142d440; body size 220 bytes.
#line 1 "ENTRY_1142d440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1142d440(ushort *param_1,void *param_2,size_t param_3,void *param_4,undefined4 param_5,
                size_t *param_6,int *param_7)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = (ushort)(*param_1);
  if (param_3 != 0) {
    if (((uVar1 & 0x7000) == 0x1000) || ((uVar1 & 0x7000) == 0x2000)) {
      *param_7 = (int)(param_3 * 8);
      iVar2 = (int)(thunk_FUN_11433a20(*param_1,param_3 * 8));
      if (iVar2 != 0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
      }
      memcpy(param_4,param_2,param_3);
      *param_6 = (size_t)(param_3);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
    }
    if ((uVar1 & 0x4000) != 0) {
      if ((uVar1 & 0xcf00) == 0x4100) {
        iVar2 = (int)(thunk_FUN_114510f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
      }
      if ((uVar1 & 0xcfff) == 0x4001) {
        iVar2 = (int)(thunk_FUN_11450330(param_1,param_2,param_3,param_4,param_5,param_6,param_7));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x86);
}


// Reference entry 1142d560; body size 6 bytes.
#line 1 "ENTRY_1142d560"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1142d560(void)

{
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(_DAT_12126b5c);
}


// Reference entry 1142d570; body size 10 bytes.
#line 1 "ENTRY_1142d570"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1142d570(undefined4 param_1)

{
  _DAT_12126b5c = (int)(param_1);
  return;
}


// Reference entry 1142e060; body size 27 bytes.
#line 1 "ENTRY_1142e060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1142e060(int *param_1,int *param_2)

{
  if (*param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff77);
  }
  *param_2 = (int)(param_1[2]);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1142e480; body size 60 bytes.
#line 1 "ENTRY_1142e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1142e480(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 & 0x7f000000) == 0x9000000) {
    uVar1 = (uint)(uVar1 & 0xfe00ffff | 0x8000000);
  }
  thunk_FUN_1142ddf0(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)(uVar1 != 0) * 2 + -0x89);
}


// Reference entry 1142e720; body size 150 bytes.
#line 1 "ENTRY_1142e720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1142e720(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(param_1);
  iVar2 = (int)(FUN_1142bfb0(param_3,&param_1,0x4000,*param_1));
  if (iVar2 == 0) {
    if ((uint)param_1[1] < 0x100) {
      if (((short)param_2 == 0x101) || ((short)param_2 == 0x102)) {
        puVar1[1] = (undefined4)(puVar1[1] | 1);
      }
      iVar2 = (int)(FUN_1142e520(puVar1,param_2,*(undefined2 *)param_1,param_1[8],param_1[9]));
      iVar3 = (int)(thunk_FUN_11452150(param_1));
      if (iVar2 == 0) {
        iVar2 = (int)(iVar3);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
    }
    thunk_FUN_11452150(param_1);
    iVar2 = (int)(-0x86);
    param_1 = (undefined4 *)((undefined4 *)0x0);
  }
  thunk_FUN_1142ddf0(puVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 1142ef90; body size 30 bytes.
#line 1 "ENTRY_1142ef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1142ef90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x10061c16(param_1,param_2,&DAT_11bfec44,0,0,param_3);
  return;
}


// Reference entry 1142f120; body size 34 bytes.
#line 1 "ENTRY_1142f120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1142f120(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x10061c16(param_1,param_2,param_3,param_3 + 4,param_4,param_5);
  return;
}


// Reference entry 1142f150; body size 36 bytes.
#line 1 "ENTRY_1142f150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1142f150(int *param_1,uint param_2)

{
  if (*param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff77);
  }
  if ((uint)param_1[2] < param_2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff79);
  }
  param_1[2] = (int)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11430f40; body size 23 bytes.
#line 1 "ENTRY_11430f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11430f40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x11430bf0(param_1,param_2,param_3,1);
  return;
}


// Reference entry 11431290; body size 23 bytes.
#line 1 "ENTRY_11431290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11431290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x11430bf0(param_1,param_2,param_3,0);
  return;
}


// Reference entry 11431a50; body size 220 bytes.
#line 1 "ENTRY_11431a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11431a50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  short *psStack_4;
  
  psStack_4 = (short *)((short *)0x0);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    iVar5 = (int)(FUN_1142bfb0(param_2,&psStack_4,0x4000,*(undefined4 *)(param_1 + 4)));
    if (iVar5 == 0) {
      if ((*psStack_4 == 0x1203) || (*psStack_4 == 0x1205)) {
        _Dst = (void *)(calloc(1,*(size_t *)(psStack_4 + 0x12)));
        *(void **)(param_1 + 0x1c) = _Dst;
        if (_Dst != (void *)0x0) {
          memcpy(_Dst,*(void **)(psStack_4 + 0x10),*(size_t *)(psStack_4 + 0x12));
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(psStack_4 + 0x12);
          uVar1 = (undefined4)(*(undefined4 *)(psStack_4 + 2));
          uVar2 = (undefined4)(*(undefined4 *)(psStack_4 + 4));
          uVar3 = (undefined4)(*(undefined4 *)(psStack_4 + 6));
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)psStack_4;
          *(undefined4 *)(param_1 + 0x38) = uVar1;
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
          *(undefined4 *)(param_1 + 0x40) = uVar3;
          *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(psStack_4 + 8);
          iVar5 = (int)(thunk_FUN_11452150(psStack_4));
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar5);
        }
        iVar5 = (int)(-0x8d);
      }
      else {
        iVar5 = (int)(-0x87);
      }
    }
  }
  else {
    iVar5 = (int)(-0x89);
  }
  thunk_FUN_114312b0(param_1);
  iVar4 = (int)(thunk_FUN_11452150(psStack_4));
  if (iVar5 == 0) {
    iVar5 = (int)(iVar4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar5);
}


// Reference entry 11431c60; body size 85 bytes.
#line 1 "ENTRY_11431c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11431c60(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0xc) != '\x01') {
    thunk_FUN_114312b0(param_1);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff77);
  }
  if (*(int *)(param_1 + 4) != 0xa000100) {
    thunk_FUN_114312b0(param_1);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
  }
  if (param_2 == '\0') {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  thunk_FUN_114312b0(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff79);
}


// Reference entry 11432430; body size 55 bytes.
#line 1 "ENTRY_11432430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11432430(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    param_1[2] = (int)(param_1[2] & 0xfffffffe);
    param_1[3] = (int)(0);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  uVar1 = (undefined4)(0xffffff79);
  if (*param_1 == 1) {
    uVar1 = (undefined4)(0xffffff7a);
  }
  param_1[2] = (int)(param_1[2] & 0xfffffffe);
  *param_1 = (int)(0);
  param_1[3] = (int)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 114326b0; body size 8 bytes.
#line 1 "ENTRY_114326b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114326b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 11433c50; body size 55 bytes.
#line 1 "ENTRY_11433c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11433c50(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    param_1[2] = (int)(param_1[2] & 0xfffffffe);
    param_1[3] = (int)(0);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  uVar1 = (undefined4)(0xffffff79);
  if (*param_1 == 1) {
    uVar1 = (undefined4)(0xffffff7a);
  }
  param_1[2] = (int)(param_1[2] & 0xfffffffe);
  *param_1 = (int)(0);
  param_1[3] = (int)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11433cd0; body size 123 bytes.
#line 1 "ENTRY_11433cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11433cd0(ushort *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                undefined4 param_5,int param_6,int param_7,int param_8)

{
 try {
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Memory;
  
  if ((*param_1 & 0xcfff) == 0x4001) {
    uVar2 = (uint)(param_4 & 0xffffff00);
    if (((uVar2 == 0x6000200) || (uVar2 == 0x6000300)) || (uVar2 == 0x6001300)) {
      iVar3 = (int)(thunk_FUN_114503d0(*param_1,param_2));
      iVar4 = (int)(param_6);
      uVar2 = (uint)(param_4);
      if ((iVar3 == 0) && (iVar3 = FUN_11450880(param_4,param_6,&param_1), iVar3 == 0)) {
        iVar3 = (int)(thunk_FUN_1141a490(0));
        puVar1 = (ushort *)(param_1);
        if (param_8 == iVar3) {
          uVar2 = (uint)(uVar2 & 0xffffff00);
          if (uVar2 == 0x6000200) {
            iVar3 = (int)(thunk_FUN_1141c860(0,0,0));
            if (iVar3 == 0) {
              iVar3 = (int)(thunk_FUN_1141b160(0,param_1,iVar4,param_5,param_7));
            }
          }
          else {
            if ((uVar2 != 0x6000300) && (uVar2 != 0x6001300)) {
              iVar3 = (int)(-0x87);
              goto LAB_1145079a;
            }
            iVar3 = (int)(thunk_FUN_1141c860(0,1,param_1));
            if (iVar3 == 0) {
              if (uVar2 == 0x6001300) {
                iVar3 = (int)(-1);
              }
              else {
                iVar3 = (int)(thunk_FUN_1141a490(0));
                iVar3 = (int)(iVar3 + (-2 - iVar4));
                if (iVar3 < 0) {
                  iVar3 = (int)(0);
                }
                else if (iVar4 < iVar3) {
                  iVar3 = (int)(iVar4);
                }
              }
              iVar3 = (int)(thunk_FUN_1141c570(0,puVar1,iVar4,param_5,puVar1,iVar3,param_7));
            }
          }
          if (iVar3 != -0x4100) {
            iVar3 = (int)(thunk_FUN_114262c0(iVar3));
            goto LAB_1145079a;
          }
        }
        iVar3 = (int)(-0x95);
      }
LAB_1145079a:
      thunk_FUN_11419f70();
      free((void *)0x0);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
    }
  }
  else {
    if ((*param_1 & 0xcf00) != 0x4100) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x86);
    }
    if ((param_4 & 0xfffffe00) == 0x6000600) {
      _Memory = (void *)((void *)0x0);
      iVar4 = (int)(thunk_FUN_11451200(*param_1,param_1[1],param_2,param_3,&stack0xffffffec));
      if (iVar4 == 0) {
        uVar2 = (uint)(*(int *)((int)_Memory + 0x3c) + 7U >> 3);
        thunk_FUN_114157a0(&stack0xfffffff0);
        thunk_FUN_114157a0(&stack0xfffffff8);
        iVar3 = (int)(param_7);
        if (param_8 == uVar2 * 2) {
          uVar5 = (undefined4)(thunk_FUN_11416950(&stack0xfffffff0,param_7,uVar2));
          iVar4 = (int)(thunk_FUN_114262c0(uVar5));
          if (iVar4 == 0) {
            uVar5 = (undefined4)(thunk_FUN_11416950(&stack0xfffffff8,uVar2 + iVar3,uVar2));
            iVar4 = (int)(thunk_FUN_114262c0(uVar5));
            if (iVar4 == 0) {
              iVar3 = (int)((int)_Memory + 0x68);
              iVar4 = (int)(thunk_FUN_1143e930(iVar3));
              uVar5 = (undefined4)(0);
              if (iVar4 != 0) {
                uVar5 = (undefined4)(thunk_FUN_1143ea50(_Memory,iVar3,(int)_Memory + 0x60,(int)_Memory + 0x1c,
                                           LAB_10044021,0));
              }
              iVar4 = (int)(thunk_FUN_114262c0(uVar5));
              if (iVar4 == 0) {
                uVar5 = (undefined4)(thunk_FUN_11453260(_Memory,param_5,param_6,iVar3,&stack0xfffffff0,
                                           &stack0xfffffff8));
                iVar4 = (int)(thunk_FUN_114262c0(uVar5));
              }
            }
          }
        }
        else {
          iVar4 = (int)(-0x95);
        }
        thunk_FUN_11414d70(&stack0xfffffff0);
        thunk_FUN_11414d70(&stack0xfffffff8);
        thunk_FUN_1143e990(_Memory);
        free(_Memory);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x87);

 } catch (...) { }
}


// Reference entry 11433d70; body size 76 bytes.
#line 1 "ENTRY_11433d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11433d70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && ((param_1[2] & 1U) == 0)) {
    uVar2 = (undefined4)(0xffffff79);
    if (iVar1 == 1) {
      uVar2 = (undefined4)(0xffffff7a);
    }
    param_1[3] = (int)(0);
    param_1[2] = (int)(param_1[2] | 1);
    *param_1 = (int)(0);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
  }
  param_1[2] = (int)(param_1[2] | 1);
  if (iVar1 != 0) {
    *param_1 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff77);
}


// Reference entry 11433dd0; body size 8 bytes.
#line 1 "ENTRY_11433dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11433dd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 11434190; body size 183 bytes.
#line 1 "ENTRY_11434190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11434190(undefined4 param_1,undefined4 param_2,void *param_3,size_t param_4,void *param_5,
            size_t param_6)

{
  size_t sVar1;
  void *_Dst;
  void *_Dst_00;
  undefined4 uVar2;
  undefined4 uStack_4;
  
  sVar1 = (size_t)(param_4);
  _Dst = (void *)((void *)0x0);
  _Dst_00 = (void *)((void *)0x0);
  uStack_4 = (undefined4)(0);
  if (param_4 != 0) {
    _Dst = (void *)(calloc(param_4,1));
    if (_Dst == (void *)0x0) {
      uVar2 = (undefined4)(0xffffff73);
      param_4 = (size_t)(0);
      goto LAB_1143422b;
    }
    uStack_4 = (undefined4)(param_4);
    memcpy(_Dst,param_3,param_4);
  }
  _Dst_00 = (void *)((void *)0x0);
  param_4 = (size_t)(0);
  if (param_6 != 0) {
    _Dst_00 = (void *)(calloc(param_6,1));
    if (_Dst_00 == (void *)0x0) {
      uVar2 = (undefined4)(0xffffff73);
      param_4 = (size_t)(0);
      goto LAB_1143422b;
    }
    param_4 = (size_t)(param_6);
    memcpy(_Dst_00,param_5,param_6);
  }
  uVar2 = (undefined4)(FUN_11433f90(param_1,1,param_2,_Dst,sVar1,_Dst_00,param_6));
LAB_1143422b:
  thunk_FUN_11423f00(_Dst,uStack_4);
  thunk_FUN_11423f00(_Dst_00,param_4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
}


// Reference entry 11434bd0; body size 6 bytes.
#line 1 "ENTRY_11434bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11434bd0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
}


// Reference entry 11434d10; body size 62 bytes.
#line 1 "ENTRY_11434d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11434d10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1143e4d0(param_1,param_2,param_4,param_5));
  if (iVar1 == 0) {
    thunk_FUN_1143ea90(param_1,param_3,param_2,param_1 + 0x1c,param_4,param_5,0);
  }
  return;
}


// Reference entry 11434d60; body size 8 bytes.
#line 1 "ENTRY_11434d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11434d60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 11435f10; body size 24 bytes.
#line 1 "ENTRY_11435f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11435f10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1142be90(param_2,param_3));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(-(uint)(iVar1 != 0) & 0xffffffc4);
}


// Reference entry 11435f30; body size 34 bytes.
#line 1 "ENTRY_11435f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11435f30(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  case 0xffffff69:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff92);
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffffff);
  case 0xffffff6d:
  case 0xffffff6f:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff90);
  case 0xffffff7a:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff8e);
  }
}


// Reference entry 11436e10; body size 66 bytes.
#line 1 "ENTRY_11436e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11436e10(undefined *param_1,undefined *param_2,int *param_3,int *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(&PTR_DAT_11bfefc0);
  puVar1 = (undefined *)(PTR_DAT_11bfefc0);
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffffd2);
    }
    if ((ppuVar2[5] == param_1) && (ppuVar2[4] == param_2)) break;
    ppuVar2 = (undefined **)(ppuVar2 + 6);
    puVar1 = (undefined *)(*ppuVar2);
  }
  *param_3 = (int)((int)*ppuVar2);
  *param_4 = (int)((int)ppuVar2[1]);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11438ad0; body size 264 bytes.
#line 1 "ENTRY_11438ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_11438ad0(undefined4 *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  void *_Memory;
  void *pvVar1;
  
  _Memory = (void *)((void *)func_0x10074983(*param_1,param_2,param_3));
  if (_Memory != (void *)0x0) {
    if (param_5 == 0) {
      free(*(void **)((int)_Memory + 0x14));
      *(undefined4 *)((int)_Memory + 0x14) = 0;
      *(undefined4 *)((int)_Memory + 0x10) = 0;
    }
    else if (*(size_t *)((int)_Memory + 0x10) != param_5) {
      pvVar1 = (void *)(calloc(1,param_5));
      if (pvVar1 == (void *)0x0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
      }
      free(*(void **)((int)_Memory + 0x14));
      *(void **)((int)_Memory + 0x14) = pvVar1;
      *(size_t *)((int)_Memory + 0x10) = param_5;
    }
LAB_11438bb8:
    if ((param_4 != (void *)0x0) && (param_5 != 0)) {
      memcpy(*(void **)((int)_Memory + 0x14),param_4,param_5);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(_Memory);
  }
  _Memory = (void *)(calloc(1,0x20));
  if (_Memory != (void *)0x0) {
    *(size_t *)((int)_Memory + 4) = param_3;
    pvVar1 = (void *)(calloc(1,param_3));
    *(void **)((int)_Memory + 8) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,param_2,param_3);
      *(size_t *)((int)_Memory + 0x10) = param_5;
      if (param_5 != 0) {
        pvVar1 = (void *)(calloc(1,param_5));
        *(void **)((int)_Memory + 0x14) = pvVar1;
        if (pvVar1 == (void *)0x0) {
          free(*(void **)((int)_Memory + 8));
          free(_Memory);
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
        }
      }
      *(undefined4 *)((int)_Memory + 0x18) = *param_1;
      *param_1 = (undefined4)(_Memory);
      goto LAB_11438bb8;
    }
    free(_Memory);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
}


// Reference entry 11438df0; body size 144 bytes.
#line 1 "ENTRY_11438df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11438df0(uint *param_1,uint param_2,void *param_3,int param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  size_t _Size;
  
  uVar4 = (uint)(param_4 + 7U >> 3);
  bVar2 = (byte)((char)uVar4 * '\b' - (char)param_4);
  uVar3 = (uint)(*param_1);
  if (param_2 <= uVar3) {
    if (uVar4 + 1 <= uVar3 - param_2) {
      if (uVar4 != 0) {
        _Size = (size_t)(uVar4 - 1);
        *param_1 = (uint)(uVar3 - 1);
        *(byte *)(uVar3 - 1) = *(byte *)(_Size + (int)param_3) & -1 << (bVar2 & 0x1f);
        *param_1 = (uint)(*param_1 - _Size);
        memcpy((void *)*param_1,param_3,_Size);
        uVar3 = (uint)(*param_1);
      }
      *param_1 = (uint)(uVar3 - 1);
      *(byte *)(uVar3 - 1) = bVar2;
      uVar1 = (undefined4)(FUN_11439020(param_1,param_2,uVar4 + 1,3));
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff94);
}


// Reference entry 11438eb0; body size 54 bytes.
#line 1 "ENTRY_11438eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11438eb0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (*param_1 - param_2 < 1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff94);
  }
  pcVar2 = (char *)((char *)(*param_1 + -1));
  *param_1 = (int)((int)pcVar2);
  *pcVar2 = (char)(-(param_3 != 0));
  uVar1 = (undefined4)(FUN_11439020(param_1,param_2,1,1));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11438f00; body size 23 bytes.
#line 1 "ENTRY_11438f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11438f00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_11438a50(param_1,param_2,param_3,10);
  return;
}


// Reference entry 11438f20; body size 83 bytes.
#line 1 "ENTRY_11438f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11438f20(uint *param_1,uint param_2,void *param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 < param_2) || (uVar1 - param_2 < param_4)) {
    param_4 = (uint)(0xffffff94);
  }
  else {
    *param_1 = (uint)(uVar1 - param_4);
    if (param_4 != 0) {
      memcpy((void *)(uVar1 - param_4),param_3,param_4);
    }
    if (-1 < (int)param_4) {
      uVar1 = (uint)(FUN_11439020(param_1,param_2,param_4,0x16));
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_4);
}


// Reference entry 11439170; body size 219 bytes.
#line 1 "ENTRY_11439170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11439170(uint *param_1,uint param_2,void *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  size_t _Size;
  
  uVar1 = (uint)(param_4 + 7 >> 3);
  if (param_4 != 0) {
    pbVar4 = (byte *)((byte *)((int)param_3 + (uVar1 - 1)));
    bVar3 = (byte)(*pbVar4 >> ((char)uVar1 * '\b' - (char)param_4 & 0x1fU));
    while ((bVar3 & 1) == 0) {
      bVar3 = (byte)(bVar3 >> 1);
      param_4 = (uint)(param_4 - 1);
      if (param_4 == 0) break;
      if ((param_4 & 7) == 0) {
        bVar3 = (byte)(pbVar4[-1]);
        pbVar4 = (byte *)(pbVar4 + -1);
      }
    }
  }
  uVar5 = (uint)(param_4 + 7 >> 3);
  uVar1 = (uint)(*param_1);
  bVar3 = (byte)((char)uVar5 * '\b' - (char)param_4);
  if ((param_2 <= uVar1) && (uVar5 + 1 <= uVar1 - param_2)) {
    if (uVar5 != 0) {
      _Size = (size_t)(uVar5 - 1);
      *param_1 = (uint)(uVar1 - 1);
      *(byte *)(uVar1 - 1) = *(byte *)(_Size + (int)param_3) & -1 << (bVar3 & 0x1f);
      *param_1 = (uint)(*param_1 - _Size);
      memcpy((void *)*param_1,param_3,_Size);
      uVar1 = (uint)(*param_1);
    }
    *param_1 = (uint)(uVar1 - 1);
    *(byte *)(uVar1 - 1) = bVar3;
    uVar2 = (undefined4)(FUN_11439020(param_1,param_2,uVar5 + 1,3));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff94);
}


// Reference entry 11439290; body size 63 bytes.
#line 1 "ENTRY_11439290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11439290(int *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (0 < *param_1 - param_2) {
    *param_1 = (int)(*param_1 + -1);
    *(undefined1 *)*param_1 = (int)(0);
    if (0 < *param_1 - param_2) {
      puVar1 = (undefined1 *)((undefined1 *)(*param_1 + -1));
      *param_1 = (int)((int)puVar1);
      *puVar1 = (undefined1)(5);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(2);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff94);
}


// Reference entry 114393c0; body size 83 bytes.
#line 1 "ENTRY_114393c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_114393c0(uint *param_1,uint param_2,void *param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 < param_2) || (uVar1 - param_2 < param_4)) {
    param_4 = (uint)(0xffffff94);
  }
  else {
    *param_1 = (uint)(uVar1 - param_4);
    if (param_4 != 0) {
      memcpy((void *)(uVar1 - param_4),param_3,param_4);
    }
    if (-1 < (int)param_4) {
      uVar1 = (uint)(FUN_11439020(param_1,param_2,param_4,0x13));
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_4);
}


// Reference entry 11439430; body size 63 bytes.
#line 1 "ENTRY_11439430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11439430(uint *param_1,uint param_2,void *param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((param_2 <= uVar1) && (param_4 <= uVar1 - param_2)) {
    *param_1 = (uint)(uVar1 - param_4);
    if (param_4 != 0) {
      memcpy((void *)(uVar1 - param_4),param_3,param_4);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffffff94);
}


// Reference entry 114394b0; body size 85 bytes.
#line 1 "ENTRY_114394b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_114394b0(uint *param_1,uint param_2,undefined4 param_3,void *param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 < param_2) || (uVar1 - param_2 < param_5)) {
    param_5 = (uint)(0xffffff94);
  }
  else {
    *param_1 = (uint)(uVar1 - param_5);
    if (param_5 != 0) {
      memcpy((void *)(uVar1 - param_5),param_4,param_5);
    }
    if (-1 < (int)param_5) {
      uVar1 = (uint)(FUN_11439020(param_1,param_2,param_5,param_3));
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_5);
}


// Reference entry 11439520; body size 83 bytes.
#line 1 "ENTRY_11439520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11439520(uint *param_1,uint param_2,void *param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if ((uVar1 < param_2) || (uVar1 - param_2 < param_4)) {
    param_4 = (uint)(0xffffff94);
  }
  else {
    *param_1 = (uint)(uVar1 - param_4);
    if (param_4 != 0) {
      memcpy((void *)(uVar1 - param_4),param_3,param_4);
    }
    if (-1 < (int)param_4) {
      uVar1 = (uint)(FUN_11439020(param_1,param_2,param_4,0xc));
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_4);
}


// Reference entry 1143df40; body size 33 bytes.
#line 1 "ENTRY_1143df40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * FUN_1143df40(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (undefined *)(&DAT_11c00368);
  iVar2 = (int)(4);
  do {
    if (iVar2 == param_1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)(puVar1);
    }
    iVar2 = (int)(*(int *)(puVar1 + 0xc));
    puVar1 = (undefined *)(puVar1 + 0xc);
  } while (iVar2 != 0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)((undefined *)0x0);
}


// Reference entry 1143dfe0; body size 33 bytes.
#line 1 "ENTRY_1143dfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1143dfe0(short param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)&DAT_11c00368);
  do {
    if ((short)piVar1[1] == param_1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(piVar1);
    }
    piVar1 = (int *)(piVar1 + 3);
  } while (*piVar1 != 0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)((int *)0x0);
}


// Reference entry 1143e010; body size 6 bytes.
#line 1 "ENTRY_1143e010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * FUN_1143e010(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)(&DAT_11c00368);
}


// Reference entry 1143e020; body size 124 bytes.
#line 1 "ENTRY_1143e020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1143e020(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((((param_2 == 0) || (iVar1 = thunk_FUN_1144bdf0(param_2,*param_1), iVar1 == 0)) &&
      ((param_3 == 0 || (iVar1 = thunk_FUN_11413d00(param_3,param_1 + 0x18), iVar1 == 0)))) &&
     ((param_4 == 0 ||
      (((iVar1 = thunk_FUN_11413d00(param_4,param_1 + 0x1a), iVar1 == 0 &&
        (iVar1 = thunk_FUN_11413d00(param_4 + 8,param_1 + 0x1c), iVar1 == 0)) &&
       (iVar1 = thunk_FUN_11413d00(param_4 + 0x10,param_1 + 0x1e), iVar1 == 0)))))) {
    iVar1 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 1143e0c0; body size 275 bytes.
#line 1 "ENTRY_1143e0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1143e0c0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)(thunk_FUN_1144bdf0(param_2,param_1));
  if (iVar2 == 0) {
    iVar2 = (int)(param_2 + 0x60);
    if (*(int *)(param_2 + 0x1c) != 0) {
      if (*(int *)(param_2 + 0x24) == 0) {
        uVar1 = (uint)(*(uint *)(param_2 + 0x40));
        iVar4 = (int)((uVar1 >> 3) + 1);
        iVar3 = (int)(thunk_FUN_11414c10(iVar2,iVar4,param_3));
        if ((((iVar3 == 0) &&
             (iVar3 = thunk_FUN_11417820(iVar2,(iVar4 * 8 - uVar1) + -1), iVar3 == 0)) &&
            (iVar3 = thunk_FUN_11417640(iVar2,uVar1,1), iVar3 == 0)) &&
           (((iVar3 = thunk_FUN_11417640(iVar2,0,0), iVar3 == 0 &&
             (iVar3 = thunk_FUN_11417640(iVar2,1,0), iVar3 == 0)) && (uVar1 == 0xfe)))) {
          iVar3 = (int)(thunk_FUN_11417640(iVar2,2,0));
        }
      }
      else {
        iVar4 = (int)(thunk_FUN_114168b0(iVar2,1,param_2 + 0x34,param_3,param_4));
        iVar3 = (int)(-0x4d00);
        if (iVar4 != -0xe) {
          iVar3 = (int)(iVar4);
        }
      }
      if (iVar3 != 0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar3);
      }
      if (param_3 != 0) {
        iVar2 = (int)(FUN_1143b9b0(param_2,param_2 + 0x68,iVar2,param_2 + 0x1c,param_3,param_4,0));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
      }
    }
    iVar2 = (int)(-0x4f80);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 1143e220; body size 269 bytes.
#line 1 "ENTRY_1143e220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1143e220(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4f80);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = (uint)(*(uint *)(param_1 + 0x40));
    iVar3 = (int)((uVar1 >> 3) + 1);
    iVar2 = (int)(thunk_FUN_11414c10(param_2,iVar3,param_4));
    if ((((iVar2 == 0) && (iVar2 = thunk_FUN_11417820(param_2,(iVar3 * 8 - uVar1) + -1), iVar2 == 0)
         ) && (iVar2 = thunk_FUN_11417640(param_2,uVar1,1), iVar2 == 0)) &&
       (((iVar2 = thunk_FUN_11417640(param_2,0,0), iVar2 == 0 &&
         (iVar2 = thunk_FUN_11417640(param_2,1,0), iVar2 == 0)) && (uVar1 == 0xfe)))) {
      iVar2 = (int)(thunk_FUN_11417640(param_2,2,0));
    }
  }
  else {
    iVar3 = (int)(thunk_FUN_114168b0(param_2,1,param_1 + 0x34,param_4,param_5));
    iVar2 = (int)(-0x4d00);
    if (iVar3 != -0xe) {
      iVar2 = (int)(iVar3);
    }
  }
  if (iVar2 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
  }
  if (param_4 != 0) {
    iVar2 = (int)(FUN_1143b9b0(param_1,param_3,param_2,param_1 + 0x1c,param_4,param_5,0));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x4f80);
}


// Reference entry 1143e6f0; body size 19 bytes.
#line 1 "ENTRY_1143e6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1143e6f0(undefined4 param_1,undefined4 *param_2)

{
  thunk_FUN_1144bdf0(param_1,*param_2);
  return;
}


// Reference entry 1143e8d0; body size 74 bytes.
#line 1 "ENTRY_1143e8d0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1143e8d0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (_DAT_122fa574 == 0) {
    iVar1 = (int)(0);
    piVar2 = (int *)((int *)&DAT_11c00368);
    iVar3 = (int)(4);
    do {
      *(int *)(iVar1 * 4 + 0x122fa564) = iVar3;
      piVar2 = (int *)(piVar2 + 3);
      iVar3 = (int)(*piVar2);
      iVar1 = (int)(iVar1 + 1);
    } while (iVar3 != 0);
    *(undefined4 *)(iVar1 * 4 + 0x122fa564) = 0;
    _DAT_122fa574 = (int)(1);
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x122fa564);
}


// Reference entry 1143e950; body size 47 bytes.
#line 1 "ENTRY_1143e950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1143e950(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffb080);
  }
  uVar1 = (undefined4)(FUN_1143b9b0(param_1,param_1 + 0x68,param_1 + 0x60,param_1 + 0x1c,param_2,param_3,0));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 1143e9f0; body size 7 bytes.
#line 1 "ENTRY_1143e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1143e9f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 1143f300; body size 66 bytes.
#line 1 "ENTRY_1143f300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1143f300(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (int)(func_0x1008cce0(param_1,param_2,param_3));
  if (iVar1 == 0) {
    iVar1 = (int)(func_0x1008cce0(param_1 + 8,param_2,param_4));
    if (iVar1 == 0) {
      thunk_FUN_114161b0(param_1 + 0x10,1);
    }
  }
  return;
}


// Reference entry 11442c60; body size 482 bytes.
#line 1 "ENTRY_11442c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11442c60(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4,int param_5,
                 byte *param_6)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  byte *pbStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte abStack_48 [64];
  uint uStack_8;
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&iStack_98);
  iStack_98 = (int)(param_5);
  pbStack_8c = (byte *)(param_6);
  thunk_FUN_11423ed0(&uStack_88,0x40);
  thunk_FUN_11423ed0(abStack_48,0x40);
  uStack_8 = (uint)(0x40);
  uStack_88 = (undefined4)(0x61707865);
  uStack_78 = (undefined4)(*param_1);
  uStack_74 = (undefined4)(param_1[1]);
  uStack_70 = (undefined4)(param_1[2]);
  uStack_6c = (undefined4)(param_1[3]);
  uStack_68 = (undefined4)(param_1[4]);
  uStack_64 = (undefined4)(param_1[5]);
  uStack_60 = (undefined4)(param_1[6]);
  uStack_5c = (undefined4)(param_1[7]);
  iStack_58 = (int)(param_3);
  uStack_54 = (undefined4)(*param_2);
  uStack_50 = (undefined4)(param_2[1]);
  uStack_4c = (undefined4)(param_2[2]);
  uStack_84 = (undefined4)(0x3320646e);
  uStack_80 = (undefined4)(0x79622d32);
  uStack_7c = (undefined4)(0x6b206574);
  thunk_FUN_11423ed0(abStack_48,0x40);
  iVar3 = (int)(0);
  uStack_8 = (uint)(0x40);
  if (param_4 != 0) {
    pbVar2 = (byte *)(param_6);
    do {
      if (0x3f < uStack_8) break;
      iVar3 = (int)(iVar3 + 1);
      *pbVar2 = (byte)(abStack_48[uStack_8] ^ pbVar2[param_5 - (int)param_6]);
      pbVar2 = (byte *)(pbVar2 + 1);
      uStack_8 = (uint)(uStack_8 + 1);
      param_4 = (uint)(param_4 - 1);
    } while (param_4 != 0);
  }
  if (0x3f < param_4) {
    pbVar2 = (byte *)(param_6 + iVar3);
    iVar1 = (int)(iStack_98 - (int)param_6);
    uVar4 = (uint)(param_4 >> 6);
    iStack_90 = (int)(iVar3 + uVar4 * 0x40);
    iStack_94 = (int)(iVar1);
    do {
      FUN_11442880(&uStack_88,abStack_48);
      iStack_58 = (int)(iStack_58 + 1);
      FUN_11443110(pbVar2,pbVar2 + iVar1,abStack_48,0x40);
      pbVar2 = (byte *)(pbVar2 + 0x40);
      param_4 = (uint)(param_4 - 0x40);
      uVar4 = (uint)(uVar4 - 1);
      iVar3 = (int)(iStack_90);
      param_6 = (byte *)(pbStack_8c);
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    FUN_11442880(&uStack_88,abStack_48);
    iStack_58 = (int)(iStack_58 + 1);
    FUN_11443110(param_6 + iVar3,iStack_98 + iVar3,abStack_48,param_4);
    uStack_8 = (uint)(param_4);
  }
  thunk_FUN_11423ed0(&uStack_88,0x84);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11446060; body size 51 bytes.
#line 1 "ENTRY_11446060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11446060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_11445b00(param_1,2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}


// Reference entry 114460a0; body size 51 bytes.
#line 1 "ENTRY_114460a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114460a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_11445810(param_1,3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}


// Reference entry 11447060; body size 100 bytes.
#line 1 "ENTRY_11447060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11447060(uint *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar3 = (int)(0);
  param_4 = (uint)(DAT_122fa560 ^ param_4);
  if (param_3 != 0) {
    puVar5 = (uint *)(param_1);
    do {
      uVar2 = (uint)(*puVar5);
      uVar4 = (uint)(*(uint *)((param_2 - (int)param_1) + (int)puVar5) &
              (int)(-(param_4 >> 1) | -param_4) >> 0x1f);
      uVar1 = (uint)(uVar2 + iVar3);
      uVar6 = (uint)(uVar1 + uVar4);
      *puVar5 = (uint)(uVar6);
      iVar3 = (int)((uint)(uVar1 < uVar2) + (uint)(uVar6 < uVar4));
      param_3 = (int)(param_3 + -1);
      puVar5 = (uint *)(puVar5 + 1);
    } while (param_3 != 0);
  }
  return;
}


// Reference entry 114471c0; body size 29 bytes.
#line 1 "ENTRY_114471c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114471c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(0x80000000);
  uVar1 = (uint)(0);
  do {
    if ((param_1 & uVar2) != 0) {
      return;
    }
    uVar1 = (uint)(uVar1 + 1);
    uVar2 = (uint)(uVar2 >> 1);
  } while (uVar1 < 0x20);
  return;
}


// Reference entry 1144c650; body size 31 bytes.
#line 1 "ENTRY_1144c650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1144c650(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1144cbe0(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


// Reference entry 1144c880; body size 31 bytes.
#line 1 "ENTRY_1144c880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1144c880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1144cbe0(param_1,param_2,param_3,param_4,param_5,1);
  return;
}


// Reference entry 1144d290; body size 40 bytes.
#line 1 "ENTRY_1144d290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1144d290(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (int)(FUN_1144d8f0(param_1,param_2,param_3,param_4,param_5));
  if (iVar1 == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  return;
}


// Reference entry 1144d550; body size 40 bytes.
#line 1 "ENTRY_1144d550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1144d550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (int)(FUN_1144d8f0(param_1,param_2,param_3,param_4,param_5));
  if (iVar1 == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  return;
}


// Reference entry 1144db50; body size 6 bytes.
#line 1 "ENTRY_1144db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1144db50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff74);
}


// Reference entry 1144dc80; body size 87 bytes.
#line 1 "ENTRY_1144dc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1144dc80(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if (uVar1 < 0x2000004) {
    if (uVar1 == 0x2000003) {
      thunk_FUN_1140e740(param_2 + 2,param_1 + 2);
      *param_2 = (uint)(*param_1);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    }
    if (uVar1 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff77);
    }
  }
  else {
    switch(uVar1) {
    case 0x2000005:
      thunk_FUN_114101c0(param_2 + 2,param_1 + 2);
      *param_2 = (uint)(*param_1);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    case 0x2000008:
    case 0x2000009:
      thunk_FUN_114116a0(param_2 + 2,param_1 + 2);
      *param_2 = (uint)(*param_1);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    case 0x200000a:
    case 0x200000b:
      thunk_FUN_11442340(param_2 + 2,param_1 + 2);
      *param_2 = (uint)(*param_1);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
}


// Reference entry 1144ead0; body size 5 bytes.
#line 1 "ENTRY_1144ead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1144ead0(uint *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4,
                      uint param_5)

{
  uint *puVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x89);
  }
  *param_1 = (uint)(param_5);
  if ((param_5 & 0xffc07fff) == 0x3c00200) {
    puVar1 = (uint *)(param_1 + 2);
    thunk_FUN_11412800(puVar1);
    iVar2 = (int)(thunk_FUN_1144c070(0x3c00200,*param_2,param_2[1],0));
    if (iVar2 == 0) {
      thunk_FUN_1144e6d0(param_1);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x86);
    }
    iVar2 = (int)(thunk_FUN_11412b80(puVar1,iVar2));
    if (iVar2 == 0) {
      iVar2 = (int)(thunk_FUN_11454b90(puVar1,param_3,param_2[1]));
    }
    iVar2 = (int)(thunk_FUN_114262c0(iVar2));
  }
  else {
    if ((param_5 & 0x7fc00000) != 0x3800000) {
      memset(param_1,0,0x178);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x86);
    }
    param_1[2] = (uint)(0);
    iVar2 = (int)(FUN_1144ed50(param_1 + 2,param_3,param_4,param_5 & 0xff | 0x2000000));
  }
  if (iVar2 != 0) {
    thunk_FUN_1144e6d0(param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 1144f360; body size 68 bytes.
#line 1 "ENTRY_1144f360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1144f360(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0xa000100) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
  }
  iVar1 = (int)(func_0x10059b29(param_1 + 0x5a,param_2,param_3,param_4,LAB_10044021,0));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(FUN_1144f270(iVar1));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114511b0; body size 64 bytes.
#line 1 "ENTRY_114511b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114511b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0);
  iVar1 = (int)(thunk_FUN_1143e930(param_1 + 0x68));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_1143ea50(param_1,param_1 + 0x68,param_1 + 0x60,param_1 + 0x1c,LAB_10044021,0));
  }
  thunk_FUN_114262c0(uVar2);
  return;
}


// Reference entry 114519c0; body size 120 bytes.
#line 1 "ENTRY_114519c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114519c0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  param_1[3] = (int)(0);
  param_1[4] = (int)(0);
  param_1[5] = (int)(0);
  param_1[6] = (int)(0);
  param_1[7] = (int)(0);
  param_1[8] = (int)(0);
  do {
    if (*(int *)((int)&DAT_122fa598 + uVar2) == 0) {
      param_1[5] = (int)(param_1[5] + 1);
    }
    else {
      if (*(int *)((int)&DAT_122fa59c + uVar2) != 0) {
        param_1[6] = (int)(param_1[6] + 1);
      }
      if ((&DAT_122fa584)[uVar2] == '\0') {
        *param_1 = (int)(*param_1 + 1);
      }
      else {
        uVar1 = (uint)(*(uint *)((int)&DAT_122fa594 + uVar2));
        param_1[1] = (int)(param_1[1] + 1);
        if ((uint)param_1[7] < uVar1) {
          param_1[7] = (int)(uVar1);
        }
      }
      if (0xff < *(uint *)(&DAT_122fa584 + uVar2)) {
        uVar1 = (uint)(*(uint *)((int)&DAT_122fa594 + uVar2));
        param_1[2] = (int)(param_1[2] + 1);
        if ((uint)param_1[8] < uVar1) {
          param_1[8] = (int)(uVar1);
        }
      }
    }
    uVar2 = (uint)(uVar2 + 0x28);
  } while (uVar2 < 0x500);
  return;
}


// Reference entry 11451a90; body size 171 bytes.
#line 1 "ENTRY_11451a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11451a90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(param_1);
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  iVar1 = (int)((*(code *)PTR_FUN_12126b50)(&DAT_122fb160));
  if (iVar1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x90);
  }
  iVar2 = (int)(FUN_11451c40(iVar2,&param_1));
  if (iVar2 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0x1c));
    if (iVar1 == 1) {
      iVar2 = (int)(thunk_FUN_114343d0(param_1));
    }
    else if (((*(int *)(param_1 + 0x18) == 2) || (*(int *)(param_1 + 0x18) == 3)) && (iVar1 != 0)) {
      iVar2 = (int)(0);
      *(int *)(param_1 + 0x1c) = iVar1 + -1;
    }
    else {
      iVar2 = (int)(-0x97);
    }
    iVar1 = (int)((*(code *)PTR_FUN_12126b54)(&DAT_122fb160));
    if ((iVar1 != 0) && (iVar2 == 0)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(-0x90);
    }
  }
  else {
    if (iVar2 == -0x8c) {
      iVar2 = (int)(-0x88);
    }
    (*(code *)PTR_FUN_12126b54)(&DAT_122fb160);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar2);
}


// Reference entry 11451e80; body size 16 bytes.
#line 1 "ENTRY_11451e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11451e80(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffff7a);
}


// Reference entry 11452b50; body size 11 bytes.
#line 1 "ENTRY_11452b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11452b50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(param_1 != 9);
}


// Reference entry 11452b60; body size 18 bytes.
#line 1 "ENTRY_11452b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11452b60(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (param_1 != 0) {
    thunk_FUN_1143e710(param_1);
    thunk_FUN_11414d70(param_1 + 0x60);
    if (param_1 + 0x68 != 0) {
      thunk_FUN_11414d70(param_1 + 0x68);
      thunk_FUN_11414d70(param_1 + 0x70);
      thunk_FUN_11414d70();
      return;
    }
  }
  return;
}


// Reference entry 11452b80; body size 90 bytes.
#line 1 "ENTRY_11452b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11452b80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(func_0x10075ec8(param_1,param_2));
  if ((((iVar1 != 0) || (iVar1 = thunk_FUN_11413d00(param_1 + 0x60,param_2 + 0x60), iVar1 != 0)) ||
      (iVar1 = thunk_FUN_1143def0(param_1 + 0x68,param_2 + 0x68), iVar1 != 0)) && (param_1 != 0)) {
    thunk_FUN_1143e990(param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11452bf0; body size 49 bytes.
#line 1 "ENTRY_11452bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11452bf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_1144bdf0(param_1,param_2));
  if (iVar1 == 0) {
    func_0x1005f6eb(param_1,param_1 + 0x60,param_1 + 0x68,param_3,param_4);
  }
  return;
}


// Reference entry 11452c30; body size 5 bytes.
#line 1 "ENTRY_11452c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11452c30(int param_1)

{
  thunk_FUN_1143e810(param_1);
  thunk_FUN_114157a0(param_1 + 0x60);
  thunk_FUN_114157a0(param_1 + 0x68);
  thunk_FUN_114157a0(param_1 + 0x70);
  thunk_FUN_114157a0();
  return;
}


// Reference entry 11453700; body size 392 bytes.
#line 1 "ENTRY_11453700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11453700(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,void *param_5,
                 uint param_6,uint *param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint _Size;
  uint *puStack_84;
  uint *puStack_80;
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [104];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&puStack_84);
  puStack_84 = (uint *)(param_3);
  puStack_80 = (uint *)(param_7);
  if (param_8 != 0) {
    thunk_FUN_114157a0(auStack_7c);
    thunk_FUN_114157a0(auStack_74);
    iVar1 = (int)(thunk_FUN_11452ec0(param_1,auStack_7c,auStack_74,param_1 + 0x60,puStack_84,param_4,
                               param_8,param_9,param_8,param_9,param_10));
    if (iVar1 == 0) {
      memset(auStack_6c,0,0x68);
      puStack_84 = (uint *)(&uStack_4);
      iVar1 = (int)(thunk_FUN_114390c0(&puStack_84,auStack_6c,auStack_74));
      if ((-1 < iVar1) &&
         (iVar2 = thunk_FUN_114390c0(&puStack_84,auStack_6c,auStack_7c), -1 < iVar2)) {
        iVar3 = (int)(thunk_FUN_11438fb0(&puStack_84,auStack_6c,iVar1 + iVar2));
        if (-1 < iVar3) {
          iVar4 = (int)(thunk_FUN_11439480(&puStack_84,auStack_6c,0x30));
          if ((-1 < iVar4) && (_Size = iVar1 + iVar2 + iVar3 + iVar4, _Size <= param_6)) {
            memcpy(param_5,puStack_84,_Size);
            *puStack_80 = (uint)(_Size);
          }
        }
      }
    }
    thunk_FUN_11414d70(auStack_7c);
    thunk_FUN_11414d70(auStack_74);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11454b40; body size 61 bytes.
#line 1 "ENTRY_11454b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11454b40(int *param_1)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (iVar1 = param_1[0x10], iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x20) = 0;
    thunk_FUN_11423ed0(iVar1 + 0x10,0x10);
    thunk_FUN_11423ed0(iVar1,0x10);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffff9f00);
}


// Reference entry 11455250; body size 128 bytes.
#line 1 "ENTRY_11455250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11455250(undefined4 param_2,int param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11455d80();
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_model_Info);
  memset(param_1 + 0x44,0,0x200);
  param_1[0x46] = (undefined4)(param_2);
  if (-1 < param_3) {
    param_1[0x47] = (undefined4)(param_3);
  }
  thunk_FUN_1106a8d0(param_1 + 2,param_4,0x41);
  thunk_FUN_1106a8d0((int)param_1 + 0x49,param_4,0x41);
  thunk_FUN_1145c250((int)param_1 + 0x8a,"CONTROL",0x41);
  param_1[0x36] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 114552f0; body size 3 bytes.
#line 1 "ENTRY_114552f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114552f0(void)

{
  return;
}


// Reference entry 11455480; body size 162 bytes.
#line 1 "ENTRY_11455480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_11455480(undefined1 *param_2,int param_3,char param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_2 = (undefined1)(0);
  if ((*(uint *)(param_1 + 0x180) < 6) ||
     (uVar1 = *(uint *)(param_1 + 0x194), *(uint *)(param_1 + 0x194) == 0)) {
    uVar1 = (uint)(*(uint *)(param_1 + 0x180));
  }
  if (2 < uVar1) {
    puVar3 = (undefined1 *)(&DAT_118c8274);
    if (param_4 == '\0') {
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
    }
    iVar2 = (int)(thunk_FUN_1145c720(param_2,param_3,"%c%c%c%s%c%c%s%c%c%c",
                               (int)*(char *)(param_1 + 0x1a0),(int)*(char *)(param_1 + 0x1a1),
                               (int)*(char *)(param_1 + 0x1a2),puVar3,
                               (int)*(char *)(param_1 + 0x1a3),(int)*(char *)(param_1 + 0x1a4),
                               puVar3,(int)*(char *)(param_1 + 0x1a5),
                               (int)*(char *)(param_1 + 0x1a6),(int)*(char *)(param_1 + 0x1a7)));
    if ((0 < iVar2) && (iVar2 < param_3)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11455550; body size 12 bytes.
#line 1 "ENTRY_11455550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_11455550(undefined1 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined1)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)((uint)param_1 & 0xffffff00);
}


// Reference entry 11455570; body size 72 bytes.
#line 1 "ENTRY_11455570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11455570(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  thunk_FUN_1145c720(param_2,param_3,"%02X%02X%02X%02X%02X%02X",*(undefined1 *)(param_1 + 0x124),
                     *(undefined1 *)(param_1 + 0x125),*(undefined1 *)(param_1 + 0x126),
                     *(undefined1 *)(param_1 + 0x127),*(undefined1 *)(param_1 + 0x128),
                     *(undefined1 *)(param_1 + 0x129));
  return;
}


// Reference entry 114555d0; body size 7 bytes.
#line 1 "ENTRY_114555d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_114555d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x210);
}


// Reference entry 114555e0; body size 7 bytes.
#line 1 "ENTRY_114555e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_114555e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1bc));
}


// Reference entry 114555f0; body size 7 bytes.
#line 1 "ENTRY_114555f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_114555f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x310);
}


// Reference entry 11455600; body size 7 bytes.
#line 1 "ENTRY_11455600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11455600(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x178));
}


// Reference entry 11455670; body size 7 bytes.
#line 1 "ENTRY_11455670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11455670(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x184));
}


// Reference entry 11455680; body size 7 bytes.
#line 1 "ENTRY_11455680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11455680(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x188));
}


// Reference entry 11455690; body size 7 bytes.
#line 1 "ENTRY_11455690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11455690(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x174));
}


// Reference entry 114556a0; body size 24 bytes.
#line 1 "ENTRY_114556a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_114556a0(int param_1)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x180) < 6) ||
     (uVar1 = *(uint *)(param_1 + 0x194), *(uint *)(param_1 + 0x194) == 0)) {
    uVar1 = (uint)(*(uint *)(param_1 + 0x180));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 114556c0; body size 7 bytes.
#line 1 "ENTRY_114556c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_114556c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1b0));
}


// Reference entry 11455730; body size 7 bytes.
#line 1 "ENTRY_11455730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11455730(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 300));
}


// Reference entry 11455740; body size 7 bytes.
#line 1 "ENTRY_11455740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11455740(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x120));
}


// Reference entry 11455760; body size 5 bytes.
#line 1 "ENTRY_11455760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11455760(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xcb);
}


// Reference entry 11455790; body size 7 bytes.
#line 1 "ENTRY_11455790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11455790(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x114));
}


// Reference entry 114557a0; body size 31 bytes.
#line 1 "ENTRY_114557a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_114557a0(int param_1)

{
  uint in_EAX;
  
  if ((*(int *)(param_1 + 0x118) == 8) &&
     ((in_EAX = *(uint *)(param_1 + 0x11c), in_EAX == 3 || (in_EAX == 7)))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 114557d0; body size 31 bytes.
#line 1 "ENTRY_114557d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_114557d0(int param_1)

{
  uint in_EAX;
  
  if ((*(int *)(param_1 + 0x118) == 8) &&
     ((in_EAX = *(uint *)(param_1 + 0x11c), in_EAX == 2 || (in_EAX == 6)))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 11455800; body size 11 bytes.
#line 1 "ENTRY_11455800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455800(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0xc);
}


// Reference entry 11455810; body size 11 bytes.
#line 1 "ENTRY_11455810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455810(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x11);
}


// Reference entry 11455820; body size 24 bytes.
#line 1 "ENTRY_11455820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455820(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x11) && (*(int *)(param_1 + 0x11c) == 5)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455840; body size 11 bytes.
#line 1 "ENTRY_11455840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455840(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0xf);
}


// Reference entry 11455850; body size 24 bytes.
#line 1 "ENTRY_11455850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455850(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x11) && (*(int *)(param_1 + 0x11c) == 3)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455870; body size 11 bytes.
#line 1 "ENTRY_11455870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455870(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0xe);
}


// Reference entry 11455880; body size 24 bytes.
#line 1 "ENTRY_11455880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455880(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x14) && (*(int *)(param_1 + 0x11c) == 1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 114558a0; body size 11 bytes.
#line 1 "ENTRY_114558a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_114558a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x15);
}


// Reference entry 114558b0; body size 11 bytes.
#line 1 "ENTRY_114558b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_114558b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x17);
}


// Reference entry 114558c0; body size 11 bytes.
#line 1 "ENTRY_114558c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_114558c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x16);
}


// Reference entry 114558d0; body size 11 bytes.
#line 1 "ENTRY_114558d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_114558d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x18);
}


// Reference entry 114558e0; body size 11 bytes.
#line 1 "ENTRY_114558e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_114558e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x19);
}


// Reference entry 114558f0; body size 24 bytes.
#line 1 "ENTRY_114558f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_114558f0(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x1a) && (*(int *)(param_1 + 0x11c) == 1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455910; body size 24 bytes.
#line 1 "ENTRY_11455910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455910(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x1b) && (*(int *)(param_1 + 0x11c) == 1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455930; body size 24 bytes.
#line 1 "ENTRY_11455930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455930(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x14) && (*(int *)(param_1 + 0x11c) == 2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455950; body size 24 bytes.
#line 1 "ENTRY_11455950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455950(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x14) && (*(int *)(param_1 + 0x11c) == 3)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455970; body size 24 bytes.
#line 1 "ENTRY_11455970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455970(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x1c) && (*(int *)(param_1 + 0x11c) == 1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455990; body size 11 bytes.
#line 1 "ENTRY_11455990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455990(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x1d);
}


// Reference entry 114559a0; body size 11 bytes.
#line 1 "ENTRY_114559a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_114559a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x1e);
}


// Reference entry 114559b0; body size 11 bytes.
#line 1 "ENTRY_114559b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_114559b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x20);
}


// Reference entry 114559c0; body size 24 bytes.
#line 1 "ENTRY_114559c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_114559c0(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x21) && (*(int *)(param_1 + 0x11c) == 1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 114559e0; body size 24 bytes.
#line 1 "ENTRY_114559e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_114559e0(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x22) && (*(int *)(param_1 + 0x11c) == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455a00; body size 24 bytes.
#line 1 "ENTRY_11455a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455a00(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x22) && (*(int *)(param_1 + 0x11c) == 1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455a20; body size 24 bytes.
#line 1 "ENTRY_11455a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455a20(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x22) && (*(int *)(param_1 + 0x11c) == 2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455a40; body size 24 bytes.
#line 1 "ENTRY_11455a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455a40(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x23) && (*(int *)(param_1 + 0x11c) == 1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455a60; body size 24 bytes.
#line 1 "ENTRY_11455a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455a60(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x23) && (*(int *)(param_1 + 0x11c) == 2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455a80; body size 24 bytes.
#line 1 "ENTRY_11455a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455a80(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x22) && (*(int *)(param_1 + 0x11c) == 3)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455aa0; body size 24 bytes.
#line 1 "ENTRY_11455aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455aa0(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x1b) && (*(int *)(param_1 + 0x11c) == 2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455ac0; body size 24 bytes.
#line 1 "ENTRY_11455ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455ac0(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x21) && (*(int *)(param_1 + 0x11c) == 2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455ae0; body size 11 bytes.
#line 1 "ENTRY_11455ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455ae0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x24);
}


// Reference entry 11455af0; body size 11 bytes.
#line 1 "ENTRY_11455af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455af0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x25);
}


// Reference entry 11455b00; body size 24 bytes.
#line 1 "ENTRY_11455b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455b00(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x1c) && (*(int *)(param_1 + 0x11c) == 2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455b20; body size 24 bytes.
#line 1 "ENTRY_11455b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455b20(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x26) && (*(int *)(param_1 + 0x11c) == 1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455b40; body size 24 bytes.
#line 1 "ENTRY_11455b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455b40(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 8) && (*(int *)(param_1 + 0x11c) == 1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455b60; body size 24 bytes.
#line 1 "ENTRY_11455b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455b60(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x26) && (*(int *)(param_1 + 0x11c) == 2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455b80; body size 24 bytes.
#line 1 "ENTRY_11455b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455b80(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x26) && (*(int *)(param_1 + 0x11c) == 3)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455ba0; body size 24 bytes.
#line 1 "ENTRY_11455ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455ba0(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x22) && (*(int *)(param_1 + 0x11c) == 4)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455bc0; body size 24 bytes.
#line 1 "ENTRY_11455bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455bc0(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x1a) && (*(int *)(param_1 + 0x11c) == 2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455be0; body size 11 bytes.
#line 1 "ENTRY_11455be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455be0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x28);
}


// Reference entry 11455bf0; body size 11 bytes.
#line 1 "ENTRY_11455bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455bf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x29);
}


// Reference entry 11455c00; body size 24 bytes.
#line 1 "ENTRY_11455c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455c00(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x2a) && (*(int *)(param_1 + 0x11c) == 1)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455c20; body size 11 bytes.
#line 1 "ENTRY_11455c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455c20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x2b);
}


// Reference entry 11455c30; body size 24 bytes.
#line 1 "ENTRY_11455c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455c30(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x26) && (*(int *)(param_1 + 0x11c) == 4)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455c50; body size 11 bytes.
#line 1 "ENTRY_11455c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455c50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x2c);
}


// Reference entry 11455c60; body size 11 bytes.
#line 1 "ENTRY_11455c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455c60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x2e);
}


// Reference entry 11455c70; body size 14 bytes.
#line 1 "ENTRY_11455c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455c70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x3e9);
}


// Reference entry 11455c90; body size 24 bytes.
#line 1 "ENTRY_11455c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455c90(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x21) && (*(int *)(param_1 + 0x11c) == 3)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455cb0; body size 24 bytes.
#line 1 "ENTRY_11455cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11455cb0(int param_1)

{
  if ((*(int *)(param_1 + 0x118) == 0x2a) && (*(int *)(param_1 + 0x11c) == 2)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11455cd0; body size 14 bytes.
#line 1 "ENTRY_11455cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455cd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 1000);
}


// Reference entry 11455cf0; body size 11 bytes.
#line 1 "ENTRY_11455cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455cf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x31);
}


// Reference entry 11455d00; body size 11 bytes.
#line 1 "ENTRY_11455d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455d00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x33);
}


// Reference entry 11455d10; body size 11 bytes.
#line 1 "ENTRY_11455d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455d10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x34);
}


// Reference entry 11455d20; body size 11 bytes.
#line 1 "ENTRY_11455d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455d20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x35);
}


// Reference entry 11455d30; body size 11 bytes.
#line 1 "ENTRY_11455d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455d30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0x36);
}


// Reference entry 11455d40; body size 11 bytes.
#line 1 "ENTRY_11455d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455d40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 0xd);
}


// Reference entry 11455d50; body size 11 bytes.
#line 1 "ENTRY_11455d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11455d50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x118) == 9);
}


// Reference entry 11455d60; body size 11 bytes.
#line 1 "ENTRY_11455d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11455d60(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(DAT_122fab84 + 0x124);
}


// Reference entry 11455d70; body size 9 bytes.
#line 1 "ENTRY_11455d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11455d70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11455fc0; body size 3 bytes.
#line 1 "ENTRY_11455fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11455fc0(void)

{
  return;
}


// Reference entry 11456030; body size 12 bytes.
#line 1 "ENTRY_11456030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11456030(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 0xf & 0xffffff01);
}


// Reference entry 11456180; body size 5 bytes.
#line 1 "ENTRY_11456180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11456180(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0xc))();
  return;
}


// Reference entry 11456510; body size 8 bytes.
#line 1 "ENTRY_11456510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11456510(int param_1)

{
  *(undefined1 *)(param_1 + 0xd4) = 0;
  return;
}


// Reference entry 11456520; body size 11 bytes.
#line 1 "ENTRY_11456520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11456520(int param_1)

{
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) & 0xff7fffff;
  return;
}


// Reference entry 11456810; body size 7 bytes.
#line 1 "ENTRY_11456810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11456810(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xf4));
}


// Reference entry 11456820; body size 8 bytes.
#line 1 "ENTRY_11456820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_11456820(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2)(*(undefined2 *)(param_1 + 0xf8));
}


// Reference entry 11456840; body size 24 bytes.
#line 1 "ENTRY_11456840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_11456840(int param_1)

{
  if (((*(byte *)(param_1 + 0xd6) & 1) == 0) && (*(int *)(param_1 + 0xd0) != 3)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11456860; body size 7 bytes.
#line 1 "ENTRY_11456860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11456860(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xd4));
}


// Reference entry 11456870; body size 7 bytes.
#line 1 "ENTRY_11456870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11456870(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xd8));
}


// Reference entry 11456880; body size 7 bytes.
#line 1 "ENTRY_11456880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11456880(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xdc));
}


// Reference entry 11456890; body size 7 bytes.
#line 1 "ENTRY_11456890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11456890(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xe0));
}


// Reference entry 114568a0; body size 7 bytes.
#line 1 "ENTRY_114568a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_114568a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x104));
}


// Reference entry 114568b0; body size 6 bytes.
#line 1 "ENTRY_114568b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114568b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x122fab88);
}


// Reference entry 114568c0; body size 13 bytes.
#line 1 "ENTRY_114568c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 __fastcall FUN_114568c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8)(*(undefined8 *)(param_1 + 0xe8));
}


// Reference entry 11456f40; body size 3 bytes.
#line 1 "ENTRY_11456f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11456f40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 11456f70; body size 12 bytes.
#line 1 "ENTRY_11456f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11456f70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 4 & 0xffffff01);
}


// Reference entry 11456fd0; body size 12 bytes.
#line 1 "ENTRY_11456fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11456fd0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xd8) >> 0x13 & 0xffffff01);
}


// Reference entry 11456fe0; body size 12 bytes.
#line 1 "ENTRY_11456fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11456fe0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xd8) >> 0xe & 0xffffff01);
}


// Reference entry 11456ff0; body size 12 bytes.
#line 1 "ENTRY_11456ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11456ff0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 0x11 & 0xffffff01);
}


// Reference entry 11457000; body size 29 bytes.
#line 1 "ENTRY_11457000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_11457000(int param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xdc));
  uVar2 = (uint3)((uint3)(byte)(uVar1 >> 0x18));
  if (((uVar1 >> 0x10 & 1) != 0) && ((uVar1 >> 0x11 & 1) == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
}


// Reference entry 11457030; body size 12 bytes.
#line 1 "ENTRY_11457030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11457030(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xd8) >> 0xc & 0xffffff01);
}


// Reference entry 11457060; body size 9 bytes.
#line 1 "ENTRY_11457060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_11457060(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(*(byte *)(param_1 + 0xde) & 1);
}


// Reference entry 11457070; body size 12 bytes.
#line 1 "ENTRY_11457070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11457070(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 0xc & 0xffffff01);
}


// Reference entry 11457230; body size 7 bytes.
#line 1 "ENTRY_11457230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11457230(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xfc));
}


// Reference entry 11457260; body size 14 bytes.
#line 1 "ENTRY_11457260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11457260(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xd8) & 0xffffff0f);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)((char)uVar1 == '\x04')));
}


// Reference entry 11457280; body size 15 bytes.
#line 1 "ENTRY_11457280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11457280(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(((byte)*(undefined4 *)(param_1 + 0xd8) & 0xf) == 7);
}


// Reference entry 114572a0; body size 14 bytes.
#line 1 "ENTRY_114572a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_114572a0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0xd8) & 0xffffff0f);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)((char)uVar1 == '\x01')));
}


// Reference entry 11457300; body size 11 bytes.
#line 1 "ENTRY_11457300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_11457300(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)((*(byte *)(param_1 + 0xd8) & 0xf) == 0);
}


// Reference entry 11457310; body size 9 bytes.
#line 1 "ENTRY_11457310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_11457310(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(*(byte *)(param_1 + 0xe0) & 1);
}


// Reference entry 11457330; body size 10 bytes.
#line 1 "ENTRY_11457330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11457330(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 0x1f);
}


// Reference entry 11457340; body size 63 bytes.
#line 1 "ENTRY_11457340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11457340(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(&PTR_DAT_11c02818);
  do {
    iVar1 = (int)(_stricmp(*ppuVar2,param_1));
    if (iVar1 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
    }
    ppuVar2 = (undefined **)(ppuVar2 + 0xc);
  } while (ppuVar2 != (undefined **)&DAT_11c033e8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11457390; body size 88 bytes.
#line 1 "ENTRY_11457390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11457390(char *param_1,uint param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(&PTR_DAT_11c02818);
  do {
    if ((((uint)ppuVar2[5] & 0xf) == param_2) || (param_2 == 0xf)) {
      iVar1 = (int)(_stricmp(*ppuVar2,param_1));
      if (iVar1 == 0) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
      }
    }
    ppuVar2 = (undefined **)(ppuVar2 + 0xc);
  } while (ppuVar2 != (undefined **)&DAT_11c033e8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11457550; body size 55 bytes.
#line 1 "ENTRY_11457550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * FUN_11457550(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(&PTR_DAT_11c02818);
  do {
    iVar1 = (int)(_stricmp(ppuVar2[2],param_1));
    if (iVar1 == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)(ppuVar2[3]);
    }
    ppuVar2 = (undefined **)(ppuVar2 + 0xc);
  } while (ppuVar2 != (undefined **)&DAT_11c033e8);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)((undefined *)0x0);
}


// Reference entry 11457bf0; body size 28 bytes.
#line 1 "ENTRY_11457bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined * FUN_11457bf0(int param_1)

{
  if (param_1 < 0x3f) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)((&PTR_DAT_11c02818)[param_1 * 0xc]);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined *)(&DAT_1186d2ee);
}


// Reference entry 11458290; body size 12 bytes.
#line 1 "ENTRY_11458290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458290(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 0xd & 0xffffff01);
}


// Reference entry 114582a0; body size 31 bytes.
#line 1 "ENTRY_114582a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_114582a0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0xd0)) {
  case 2:
  case 3:
  case 0x12:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(2);
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  case 0x33:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(8);
  }
}


// Reference entry 11458330; body size 29 bytes.
#line 1 "ENTRY_11458330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11458330(undefined4 param_1)

{
  switch(param_1) {
  case 2:
  case 3:
  case 0x12:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(2);
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  case 0x33:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(8);
  }
}


// Reference entry 114583c0; body size 6 bytes.
#line 1 "ENTRY_114583c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114583c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3f);
}


// Reference entry 11458560; body size 8 bytes.
#line 1 "ENTRY_11458560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_11458560(int param_1)

{
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
  return;
}


// Reference entry 11458570; body size 9 bytes.
#line 1 "ENTRY_11458570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_11458570(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 11458580; body size 20 bytes.
#line 1 "ENTRY_11458580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_11458580(int param_1)

{
  if ((*(uint *)(param_1 + 0xe8) & 2) != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114585a0; body size 20 bytes.
#line 1 "ENTRY_114585a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_114585a0(int param_1)

{
  if ((*(uint *)(param_1 + 0xe8) & 1) != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114585c0; body size 113 bytes.
#line 1 "ENTRY_114585c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_114585c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0xd0) != 0x33) {
    *param_2 = (undefined4)(0);
    param_2[2] = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(4));
  *param_2 = (undefined4)(pvVar2);
  param_2[1] = (undefined4)(pvVar2);
  param_2[2] = (undefined4)((int)pvVar2 + 4);
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  *puVar1 = (undefined4)(8);
  param_2[1] = (undefined4)(puVar1 + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_2);
}


// Reference entry 11458650; body size 104 bytes.
#line 1 "ENTRY_11458650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_11458650(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if (param_2 != 0x33) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(4));
  *param_1 = (undefined4)(pvVar2);
  param_1[1] = (undefined4)(pvVar2);
  param_1[2] = (undefined4)((int)pvVar2 + 4);
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *puVar1 = (undefined4)(8);
  param_1[1] = (undefined4)(puVar1 + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 114586e0; body size 10 bytes.
#line 1 "ENTRY_114586e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_114586e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xd8) >> 0x1f);
}


// Reference entry 11458710; body size 9 bytes.
#line 1 "ENTRY_11458710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_11458710(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(*(byte *)(param_1 + 0xdf) & 1);
}


// Reference entry 11458750; body size 3 bytes.
#line 1 "ENTRY_11458750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11458750(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11458770; body size 12 bytes.
#line 1 "ENTRY_11458770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458770(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xd8) >> 0x19 & 0xffffff01);
}


// Reference entry 114587e0; body size 12 bytes.
#line 1 "ENTRY_114587e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_114587e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xd4) >> 0x14 & 0xffffff01);
}


// Reference entry 114587f0; body size 12 bytes.
#line 1 "ENTRY_114587f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_114587f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xd8) >> 10 & 0xffffff01);
}


// Reference entry 11458810; body size 12 bytes.
#line 1 "ENTRY_11458810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458810(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 6 & 0xffffff01);
}


// Reference entry 11458850; body size 12 bytes.
#line 1 "ENTRY_11458850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458850(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 3 & 0xffffff01);
}


// Reference entry 114588b0; body size 12 bytes.
#line 1 "ENTRY_114588b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_114588b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 0x1e & 0xffffff01);
}


// Reference entry 114588e0; body size 12 bytes.
#line 1 "ENTRY_114588e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_114588e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 0x1a & 0xffffff01);
}


// Reference entry 11458920; body size 14 bytes.
#line 1 "ENTRY_11458920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458920(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((uint3)(*(uint *)(param_1 + 0xdc) >> 0x1b)) << 8 | (uint)(~(byte)(*(uint *)(param_1 + 0xdc) >> 0x13))) & 0xffffff01);
}


// Reference entry 11458960; body size 12 bytes.
#line 1 "ENTRY_11458960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458960(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xd8) >> 0x1e & 0xffffff01);
}


// Reference entry 114589a0; body size 22 bytes.
#line 1 "ENTRY_114589a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_114589a0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xd0));
  uVar2 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0x1d) && (iVar1 != 0x23)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 114589c0; body size 9 bytes.
#line 1 "ENTRY_114589c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_114589c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte)(*(byte *)(param_1 + 0xd6) & 1);
}


// Reference entry 114589d0; body size 11 bytes.
#line 1 "ENTRY_114589d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_114589d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0xd0) == 0x2f);
}


// Reference entry 11458a10; body size 12 bytes.
#line 1 "ENTRY_11458a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458a10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 0xc & 0xffffff01);
}


// Reference entry 11458a80; body size 12 bytes.
#line 1 "ENTRY_11458a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458a80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 0x1d & 0xffffff01);
}


// Reference entry 11458aa0; body size 12 bytes.
#line 1 "ENTRY_11458aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458aa0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xdc) >> 0x16 & 0xffffff01);
}


// Reference entry 11458ab0; body size 12 bytes.
#line 1 "ENTRY_11458ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458ab0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xd8) >> 8 & 0xffffff01);
}


// Reference entry 11458ac0; body size 12 bytes.
#line 1 "ENTRY_11458ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11458ac0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(uint *)(param_1 + 0xd8) >> 9 & 0xffffff01);
}


// Reference entry 11458b00; body size 32 bytes.
#line 1 "ENTRY_11458b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_11458b00(undefined4 param_1)

{
  switch(param_1) {
  case 0x16:
  case 0x17:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x2c:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SYMFONISK");
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Sonos");
  }
}


// Reference entry 11458ea0; body size 9 bytes.
#line 1 "ENTRY_11458ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11458ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_ISettingsFile);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11458fc0; body size 66 bytes.
#line 1 "ENTRY_11458fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_11458fc0(undefined1 *param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[4] = (undefined4)(param_4);
  param_1[5] = (undefined4)(param_5);
  *(undefined1 *)(param_1 + 6) = param_6;
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_SettingsFileObfuscateCB);
  param_1[1] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  param_1[2] = (undefined4)(param_3);
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    *param_2 = (undefined1)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11459180; body size 9 bytes.
#line 1 "ENTRY_11459180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_11459180(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_sonos_StringProvider);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 11459190; body size 3 bytes.
#line 1 "ENTRY_11459190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11459190(void)

{
  return;
}


// Reference entry 114591d0; body size 3 bytes.
#line 1 "ENTRY_114591d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114591d0(void)

{
  return;
}


// Reference entry 11459240; body size 3 bytes.
#line 1 "ENTRY_11459240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11459240(void)

{
  return;
}


// Reference entry 11459490; body size 193 bytes.
#line 1 "ENTRY_11459490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_11459490(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  FILE *_File;
  int iVar4;
  uint uVar5;
  
  _File = (FILE *)(*(FILE **)(param_1 + 0x18));
  if (_File != (FILE *)0x0) {
    if ((*(char *)(param_1 + 0x10) == '\0') && (uVar5 = 0, *(int *)(param_1 + 0xc) != 0)) {
      iVar4 = (int)(0);
      do {
        puVar3 = (undefined4 *)((undefined4 *)(*(int *)(param_1 + 8) + iVar4));
        if ((*(char *)(puVar3 + 2) == '\0') && (puVar3[1] != 0)) {
          if ((*(char *)(param_1 + 0x1c) == '\0') &&
             (cVar1 = thunk_FUN_1145a760(*puVar3,puVar3[1]), cVar1 != '\0')) {
            uVar2 = (undefined1)(0);
          }
          else {
            uVar2 = (undefined1)(1);
          }
          *(undefined1 *)(param_1 + 0x1c) = uVar2;
        }
        uVar5 = (uint)(uVar5 + 1);
        iVar4 = (int)(iVar4 + 0xc);
      } while (uVar5 < *(uint *)(param_1 + 0xc));
      _File = (FILE *)(*(FILE **)(param_1 + 0x18));
    }
    iVar4 = (int)(fclose(_File));
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (iVar4 == 0) {
      if ((*(char *)(param_1 + 0x1c) == '\0') &&
         (iVar4 = thunk_FUN_1145d330(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4)),
         iVar4 == 0)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
  }
  if (*(FILE **)(param_1 + 0x18) != (FILE *)0x0) {
    fclose(*(FILE **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar5 = (uint)(thunk_FUN_1145d640(*(undefined4 *)(param_1 + 0x14)));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar5 & 0xffffff00);
}


// Reference entry 1145ab30; body size 79 bytes.
#line 1 "ENTRY_1145ab30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_1145ab30(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_2 + 1) < *(byte *)(param_1 + 9)) ||
     ((*(byte *)(param_1 + 9) == *(byte *)(param_2 + 1) &&
      ((*(byte *)(param_2 + 2) < *(byte *)(param_1 + 10) ||
       ((*(byte *)(param_1 + 10) == *(byte *)(param_2 + 2) &&
        ((*(uint *)(param_2 + 4) < *(uint *)(param_1 + 0xc) ||
         (*(uint *)(param_1 + 0xc) == *(uint *)(param_2 + 4))))))))))) {
    if (*(byte *)(param_1 + 1) < *(byte *)(param_2 + 9)) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
    if (*(byte *)(param_2 + 9) == *(byte *)(param_1 + 1)) {
      if (*(byte *)(param_1 + 2) < *(byte *)(param_2 + 10)) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
      if (*(byte *)(param_2 + 10) == *(byte *)(param_1 + 2)) {
        uVar1 = (uint)(*(uint *)(param_2 + 0xc));
        uVar2 = (uint)(*(uint *)(param_1 + 4));
        if (uVar2 <= uVar1 && uVar1 != uVar2) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
        }
        if (uVar1 == uVar2) {
          return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
        }
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1145ac60; body size 17 bytes.
#line 1 "ENTRY_1145ac60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1145ac60(undefined4 param_1)

{
  thunk_FUN_1145c930(param_1,0);
  return;
}


// Reference entry 1145aca0; body size 17 bytes.
#line 1 "ENTRY_1145aca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1145aca0(undefined4 param_1)

{
  thunk_FUN_1145c930(param_1,0);
  return;
}


// Reference entry 1145ace0; body size 15 bytes.
#line 1 "ENTRY_1145ace0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145ace0(undefined4 param_1)

{
  thunk_FUN_1145c930(param_1,0);
  return;
}


// Reference entry 1145ad00; body size 82 bytes.
#line 1 "ENTRY_1145ad00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145ad00(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2 + *param_3);
  *param_1 = (int)(iVar2);
  iVar1 = (int)(param_2[1] + param_3[1]);
  param_1[1] = (int)(iVar1);
  if (999999 < iVar1) {
    *param_1 = (int)(iVar2 + 1);
    param_1[1] = (int)(iVar1 + -1000000);
    return;
  }
  if (iVar1 < -999999) {
    *param_1 = (int)(iVar2 + -1);
    param_1[1] = (int)(iVar1 + 1000000);
  }
  return;
}


// Reference entry 1145ae70; body size 72 bytes.
#line 1 "ENTRY_1145ae70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

longlong FUN_1145ae70(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)(*param_1);
  iVar2 = (int)(*param_2);
  if ((iVar1 <= iVar2) && ((iVar1 != iVar2 || (param_1[1] <= param_2[1])))) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ longlong)(0);
  }
  uVar3 = (uint)(param_1[1] - param_2[1]);
  uVar4 = (uint)((uint)((longlong)iVar2 * 1000000));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ longlong)((longlong)iVar1 * 1000000 +
         ((unsigned long long)((((int)uVar3 >> 0x1f) - (int)((ulonglong)((longlong)iVar2 * 1000000) >> 0x20)) -
                  (uint)(uVar3 < uVar4)) << 32 | (unsigned long long)(uVar3 - uVar4)));
}


// Reference entry 1145b020; body size 57 bytes.
#line 1 "ENTRY_1145b020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145b020(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if ((iVar2 != 0) || (param_2[1] != 0)) {
    iVar1 = (int)(*param_1);
    if ((iVar1 != 0) || (param_1[1] != 0)) {
      if (iVar1 <= iVar2) {
        if (iVar1 != iVar2) {
          return;
        }
        if (param_1[1] <= param_2[1]) {
          return;
        }
      }
      iVar2 = (int)(*param_2);
    }
    param_1[1] = (int)(param_2[1]);
    *param_1 = (int)(iVar2);
  }
  return;
}


// Reference entry 1145b150; body size 31 bytes.
#line 1 "ENTRY_1145b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1145b150(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] / 1000 + *param_1 * 1000);
}


// Reference entry 1145c5e0; body size 19 bytes.
#line 1 "ENTRY_1145c5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145c5e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1145c600(param_1,param_2,10);
  return;
}


// Reference entry 1145c900; body size 31 bytes.
#line 1 "ENTRY_1145c900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145c900(undefined4 *param_1,void *param_2)

{
  if ((void *)*param_1 != (undefined4 *)(param_2)) {
    free((void *)*param_1);
  }
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 1145dae0; body size 61 bytes.
#line 1 "ENTRY_1145dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1145dae0(undefined4 *param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(malloc(param_2));
  *param_1 = (undefined4)(pvVar1);
  if (pvVar1 != (void *)0x0) {
    param_1[1] = (undefined4)(param_2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1145db30; body size 53 bytes.
#line 1 "ENTRY_1145db30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145db30(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
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


// Reference entry 1145de50; body size 13 bytes.
#line 1 "ENTRY_1145de50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1145de50(int param_1)

{
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1145dfe0; body size 56 bytes.
#line 1 "ENTRY_1145dfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145dfe0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = (char)(*param_1);
  while (cVar2 != '\0') {
    if (cVar2 == '-') {
      *param_1 = (char)('+');
    }
    else if (cVar2 == '.') {
      *param_1 = (char)('=');
    }
    else if (cVar2 == '_') {
      *param_1 = (char)('/');
    }
    pcVar1 = (char *)(param_1 + 1);
    param_1 = (char *)(param_1 + 1);
    cVar2 = (char)(*pcVar1);
  }
  return;
}


// Reference entry 1145e250; body size 8 bytes.
#line 1 "ENTRY_1145e250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_1145e250(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 9));
}


// Reference entry 1145eb50; body size 8 bytes.
#line 1 "ENTRY_1145eb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_1145eb50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 9));
}


// Reference entry 1145f340; body size 18 bytes.
#line 1 "ENTRY_1145f340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145f340(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0x101;
  return;
}


// Reference entry 1145f840; body size 18 bytes.
#line 1 "ENTRY_1145f840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145f840(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0x101;
  return;
}


// Reference entry 1145fbe0; body size 304 bytes.
#line 1 "ENTRY_1145fbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145fbe0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  char cStack_808;
  char acStack_807 [1027];
  char acStack_404 [1024];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&cStack_808);
  uVar1 = (uint)(thunk_FUN_1145c720(acStack_404,0x400,"%s/%s",param_1,param_2));
  if (0x3ff < uVar1) {
    thunk_FUN_1148ac28();
    return;
  }
  if (acStack_404[0] != '\0') {
    uVar1 = (uint)(thunk_FUN_1145c250(&cStack_808,acStack_404,0x401));
    if (uVar1 < 0x401) {
      cVar5 = (char)(cStack_808);
      if (cStack_808 == '/') {
        cVar5 = (char)(acStack_807[0]);
      }
      if (cVar5 != '\0') {
        pcVar2 = (char *)(&cStack_808);
        if (cStack_808 == '/') {
          pcVar2 = (char *)(acStack_807);
        }
        do {
          pcVar2 = (char *)(strchr(pcVar2,0x2f));
          if (pcVar2 != (char *)0x0) {
            *pcVar2 = (char)('\0');
          }
          iVar3 = (int)(thunk_FUN_1145cf60(&cStack_808,0x1ff));
          if (iVar3 == -1) {
            piVar4 = (int *)(_errno());
            if (*piVar4 != 0x11) goto LAB_1145fce0;
          }
          if (pcVar2 == (char *)0x0) break;
          *pcVar2 = (char)('/');
          pcVar2 = (char *)(pcVar2 + 1);
        } while (*pcVar2 != '\0');
      }
      thunk_FUN_1148ac28();
      return;
    }
  }
LAB_1145fce0:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1145fd60; body size 15 bytes.
#line 1 "ENTRY_1145fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1145fd60(undefined4 param_1)

{
  func_0x100867cd(param_1,1);
  return;
}


// Reference entry 11460030; body size 3 bytes.
#line 1 "ENTRY_11460030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11460030(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11460050; body size 115 bytes.
#line 1 "ENTRY_11460050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11460050(int param_1,int param_2,undefined1 *param_3,uint param_4,undefined2 param_5)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(false);
  }
  if (((param_2 != 0) && (param_3 != (undefined1 *)0x0)) && (5 < param_4)) {
    uVar1 = (uint)(thunk_FUN_1145c720(param_1,param_2,"RINCON_%02X%02X%02X%02X%02X%02X%05u",*param_3,
                               param_3[1],param_3[2],param_3[3],param_3[4],param_3[5],param_5));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(uVar1 <= param_2 - 1U);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(false);
}


// Reference entry 11460330; body size 5 bytes.
#line 1 "ENTRY_11460330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11460330(undefined4 *param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_1);
  UNLOCK();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11460340; body size 56 bytes.
#line 1 "ENTRY_11460340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11460340(int param_1)

{
  char cVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = (uint)(thunk_FUN_114605e0(param_1));
    if ((uVar2 == 0) || ((uVar2 & 0x2000000) != 0)) {
      cVar1 = (char)(thunk_FUN_11460600(param_1,uVar2,0x1000000));
      if (cVar1 != '\0') {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11460390; body size 65 bytes.
#line 1 "ENTRY_11460390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11460390(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 < 0xffffff)) {
    uVar2 = (uint)(thunk_FUN_114605e0(param_1));
    if ((uVar2 == 0) || ((uVar2 & 0x2000000) != 0)) {
      cVar1 = (char)(thunk_FUN_11460600(param_1,uVar2,param_2));
      if (cVar1 != '\0') {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114603f0; body size 34 bytes.
#line 1 "ENTRY_114603f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114603f0(int param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = (char)(thunk_FUN_11460600(param_1,0,0x2000000));
    if (cVar1 != '\0') {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114604b0; body size 3 bytes.
#line 1 "ENTRY_114604b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114604b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114604c0; body size 3 bytes.
#line 1 "ENTRY_114604c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114604c0(void)

{
  return;
}


// Reference entry 11460530; body size 24 bytes.
#line 1 "ENTRY_11460530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11460530(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && (((uint)param_1 & 3) == 0)) {
    *param_1 = (undefined4)(0x4ffffff);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11460580; body size 40 bytes.
#line 1 "ENTRY_11460580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11460580(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)(thunk_FUN_114605e0(param_1));
    if ((uVar1 & 0xf000000) == 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
    }
    if ((uVar1 & 0x4000000) != 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0xffffff);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0);
}


// Reference entry 114605c0; body size 17 bytes.
#line 1 "ENTRY_114605c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_114605c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = (int)(*param_1);
  if (param_3 == iVar1) {
    *param_1 = (int)(param_2);
    iVar1 = (int)(param_3);
  }
  UNLOCK();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 114605f0; body size 13 bytes.
#line 1 "ENTRY_114605f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_114605f0(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = (int)(*param_1);
  if (iVar1 == 0) {
    *param_1 = (int)(0);
    iVar1 = (int)(0);
  }
  UNLOCK();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11460620; body size 24 bytes.
#line 1 "ENTRY_11460620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11460620(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = (int)(*param_1);
  if (param_2 == iVar1) {
    *param_1 = (int)(param_3);
    iVar1 = (int)(param_2);
  }
  UNLOCK();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(iVar1 == param_2);
}


// Reference entry 11460640; body size 13 bytes.
#line 1 "ENTRY_11460640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11460640(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = (int)(*param_1);
  *param_1 = (int)(*param_1 + param_2);
  UNLOCK();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11460de0; body size 6 bytes.
#line 1 "ENTRY_11460de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11460de0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x298d);
}


// Reference entry 114620f0; body size 27 bytes.
#line 1 "ENTRY_114620f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114620f0(undefined4 param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  
  if (param_2 == 0) {
    return;
  }
  switch(param_1) {
  case 1:
    iVar3 = (int)(2);
    cVar4 = (char)(-1);
    break;
  case 2:
    iVar3 = (int)(4);
    cVar4 = (char)('U');
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    goto LAB_11462154;
  case 4:
    iVar3 = (int)(0x10);
    cVar4 = (char)('\x11');
    break;
  case 8:
    iVar3 = (int)(0x100);
    cVar4 = (char)('\x01');
    break;
  default:
    return;
  }
  cVar1 = (char)('\0');
  pcVar2 = (char *)((char *)(param_2 + 2));
  do {
    pcVar2[-2] = (char)(cVar1);
    pcVar2[-1] = (char)(cVar1);
    *pcVar2 = (char)(cVar1);
    cVar1 = (char)(cVar1 + cVar4);
    iVar3 = (int)(iVar3 + -1);
    pcVar2 = (char *)(pcVar2 + 3);
  } while (iVar3 != 0);
LAB_11462154:
  return;
}


// Reference entry 11463a60; body size 57 bytes.
#line 1 "ENTRY_11463a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11463a60(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (int)(func_0x100996c5(param_1 + 0x210,param_2));
    if (iVar1 != 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x210);
    }
    thunk_FUN_1146cad0(param_1,"Ignoring invalid time value");
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 11463fd0; body size 65 bytes.
#line 1 "ENTRY_11463fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11463fd0(int param_1,int param_2,int param_3,uint param_4)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        *(uint *)(param_2 + 0xf4) = *(uint *)(param_2 + 0xf4) & ~param_4;
        return;
      }
                    
      thunk_FUN_1146c180(param_1,"Unknown freer parameter in png_data_freer");
    }
    *(uint *)(param_2 + 0xf4) = *(uint *)(param_2 + 0xf4) | param_4;
  }
  return;
}


// Reference entry 11464ad0; body size 6 bytes.
#line 1 "ENTRY_11464ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_11464ad0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("\nlibpng version 1.6.37\nCopyright (c) 2018-2019 Cosmin Truta\nCopyright (c) 1998-2002,2004,2006-2018 Glenn Randers-Pehrson\nCopyright (c) 1996-1997 Andreas Dilger\nCopyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.\n");
}


// Reference entry 11464ae0; body size 6 bytes.
#line 1 "ENTRY_11464ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_11464ae0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("1.6.37");
}


// Reference entry 11464af0; body size 6 bytes.
#line 1 "ENTRY_11464af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_11464af0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)(" libpng version 1.6.37 - April 14, 2019\n");
}


// Reference entry 11464b00; body size 13 bytes.
#line 1 "ENTRY_11464b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11464b00(int param_1)

{
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x60));
}


// Reference entry 11464b10; body size 6 bytes.
#line 1 "ENTRY_11464b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_11464b10(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("1.6.37");
}


// Reference entry 11465910; body size 73 bytes.
#line 1 "ENTRY_11465910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11465910(int *param_1,uint param_2)

{
  void *_Memory;
  
  _Memory = (void *)((void *)*param_1);
  if (_Memory != (void *)0x0) {
    if (param_2 < 0x118) {
      *param_1 = (int)(0);
      free(_Memory);
      _Memory = (void *)((void *)thunk_FUN_1147b4b0(0,0x118));
      if (_Memory == (void *)0x0) {
        return;
      }
      *param_1 = (int)((int)_Memory);
    }
    memset(_Memory,0,0x118);
  }
  return;
}


// Reference entry 11465970; body size 16 bytes.
#line 1 "ENTRY_11465970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11465970(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
  }
  return;
}


// Reference entry 11465a70; body size 56 bytes.
#line 1 "ENTRY_11465a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11465a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_4;
  
  iVar1 = (int)(thunk_FUN_11465990(&uStack_4,param_2,param_3,param_4));
  if (iVar1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uStack_4);
  }
  thunk_FUN_1146cad0(param_1,"fixed point overflow ignored");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11465d60; body size 83 bytes.
#line 1 "ENTRY_11465d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11465d60(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  if (((param_1 != 0) && (param_2 < 0xc)) && (bVar2 = (byte)param_2, (param_2 & 1) == 0)) {
    uVar1 = (uint)(*(uint *)(param_1 + 0x20c));
    uVar3 = (uint)(3 << (bVar2 & 0x1f));
    *(uint *)(param_1 + 0x20c) = (param_3 != 0) + 2 << (bVar2 & 0x1f) | ~uVar3 & uVar1;
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((int)(uVar1 & uVar3) >> (bVar2 & 0x1f));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(1);
}


// Reference entry 11465dd0; body size 42 bytes.
#line 1 "ENTRY_11465dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11465dd0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)(0);
    if (-1 < (int)param_2) {
      uVar1 = (uint)(param_2);
    }
    if (8 < uVar1) {
                    
      thunk_FUN_1146c180(param_1,"Too many bytes for PNG signature");
    }
    *(char *)(param_1 + 0x155) = (char)uVar1;
  }
  return;
}


// Reference entry 11465f30; body size 292 bytes.
#line 1 "ENTRY_11465f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11465f30(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iStack_88;
  undefined1 auStack_84 [128];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&iStack_88);
  iStack_88 = (int)(param_2);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x20000;
  }
  else {
    pcVar5 = (char *)((char *)((int)&PTR_11964a5c + 3));
    iVar6 = (int)(0);
    do {
      cVar1 = (char)(pcVar5[param_2 + -0x11964a5f]);
      pcVar5 = (char *)(pcVar5 + 1);
      cVar2 = (char)(*pcVar5);
      if (cVar1 != cVar2) {
        *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x20000;
      }
      iVar3 = (int)(iVar6 + 1);
      if (cVar1 != '.') {
        iVar3 = (int)(iVar6);
      }
    } while (((iVar3 < 2) && (cVar1 != '\0')) && (iVar6 = (int)(iVar3, cVar2 != '\0')));
  }
  if ((*(uint *)(param_1 + 0x78) & 0x20000) == 0) {
    thunk_FUN_1148ac28();
    return;
  }
  uVar4 = (undefined4)(thunk_FUN_1146c960(auStack_84,0x80,0,"Application built with libpng-"));
  uVar4 = (undefined4)(thunk_FUN_1146c960(auStack_84,0x80,uVar4,param_2));
  uVar4 = (undefined4)(thunk_FUN_1146c960(auStack_84,0x80,uVar4," but running with "));
  thunk_FUN_1146c960(auStack_84,0x80,uVar4,"1.6.37");
  thunk_FUN_1146cad0(param_1,auStack_84);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11466fa0; body size 84 bytes.
#line 1 "ENTRY_11466fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11466fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11463d10(param_1,param_2,param_3,param_4,param_5,param_6,param_7));
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) | 0x300000;
    *(undefined4 *)(iVar1 + 0x74) = 0x8000;
    *(undefined4 *)(iVar1 + 0x2a8) = 0x2000;
    thunk_FUN_11480a30(iVar1,0,0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 1146ae50; body size 179 bytes.
#line 1 "ENTRY_1146ae50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1146ae50(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x78) & 0x40) == 0) {
      iVar4 = (int)(thunk_FUN_11474680(param_1));
      if ((*(byte *)(param_1 + 0x78) & 0x40) == 0) {
        thunk_FUN_11488e30(param_1);
      }
      else {
        thunk_FUN_1146bd60(param_1,"png_start_read_image/png_read_update_info: duplicate call");
      }
    }
    else {
      if ((*(char *)(param_1 + 0x14c) != '\0') && ((*(byte *)(param_1 + 0x7c) & 2) == 0)) {
        thunk_FUN_1146cad0(param_1,
                           "Interlace handling should be turned on when using png_read_image");
        *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x104);
      }
      iVar4 = (int)(thunk_FUN_11474680(param_1));
    }
    iVar1 = (int)(*(int *)(param_1 + 0x104));
    iVar2 = (int)(iVar1);
    puVar3 = (undefined4 *)(param_2);
    if (0 < iVar4) {
      do {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          thunk_FUN_1146b640(param_1,*puVar3,0);
          puVar3 = (undefined4 *)(puVar3 + 1);
        }
        iVar4 = (int)(iVar4 + -1);
        iVar2 = (int)(iVar1);
        puVar3 = (undefined4 *)(param_2);
      } while (iVar4 != 0);
    }
  }
  return;
}


// Reference entry 1146bb80; body size 128 bytes.
#line 1 "ENTRY_1146bb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1146bb80(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      if (param_3 != (undefined4 *)0x0) {
        for (; param_4 != 0; param_4 = param_4 + -1) {
          thunk_FUN_1146b640(param_1,0,*param_3);
          param_3 = (undefined4 *)(param_3 + 1);
        }
      }
    }
    else if (param_4 != 0) {
      if (param_3 != (undefined4 *)0x0) {
        do {
          uVar1 = (undefined4)(*param_3);
          param_3 = (undefined4 *)(param_3 + 1);
          thunk_FUN_1146b640(param_1,*param_2,uVar1);
          param_4 = (int)(param_4 + -1);
          param_2 = (undefined4 *)(param_2 + 1);
        } while (param_4 != 0);
        return;
      }
      do {
        thunk_FUN_1146b640(param_1,*param_2,0);
        param_2 = (undefined4 *)(param_2 + 1);
        param_4 = (int)(param_4 + -1);
      } while (param_4 != 0);
      return;
    }
  }
  return;
}


// Reference entry 1146bc70; body size 19 bytes.
#line 1 "ENTRY_1146bc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1146bc70(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1c0) = param_2;
  }
  return;
}


// Reference entry 1146bc90; body size 38 bytes.
#line 1 "ENTRY_1146bc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1146bc90(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x78) & 0x40) == 0) {
      thunk_FUN_11471170(param_1);
      uVar2 = (uint)(*(uint *)(param_1 + 0x104));
      uVar5 = (uint)(*(uint *)(param_1 + 0x7c));
      if (*(char *)(param_1 + 0x14c) == '\0') {
        *(uint *)(param_1 + 0x108) = uVar2;
        uVar2 = (uint)(*(uint *)(param_1 + 0x100));
      }
      else {
        if ((uVar5 & 2) == 0) {
          uVar2 = (uint)(uVar2 + 7 >> 3);
        }
        *(uint *)(param_1 + 0x108) = uVar2;
        uVar2 = (uint)((*(int *)(param_1 + 0x100) + -1 +
                ((uint)(byte)(&DAT_11c08394)[*(byte *)(param_1 + 0x14d)] -
                (uint)(byte)(&DAT_11c0838c)[*(byte *)(param_1 + 0x14d)])) /
                (uint)(byte)(&DAT_11c08394)[*(byte *)(param_1 + 0x14d)]);
      }
      *(uint *)(param_1 + 0x114) = uVar2;
      uVar2 = (uint)((uint)*(byte *)(param_1 + 0x152));
      if (((uVar5 & 4) != 0) && (*(byte *)(param_1 + 0x150) < 8)) {
        uVar2 = (uint)(8);
      }
      uVar6 = (uint)(uVar2);
      if ((uVar5 & 0x1000) != 0) {
        cVar1 = (char)(*(char *)(param_1 + 0x14f));
        if (cVar1 == '\x03') {
          uVar6 = (uint)((uint)(*(short *)(param_1 + 0x148) != 0) * 8 + 0x18);
        }
        else if (cVar1 == '\0') {
          if (uVar2 < 8) {
            uVar2 = (uint)(8);
          }
          uVar6 = (uint)(uVar2 * 2);
          if (*(short *)(param_1 + 0x148) == 0) {
            uVar6 = (uint)(uVar2);
          }
        }
        else if ((cVar1 == '\x02') && (*(short *)(param_1 + 0x148) != 0)) {
          uVar6 = (uint)((uVar2 * 4) / 3);
        }
      }
      uVar2 = (uint)(uVar6);
      if ((uVar5 & 0x200) != 0) {
        if ((uVar5 & 0x1000) == 0) {
          uVar5 = (uint)(uVar5 & 0xfffffdff);
          *(uint *)(param_1 + 0x7c) = uVar5;
        }
        else {
          uVar2 = (uint)(uVar6 * 2);
          if (0xf < *(byte *)(param_1 + 0x150)) {
            uVar2 = (uint)(uVar6);
          }
        }
      }
      if ((uVar5 & 0x8000) != 0) {
        cVar1 = (char)(*(char *)(param_1 + 0x14f));
        if (cVar1 == '\0') {
          uVar2 = (uint)((-(uint)(8 < uVar2) & 0x10) + 0x10);
        }
        else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
          uVar2 = (uint)((-(uint)(0x20 < uVar2) & 0x20) + 0x20);
        }
      }
      if ((uVar5 & 0x4000) != 0) {
        if ((((*(short *)(param_1 + 0x148) == 0) || ((uVar5 & 0x1000) == 0)) &&
            ((uVar5 & 0x8000) == 0)) && (cVar1 = *(char *)(param_1 + 0x14f), cVar1 != '\x04')) {
          if (uVar2 < 9) {
            uVar2 = (uint)((uint)(cVar1 == '\x06') * 8 + 0x18);
          }
          else {
            uVar2 = (uint)(0x30);
            if (cVar1 == '\x06') {
              uVar2 = (uint)(0x40);
            }
          }
        }
        else {
          uVar2 = (uint)((-(uint)(0x10 < uVar2) & 0x20) + 0x20);
        }
      }
      if (((uVar5 & 0x100000) != 0) &&
         (uVar5 = (uint)*(byte *)(param_1 + 0x71) * (uint)*(byte *)(param_1 + 0x70),
         uVar2 <= uVar5 && uVar5 - uVar2 != 0)) {
        uVar2 = (uint)(uVar5);
      }
      *(char *)(param_1 + 0x156) = (char)uVar2;
      uVar5 = (uint)(*(int *)(param_1 + 0x100) + 7U & 0xfffffff8);
      *(undefined1 *)(param_1 + 0x157) = 0;
      if (uVar2 < 8) {
        uVar5 = (uint)(uVar5 * uVar2 >> 3);
      }
      else {
        uVar5 = (uint)((uVar2 >> 3) * uVar5);
      }
      uVar2 = (uint)(uVar5 + 0x31 + (uVar2 + 7 >> 3));
      if (*(uint *)(param_1 + 0x29c) < uVar2) {
        thunk_FUN_1147b2f0(param_1,*(undefined4 *)(param_1 + 0x264));
        thunk_FUN_1147b2f0(param_1,*(undefined4 *)(param_1 + 0x2b0));
        if (*(char *)(param_1 + 0x14c) == '\0') {
          uVar3 = (undefined4)(thunk_FUN_1147b370(param_1,uVar2));
        }
        else {
          uVar3 = (undefined4)(thunk_FUN_1147b1c0());
        }
        *(undefined4 *)(param_1 + 0x264) = uVar3;
        iVar4 = (int)(thunk_FUN_1147b370(param_1,uVar2));
        *(int *)(param_1 + 0x2b0) = iVar4;
        *(uint *)(param_1 + 0x29c) = uVar2;
        *(uint *)(param_1 + 0x124) = (*(int *)(param_1 + 0x264) + 0x20U & 0xfffffff0) - 1;
        *(uint *)(param_1 + 0x120) = (iVar4 + 0x20U & 0xfffffff0) - 1;
      }
      if (*(int *)(param_1 + 0x110) == -1) {
                    
        thunk_FUN_1146c180(param_1,"Row has too many bytes to allocate in memory");
      }
      memset(*(void **)(param_1 + 0x120),0,*(int *)(param_1 + 0x110) + 1);
      iVar4 = (int)(*(int *)(param_1 + 0x2a0));
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x2a4) = 0;
        *(undefined4 *)(param_1 + 0x2a0) = 0;
        thunk_FUN_1147b2f0(param_1,iVar4);
      }
      iVar4 = (int)(FUN_11487dc0(param_1,0x49444154));
      if (iVar4 != 0) {
                    
        thunk_FUN_1146c180(param_1,*(undefined4 *)(param_1 + 0x9c));
      }
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x40;
      return;
    }
    thunk_FUN_1146bd60(param_1,"png_start_read_image/png_read_update_info: duplicate call");
  }
  return;
}


// Reference entry 1146c780; body size 129 bytes.
#line 1 "ENTRY_1146c780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1146c780(int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  
  piVar2 = (int *)(*(int **)(param_1 + 0x54));
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)(piVar2 + 8);
    uVar5 = (uint)(0);
    if (piVar1 != (int *)0x0) {
      if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
        pcVar4 = (char *)(param_2);
        do {
          if (0x3e < uVar5) break;
          uVar5 = (uint)(uVar5 + 1);
          pcVar4[(int)piVar1 - (int)param_2] = (char)(*pcVar4);
          pcVar4 = (char *)(pcVar4 + 1);
        } while (*pcVar4 != '\0');
      }
      *(undefined1 *)((int)piVar1 + uVar5) = 0;
    }
    piVar2[7] = (int)(piVar2[7] | 2);
    if ((*piVar2 != 0) && (piVar2 = *(int **)(*piVar2 + 8), piVar2 != (int *)0x0)) {
                    
      longjmp(piVar2,1);
    }
    uVar3 = (undefined4)(thunk_FUN_1146c960(piVar1,0x40,0,"bad longjmp: "));
    thunk_FUN_1146c960(piVar1,0x40,uVar3,param_2);
  }
                    
  abort();
}


// Reference entry 1146c8f0; body size 82 bytes.
#line 1 "ENTRY_1146c8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1146c8f0(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = (int)(*(int *)(param_1 + 0x54));
  if (*(int *)(iVar2 + 0x1c) == 0) {
    iVar1 = (int)(iVar2 + 0x20);
    uVar4 = (uint)(0);
    uVar3 = (uint)(0);
    if (iVar1 != 0) {
      if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
        iVar5 = (int)(iVar1 - (int)param_2);
        do {
          if (0x3e < uVar4) break;
          uVar4 = (uint)(uVar4 + 1);
          param_2[iVar5] = (char)(*param_2);
          param_2 = (char *)(param_2 + 1);
        } while (*param_2 != '\0');
      }
      *(undefined1 *)(iVar1 + uVar4) = 0;
      uVar3 = (uint)(*(uint *)(iVar2 + 0x1c));
    }
    *(uint *)(iVar2 + 0x1c) = uVar3 | 1;
  }
  return;
}


// Reference entry 11472410; body size 296 bytes.
#line 1 "ENTRY_11472410"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11472410(int param_1,undefined4 param_2,double param_3)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  double dVar5;
  
  if ((_DAT_11880f98 < param_3) && (param_3 < _DAT_119caf38)) {
    param_3 = (double)(param_3 * DAT_11c05460);
  }
  dVar5 = (double)(floor(param_3 + DAT_118a1c40));
  if ((DAT_11a02ea0 < dVar5) || (dVar5 < _DAT_11c063c8)) {
                    
    thunk_FUN_1146c1b0(param_1,"gamma value");
  }
  bVar2 = (bool)(false);
  iVar4 = (int)((int)dVar5);
  if (param_1 == 0) {
    return;
  }
  uVar1 = (uint)(*(uint *)(param_1 + 0x78));
  if ((uVar1 & 0x40) != 0) {
    thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
    return;
  }
  *(uint *)(param_1 + 0x78) = uVar1 | 0x4000;
  if ((iVar4 == -1) || (iVar4 == -100000)) {
    iVar4 = (int)(220000);
    *(uint *)(param_1 + 0x78) = uVar1 | 0x5000;
  }
  else if ((iVar4 == -2) || (iVar4 == -50000)) {
    iVar4 = (int)(0x250ac);
  }
  else if (0x989298 < iVar4 - 1000U) {
                    
    thunk_FUN_1146c180(param_1,"output gamma out of expected range");
  }
  uVar3 = (undefined4)(thunk_FUN_11465be0(iVar4));
  switch(param_2) {
  case 0:
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xff7fffff;
    goto code_r0x1147254c;
  case 1:
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xff7fffff;
    iVar4 = (int)(100000);
    break;
  case 2:
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xff7fffff;
    bVar2 = (bool)(true);
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x2000;
    goto code_r0x11472553;
  case 3:
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x800000;
    break;
  default:
                    
    thunk_FUN_1146c180(param_1,"invalid alpha mode");
  }
  bVar2 = (bool)(true);
code_r0x1147254c:
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffdfff;
code_r0x11472553:
  if (*(int *)(param_1 + 0x2c4) == 0) {
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  }
  *(int *)(param_1 + 0x188) = iVar4;
  if (!bVar2) {
    return;
  }
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined2 *)(param_1 + 0x16c) = 0;
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfffffeff;
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined1 *)(param_1 + 0x15c) = 2;
  if (-1 < (char)*(uint *)(param_1 + 0x7c)) {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x80;
    return;
  }
                    
  thunk_FUN_1146c180(param_1,"conflicting calls to set alpha mode and background");
}


// Reference entry 11472a30; body size 106 bytes.
#line 1 "ENTRY_11472a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11472a30(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    switch(param_2) {
    case 2:
      thunk_FUN_1146cad0(param_1,"Can\'t discard critical data on CRC error");
    default:
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffff3ff;
      break;
    case 3:
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffff7ff | 0x400;
      break;
    case 4:
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0xc00;
      break;
    case 5:
      break;
    }
    switch(param_3) {
    default:
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffffcff;
      break;
    case 1:
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffffeff | 0x200;
      return;
    case 3:
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffffdff | 0x100;
      return;
    case 4:
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x300;
      return;
    case 5:
      break;
    }
  }
  return;
}


// Reference entry 11472bf0; body size 434 bytes.
#line 1 "ENTRY_11472bf0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11472bf0(int param_1,double param_2,double param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if ((0.0 < param_3) && (param_3 < _DAT_119caf38)) {
    param_3 = (double)(param_3 * DAT_11c05460);
  }
  dVar5 = (double)(floor(param_3 + DAT_118a1c40));
  if ((dVar5 <= DAT_11a02ea0) && (_DAT_11c063c8 <= dVar5)) {
    iVar4 = (int)((int)dVar5);
    if ((0.0 < param_2) && (param_2 < _DAT_119caf38)) {
      param_2 = (double)(param_2 * DAT_11c05460);
    }
    dVar5 = (double)(floor(param_2 + DAT_118a1c40));
    if ((dVar5 <= DAT_11a02ea0) && (_DAT_11c063c8 <= dVar5)) {
      iVar3 = (int)((int)dVar5);
      if (param_1 != 0) {
        uVar1 = (uint)(*(uint *)(param_1 + 0x78));
        if ((uVar1 & 0x40) == 0) {
          uVar2 = (uint)(uVar1 | 0x4000);
          *(uint *)(param_1 + 0x78) = uVar2;
          if ((iVar3 == -1) || (iVar3 == -100000)) {
            uVar2 = (uint)(uVar1 | 0x5000);
            iVar3 = (int)(220000);
            *(uint *)(param_1 + 0x78) = uVar2;
          }
          else if ((iVar3 == -2) || (iVar3 == -50000)) {
            iVar3 = (int)(0x250ac);
          }
          if ((iVar4 == -1) || (iVar4 == -100000)) {
            iVar4 = (int)(0xb18f);
            *(uint *)(param_1 + 0x78) = uVar2 | 0x1000;
          }
          else if ((iVar4 == -2) || (iVar4 == -50000)) {
            iVar4 = (int)(0x10175);
          }
          else if (iVar4 < 1) {
                    
            thunk_FUN_1146c180(param_1,"invalid file gamma in png_set_gamma");
          }
          if (iVar3 < 1) {
                    
            thunk_FUN_1146c180(param_1,"invalid screen gamma in png_set_gamma");
          }
          *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
          *(int *)(param_1 + 0x2c4) = iVar4;
          *(int *)(param_1 + 0x188) = iVar3;
          return;
        }
        thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
      }
      return;
    }
  }
                    
  thunk_FUN_1146c1b0(param_1,"gamma value");
}


// Reference entry 11472e10; body size 201 bytes.
#line 1 "ENTRY_11472e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11472e10(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar1 = (uint)(*(uint *)(param_1 + 0x78));
    if ((uVar1 & 0x40) != 0) {
      thunk_FUN_1146bd60(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    uVar2 = (uint)(uVar1 | 0x4000);
    *(uint *)(param_1 + 0x78) = uVar2;
    if ((param_2 == -1) || (param_2 == -100000)) {
      uVar2 = (uint)(uVar1 | 0x5000);
      param_2 = (int)(220000);
      *(uint *)(param_1 + 0x78) = uVar2;
    }
    else if ((param_2 == -2) || (param_2 == -50000)) {
      param_2 = (int)(0x250ac);
    }
    if ((param_3 == -1) || (param_3 == -100000)) {
      param_3 = (int)(0xb18f);
      *(uint *)(param_1 + 0x78) = uVar2 | 0x1000;
    }
    else if ((param_3 == -2) || (param_3 == -50000)) {
      param_3 = (int)(0x10175);
    }
    else if (param_3 < 1) {
                    
      thunk_FUN_1146c180(param_1,"invalid file gamma in png_set_gamma");
    }
    if (param_2 < 1) {
                    
      thunk_FUN_1146c180(param_1,"invalid screen gamma in png_set_gamma");
    }
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    *(int *)(param_1 + 0x188) = param_2;
    *(int *)(param_1 + 0x2c4) = param_3;
  }
  return;
}


// Reference entry 114739a0; body size 19 bytes.
#line 1 "ENTRY_114739a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114739a0(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x100000;
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}


// Reference entry 114739c0; body size 335 bytes.
#line 1 "ENTRY_114739c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_114739c0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (int)(thunk_FUN_11464230(param_1,param_4,"rgb to gray green coefficient"));
  uVar2 = (uint)(thunk_FUN_11464230(param_1,param_3,"rgb to gray red coefficient"));
  uVar3 = (uint)(uVar2);
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
      uVar3 = (uint)(thunk_FUN_1146bd60());
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar3);
    }
    if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
      uVar3 = (uint)(thunk_FUN_1146bd60());
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar3);
    }
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4000;
    if (param_2 == 1) {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x600000;
    }
    else if (param_2 == 2) {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x400000;
    }
    else {
      if (param_2 != 3) {
                    
        thunk_FUN_1146c180();
      }
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x200000;
    }
    uVar3 = (uint)(*(uint *)(param_1 + 0x7c));
    if (*(char *)(param_1 + 0x14f) == '\x03') {
      uVar3 = (uint)(uVar3 | 0x1000);
      *(uint *)(param_1 + 0x7c) = uVar3;
    }
    if ((-1 < (int)uVar2) && (-1 < iVar1)) {
      if ((int)(uVar2 + iVar1) < 0x186a1) {
        *(undefined1 *)(param_1 + 0x249) = 1;
        *(short *)(param_1 + 0x24a) = (short)((uVar2 * 0x8000) / 100000);
        *(short *)(param_1 + 0x24c) = (short)((uint)(iVar1 * 0x8000) / 100000);
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(iVar1 * -0x53b88000);
      }
      uVar3 = (uint)(thunk_FUN_1146bd90());
    }
    if ((*(short *)(param_1 + 0x24a) == 0) && (*(short *)(param_1 + 0x24c) == 0)) {
      *(undefined4 *)(param_1 + 0x24a) = 0x5b8a1b38;
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar3);
}


// Reference entry 11474490; body size 18 bytes.
#line 1 "ENTRY_11474490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11474490(int param_1)

{
  if (param_1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x14d));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(8);
}


// Reference entry 114744b0; body size 19 bytes.
#line 1 "ENTRY_114744b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114744b0(int param_1)

{
  if (param_1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x118));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffffff);
}


// Reference entry 114744d0; body size 13 bytes.
#line 1 "ENTRY_114744d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114744d0(int param_1)

{
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x6c));
}


// Reference entry 114745c0; body size 142 bytes.
#line 1 "ENTRY_114745c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114745c0(int param_1,undefined2 param_2,int param_3)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x74) & 0x8000) == 0) {
    if (*(char *)(param_1 + 0x14f) == '\0') {
      if (*(byte *)(param_1 + 0x150) < 8) {
        thunk_FUN_1146bd60(param_1,"png_set_filler is invalid for low bit depth gray output");
        return;
      }
      *(undefined1 *)(param_1 + 0x154) = 2;
    }
    else {
      if (*(char *)(param_1 + 0x14f) != '\x02') {
        thunk_FUN_1146bd60(param_1,"png_set_filler: inappropriate color type");
        return;
      }
      *(undefined1 *)(param_1 + 0x154) = 4;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x15a) = param_2;
  }
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x8000;
  if (param_3 != 1) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffff7f;
    return;
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x80;
  return;
}


// Reference entry 114747a0; body size 60 bytes.
#line 1 "ENTRY_114747a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114747a0(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  if (param_1 != 0) {
    if (((*(uint *)(param_1 + 0x74) & 0x8000) != 0) && ((*(byte *)(param_1 + 0x78) & 0x40) != 0)) {
      thunk_FUN_1146bd60(param_1,"info change after png_start_read_image or png_read_update_info");
      return;
    }
    *(undefined4 *)(param_1 + 0x6c) = param_2;
    *(undefined1 *)(param_1 + 0x70) = param_3;
    *(undefined1 *)(param_1 + 0x71) = param_4;
  }
  return;
}


// Reference entry 114747f0; body size 13 bytes.
#line 1 "ENTRY_114747f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114747f0(int param_1)

{
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x60));
}


// Reference entry 11474b50; body size 58 bytes.
#line 1 "ENTRY_11474b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11474b50(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = (uint)(*(uint *)(param_1 + 500));
      *(undefined4 *)(param_1 + 500) = 0;
      if (*(uint *)(param_1 + 0x1ec) < uVar1) {
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(uVar1 - *(uint *)(param_1 + 0x1ec));
      }
    }
    else {
      thunk_FUN_11476040(param_1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 11474ba0; body size 20 bytes.
#line 1 "ENTRY_11474ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11474ba0(undefined4 param_1)

{
  thunk_FUN_1146bd90(param_1,
                     "png_process_data_skip is not implemented in any current version of libpng");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11474bc0; body size 222 bytes.
#line 1 "ENTRY_11474bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11474bc0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    iVar1 = (int)(*(int *)(param_1 + 0x1fc));
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        thunk_FUN_114757b0(param_1,param_2);
        return;
      }
      if (iVar1 == 2) {
        thunk_FUN_11475590(param_1);
        return;
      }
      *(undefined4 *)(param_1 + 500) = 0;
      return;
    }
    uVar3 = (uint)((uint)*(byte *)(param_1 + 0x155));
    uVar2 = (uint)(*(uint *)(param_1 + 500));
    if (8 - uVar3 <= *(uint *)(param_1 + 500)) {
      uVar2 = (uint)(8 - uVar3);
    }
    thunk_FUN_11474d10(param_1,param_2 + 0x20 + uVar3,uVar2);
    *(char *)(param_1 + 0x155) = *(char *)(param_1 + 0x155) + (char)uVar2;
    iVar1 = (int)(thunk_FUN_11465e10(param_2 + 0x20,uVar3,uVar2));
    if (iVar1 != 0) {
      if ((uVar3 < 4) && (iVar1 = thunk_FUN_11465e10(param_2 + 0x20,uVar3,uVar2 - 4), iVar1 != 0)) {
                    
        thunk_FUN_1146c180(param_1,"Not a PNG file");
      }
                    
      thunk_FUN_1146c180(param_1,"PNG file corrupted by ASCII conversion");
    }
    if (7 < *(byte *)(param_1 + 0x155)) {
      *(undefined4 *)(param_1 + 0x1fc) = 1;
    }
  }
  return;
}


// Reference entry 11474dc0; body size 21 bytes.
#line 1 "ENTRY_11474dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11474dc0(int param_1)

{
  if (*(code **)(param_1 + 0x1d0) != (code *)0x0) {
                    
                    
    (**(code **)(param_1 + 0x1d0))();
    return;
  }
  return;
}


// Reference entry 11474de0; body size 21 bytes.
#line 1 "ENTRY_11474de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11474de0(int param_1)

{
  if (*(code **)(param_1 + 0x1c8) != (code *)0x0) {
                    
                    
    (**(code **)(param_1 + 0x1c8))();
    return;
  }
  return;
}


// Reference entry 11475f30; body size 155 bytes.
#line 1 "ENTRY_11475f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11475f30(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)((uint)*(byte *)(param_1 + 0x155));
  uVar2 = (uint)(*(uint *)(param_1 + 500));
  if (8 - uVar3 <= *(uint *)(param_1 + 500)) {
    uVar2 = (uint)(8 - uVar3);
  }
  thunk_FUN_11474d10(param_1,param_2 + 0x20 + uVar3,uVar2);
  *(char *)(param_1 + 0x155) = *(char *)(param_1 + 0x155) + (char)uVar2;
  iVar1 = (int)(thunk_FUN_11465e10(param_2 + 0x20,uVar3,uVar2));
  if (iVar1 != 0) {
    if (uVar3 < 4) {
      iVar1 = (int)(thunk_FUN_11465e10(param_2 + 0x20,uVar3,uVar2 - 4));
      if (iVar1 != 0) {
                    
        thunk_FUN_1146c180(param_1,"Not a PNG file");
      }
    }
                    
    thunk_FUN_1146c180(param_1,"PNG file corrupted by ASCII conversion");
  }
  if (7 < *(byte *)(param_1 + 0x155)) {
    *(undefined4 *)(param_1 + 0x1fc) = 1;
  }
  return;
}


// Reference entry 11476000; body size 47 bytes.
#line 1 "ENTRY_11476000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11476000(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x1e0) = param_2;
  *(undefined4 *)(param_1 + 0x1dc) = param_2;
  *(int *)(param_1 + 0x1f8) = param_3;
  *(int *)(param_1 + 500) = *(int *)(param_1 + 0x1ec) + param_3;
  return;
}


// Reference entry 11476460; body size 53 bytes.
#line 1 "ENTRY_11476460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476460(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  ushort uVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 8) != 0)) &&
     (param_3 != (undefined4 *)0x0)) {
    uVar1 = (ushort)(*(ushort *)(param_2 + 0x14));
    *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
    *param_4 = (uint)((uint)uVar1);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(8);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114764f0; body size 22 bytes.
#line 1 "ENTRY_114764f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_114764f0(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_2 + 0x18));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11476510; body size 250 bytes.
#line 1 "ENTRY_11476510"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11476510(int param_1,int param_2,double *param_3,double *param_4,double *param_5,double *param_6
            ,double *param_7,double *param_8,double *param_9,double *param_10)

{
  double dVar1;
  
  dVar1 = (double)(_DAT_11c05420);
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x72) & 2) != 0)) {
    if (param_3 != (double *)0x0) {
      *param_3 = (double)((double)*(int *)(param_2 + 0x44) * _DAT_11c05420);
    }
    if (param_4 != (double *)0x0) {
      *param_4 = (double)((double)*(int *)(param_2 + 0x48) * dVar1);
    }
    if (param_5 != (double *)0x0) {
      *param_5 = (double)((double)*(int *)(param_2 + 0x2c) * dVar1);
    }
    if (param_6 != (double *)0x0) {
      *param_6 = (double)((double)*(int *)(param_2 + 0x30) * dVar1);
    }
    if (param_7 != (double *)0x0) {
      *param_7 = (double)((double)*(int *)(param_2 + 0x34) * dVar1);
    }
    if (param_8 != (double *)0x0) {
      *param_8 = (double)((double)*(int *)(param_2 + 0x38) * dVar1);
    }
    if (param_9 != (double *)0x0) {
      *param_9 = (double)((double)*(int *)(param_2 + 0x3c) * dVar1);
    }
    if (param_10 != (double *)0x0) {
      *param_10 = (double)((double)*(int *)(param_2 + 0x40) * dVar1);
    }
    return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(4);
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476650; body size 275 bytes.
#line 1 "ENTRY_11476650"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11476650(int param_1,int param_2,double *param_3,double *param_4,double *param_5,double *param_6
            ,double *param_7,double *param_8,double *param_9,double *param_10,double *param_11)

{
  double dVar1;
  
  dVar1 = (double)(_DAT_11c05420);
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x72) & 2) != 0)) {
    if (param_3 != (double *)0x0) {
      *param_3 = (double)((double)*(int *)(param_2 + 0x4c) * _DAT_11c05420);
    }
    if (param_4 != (double *)0x0) {
      *param_4 = (double)((double)*(int *)(param_2 + 0x50) * dVar1);
    }
    if (param_5 != (double *)0x0) {
      *param_5 = (double)((double)*(int *)(param_2 + 0x54) * dVar1);
    }
    if (param_6 != (double *)0x0) {
      *param_6 = (double)((double)*(int *)(param_2 + 0x58) * dVar1);
    }
    if (param_7 != (double *)0x0) {
      *param_7 = (double)((double)*(int *)(param_2 + 0x5c) * dVar1);
    }
    if (param_8 != (double *)0x0) {
      *param_8 = (double)((double)*(int *)(param_2 + 0x60) * dVar1);
    }
    if (param_9 != (double *)0x0) {
      *param_9 = (double)((double)*(int *)(param_2 + 100) * dVar1);
    }
    if (param_10 != (double *)0x0) {
      *param_10 = (double)((double)*(int *)(param_2 + 0x68) * dVar1);
    }
    if (param_11 != (double *)0x0) {
      *param_11 = (double)((double)*(int *)(param_2 + 0x6c) * dVar1);
    }
    return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(4);
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114767b0; body size 155 bytes.
#line 1 "ENTRY_114767b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_114767b0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
            undefined4 *param_10,undefined4 *param_11)

{
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x72) & 2) != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0x4c));
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (undefined4)(*(undefined4 *)(param_2 + 0x50));
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = (undefined4)(*(undefined4 *)(param_2 + 0x54));
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = (undefined4)(*(undefined4 *)(param_2 + 0x58));
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = (undefined4)(*(undefined4 *)(param_2 + 0x5c));
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = (undefined4)(*(undefined4 *)(param_2 + 0x60));
    }
    if (param_9 != (undefined4 *)0x0) {
      *param_9 = (undefined4)(*(undefined4 *)(param_2 + 100));
    }
    if (param_10 != (undefined4 *)0x0) {
      *param_10 = (undefined4)(*(undefined4 *)(param_2 + 0x68));
    }
    if (param_11 != (undefined4 *)0x0) {
      *param_11 = (undefined4)(*(undefined4 *)(param_2 + 0x6c));
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476880; body size 134 bytes.
#line 1 "ENTRY_11476880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11476880(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
            undefined4 *param_10)

{
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x72) & 2) != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0x44));
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (undefined4)(*(undefined4 *)(param_2 + 0x48));
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = (undefined4)(*(undefined4 *)(param_2 + 0x2c));
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = (undefined4)(*(undefined4 *)(param_2 + 0x30));
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = (undefined4)(*(undefined4 *)(param_2 + 0x34));
    }
    if (param_8 != (undefined4 *)0x0) {
      *param_8 = (undefined4)(*(undefined4 *)(param_2 + 0x38));
    }
    if (param_9 != (undefined4 *)0x0) {
      *param_9 = (undefined4)(*(undefined4 *)(param_2 + 0x3c));
    }
    if (param_10 != (undefined4 *)0x0) {
      *param_10 = (undefined4)(*(undefined4 *)(param_2 + 0x40));
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476950; body size 18 bytes.
#line 1 "ENTRY_11476950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476950(int param_1)

{
  if (param_1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x280));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476970; body size 18 bytes.
#line 1 "ENTRY_11476970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476970(int param_1)

{
  if (param_1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x284));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476990; body size 22 bytes.
#line 1 "ENTRY_11476990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11476990(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_2 + 0x19));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 114769b0; body size 32 bytes.
#line 1 "ENTRY_114769b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114769b0(int param_1)

{
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  if ((*(uint *)(param_1 + 0x74) & 0x8000) != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x2a8));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xc0));
}


// Reference entry 114769e0; body size 22 bytes.
#line 1 "ENTRY_114769e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_114769e0(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_2 + 0x1a));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11476a00; body size 20 bytes.
#line 1 "ENTRY_11476a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476a00(undefined4 param_1)

{
  thunk_FUN_1146cad0(param_1,"png_get_eXIf does not work; use png_get_eXIf_1");
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476a20; body size 64 bytes.
#line 1 "ENTRY_11476a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476a20(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x10000) != 0)) &&
     (param_4 != (undefined4 *)0x0)) {
    *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0xcc));
    *param_4 = (undefined4)(*(undefined4 *)(param_2 + 0xd0));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x10000);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476a70; body size 22 bytes.
#line 1 "ENTRY_11476a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11476a70(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_2 + 0x1b));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11476a90; body size 59 bytes.
#line 1 "ENTRY_11476a90"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476a90(int param_1,int param_2,double *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x72) & 1) != 0)) &&
     (param_3 != (double *)0x0)) {
    *param_3 = (double)((double)*(int *)(param_2 + 0x28) * _DAT_11c05420);
    return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476ae0; body size 43 bytes.
#line 1 "ENTRY_11476ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476ae0(int param_1,int param_2,undefined4 *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 0x72) & 1) != 0)) &&
     (param_3 != (undefined4 *)0x0)) {
    *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0x28));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476b20; body size 46 bytes.
#line 1 "ENTRY_11476b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476b20(int param_1,int param_2,undefined4 *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) &&
     (param_3 != (undefined4 *)0x0)) {
    *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0xd8));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x40);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476c00; body size 22 bytes.
#line 1 "ENTRY_11476c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476c00(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_2 + 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476c20; body size 21 bytes.
#line 1 "ENTRY_11476c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476c20(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476c40; body size 22 bytes.
#line 1 "ENTRY_11476c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11476c40(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_2 + 0x1c));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11476c60; body size 11 bytes.
#line 1 "ENTRY_11476c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476c60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x11c));
}


// Reference entry 11476c70; body size 11 bytes.
#line 1 "ENTRY_11476c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476c70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x2ac));
}


// Reference entry 11476c80; body size 88 bytes.
#line 1 "ENTRY_11476c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11476c80(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) &&
     (((param_3 != (undefined4 *)0x0 && (param_4 != (undefined4 *)0x0)) && (param_5 != (uint *)0x0))
     )) {
    *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0xb4));
    *param_4 = (undefined4)(*(undefined4 *)(param_2 + 0xb8));
    *param_5 = (uint)((uint)*(byte *)(param_2 + 0xbc));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x100);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476cf0; body size 178 bytes.
#line 1 "ENTRY_11476cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11476cf0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            uint *param_6,uint *param_7,undefined4 *param_8,undefined4 *param_9)

{
  if ((((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x400) != 0)) &&
       ((param_3 != (undefined4 *)0x0 && (param_4 != (undefined4 *)0x0)))) &&
      ((param_5 != (undefined4 *)0x0 && ((param_6 != (uint *)0x0 && (param_7 != (uint *)0x0)))))) &&
     ((param_8 != (undefined4 *)0x0 && (param_9 != (undefined4 *)0x0)))) {
    *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0xdc));
    *param_4 = (undefined4)(*(undefined4 *)(param_2 + 0xe0));
    *param_5 = (undefined4)(*(undefined4 *)(param_2 + 0xe4));
    *param_6 = (uint)((uint)*(byte *)(param_2 + 0xf0));
    *param_7 = (uint)((uint)*(byte *)(param_2 + 0xf1));
    *param_8 = (undefined4)(*(undefined4 *)(param_2 + 0xe8));
    *param_9 = (undefined4)(*(undefined4 *)(param_2 + 0xec));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x400);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11476dd0; body size 87 bytes.
#line 1 "ENTRY_11476dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11476dd0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0xc0));
      uVar1 = (undefined4)(0x80);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (undefined4)(*(undefined4 *)(param_2 + 0xc4));
      uVar1 = (undefined4)(0x80);
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)((uint)*(byte *)(param_2 + 200));
      uVar1 = (undefined4)(0x80);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 11476e40; body size 226 bytes.
#line 1 "ENTRY_11476e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11476e40(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0);
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0xc0));
      uVar2 = (undefined4)(0x80);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (undefined4)(*(undefined4 *)(param_2 + 0xc4));
      uVar2 = (undefined4)(0x80);
    }
    if (param_5 != (uint *)0x0) {
      bVar1 = (byte)(*(byte *)(param_2 + 200));
      *param_5 = (uint)((uint)bVar1);
      if (bVar1 == 1) {
        if (param_3 != (undefined4 *)0x0) {
          uVar2 = (undefined4)(thunk_FUN_1148ae00());
          *param_3 = (undefined4)(uVar2);
        }
        if (param_4 != (undefined4 *)0x0) {
          uVar2 = (undefined4)(thunk_FUN_1148ae00());
          *param_4 = (undefined4)(uVar2);
        }
      }
      uVar2 = (undefined4)(0x80);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar2);
}


// Reference entry 11476f60; body size 26 bytes.
#line 1 "ENTRY_11476f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11476f60(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x144));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffffff);
}


// Reference entry 11476f80; body size 101 bytes.
#line 1 "ENTRY_11476f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 FUN_11476f80(int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) &&
     (iVar1 = *(int *)(param_2 + 0xc0), iVar1 != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)((float)((double)*(int *)(param_2 + 0xc4) +
                            (double)(&DAT_11880fb0)[-(*(int *)(param_2 + 0xc4) >> 0x1f)]) /
                    (float)((double)iVar1 + (double)(&DAT_11880fb0)[-(iVar1 >> 0x1f)])));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)0);
}


// Reference entry 11477000; body size 88 bytes.
#line 1 "ENTRY_11477000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11477000(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) &&
     (((uVar1 = *(uint *)(param_2 + 0xc0), uVar1 != 0 &&
       (uVar2 = *(uint *)(param_2 + 0xc4), uVar2 != 0)) &&
      ((uVar1 < 0x80000000 && (uVar2 < 0x80000000)))))) {
    iVar3 = (int)(thunk_FUN_11465990(&param_1,uVar2,100000,uVar1));
    if (iVar3 != 0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 11477070; body size 87 bytes.
#line 1 "ENTRY_11477070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11477070(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) ||
     ((*(char *)(param_2 + 200) != '\x01' ||
      (uVar2 = *(uint *)(param_2 + 0xc0), uVar2 != *(uint *)(param_2 + 0xc4))))) {
    uVar2 = (uint)(0);
  }
  else if (0x7fffffff < uVar2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  iVar1 = (int)(thunk_FUN_11465990(&param_1,uVar2,0x7f,5000));
  if (iVar1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 114770e0; body size 47 bytes.
#line 1 "ENTRY_114770e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_114770e0(int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) ||
     ((*(char *)(param_2 + 200) != '\x01' ||
      (iVar1 = *(int *)(param_2 + 0xc0), iVar1 != *(int *)(param_2 + 0xc4))))) {
    iVar1 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11477120; body size 18 bytes.
#line 1 "ENTRY_11477120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_11477120(int param_1)

{
  if (param_1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x248));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(0);
}


// Reference entry 11477160; body size 25 bytes.
#line 1 "ENTRY_11477160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11477160(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_2 + 0x114));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11477180; body size 45 bytes.
#line 1 "ENTRY_11477180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11477180(int param_1,int param_2,int *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 2) != 0)) &&
     (param_3 != (int *)0x0)) {
    *param_3 = (int)(param_2 + 0x94);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114771c0; body size 88 bytes.
#line 1 "ENTRY_114771c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114771c0(int param_1,int param_2,uint *param_3,double *param_4,double *param_5)

{
  char *pcVar1;
  double dVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x4000) != 0)) {
    pcVar1 = (char *)(*(char **)(param_2 + 0x10c));
    *param_3 = (uint)((uint)*(byte *)(param_2 + 0x108));
    dVar2 = (double)(atof(pcVar1));
    pcVar1 = (char *)(*(char **)(param_2 + 0x110));
    *param_4 = (double)(dVar2);
    dVar2 = (double)(atof(pcVar1));
    *param_5 = (double)(dVar2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4000);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11477230; body size 125 bytes.
#line 1 "ENTRY_11477230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_11477230(int param_1,int param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  double dVar3;
  char *pcVar4;
  
  if (((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x4000) != 0)) {
    pcVar4 = (char *)("sCAL width");
    pcVar1 = (char *)(*(char **)(param_2 + 0x10c));
    *param_3 = (uint)((uint)*(byte *)(param_2 + 0x108));
    dVar3 = (double)(atof(pcVar1));
    uVar2 = (undefined4)(thunk_FUN_11464230(param_1,dVar3,pcVar4));
    pcVar4 = (char *)("sCAL height");
    pcVar1 = (char *)(*(char **)(param_2 + 0x110));
    *param_4 = (undefined4)(uVar2);
    dVar3 = (double)(atof(pcVar1));
    uVar2 = (undefined4)(thunk_FUN_11464230(param_1,dVar3,pcVar4));
    *param_5 = (undefined4)(uVar2);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4000);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114772d0; body size 70 bytes.
#line 1 "ENTRY_114772d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4
FUN_114772d0(int param_1,int param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5)

{
  if (((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x4000) != 0)) {
    *param_3 = (uint)((uint)*(byte *)(param_2 + 0x108));
    *param_4 = (undefined4)(*(undefined4 *)(param_2 + 0x10c));
    *param_5 = (undefined4)(*(undefined4 *)(param_2 + 0x110));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x4000);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11477330; body size 41 bytes.
#line 1 "ENTRY_11477330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11477330(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x104));
    *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0x100));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11477370; body size 47 bytes.
#line 1 "ENTRY_11477370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11477370(int param_1,int param_2,uint *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) &&
     (param_3 != (uint *)0x0)) {
    *param_3 = (uint)((uint)*(ushort *)(param_2 + 0x70));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x800);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114773b0; body size 22 bytes.
#line 1 "ENTRY_114773b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_114773b0(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 + 0x20);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 114773d0; body size 48 bytes.
#line 1 "ENTRY_114773d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114773d0(int param_1,int param_2,int *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) &&
     (param_3 != (int *)0x0)) {
    *param_3 = (int)(param_2 + 0x8c);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x200);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11477410; body size 131 bytes.
#line 1 "ENTRY_11477410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11477410(int param_1,int param_2,undefined4 *param_3,uint *param_4,int *param_5)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 0x10) == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  if (*(char *)(param_2 + 0x19) == '\x03') {
    if (param_3 != (undefined4 *)0x0) {
      uVar1 = (undefined4)(0x10);
      *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0x9c));
    }
    if (param_5 != (int *)0x0) {
      *param_5 = (int)(param_2 + 0xa0);
    }
  }
  else {
    if (param_5 != (int *)0x0) {
      uVar1 = (undefined4)(0x10);
      *param_5 = (int)(param_2 + 0xa0);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (undefined4)(0);
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((uint)*(ushort *)(param_2 + 0x16));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x10);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 114774c0; body size 71 bytes.
#line 1 "ENTRY_114774c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_114774c0(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = *(int *)(param_2 + 0x80), 0 < iVar1)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0x88));
    }
    if (param_4 != (int *)0x0) {
      *param_4 = (int)(iVar1);
    }
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 11477520; body size 41 bytes.
#line 1 "ENTRY_11477520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11477520(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0xfc));
    *param_3 = (undefined4)(*(undefined4 *)(param_2 + 0xf8));
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11477560; body size 18 bytes.
#line 1 "ENTRY_11477560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11477560(int param_1)

{
  if (param_1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x234));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11477580; body size 18 bytes.
#line 1 "ENTRY_11477580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_11477580(int param_1)

{
  if (param_1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x27c));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114775a0; body size 18 bytes.
#line 1 "ENTRY_114775a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114775a0(int param_1)

{
  if (param_1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x278));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114775e0; body size 74 bytes.
#line 1 "ENTRY_114775e0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 FUN_114775e0(int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_2 + 8) & 0x100) == 0)) ||
     (*(char *)(param_2 + 0xbc) != '\x01')) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(*(int *)(param_2 + 0xb4));
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)(float)((double)iVar1 * _DAT_11c06b38));
}


// Reference entry 11477640; body size 78 bytes.
#line 1 "ENTRY_11477640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11477640(int param_1,int param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) &&
     (*(char *)(param_2 + 0xbc) == '\x01')) {
    func_0x1009197a(param_1,*(undefined4 *)(param_2 + 0xb4),500,0x7f);
    return;
  }
  func_0x1009197a(param_1,0,500,0x7f);
  return;
}


// Reference entry 114776b0; body size 43 bytes.
#line 1 "ENTRY_114776b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114776b0(int param_1,int param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) &&
     (*(char *)(param_2 + 0xbc) == '\x01')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_2 + 0xb4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114776f0; body size 43 bytes.
#line 1 "ENTRY_114776f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114776f0(int param_1,int param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) &&
     (*(char *)(param_2 + 0xbc) == '\0')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_2 + 0xb4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11477730; body size 78 bytes.
#line 1 "ENTRY_11477730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11477730(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) ||
     (*(char *)(param_2 + 200) != '\x01')) {
    uVar1 = (uint)(0);
  }
  else {
    uVar1 = (uint)(*(uint *)(param_2 + 0xc0));
    if (0x7fffffff < uVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
    }
  }
  iVar2 = (int)(thunk_FUN_11465990(&param_1,uVar1,0x7f,5000));
  if (iVar2 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 114777a0; body size 40 bytes.
#line 1 "ENTRY_114777a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114777a0(int param_1,int param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) &&
     (*(char *)(param_2 + 200) == '\x01')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_2 + 0xc0));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114777e0; body size 74 bytes.
#line 1 "ENTRY_114777e0"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 FUN_114777e0(int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_2 + 8) & 0x100) == 0)) ||
     (*(char *)(param_2 + 0xbc) != '\x01')) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)(*(int *)(param_2 + 0xb8));
  }
  return (/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)(float)((double)iVar1 * _DAT_11c06b38));
}


// Reference entry 11477840; body size 78 bytes.
#line 1 "ENTRY_11477840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11477840(int param_1,int param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) &&
     (*(char *)(param_2 + 0xbc) == '\x01')) {
    func_0x1009197a(param_1,*(undefined4 *)(param_2 + 0xb8),500,0x7f);
    return;
  }
  func_0x1009197a(param_1,0,500,0x7f);
  return;
}


// Reference entry 114778b0; body size 43 bytes.
#line 1 "ENTRY_114778b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114778b0(int param_1,int param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) &&
     (*(char *)(param_2 + 0xbc) == '\x01')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_2 + 0xb8));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 114778f0; body size 43 bytes.
#line 1 "ENTRY_114778f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114778f0(int param_1,int param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) &&
     (*(char *)(param_2 + 0xbc) == '\0')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_2 + 0xb8));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11477930; body size 78 bytes.
#line 1 "ENTRY_11477930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11477930(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) ||
     (*(char *)(param_2 + 200) != '\x01')) {
    uVar1 = (uint)(0);
  }
  else {
    uVar1 = (uint)(*(uint *)(param_2 + 0xc4));
    if (0x7fffffff < uVar1) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
    }
  }
  iVar2 = (int)(thunk_FUN_11465990(&param_1,uVar1,0x7f,5000));
  if (iVar2 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 114779a0; body size 40 bytes.
#line 1 "ENTRY_114779a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_114779a0(int param_1,int param_2)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) &&
     (*(char *)(param_2 + 200) == '\x01')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_2 + 0xc4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11477aa0; body size 57 bytes.
#line 1 "ENTRY_11477aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11477aa0(short *param_1,undefined1 *param_2)

{
  *param_1 = (short)(*(short *)(param_2 + 0x14) + 0x76c);
  *(char *)(param_1 + 1) = param_2[0x10] + '\x01';
  *(undefined1 *)((int)param_1 + 3) = param_2[0xc];
  *(undefined1 *)(param_1 + 2) = param_2[8];
  *(undefined1 *)((int)param_1 + 5) = param_2[4];
  *(undefined1 *)(param_1 + 3) = *param_2;
  return;
}


// Reference entry 11477b50; body size 177 bytes.
#line 1 "ENTRY_11477b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11477b50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11463d10(param_1,param_2,param_3,param_4,0,0,0));
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) | 0x200000;
    *(undefined4 *)(iVar1 + 0xc0) = 0x2000;
    *(undefined4 *)(iVar1 + 0xd4) = 1;
    *(undefined4 *)(iVar1 + 0xc4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xd0) = 8;
    *(undefined4 *)(iVar1 + 0xcc) = 0xf;
    *(undefined4 *)(iVar1 + 200) = 8;
    *(undefined4 *)(iVar1 + 0xe8) = 0;
    *(undefined4 *)(iVar1 + 0xd8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xe4) = 8;
    *(undefined4 *)(iVar1 + 0xe0) = 0xf;
    *(undefined4 *)(iVar1 + 0xdc) = 8;
    thunk_FUN_114892b0(iVar1,0,0,0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11477c30; body size 183 bytes.
#line 1 "ENTRY_11477c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_11477c30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11463d10(param_1,param_2,param_3,param_4,param_5,param_6,param_7));
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) | 0x200000;
    *(undefined4 *)(iVar1 + 0xc0) = 0x2000;
    *(undefined4 *)(iVar1 + 0xd4) = 1;
    *(undefined4 *)(iVar1 + 0xc4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xd0) = 8;
    *(undefined4 *)(iVar1 + 0xcc) = 0xf;
    *(undefined4 *)(iVar1 + 200) = 8;
    *(undefined4 *)(iVar1 + 0xe8) = 0;
    *(undefined4 *)(iVar1 + 0xd8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xe4) = 8;
    *(undefined4 *)(iVar1 + 0xe0) = 0xf;
    *(undefined4 *)(iVar1 + 0xdc) = 8;
    thunk_FUN_114892b0(iVar1,0,0,0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar1);
}


// Reference entry 11478f70; body size 19 bytes.
#line 1 "ENTRY_11478f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11478f70(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc4) = param_2;
  }
  return;
}


// Reference entry 11478f90; body size 19 bytes.
#line 1 "ENTRY_11478f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11478f90(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xd0) = param_2;
  }
  return;
}


// Reference entry 11478fb0; body size 42 bytes.
#line 1 "ENTRY_11478fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11478fb0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 8) {
      thunk_FUN_1146cad0(param_1,"Only compression method 8 is supported by PNG");
    }
    *(int *)(param_1 + 200) = param_2;
  }
  return;
}


// Reference entry 11478ff0; body size 23 bytes.
#line 1 "ENTRY_11478ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11478ff0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 1;
    *(undefined4 *)(param_1 + 0xd4) = param_2;
  }
  return;
}


// Reference entry 11479010; body size 77 bytes.
#line 1 "ENTRY_11479010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11479010(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (0xf < param_2) {
      thunk_FUN_1146cad0(param_1,"Only compression windows <= 32k supported by PNG");
      *(undefined4 *)(param_1 + 0xcc) = 0xf;
      return;
    }
    if (param_2 < 8) {
      thunk_FUN_1146cad0(param_1,"Only compression windows >= 256 supported by PNG");
      param_2 = (int)(8);
    }
    *(int *)(param_1 + 0xcc) = param_2;
  }
  return;
}


// Reference entry 11479260; body size 3 bytes.
#line 1 "ENTRY_11479260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11479260(void)

{
  return;
}


// Reference entry 11479270; body size 3 bytes.
#line 1 "ENTRY_11479270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11479270(void)

{
  return;
}


// Reference entry 11479280; body size 26 bytes.
#line 1 "ENTRY_11479280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11479280(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 < 0) {
      param_2 = (int)(0);
    }
    *(int *)(param_1 + 0x17c) = param_2;
  }
  return;
}


// Reference entry 114792a0; body size 19 bytes.
#line 1 "ENTRY_114792a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114792a0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xd8) = param_2;
  }
  return;
}


// Reference entry 114792c0; body size 19 bytes.
#line 1 "ENTRY_114792c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114792c0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xe4) = param_2;
  }
  return;
}


// Reference entry 114792e0; body size 42 bytes.
#line 1 "ENTRY_114792e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114792e0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 8) {
      thunk_FUN_1146cad0(param_1,"Only compression method 8 is supported by PNG");
    }
    *(int *)(param_1 + 0xdc) = param_2;
  }
  return;
}


// Reference entry 11479320; body size 19 bytes.
#line 1 "ENTRY_11479320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11479320(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xe8) = param_2;
  }
  return;
}


// Reference entry 11479340; body size 77 bytes.
#line 1 "ENTRY_11479340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11479340(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (0xf < param_2) {
      thunk_FUN_1146cad0(param_1,"Only compression windows <= 32k supported by PNG");
      *(undefined4 *)(param_1 + 0xe0) = 0xf;
      return;
    }
    if (param_2 < 8) {
      thunk_FUN_1146cad0(param_1,"Only compression windows >= 256 supported by PNG");
      param_2 = (int)(8);
    }
    *(int *)(param_1 + 0xe0) = param_2;
  }
  return;
}


// Reference entry 114793a0; body size 19 bytes.
#line 1 "ENTRY_114793a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114793a0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1c4) = param_2;
  }
  return;
}


// Reference entry 114793c0; body size 23 bytes.
#line 1 "ENTRY_114793c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114793c0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x100000;
    *(undefined4 *)(param_1 + 0x68) = param_2;
  }
  return;
}


// Reference entry 1147a650; body size 288 bytes.
#line 1 "ENTRY_1147a650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1147a650(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if ((*(uint *)(param_2 + 8) & 0x8000) == 0) {
    thunk_FUN_1146bd60(param_1,"no rows for png_write_image to write");
    return;
  }
  thunk_FUN_1147a0a0(param_1,param_2);
  if ((param_3 & 0x20) != 0) {
    thunk_FUN_114746d0(param_1);
  }
  if (((param_3 & 0x40) != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
    thunk_FUN_11474730(param_1,param_2 + 0x94);
  }
  if ((param_3 & 4) != 0) {
    thunk_FUN_114746e0(param_1);
  }
  if ((param_3 & 0x100) != 0) {
    thunk_FUN_11474780(param_1);
  }
  if ((param_3 & 0x1800) != 0) {
    if ((param_3 & 0x1000) == 0) {
      if ((param_3 & 0x800) == 0) goto LAB_1147a719;
      uVar1 = (undefined4)(0);
    }
    else {
      if ((param_3 & 0x800) != 0) {
        thunk_FUN_1146bd60(param_1,"PNG_TRANSFORM_STRIP_FILLER: BEFORE+AFTER not supported");
      }
      uVar1 = (undefined4)(1);
    }
    func_0x100144e3(param_1,0,uVar1);
  }
LAB_1147a719:
  if ((char)param_3 < '\0') {
    thunk_FUN_114745b0(param_1);
  }
  if ((param_3 & 0x200) != 0) {
    thunk_FUN_11474760(param_1);
  }
  if ((param_3 & 8) != 0) {
    thunk_FUN_11474710(param_1);
  }
  if ((param_3 & 0x400) != 0) {
    thunk_FUN_114746b0(param_1);
  }
  func_0x10064786(param_1,*(undefined4 *)(param_2 + 0x114));
  thunk_FUN_11479520(param_1,param_2);
  return;
}


// Reference entry 1147b330; body size 24 bytes.
#line 1 "ENTRY_1147b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1147b330(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    free(param_2);
  }
  return;
}


// Reference entry 1147b350; body size 16 bytes.
#line 1 "ENTRY_1147b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1147b350(int param_1)

{
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 600));
}


// Reference entry 1147b4f0; body size 46 bytes.
#line 1 "ENTRY_1147b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1147b4f0(int param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
  }
  if ((param_2 != 0) && (pvVar1 = malloc(param_2), pvVar1 != (void *)0x0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
  }
                    
  thunk_FUN_1146c180(param_1,"Out of Memory");
}


// Reference entry 1147c2b0; body size 19 bytes.
#line 1 "ENTRY_1147c2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1147c2b0(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (undefined1)((char)((uint)param_2 >> 8));
  param_1[1] = (undefined1)((char)param_2);
  return;
}


// Reference entry 1147db40; body size 50 bytes.
#line 1 "ENTRY_1147db40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1147db40(int param_1,int param_2,int param_3)

{
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    thunk_FUN_11489320(param_1,param_2,param_3);
    thunk_FUN_114621a0(param_1,param_2,param_3);
  }
  return;
}


// Reference entry 114809c0; body size 50 bytes.
#line 1 "ENTRY_114809c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114809c0(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (param_1 != 0) {
    sVar1 = (size_t)(fread(param_2,1,param_3,*(FILE **)(param_1 + 0x60)));
    if (sVar1 != param_3) {
                    
      thunk_FUN_1146c180(param_1,"Read Error");
    }
  }
  return;
}


// Reference entry 11480ce0; body size 25 bytes.
#line 1 "ENTRY_11480ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_11480ce0(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0);
  }
  *(uint *)(param_1 + 0x250) = param_2 & 5;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(param_2 & 5);
}


// Reference entry 11481530; body size 21 bytes.
#line 1 "ENTRY_11481530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11481530(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x144) = (0 < param_2) - 1;
  return;
}


// Reference entry 11481550; body size 19 bytes.
#line 1 "ENTRY_11481550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11481550(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x280) = param_2;
  }
  return;
}


// Reference entry 11481570; body size 19 bytes.
#line 1 "ENTRY_11481570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11481570(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x284) = param_2;
  }
  return;
}


// Reference entry 11481590; body size 136 bytes.
#line 1 "ENTRY_11481590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11481590(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((param_2 == 0) || (0x7fffffff < param_2)) {
                    
      thunk_FUN_1146c180(param_1,"invalid compression buffer size");
    }
    if ((*(uint *)(param_1 + 0x74) & 0x8000) != 0) {
      *(uint *)(param_1 + 0x2a8) = param_2;
      return;
    }
    if (*(int *)(param_1 + 0x80) == 0) {
      if (param_2 < 6) {
        thunk_FUN_1146cad0(param_1,"Compression buffer size cannot be reduced below 6");
        return;
      }
      if (*(uint *)(param_1 + 0xc0) != param_2) {
        thunk_FUN_1147c0d0(param_1,param_1 + 0xbc);
        *(uint *)(param_1 + 0xc0) = param_2;
        return;
      }
    }
    else {
      thunk_FUN_1146cad0(param_1,"Compression buffer size cannot be changed because it is in use");
    }
  }
  return;
}


// Reference entry 11481640; body size 18 bytes.
#line 1 "ENTRY_11481640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11481640(undefined4 param_1)

{
  thunk_FUN_1146cad0(param_1,"png_set_eXIf does not work; use png_set_eXIf_1");
  return;
}


// Reference entry 11481720; body size 70 bytes.
#line 1 "ENTRY_11481720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11481720(int param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_11464230(param_1,param_3,"png_set_gAMA"));
  if ((param_1 != 0) && (param_2 != 0)) {
    thunk_FUN_114631f0(param_1,param_2 + 0x28,uVar1);
    thunk_FUN_11463790(param_1,param_2);
  }
  return;
}


// Reference entry 11481890; body size 295 bytes.
#line 1 "ENTRY_11481890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11481890(int param_1,int param_2,char *param_3,int param_4,void *param_5,size_t param_6)

{
  char cVar1;
  int iVar2;
  void *_Dst;
  void *_Dst_00;
  char *pcVar3;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (char *)0x0)) && (param_5 != (void *)0x0))
  {
    if (param_4 != 0) {
      thunk_FUN_1146bd60(param_1,"Invalid iCCP compression method");
    }
    iVar2 = (int)(func_0x10088f28(param_1,param_2 + 0x28,param_3,param_6,param_5,
                            *(undefined1 *)(param_2 + 0x19)));
    thunk_FUN_11463790(param_1,param_2);
    if (iVar2 != 0) {
      *(ushort *)(param_2 + 0x72) = *(ushort *)(param_2 + 0x72) | 0x18;
      pcVar3 = (char *)(param_3);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      _Dst = (void *)((void *)thunk_FUN_1147b530(param_1,pcVar3 + (1 - (int)(param_3 + 1))));
      if (_Dst == (void *)0x0) {
        thunk_FUN_1146bdc0(param_1,"Insufficient memory to process iCCP chunk");
        return;
      }
      memcpy(_Dst,param_3,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
      _Dst_00 = (void *)((void *)thunk_FUN_1147b530(param_1,param_6));
      if (_Dst_00 == (void *)0x0) {
        thunk_FUN_1147b2f0(param_1,_Dst);
        thunk_FUN_1146bdc0(param_1,"Insufficient memory to process iCCP profile");
        return;
      }
      memcpy(_Dst_00,param_5,param_6);
      thunk_FUN_114642b0(param_1,param_2,0x10,0);
      *(uint *)(param_2 + 0xf4) = *(uint *)(param_2 + 0xf4) | 0x10;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
      *(size_t *)(param_2 + 0x7c) = param_6;
      *(void **)(param_2 + 0x74) = _Dst;
      *(void **)(param_2 + 0x78) = _Dst_00;
    }
  }
  return;
}


// Reference entry 11481a00; body size 25 bytes.
#line 1 "ENTRY_11481a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11481a00(int param_1,int param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & ~param_3;
  }
  return;
}


// Reference entry 11481fe0; body size 29 bytes.
#line 1 "ENTRY_11481fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11481fe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x238) = param_3;
    *(undefined4 *)(param_1 + 0x234) = param_2;
  }
  return;
}


// Reference entry 11482010; body size 70 bytes.
#line 1 "ENTRY_11482010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11482010(int param_1,int param_2,int param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(int *)(param_2 + 0x114) != 0) && (*(int *)(param_2 + 0x114) != param_3)) {
      thunk_FUN_114642b0(param_1,param_2,0x40,0);
    }
    *(int *)(param_2 + 0x114) = param_3;
    if (param_3 != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
    }
  }
  return;
}


// Reference entry 11482670; body size 57 bytes.
#line 1 "ENTRY_11482670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11482670(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = (int)(thunk_FUN_11463440(param_1,param_2 + 0x28,param_3));
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x72) = *(ushort *)(param_2 + 0x72) | 0x18;
    }
    thunk_FUN_11463790(param_1,param_2);
  }
  return;
}


// Reference entry 114828c0; body size 43 bytes.
#line 1 "ENTRY_114828c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_114828c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_11482900(param_1,param_2,param_3,param_4));
  if (iVar1 == 0) {
    return;
  }
                    
  thunk_FUN_1146c180(param_1,"Insufficient memory to store text");
}


// Reference entry 11482cc0; body size 103 bytes.
#line 1 "ENTRY_11482cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11482cc0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined1 uVar2;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (-1 < param_3)) && (param_3 < *(int *)(param_2 + 0xfc))
     ) {
    if ((param_4 & 0xb) == 0) {
      thunk_FUN_1146bd60(param_1,"invalid unknown chunk location");
      uVar1 = (uint)(param_4 & 4);
      param_4 = (uint)(1);
      if (uVar1 != 0) {
        param_4 = (uint)(8);
      }
    }
    uVar2 = (undefined1)(FUN_11480af0(param_1,param_4));
    *(undefined1 *)(*(int *)(param_2 + 0xf8) + 0x10 + param_3 * 0x14) = uVar2;
  }
  return;
}


// Reference entry 11482ea0; body size 29 bytes.
#line 1 "ENTRY_11482ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11482ea0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x278) = param_2;
    *(undefined4 *)(param_1 + 0x27c) = param_3;
  }
  return;
}


// Reference entry 11483720; body size 158 bytes.
#line 1 "ENTRY_11483720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_11483720(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = (uint)(param_1);
  bVar2 = (bool)(true);
  if ((*(uint *)(param_1 + 0x11c) & 0x20000000) == 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x800) != 0) {
      *(undefined4 *)(param_1 + 0x2ac) = 0x81;
      thunk_FUN_11480a00(param_1,&param_1,4);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(false);
    }
  }
  else {
    bVar2 = (bool)((*(uint *)(param_1 + 0x78) & 0x300) != 0x300);
  }
  *(undefined4 *)(param_1 + 0x2ac) = 0x81;
  thunk_FUN_11480a00(param_1,&param_1,4);
  if (!bVar2) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(false);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)((((param_1 & 0xff) * 0x100 + (param_1 >> 8 & 0xff)) * 0x100 + (param_1 >> 0x10 & 0xff)) *
         0x100 + (param_1 >> 0x18) != *(int *)(uVar1 + 0x138));
}


// Reference entry 11484380; body size 23 bytes.
#line 1 "ENTRY_11484380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

short FUN_11484380(byte *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ short)((ushort)*param_1 * 0x100 + (ushort)param_1[1]);
}


// Reference entry 11489230; body size 19 bytes.
#line 1 "ENTRY_11489230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11489230(int param_1)

{
  if (param_1 != 0) {
    fflush(*(FILE **)(param_1 + 0x60));
  }
  return;
}


// Reference entry 11489250; body size 50 bytes.
#line 1 "ENTRY_11489250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11489250(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (param_1 != 0) {
    sVar1 = (size_t)(fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x60)));
    if (sVar1 != param_3) {
                    
      thunk_FUN_1146c180(param_1,"Write Error");
    }
  }
  return;
}


// Reference entry 1148a120; body size 20 bytes.
#line 1 "ENTRY_1148a120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_1148a120(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 1148a51f; body size 13 bytes.
#line 1 "ENTRY_1148a51f"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1148a51f(void)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_1148c975());
  configure_narrow_argv(uVar1);
  return;
}


// Reference entry 1148ab66; body size 12 bytes.
#line 1 "ENTRY_1148ab66"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1148ab66(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_122fac08);
  return;
}


// Reference entry 1148abb8; body size 12 bytes.
#line 1 "ENTRY_1148abb8"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1148abb8(void)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_122fac08);
  return;
}


// Reference entry 1148b111; body size 7 bytes.
#line 1 "ENTRY_1148b111"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1148b111(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_type_info);
  return;
}


// Reference entry 1148c718; body size 3 bytes.
#line 1 "ENTRY_1148c718"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1148c718(void)

{
  return;
}


// Reference entry 1148c7f8; body size 3 bytes.
#line 1 "ENTRY_1148c7f8"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1148c7f8(void)

{
  return;
}


// Reference entry 1148cb26; body size 5 bytes.
#line 1 "ENTRY_1148cb26"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1148cb26(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 1148cb2b; body size 3 bytes.
#line 1 "ENTRY_1148cb2b"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1148cb2b(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 11809080; body size 88 bytes.
#line 1 "ENTRY_11809080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_11809080(void)

{
  thunk_FUN_10246290(&DAT_121a2488,*(undefined4 *)(DAT_121a2488 + 4));
  thunk_FUN_1148a50e(DAT_121a2488,0x18);
  thunk_FUN_10648750(&DAT_121a2480,*(undefined4 *)(DAT_121a2480 + 4));
  thunk_FUN_1148a50e(DAT_121a2480,0x18);
  thunk_FUN_105ba370();
  return;
}


// Reference entry 118090f0; body size 88 bytes.
#line 1 "ENTRY_118090f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_118090f0(void)

{
  thunk_FUN_10246290(&DAT_121a24b4,*(undefined4 *)(DAT_121a24b4 + 4));
  thunk_FUN_1148a50e(DAT_121a24b4,0x18);
  thunk_FUN_10648810(&DAT_121a24ac,*(undefined4 *)(DAT_121a24ac + 4));
  thunk_FUN_1148a50e(DAT_121a24ac,0x18);
  thunk_FUN_105ba370();
  return;
}

